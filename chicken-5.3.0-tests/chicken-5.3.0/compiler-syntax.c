/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.compiler-syntax -output-file compiler-syntax.c
   unit: compiler-syntax
   uses: eval extras compiler support library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[105];
static double C_possibly_force_alignment;


C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2778)
static void C_fcall f_2778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static C_word C_fcall f_2784(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_fcall f_2990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2995)
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3004)
static void C_fcall f_3004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3061)
static void C_fcall f_3061(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word *av) C_noret;
C_noret_decl(f_3089)
static void C_fcall f_3089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_fcall f_3095(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word *av) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word *av) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word *av) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word *av) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word *av) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static C_word C_fcall f_3175(C_word t0);
C_noret_decl(f_3185)
static void C_fcall f_3185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3242)
static C_word C_fcall f_3242(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3252)
static void C_fcall f_3252(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word *av) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word *av) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word *av) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word *av) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word *av) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word *av) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word *av) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word *av) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3513)
static void C_fcall f_3513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word *av) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word *av) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word *av) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_fcall f_3998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_4084)
static void C_fcall f_4084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static C_word C_fcall f_4126(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4206)
static void C_fcall f_4206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4305)
static C_word C_fcall f_4305(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4314)
static void C_fcall f_4314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4348)
static void C_fcall f_4348(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4396)
static void C_fcall f_4396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_fcall f_4452(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4520)
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4601)
static void C_fcall f_4601(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4635)
static C_word C_fcall f_4635(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word *av) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4703)
static void C_fcall f_4703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static void C_fcall f_4749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4786)
static C_word C_fcall f_4786(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_fcall f_4795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4829)
static void C_fcall f_4829(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4877)
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word *av) C_noret;
C_noret_decl(f_4925)
static void C_fcall f_4925(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4977)
static void C_fcall f_4977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2778)
static void C_ccall trf_2778(C_word c,C_word *av) C_noret;
static void C_ccall trf_2778(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2778(t0,t1);}

C_noret_decl(trf_2990)
static void C_ccall trf_2990(C_word c,C_word *av) C_noret;
static void C_ccall trf_2990(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2990(t0,t1,t2,t3);}

C_noret_decl(trf_2995)
static void C_ccall trf_2995(C_word c,C_word *av) C_noret;
static void C_ccall trf_2995(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2995(t0,t1,t2);}

C_noret_decl(trf_3004)
static void C_ccall trf_3004(C_word c,C_word *av) C_noret;
static void C_ccall trf_3004(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3004(t0,t1,t2);}

C_noret_decl(trf_3061)
static void C_ccall trf_3061(C_word c,C_word *av) C_noret;
static void C_ccall trf_3061(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3061(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3089)
static void C_ccall trf_3089(C_word c,C_word *av) C_noret;
static void C_ccall trf_3089(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3089(t0,t1);}

C_noret_decl(trf_3095)
static void C_ccall trf_3095(C_word c,C_word *av) C_noret;
static void C_ccall trf_3095(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3095(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3185)
static void C_ccall trf_3185(C_word c,C_word *av) C_noret;
static void C_ccall trf_3185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3185(t0,t1);}

C_noret_decl(trf_3204)
static void C_ccall trf_3204(C_word c,C_word *av) C_noret;
static void C_ccall trf_3204(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3204(t0,t1,t2);}

C_noret_decl(trf_3252)
static void C_ccall trf_3252(C_word c,C_word *av) C_noret;
static void C_ccall trf_3252(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3252(t0,t1,t2);}

C_noret_decl(trf_3513)
static void C_ccall trf_3513(C_word c,C_word *av) C_noret;
static void C_ccall trf_3513(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3513(t0,t1,t2);}

C_noret_decl(trf_3998)
static void C_ccall trf_3998(C_word c,C_word *av) C_noret;
static void C_ccall trf_3998(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3998(t0,t1,t2);}

C_noret_decl(trf_4084)
static void C_ccall trf_4084(C_word c,C_word *av) C_noret;
static void C_ccall trf_4084(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4084(t0,t1);}

C_noret_decl(trf_4206)
static void C_ccall trf_4206(C_word c,C_word *av) C_noret;
static void C_ccall trf_4206(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4206(t0,t1,t2);}

C_noret_decl(trf_4268)
static void C_ccall trf_4268(C_word c,C_word *av) C_noret;
static void C_ccall trf_4268(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4268(t0,t1,t2);}

C_noret_decl(trf_4314)
static void C_ccall trf_4314(C_word c,C_word *av) C_noret;
static void C_ccall trf_4314(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4314(t0,t1,t2);}

C_noret_decl(trf_4348)
static void C_ccall trf_4348(C_word c,C_word *av) C_noret;
static void C_ccall trf_4348(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4348(t0,t1,t2,t3);}

C_noret_decl(trf_4396)
static void C_ccall trf_4396(C_word c,C_word *av) C_noret;
static void C_ccall trf_4396(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4396(t0,t1,t2);}

C_noret_decl(trf_4452)
static void C_ccall trf_4452(C_word c,C_word *av) C_noret;
static void C_ccall trf_4452(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4452(t0,t1,t2,t3);}

C_noret_decl(trf_4520)
static void C_ccall trf_4520(C_word c,C_word *av) C_noret;
static void C_ccall trf_4520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4520(t0,t1,t2);}

C_noret_decl(trf_4601)
static void C_ccall trf_4601(C_word c,C_word *av) C_noret;
static void C_ccall trf_4601(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4601(t0,t1);}

C_noret_decl(trf_4703)
static void C_ccall trf_4703(C_word c,C_word *av) C_noret;
static void C_ccall trf_4703(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4703(t0,t1,t2);}

C_noret_decl(trf_4749)
static void C_ccall trf_4749(C_word c,C_word *av) C_noret;
static void C_ccall trf_4749(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4749(t0,t1,t2);}

C_noret_decl(trf_4795)
static void C_ccall trf_4795(C_word c,C_word *av) C_noret;
static void C_ccall trf_4795(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4795(t0,t1,t2);}

C_noret_decl(trf_4829)
static void C_ccall trf_4829(C_word c,C_word *av) C_noret;
static void C_ccall trf_4829(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4829(t0,t1,t2,t3);}

C_noret_decl(trf_4877)
static void C_ccall trf_4877(C_word c,C_word *av) C_noret;
static void C_ccall trf_4877(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4877(t0,t1,t2);}

C_noret_decl(trf_4925)
static void C_ccall trf_4925(C_word c,C_word *av) C_noret;
static void C_ccall trf_4925(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4925(t0,t1,t2,t3);}

C_noret_decl(trf_4977)
static void C_ccall trf_4977(C_word c,C_word *av) C_noret;
static void C_ccall trf_4977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4977(t0,t1,t2);}

/* k1683 */
static void C_ccall f_1685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1685,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1686 in k1683 */
static void C_ccall f_1688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1688,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1689 in k1686 in k1683 */
static void C_ccall f_1691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1691,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_1694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1694,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_1697(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_1697,c,av);}
a=C_alloc(27);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.compiler-syntax#length+ ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2778,tmp=(C_word)a,a+=2,tmp));
t5=C_set_block_item(lf[3] /* chicken.compiler.compiler-syntax#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t6=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2978,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[8] /* (set! chicken.compiler.compiler-syntax#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2990,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4564,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:70: r-c-s */
f_2990(t8,lf[103],t9,lf[104]);}

/* chicken.compiler.compiler-syntax#length+ in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_2778(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2778,2,t1,t2);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2784,tmp=(C_word)a,a+=2,tmp);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_2784(t2,t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* lp in chicken.compiler.compiler-syntax#length+ in k1695 in k1692 in k1689 in k1686 in k1683 */
static C_word C_fcall f_2784(C_word t1,C_word t2,C_word t3){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t4=C_u_i_cdr(t1);
t5=C_fixnum_plus(t3,C_fix(1));
if(C_truep(C_i_pairp(t4))){
t6=C_u_i_cdr(t4);
t7=C_i_cdr(t2);
t8=C_fixnum_plus(t5,C_fix(1));
t9=C_eqp(t6,t7);
if(C_truep(C_i_not(t9))){
t11=t6;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
return(C_SCHEME_FALSE);}}
else{
return(t5);}}
else{
return(t3);}}

/* ##sys#compiler-syntax-hook in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2982,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:51: chicken.base#alist-ref */
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=*((C_word*)lf[3]+1);
av2[4]=*((C_word*)lf[7]+1);
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k2980 in ##sys#compiler-syntax-hook in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2982,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:53: chicken.base#alist-update! */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=*((C_word*)lf[3]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2984 in k2980 in ##sys#compiler-syntax-hook in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_2986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2986,c,av);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.compiler-syntax#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_2990(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2990,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3029,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3037,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:57: ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* g550 in k3031 in k3027 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2995,3,t0,t1,t2);}
/* compiler-syntax.scm:62: ##sys#put! */
t3=*((C_word*)lf[9]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[10];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop549 in k3031 in k3027 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3004,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:60: g550 */
t4=((C_word*)t0)[3];
f_2995(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3012 in for-each-loop549 in k3031 in k3027 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3014,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3004(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3027 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3029,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3033,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:59: scheme#append */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[12]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3031 in k3027 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3033(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3033,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3004,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3004(t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3035 in chicken.compiler.compiler-syntax#r-c-s in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3037,c,av);}
/* compiler-syntax.scm:56: ##sys#ensure-transformer */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3044,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4032,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:100: r-c-s */
f_2990(t2,lf[98],t3,lf[99]);}

/* k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3047,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3968,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:142: r-c-s */
f_2990(t2,lf[86],t3,C_SCHEME_END_OF_LIST);}

/* k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3050(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_3050,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3884,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_cons(&a,2,lf[75],lf[76]);
t5=C_a_i_cons(&a,2,lf[77],lf[78]);
t6=C_a_i_cons(&a,2,lf[38],lf[79]);
t7=C_a_i_cons(&a,2,lf[80],lf[81]);
t8=C_a_i_cons(&a,2,lf[72],lf[26]);
t9=C_a_i_cons(&a,2,lf[71],lf[19]);
t10=C_a_i_list(&a,6,t4,t5,t6,t7,t8,t9);
/* compiler-syntax.scm:149: r-c-s */
f_2990(t2,lf[82],t3,t10);}

