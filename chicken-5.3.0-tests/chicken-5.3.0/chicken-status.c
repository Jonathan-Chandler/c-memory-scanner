/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-status.c
   uses: eval data-structures pathname port irregex extras file library
*/
#include "chicken.h"

#ifndef STATICBUILD
# define STATIC_CHICKEN 0
#else
# define STATIC_CHICKEN 1
#endif
#ifndef DEBUGBUILD
# define DEBUG_CHICKEN 0
#else
# define DEBUG_CHICKEN 1
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[142];
static double C_possibly_force_alignment;


C_noret_decl(f5266)
static void C_ccall f5266(C_word c,C_word *av) C_noret;
C_noret_decl(f5273)
static void C_ccall f5273(C_word c,C_word *av) C_noret;
C_noret_decl(f5280)
static void C_ccall f5280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1912)
static void C_fcall f_1912(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word *av) C_noret;
C_noret_decl(f_1944)
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word *av) C_noret;
C_noret_decl(f_1976)
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word *av) C_noret;
C_noret_decl(f_2025)
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2065)
static C_word C_fcall f_2065(C_word t0);
C_noret_decl(f_2093)
static void C_fcall f_2093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2099)
static void C_fcall f_2099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_fcall f_2157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word *av) C_noret;
C_noret_decl(f_2185)
static void C_fcall f_2185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word *av) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word *av) C_noret;
C_noret_decl(f_2254)
static void C_fcall f_2254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2260)
static void C_fcall f_2260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2299)
static void C_fcall f_2299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2308)
static void C_fcall f_2308(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2316)
static void C_fcall f_2316(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word *av) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word *av) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word *av) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word *av) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static C_word C_fcall f_3229(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3253)
static C_word C_fcall f_3253(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3572)
static void C_fcall f_3572(C_word t0) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word *av) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word *av) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word *av) C_noret;
C_noret_decl(f_3649)
static void C_fcall f_3649(C_word t0) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_fcall f_3683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word *av) C_noret;
C_noret_decl(f_3738)
static void C_fcall f_3738(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_fcall f_3759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_fcall f_3779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word *av) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word *av) C_noret;
C_noret_decl(f_3850)
static void C_fcall f_3850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_fcall f_3972(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3987)
static void C_fcall f_3987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_fcall f_4047(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word *av) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_fcall f_4115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_4146)
static void C_fcall f_4146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word *av) C_noret;
C_noret_decl(f_4334)
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word *av) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word *av) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word *av) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word *av) C_noret;
C_noret_decl(f_4410)
static void C_fcall f_4410(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word *av) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4466)
static void C_fcall f_4466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4509)
static void C_fcall f_4509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word *av) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word *av) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word *av) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_fcall f_4582(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_fcall f_4621(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4634)
static void C_fcall f_4634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4655)
static void C_fcall f_4655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word *av) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word *av) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word *av) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_fcall f_4830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word *av) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word *av) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word *av) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1889)
static void C_ccall trf_1889(C_word c,C_word *av) C_noret;
static void C_ccall trf_1889(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1889(t0,t1,t2,t3);}

C_noret_decl(trf_1904)
static void C_ccall trf_1904(C_word c,C_word *av) C_noret;
static void C_ccall trf_1904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1904(t0,t1,t2);}

C_noret_decl(trf_1912)
static void C_ccall trf_1912(C_word c,C_word *av) C_noret;
static void C_ccall trf_1912(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1912(t0,t1,t2,t3);}

C_noret_decl(trf_1944)
static void C_ccall trf_1944(C_word c,C_word *av) C_noret;
static void C_ccall trf_1944(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1944(t0,t1,t2);}

C_noret_decl(trf_1976)
static void C_ccall trf_1976(C_word c,C_word *av) C_noret;
static void C_ccall trf_1976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1976(t0,t1,t2);}

C_noret_decl(trf_2025)
static void C_ccall trf_2025(C_word c,C_word *av) C_noret;
static void C_ccall trf_2025(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2025(t0,t1,t2);}

C_noret_decl(trf_2093)
static void C_ccall trf_2093(C_word c,C_word *av) C_noret;
static void C_ccall trf_2093(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2093(t0,t1,t2);}

C_noret_decl(trf_2099)
static void C_ccall trf_2099(C_word c,C_word *av) C_noret;
static void C_ccall trf_2099(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2099(t0,t1,t2);}

C_noret_decl(trf_2157)
static void C_ccall trf_2157(C_word c,C_word *av) C_noret;
static void C_ccall trf_2157(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2157(t0,t1,t2);}

C_noret_decl(trf_2185)
static void C_ccall trf_2185(C_word c,C_word *av) C_noret;
static void C_ccall trf_2185(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2185(t0,t1,t2);}

C_noret_decl(trf_2254)
static void C_ccall trf_2254(C_word c,C_word *av) C_noret;
static void C_ccall trf_2254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2254(t0,t1,t2);}

C_noret_decl(trf_2260)
static void C_ccall trf_2260(C_word c,C_word *av) C_noret;
static void C_ccall trf_2260(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2260(t0,t1,t2);}

C_noret_decl(trf_2299)
static void C_ccall trf_2299(C_word c,C_word *av) C_noret;
static void C_ccall trf_2299(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2299(t0,t1,t2);}

C_noret_decl(trf_2308)
static void C_ccall trf_2308(C_word c,C_word *av) C_noret;
static void C_ccall trf_2308(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2308(t0,t1,t2);}

C_noret_decl(trf_2316)
static void C_ccall trf_2316(C_word c,C_word *av) C_noret;
static void C_ccall trf_2316(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2316(t0,t1,t2,t3);}

C_noret_decl(trf_3572)
static void C_ccall trf_3572(C_word c,C_word *av) C_noret;
static void C_ccall trf_3572(C_word c,C_word *av){
C_word t0=av[0];
f_3572(t0);}

C_noret_decl(trf_3649)
static void C_ccall trf_3649(C_word c,C_word *av) C_noret;
static void C_ccall trf_3649(C_word c,C_word *av){
C_word t0=av[0];
f_3649(t0);}

C_noret_decl(trf_3683)
static void C_ccall trf_3683(C_word c,C_word *av) C_noret;
static void C_ccall trf_3683(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3683(t0,t1,t2);}

C_noret_decl(trf_3738)
static void C_ccall trf_3738(C_word c,C_word *av) C_noret;
static void C_ccall trf_3738(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3738(t0,t1,t2,t3);}

C_noret_decl(trf_3759)
static void C_ccall trf_3759(C_word c,C_word *av) C_noret;
static void C_ccall trf_3759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3759(t0,t1,t2);}

C_noret_decl(trf_3779)
static void C_ccall trf_3779(C_word c,C_word *av) C_noret;
static void C_ccall trf_3779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3779(t0,t1,t2);}

C_noret_decl(trf_3850)
static void C_ccall trf_3850(C_word c,C_word *av) C_noret;
static void C_ccall trf_3850(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3850(t0,t1,t2);}

C_noret_decl(trf_3892)
static void C_ccall trf_3892(C_word c,C_word *av) C_noret;
static void C_ccall trf_3892(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3892(t0,t1,t2,t3);}

C_noret_decl(trf_3972)
static void C_ccall trf_3972(C_word c,C_word *av) C_noret;
static void C_ccall trf_3972(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3972(t0,t1,t2);}

C_noret_decl(trf_3987)
static void C_ccall trf_3987(C_word c,C_word *av) C_noret;
static void C_ccall trf_3987(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3987(t0,t1,t2);}

C_noret_decl(trf_4047)
static void C_ccall trf_4047(C_word c,C_word *av) C_noret;
static void C_ccall trf_4047(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4047(t0,t1);}

C_noret_decl(trf_4115)
static void C_ccall trf_4115(C_word c,C_word *av) C_noret;
static void C_ccall trf_4115(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4115(t0,t1,t2);}

C_noret_decl(trf_4146)
static void C_ccall trf_4146(C_word c,C_word *av) C_noret;
static void C_ccall trf_4146(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4146(t0,t1,t2);}

C_noret_decl(trf_4334)
static void C_ccall trf_4334(C_word c,C_word *av) C_noret;
static void C_ccall trf_4334(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4334(t0,t1,t2);}

C_noret_decl(trf_4410)
static void C_ccall trf_4410(C_word c,C_word *av) C_noret;
static void C_ccall trf_4410(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4410(t0,t1,t2);}

C_noret_decl(trf_4466)
static void C_ccall trf_4466(C_word c,C_word *av) C_noret;
static void C_ccall trf_4466(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4466(t0,t1,t2);}

C_noret_decl(trf_4509)
static void C_ccall trf_4509(C_word c,C_word *av) C_noret;
static void C_ccall trf_4509(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4509(t0,t1,t2);}

C_noret_decl(trf_4582)
static void C_ccall trf_4582(C_word c,C_word *av) C_noret;
static void C_ccall trf_4582(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4582(t0,t1,t2);}

C_noret_decl(trf_4621)
static void C_ccall trf_4621(C_word c,C_word *av) C_noret;
static void C_ccall trf_4621(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4621(t0,t1,t2,t3);}

C_noret_decl(trf_4634)
static void C_ccall trf_4634(C_word c,C_word *av) C_noret;
static void C_ccall trf_4634(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4634(t0,t1);}

C_noret_decl(trf_4655)
static void C_ccall trf_4655(C_word c,C_word *av) C_noret;
static void C_ccall trf_4655(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4655(t0,t1);}

C_noret_decl(trf_4830)
static void C_ccall trf_4830(C_word c,C_word *av) C_noret;
static void C_ccall trf_4830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4830(t0,t1,t2);}