/* k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3053,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3857,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:166: r-c-s */
f_2990(t2,lf[69],t3,lf[70]);}

/* k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3056,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3844,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:178: r-c-s */
f_2990(t2,lf[66],t3,lf[67]);}

/* k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,8)))){
C_save_and_reclaim((void *)f_3059,c,av);}
a=C_alloc(7);
t2=C_mutate(&lf[15] /* (set! chicken.compiler.compiler-syntax#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3061,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3739,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:277: r-c-s */
f_2990(t3,lf[62],t4,lf[63]);}

/* chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3061(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3061,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3067,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:189: chicken.base#call/cc */
t9=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3067,c,av);}
a=C_alloc(10);
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:192: chicken.base#symbol-append */
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[43];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3089(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3089,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_stringp(C_u_i_car(((C_word*)t0)[2])))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_u_i_car(((C_word*)t0)[2]);
f_3092(2,av2);}}
else{
/* compiler-syntax.scm:197: scheme#cadar */
t3=*((C_word*)lf[41]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3092(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_3092,c,av);}
a=C_alloc(24);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_string_length(t1);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3167,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t4,a[6]=t6,a[7]=t9,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:210: r */
t11=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3095(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3095,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3099,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:200: chicken.compiler.support#get-line */
t6=*((C_word*)lf[28]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3099,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3112,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:202: chicken.base#open-output-string */
t4=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3100 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3102,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* compiler-syntax.scm:206: return */
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_3112,c,av);}
a=C_alloc(16);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[17]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3118,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3143,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3146,a[2]=t4,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:203: chicken.base#open-output-string */
t6=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* compiler-syntax.scm:202: ##sys#print */
t5=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3118,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:202: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(96);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3121,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3124,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3125 in k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3128 in k3125 in k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in ... */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3130,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:202: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[22];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3131 in k3128 in k3125 in k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in ... */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3133,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[20]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
C_apply(6,av2);}}

/* k3134 in k3131 in k3128 in k3125 in k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in ... */
static void C_ccall f_3136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3136,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:202: chicken.base#get-output-string */
t3=*((C_word*)lf[19]+1);{
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

/* k3137 in k3134 in k3131 in k3128 in k3125 in k3122 in k3119 in k3116 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in ... */
static void C_ccall f_3139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3139,c,av);}
/* compiler-syntax.scm:201: chicken.base#warning */
t2=*((C_word*)lf[18]+1);{
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

/* k3141 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3143,c,av);}
/* compiler-syntax.scm:202: ##sys#print */
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3144 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3146,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[17]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:203: ##sys#write-char-0 */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(40);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3150 in k3144 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3152,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:203: ##sys#print */
t3=*((C_word*)lf[21]+1);{
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

/* k3153 in k3150 in k3144 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3155,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:203: ##sys#print */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3156 in k3153 in k3150 in k3144 in k3110 in k3097 in fail in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_3158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3158,c,av);}
/* compiler-syntax.scm:203: chicken.base#get-output-string */
t2=*((C_word*)lf[19]+1);{
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

/* k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3167,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:211: r */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3170,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:212: r */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[38];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3173(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_3173,c,av);}
a=C_alloc(42);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[6],a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t7,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t3,a[13]=t15,a[14]=t9,a[15]=t5,a[16]=t1,tmp=(C_word)a,a+=17,tmp));
t17=((C_word*)t15)[1];
f_3252(t17,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);}

/* fetch in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static C_word C_fcall f_3175(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3185,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* compiler-syntax.scm:219: fail */
t2=((C_word*)t0)[3];
f_3095(t2,t1,C_SCHEME_TRUE,lf[29],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* endchunk in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3204,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,lf[24],t5,((C_word*)t0)[2]);
/* compiler-syntax.scm:225: push */
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
/* compiler-syntax.scm:225: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t6)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:228: ##sys#reverse-list->string */
t6=*((C_word*)lf[30]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3233 in endchunk in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3235,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
/* compiler-syntax.scm:225: push */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* compiler-syntax.scm:225: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* push in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static C_word C_fcall f_3242(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3252(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_3252,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[10])[1]))){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3262(2,av2);}}
else{
/* compiler-syntax.scm:234: fail */
t4=((C_word*)t0)[11];
f_3095(t4,t3,C_SCHEME_FALSE,lf[34],C_SCHEME_END_OF_LIST);}}
else{
t3=(
/* compiler-syntax.scm:240: fetch */
  f_3175(((C_word*)((C_word*)t0)[12])[1])
);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=(
/* compiler-syntax.scm:242: fetch */
  f_3175(((C_word*)((C_word*)t0)[12])[1])
);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3317,a[2]=t5,a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:243: endchunk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_3204(t7,t6,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
/* compiler-syntax.scm:275: loop */
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}}

/* k3260 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3262,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:235: endchunk */
t3=((C_word*)((C_word*)t0)[8])[1];
f_3204(t3,t2,((C_word*)t0)[9]);}

/* k3263 in k3260 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3265(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3265,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[31],((C_word*)t0)[4]);
t5=C_a_i_list(&a,4,lf[32],((C_word*)t0)[2],C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3288,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:238: scheme#reverse */
t7=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3286 in k3263 in k3260 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_3288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3288,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3317(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_3317,c,av);}
a=C_alloc(16);
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:245: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:246: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:247: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:250: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:254: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:258: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[35],((C_word*)t0)[5]);
t5=(
/* compiler-syntax.scm:260: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:274: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_3252(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3459,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:262: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3185(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,lf[24],C_make_character(126),((C_word*)t0)[5]);
t5=(
/* compiler-syntax.scm:265: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:274: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_3252(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,lf[24],C_make_character(10),((C_word*)t0)[5]);
/* compiler-syntax.scm:266: push */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
/* compiler-syntax.scm:266: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t6)
);
f_3323(2,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=(
/* compiler-syntax.scm:269: fetch */
  f_3175(((C_word*)((C_word*)t0)[9])[1])
);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3513,a[2]=((C_word*)t0)[9],a[3]=t8,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3513(t10,t3,t6);}
else{
/* compiler-syntax.scm:273: fail */
t6=((C_word*)t0)[11];
f_3095(t6,t3,C_SCHEME_TRUE,lf[37],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* k3321 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3323,c,av);}
/* compiler-syntax.scm:274: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3252(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k3338 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3340,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(
/* compiler-syntax.scm:245: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3252(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3355 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3357,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=(
/* compiler-syntax.scm:246: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3252(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3372 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3374,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[24],t1,((C_word*)t0)[2]);
t3=(
/* compiler-syntax.scm:247: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3252(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3393 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3395,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
/* compiler-syntax.scm:249: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3252(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3414 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3416,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
/* compiler-syntax.scm:253: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3252(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3435 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3437,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
/* compiler-syntax.scm:257: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:274: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3252(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3457 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_3459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3459,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:263: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3185(t3,t2);}

/* k3460 in k3457 in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_3462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3462,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,5,lf[36],lf[20],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=(
/* compiler-syntax.scm:264: push */
  f_3242(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
/* compiler-syntax.scm:274: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3252(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* skip in k3315 in loop in k3171 in k3168 in k3165 in k3090 in k3087 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_fcall f_3513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(29,0,2)))){
C_save_and_reclaim_args((void *)trf_3513,3,t0,t1,t2);}
a=C_alloc(29);
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=(
/* compiler-syntax.scm:271: fetch */
  f_3175(((C_word*)((C_word*)t0)[2])[1])
);
/* compiler-syntax.scm:271: skip */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_s_a_i_minus(&a,2,t3,C_fix(1)));
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3583 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3585,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:196: scheme#cadar */
t3=*((C_word*)lf[41]+1);{
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
t2=((C_word*)t0)[2];
f_3089(t2,C_SCHEME_FALSE);}}

/* k3590 in k3583 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3592,c,av);}
t2=((C_word*)t0)[2];
f_3089(t2,C_i_stringp(t1));}

/* k3594 in k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3596,c,av);}
/* compiler-syntax.scm:195: c */
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
av2[3]=C_i_caar(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3608 in a3066 in chicken.compiler.compiler-syntax#compile-format-string in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3610(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3610,c,av);}
a=C_alloc(18);
if(C_truep(C_i_memq(t1,*((C_word*)lf[16]+1)))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_stringp(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3089(t5,t3);}
else{
if(C_truep(C_i_listp(C_u_i_car(((C_word*)t0)[2])))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3585,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[9],a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:195: r */
t7=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t5=t4;
f_3089(t5,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3623,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:299: r-c-s */
f_2990(t2,lf[57],t3,lf[58]);}

/* k3619 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3621,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3623,c,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[45],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3642,a[2]=t9,a[3]=t10,a[4]=t8,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:306: r */
t12=t3;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[56];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3642,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:307: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3645,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:308: r */
t3=((C_word*)t0)[7];{
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

/* k3646 in k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3648,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:309: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3649 in k3646 in k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3651,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:310: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3652 in k3649 in k3646 in k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3654,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3657,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:311: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[53];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3657,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:312: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3658 in k3655 in k3652 in k3649 in k3646 in k3643 in k3640 in a3622 in k3616 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3660(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(138,c,1)))){
C_save_and_reclaim((void *)f_3660,c,av);}
a=C_alloc(138);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,lf[46],lf[47]);
t6=C_a_i_list(&a,3,lf[48],t1,t5);
t7=C_a_i_list(&a,2,lf[49],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[2]);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t12=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t14=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[2],t13);
t15=C_a_i_list(&a,4,lf[51],((C_word*)t0)[7],t12,t14);
t16=C_a_i_list(&a,4,((C_word*)t0)[8],t11,t15,((C_word*)t0)[2]);
t17=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[7],t10,t16);
t18=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[11],t4,t7,t17);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3739,c,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[59],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3758,a[2]=t10,a[3]=t8,a[4]=t9,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:284: r */
t12=t3;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[56];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3758,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:285: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3759 in k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3761,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:286: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3762 in k3759 in k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3764,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:287: r */
t3=((C_word*)t0)[8];{
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

/* k3765 in k3762 in k3759 in k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3767,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:288: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3768 in k3765 in k3762 in k3759 in k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3770,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:289: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3771 in k3768 in k3765 in k3762 in k3759 in k3756 in a3738 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3773(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(117,c,1)))){
C_save_and_reclaim((void *)f_3773,c,av);}
a=C_alloc(117);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[46],lf[60]);
t5=C_a_i_list(&a,3,lf[48],t1,t4);
t6=C_a_i_list(&a,2,lf[49],t5);
t7=C_a_i_list(&a,2,t1,t1);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t10=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t11=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t12=C_a_i_list(&a,3,lf[51],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[5],t10,t12);
t14=C_a_i_list(&a,4,((C_word*)t0)[6],t9,t13,((C_word*)t0)[7]);
t15=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[4],t8,t14);
t16=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t16;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[10],t3,t6,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* a3843 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3844,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3848,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:185: compile-format-string */
f_3061(t5,lf[64],lf[65],t2,C_i_cdr(t2),t3,t4);}

/* k3846 in a3843 in k3054 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3848,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3856 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3857,c,av);}
a=C_alloc(4);
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3867,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=C_u_i_cdr(t2);
/* compiler-syntax.scm:174: compile-format-string */
f_3061(t6,lf[68],t7,t2,C_u_i_cdr(t8),t3,t4);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3865 in a3856 in k3051 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3867,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3884,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3888,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:156: chicken.base#gensym */
t6=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3886 in a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_3888,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3891,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(t3,lf[73]);
t5=(C_truep(t4)?lf[74]:lf[17]);
/* compiler-syntax.scm:157: compile-format-string */
f_3061(t2,t5,t1,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k3889 in k3886 in a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3891,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:161: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3899 in k3889 in k3886 in a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3901,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:161: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[72];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3911 in k3923 in k3899 in k3889 in k3886 in a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_3913,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3923 in k3899 in k3889 in k3886 in a3883 in k3048 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3925,c,av);}
a=C_alloc(19);
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:163: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3968,c,av);}
a=C_alloc(5);
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[83],*((C_word*)lf[16]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3978,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:145: r */
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3976 in a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3978,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3985,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:146: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3983 in k3976 in a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3985(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3985,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3996,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3998,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3998(t8,t4,t3);}

/* k3994 in k3983 in k3976 in a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_3996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3996,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr1080 in k3983 in k3976 in a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_3998(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3998,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4016,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4014 in foldr1080 in k3983 in k3976 in a3967 in k3045 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4016,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4032,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:102: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4036,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:103: r */
t3=((C_word*)t0)[4];{
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

/* k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4039,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:104: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[97];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4042,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:105: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4045,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:106: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4048,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:107: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[95];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4051,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:108: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:109: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4057,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:110: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4060,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:111: r */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4063,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:112: r */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:113: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4069,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:114: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4072,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:115: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(20);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4084,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[91],*((C_word*)lf[92]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:118: length+ */
f_2778(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_4084(t4,C_SCHEME_FALSE);}}

/* k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_fcall f_4084(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_4084,2,t0,t1);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4520,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4520(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[10];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_4098(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(70,c,4)))){
C_save_and_reclaim((void *)f_4098,c,av);}
a=C_alloc(70);
t2=C_a_i_list(&a,1,lf[88]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t8=C_i_cadr(((C_word*)t0)[6]);
t9=C_a_i_list(&a,2,((C_word*)t0)[7],t8);
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=C_i_check_list_2(t1,lf[87]);
t15=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4450,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[4],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[5],a[17]=((C_word*)t0)[15],a[18]=t1,tmp=(C_word)a,a+=19,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4452,a[2]=t12,a[3]=t17,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_4452(t19,t15,t1,((C_word*)t0)[16]);}

/* k4119 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in ... */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_4121,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g922 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in ... */
static C_word C_fcall f_4126(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[87]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in ... */
static void C_ccall f_4141(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_4141,c,av);}
a=C_alloc(29);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t1,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4348,a[2]=t4,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4348(t10,t6,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in ... */
static void C_ccall f_4156(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_4156,c,av);}
a=C_alloc(33);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t1,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4314,a[2]=t6,a[3]=t4,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4314(t11,t7,((C_word*)t0)[16]);}

/* k4202 in k4264 in k4310 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in ... */
static void C_ccall f_4204(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,3)))){
C_save_and_reclaim((void *)f_4204,c,av);}
a=C_alloc(57);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,3,lf[50],((C_word*)t0)[7],C_fix(1));
t6=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[9],t4,t5);
t7=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,1,t7);
/* compiler-syntax.scm:120: ##sys#append */
t9=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[11];
av2[2]=((C_word*)t0)[12];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* map-loop1037 in k4264 in k4310 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in ... */
static void C_fcall f_4206(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4206,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4264 in k4310 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in ... */
static void C_ccall f_4266(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,3)))){
C_save_and_reclaim((void *)f_4266,c,av);}
a=C_alloc(73);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,4,lf[89],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=t7,a[6]=t8,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4206,a[2]=t11,a[3]=t15,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_4206(t17,t13,((C_word*)t0)[16]);}

/* map-loop1007 in k4310 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in ... */
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4268,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g983 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in ... */
static C_word C_fcall f_4305(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4310 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in ... */
static void C_ccall f_4312(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_4312,c,av);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t2,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4268,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4268(t11,t7,((C_word*)t0)[16]);}