/* f5266 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f5266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5266,c,av);}
/* chicken-status.scm:208: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* f5273 in k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5273,c,av);}
/* chicken-status.scm:208: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f5280 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f5280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5280,c,av);}
/* chicken-status.scm:208: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1662 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1664,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1665 in k1662 */
static void C_ccall f_1667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1667,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4971,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:26: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[141]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[141]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1668 in k1665 in k1662 */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1670,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1673,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1676,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1679,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1682,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1685,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1688(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_1688,c,av);}
a=C_alloc(11);
t2=C_mutate(&lf[1] /* (set! main#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1889,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[5] /* (set! main#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2093,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[7] /* (set! main#delete-duplicates ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2254,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[8] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2299,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[9] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t7=C_mutate(&lf[10] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t9=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[138];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_1889(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1889,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(t3,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1904(t9,t1,t3);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1944(t9,t1,t5);}}

/* foldr192 in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1904,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1931,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g197 in foldr192 in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_1912(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1912,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1920,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1918 in g197 in foldr192 in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1920,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1929 in foldr192 in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1931,c,av);}
/* mini-srfi-1.scm:72: g197 */
t2=((C_word*)t0)[2];
f_1912(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1944,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1951,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* mini-srfi-1.scm:74: any */
f_2093(t3,*((C_word*)lf[6]+1),t2);}

/* k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1951(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1951,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2025,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2025(t12,t8,((C_word*)t0)[4]);}}

/* k1956 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1958(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_1958,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1976,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1976(t11,t7,((C_word*)t0)[4]);}

/* k1960 in k1956 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1962,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1972 in k1956 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_1974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1974,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1944(t2,((C_word*)t0)[3],t1);}

/* map-loop234 in k1956 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1976,3,t0,t1,t2);}
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

/* k2021 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2023,c,av);}{
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

/* map-loop207 in k1949 in loop in main#append-map in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2025,3,t0,t1,t2);}
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

/* loop in k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static C_word C_fcall f_2065(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_i_memq(t3,lf[122]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* main#any in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2093(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2093,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2099(t7,t1,t3);}

/* loop in main#any in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2099,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2109,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:88: pred */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2107 in loop in main#any in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2109,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:89: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2099(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* loop in k3775 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_2157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2157,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2175,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:101: loop */
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2173 in loop in k3775 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_2175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2175,c,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* loop in loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2185,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:106: test */
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k2196 in loop in loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2198,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* mini-srfi-1.scm:107: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2185(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2185(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k2210 in k2196 in loop in loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2212,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2254(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2254,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2260(t7,t1,t2);}

/* loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2260(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_2260,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2274,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2185,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2185(t10,t6,t4);}}

/* k2272 in loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2274,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2285 in loop in main#delete-duplicates in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2287,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2260(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2299(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2299,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2308(t8,t1,t3);}

/* foldr339 in main#filter in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2308(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2308,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2337,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g344 in foldr339 in main#filter in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_fcall f_2316(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2316,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2323,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2321 in g344 in foldr339 in main#filter in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2323,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2335 in foldr339 in main#filter in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2337,c,av);}
/* mini-srfi-1.scm:131: g344 */
t2=((C_word*)t0)[2];
f_2316(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2972,c,av);}
a=C_alloc(6);
t2=lf[11] /* main#cross-chicken */ =t1;;
t3=lf[12] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[13] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2982,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2986,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2990,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2994,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2998,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_3002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3002,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3006,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 */
static void C_ccall f_3018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3018,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_STATIC_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in k1662 in ... */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3022,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in k1665 in ... */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3026,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in k1668 in ... */
static void C_ccall f_3030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3030,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[17] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in k1671 in ... */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3034,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:64: chicken.platform#software-type */
t3=C_fast_retrieve(lf[136]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in ... */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3042,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in ... */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3046,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[17] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4962,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in ... */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3050,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4958,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in ... */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3054,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4954,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_DO_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in ... */
static void C_ccall f_3058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3058,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in ... */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN_FLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3066,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in ... */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_EGG_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in ... */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3074,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3078,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in ... */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3082,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in ... */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3086,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in ... */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3090,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in ... */
static void C_ccall f_3094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3094,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in ... */
static void C_ccall f_3098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3098,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in ... */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3102,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in ... */
static void C_ccall f_3106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3106,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in ... */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3110,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[131]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in ... */
static void C_ccall f_3114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3114,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[20] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3118,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4944,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[131]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in ... */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3118,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[21] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[22] /* (set! main#+egg-info-extension+ ...) */,lf[23]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:122: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[129];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in ... */
static void C_ccall f_3187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3187,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3190(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4934,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:123: chicken.platform#system-cache-directory */
t4=C_fast_retrieve(lf[127]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3190(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3190,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[24] /* (set! main#cache-directory ...) */,t1);
t3=C_mutate(&lf[25] /* (set! main#get-egg-property ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3229,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[26] /* (set! main#get-egg-property* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3253,tmp=(C_word)a,a+=2,tmp));
t5=lf[27] /* main#host-extensions */ =C_SCHEME_TRUE;;
t6=lf[28] /* main#target-extensions */ =C_SCHEME_TRUE;;
t7=C_mutate(&lf[29] /* (set! main#get-terminal-width ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3572,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:62: get-terminal-width */
f_3572(t8);}

/* k3194 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3196,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3202,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[43]);{
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

/* k3200 in k3194 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3202,c,av);}
if(C_truep(t1)){
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3204 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3206,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3210,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t3=C_fast_retrieve(lf[46]);{
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

/* k3208 in k3204 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3210,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t3=C_fast_retrieve(lf[45]);{
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

/* k3212 in k3208 in k3204 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_3214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3214,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[44]);{
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

/* k3216 in k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3218,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[47];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#get-egg-property in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static C_word C_fcall f_3229(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cadr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-egg-property* in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static C_word C_fcall f_3253(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cdr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_fcall f_3572(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3572,1,t1);}
a=C_alloc(4);
t2=*((C_word*)lf[30]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:55: chicken.port#terminal-port? */
t4=C_fast_retrieve(lf[35]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[30]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3579,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3594,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: scheme#call-with-current-continuation */
t4=*((C_word*)lf[34]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3580 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3582,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: g935 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3583 in k3580 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3585,c,av);}
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-status.scm:59: scheme#min */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(79);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3594,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:56: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[33]);{
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

/* a3599 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_3600,c,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3606,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: k932 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3605 in a3599 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3606,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3609,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3633,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
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

/* a3614 in a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3615,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3627,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
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

/* a3620 in a3614 in a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3621,c,av);}
/* chicken-status.scm:56: chicken.port#terminal-size */
t2=C_fast_retrieve(lf[32]);{
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

/* a3626 in a3614 in a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_3627,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3632 in a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3633,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: k932 */
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

/* a3638 in a3632 in a3608 in a3593 in k3577 in main#get-terminal-width in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3639,c,av);}{
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

/* main#repo-path in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_3649(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_3649,1,t1);}
t2=(C_truep(C_retrieve2(lf[11],C_text("main#cross-chicken")))?C_i_not(C_retrieve2(lf[27],C_text("main#host-extensions"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(t5)){
t6=C_retrieve2(lf[21],C_text("main#target-run-repo"));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[21],C_text("main#target-run-repo"));
tp(3,av2);}}
else{
t6=C_retrieve2(lf[20],C_text("main#target-repo"));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[20],C_text("main#target-repo"));
tp(3,av2);}}}
else{
/* chicken-status.scm:67: chicken.platform#repository-path */
t3=C_fast_retrieve(lf[39]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3676 in k3765 in g993 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3677,c,av);}
t3=C_fast_retrieve(lf[52]);
/* chicken-status.scm:70: g955 */
t4=C_fast_retrieve(lf[52]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_3683(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3683,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3687,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:72: repo-path */
f_3649(t4);}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3687(2,av2);}}}

/* k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3687(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3687,c,av);}
a=C_alloc(7);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[22],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3709,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:73: chicken.pathname#make-pathname */
t10=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3697 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3699,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3206,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t5=C_fast_retrieve(lf[48]);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3707 in k3685 in main#read-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3709,c,av);}
/* chicken-status.scm:73: chicken.load#find-file */
t2=C_fast_retrieve(lf[49]);{
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

/* main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_3738(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_3738,4,t1,t2,t3,t4);}
a=C_alloc(22);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:88: delete-duplicates */
f_2254(t1,t2,*((C_word*)lf[51]+1));}
else{
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t3,lf[4]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3779,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_3779(t16,t12,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:84: filter */
f_2299(t5,t6,t2);}}}

/* k3740 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3742,c,av);}
/* chicken-status.scm:88: delete-duplicates */
f_2254(((C_word*)t0)[2],t1,*((C_word*)lf[51]+1));}

/* g993 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_3759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3759,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3767,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3771,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:81: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[54]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3765 in g993 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3767,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:70: filter */
f_2299(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3769 in g993 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3771,c,av);}
/* chicken-status.scm:81: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[53]);{
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

/* k3775 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3777,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2157,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2157(t5,((C_word*)t0)[2],t1);}

/* map-loop987 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_3779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3779,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:80: g993 */
t4=((C_word*)t0)[4];
f_3759(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3802 in map-loop987 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3804,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3779(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3815 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3816,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3822,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:86: any */
f_2093(t1,t3,((C_word*)t0)[2]);}

/* a3821 in a3815 in main#filter-egg-names in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3822,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3834 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3836,c,av);}
/* chicken-status.scm:91: delete-duplicates */
f_2254(((C_word*)t0)[2],t1,*((C_word*)lf[104]+1));}

/* a3837 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3838(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3838,c,av);}
a=C_alloc(14);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[46]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3845,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:95: chicken.pathname#make-pathname */
t10=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[106];
av2[4]=C_retrieve2(lf[22],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3843 in a3837 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_3845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3845,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3850(t5,((C_word*)t0)[5],t1);}

/* map-loop1025 in k3843 in a3837 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in ... */
static void C_fcall f_3850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3850,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:94: g1031 */
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

/* k3873 in map-loop1025 in k3843 in a3837 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in ... */
static void C_ccall f_3875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3875,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3850(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3884 in a3837 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_3886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3886,c,av);}
/* chicken-status.scm:95: chicken.file#glob */
t2=C_fast_retrieve(lf[105]);{
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

/* k3888 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3890,c,av);}
/* chicken-status.scm:92: append-map */
f_1889(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* main#format-string in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_3892(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3892,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
/* chicken-status.scm:101: scheme#make-string */
t16=*((C_word*)lf[57]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t14;
av2[2]=C_i_fixnum_max(C_fix(0),t15);
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}

/* k3909 in main#format-string in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3911,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_3958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3958,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3962,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:106: repo-path */
f_3649(t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3962(2,av2);}}}

/* k3960 in main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_3962(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3962,c,av);}
a=C_alloc(8);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[22],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3972,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3979,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:109: chicken.sort#sort */
t10=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[62]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* g1089 in k3960 in main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_3972(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3972,3,t0,t1,t2);}
t3=C_retrieve2(lf[59],C_text("main#list-egg-info"));
/* chicken-status.scm:108: g1104 */
t4=C_retrieve2(lf[59],C_text("main#list-egg-info"));{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[3];
f_4037(5,av2);}}

/* k3977 in k3960 in main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3979,c,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[60]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3987,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3987(t6,((C_word*)t0)[3],t1);}

/* for-each-loop1088 in k3977 in k3960 in main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_fcall f_3987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3987,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:108: g1089 */
t4=((C_word*)t0)[3];
f_3972(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3995 in for-each-loop1088 in k3977 in k3960 in main#list-installed-eggs in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_3997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3997,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3987(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4037,c,av);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4041,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:113: read-info */
f_3683(t5,t2,C_a_i_list(&a,2,t3,t4));}