/* map-loop977 in k4154 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in ... */
static void C_fcall f_4314(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4314,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(
/* compiler-syntax.scm:128: g983 */
  f_4305(C_a_i(&a,6),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop946 in k4139 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in ... */
static void C_fcall f_4348(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4348,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop916 in k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in ... */
static void C_fcall f_4396(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4396,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=(
/* compiler-syntax.scm:124: g922 */
  f_4126(C_a_i(&a,21),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4448 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in ... */
static void C_ccall f_4450(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_4450,c,av);}
a=C_alloc(44);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4121,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=t4,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4396,a[2]=t9,a[3]=t7,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4396(t14,t10,((C_word*)t0)[18]);}

/* map-loop885 in k4096 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in ... */
static void C_fcall f_4452(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4452,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop855 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4520,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:119: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4543 in map-loop855 in k4082 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in ... */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4545,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4520(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4560 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in a4031 in k3042 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4562,c,av);}
t2=((C_word*)t0)[2];
f_4084(t2,C_i_greaterp(t1,C_fix(2)));}

/* a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4564,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4568,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:72: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4568,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:73: r */
t3=((C_word*)t0)[4];{
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

/* k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4571,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:74: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[102];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4574,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:75: chicken.base#gensym */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4577,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:76: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4580,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:77: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[31];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4583,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:78: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4586,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:79: r */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4589,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:80: r */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4592,c,av);}
a=C_alloc(16);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4601,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[101],*((C_word*)lf[92]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:83: length+ */
f_2778(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_4601(t4,C_SCHEME_FALSE);}}

/* k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4601(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_4601,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4615,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4977,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4977(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4615(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_4615,c,av);}
a=C_alloc(31);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t1,lf[87]);
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4923,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4925,a[2]=t6,a[3]=t11,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4925(t13,t9,t1,((C_word*)t0)[12]);}

/* k4628 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4630,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g687 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static C_word C_fcall f_4635(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[100]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4650(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4650,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4829,a[2]=t4,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4829(t10,t6,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4665(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4665,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4795,a[2]=t6,a[3]=t4,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4795(t11,t7,((C_word*)t0)[11]);}

/* k4699 in k4745 in k4791 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_ccall f_4701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_4701,c,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:85: ##sys#append */
t8=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* map-loop802 in k4745 in k4791 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in ... */
static void C_fcall f_4703(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4703,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4745 in k4791 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_ccall f_4747(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4747,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4703,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4703(t11,t7,((C_word*)t0)[11]);}

/* map-loop772 in k4791 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 in ... */
static void C_fcall f_4749(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4749,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g748 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static C_word C_fcall f_4786(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4791 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_4793,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4749,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4749(t11,t7,((C_word*)t0)[11]);}

/* map-loop742 in k4663 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4795(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4795,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(
/* compiler-syntax.scm:91: g748 */
  f_4786(C_a_i(&a,6),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop711 in k4648 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4829(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4829,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop681 in k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4877,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=(
/* compiler-syntax.scm:87: g687 */
  f_4635(C_a_i(&a,21),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4921 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_4923(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_4923,c,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4630,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t3,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4877,a[2]=t8,a[3]=t6,a[4]=t11,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4877(t13,t9,((C_word*)t0)[12]);}

/* map-loop650 in k4613 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4925(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4925,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop620 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_fcall f_4977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4977,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:84: chicken.base#gensym */
t4=*((C_word*)lf[52]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5000 in map-loop620 in k4599 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5002,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4977(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5017 in k4590 in k4587 in k4584 in k4581 in k4578 in k4575 in k4572 in k4569 in k4566 in a4563 in k1695 in k1692 in k1689 in k1686 in k1683 */
static void C_ccall f_5019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5019,c,av);}
t2=((C_word*)t0)[2];
f_4601(t2,C_i_greaterp(t1,C_fix(2)));}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("compiler-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_compiler_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1003))){
C_save(t1);
C_rereclaim2(1003*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,105);
lf[0]=C_h_intern(&lf[0],15, C_text("compiler-syntax"));
lf[1]=C_h_intern(&lf[1],33, C_text("chicken.compiler.compiler-syntax#"));
lf[3]=C_h_intern(&lf[3],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[4]=C_h_intern(&lf[4],26, C_text("##sys#compiler-syntax-hook"));
lf[5]=C_h_intern(&lf[5],26, C_text("chicken.base#alist-update!"));
lf[6]=C_h_intern(&lf[6],22, C_text("chicken.base#alist-ref"));
lf[7]=C_h_intern(&lf[7],10, C_text("scheme#eq\077"));
lf[9]=C_h_intern(&lf[9],10, C_text("##sys#put!"));
lf[10]=C_h_intern(&lf[10],26, C_text("##compiler#compiler-syntax"));
lf[11]=C_h_intern(&lf[11],13, C_text("scheme#append"));
lf[12]=C_h_intern(&lf[12],31, C_text("##sys#default-macro-environment"));
lf[13]=C_h_intern(&lf[13],24, C_text("##sys#ensure-transformer"));
lf[14]=C_h_intern(&lf[14],20, C_text("##sys#er-transformer"));
lf[16]=C_h_intern(&lf[16],39, C_text("chicken.compiler.core#extended-bindings"));
lf[17]=C_h_intern(&lf[17],6, C_text("format"));
lf[18]=C_h_intern(&lf[18],20, C_text("chicken.base#warning"));
lf[19]=C_h_intern(&lf[19],30, C_text("chicken.base#get-output-string"));
lf[20]=C_h_intern(&lf[20],22, C_text("chicken.format#fprintf"));
lf[21]=C_h_intern(&lf[21],11, C_text("##sys#print"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024\047, in format string "));
lf[24]=C_h_intern(&lf[24],18, C_text("##sys#write-char-0"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[26]=C_h_intern(&lf[26],31, C_text("chicken.base#open-output-string"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[28]=C_h_intern(&lf[28],33, C_text("chicken.compiler.support#get-line"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000/too few arguments to formatted output procedure"));
lf[30]=C_h_intern(&lf[30],26, C_text("##sys#reverse-list->string"));
lf[31]=C_h_intern(&lf[31],5, C_text("quote"));
lf[32]=C_h_intern(&lf[32],23, C_text("##sys#check-output-port"));
lf[33]=C_h_intern(&lf[33],14, C_text("scheme#reverse"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\0000too many arguments to formatted output procedure"));
lf[35]=C_h_intern(&lf[35],18, C_text("##sys#flush-output"));
lf[36]=C_h_intern(&lf[36],11, C_text("##sys#apply"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000$illegal format-string character `~c\047"));
lf[38]=C_h_intern(&lf[38],14, C_text("number->string"));
lf[39]=C_h_intern(&lf[39],3, C_text("let"));
lf[40]=C_h_intern(&lf[40],3, C_text("out"));
lf[41]=C_h_intern(&lf[41],12, C_text("scheme#cadar"));
lf[42]=C_h_intern(&lf[42],26, C_text("chicken.base#symbol-append"));
lf[43]=C_h_intern(&lf[43],15, C_text("chicken.format#"));
lf[44]=C_h_intern(&lf[44],20, C_text("chicken.base#call/cc"));
lf[45]=C_h_intern(&lf[45],18, C_text("chicken.base#foldl"));
lf[46]=C_h_intern(&lf[46],12, C_text("##core#quote"));
lf[47]=C_h_intern(&lf[47],5, C_text("foldl"));
lf[48]=C_h_intern(&lf[48],16, C_text("##sys#check-list"));
lf[49]=C_h_intern(&lf[49],12, C_text("##core#check"));
lf[50]=C_h_intern(&lf[50],10, C_text("##sys#slot"));
lf[51]=C_h_intern(&lf[51],10, C_text("##core#app"));
lf[52]=C_h_intern(&lf[52],19, C_text("chicken.base#gensym"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005foldl"));
lf[54]=C_h_intern(&lf[54],5, C_text("pair\077"));
lf[55]=C_h_intern(&lf[55],2, C_text("if"));
lf[56]=C_h_intern(&lf[56],4, C_text("let\052"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001chicken.base#foldl\376\377\016"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001pair\077\376\001\000\000\014\001scheme#pair\077\376\377\016"));
lf[59]=C_h_intern(&lf[59],18, C_text("chicken.base#foldr"));
lf[60]=C_h_intern(&lf[60],5, C_text("foldr"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005foldr"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001chicken.base#foldr\376\377\016"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001pair\077\376\001\000\000\014\001scheme#pair\077\376\377\016"));
lf[64]=C_h_intern(&lf[64],6, C_text("printf"));
lf[65]=C_h_intern(&lf[65],21, C_text("##sys#standard-output"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\025\001chicken.format#printf\376\377\016"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001display\376\001\000\000\016\001scheme#display\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001write\376\001\000\000\014\001scheme#wri"
"te\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001number->string\376\001\000\000\025\001scheme#number->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001write"
"-char\376\001\000\000\021\001scheme#write-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001open-output-string\376\001\000\000\037\001chicken.base"
"#open-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001get-output-string\376\001\000\000\036\001chicken.base#get-outpu"
"t-string\376\377\016"));
lf[68]=C_h_intern(&lf[68],7, C_text("fprintf"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026\001chicken.format#fprintf\376\377\016"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001display\376\001\000\000\016\001scheme#display\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001write\376\001\000\000\014\001scheme#wri"
"te\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001number->string\376\001\000\000\025\001scheme#number->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001write"
"-char\376\001\000\000\021\001scheme#write-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001open-output-string\376\001\000\000\037\001chicken.base"
"#open-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001get-output-string\376\001\000\000\036\001chicken.base#get-outpu"
"t-string\376\377\016"));
lf[71]=C_h_intern(&lf[71],17, C_text("get-output-string"));
lf[72]=C_h_intern(&lf[72],18, C_text("open-output-string"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.format#sprintf"));
lf[74]=C_h_intern(&lf[74],7, C_text("sprintf"));
lf[75]=C_h_intern(&lf[75],7, C_text("display"));
lf[76]=C_h_intern(&lf[76],14, C_text("scheme#display"));
lf[77]=C_h_intern(&lf[77],5, C_text("write"));
lf[78]=C_h_intern(&lf[78],12, C_text("scheme#write"));
lf[79]=C_h_intern(&lf[79],21, C_text("scheme#number->string"));
lf[80]=C_h_intern(&lf[80],10, C_text("write-char"));
lf[81]=C_h_intern(&lf[81],17, C_text("scheme#write-char"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026\001chicken.format#sprintf\376\003\000\000\002\376\001\000\000\025\001chicken.format#format\376\377\016"));
lf[83]=C_h_intern(&lf[83],14, C_text("chicken.base#o"));
lf[84]=C_h_intern(&lf[84],6, C_text("lambda"));
lf[85]=C_h_intern(&lf[85],3, C_text("tmp"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\001chicken.base#o\376\377\016"));
lf[87]=C_h_intern(&lf[87],3, C_text("map"));
lf[88]=C_h_intern(&lf[88],16, C_text("##core#undefined"));
lf[89]=C_h_intern(&lf[89],13, C_text("##sys#setslot"));
lf[90]=C_h_intern(&lf[90],12, C_text("##sys#append"));
lf[91]=C_h_intern(&lf[91],10, C_text("scheme#map"));
lf[92]=C_h_intern(&lf[92],39, C_text("chicken.compiler.core#standard-bindings"));
lf[93]=C_h_intern(&lf[93],3, C_text("and"));
lf[94]=C_h_intern(&lf[94],5, C_text("begin"));
lf[95]=C_h_intern(&lf[95],4, C_text("set!"));
lf[96]=C_h_intern(&lf[96],4, C_text("cons"));
lf[97]=C_h_intern(&lf[97],8, C_text("map-loop"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001scheme#map\376\003\000\000\002\376\001\000\000\011\001##sys#map\376\377\016"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001pair\077\376\001\000\000\014\001scheme#pair\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001cons\376\001\000\000\013\001scheme#cons\376\377\016"));
lf[100]=C_h_intern(&lf[100],8, C_text("for-each"));
lf[101]=C_h_intern(&lf[101],15, C_text("scheme#for-each"));
lf[102]=C_h_intern(&lf[102],13, C_text("for-each-loop"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\017\001scheme#for-each\376\003\000\000\002\376\001\000\000\016\001##sys#for-each\376\377\016"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001pair\077\376\001\000\000\014\001scheme#pair\077\376\377\016"));
C_register_lf2(lf,105,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[171] = {
{C_text("f_1685:compiler_2dsyntax_2escm"),(void*)f_1685},
{C_text("f_1688:compiler_2dsyntax_2escm"),(void*)f_1688},
{C_text("f_1691:compiler_2dsyntax_2escm"),(void*)f_1691},
{C_text("f_1694:compiler_2dsyntax_2escm"),(void*)f_1694},
{C_text("f_1697:compiler_2dsyntax_2escm"),(void*)f_1697},
{C_text("f_2778:compiler_2dsyntax_2escm"),(void*)f_2778},
{C_text("f_2784:compiler_2dsyntax_2escm"),(void*)f_2784},
{C_text("f_2978:compiler_2dsyntax_2escm"),(void*)f_2978},
{C_text("f_2982:compiler_2dsyntax_2escm"),(void*)f_2982},
{C_text("f_2986:compiler_2dsyntax_2escm"),(void*)f_2986},
{C_text("f_2990:compiler_2dsyntax_2escm"),(void*)f_2990},
{C_text("f_2995:compiler_2dsyntax_2escm"),(void*)f_2995},
{C_text("f_3004:compiler_2dsyntax_2escm"),(void*)f_3004},
{C_text("f_3014:compiler_2dsyntax_2escm"),(void*)f_3014},
{C_text("f_3029:compiler_2dsyntax_2escm"),(void*)f_3029},
{C_text("f_3033:compiler_2dsyntax_2escm"),(void*)f_3033},
{C_text("f_3037:compiler_2dsyntax_2escm"),(void*)f_3037},
{C_text("f_3044:compiler_2dsyntax_2escm"),(void*)f_3044},
{C_text("f_3047:compiler_2dsyntax_2escm"),(void*)f_3047},
{C_text("f_3050:compiler_2dsyntax_2escm"),(void*)f_3050},
{C_text("f_3053:compiler_2dsyntax_2escm"),(void*)f_3053},
{C_text("f_3056:compiler_2dsyntax_2escm"),(void*)f_3056},
{C_text("f_3059:compiler_2dsyntax_2escm"),(void*)f_3059},
{C_text("f_3061:compiler_2dsyntax_2escm"),(void*)f_3061},
{C_text("f_3067:compiler_2dsyntax_2escm"),(void*)f_3067},
{C_text("f_3089:compiler_2dsyntax_2escm"),(void*)f_3089},
{C_text("f_3092:compiler_2dsyntax_2escm"),(void*)f_3092},
{C_text("f_3095:compiler_2dsyntax_2escm"),(void*)f_3095},
{C_text("f_3099:compiler_2dsyntax_2escm"),(void*)f_3099},
{C_text("f_3102:compiler_2dsyntax_2escm"),(void*)f_3102},
{C_text("f_3112:compiler_2dsyntax_2escm"),(void*)f_3112},
{C_text("f_3118:compiler_2dsyntax_2escm"),(void*)f_3118},
{C_text("f_3121:compiler_2dsyntax_2escm"),(void*)f_3121},
{C_text("f_3124:compiler_2dsyntax_2escm"),(void*)f_3124},
{C_text("f_3127:compiler_2dsyntax_2escm"),(void*)f_3127},
{C_text("f_3130:compiler_2dsyntax_2escm"),(void*)f_3130},
{C_text("f_3133:compiler_2dsyntax_2escm"),(void*)f_3133},
{C_text("f_3136:compiler_2dsyntax_2escm"),(void*)f_3136},
{C_text("f_3139:compiler_2dsyntax_2escm"),(void*)f_3139},
{C_text("f_3143:compiler_2dsyntax_2escm"),(void*)f_3143},
{C_text("f_3146:compiler_2dsyntax_2escm"),(void*)f_3146},
{C_text("f_3152:compiler_2dsyntax_2escm"),(void*)f_3152},
{C_text("f_3155:compiler_2dsyntax_2escm"),(void*)f_3155},
{C_text("f_3158:compiler_2dsyntax_2escm"),(void*)f_3158},
{C_text("f_3167:compiler_2dsyntax_2escm"),(void*)f_3167},
{C_text("f_3170:compiler_2dsyntax_2escm"),(void*)f_3170},
{C_text("f_3173:compiler_2dsyntax_2escm"),(void*)f_3173},
{C_text("f_3175:compiler_2dsyntax_2escm"),(void*)f_3175},
{C_text("f_3185:compiler_2dsyntax_2escm"),(void*)f_3185},
{C_text("f_3204:compiler_2dsyntax_2escm"),(void*)f_3204},
{C_text("f_3235:compiler_2dsyntax_2escm"),(void*)f_3235},
{C_text("f_3242:compiler_2dsyntax_2escm"),(void*)f_3242},
{C_text("f_3252:compiler_2dsyntax_2escm"),(void*)f_3252},
{C_text("f_3262:compiler_2dsyntax_2escm"),(void*)f_3262},
{C_text("f_3265:compiler_2dsyntax_2escm"),(void*)f_3265},
{C_text("f_3288:compiler_2dsyntax_2escm"),(void*)f_3288},
{C_text("f_3317:compiler_2dsyntax_2escm"),(void*)f_3317},
{C_text("f_3323:compiler_2dsyntax_2escm"),(void*)f_3323},
{C_text("f_3340:compiler_2dsyntax_2escm"),(void*)f_3340},
{C_text("f_3357:compiler_2dsyntax_2escm"),(void*)f_3357},
{C_text("f_3374:compiler_2dsyntax_2escm"),(void*)f_3374},
{C_text("f_3395:compiler_2dsyntax_2escm"),(void*)f_3395},
{C_text("f_3416:compiler_2dsyntax_2escm"),(void*)f_3416},
{C_text("f_3437:compiler_2dsyntax_2escm"),(void*)f_3437},
{C_text("f_3459:compiler_2dsyntax_2escm"),(void*)f_3459},
{C_text("f_3462:compiler_2dsyntax_2escm"),(void*)f_3462},
{C_text("f_3513:compiler_2dsyntax_2escm"),(void*)f_3513},
{C_text("f_3585:compiler_2dsyntax_2escm"),(void*)f_3585},
{C_text("f_3592:compiler_2dsyntax_2escm"),(void*)f_3592},
{C_text("f_3596:compiler_2dsyntax_2escm"),(void*)f_3596},
{C_text("f_3610:compiler_2dsyntax_2escm"),(void*)f_3610},
{C_text("f_3618:compiler_2dsyntax_2escm"),(void*)f_3618},
{C_text("f_3621:compiler_2dsyntax_2escm"),(void*)f_3621},
{C_text("f_3623:compiler_2dsyntax_2escm"),(void*)f_3623},
{C_text("f_3642:compiler_2dsyntax_2escm"),(void*)f_3642},
{C_text("f_3645:compiler_2dsyntax_2escm"),(void*)f_3645},
{C_text("f_3648:compiler_2dsyntax_2escm"),(void*)f_3648},
{C_text("f_3651:compiler_2dsyntax_2escm"),(void*)f_3651},
{C_text("f_3654:compiler_2dsyntax_2escm"),(void*)f_3654},
{C_text("f_3657:compiler_2dsyntax_2escm"),(void*)f_3657},
{C_text("f_3660:compiler_2dsyntax_2escm"),(void*)f_3660},
{C_text("f_3739:compiler_2dsyntax_2escm"),(void*)f_3739},
{C_text("f_3758:compiler_2dsyntax_2escm"),(void*)f_3758},
{C_text("f_3761:compiler_2dsyntax_2escm"),(void*)f_3761},
{C_text("f_3764:compiler_2dsyntax_2escm"),(void*)f_3764},
{C_text("f_3767:compiler_2dsyntax_2escm"),(void*)f_3767},
{C_text("f_3770:compiler_2dsyntax_2escm"),(void*)f_3770},
{C_text("f_3773:compiler_2dsyntax_2escm"),(void*)f_3773},
{C_text("f_3844:compiler_2dsyntax_2escm"),(void*)f_3844},
{C_text("f_3848:compiler_2dsyntax_2escm"),(void*)f_3848},
{C_text("f_3857:compiler_2dsyntax_2escm"),(void*)f_3857},
{C_text("f_3867:compiler_2dsyntax_2escm"),(void*)f_3867},
{C_text("f_3884:compiler_2dsyntax_2escm"),(void*)f_3884},
{C_text("f_3888:compiler_2dsyntax_2escm"),(void*)f_3888},
{C_text("f_3891:compiler_2dsyntax_2escm"),(void*)f_3891},
{C_text("f_3901:compiler_2dsyntax_2escm"),(void*)f_3901},
{C_text("f_3913:compiler_2dsyntax_2escm"),(void*)f_3913},
{C_text("f_3925:compiler_2dsyntax_2escm"),(void*)f_3925},
{C_text("f_3968:compiler_2dsyntax_2escm"),(void*)f_3968},
{C_text("f_3978:compiler_2dsyntax_2escm"),(void*)f_3978},
{C_text("f_3985:compiler_2dsyntax_2escm"),(void*)f_3985},
{C_text("f_3996:compiler_2dsyntax_2escm"),(void*)f_3996},
{C_text("f_3998:compiler_2dsyntax_2escm"),(void*)f_3998},
{C_text("f_4016:compiler_2dsyntax_2escm"),(void*)f_4016},
{C_text("f_4032:compiler_2dsyntax_2escm"),(void*)f_4032},
{C_text("f_4036:compiler_2dsyntax_2escm"),(void*)f_4036},
{C_text("f_4039:compiler_2dsyntax_2escm"),(void*)f_4039},
{C_text("f_4042:compiler_2dsyntax_2escm"),(void*)f_4042},
{C_text("f_4045:compiler_2dsyntax_2escm"),(void*)f_4045},
{C_text("f_4048:compiler_2dsyntax_2escm"),(void*)f_4048},
{C_text("f_4051:compiler_2dsyntax_2escm"),(void*)f_4051},
{C_text("f_4054:compiler_2dsyntax_2escm"),(void*)f_4054},
{C_text("f_4057:compiler_2dsyntax_2escm"),(void*)f_4057},
{C_text("f_4060:compiler_2dsyntax_2escm"),(void*)f_4060},
{C_text("f_4063:compiler_2dsyntax_2escm"),(void*)f_4063},
{C_text("f_4066:compiler_2dsyntax_2escm"),(void*)f_4066},
{C_text("f_4069:compiler_2dsyntax_2escm"),(void*)f_4069},
{C_text("f_4072:compiler_2dsyntax_2escm"),(void*)f_4072},
{C_text("f_4075:compiler_2dsyntax_2escm"),(void*)f_4075},
{C_text("f_4084:compiler_2dsyntax_2escm"),(void*)f_4084},
{C_text("f_4098:compiler_2dsyntax_2escm"),(void*)f_4098},
{C_text("f_4121:compiler_2dsyntax_2escm"),(void*)f_4121},
{C_text("f_4126:compiler_2dsyntax_2escm"),(void*)f_4126},
{C_text("f_4141:compiler_2dsyntax_2escm"),(void*)f_4141},
{C_text("f_4156:compiler_2dsyntax_2escm"),(void*)f_4156},
{C_text("f_4204:compiler_2dsyntax_2escm"),(void*)f_4204},
{C_text("f_4206:compiler_2dsyntax_2escm"),(void*)f_4206},
{C_text("f_4266:compiler_2dsyntax_2escm"),(void*)f_4266},
{C_text("f_4268:compiler_2dsyntax_2escm"),(void*)f_4268},
{C_text("f_4305:compiler_2dsyntax_2escm"),(void*)f_4305},
{C_text("f_4312:compiler_2dsyntax_2escm"),(void*)f_4312},
{C_text("f_4314:compiler_2dsyntax_2escm"),(void*)f_4314},
{C_text("f_4348:compiler_2dsyntax_2escm"),(void*)f_4348},
{C_text("f_4396:compiler_2dsyntax_2escm"),(void*)f_4396},
{C_text("f_4450:compiler_2dsyntax_2escm"),(void*)f_4450},
{C_text("f_4452:compiler_2dsyntax_2escm"),(void*)f_4452},
{C_text("f_4520:compiler_2dsyntax_2escm"),(void*)f_4520},
{C_text("f_4545:compiler_2dsyntax_2escm"),(void*)f_4545},
{C_text("f_4562:compiler_2dsyntax_2escm"),(void*)f_4562},
{C_text("f_4564:compiler_2dsyntax_2escm"),(void*)f_4564},
{C_text("f_4568:compiler_2dsyntax_2escm"),(void*)f_4568},
{C_text("f_4571:compiler_2dsyntax_2escm"),(void*)f_4571},
{C_text("f_4574:compiler_2dsyntax_2escm"),(void*)f_4574},
{C_text("f_4577:compiler_2dsyntax_2escm"),(void*)f_4577},
{C_text("f_4580:compiler_2dsyntax_2escm"),(void*)f_4580},
{C_text("f_4583:compiler_2dsyntax_2escm"),(void*)f_4583},
{C_text("f_4586:compiler_2dsyntax_2escm"),(void*)f_4586},
{C_text("f_4589:compiler_2dsyntax_2escm"),(void*)f_4589},
{C_text("f_4592:compiler_2dsyntax_2escm"),(void*)f_4592},
{C_text("f_4601:compiler_2dsyntax_2escm"),(void*)f_4601},
{C_text("f_4615:compiler_2dsyntax_2escm"),(void*)f_4615},
{C_text("f_4630:compiler_2dsyntax_2escm"),(void*)f_4630},
{C_text("f_4635:compiler_2dsyntax_2escm"),(void*)f_4635},
{C_text("f_4650:compiler_2dsyntax_2escm"),(void*)f_4650},
{C_text("f_4665:compiler_2dsyntax_2escm"),(void*)f_4665},
{C_text("f_4701:compiler_2dsyntax_2escm"),(void*)f_4701},
{C_text("f_4703:compiler_2dsyntax_2escm"),(void*)f_4703},
{C_text("f_4747:compiler_2dsyntax_2escm"),(void*)f_4747},
{C_text("f_4749:compiler_2dsyntax_2escm"),(void*)f_4749},
{C_text("f_4786:compiler_2dsyntax_2escm"),(void*)f_4786},
{C_text("f_4793:compiler_2dsyntax_2escm"),(void*)f_4793},
{C_text("f_4795:compiler_2dsyntax_2escm"),(void*)f_4795},
{C_text("f_4829:compiler_2dsyntax_2escm"),(void*)f_4829},
{C_text("f_4877:compiler_2dsyntax_2escm"),(void*)f_4877},
{C_text("f_4923:compiler_2dsyntax_2escm"),(void*)f_4923},
{C_text("f_4925:compiler_2dsyntax_2escm"),(void*)f_4925},
{C_text("f_4977:compiler_2dsyntax_2escm"),(void*)f_4977},
{C_text("f_5002:compiler_2dsyntax_2escm"),(void*)f_5002},
{C_text("f_5019:compiler_2dsyntax_2escm"),(void*)f_5019},
{C_text("toplevel:compiler_2dsyntax_2escm"),(void*)C_compiler_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.compiler.compiler-syntax#partition 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#span 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#take 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#drop 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#split-at 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#append-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#every 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#any 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#cons* 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#concatenate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#first 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#second 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#third 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fourth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fifth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#alist-cons 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#remove 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#unzip1 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#last 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-index 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-tabulate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#length+ 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find-tail 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#iota 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#make-list 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posq 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posv 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#r-c-s 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#define-internal-compiler-syntax 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#compile-format-string 
S|applied compiler syntax:
S|  chicken.format#sprintf		2
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		17
S|  chicken.base#foldr		4
o|eliminated procedure checks: 220 
o|specializations:
o|  1 (chicken.base#sub1 *)
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#= fixnum fixnum)
o|  2 (##sys#check-output-port * * *)
o|  1 (scheme#cddr (pair * pair))
o|  2 (scheme#>= fixnum fixnum)
o|  1 (chicken.base#add1 *)
o|  1 (scheme#eqv? * *)
o|  19 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 535 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.compiler.compiler-syntax#r-c-s ##sys#compiler-syntax-hook chicken.compiler.compiler-syntax#compiler-syntax-statistics chicken.compiler.compiler-syntax#posv chicken.compiler.compiler-syntax#posq chicken.compiler.compiler-syntax#make-list chicken.compiler.compiler-syntax#iota chicken.compiler.compiler-syntax#find-tail chicken.compiler.compiler-syntax#find chicken.compiler.compiler-syntax#length+ chicken.compiler.compiler-syntax#lset=/eq? chicken.compiler.compiler-syntax#lset<=/eq? chicken.compiler.compiler-syntax#list-tabulate chicken.compiler.compiler-syntax#lset-intersection/eq? chicken.compiler.compiler-syntax#lset-union/eq? chicken.compiler.compiler-syntax#lset-difference/eq? chicken.compiler.compiler-syntax#lset-adjoin/eq? chicken.compiler.compiler-syntax#list-index chicken.compiler.compiler-syntax#last chicken.compiler.compiler-syntax#unzip1 chicken.compiler.compiler-syntax#remove chicken.compiler.compiler-syntax#filter-map chicken.compiler.compiler-syntax#filter chicken.compiler.compiler-syntax#alist-cons chicken.compiler.compiler-syntax#delete-duplicates chicken.compiler.compiler-syntax#fifth chicken.compiler.compiler-syntax#fourth chicken.compiler.compiler-syntax#third chicken.compiler.compiler-syntax#second chicken.compiler.compiler-syntax#first chicken.compiler.compiler-syntax#delete chicken.compiler.compiler-syntax#concatenate chicken.compiler.compiler-syntax#cons* chicken.compiler.compiler-syntax#any chicken.compiler.compiler-syntax#every chicken.compiler.compiler-syntax#append-map chicken.compiler.compiler-syntax#split-at chicken.compiler.compiler-syntax#drop chicken.compiler.compiler-syntax#take chicken.compiler.compiler-syntax#span chicken.compiler.compiler-syntax#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#append-map 
o|inlining procedure: k2079 
o|inlining procedure: k2079 
o|inlining procedure: k2110 
o|inlining procedure: k2110 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#alist-cons 
o|inlining procedure: k2327 
o|inlining procedure: k2327 
o|inlining procedure: k2319 
o|inlining procedure: k2319 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|inlining procedure: k2718 
o|inlining procedure: k2718 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset=/eq? 
o|inlining procedure: k2786 
o|inlining procedure: k2809 
o|inlining procedure: k2809 
o|inlining procedure: k2786 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posv 
o|inlining procedure: k3006 
o|inlining procedure: k3006 
o|inlining procedure: k3069 
o|merged explicitly consed rest parameter: args1142 
o|inlining procedure: k3103 
o|inlining procedure: k3103 
o|substituted constant variable: a3114 
o|substituted constant variable: a3115 
o|substituted constant variable: a3148 
o|substituted constant variable: a3149 
o|inlining procedure: k3141 
o|inlining procedure: k3141 
o|inlining procedure: k3187 
o|consed rest parameter at call site: "(compiler-syntax.scm:219) fail1139" 3 
o|inlining procedure: k3187 
o|inlining procedure: k3206 
o|inlining procedure: k3216 
o|inlining procedure: k3216 
o|substituted constant variable: a3236 
o|inlining procedure: k3206 
o|inlining procedure: k3081 
o|inlining procedure: k3254 
o|consed rest parameter at call site: "(compiler-syntax.scm:234) fail1139" 3 
o|inlining procedure: k3254 
o|inlining procedure: k3321 
o|inlining procedure: k3321 
o|inlining procedure: k3358 
o|inlining procedure: k3358 
o|inlining procedure: k3396 
o|inlining procedure: k3396 
o|inlining procedure: k3438 
o|inlining procedure: k3438 
o|inlining procedure: k3470 
o|inlining procedure: k3470 
o|inlining procedure: k3499 
o|inlining procedure: k3515 
o|inlining procedure: k3515 
o|inlining procedure: k3499 
o|consed rest parameter at call site: "(compiler-syntax.scm:273) fail1139" 3 
o|substituted constant variable: a3537 
o|substituted constant variable: a3539 
o|substituted constant variable: a3541 
o|substituted constant variable: a3543 
o|substituted constant variable: a3545 
o|substituted constant variable: a3547 
o|substituted constant variable: a3549 
o|substituted constant variable: a3551 
o|substituted constant variable: a3553 
o|substituted constant variable: a3555 
o|substituted constant variable: a3557 
o|inlining procedure: k3081 
o|inlining procedure: k3574 
o|inlining procedure: k3574 
o|inlining procedure: k3069 
o|substituted constant variable: a3615 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|inlining procedure: k3849 
o|inlining procedure: k3849 
o|inlining procedure: k3859 
o|inlining procedure: k3859 
o|substituted constant variable: a3882 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|inlining procedure: k3970 
o|inlining procedure: k4000 
o|inlining procedure: k4000 
o|inlining procedure: k3970 
o|inlining procedure: k4079 
o|inlining procedure: k4208 
o|contracted procedure: "(compiler-syntax.scm:138) g10431052" 
o|inlining procedure: k4208 
o|inlining procedure: k4270 
o|contracted procedure: "(compiler-syntax.scm:132) g10131022" 
o|inlining procedure: k4270 
o|inlining procedure: k4316 
o|inlining procedure: k4316 
o|inlining procedure: k4350 
o|inlining procedure: k4350 
o|inlining procedure: k4398 
o|inlining procedure: k4398 
o|inlining procedure: k4454 
o|inlining procedure: k4454 
o|inlining procedure: k4522 
o|contracted procedure: "(compiler-syntax.scm:119) g861870" 
o|inlining procedure: k4522 
o|inlining procedure: k4079 
o|inlining procedure: k4596 
o|inlining procedure: k4705 
o|contracted procedure: "(compiler-syntax.scm:97) g808817" 
o|inlining procedure: k4705 
o|inlining procedure: k4751 
o|contracted procedure: "(compiler-syntax.scm:94) g778787" 
o|inlining procedure: k4751 
o|inlining procedure: k4797 
o|inlining procedure: k4797 
o|inlining procedure: k4831 
o|inlining procedure: k4831 
o|inlining procedure: k4879 
o|inlining procedure: k4879 
o|inlining procedure: k4927 
o|inlining procedure: k4927 
o|inlining procedure: k4979 
o|contracted procedure: "(compiler-syntax.scm:84) g626635" 
o|inlining procedure: k4979 
o|inlining procedure: k4596 
o|replaced variables: 622 
o|removed binding forms: 181 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-tabulate 
o|substituted constant variable: r28105032 
o|substituted constant variable: r31425041 
o|substituted constant variable: r31425041 
o|converted assignments to bindings: (fail1139) 
o|substituted constant variable: r30825076 
o|substituted constant variable: r35755078 
o|substituted constant variable: r30705079 
o|simplifications: ((let . 1)) 
o|replaced variables: 23 
o|removed binding forms: 538 
o|removed call to pure procedure with unused result: "(compiler-syntax.scm:119) ##sys#slot" 
o|removed call to pure procedure with unused result: "(compiler-syntax.scm:84) ##sys#slot" 
o|removed binding forms: 33 
o|contracted procedure: k4547 
o|contracted procedure: k5004 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|simplifications: ((let . 4) (if . 11) (##core#call . 320)) 
o|  call simplifications:
o|    scheme#cddr	2
o|    scheme#>	2
o|    ##sys#check-list	4
o|    ##sys#setslot	14
o|    chicken.fixnum#fx>
o|    scheme#list	5
o|    chicken.fixnum#fx=	2
o|    scheme#cadr	5
o|    scheme#caddr	2
o|    scheme#cadddr	2
o|    chicken.fixnum#fx>=	2
o|    scheme#memq	6
o|    scheme#list?
o|    scheme#caar
o|    scheme#string?	3
o|    scheme#string-length
o|    scheme#>=
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    ##sys#cons	24
o|    scheme#length	6
o|    ##sys#list	95
o|    scheme#null?	2
o|    scheme#string-ref
o|    ##sys#apply
o|    scheme#car	5
o|    scheme#cons	31
o|    ##sys#slot	52
o|    scheme#pair?	23
o|    scheme#cdr	4
o|    chicken.fixnum#fx+	3
o|    scheme#eq?	15
o|    scheme#not
o|contracted procedure: k2789 
o|contracted procedure: k2793 
o|contracted procedure: k2799 
o|contracted procedure: k2803 
o|contracted procedure: k2806 
o|contracted procedure: k2819 
o|contracted procedure: k2812 
o|contracted procedure: k2992 
o|contracted procedure: k3009 
o|contracted procedure: k3019 
o|contracted procedure: k3023 
o|contracted procedure: k3039 
o|contracted procedure: k3612 
o|contracted procedure: k3072 
o|contracted procedure: k3078 
o|contracted procedure: k3604 
o|contracted procedure: k3084 
o|contracted procedure: k3162 
o|contracted procedure: k3177 
o|contracted procedure: k3181 
o|contracted procedure: k3190 
o|contracted procedure: k3196 
o|contracted procedure: k3200 
o|contracted procedure: k3209 
o|contracted procedure: k3238 
o|contracted procedure: k3219 
o|contracted procedure: k3226 
o|inlining procedure: k3216 
o|inlining procedure: k3216 
o|contracted procedure: k3245 
o|contracted procedure: k3257 
o|contracted procedure: k3294 
o|contracted procedure: k3274 
o|contracted procedure: k3290 
o|contracted procedure: k3282 
o|contracted procedure: k3278 
o|contracted procedure: k3270 
o|contracted procedure: k3297 
o|contracted procedure: k3309 
o|contracted procedure: k3318 
o|contracted procedure: k3327 
o|contracted procedure: k3334 
o|contracted procedure: k3344 
o|contracted procedure: k3351 
o|contracted procedure: k3361 
o|contracted procedure: k3368 
o|contracted procedure: k3378 
o|contracted procedure: k3389 
o|contracted procedure: k3385 
o|contracted procedure: k3399 
o|contracted procedure: k3410 
o|contracted procedure: k3406 
o|contracted procedure: k3420 
o|contracted procedure: k3431 
o|contracted procedure: k3427 
o|contracted procedure: k3441 
o|contracted procedure: k3448 
o|contracted procedure: k3454 
o|contracted procedure: k3467 
o|contracted procedure: k3473 
o|contracted procedure: k3480 
o|contracted procedure: k3486 
o|contracted procedure: k3489 
o|contracted procedure: k3496 
o|contracted procedure: k3502 
o|contracted procedure: k3518 
o|contracted procedure: k3562 
o|contracted procedure: k3565 
o|contracted procedure: k3577 
o|contracted procedure: k3598 
o|contracted procedure: k3735 
o|contracted procedure: k3728 
o|contracted procedure: k3628 
o|contracted procedure: k3631 
o|contracted procedure: k3634 
o|contracted procedure: k3637 
o|contracted procedure: k3721 
o|contracted procedure: k3725 
o|contracted procedure: k3665 
o|contracted procedure: k3717 
o|contracted procedure: k3713 
o|contracted procedure: k3669 
o|contracted procedure: k3705 
o|contracted procedure: k3709 
o|contracted procedure: k3677 
o|contracted procedure: k3685 
o|contracted procedure: k3693 
o|contracted procedure: k3701 
o|contracted procedure: k3697 
o|contracted procedure: k3689 
o|contracted procedure: k3681 
o|contracted procedure: k3673 
o|contracted procedure: k3840 
o|contracted procedure: k3833 
o|contracted procedure: k3744 
o|contracted procedure: k3747 
o|contracted procedure: k3750 
o|contracted procedure: k3753 
o|contracted procedure: k3830 
o|contracted procedure: k3778 
o|contracted procedure: k3826 
o|contracted procedure: k3822 
o|contracted procedure: k3782 
o|contracted procedure: k3818 
o|contracted procedure: k3790 
o|contracted procedure: k3798 
o|contracted procedure: k3806 
o|contracted procedure: k3814 
o|contracted procedure: k3810 
o|contracted procedure: k3802 
o|contracted procedure: k3794 
o|contracted procedure: k3786 
o|contracted procedure: k3853 
o|contracted procedure: k3879 
o|contracted procedure: k3862 
o|contracted procedure: k3872 
o|contracted procedure: k3919 
o|contracted procedure: k3915 
o|contracted procedure: k3903 
o|contracted procedure: k3907 
o|contracted procedure: k3936 
o|contracted procedure: k3932 
o|contracted procedure: k3927 
o|contracted procedure: k3944 
o|contracted procedure: k3948 
o|contracted procedure: k3952 
o|contracted procedure: k3956 
o|contracted procedure: k3960 
o|contracted procedure: k3964 
o|contracted procedure: k3940 
o|contracted procedure: k4028 
o|contracted procedure: k4021 
o|contracted procedure: k3973 
o|contracted procedure: k3987 
o|contracted procedure: k3991 
o|contracted procedure: k4003 
o|contracted procedure: k4010 
o|contracted procedure: k4018 
o|contracted procedure: k4076 
o|contracted procedure: k4085 
o|contracted procedure: k4093 
o|contracted procedure: k4512 
o|contracted procedure: k4516 
o|contracted procedure: k4508 
o|contracted procedure: k4504 
o|contracted procedure: k4103 
o|contracted procedure: k4430 
o|contracted procedure: k4500 
o|contracted procedure: k4438 
o|contracted procedure: k4442 
o|contracted procedure: k4445 
o|contracted procedure: k4434 
o|contracted procedure: k4115 
o|contracted procedure: k4111 
o|contracted procedure: k4107 
o|contracted procedure: k4123 
o|contracted procedure: k4136 
o|contracted procedure: k4132 
o|contracted procedure: k4151 
o|contracted procedure: k4302 
o|contracted procedure: k4162 
o|contracted procedure: k4256 
o|contracted procedure: k4248 
o|contracted procedure: k4252 
o|contracted procedure: k4244 
o|contracted procedure: k4240 
o|contracted procedure: k4174 
o|contracted procedure: k4178 
o|contracted procedure: k4182 
o|contracted procedure: k4194 
o|contracted procedure: k4190 
o|contracted procedure: k4186 
o|contracted procedure: k4166 
o|contracted procedure: k4170 
o|contracted procedure: k4158 
o|contracted procedure: k4147 
o|contracted procedure: k4143 
o|contracted procedure: k4211 
o|contracted procedure: k4233 
o|contracted procedure: k4229 
o|contracted procedure: k4214 
o|contracted procedure: k4217 
o|contracted procedure: k4225 
o|contracted procedure: k4273 
o|contracted procedure: k4295 
o|contracted procedure: k4291 
o|contracted procedure: k4276 
o|contracted procedure: k4279 
o|contracted procedure: k4287 
o|contracted procedure: k4319 
o|contracted procedure: k4322 
o|contracted procedure: k4325 
o|contracted procedure: k4333 
o|contracted procedure: k4341 
o|contracted procedure: k4389 
o|contracted procedure: k4353 
o|contracted procedure: k4379 
o|contracted procedure: k4383 
o|contracted procedure: k4375 
o|contracted procedure: k4356 
o|contracted procedure: k4359 
o|contracted procedure: k4367 
o|contracted procedure: k4371 
o|contracted procedure: k4401 
o|contracted procedure: k4404 
o|contracted procedure: k4407 
o|contracted procedure: k4415 
o|contracted procedure: k4423 
o|contracted procedure: k4493 
o|contracted procedure: k4457 
o|contracted procedure: k4483 
o|contracted procedure: k4487 
o|contracted procedure: k4479 
o|contracted procedure: k4460 
o|contracted procedure: k4463 
o|contracted procedure: k4471 
o|contracted procedure: k4475 
o|contracted procedure: k4525 
o|contracted procedure: k4528 
o|contracted procedure: k4531 
o|contracted procedure: k4539 
o|contracted procedure: k4553 
o|contracted procedure: k4593 
o|contracted procedure: k4602 
o|contracted procedure: k4610 
o|contracted procedure: k4973 
o|contracted procedure: k4911 
o|contracted procedure: k4915 
o|contracted procedure: k4918 
o|contracted procedure: k4624 
o|contracted procedure: k4620 
o|contracted procedure: k4632 
o|contracted procedure: k4645 
o|contracted procedure: k4641 
o|contracted procedure: k4660 
o|contracted procedure: k4783 
o|contracted procedure: k4671 
o|contracted procedure: k4737 
o|contracted procedure: k4679 
o|contracted procedure: k4691 
o|contracted procedure: k4687 
o|contracted procedure: k4683 
o|contracted procedure: k4675 
o|contracted procedure: k4667 
o|contracted procedure: k4656 
o|contracted procedure: k4652 
o|contracted procedure: k4708 
o|contracted procedure: k4730 
o|contracted procedure: k4726 
o|contracted procedure: k4711 
o|contracted procedure: k4714 
o|contracted procedure: k4722 
o|contracted procedure: k4754 
o|contracted procedure: k4776 
o|contracted procedure: k4772 
o|contracted procedure: k4757 
o|contracted procedure: k4760 
o|contracted procedure: k4768 
o|contracted procedure: k4800 
o|contracted procedure: k4803 
o|contracted procedure: k4806 
o|contracted procedure: k4814 
o|contracted procedure: k4822 
o|contracted procedure: k4870 
o|contracted procedure: k4834 
o|contracted procedure: k4860 
o|contracted procedure: k4864 
o|contracted procedure: k4856 
o|contracted procedure: k4837 
o|contracted procedure: k4840 
o|contracted procedure: k4848 
o|contracted procedure: k4852 
o|contracted procedure: k4882 
o|contracted procedure: k4885 
o|contracted procedure: k4888 
o|contracted procedure: k4896 
o|contracted procedure: k4904 
o|contracted procedure: k4966 
o|contracted procedure: k4930 
o|contracted procedure: k4956 
o|contracted procedure: k4960 
o|contracted procedure: k4952 
o|contracted procedure: k4933 
o|contracted procedure: k4936 
o|contracted procedure: k4944 
o|contracted procedure: k4948 
o|contracted procedure: k4982 
o|contracted procedure: k4985 
o|contracted procedure: k4988 
o|contracted procedure: k4996 
o|contracted procedure: k5010 
o|simplifications: ((let . 64)) 
o|removed binding forms: 289 
o|removed binding forms: 1 
o|direct leaf routine/allocation: lp432 0 
o|direct leaf routine/allocation: fetch1179 0 
o|direct leaf routine/allocation: push1182 3 
o|direct leaf routine/allocation: g922931 21 
o|direct leaf routine/allocation: g983992 6 
o|direct leaf routine/allocation: g687696 21 
o|direct leaf routine/allocation: g748757 6 
o|converted assignments to bindings: (lp432) 
o|contracted procedure: "(compiler-syntax.scm:240) k3303" 
o|contracted procedure: "(compiler-syntax.scm:242) k3312" 
o|inlining procedure: "(compiler-syntax.scm:245) k3321" 
o|inlining procedure: "(compiler-syntax.scm:246) k3321" 
o|inlining procedure: "(compiler-syntax.scm:247) k3321" 
o|inlining procedure: "(compiler-syntax.scm:249) k3321" 
o|inlining procedure: "(compiler-syntax.scm:253) k3321" 
o|inlining procedure: "(compiler-syntax.scm:257) k3321" 
o|inlining procedure: "(compiler-syntax.scm:260) k3321" 
o|inlining procedure: "(compiler-syntax.scm:264) k3321" 
o|inlining procedure: "(compiler-syntax.scm:265) k3321" 
o|contracted procedure: "(compiler-syntax.scm:269) k3509" 
o|contracted procedure: "(compiler-syntax.scm:271) k3525" 
o|contracted procedure: "(compiler-syntax.scm:128) k4337" 
o|contracted procedure: "(compiler-syntax.scm:124) k4419" 
o|contracted procedure: "(compiler-syntax.scm:91) k4818" 
o|contracted procedure: "(compiler-syntax.scm:87) k4900" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|customizable procedures: (k4599 map-loop620638 map-loop650669 map-loop681702 map-loop711730 map-loop742763 map-loop772793 map-loop802823 chicken.compiler.compiler-syntax#length+ k4082 map-loop855873 map-loop885904 map-loop916937 map-loop946965 map-loop977998 map-loop10071028 map-loop10371058 foldr10801083 chicken.compiler.compiler-syntax#compile-format-string chicken.compiler.compiler-syntax#r-c-s k3087 skip1249 next1180 loop1195 endchunk1181 fail1139 g550557 for-each-loop549560) 
o|calls to known targets: 84 
o|identified direct recursive calls: f_2784 1 
o|identified direct recursive calls: f_3513 1 
o|identified direct recursive calls: f_3252 1 
o|identified direct recursive calls: f_3998 1 
o|identified direct recursive calls: f_4206 1 
o|identified direct recursive calls: f_4268 1 
o|identified direct recursive calls: f_4314 1 
o|identified direct recursive calls: f_4348 1 
o|identified direct recursive calls: f_4396 1 
o|identified direct recursive calls: f_4452 1 
o|identified direct recursive calls: f_4703 1 
o|identified direct recursive calls: f_4749 1 
o|identified direct recursive calls: f_4795 1 
o|identified direct recursive calls: f_4829 1 
o|identified direct recursive calls: f_4877 1 
o|identified direct recursive calls: f_4925 1 
o|fast box initializations: 22 
o|fast global references: 13 
o|fast global assignments: 3 
o|dropping unused closure argument: f_2778 
o|dropping unused closure argument: f_2784 
o|dropping unused closure argument: f_2990 
o|dropping unused closure argument: f_3061 
*/
/* end of file */