/* k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4041,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?(
/* chicken-status.scm:114: get-egg-property */
  f_3229(t1,lf[63],C_SCHEME_END_OF_LIST)
):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_4047(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4074,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:115: chicken.load#find-file */
t5=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[70];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_4047(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4047,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4071,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:118: scheme#string-append */
t4=*((C_word*)lf[67]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[68];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4052 in k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:121: chicken.string#->string */
t5=C_fast_retrieve(lf[66]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4056 in k4052 in k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4058,c,av);}
/* chicken-status.scm:118: chicken.base#print */
t2=*((C_word*)lf[64]+1);{
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

/* k4060 in k4052 in k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4062,c,av);}
a=C_alloc(6);
/* chicken-status.scm:120: format-string */
f_3892(((C_word*)t0)[2],t1,C_retrieve2(lf[36],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4065 in k4052 in k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4067,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
av2[3]=t1;
tp(4,av2);}}

/* k4069 in k4045 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4071,c,av);}
a=C_alloc(6);
/* chicken-status.scm:118: format-string */
f_3892(((C_word*)t0)[2],t1,C_retrieve2(lf[36],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k4072 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4074,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-status.scm:116: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];
f_4047(t3,lf[69]);}}

/* k4075 in k4072 in k4039 in main#list-egg-info in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4077,c,av);}
t2=((C_word*)t0)[2];
f_4047(t2,(C_truep(t1)?t1:lf[69]));}

/* k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4095,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4144,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:129: chicken.file#directory */
t5=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4102 in for-each-loop1131 in k4105 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in ... */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4104,c,av);}
/* chicken-status.scm:128: list-egg-info */
t2=C_retrieve2(lf[59],C_text("main#list-egg-info"));{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=lf[101];
f_4037(5,av2);}}

/* k4105 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4107,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[60]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4115,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4115(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1131 in k4105 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_fcall f_4115(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4115,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:128: chicken.pathname#make-pathname */
t6=C_fast_retrieve(lf[44]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4123 in for-each-loop1131 in k4105 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in ... */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4125,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4115(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4138 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4140,c,av);}
/* chicken-status.scm:129: chicken.sort#sort */
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[62]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4142 in k4093 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4144,c,av);}
/* chicken-status.scm:129: filter-egg-names */
f_3738(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* main#gather-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_4146(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4146,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4152,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:132: append-map */
f_1889(t1,t4,t2,C_SCHEME_END_OF_LIST);}

/* a4151 in main#gather-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4152,c,av);}
t3=C_retrieve2(lf[72],C_text("main#gather-components-rec"));
/* chicken-status.scm:132: g1156 */
t4=C_retrieve2(lf[72],C_text("main#gather-components-rec"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_4158(4,av2);}}

/* main#gather-components-rec in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4158(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4158,c,av);}
a=C_alloc(12);
t4=C_i_car(t2);
t5=C_eqp(t4,lf[73]);
if(C_truep(t5)){
if(C_truep(C_retrieve2(lf[27],C_text("main#host-extensions")))){
/* chicken-status.scm:137: gather-components */
f_4146(t1,C_u_i_cdr(t2),lf[73]);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[74]);
if(C_truep(t6)){
if(C_truep(C_retrieve2(lf[28],C_text("main#target-extensions")))){
/* chicken-status.scm:139: gather-components */
f_4146(t1,C_u_i_cdr(t2),lf[74]);}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=C_eqp(t4,lf[75]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_a_i_list3(&a,3,lf[75],t3,t8);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list1(&a,1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t4,lf[76]);
if(C_truep(t8)){
t9=C_i_cadr(t2);
t10=C_a_i_list3(&a,3,lf[76],t3,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list1(&a,1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[77]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=C_a_i_list3(&a,3,lf[77],t3,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list1(&a,1,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=C_eqp(t4,lf[78]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_a_i_list3(&a,3,lf[78],t3,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t4,lf[79]);
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_a_i_list3(&a,3,lf[79],t3,t12);
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_list1(&a,1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t4,lf[80]);
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list3(&a,3,lf[80],t3,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_a_i_list1(&a,1,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=C_eqp(t4,lf[81]);
if(C_truep(t13)){
t14=C_i_cadr(t2);
t15=C_a_i_list3(&a,3,lf[81],t3,t14);
t16=t1;{
C_word *av2=av;
av2[0]=t16;
av2[1]=C_a_i_list1(&a,1,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}}}}}}}}}

/* main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4329,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4495,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:150: get-terminal-width */
f_3572(t3);}

/* g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4334,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4338,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:153: read-info */
f_3683(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4338(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4338,c,av);}
a=C_alloc(13);
t2=(
/* chicken-status.scm:154: get-egg-property */
  f_3229(t1,lf[63],C_SCHEME_END_OF_LIST)
);
t3=(
/* chicken-status.scm:155: get-egg-property* */
  f_3253(t1,lf[83],C_SCHEME_END_OF_LIST)
);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4347,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4438,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:157: scheme#string-append */
t7=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[90];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* chicken-status.scm:161: chicken.base#print */
t5=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4347,c,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4353,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:163: gather-components */
f_4146(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_4353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4353,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[60]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4410(t6,((C_word*)t0)[2],t1);}

/* k4360 in for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in ... */
static void C_ccall f_4362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4362,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:167: chicken.string#->string */
t4=C_fast_retrieve(lf[66]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4364 in k4360 in for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4366,c,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[73]);
if(C_truep(t3)){
/* chicken-status.scm:166: chicken.base#print */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=C_eqp(t2,lf[74]);
if(C_truep(t4)){
/* chicken-status.scm:166: chicken.base#print */
t5=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[87];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
/* chicken-status.scm:166: chicken.base#print */
t5=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
av2[6]=lf[88];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}}

/* k4388 in k4360 in for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in ... */
static void C_ccall f_4390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4390,c,av);}
/* chicken-status.scm:167: format-string */
f_3892(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* k4396 in for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in ... */
static void C_ccall f_4398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4398,c,av);}
/* chicken-status.scm:166: format-string */
f_3892(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in ... */
static void C_fcall f_4410(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4410,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4362,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4398,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:166: chicken.string#->string */
t7=C_fast_retrieve(lf[66]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4418 in for-each-loop1189 in k4351 in k4345 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in ... */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4420,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4410(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4436 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4438,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4446,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:159: chicken.string#->string */
t5=C_fast_retrieve(lf[66]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4440 in k4436 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_4442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4442,c,av);}
/* chicken-status.scm:157: chicken.base#print */
t2=*((C_word*)lf[64]+1);{
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

/* k4444 in k4436 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_4446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4446,c,av);}
a=C_alloc(6);
/* chicken-status.scm:158: format-string */
f_3892(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4449 in k4436 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in ... */
static void C_ccall f_4451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4451,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[89];
av2[3]=t1;
tp(4,av2);}}

/* k4453 in k4336 in g1173 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4455,c,av);}
a=C_alloc(6);
/* chicken-status.scm:157: format-string */
f_3892(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* for-each-loop1172 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_4466(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4466,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4476,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:151: g1173 */
t4=((C_word*)t0)[3];
f_4334(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4474 in for-each-loop1172 in k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4476,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4466(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4493 in main#list-installed-components in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4495(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_4495,c,av);}
a=C_alloc(43);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4334,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(((C_word*)t0)[2],lf[60]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4466,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4466(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4497,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4536,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:179: append-map */
f_1889(t4,t5,t2,C_SCHEME_END_OF_LIST);}

/* k4499 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4501,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[60]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4509,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4509(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1221 in k4499 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_4509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4509,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4519,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:176: g1222 */
t4=*((C_word*)lf[64]+1);{
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

/* k4517 in for-each-loop1221 in k4499 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4519,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4509(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4532 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4534,c,av);}
/* chicken-status.scm:178: chicken.sort#sort */
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[62]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4535 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4536,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:181: read-info */
f_3683(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4542 in a4535 in main#list-installed-files in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4544,c,av);}
/* chicken-status.scm:181: get-egg-property* */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* chicken-status.scm:181: get-egg-property* */
  f_3253(t1,lf[92],C_SCHEME_END_OF_LIST)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#dump-installed-versions in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4546(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4546,c,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[60]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4582,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4582(t7,t1,t2);}

/* k4561 in k4572 in for-each-loop1241 in main#dump-installed-versions in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4563,c,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* chicken-status.scm:189: chicken.pretty-print#pp */
t4=C_fast_retrieve(lf[94]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
/* chicken-status.scm:189: chicken.pretty-print#pp */
t3=C_fast_retrieve(lf[94]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4572 in for-each-loop1241 in main#dump-installed-versions in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4574,c,av);}
a=C_alloc(4);
t2=(
/* chicken-status.scm:188: get-egg-property */
  f_3229(t1,lf[63],C_SCHEME_END_OF_LIST)
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4563,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:189: scheme#string->symbol */
t4=*((C_word*)lf[95]+1);{
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

/* for-each-loop1241 in main#dump-installed-versions in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_4582(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4582,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4574,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:188: read-info */
f_3683(t5,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4590 in for-each-loop1241 in main#dump-installed-versions in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4592,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4582(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_4621(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t16;
C_word t17;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4621,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4634,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t5)){
t6=t4;
f_4634(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[5])[1];
t7=t4;
f_4634(t7,t6);}}
else{
t5=t4;
f_4634(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t4,lf[107]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[108]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[109]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5266,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:194: chicken.base#print */
t6=*((C_word*)lf[64]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(t4,lf[111]))){
t5=lf[28] /* main#target-extensions */ =C_SCHEME_FALSE;;
/* chicken-status.scm:236: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[112]))){
t5=lf[27] /* main#host-extensions */ =C_SCHEME_FALSE;;
/* chicken-status.scm:239: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[113]))){
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
/* chicken-status.scm:242: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[114]))){
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
/* chicken-status.scm:245: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[115]))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
/* chicken-status.scm:248: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t5=C_u_i_string_equal_p(t4,lf[116]);
t6=(C_truep(t5)?t5:C_u_i_string_equal_p(t4,lf[117]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
/* chicken-status.scm:251: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t7=C_u_i_string_equal_p(t4,lf[118]);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(t4,lf[119]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
/* chicken-status.scm:254: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[120]))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4779,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:256: chicken.platform#chicken-version */
t11=C_fast_retrieve(lf[121]);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_block_size(t4);
t10=(C_truep(C_i_fixnum_positivep(t9))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t4,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t11,C_fix(2)))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4801,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4875,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:261: scheme#substring */
t14=*((C_word*)lf[124]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t13;
av2[2]=t4;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5280,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:194: chicken.base#print */
t13=*((C_word*)lf[64]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}
else{
t11=C_u_i_cdr(t2);
t12=C_a_i_cons(&a,2,t4,t3);
/* chicken-status.scm:267: loop */
t15=t1;
t16=t11;
t17=t12;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}}}}}}}}}}

/* k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_fcall f_4634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4634,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4642,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:221: chicken.port#with-output-to-port */
t4=C_fast_retrieve(lf[99]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[100]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:125: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[103]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=t2;
f_4655(t3,C_retrieve2(lf[93],C_text("main#dump-installed-versions")));}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=C_retrieve2(lf[91],C_text("main#list-installed-files"));
t4=t2;
f_4655(t4,C_retrieve2(lf[91],C_text("main#list-installed-files")));}
else{
t3=t2;
f_4655(t3,(C_truep(((C_word*)((C_word*)t0)[8])[1])?C_retrieve2(lf[82],C_text("main#list-installed-components")):C_retrieve2(lf[58],C_text("main#list-installed-eggs"))));}}}}}

/* k4635 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4637,c,av);}
/* chicken-status.scm:223: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a4641 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4642,c,av);}
/* chicken-status.scm:222: g1283 */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_fcall f_4655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4655,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4662,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4666,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3836,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3838,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3890,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:96: repo-path */
f_3649(t6);}

/* k4660 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4662,c,av);}
/* chicken-status.scm:220: g1286 */
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

/* k4664 in k4653 in k4632 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in ... */
static void C_ccall f_4666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4666,c,av);}
/* chicken-status.scm:230: filter-egg-names */
f_3738(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4777 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4779,c,av);}
/* chicken-status.scm:257: chicken.base#exit */
t2=C_fast_retrieve(lf[97]);{
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

/* k4784 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4786,c,av);}
/* chicken-status.scm:256: chicken.base#print */
t2=*((C_word*)lf[64]+1);{
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

/* k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4801(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_4801,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2065,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_2065(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4826,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4830,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4830(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5273,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:194: chicken.base#print */
t5=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4812 in k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4814,c,av);}
/* chicken-status.scm:263: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4621(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4824 in k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4826,c,av);}
/* chicken-status.scm:263: scheme#append */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1322 in k4799 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_fcall f_4830(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4830,3,t0,t1,t2);}
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

/* k4873 in loop in k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4875,c,av);}
/* ##sys#string->list */
t2=C_fast_retrieve(lf[123]);{
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

/* k4907 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4909,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[96]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4913 in k4907 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4915,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4917 in k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4919,c,av);}
a=C_alloc(20);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4621,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=t3,a[6]=t5,a[7]=t13,tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_4621(t15,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4925 in k3188 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4927(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(62,c,5)))){
C_save_and_reclaim((void *)f_4927,c,av);}
a=C_alloc(62);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=C_mutate(&lf[36] /* (set! main#list-width ...) */,t3);
t5=C_mutate(&lf[37] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3649,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[40] /* (set! main#read-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3683,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[50] /* (set! main#filter-egg-names ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3738,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[55] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3892,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[58] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3958,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[59] /* (set! main#list-egg-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4037,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[71] /* (set! main#gather-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4146,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[72] /* (set! main#gather-components-rec ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4158,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[82] /* (set! main#list-installed-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4329,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[91] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4497,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[93] /* (set! main#dump-installed-versions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4546,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4919,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:269: chicken.process-context#command-line-arguments */
t18=C_fast_retrieve(lf[125]);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k4932 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4934,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* egg-environment.scm:123: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[14],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* egg-environment.scm:124: chicken.process-context#current-directory */
t3=C_fast_retrieve(lf[126]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4935 in k4932 in k3185 in k3116 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4937,c,av);}
/* egg-environment.scm:123: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[14],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4942 in k3112 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in ... */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4944,c,av);}
/* egg-environment.scm:99: scheme#string-append */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-runlibdir"));
av2[3]=lf[130];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4947 in k3108 in k3104 in k3100 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in ... */
static void C_ccall f_4949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4949,c,av);}
/* egg-environment.scm:96: scheme#string-append */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[15],C_text("main#default-libdir"));
av2[3]=lf[132];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4952 in k3052 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in ... */
static void C_ccall f_4954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4954,c,av);}
/* egg-environment.scm:78: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4956 in k3048 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in ... */
static void C_ccall f_4958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4958,c,av);}
/* egg-environment.scm:75: scheme#string-append */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=lf[134];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4960 in k3044 in k3040 in k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in ... */
static void C_ccall f_4962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4962,c,av);}
/* egg-environment.scm:72: scheme#string-append */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=lf[135];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4967 in k3032 in k3028 in k3024 in k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2970 in k1686 in k1683 in k1680 in k1677 in k1674 in ... */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4969,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[18]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[19]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a4970 in k1665 in k1662 */
static void C_ccall f_4971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4971,c,av);}
/* chicken-status.scm:26: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=t1;
av2[2]=lf[140];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
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
if(C_unlikely(!C_demand_2(516))){
C_save(t1);
C_rereclaim2(516*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,142);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[3]=C_h_intern(&lf[3],13, C_text("scheme#append"));
lf[4]=C_h_intern(&lf[4],3, C_text("map"));
lf[6]=C_h_intern(&lf[6],12, C_text("scheme#null\077"));
lf[18]=C_h_intern(&lf[18],7, C_text("windows"));
lf[19]=C_h_intern(&lf[19],4, C_text("unix"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[30]=C_h_intern(&lf[30],21, C_text("##sys#standard-output"));
lf[31]=C_h_intern(&lf[31],10, C_text("scheme#min"));
lf[32]=C_h_intern(&lf[32],26, C_text("chicken.port#terminal-size"));
lf[33]=C_h_intern(&lf[33],40, C_text("chicken.condition#with-exception-handler"));
lf[34]=C_h_intern(&lf[34],37, C_text("scheme#call-with-current-continuation"));
lf[35]=C_h_intern(&lf[35],27, C_text("chicken.port#terminal-port\077"));
lf[38]=C_h_intern(&lf[38],16, C_text("##sys#split-path"));
lf[39]=C_h_intern(&lf[39],32, C_text("chicken.platform#repository-path"));
lf[41]=C_h_intern(&lf[41],27, C_text("scheme#with-input-from-file"));
lf[42]=C_h_intern(&lf[42],11, C_text("scheme#read"));
lf[43]=C_h_intern(&lf[43],25, C_text("chicken.file#file-exists\077"));
lf[44]=C_h_intern(&lf[44],30, C_text("chicken.pathname#make-pathname"));
lf[45]=C_h_intern(&lf[45],35, C_text("chicken.pathname#pathname-extension"));
lf[46]=C_h_intern(&lf[46],30, C_text("chicken.pathname#pathname-file"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[48]=C_h_intern(&lf[48],35, C_text("chicken.pathname#pathname-directory"));
lf[49]=C_h_intern(&lf[49],22, C_text("chicken.load#find-file"));
lf[51]=C_h_intern(&lf[51],15, C_text("scheme#string=\077"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.irregex#irregex-search"));
lf[53]=C_h_intern(&lf[53],23, C_text("chicken.irregex#irregex"));
lf[54]=C_h_intern(&lf[54],25, C_text("chicken.irregex#glob->sre"));
lf[56]=C_h_intern(&lf[56],19, C_text("##sys#string-append"));
lf[57]=C_h_intern(&lf[57],18, C_text("scheme#make-string"));
lf[60]=C_h_intern(&lf[60],8, C_text("for-each"));
lf[61]=C_h_intern(&lf[61],17, C_text("chicken.sort#sort"));
lf[62]=C_h_intern(&lf[62],15, C_text("scheme#string<\077"));
lf[63]=C_h_intern(&lf[63],7, C_text("version"));
lf[64]=C_h_intern(&lf[64],18, C_text("chicken.base#print"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[66]=C_h_intern(&lf[66],23, C_text("chicken.string#->string"));
lf[67]=C_h_intern(&lf[67],20, C_text("scheme#string-append"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007unknown"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007VERSION"));
lf[73]=C_h_intern(&lf[73],4, C_text("host"));
lf[74]=C_h_intern(&lf[74],6, C_text("target"));
lf[75]=C_h_intern(&lf[75],9, C_text("extension"));
lf[76]=C_h_intern(&lf[76],4, C_text("data"));
lf[77]=C_h_intern(&lf[77],21, C_text("generated-source-file"));
lf[78]=C_h_intern(&lf[78],9, C_text("c-include"));
lf[79]=C_h_intern(&lf[79],14, C_text("scheme-include"));
lf[80]=C_h_intern(&lf[80],7, C_text("program"));
lf[81]=C_h_intern(&lf[81],8, C_text("c-object"));
lf[83]=C_h_intern(&lf[83],10, C_text("components"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 (host)"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 (target)"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[92]=C_h_intern(&lf[92],15, C_text("installed-files"));
lf[94]=C_h_intern(&lf[94],23, C_text("chicken.pretty-print#pp"));
lf[95]=C_h_intern(&lf[95],21, C_text("scheme#string->symbol"));
lf[96]=C_h_intern(&lf[96],34, C_text("chicken.base#implicit-exit-handler"));
lf[97]=C_h_intern(&lf[97],17, C_text("chicken.base#exit"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000&-components cannot be used with -list."));
lf[99]=C_h_intern(&lf[99],32, C_text("chicken.port#with-output-to-port"));
lf[100]=C_h_intern(&lf[100],20, C_text("##sys#standard-error"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003egg"));
lf[102]=C_h_intern(&lf[102],22, C_text("chicken.file#directory"));
lf[103]=C_h_intern(&lf[103],30, C_text("chicken.file#directory-exists\077"));
lf[104]=C_h_intern(&lf[104],13, C_text("scheme#equal\077"));
lf[105]=C_h_intern(&lf[105],17, C_text("chicken.file#glob"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\002wusage: chicken-status [OPTION ...] [NAME ...]\012\012  -h   -help                "
"    show this message\012       -version                 show version and exit\012  -c"
"   -components              list installed components\012       -cached            "
"      list eggs in cache\012  -f   -files                   list installed files\012  "
"     -list                    dump installed extensions and their versions in \042o"
"verride\042 format\012       -match                   treat NAME as glob pattern\012     "
"  -host                    when cross-compiling, only show host extensions\012     "
"  -target                  when cross-compiling, only show target extensions"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-cached"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-list"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-f"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-files"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-components"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[121]=C_h_intern(&lf[121],32, C_text("chicken.platform#chicken-version"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000a\376\377\016"));
lf[123]=C_h_intern(&lf[123],18, C_text("##sys#string->list"));
lf[124]=C_h_intern(&lf[124],16, C_text("scheme#substring"));
lf[125]=C_h_intern(&lf[125],46, C_text("chicken.process-context#command-line-arguments"));
lf[126]=C_h_intern(&lf[126],41, C_text("chicken.process-context#current-directory"));
lf[127]=C_h_intern(&lf[127],39, C_text("chicken.platform#system-cache-directory"));
lf[128]=C_h_intern(&lf[128],48, C_text("chicken.process-context#get-environment-variable"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[131]=C_h_intern(&lf[131],20, C_text("##sys#fixnum->string"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[133]=C_h_intern(&lf[133],19, C_text("##sys#peek-c-string"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[136]=C_h_intern(&lf[136],30, C_text("chicken.platform#software-type"));
lf[137]=C_h_intern(&lf[137],25, C_text("chicken.platform#feature\077"));
lf[138]=C_h_intern_kw(&lf[138],13, C_text("cross-chicken"));
lf[139]=C_h_intern(&lf[139],30, C_text("##sys#register-compiled-module"));
lf[140]=C_h_intern(&lf[140],4, C_text("main"));
lf[141]=C_h_intern(&lf[141],22, C_text("##sys#with-environment"));
C_register_lf2(lf,142,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[213] = {
{C_text("f5266:chicken_2dstatus_2escm"),(void*)f5266},
{C_text("f5273:chicken_2dstatus_2escm"),(void*)f5273},
{C_text("f5280:chicken_2dstatus_2escm"),(void*)f5280},
{C_text("f_1664:chicken_2dstatus_2escm"),(void*)f_1664},
{C_text("f_1667:chicken_2dstatus_2escm"),(void*)f_1667},
{C_text("f_1670:chicken_2dstatus_2escm"),(void*)f_1670},
{C_text("f_1673:chicken_2dstatus_2escm"),(void*)f_1673},
{C_text("f_1676:chicken_2dstatus_2escm"),(void*)f_1676},
{C_text("f_1679:chicken_2dstatus_2escm"),(void*)f_1679},
{C_text("f_1682:chicken_2dstatus_2escm"),(void*)f_1682},
{C_text("f_1685:chicken_2dstatus_2escm"),(void*)f_1685},
{C_text("f_1688:chicken_2dstatus_2escm"),(void*)f_1688},
{C_text("f_1889:chicken_2dstatus_2escm"),(void*)f_1889},
{C_text("f_1904:chicken_2dstatus_2escm"),(void*)f_1904},
{C_text("f_1912:chicken_2dstatus_2escm"),(void*)f_1912},
{C_text("f_1920:chicken_2dstatus_2escm"),(void*)f_1920},
{C_text("f_1931:chicken_2dstatus_2escm"),(void*)f_1931},
{C_text("f_1944:chicken_2dstatus_2escm"),(void*)f_1944},
{C_text("f_1951:chicken_2dstatus_2escm"),(void*)f_1951},
{C_text("f_1958:chicken_2dstatus_2escm"),(void*)f_1958},
{C_text("f_1962:chicken_2dstatus_2escm"),(void*)f_1962},
{C_text("f_1974:chicken_2dstatus_2escm"),(void*)f_1974},
{C_text("f_1976:chicken_2dstatus_2escm"),(void*)f_1976},
{C_text("f_2023:chicken_2dstatus_2escm"),(void*)f_2023},
{C_text("f_2025:chicken_2dstatus_2escm"),(void*)f_2025},
{C_text("f_2065:chicken_2dstatus_2escm"),(void*)f_2065},
{C_text("f_2093:chicken_2dstatus_2escm"),(void*)f_2093},
{C_text("f_2099:chicken_2dstatus_2escm"),(void*)f_2099},
{C_text("f_2109:chicken_2dstatus_2escm"),(void*)f_2109},
{C_text("f_2157:chicken_2dstatus_2escm"),(void*)f_2157},
{C_text("f_2175:chicken_2dstatus_2escm"),(void*)f_2175},
{C_text("f_2185:chicken_2dstatus_2escm"),(void*)f_2185},
{C_text("f_2198:chicken_2dstatus_2escm"),(void*)f_2198},
{C_text("f_2212:chicken_2dstatus_2escm"),(void*)f_2212},
{C_text("f_2254:chicken_2dstatus_2escm"),(void*)f_2254},
{C_text("f_2260:chicken_2dstatus_2escm"),(void*)f_2260},
{C_text("f_2274:chicken_2dstatus_2escm"),(void*)f_2274},
{C_text("f_2287:chicken_2dstatus_2escm"),(void*)f_2287},
{C_text("f_2299:chicken_2dstatus_2escm"),(void*)f_2299},
{C_text("f_2308:chicken_2dstatus_2escm"),(void*)f_2308},
{C_text("f_2316:chicken_2dstatus_2escm"),(void*)f_2316},
{C_text("f_2323:chicken_2dstatus_2escm"),(void*)f_2323},
{C_text("f_2337:chicken_2dstatus_2escm"),(void*)f_2337},
{C_text("f_2972:chicken_2dstatus_2escm"),(void*)f_2972},
{C_text("f_2978:chicken_2dstatus_2escm"),(void*)f_2978},
{C_text("f_2982:chicken_2dstatus_2escm"),(void*)f_2982},
{C_text("f_2986:chicken_2dstatus_2escm"),(void*)f_2986},
{C_text("f_2990:chicken_2dstatus_2escm"),(void*)f_2990},
{C_text("f_2994:chicken_2dstatus_2escm"),(void*)f_2994},
{C_text("f_2998:chicken_2dstatus_2escm"),(void*)f_2998},
{C_text("f_3002:chicken_2dstatus_2escm"),(void*)f_3002},
{C_text("f_3006:chicken_2dstatus_2escm"),(void*)f_3006},
{C_text("f_3010:chicken_2dstatus_2escm"),(void*)f_3010},
{C_text("f_3014:chicken_2dstatus_2escm"),(void*)f_3014},
{C_text("f_3018:chicken_2dstatus_2escm"),(void*)f_3018},
{C_text("f_3022:chicken_2dstatus_2escm"),(void*)f_3022},
{C_text("f_3026:chicken_2dstatus_2escm"),(void*)f_3026},
{C_text("f_3030:chicken_2dstatus_2escm"),(void*)f_3030},
{C_text("f_3034:chicken_2dstatus_2escm"),(void*)f_3034},
{C_text("f_3042:chicken_2dstatus_2escm"),(void*)f_3042},
{C_text("f_3046:chicken_2dstatus_2escm"),(void*)f_3046},
{C_text("f_3050:chicken_2dstatus_2escm"),(void*)f_3050},
{C_text("f_3054:chicken_2dstatus_2escm"),(void*)f_3054},
{C_text("f_3058:chicken_2dstatus_2escm"),(void*)f_3058},
{C_text("f_3062:chicken_2dstatus_2escm"),(void*)f_3062},
{C_text("f_3066:chicken_2dstatus_2escm"),(void*)f_3066},
{C_text("f_3070:chicken_2dstatus_2escm"),(void*)f_3070},
{C_text("f_3074:chicken_2dstatus_2escm"),(void*)f_3074},
{C_text("f_3078:chicken_2dstatus_2escm"),(void*)f_3078},
{C_text("f_3082:chicken_2dstatus_2escm"),(void*)f_3082},
{C_text("f_3086:chicken_2dstatus_2escm"),(void*)f_3086},
{C_text("f_3090:chicken_2dstatus_2escm"),(void*)f_3090},
{C_text("f_3094:chicken_2dstatus_2escm"),(void*)f_3094},
{C_text("f_3098:chicken_2dstatus_2escm"),(void*)f_3098},
{C_text("f_3102:chicken_2dstatus_2escm"),(void*)f_3102},
{C_text("f_3106:chicken_2dstatus_2escm"),(void*)f_3106},
{C_text("f_3110:chicken_2dstatus_2escm"),(void*)f_3110},
{C_text("f_3114:chicken_2dstatus_2escm"),(void*)f_3114},
{C_text("f_3118:chicken_2dstatus_2escm"),(void*)f_3118},
{C_text("f_3187:chicken_2dstatus_2escm"),(void*)f_3187},
{C_text("f_3190:chicken_2dstatus_2escm"),(void*)f_3190},
{C_text("f_3196:chicken_2dstatus_2escm"),(void*)f_3196},
{C_text("f_3202:chicken_2dstatus_2escm"),(void*)f_3202},
{C_text("f_3206:chicken_2dstatus_2escm"),(void*)f_3206},
{C_text("f_3210:chicken_2dstatus_2escm"),(void*)f_3210},
{C_text("f_3214:chicken_2dstatus_2escm"),(void*)f_3214},
{C_text("f_3218:chicken_2dstatus_2escm"),(void*)f_3218},
{C_text("f_3229:chicken_2dstatus_2escm"),(void*)f_3229},
{C_text("f_3253:chicken_2dstatus_2escm"),(void*)f_3253},
{C_text("f_3572:chicken_2dstatus_2escm"),(void*)f_3572},
{C_text("f_3579:chicken_2dstatus_2escm"),(void*)f_3579},
{C_text("f_3582:chicken_2dstatus_2escm"),(void*)f_3582},
{C_text("f_3585:chicken_2dstatus_2escm"),(void*)f_3585},
{C_text("f_3594:chicken_2dstatus_2escm"),(void*)f_3594},
{C_text("f_3600:chicken_2dstatus_2escm"),(void*)f_3600},
{C_text("f_3606:chicken_2dstatus_2escm"),(void*)f_3606},
{C_text("f_3609:chicken_2dstatus_2escm"),(void*)f_3609},
{C_text("f_3615:chicken_2dstatus_2escm"),(void*)f_3615},
{C_text("f_3621:chicken_2dstatus_2escm"),(void*)f_3621},
{C_text("f_3627:chicken_2dstatus_2escm"),(void*)f_3627},
{C_text("f_3633:chicken_2dstatus_2escm"),(void*)f_3633},
{C_text("f_3639:chicken_2dstatus_2escm"),(void*)f_3639},
{C_text("f_3649:chicken_2dstatus_2escm"),(void*)f_3649},
{C_text("f_3677:chicken_2dstatus_2escm"),(void*)f_3677},
{C_text("f_3683:chicken_2dstatus_2escm"),(void*)f_3683},
{C_text("f_3687:chicken_2dstatus_2escm"),(void*)f_3687},
{C_text("f_3699:chicken_2dstatus_2escm"),(void*)f_3699},
{C_text("f_3709:chicken_2dstatus_2escm"),(void*)f_3709},
{C_text("f_3738:chicken_2dstatus_2escm"),(void*)f_3738},
{C_text("f_3742:chicken_2dstatus_2escm"),(void*)f_3742},
{C_text("f_3759:chicken_2dstatus_2escm"),(void*)f_3759},
{C_text("f_3767:chicken_2dstatus_2escm"),(void*)f_3767},
{C_text("f_3771:chicken_2dstatus_2escm"),(void*)f_3771},
{C_text("f_3777:chicken_2dstatus_2escm"),(void*)f_3777},
{C_text("f_3779:chicken_2dstatus_2escm"),(void*)f_3779},
{C_text("f_3804:chicken_2dstatus_2escm"),(void*)f_3804},
{C_text("f_3816:chicken_2dstatus_2escm"),(void*)f_3816},
{C_text("f_3822:chicken_2dstatus_2escm"),(void*)f_3822},
{C_text("f_3836:chicken_2dstatus_2escm"),(void*)f_3836},
{C_text("f_3838:chicken_2dstatus_2escm"),(void*)f_3838},
{C_text("f_3845:chicken_2dstatus_2escm"),(void*)f_3845},
{C_text("f_3850:chicken_2dstatus_2escm"),(void*)f_3850},
{C_text("f_3875:chicken_2dstatus_2escm"),(void*)f_3875},
{C_text("f_3886:chicken_2dstatus_2escm"),(void*)f_3886},
{C_text("f_3890:chicken_2dstatus_2escm"),(void*)f_3890},
{C_text("f_3892:chicken_2dstatus_2escm"),(void*)f_3892},
{C_text("f_3911:chicken_2dstatus_2escm"),(void*)f_3911},
{C_text("f_3958:chicken_2dstatus_2escm"),(void*)f_3958},
{C_text("f_3962:chicken_2dstatus_2escm"),(void*)f_3962},
{C_text("f_3972:chicken_2dstatus_2escm"),(void*)f_3972},
{C_text("f_3979:chicken_2dstatus_2escm"),(void*)f_3979},
{C_text("f_3987:chicken_2dstatus_2escm"),(void*)f_3987},
{C_text("f_3997:chicken_2dstatus_2escm"),(void*)f_3997},
{C_text("f_4037:chicken_2dstatus_2escm"),(void*)f_4037},
{C_text("f_4041:chicken_2dstatus_2escm"),(void*)f_4041},
{C_text("f_4047:chicken_2dstatus_2escm"),(void*)f_4047},
{C_text("f_4054:chicken_2dstatus_2escm"),(void*)f_4054},
{C_text("f_4058:chicken_2dstatus_2escm"),(void*)f_4058},
{C_text("f_4062:chicken_2dstatus_2escm"),(void*)f_4062},
{C_text("f_4067:chicken_2dstatus_2escm"),(void*)f_4067},
{C_text("f_4071:chicken_2dstatus_2escm"),(void*)f_4071},
{C_text("f_4074:chicken_2dstatus_2escm"),(void*)f_4074},
{C_text("f_4077:chicken_2dstatus_2escm"),(void*)f_4077},
{C_text("f_4095:chicken_2dstatus_2escm"),(void*)f_4095},
{C_text("f_4104:chicken_2dstatus_2escm"),(void*)f_4104},
{C_text("f_4107:chicken_2dstatus_2escm"),(void*)f_4107},
{C_text("f_4115:chicken_2dstatus_2escm"),(void*)f_4115},
{C_text("f_4125:chicken_2dstatus_2escm"),(void*)f_4125},
{C_text("f_4140:chicken_2dstatus_2escm"),(void*)f_4140},
{C_text("f_4144:chicken_2dstatus_2escm"),(void*)f_4144},
{C_text("f_4146:chicken_2dstatus_2escm"),(void*)f_4146},
{C_text("f_4152:chicken_2dstatus_2escm"),(void*)f_4152},
{C_text("f_4158:chicken_2dstatus_2escm"),(void*)f_4158},
{C_text("f_4329:chicken_2dstatus_2escm"),(void*)f_4329},
{C_text("f_4334:chicken_2dstatus_2escm"),(void*)f_4334},
{C_text("f_4338:chicken_2dstatus_2escm"),(void*)f_4338},
{C_text("f_4347:chicken_2dstatus_2escm"),(void*)f_4347},
{C_text("f_4353:chicken_2dstatus_2escm"),(void*)f_4353},
{C_text("f_4362:chicken_2dstatus_2escm"),(void*)f_4362},
{C_text("f_4366:chicken_2dstatus_2escm"),(void*)f_4366},
{C_text("f_4390:chicken_2dstatus_2escm"),(void*)f_4390},
{C_text("f_4398:chicken_2dstatus_2escm"),(void*)f_4398},
{C_text("f_4410:chicken_2dstatus_2escm"),(void*)f_4410},
{C_text("f_4420:chicken_2dstatus_2escm"),(void*)f_4420},
{C_text("f_4438:chicken_2dstatus_2escm"),(void*)f_4438},
{C_text("f_4442:chicken_2dstatus_2escm"),(void*)f_4442},
{C_text("f_4446:chicken_2dstatus_2escm"),(void*)f_4446},
{C_text("f_4451:chicken_2dstatus_2escm"),(void*)f_4451},
{C_text("f_4455:chicken_2dstatus_2escm"),(void*)f_4455},
{C_text("f_4466:chicken_2dstatus_2escm"),(void*)f_4466},
{C_text("f_4476:chicken_2dstatus_2escm"),(void*)f_4476},
{C_text("f_4495:chicken_2dstatus_2escm"),(void*)f_4495},
{C_text("f_4497:chicken_2dstatus_2escm"),(void*)f_4497},
{C_text("f_4501:chicken_2dstatus_2escm"),(void*)f_4501},
{C_text("f_4509:chicken_2dstatus_2escm"),(void*)f_4509},
{C_text("f_4519:chicken_2dstatus_2escm"),(void*)f_4519},
{C_text("f_4534:chicken_2dstatus_2escm"),(void*)f_4534},
{C_text("f_4536:chicken_2dstatus_2escm"),(void*)f_4536},
{C_text("f_4544:chicken_2dstatus_2escm"),(void*)f_4544},
{C_text("f_4546:chicken_2dstatus_2escm"),(void*)f_4546},
{C_text("f_4563:chicken_2dstatus_2escm"),(void*)f_4563},
{C_text("f_4574:chicken_2dstatus_2escm"),(void*)f_4574},
{C_text("f_4582:chicken_2dstatus_2escm"),(void*)f_4582},
{C_text("f_4592:chicken_2dstatus_2escm"),(void*)f_4592},
{C_text("f_4621:chicken_2dstatus_2escm"),(void*)f_4621},
{C_text("f_4634:chicken_2dstatus_2escm"),(void*)f_4634},
{C_text("f_4637:chicken_2dstatus_2escm"),(void*)f_4637},
{C_text("f_4642:chicken_2dstatus_2escm"),(void*)f_4642},
{C_text("f_4655:chicken_2dstatus_2escm"),(void*)f_4655},
{C_text("f_4662:chicken_2dstatus_2escm"),(void*)f_4662},
{C_text("f_4666:chicken_2dstatus_2escm"),(void*)f_4666},
{C_text("f_4779:chicken_2dstatus_2escm"),(void*)f_4779},
{C_text("f_4786:chicken_2dstatus_2escm"),(void*)f_4786},
{C_text("f_4801:chicken_2dstatus_2escm"),(void*)f_4801},
{C_text("f_4814:chicken_2dstatus_2escm"),(void*)f_4814},
{C_text("f_4826:chicken_2dstatus_2escm"),(void*)f_4826},
{C_text("f_4830:chicken_2dstatus_2escm"),(void*)f_4830},
{C_text("f_4875:chicken_2dstatus_2escm"),(void*)f_4875},
{C_text("f_4909:chicken_2dstatus_2escm"),(void*)f_4909},
{C_text("f_4915:chicken_2dstatus_2escm"),(void*)f_4915},
{C_text("f_4919:chicken_2dstatus_2escm"),(void*)f_4919},
{C_text("f_4927:chicken_2dstatus_2escm"),(void*)f_4927},
{C_text("f_4934:chicken_2dstatus_2escm"),(void*)f_4934},
{C_text("f_4937:chicken_2dstatus_2escm"),(void*)f_4937},
{C_text("f_4944:chicken_2dstatus_2escm"),(void*)f_4944},
{C_text("f_4949:chicken_2dstatus_2escm"),(void*)f_4949},
{C_text("f_4954:chicken_2dstatus_2escm"),(void*)f_4954},
{C_text("f_4958:chicken_2dstatus_2escm"),(void*)f_4958},
{C_text("f_4962:chicken_2dstatus_2escm"),(void*)f_4962},
{C_text("f_4969:chicken_2dstatus_2escm"),(void*)f_4969},
{C_text("f_4971:chicken_2dstatus_2escm"),(void*)f_4971},
{C_text("toplevel:chicken_2dstatus_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#staticbuild 
o|hiding unexported module binding: main#debugbuild 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#binary-version 
o|hiding unexported module binding: main#major-version 
o|hiding unexported module binding: main#chicken-install-program 
o|hiding unexported module binding: main#default-cc 
o|hiding unexported module binding: main#default-cxx 
o|hiding unexported module binding: main#default-install-program 
o|hiding unexported module binding: main#default-cflags 
o|hiding unexported module binding: main#default-ldflags 
o|hiding unexported module binding: main#default-install-program-executable-flags 
o|hiding unexported module binding: main#default-install-program-data-flags 
o|hiding unexported module binding: main#default-libs 
o|hiding unexported module binding: main#default-libdir 
o|hiding unexported module binding: main#default-runlibdir 
o|hiding unexported module binding: main#default-slibdir 
o|hiding unexported module binding: main#default-incdir 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-sharedir 
o|hiding unexported module binding: main#default-platform 
o|hiding unexported module binding: main#default-prefix 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-csc 
o|hiding unexported module binding: main#default-csi 
o|hiding unexported module binding: main#default-builder 
o|hiding unexported module binding: main#target-librarian 
o|hiding unexported module binding: main#target-librarian-options 
o|hiding unexported module binding: main#host-prefix 
o|hiding unexported module binding: main#host-repo 
o|hiding unexported module binding: main#host-libdir 
o|hiding unexported module binding: main#host-bindir 
o|hiding unexported module binding: main#host-incdir 
o|hiding unexported module binding: main#host-sharedir 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#host-cflags 
o|hiding unexported module binding: main#host-ldflags 
o|hiding unexported module binding: main#host-cc 
o|hiding unexported module binding: main#host-cxx 
o|hiding unexported module binding: main#target-repo 
o|hiding unexported module binding: main#target-run-repo 
o|hiding unexported module binding: main#+egg-info-extension+ 
o|hiding unexported module binding: main#+version-file+ 
o|hiding unexported module binding: main#+timestamp-file+ 
o|hiding unexported module binding: main#+status-file+ 
o|hiding unexported module binding: main#+egg-extension+ 
o|hiding unexported module binding: main#validate-environment 
o|hiding unexported module binding: main#destination-repository 
o|hiding unexported module binding: main#probe-dir 
o|hiding unexported module binding: main#cache-directory 
o|hiding unexported module binding: main#locate-egg-file 
o|hiding unexported module binding: main#load-egg-info 
o|hiding unexported module binding: main#get-egg-property 
o|hiding unexported module binding: main#get-egg-property* 
o|hiding unexported module binding: main#get-extension-property/internal 
o|hiding unexported module binding: main#get-extension-property 
o|hiding unexported module binding: main#get-extension-property* 
o|hiding unexported module binding: main#host-extensions 
o|hiding unexported module binding: main#target-extensions 
o|hiding unexported module binding: main#get-terminal-width 
o|hiding unexported module binding: main#list-width 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#read-info 
o|hiding unexported module binding: main#filter-egg-names 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#list-installed-eggs 
o|hiding unexported module binding: main#list-egg-info 
o|hiding unexported module binding: main#list-cached-eggs 
o|hiding unexported module binding: main#gather-components 
o|hiding unexported module binding: main#gather-components-rec 
o|hiding unexported module binding: main#list-installed-components 
o|hiding unexported module binding: main#list-installed-files 
o|hiding unexported module binding: main#dump-installed-versions 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		6
S|  chicken.base#foldl		3
S|  scheme#map		6
S|  chicken.base#foldr		3
o|eliminated procedure checks: 83 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  9 (scheme#string=? string string)
o|  1 (chicken.base#current-error-port)
o|  4 (scheme#string-append string string)
o|  1 (scheme#zero? *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#cdar (pair pair *))
o|  16 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  39 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 488 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|merged explicitly consed rest parameter: lsts187 
o|inlining procedure: k1891 
o|inlining procedure: k1906 
o|inlining procedure: k1906 
o|inlining procedure: k1891 
o|inlining procedure: k1946 
o|inlining procedure: k1946 
o|inlining procedure: k1978 
o|contracted procedure: "(mini-srfi-1.scm:77) g240249" 
o|inlining procedure: k1978 
o|inlining procedure: k2027 
o|contracted procedure: "(mini-srfi-1.scm:76) g213222" 
o|inlining procedure: k2027 
o|inlining procedure: k2070 
o|inlining procedure: k2070 
o|inlining procedure: k2101 
o|inlining procedure: k2101 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|inlining procedure: k2262 
o|inlining procedure: k2262 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2187 
o|inlining procedure: k2187 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2318 
o|inlining procedure: k2318 
o|inlining procedure: k2310 
o|inlining procedure: k2310 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2709 
o|inlining procedure: k2709 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#default-cc 
o|removed side-effect free assignment to unused variable: main#default-cxx 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-cflags 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-libs 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-incdir 
o|removed side-effect free assignment to unused variable: main#default-sharedir 
o|removed side-effect free assignment to unused variable: main#default-platform 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#target-librarian 
o|removed side-effect free assignment to unused variable: main#target-librarian-options 
o|removed side-effect free assignment to unused variable: main#host-prefix 
o|removed side-effect free assignment to unused variable: main#host-libdir 
o|removed side-effect free assignment to unused variable: main#host-bindir 
o|removed side-effect free assignment to unused variable: main#host-incdir 
o|removed side-effect free assignment to unused variable: main#host-sharedir 
o|removed side-effect free assignment to unused variable: main#host-libs 
o|removed side-effect free assignment to unused variable: main#host-cflags 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#host-cc 
o|removed side-effect free assignment to unused variable: main#host-cxx 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|merged explicitly consed rest parameter: rest801804 
o|inlining procedure: k3240 
o|inlining procedure: k3240 
o|merged explicitly consed rest parameter: rest819822 
o|inlining procedure: k3264 
o|inlining procedure: k3264 
o|inlining procedure: k3282 
o|inlining procedure: k3300 
o|inlining procedure: k3300 
o|inlining procedure: k3317 
o|inlining procedure: k3317 
o|substituted constant variable: a3358 
o|substituted constant variable: a3360 
o|inlining procedure: k3282 
o|inlining procedure: k3368 
o|inlining procedure: k3368 
o|inlining procedure: k3378 
o|inlining procedure: k3396 
o|inlining procedure: k3396 
o|inlining procedure: k3413 
o|inlining procedure: k3413 
o|inlining procedure: k3443 
o|inlining procedure: k3443 
o|substituted constant variable: a3472 
o|substituted constant variable: a3474 
o|substituted constant variable: a3476 
o|inlining procedure: k3378 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|inlining procedure: k3574 
o|substituted constant variable: default-width929 
o|substituted constant variable: default-width929 
o|inlining procedure: k3574 
o|substituted constant variable: default-width929 
o|propagated global variable: cop930 ##sys#standard-output 
o|inlining procedure: k3651 
o|contracted procedure: "(chicken-status.scm:66) main#destination-repository" 
o|inlining procedure: k3151 
o|inlining procedure: k3151 
o|inlining procedure: k3651 
o|merged explicitly consed rest parameter: rest961963 
o|inlining procedure: k3700 
o|contracted procedure: "(chicken-status.scm:74) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3197 
o|inlining procedure: k3197 
o|inlining procedure: k3700 
o|inlining procedure: k3740 
o|inlining procedure: k3740 
o|contracted procedure: "(chicken-status.scm:81) main#grep" 
o|propagated global variable: g955956 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-status.scm:79) main#concatenate" 
o|inlining procedure: k2159 
o|inlining procedure: k2159 
o|inlining procedure: k3781 
o|inlining procedure: k3781 
o|merged explicitly consed rest parameter: rest10531056 
o|inlining procedure: k3912 
o|inlining procedure: k3912 
o|inlining procedure: k3989 
o|inlining procedure: k3989 
o|consed rest parameter at call site: "(chicken-status.scm:120) main#format-string" 3 
o|substituted constant variable: a4063 
o|consed rest parameter at call site: "(chicken-status.scm:118) main#format-string" 3 
o|inlining procedure: k4078 
o|inlining procedure: k4078 
o|substituted constant variable: main#+version-file+ 
o|consed rest parameter at call site: "(chicken-status.scm:114) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:113) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:132) main#append-map" 3 
o|inlining procedure: k4163 
o|inlining procedure: k4163 
o|inlining procedure: k4183 
o|inlining procedure: k4183 
o|inlining procedure: k4191 
o|inlining procedure: k4191 
o|inlining procedure: k4225 
o|inlining procedure: k4225 
o|inlining procedure: k4259 
o|inlining procedure: k4259 
o|inlining procedure: k4293 
o|inlining procedure: k4293 
o|substituted constant variable: a4311 
o|substituted constant variable: a4313 
o|substituted constant variable: a4315 
o|substituted constant variable: a4317 
o|substituted constant variable: a4319 
o|substituted constant variable: a4321 
o|substituted constant variable: a4323 
o|substituted constant variable: a4325 
o|substituted constant variable: a4327 
o|inlining procedure: k4348 
o|inlining procedure: k4412 
o|contracted procedure: "(chicken-status.scm:164) g11901197" 
o|inlining procedure: k4371 
o|inlining procedure: k4371 
o|substituted constant variable: a4384 
o|substituted constant variable: a4386 
o|consed rest parameter at call site: "(chicken-status.scm:167) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:166) main#format-string" 3 
o|inlining procedure: k4412 
o|inlining procedure: k4348 
o|consed rest parameter at call site: "(chicken-status.scm:158) main#format-string" 3 
o|substituted constant variable: a4447 
o|consed rest parameter at call site: "(chicken-status.scm:157) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:155) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:154) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:153) main#read-info" 2 
o|inlining procedure: k4468 
o|inlining procedure: k4468 
o|inlining procedure: k4511 
o|inlining procedure: k4511 
o|consed rest parameter at call site: "(chicken-status.scm:181) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:181) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:179) main#append-map" 3 
o|inlining procedure: k4584 
o|contracted procedure: "(chicken-status.scm:186) g12421249" 
o|inlining procedure: k4565 
o|inlining procedure: k4565 
o|consed rest parameter at call site: "(chicken-status.scm:188) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:188) main#read-info" 2 
o|inlining procedure: k4584 
o|contracted procedure: "(chicken-status.scm:269) main#main" 
o|inlining procedure: k4623 
o|inlining procedure: k4647 
o|contracted procedure: "(chicken-status.scm:224) main#list-cached-eggs" 
o|inlining procedure: k4090 
o|inlining procedure: k4117 
o|contracted procedure: "(chicken-status.scm:126) g11321139" 
o|substituted constant variable: main#+egg-extension+ 
o|inlining procedure: k4117 
o|inlining procedure: k4090 
o|inlining procedure: k4647 
o|contracted procedure: "(chicken-status.scm:230) main#gather-eggs" 
o|inlining procedure: k3852 
o|inlining procedure: k3852 
o|consed rest parameter at call site: "(chicken-status.scm:92) main#append-map" 3 
o|inlining procedure: k4667 
o|propagated global variable: r46685101 main#list-installed-files 
o|inlining procedure: k4667 
o|inlining procedure: k4673 
o|inlining procedure: k4673 
o|inlining procedure: k4623 
o|inlining procedure: k4688 
o|inlining procedure: k4688 
o|substituted constant variable: a4704 
o|substituted constant variable: a4715 
o|inlining procedure: k4711 
o|inlining procedure: k4711 
o|substituted constant variable: a4726 
o|substituted constant variable: a4737 
o|inlining procedure: k4733 
o|inlining procedure: k4733 
o|substituted constant variable: a4748 
o|substituted constant variable: a4762 
o|inlining procedure: k4758 
o|inlining procedure: k4758 
o|substituted constant variable: a4776 
o|inlining procedure: k4787 
o|inlining procedure: k4802 
o|inlining procedure: k4832 
o|contracted procedure: "(chicken-status.scm:263) g13281337" 
o|inlining procedure: k4832 
o|inlining procedure: k4802 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4883 
o|inlining procedure: k4787 
o|substituted constant variable: a4901 
o|substituted constant variable: a4898 
o|substituted constant variable: a4904 
o|substituted constant variable: a4906 
o|inlining procedure: k4935 
o|inlining procedure: k4935 
o|replaced variables: 624 
o|removed binding forms: 209 
o|substituted constant variable: r19074990 
o|substituted constant variable: r19474992 
o|substituted constant variable: r21025000 
o|substituted constant variable: r23115009 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r35755033 
o|substituted constant variable: mode721 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r37015041 
o|substituted constant variable: r21605052 
o|substituted constant variable: r40795061 
o|substituted constant variable: r41845065 
o|substituted constant variable: r42945073 
o|substituted constant variable: r43725076 
o|substituted constant variable: r43725076 
o|inlining procedure: k4371 
o|inlining procedure: k4371 
o|substituted constant variable: r45665089 
o|substituted constant variable: r45665089 
o|removed side-effect free assignment to unused variable: main#short-options 
o|contracted procedure: "(chicken-status.scm:262) main#every" 
o|replaced variables: 63 
o|removed binding forms: 551 
o|inlining procedure: k3237 
o|inlining procedure: k3261 
o|contracted procedure: k3154 
o|inlining procedure: k3661 
o|propagated global variable: r36625232 main#target-run-repo 
o|inlining procedure: k3661 
o|propagated global variable: r36625233 main#target-repo 
o|inlining procedure: k3661 
o|inlining procedure: k3661 
o|propagated global variable: r36625235 main#host-repo 
o|inlining procedure: k3222 
o|inlining procedure: k3222 
o|inlining procedure: k4075 
o|inlining procedure: "(chicken-status.scm:233) main#usage" 
o|inlining procedure: "(chicken-status.scm:265) main#usage" 
o|inlining procedure: "(chicken-status.scm:266) main#usage" 
o|replaced variables: 3 
o|removed binding forms: 73 
o|substituted constant variable: r32385226 
o|substituted constant variable: r32385226 
o|substituted constant variable: r32625229 
o|substituted constant variable: r32625229 
o|substituted constant variable: r3155 
o|substituted constant variable: r40765248 
o|substituted constant variable: r40765248 
o|substituted constant variable: r43725162 
o|substituted constant variable: r43725164 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code12595264 
o|substituted constant variable: code12595271 
o|inlining procedure: "(mini-srfi-1.scm:82) a4866" 
o|substituted constant variable: code12595278 
o|replaced variables: 6 
o|removed binding forms: 11 
o|removed conditional forms: 4 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|replaced variables: 2 
o|removed binding forms: 16 
o|removed binding forms: 3 
o|simplifications: ((if . 24) (let . 16) (##core#call . 191)) 
o|  call simplifications:
o|    scheme#member
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#string->list
o|    scheme#memq
o|    scheme#string
o|    scheme#-	2
o|    scheme#quotient	2
o|    scheme#caddr
o|    scheme#eq?	12
o|    scheme#list	18
o|    scheme#string-length
o|    chicken.fixnum#fx-
o|    chicken.fixnum#fxmax
o|    scheme#string=?	2
o|    scheme#not	2
o|    ##sys#apply
o|    ##sys#call-with-values	2
o|    scheme#list-ref
o|    scheme#assq	2
o|    scheme#cadr	9
o|    scheme#equal?
o|    scheme#null?	23
o|    scheme#car	18
o|    scheme#apply
o|    scheme#cdr	8
o|    scheme#cons	17
o|    ##sys#setslot	5
o|    ##sys#check-list	10
o|    scheme#pair?	13
o|    ##sys#slot	31
o|contracted procedure: k1894 
o|contracted procedure: k1897 
o|contracted procedure: k1909 
o|contracted procedure: k1925 
o|contracted procedure: k1933 
o|contracted procedure: k1940 
o|contracted procedure: k1964 
o|contracted procedure: k1981 
o|contracted procedure: k2003 
o|contracted procedure: k1999 
o|contracted procedure: k1984 
o|contracted procedure: k1987 
o|contracted procedure: k1995 
o|contracted procedure: k2010 
o|contracted procedure: k2018 
o|contracted procedure: k2030 
o|contracted procedure: k2052 
o|contracted procedure: k2048 
o|contracted procedure: k2033 
o|contracted procedure: k2036 
o|contracted procedure: k2044 
o|contracted procedure: k2104 
o|contracted procedure: k2119 
o|contracted procedure: k2265 
o|contracted procedure: k2268 
o|contracted procedure: k2278 
o|contracted procedure: k2190 
o|contracted procedure: k2216 
o|contracted procedure: k2301 
o|contracted procedure: k2313 
o|contracted procedure: k2331 
o|contracted procedure: k2339 
o|contracted procedure: k4963 
o|contracted procedure: k3036 
o|contracted procedure: k3246 
o|contracted procedure: k3231 
o|contracted procedure: k3234 
o|contracted procedure: k3237 
o|contracted procedure: k3270 
o|contracted procedure: k3255 
o|contracted procedure: k3258 
o|contracted procedure: k3261 
o|contracted procedure: k4921 
o|contracted procedure: k3645 
o|contracted procedure: k3654 
o|contracted procedure: k3166 
o|contracted procedure: k3148 
o|contracted procedure: k3722 
o|contracted procedure: k3688 
o|contracted procedure: k3716 
o|contracted procedure: k3691 
o|contracted procedure: k3710 
o|contracted procedure: k3694 
o|contracted procedure: k3728 
o|contracted procedure: k3746 
o|contracted procedure: k3756 
o|contracted procedure: k3772 
o|contracted procedure: k2162 
o|contracted procedure: k2169 
o|contracted procedure: k3784 
o|contracted procedure: k3787 
o|contracted procedure: k3790 
o|contracted procedure: k3798 
o|contracted procedure: k3806 
o|contracted procedure: k3951 
o|contracted procedure: k3894 
o|contracted procedure: k3945 
o|contracted procedure: k3897 
o|contracted procedure: k3939 
o|contracted procedure: k3900 
o|contracted procedure: k3933 
o|contracted procedure: k3903 
o|contracted procedure: k3906 
o|contracted procedure: k3930 
o|contracted procedure: k3926 
o|contracted procedure: k4021 
o|contracted procedure: k3963 
o|contracted procedure: k4015 
o|contracted procedure: k3966 
o|contracted procedure: k4009 
o|contracted procedure: k3969 
o|contracted procedure: k3980 
o|contracted procedure: k3992 
o|contracted procedure: k4002 
o|contracted procedure: k4006 
o|contracted procedure: k4027 
o|contracted procedure: k4160 
o|contracted procedure: k4166 
o|contracted procedure: k4180 
o|contracted procedure: k4194 
o|contracted procedure: k4205 
o|contracted procedure: k4201 
o|contracted procedure: k4211 
o|contracted procedure: k4222 
o|contracted procedure: k4218 
o|contracted procedure: k4228 
o|contracted procedure: k4239 
o|contracted procedure: k4235 
o|contracted procedure: k4245 
o|contracted procedure: k4256 
o|contracted procedure: k4252 
o|contracted procedure: k4262 
o|contracted procedure: k4273 
o|contracted procedure: k4269 
o|contracted procedure: k4279 
o|contracted procedure: k4290 
o|contracted procedure: k4286 
o|contracted procedure: k4296 
o|contracted procedure: k4307 
o|contracted procedure: k4303 
o|contracted procedure: k4489 
o|contracted procedure: k4331 
o|contracted procedure: k4403 
o|contracted procedure: k4415 
o|contracted procedure: k4425 
o|contracted procedure: k4429 
o|contracted procedure: k4368 
o|contracted procedure: k4374 
o|contracted procedure: k4380 
o|contracted procedure: k4392 
o|contracted procedure: k4400 
o|contracted procedure: k4459 
o|contracted procedure: k4471 
o|contracted procedure: k4481 
o|contracted procedure: k4485 
o|contracted procedure: k4502 
o|contracted procedure: k4514 
o|contracted procedure: k4524 
o|contracted procedure: k4528 
o|contracted procedure: k4575 
o|contracted procedure: k4587 
o|contracted procedure: k4597 
o|contracted procedure: k4601 
o|contracted procedure: k4565 
o|inlining procedure: k4557 
o|inlining procedure: k4557 
o|contracted procedure: k4626 
o|contracted procedure: k4108 
o|contracted procedure: k4120 
o|contracted procedure: k4130 
o|contracted procedure: k4134 
o|contracted procedure: k3840 
o|contracted procedure: k3855 
o|contracted procedure: k3858 
o|contracted procedure: k3861 
o|contracted procedure: k3869 
o|contracted procedure: k3877 
o|contracted procedure: k4676 
o|contracted procedure: k4682 
o|contracted procedure: k4691 
o|contracted procedure: k4749 
o|contracted procedure: k4763 
o|contracted procedure: k4895 
o|contracted procedure: k4790 
o|contracted procedure: k4880 
o|contracted procedure: k4796 
o|contracted procedure: k4816 
o|contracted procedure: k4835 
o|contracted procedure: k4857 
o|contracted procedure: k4853 
o|contracted procedure: k4838 
o|contracted procedure: k4841 
o|contracted procedure: k4849 
o|contracted procedure: k2067 
o|contracted procedure: k2089 
o|contracted procedure: k2085 
o|contracted procedure: k2076 
o|contracted procedure: k4891 
o|contracted procedure: k4977 
o|contracted procedure: k4981 
o|contracted procedure: k4985 
o|simplifications: ((if . 1) (let . 49)) 
o|removed binding forms: 169 
o|substituted constant variable: r4978 
o|substituted constant variable: r4982 
o|substituted constant variable: r4986 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|direct leaf routine/allocation: main#get-egg-property 0 
o|direct leaf routine/allocation: main#get-egg-property* 0 
o|direct leaf routine/allocation: loop263 0 
o|contracted procedure: "(chicken-status.scm:154) k4339" 
o|contracted procedure: "(chicken-status.scm:155) k4342" 
o|contracted procedure: "(chicken-status.scm:188) k4550" 
o|contracted procedure: k4805 
o|converted assignments to bindings: (loop263) 
o|simplifications: ((let . 1) (if . 1)) 
o|removed binding forms: 4 
o|contracted procedure: "(chicken-status.scm:114) k4042" 
o|removed binding forms: 1 
o|customizable procedures: (map-loop13221347 loop1269 k4632 k4653 map-loop10251042 main#filter-egg-names for-each-loop11311142 for-each-loop12411253 for-each-loop12211232 main#get-terminal-width g11731180 for-each-loop11721212 for-each-loop11891206 main#gather-components main#append-map main#read-info k4045 main#format-string g10891096 for-each-loop10881106 g9931002 map-loop9871005 loop295 main#filter main#delete-duplicates main#repo-path foldr339342 g344345 loop302 loop322 loop276 main#any map-loop207225 map-loop234252 loop203 foldr192195 g197198) 
o|calls to known targets: 97 
o|identified direct recursive calls: f_1904 1 
o|identified direct recursive calls: f_1976 1 
o|identified direct recursive calls: f_2025 1 
o|identified direct recursive calls: f_2308 1 
o|identified direct recursive calls: f_2157 1 
o|identified direct recursive calls: f_2065 1 
o|identified direct recursive calls: f_4830 1 
o|identified direct recursive calls: f_4621 8 
o|fast box initializations: 19 
o|fast global references: 72 
o|fast global assignments: 37 
o|dropping unused closure argument: f_1889 
o|dropping unused closure argument: f_2065 
o|dropping unused closure argument: f_2093 
o|dropping unused closure argument: f_2254 
o|dropping unused closure argument: f_2299 
o|dropping unused closure argument: f_3229 
o|dropping unused closure argument: f_3253 
o|dropping unused closure argument: f_3572 
o|dropping unused closure argument: f_3649 
o|dropping unused closure argument: f_3683 
o|dropping unused closure argument: f_3738 
o|dropping unused closure argument: f_3892 
o|dropping unused closure argument: f_4146 
*/
/* end of file */
