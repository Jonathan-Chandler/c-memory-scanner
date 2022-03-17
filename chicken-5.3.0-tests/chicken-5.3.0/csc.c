/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file csc.c
   uses: eval data-structures posix pathname extras file library
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
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[450];
static double C_possibly_force_alignment;


C_noret_decl(f8671)
static void C_ccall f8671(C_word c,C_word *av) C_noret;
C_noret_decl(f8677)
static void C_ccall f8677(C_word c,C_word *av) C_noret;
C_noret_decl(f8681)
static void C_ccall f8681(C_word c,C_word *av) C_noret;
C_noret_decl(f8713)
static void C_ccall f8713(C_word c,C_word *av) C_noret;
C_noret_decl(f8761)
static void C_ccall f8761(C_word c,C_word *av) C_noret;
C_noret_decl(f9076)
static void C_ccall f9076(C_word c,C_word *av) C_noret;
C_noret_decl(f9080)
static void C_ccall f9080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word *av) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word *av) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word *av) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word *av) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word *av) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word *av) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word *av) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word *av) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word *av) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word *av) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word *av) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word *av) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word *av) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2969)
static void C_fcall f_2969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2975)
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_fcall f_3031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word *av) C_noret;
C_noret_decl(f_3106)
static void C_fcall f_3106(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3154)
static void C_fcall f_3154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3162)
static C_word C_fcall f_3162(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static void C_fcall f_3198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static C_word C_fcall f_3214(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3311)
static C_word C_fcall f_3311(C_word t0);
C_noret_decl(f_3411)
static void C_fcall f_3411(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3433)
static C_word C_fcall f_3433(C_word t0,C_word t1);
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_fcall f_3851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word *av) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word *av) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word *av) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_fcall f_3972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_fcall f_3975(C_word t0) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word *av) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4122)
static void C_ccall f_4122(C_word c,C_word *av) C_noret;
C_noret_decl(f_4141)
static void C_fcall f_4141(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_fcall f_4145(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4170)
static void C_fcall f_4170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_fcall f_4264(C_word t0) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word *av) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word *av) C_noret;
C_noret_decl(f_4388)
static void C_fcall f_4388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word *av) C_noret;
C_noret_decl(f_4395)
static void C_fcall f_4395(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4421)
static void C_fcall f_4421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_4451)
static void C_fcall f_4451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_fcall f_4467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word *av) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4503)
static void C_fcall f_4503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word *av) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word *av) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word *av) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word *av) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word *av) C_noret;
C_noret_decl(f_4555)
static void C_ccall f_4555(C_word c,C_word *av) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word *av) C_noret;
C_noret_decl(f_4561)
static void C_ccall f_4561(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word *av) C_noret;
C_noret_decl(f_4647)
static void C_fcall f_4647(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_fcall f_4650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word *av) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word *av) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word *av) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word *av) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word *av) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word *av) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word *av) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word *av) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_fcall f_4915(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word *av) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word *av) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word *av) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word *av) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word *av) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word *av) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word *av) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word *av) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word *av) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word *av) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word *av) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word *av) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word *av) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word *av) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word *av) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word *av) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_5350)
static void C_fcall f_5350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_5425)
static void C_ccall f_5425(C_word c,C_word *av) C_noret;
C_noret_decl(f_5442)
static void C_ccall f_5442(C_word c,C_word *av) C_noret;
C_noret_decl(f_5446)
static void C_ccall f_5446(C_word c,C_word *av) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word *av) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word *av) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word *av) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word *av) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word *av) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word *av) C_noret;
C_noret_decl(f_5541)
static void C_fcall f_5541(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word *av) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word *av) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word *av) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word *av) C_noret;
C_noret_decl(f_5633)
static void C_fcall f_5633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5636)
static void C_fcall f_5636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5643)
static C_word C_fcall f_5643(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word *av) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_fcall f_5690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word *av) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word *av) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word *av) C_noret;
C_noret_decl(f_5791)
static void C_fcall f_5791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word *av) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_fcall f_5837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word *av) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word *av) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word *av) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word *av) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word *av) C_noret;
C_noret_decl(f_5985)
static void C_fcall f_5985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word *av) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_fcall f_6021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6285)
static void C_ccall f_6285(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6294)
static void C_fcall f_6294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word *av) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word *av) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word *av) C_noret;
C_noret_decl(f_6341)
static void C_fcall f_6341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6360)
static void C_fcall f_6360(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_fcall f_6396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void C_fcall f_6456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6481)
static void C_fcall f_6481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word *av) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word *av) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word *av) C_noret;
C_noret_decl(f_6503)
static void C_ccall f_6503(C_word c,C_word *av) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word *av) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word *av) C_noret;
C_noret_decl(f_6523)
static void C_fcall f_6523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word *av) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word *av) C_noret;
C_noret_decl(f_6570)
static void C_fcall f_6570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6571)
static void C_fcall f_6571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word *av) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word *av) C_noret;
C_noret_decl(f_6590)
static void C_ccall f_6590(C_word c,C_word *av) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word *av) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word *av) C_noret;
C_noret_decl(f_6629)
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6652)
static void C_fcall f_6652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word *av) C_noret;
C_noret_decl(f_6677)
static void C_ccall f_6677(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void C_fcall f_6679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6689)
static void C_ccall f_6689(C_word c,C_word *av) C_noret;
C_noret_decl(f_6703)
static void C_fcall f_6703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word *av) C_noret;
C_noret_decl(f_6721)
static void C_ccall f_6721(C_word c,C_word *av) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_fcall f_6730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6753)
static void C_fcall f_6753(C_word t0) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word *av) C_noret;
C_noret_decl(f_6770)
static void C_ccall f_6770(C_word c,C_word *av) C_noret;
C_noret_decl(f_6772)
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6797)
static void C_ccall f_6797(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6820)
static void C_ccall f_6820(C_word c,C_word *av) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word *av) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word *av) C_noret;
C_noret_decl(f_6829)
static void C_ccall f_6829(C_word c,C_word *av) C_noret;
C_noret_decl(f_6835)
static void C_ccall f_6835(C_word c,C_word *av) C_noret;
C_noret_decl(f_6843)
static void C_fcall f_6843(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6853)
static void C_ccall f_6853(C_word c,C_word *av) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word *av) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word *av) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6896)
static void C_ccall f_6896(C_word c,C_word *av) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word *av) C_noret;
C_noret_decl(f_6909)
static void C_ccall f_6909(C_word c,C_word *av) C_noret;
C_noret_decl(f_6916)
static void C_ccall f_6916(C_word c,C_word *av) C_noret;
C_noret_decl(f_6921)
static void C_ccall f_6921(C_word c,C_word *av) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word *av) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word *av) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word *av) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word *av) C_noret;
C_noret_decl(f_6956)
static void C_fcall f_6956(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word *av) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word *av) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word *av) C_noret;
C_noret_decl(f_7007)
static void C_ccall f_7007(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word *av) C_noret;
C_noret_decl(f_7036)
static void C_ccall f_7036(C_word c,C_word *av) C_noret;
C_noret_decl(f_7044)
static void C_fcall f_7044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7054)
static void C_fcall f_7054(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word *av) C_noret;
C_noret_decl(f_7078)
static void C_fcall f_7078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7103)
static void C_ccall f_7103(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static void C_fcall f_7115(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7129)
static void C_ccall f_7129(C_word c,C_word *av) C_noret;
C_noret_decl(f_7135)
static void C_fcall f_7135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word *av) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word *av) C_noret;
C_noret_decl(f_7148)
static void C_ccall f_7148(C_word c,C_word *av) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word *av) C_noret;
C_noret_decl(f_7161)
static void C_ccall f_7161(C_word c,C_word *av) C_noret;
C_noret_decl(f_7240)
static void C_fcall f_7240(C_word t0) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word *av) C_noret;
C_noret_decl(f_7259)
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7284)
static void C_ccall f_7284(C_word c,C_word *av) C_noret;
C_noret_decl(f_7293)
static void C_fcall f_7293(C_word t0) C_noret;
C_noret_decl(f_7301)
static void C_ccall f_7301(C_word c,C_word *av) C_noret;
C_noret_decl(f_7328)
static void C_ccall f_7328(C_word c,C_word *av) C_noret;
C_noret_decl(f_7338)
static void C_ccall f_7338(C_word c,C_word *av) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word *av) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word *av) C_noret;
C_noret_decl(f_7348)
static void C_fcall f_7348(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word *av) C_noret;
C_noret_decl(f_7391)
static void C_fcall f_7391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7400)
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word *av) C_noret;
C_noret_decl(f_7425)
static void C_ccall f_7425(C_word c,C_word *av) C_noret;
C_noret_decl(f_7432)
static void C_ccall f_7432(C_word c,C_word *av) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word *av) C_noret;
C_noret_decl(f_7443)
static void C_ccall f_7443(C_word c,C_word *av) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word *av) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_7472)
static void C_ccall f_7472(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word *av) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word *av) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word *av) C_noret;
C_noret_decl(f_7517)
static void C_ccall f_7517(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static void C_fcall f_7521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7529)
static void C_ccall f_7529(C_word c,C_word *av) C_noret;
C_noret_decl(f_7537)
static void C_fcall f_7537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_ccall f_7550(C_word c,C_word *av) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word *av) C_noret;
C_noret_decl(f_7582)
static void C_ccall f_7582(C_word c,C_word *av) C_noret;
C_noret_decl(f_7585)
static void C_ccall f_7585(C_word c,C_word *av) C_noret;
C_noret_decl(f_7588)
static void C_ccall f_7588(C_word c,C_word *av) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word *av) C_noret;
C_noret_decl(f_7595)
static void C_ccall f_7595(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7603)
static void C_ccall f_7603(C_word c,C_word *av) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word *av) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word *av) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word *av) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word *av) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7665)
static void C_fcall f_7665(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word *av) C_noret;
C_noret_decl(f_7672)
static void C_ccall f_7672(C_word c,C_word *av) C_noret;
C_noret_decl(f_7688)
static void C_ccall f_7688(C_word c,C_word *av) C_noret;
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word *av) C_noret;
C_noret_decl(f_7699)
static void C_fcall f_7699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7724)
static void C_ccall f_7724(C_word c,C_word *av) C_noret;
C_noret_decl(f_7733)
static void C_fcall f_7733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7758)
static void C_ccall f_7758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7775)
static void C_ccall f_7775(C_word c,C_word *av) C_noret;
C_noret_decl(f_7795)
static void C_ccall f_7795(C_word c,C_word *av) C_noret;
C_noret_decl(f_7799)
static void C_ccall f_7799(C_word c,C_word *av) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word *av) C_noret;
C_noret_decl(f_7842)
static void C_ccall f_7842(C_word c,C_word *av) C_noret;
C_noret_decl(f_7846)
static void C_ccall f_7846(C_word c,C_word *av) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7857)
static void C_ccall f_7857(C_word c,C_word *av) C_noret;
C_noret_decl(f_7861)
static void C_ccall f_7861(C_word c,C_word *av) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word *av) C_noret;
C_noret_decl(f_7876)
static void C_ccall f_7876(C_word c,C_word *av) C_noret;
C_noret_decl(f_7879)
static void C_ccall f_7879(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7891)
static void C_ccall f_7891(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7900)
static void C_ccall f_7900(C_word c,C_word *av) C_noret;
C_noret_decl(f_7904)
static void C_ccall f_7904(C_word c,C_word *av) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word *av) C_noret;
C_noret_decl(f_7913)
static void C_ccall f_7913(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2969)
static void C_ccall trf_2969(C_word c,C_word *av) C_noret;
static void C_ccall trf_2969(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2969(t0,t1,t2);}

C_noret_decl(trf_2975)
static void C_ccall trf_2975(C_word c,C_word *av) C_noret;
static void C_ccall trf_2975(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2975(t0,t1,t2,t3);}

C_noret_decl(trf_3031)
static void C_ccall trf_3031(C_word c,C_word *av) C_noret;
static void C_ccall trf_3031(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3031(t0,t1,t2);}

C_noret_decl(trf_3106)
static void C_ccall trf_3106(C_word c,C_word *av) C_noret;
static void C_ccall trf_3106(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3106(t0,t1,t2);}

C_noret_decl(trf_3154)
static void C_ccall trf_3154(C_word c,C_word *av) C_noret;
static void C_ccall trf_3154(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3154(t0,t1,t2);}

C_noret_decl(trf_3198)
static void C_ccall trf_3198(C_word c,C_word *av) C_noret;
static void C_ccall trf_3198(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3198(t0,t1,t2);}

C_noret_decl(trf_3411)
static void C_ccall trf_3411(C_word c,C_word *av) C_noret;
static void C_ccall trf_3411(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3411(t0,t1,t2,t3);}

C_noret_decl(trf_3851)
static void C_ccall trf_3851(C_word c,C_word *av) C_noret;
static void C_ccall trf_3851(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3851(t0,t1,t2);}

C_noret_decl(trf_3972)
static void C_ccall trf_3972(C_word c,C_word *av) C_noret;
static void C_ccall trf_3972(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3972(t0,t1);}

C_noret_decl(trf_3975)
static void C_ccall trf_3975(C_word c,C_word *av) C_noret;
static void C_ccall trf_3975(C_word c,C_word *av){
C_word t0=av[0];
f_3975(t0);}

C_noret_decl(trf_4141)
static void C_ccall trf_4141(C_word c,C_word *av) C_noret;
static void C_ccall trf_4141(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4141(t0,t1);}

C_noret_decl(trf_4145)
static void C_ccall trf_4145(C_word c,C_word *av) C_noret;
static void C_ccall trf_4145(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4145(t0,t1);}

C_noret_decl(trf_4170)
static void C_ccall trf_4170(C_word c,C_word *av) C_noret;
static void C_ccall trf_4170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4170(t0,t1,t2);}

C_noret_decl(trf_4264)
static void C_ccall trf_4264(C_word c,C_word *av) C_noret;
static void C_ccall trf_4264(C_word c,C_word *av){
C_word t0=av[0];
f_4264(t0);}

C_noret_decl(trf_4388)
static void C_ccall trf_4388(C_word c,C_word *av) C_noret;
static void C_ccall trf_4388(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4388(t0,t1);}

C_noret_decl(trf_4395)
static void C_ccall trf_4395(C_word c,C_word *av) C_noret;
static void C_ccall trf_4395(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4395(t0,t1,t2,t3);}

C_noret_decl(trf_4421)
static void C_ccall trf_4421(C_word c,C_word *av) C_noret;
static void C_ccall trf_4421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4421(t0,t1);}

C_noret_decl(trf_4451)
static void C_ccall trf_4451(C_word c,C_word *av) C_noret;
static void C_ccall trf_4451(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4451(t0,t1);}

C_noret_decl(trf_4467)
static void C_ccall trf_4467(C_word c,C_word *av) C_noret;
static void C_ccall trf_4467(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4467(t0,t1,t2);}

C_noret_decl(trf_4503)
static void C_ccall trf_4503(C_word c,C_word *av) C_noret;
static void C_ccall trf_4503(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4503(t0,t1);}

C_noret_decl(trf_4647)
static void C_ccall trf_4647(C_word c,C_word *av) C_noret;
static void C_ccall trf_4647(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4647(t0,t1);}

C_noret_decl(trf_4650)
static void C_ccall trf_4650(C_word c,C_word *av) C_noret;
static void C_ccall trf_4650(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4650(t0,t1);}

C_noret_decl(trf_4915)
static void C_ccall trf_4915(C_word c,C_word *av) C_noret;
static void C_ccall trf_4915(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4915(t0,t1);}

C_noret_decl(trf_5350)
static void C_ccall trf_5350(C_word c,C_word *av) C_noret;
static void C_ccall trf_5350(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5350(t0,t1);}

C_noret_decl(trf_5541)
static void C_ccall trf_5541(C_word c,C_word *av) C_noret;
static void C_ccall trf_5541(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5541(t0,t1);}

C_noret_decl(trf_5633)
static void C_ccall trf_5633(C_word c,C_word *av) C_noret;
static void C_ccall trf_5633(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5633(t0,t1);}

C_noret_decl(trf_5636)
static void C_ccall trf_5636(C_word c,C_word *av) C_noret;
static void C_ccall trf_5636(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5636(t0,t1);}

C_noret_decl(trf_5690)
static void C_ccall trf_5690(C_word c,C_word *av) C_noret;
static void C_ccall trf_5690(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5690(t0,t1);}

C_noret_decl(trf_5791)
static void C_ccall trf_5791(C_word c,C_word *av) C_noret;
static void C_ccall trf_5791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5791(t0,t1);}

C_noret_decl(trf_5837)
static void C_ccall trf_5837(C_word c,C_word *av) C_noret;
static void C_ccall trf_5837(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5837(t0,t1,t2);}

C_noret_decl(trf_5985)
static void C_ccall trf_5985(C_word c,C_word *av) C_noret;
static void C_ccall trf_5985(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5985(t0,t1);}

C_noret_decl(trf_6021)
static void C_ccall trf_6021(C_word c,C_word *av) C_noret;
static void C_ccall trf_6021(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6021(t0,t1);}

C_noret_decl(trf_6294)
static void C_ccall trf_6294(C_word c,C_word *av) C_noret;
static void C_ccall trf_6294(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6294(t0,t1);}

C_noret_decl(trf_6341)
static void C_ccall trf_6341(C_word c,C_word *av) C_noret;
static void C_ccall trf_6341(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6341(t0,t1);}

C_noret_decl(trf_6360)
static void C_ccall trf_6360(C_word c,C_word *av) C_noret;
static void C_ccall trf_6360(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6360(t0,t1,t2);}

C_noret_decl(trf_6396)
static void C_ccall trf_6396(C_word c,C_word *av) C_noret;
static void C_ccall trf_6396(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6396(t0,t1);}

C_noret_decl(trf_6456)
static void C_ccall trf_6456(C_word c,C_word *av) C_noret;
static void C_ccall trf_6456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6456(t0,t1,t2);}

C_noret_decl(trf_6481)
static void C_ccall trf_6481(C_word c,C_word *av) C_noret;
static void C_ccall trf_6481(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6481(t0,t1,t2);}

C_noret_decl(trf_6523)
static void C_ccall trf_6523(C_word c,C_word *av) C_noret;
static void C_ccall trf_6523(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6523(t0,t1);}

C_noret_decl(trf_6570)
static void C_ccall trf_6570(C_word c,C_word *av) C_noret;
static void C_ccall trf_6570(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6570(t0,t1);}

C_noret_decl(trf_6571)
static void C_ccall trf_6571(C_word c,C_word *av) C_noret;
static void C_ccall trf_6571(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6571(t0,t1,t2);}

C_noret_decl(trf_6629)
static void C_ccall trf_6629(C_word c,C_word *av) C_noret;
static void C_ccall trf_6629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6629(t0,t1,t2);}

C_noret_decl(trf_6652)
static void C_ccall trf_6652(C_word c,C_word *av) C_noret;
static void C_ccall trf_6652(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6652(t0,t1,t2);}

C_noret_decl(trf_6679)
static void C_ccall trf_6679(C_word c,C_word *av) C_noret;
static void C_ccall trf_6679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6679(t0,t1,t2);}

C_noret_decl(trf_6703)
static void C_ccall trf_6703(C_word c,C_word *av) C_noret;
static void C_ccall trf_6703(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6703(t0,t1);}

C_noret_decl(trf_6730)
static void C_ccall trf_6730(C_word c,C_word *av) C_noret;
static void C_ccall trf_6730(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6730(t0,t1,t2);}

C_noret_decl(trf_6753)
static void C_ccall trf_6753(C_word c,C_word *av) C_noret;
static void C_ccall trf_6753(C_word c,C_word *av){
C_word t0=av[0];
f_6753(t0);}

C_noret_decl(trf_6772)
static void C_ccall trf_6772(C_word c,C_word *av) C_noret;
static void C_ccall trf_6772(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6772(t0,t1,t2);}

C_noret_decl(trf_6843)
static void C_ccall trf_6843(C_word c,C_word *av) C_noret;
static void C_ccall trf_6843(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6843(t0,t1,t2);}

C_noret_decl(trf_6956)
static void C_ccall trf_6956(C_word c,C_word *av) C_noret;
static void C_ccall trf_6956(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6956(t0,t1,t2);}

C_noret_decl(trf_7044)
static void C_ccall trf_7044(C_word c,C_word *av) C_noret;
static void C_ccall trf_7044(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7044(t0,t1,t2);}

C_noret_decl(trf_7054)
static void C_ccall trf_7054(C_word c,C_word *av) C_noret;
static void C_ccall trf_7054(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7054(t0,t1);}

C_noret_decl(trf_7078)
static void C_ccall trf_7078(C_word c,C_word *av) C_noret;
static void C_ccall trf_7078(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7078(t0,t1,t2);}

C_noret_decl(trf_7115)
static void C_ccall trf_7115(C_word c,C_word *av) C_noret;
static void C_ccall trf_7115(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7115(t0,t1,t2,t3);}

C_noret_decl(trf_7135)
static void C_ccall trf_7135(C_word c,C_word *av) C_noret;
static void C_ccall trf_7135(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7135(t0,t1);}

C_noret_decl(trf_7240)
static void C_ccall trf_7240(C_word c,C_word *av) C_noret;
static void C_ccall trf_7240(C_word c,C_word *av){
C_word t0=av[0];
f_7240(t0);}

C_noret_decl(trf_7259)
static void C_ccall trf_7259(C_word c,C_word *av) C_noret;
static void C_ccall trf_7259(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7259(t0,t1,t2);}

C_noret_decl(trf_7293)
static void C_ccall trf_7293(C_word c,C_word *av) C_noret;
static void C_ccall trf_7293(C_word c,C_word *av){
C_word t0=av[0];
f_7293(t0);}

C_noret_decl(trf_7348)
static void C_ccall trf_7348(C_word c,C_word *av) C_noret;
static void C_ccall trf_7348(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7348(t0,t1,t2);}

C_noret_decl(trf_7391)
static void C_ccall trf_7391(C_word c,C_word *av) C_noret;
static void C_ccall trf_7391(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7391(t0,t1,t2);}

C_noret_decl(trf_7400)
static void C_ccall trf_7400(C_word c,C_word *av) C_noret;
static void C_ccall trf_7400(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7400(t0,t1,t2);}

C_noret_decl(trf_7521)
static void C_ccall trf_7521(C_word c,C_word *av) C_noret;
static void C_ccall trf_7521(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7521(t0,t1,t2);}

C_noret_decl(trf_7537)
static void C_ccall trf_7537(C_word c,C_word *av) C_noret;
static void C_ccall trf_7537(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7537(t0,t1);}

C_noret_decl(trf_7665)
static void C_ccall trf_7665(C_word c,C_word *av) C_noret;
static void C_ccall trf_7665(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7665(t0,t1);}

C_noret_decl(trf_7699)
static void C_ccall trf_7699(C_word c,C_word *av) C_noret;
static void C_ccall trf_7699(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7699(t0,t1,t2);}

C_noret_decl(trf_7733)
static void C_ccall trf_7733(C_word c,C_word *av) C_noret;
static void C_ccall trf_7733(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7733(t0,t1,t2);}

/* f8671 in k6995 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f8671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8671,c,av);}
/* csc.scm:1015: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[137]);{
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

/* f8677 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in ... */
static void C_ccall f8677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f8677,c,av);}
/* csc.scm:610: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* f8681 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in ... */
static void C_ccall f8681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f8681,c,av);}
/* csc.scm:610: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* f8713 in k4691 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f8713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f8713,c,av);}
/* csc.scm:574: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f8761 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in ... */
static void C_ccall f8761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8761,c,av);}
/* csc.scm:93: chicken.process#qs */
t2=C_fast_retrieve(lf[54]);{
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

/* f9076 in fold in k7344 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f9076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f9076,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f9080 in fold in k7344 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f9080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f9080,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2287 */
static void C_ccall f_2289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2289,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2290 in k2287 */
static void C_ccall f_2292(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2292,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7913,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:28: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[449]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[449]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k2293 in k2290 in k2287 */
static void C_ccall f_2295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2295,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2298,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2301,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2304,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2307,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2310(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2310,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[1] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t3=C_mutate(&lf[2] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t5=C_fast_retrieve(lf[436]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[437];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2316,c,av);}
a=C_alloc(6);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=lf[4] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[5] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
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

/* k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2322,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[6] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2326,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[7] /* (set! main#default-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2330,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#default-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2334,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2338,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2342,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2346,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2350,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2354,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2358,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2362,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[12] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 */
static void C_ccall f_2366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2366,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in ... */
static void C_ccall f_2370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2370,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[13] /* (set! main#default-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in ... */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2374,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in ... */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2378,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[15] /* (set! main#default-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:64: chicken.platform#software-type */
t4=C_fast_retrieve(lf[224]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in ... */
static void C_ccall f_2386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2386,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in ... */
static void C_ccall f_2390(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2390,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[14] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7904,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
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

/* k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in ... */
static void C_ccall f_2394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2394,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in ... */
static void C_ccall f_2398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2398,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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

/* k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in ... */
static void C_ccall f_2402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2402,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in ... */
static void C_ccall f_2406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2406,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in ... */
static void C_ccall f_2410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2410,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in ... */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2414,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in ... */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2418,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in ... */
static void C_ccall f_2422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2422,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[18] /* (set! main#host-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in ... */
static void C_ccall f_2426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2426,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[19] /* (set! main#host-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in ... */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2430,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[20] /* (set! main#host-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in ... */
static void C_ccall f_2434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2434,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[21] /* (set! main#host-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in ... */
static void C_ccall f_2438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2438,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[22] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in ... */
static void C_ccall f_2442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2442,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[23] /* (set! main#host-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in ... */
static void C_ccall f_2446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2446,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
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

/* k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in ... */
static void C_ccall f_2450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2450,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[24] /* (set! main#host-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in ... */
static void C_ccall f_2454(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2454,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[25] /* (set! main#host-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7891,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[443]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in ... */
static void C_ccall f_2458(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2458,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[26] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[443]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in ... */
static void C_ccall f_2462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2462,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[27] /* (set! main#target-run-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:122: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[168]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[441];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in ... */
static void C_ccall f_2531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2531,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2534(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7876,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:123: chicken.platform#system-cache-directory */
t4=C_fast_retrieve(lf[440]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in ... */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2534,c,av);}
a=C_alloc(8);
t2=C_mutate(&lf[28] /* (set! main#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2969,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* main#cons* in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in ... */
static void C_fcall f_2969(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2969,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2975(t7,t1,t2,t3);}

/* loop in main#cons* in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in ... */
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2975,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2989,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:95: loop */
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k2987 in loop in main#cons* in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in ... */
static void C_ccall f_2989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2989,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in loop in k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_fcall f_3031(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3031,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3058,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3056 in loop in loop in k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_3058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3058,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_fcall f_3106(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3106,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3120,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3031,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3031(t10,t6,t4);}}

/* k3118 in loop in k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3120,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3131 in loop in k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3133,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3106(t2,((C_word*)t0)[3],t1);}

/* foldr473 in foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_fcall f_3154(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3154,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3183,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g478 in foldr473 in foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static C_word C_fcall f_3162(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t3=(
/* mini-srfi-1.scm:131: pred */
  f_3433(((C_word*)t0)[2],t1)
);
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):t2));}

/* k3181 in foldr473 in foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_3183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3183,c,av);}
a=C_alloc(3);
/* mini-srfi-1.scm:131: g478 */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* mini-srfi-1.scm:131: g478 */
  f_3162(C_a_i(&a,3),((C_word*)t0)[3],((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr491 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_fcall f_3198(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3198,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3232,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
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

/* k3208 in k3230 in foldr491 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_3210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3210,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:135: g506 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* mini-srfi-1.scm:135: g506 */
  f_3214(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g506 in k3208 in k3230 in foldr491 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static C_word C_fcall f_3214(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k3230 in foldr491 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_3232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3232,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t3=C_retrieve2(lf[134],C_text("main#find-object-file"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
f_4276(3,av2);}}

/* loop in k4598 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static C_word C_fcall f_3311(C_word t1){
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

/* foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_fcall f_3411(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3411,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t3,lf[400]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3154,a[2]=t7,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3154(t12,t5,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a3432 in foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static C_word C_fcall f_3433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_not(C_i_memq(t1,((C_word*)t0)[2])));}

/* k3442 in foldl579 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_3444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3444,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3411(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3816,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[22] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:67: chicken.platform#software-version */
t4=C_fast_retrieve(lf[253]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in ... */
static void C_ccall f_3842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3842,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[37] /* (set! main#solaris ...) */,C_u_i_memq(t1,lf[38]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:74: chicken.platform#software-version */
t4=C_fast_retrieve(lf[253]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in ... */
static void C_ccall f_3848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3848,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[39] /* (set! main#elf ...) */,C_u_i_memq(t1,lf[40]));
t3=C_mutate(&lf[41] /* (set! main#stop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3851,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:80: chicken.process-context#command-line-arguments */
t5=C_fast_retrieve(lf[438]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in ... */
static void C_fcall f_3851(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3851,3,t1,t2,t3);}
a=C_alloc(13);
t4=*((C_word*)lf[42]+1);
t5=*((C_word*)lf[42]+1);
t6=C_i_check_port_2(*((C_word*)lf[42]+1),C_fix(2),C_SCHEME_TRUE,lf[43]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3858,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3874,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t9=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k3856 in main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in ... */
static void C_ccall f_3858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3858,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:77: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3859 in k3856 in main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3861,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[46]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
C_apply(6,av2);}}

/* k3862 in k3859 in k3856 in main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in ... */
static void C_ccall f_3864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:77: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3865 in k3862 in k3859 in k3856 in main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in ... */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3867,c,av);}
/* csc.scm:78: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3872 in main#stop in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in ... */
static void C_ccall f_3874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3874,c,av);}
/* csc.scm:77: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in ... */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3878,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[50] /* (set! main#arguments ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:81: chicken.platform#feature? */
t4=C_fast_retrieve(lf[436]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[437];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in ... */
static void C_ccall f_3882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3882,c,av);}
a=C_alloc(16);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=C_i_not(C_retrieve2(lf[3],C_text("main#cross-chicken")));
t4=(C_truep(t3)?t3:C_i_member(lf[51],C_retrieve2(lf[50],C_text("main#arguments"))));
t5=C_mutate(&lf[52] /* (set! main#host-mode ...) */,t4);
t6=C_mutate(&lf[53] /* (set! main#quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3900,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[57] /* (set! main#quotewrap-no-slash-trans ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3914,tmp=(C_word)a,a+=2,tmp));
t8=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[21],C_text("main#host-sharedir")):C_retrieve2(lf[15],C_text("main#default-sharedir")));
t9=C_mutate(&lf[58] /* (set! main#home ...) */,t8);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7842,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7846,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t13=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* main#quotewrap in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_3900(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3900,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3908,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3912,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:90: chicken.pathname#normalize-pathname */
t5=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3906 in main#quotewrap in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in ... */
static void C_ccall f_3908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3908,c,av);}
/* csc.scm:90: chicken.process#qs */
t2=C_fast_retrieve(lf[54]);{
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

/* k3910 in main#quotewrap in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in ... */
static void C_ccall f_3912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3912,c,av);}
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:86: chicken.string#string-translate */
t2=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(92);
av2[4]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* csc.scm:90: chicken.process#qs */
t2=C_fast_retrieve(lf[54]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* main#quotewrap-no-slash-trans in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_3914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3914,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:93: chicken.pathname#normalize-pathname */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3920 in main#quotewrap-no-slash-trans in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in ... */
static void C_ccall f_3922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3922,c,av);}
/* csc.scm:93: chicken.process#qs */
t2=C_fast_retrieve(lf[54]);{
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

/* k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_3930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3930,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[59] /* (set! main#translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[24],C_text("main#host-cc"));
t5=C_retrieve2(lf[24],C_text("main#host-cc"));
/* csc.scm:101: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#host-cc"));
f_3900(3,av2);}}
else{
t4=C_retrieve2(lf[7],C_text("main#default-cc"));
t5=C_retrieve2(lf[7],C_text("main#default-cc"));
/* csc.scm:101: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[7],C_text("main#default-cc"));
f_3900(3,av2);}}}

/* k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in ... */
static void C_ccall f_3934(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3934,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[60] /* (set! main#compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[25],C_text("main#host-cxx"));
t5=C_retrieve2(lf[25],C_text("main#host-cxx"));
/* csc.scm:102: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[25],C_text("main#host-cxx"));
f_3900(3,av2);}}
else{
t4=C_retrieve2(lf[8],C_text("main#default-cxx"));
t5=C_retrieve2(lf[8],C_text("main#default-cxx"));
/* csc.scm:102: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[8],C_text("main#default-cxx"));
f_3900(3,av2);}}}

/* k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in ... */
static void C_ccall f_3938(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3938,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7824,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in ... */
static void C_ccall f_3942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3942,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[62] /* (set! main#rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[24],C_text("main#host-cc"));
t5=C_retrieve2(lf[24],C_text("main#host-cc"));
/* csc.scm:104: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#host-cc"));
f_3900(3,av2);}}
else{
t4=C_retrieve2(lf[7],C_text("main#default-cc"));
t5=C_retrieve2(lf[7],C_text("main#default-cc"));
/* csc.scm:104: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[7],C_text("main#default-cc"));
f_3900(3,av2);}}}

/* k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in ... */
static void C_ccall f_3946(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3946,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[63] /* (set! main#linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[25],C_text("main#host-cxx"));
t5=C_retrieve2(lf[25],C_text("main#host-cxx"));
/* csc.scm:105: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[25],C_text("main#host-cxx"));
f_3900(3,av2);}}
else{
t4=C_retrieve2(lf[8],C_text("main#default-cxx"));
t5=C_retrieve2(lf[8],C_text("main#default-cxx"));
/* csc.scm:105: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=C_retrieve2(lf[8],C_text("main#default-cxx"));
f_3900(3,av2);}}}

/* k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in ... */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3950,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[64] /* (set! main#c++-linker ...) */,t1);
t3=(C_truep(C_retrieve2(lf[30],C_text("main#mingw")))?lf[65]:lf[66]);
t4=C_mutate(&lf[67] /* (set! main#object-extension ...) */,t3);
t5=C_mutate(&lf[68] /* (set! main#library-extension ...) */,lf[69]);
t6=C_mutate(&lf[70] /* (set! main#executable-extension ...) */,lf[71]);
t7=C_mutate(&lf[72] /* (set! main#shared-library-extension ...) */,C_fast_retrieve(lf[73]));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:112: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t8;
av2[2]=lf[435];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
tp(4,av2);}}

/* k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in ... */
static void C_ccall f_3963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3963,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[74] /* (set! main#static-object-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:113: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=lf[434];
av2[3]=C_retrieve2(lf[68],C_text("main#library-extension"));
tp(4,av2);}}

/* k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in ... */
static void C_ccall f_3967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3967,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[75] /* (set! main#static-library-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[30],C_text("main#mingw"));
if(C_truep(C_retrieve2(lf[30],C_text("main#mingw")))){
t5=C_retrieve2(lf[30],C_text("main#mingw"));
t6=t3;
f_3972(t6,(C_truep(C_retrieve2(lf[30],C_text("main#mingw")))?lf[432]:lf[433]));}
else{
t5=C_retrieve2(lf[34],C_text("main#cygwin"));
t6=t3;
f_3972(t6,(C_truep(C_retrieve2(lf[34],C_text("main#cygwin")))?lf[432]:lf[433]));}}

/* k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in ... */
static void C_fcall f_3972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3972,2,t0,t1);}
a=C_alloc(5);
t2=C_mutate(&lf[76] /* (set! main#pic-options ...) */,t1);
t3=lf[77] /* main#generate-manifest */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[78] /* (set! main#libchicken ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3975,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t6=C_retrieve2(lf[23],C_text("main#host-cflags"));
t7=C_retrieve2(lf[23],C_text("main#host-cflags"));
/* csc.scm:133: chicken.string#string-split */
t8=C_fast_retrieve(lf[246]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[23],C_text("main#host-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=C_retrieve2(lf[9],C_text("main#default-cflags"));
t7=C_retrieve2(lf[9],C_text("main#default-cflags"));
/* csc.scm:133: chicken.string#string-split */
t8=C_fast_retrieve(lf[246]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[9],C_text("main#default-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* main#libchicken in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in ... */
static void C_fcall f_3975(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3975,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(C_retrieve2(lf[52],C_text("main#host-mode"))))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3981 in main#libchicken in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in ... */
static void C_ccall f_3983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3983,c,av);}
/* csc.scm:119: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4016 in main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4018,c,av);}
/* csc.scm:130: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[109],C_text("main#library-dir"));
av2[3]=t1;
av2[4]=C_retrieve2(lf[68],C_text("main#library-extension"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in ... */
static void C_ccall f_4022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4022,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[81] /* (set! main#default-compilation-optimization-options ...) */,t1);
t3=C_mutate(&lf[82] /* (set! main#best-compilation-optimization-options ...) */,C_retrieve2(lf[81],C_text("main#default-compilation-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7799,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4027,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[83] /* (set! main#default-linking-optimization-options ...) */,t1);
t3=C_mutate(&lf[84] /* (set! main#best-linking-optimization-options ...) */,C_retrieve2(lf[83],C_text("main#default-linking-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_4032(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7795,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_FEATURES);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4032,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[85] /* (set! main#extra-features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#string->list */
t4=C_fast_retrieve(lf[155]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[431];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in ... */
static void C_ccall f_4039(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4039,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[86] /* (set! main#short-options ...) */,t1);
t3=lf[87] /* main#scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[88] /* main#c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[89] /* main#rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[90] /* main#generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[91] /* main#generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[92] /* main#object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[93] /* main#generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[94] /* main#transient-link-files */ =C_SCHEME_END_OF_LIST;;
t11=lf[95] /* main#linked-extensions */ =C_SCHEME_END_OF_LIST;;
t12=lf[96] /* main#cpp-mode */ =C_SCHEME_FALSE;;
t13=lf[97] /* main#objc-mode */ =C_SCHEME_FALSE;;
t14=lf[98] /* main#embedded */ =C_SCHEME_FALSE;;
t15=lf[99] /* main#inquiry-only */ =C_SCHEME_FALSE;;
t16=lf[100] /* main#show-cflags */ =C_SCHEME_FALSE;;
t17=lf[101] /* main#show-ldflags */ =C_SCHEME_FALSE;;
t18=lf[102] /* main#show-libs */ =C_SCHEME_FALSE;;
t19=lf[103] /* main#dry-run */ =C_SCHEME_FALSE;;
t20=lf[104] /* main#gui */ =C_SCHEME_FALSE;;
t21=lf[105] /* main#deployed */ =C_SCHEME_FALSE;;
t22=lf[106] /* main#rpath */ =C_SCHEME_FALSE;;
t23=lf[107] /* main#ignore-repository */ =C_SCHEME_FALSE;;
t24=lf[108] /* main#show-debugging-help */ =C_SCHEME_FALSE;;
t25=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[18],C_text("main#host-libdir")):C_retrieve2(lf[11],C_text("main#default-libdir")));
t26=C_mutate(&lf[109] /* (set! main#library-dir ...) */,t25);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t28=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t28=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}}

/* k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in ... */
static void C_ccall f_4069(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4069,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[110] /* (set! main#extra-libraries ...) */,t1);
t3=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[22],C_text("main#host-libs")):C_retrieve2(lf[10],C_text("main#default-libs")));
t4=C_mutate(&lf[111] /* (set! main#extra-shared-libraries ...) */,t3);
t5=lf[112] /* main#translate-options */ =C_SCHEME_END_OF_LIST;;
t6=(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))?C_retrieve2(lf[20],C_text("main#host-incdir")):C_retrieve2(lf[13],C_text("main#default-incdir")));
t7=C_i_member(t6,lf[113]);
t8=C_i_not(t7);
t9=(C_truep(t8)?t6:C_SCHEME_FALSE);
t10=C_mutate(&lf[114] /* (set! main#include-dir ...) */,t9);
t11=lf[115] /* main#compile-options */ =C_SCHEME_END_OF_LIST;;
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7665,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[114],C_text("main#include-dir")))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7775,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:248: chicken.string#conc */
t15=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[430];
av2[3]=C_retrieve2(lf[114],C_text("main#include-dir"));
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t14=t13;
f_7665(t14,C_SCHEME_END_OF_LIST);}}

/* k4081 in main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4083,c,av);}
a=C_alloc(6);
t2=C_a_i_list1(&a,1,t1);
t3=(C_truep(C_retrieve2(lf[131],C_text("main#static")))?C_a_i_list1(&a,1,C_retrieve2(lf[110],C_text("main#extra-libraries"))):C_a_i_list1(&a,1,C_retrieve2(lf[111],C_text("main#extra-shared-libraries"))));
/* csc.scm:1048: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4085 in main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4087,c,av);}
/* csc.scm:232: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[146];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4101 in main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4103,c,av);}
a=C_alloc(6);
t2=C_a_i_list1(&a,1,t1);
t3=(C_truep(C_retrieve2(lf[131],C_text("main#static")))?C_a_i_list1(&a,1,C_retrieve2(lf[110],C_text("main#extra-libraries"))):C_a_i_list1(&a,1,C_retrieve2(lf[111],C_text("main#extra-shared-libraries"))));
/* csc.scm:1048: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in ... */
static void C_ccall f_4122(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_4122,c,av);}
a=C_alloc(30);
t2=C_mutate(&lf[116] /* (set! main#builtin-compile-options ...) */,t1);
t3=lf[117] /* main#translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate(&lf[118] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[81],C_text("main#default-compilation-optimization-options")));
t5=C_mutate(&lf[119] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[83],C_text("main#default-linking-optimization-options")));
t6=lf[120] /* main#link-options */ =C_SCHEME_END_OF_LIST;;
t7=(C_truep(C_retrieve2(lf[37],C_text("main#solaris")))?lf[121]:lf[122]);
t8=C_mutate(&lf[123] /* (set! main#rpath-option ...) */,t7);
t9=lf[124] /* main#target-filename */ =C_SCHEME_FALSE;;
t10=lf[125] /* main#verbose */ =C_SCHEME_FALSE;;
t11=lf[126] /* main#keep-files */ =C_SCHEME_FALSE;;
t12=lf[127] /* main#translate-only */ =C_SCHEME_FALSE;;
t13=lf[128] /* main#compile-only */ =C_SCHEME_FALSE;;
t14=lf[129] /* main#to-stdout */ =C_SCHEME_FALSE;;
t15=lf[130] /* main#shared */ =C_SCHEME_FALSE;;
t16=lf[131] /* main#static */ =C_SCHEME_FALSE;;
t17=C_mutate(&lf[132] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4264,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[134] /* (set! main#find-object-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4276,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[139] /* (set! main#compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6753,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate(&lf[144] /* (set! main#linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7240,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate(&lf[145] /* (set! main#linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7293,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate(&lf[147] /* (set! main#constant1687 ...) */,lf[148]);
t23=C_mutate(&lf[149] /* (set! main#string-any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7391,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate(&lf[140] /* (set! main#quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7425,tmp=(C_word)a,a+=2,tmp));
t25=lf[156] /* main#last-exit-code */ =C_SCHEME_FALSE;;
t26=C_mutate(&lf[157] /* (set! main#command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7537,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate(&lf[170] /* (set! main#$delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7550,tmp=(C_word)a,a+=2,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7640,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7650,a[2]=t28,tmp=(C_word)a,a+=3,tmp);
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7654,a[2]=t29,tmp=(C_word)a,a+=3,tmp);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7658,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1155: chicken.process-context#get-environment-variable */
t32=C_fast_retrieve(lf[168]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t32;
av2[1]=t31;
av2[2]=lf[426];
((C_proc)(void*)(*((C_word*)t32+1)))(3,av2);}}

/* k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_fcall f_4141(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4141,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[105],C_text("main#deployed")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4215,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:277: chicken.platform#software-version */
t4=C_fast_retrieve(lf[253]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_4145(t3,C_SCHEME_END_OF_LIST);}}

/* k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_fcall f_4145(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4145,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:280: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[168]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[248];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4147 in k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4149(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4149,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4165,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:282: chicken.string#string-split */
t8=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t1;
av2[3]=lf[247];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* csc.scm:263: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k4150 in k4147 in k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4152,c,av);}
/* csc.scm:263: scheme#append */
t2=*((C_word*)lf[143]+1);{
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

/* k4163 in k4147 in k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4165(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4165,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4170,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4170(t5,((C_word*)t0)[4],t1);}

/* map-loop959 in k4163 in k4147 in k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_fcall f_4170(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4170,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:282: g982 */
t4=*((C_word*)lf[79]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[245];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4193 in map-loop959 in k4163 in k4147 in k4143 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4170(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4213 in k4139 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4215,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4145(t2,(C_truep((C_truep(C_eqp(t1,lf[249]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[250]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[251]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))?C_a_i_list1(&a,1,lf[252]):C_SCHEME_END_OF_LIST));}

/* k4221 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4223(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4223,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[105],C_text("main#deployed")))){
/* csc.scm:267: chicken.string#conc */
t4=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_retrieve2(lf[123],C_text("main#rpath-option"));
av2[4]=lf[256];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[18],C_text("main#host-libdir"));
t5=C_retrieve2(lf[18],C_text("main#host-libdir"));
/* csc.scm:267: chicken.string#conc */
t6=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_retrieve2(lf[123],C_text("main#rpath-option"));
av2[4]=C_retrieve2(lf[18],C_text("main#host-libdir"));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k4225 in k4221 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4227,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_4141(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k4229 in k4221 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4231,c,av);}
/* csc.scm:267: chicken.string#conc */
t2=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[255];
av2[3]=C_retrieve2(lf[123],C_text("main#rpath-option"));
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4245 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4247,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4141(t2,C_a_i_list1(&a,1,t1));}

/* k4252 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4254,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4141(t2,C_a_i_list1(&a,1,t1));}

/* main#repo-path in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_4264(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4264,1,t1);}
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* csc.scm:299: chicken.platform#repository-path */
t2=C_fast_retrieve(lf[133]);{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_retrieve2(lf[26],C_text("main#target-repo"));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(C_truep(t3)?C_retrieve2(lf[27],C_text("main#target-run-repo")):C_retrieve2(lf[26],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4276,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4280,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:303: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4280,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:304: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[68],C_text("main#library-extension"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_4283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4283,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:306: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_retrieve2(lf[75],C_text("main#static-library-extension"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4286,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:307: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[5];
av2[4]=C_retrieve2(lf[74],C_text("main#static-object-extension"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4289,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:308: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[137]);{
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

/* k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4292,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:309: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[137]);{
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

/* k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4298,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fast_retrieve(lf[136]),C_SCHEME_TRUE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4336,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:311: chicken.file#file-exists? */
t5=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4304(2,av2);}}}}

/* k4302 in k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4304,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_retrieve2(lf[107],C_text("main#ignore-repository"))))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4330,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:314: repo-path */
f_4264(t3);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k4314 in k4302 in k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4316,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:315: repo-path */
f_4264(t2);}}

/* k4324 in k4314 in k4302 in k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_4326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4326,c,av);}
/* csc.scm:315: chicken.load#find-file */
t2=C_fast_retrieve(lf[135]);{
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

/* k4328 in k4302 in k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_4330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4330,c,av);}
/* csc.scm:314: chicken.load#find-file */
t2=C_fast_retrieve(lf[135]);{
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

/* k4334 in k4296 in k4290 in k4287 in k4284 in k4281 in k4278 in main#find-object-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4336,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_4304(2,av2);}}
else{
/* csc.scm:312: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4346 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4348(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_4348,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[264],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[265],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[266],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[267],t8);
/* csc.scm:28: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[219]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[219]+1);
av2[1]=t2;
av2[2]=t9;
tp(3,av2);}}

/* k4353 in k4346 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4355,c,av);}
/* csc.scm:322: chicken.base#print */
t2=*((C_word*)lf[163]+1);{
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

/* t-options in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_4388(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4388,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:537: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[112],C_text("main#translate-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4391 in t-options in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_4393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4393,c,av);}
t2=C_mutate(&lf[112] /* (set! main#translate-options ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* check in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_4395(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4395,4,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_length(t3);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* csc.scm:541: stop */
f_3851(t1,lf[174],C_a_i_list(&a,1,t2));}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t5,t6))){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* csc.scm:541: stop */
f_3851(t1,lf[174],C_a_i_list(&a,1,t2));}}}

/* shared-build in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_4421(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4421,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4426,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:544: cons* */
f_2969(t3,lf[179],C_a_i_list(&a,2,lf[180],C_retrieve2(lf[112],C_text("main#translate-options"))));}

/* k4424 in shared-build in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4426,c,av);}
a=C_alloc(4);
t2=C_mutate(&lf[112] /* (set! main#translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:545: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[76],C_text("main#pic-options"));
av2[3]=lf[178];
av2[4]=C_retrieve2(lf[115],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4428 in k4424 in shared-build in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4430,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
if(C_truep(((C_word*)t0)[3])){
/* csc.scm:547: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[175];
av2[3]=C_retrieve2(lf[120],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* csc.scm:547: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[176];
av2[3]=C_retrieve2(lf[120],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* csc.scm:547: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[177];
av2[3]=C_retrieve2(lf[120],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4432 in k4428 in k4424 in shared-build in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4434,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
t3=lf[130] /* main#shared */ =C_SCHEME_TRUE;;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* generate-target-filename in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_4451(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4451,2,t1,t2);}
if(C_truep(C_retrieve2(lf[130],C_text("main#shared")))){
t3=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
t4=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
/* csc.scm:557: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[128],C_text("main#compile-only")))){
t3=C_retrieve2(lf[67],C_text("main#object-extension"));
t4=C_retrieve2(lf[67],C_text("main#object-extension"));
/* csc.scm:557: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_retrieve2(lf[70],C_text("main#executable-extension"));
/* csc.scm:557: chicken.pathname#pathname-replace-extension */
t4=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_4467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4467,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:566: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[115],C_text("main#compile-options"));
av2[3]=C_retrieve2(lf[116],C_text("main#builtin-compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csc.scm:619: scheme#string->symbol */
t7=*((C_word*)lf[424]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_4478(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,6)))){
C_save_and_reclaim((void *)f_4478,c,av);}
a=C_alloc(13);
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4727,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4141,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[39],C_text("main#elf")))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4223,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:266: chicken.string#conc */
t7=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[257];
av2[3]=C_retrieve2(lf[109],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[36],C_text("main#aix")))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4247,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:274: chicken.string#conc */
t7=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[258];
av2[3]=C_retrieve2(lf[123],C_text("main#rpath-option"));
av2[4]=lf[259];
av2[5]=C_retrieve2(lf[109],C_text("main#library-dir"));
av2[6]=lf[260];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4254,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:276: chicken.string#conc */
t7=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[261];
av2[3]=C_retrieve2(lf[109],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4482(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4482,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[99],C_text("main#inquiry-only")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4690,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[100],C_text("main#show-cflags")))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:570: compiler-options */
f_6753(t5);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4690(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4485(2,av2);}}}

/* k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4485(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4485,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[128],C_text("main#compile-only")))){
t3=C_i_length(C_retrieve2(lf[87],C_text("main#scheme-files")));
t4=C_i_length(C_retrieve2(lf[88],C_text("main#c-files")));
t5=C_a_i_fixnum_plus(&a,2,t3,t4);
if(C_truep(C_i_integer_greaterp(t5,C_fix(1)))){
/* csc.scm:579: stop */
f_3851(t2,lf[242],C_SCHEME_END_OF_LIST);}
else{
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4488(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4488(2,av2);}}}

/* k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4488(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_4488,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[87],C_text("main#scheme-files"))))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4600,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_nullp(C_retrieve2(lf[88],C_text("main#c-files")));
t5=(C_truep(t4)?C_i_nullp(C_retrieve2(lf[92],C_text("main#object-files"))):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4624,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[108],C_text("main#show-debugging-help")))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4634,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:586: cons* */
f_2969(t8,C_retrieve2(lf[59],C_text("main#translator")),C_a_i_list(&a,2,lf[226],C_retrieve2(lf[112],C_text("main#translate-options"))));}
else{
/* csc.scm:587: stop */
f_3851(t3,lf[225],C_SCHEME_END_OF_LIST);}}
else{
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4600(2,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4647,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[130],C_text("main#shared")))?C_i_not(C_retrieve2(lf[98],C_text("main#embedded"))):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[241],C_retrieve2(lf[112],C_text("main#translate-options")));
t6=C_mutate(&lf[112] /* (set! main#translate-options ...) */,t5);
t7=t3;
f_4647(t7,t6);}
else{
t5=t3;
f_4647(t5,C_SCHEME_UNDEFINED);}}}

/* k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4491(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4491,c,av);}
a=C_alloc(18);
if(C_truep(C_retrieve2(lf[127],C_text("main#translate-only")))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6481,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_retrieve2(lf[88],C_text("main#c-files"));
t7=C_i_check_list_2(C_retrieve2(lf[88],C_text("main#c-files")),lf[182]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6567,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6730,a[2]=t10,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6730(t12,t8,C_retrieve2(lf[88],C_text("main#c-files")));}}

/* k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4497,c,av);}
a=C_alloc(14);
if(C_truep(C_retrieve2(lf[128],C_text("main#compile-only")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[95],C_text("main#linked-extensions"))))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4590,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4594,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[134],C_text("main#find-object-file"));
t6=C_retrieve2(lf[95],C_text("main#linked-extensions"));
t7=C_retrieve2(lf[95],C_text("main#linked-extensions"));
t8=C_i_noop2(C_retrieve2(lf[95],C_text("main#linked-extensions")),C_SCHEME_UNDEFINED);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=((C_word*)t10)[1];
f_3198(t12,t4,C_retrieve2(lf[95],C_text("main#linked-extensions")));}
else{
t3=t2;
f_4503(t3,C_SCHEME_UNDEFINED);}}}

/* k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_fcall f_4503(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_4503,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[124],C_text("main#target-filename")),C_retrieve2(lf[87],C_text("main#scheme-files"))))){
t3=*((C_word*)lf[42]+1);
t4=*((C_word*)lf[42]+1);
t5=C_i_check_port_2(*((C_word*)lf[42]+1),C_fix(2),C_SCHEME_TRUE,lf[43]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4518,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:606: ##sys#print */
t7=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[209];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4506(2,av2);}}}

/* k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_4506(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4506,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[92],C_text("main#object-files"));
t4=C_retrieve2(lf[93],C_text("main#generated-object-files"));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_7115(t8,t2,C_retrieve2(lf[92],C_text("main#object-files")),C_retrieve2(lf[92],C_text("main#object-files")));}

/* k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_4518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4518,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:606: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4521,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:606: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[208];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_4524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4524,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:606: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_4527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4527,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:606: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[207];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_4530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4530,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:606: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_4533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4533,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:610: chicken.base#open-output-string */
t3=C_fast_retrieve(lf[187]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_4540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4540,c,av);}
a=C_alloc(4);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[183]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4546,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:610: ##sys#print */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[205];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* csc.scm:610: ##sys#print */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[206];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_4546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4546,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:610: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_4549(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4549,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
t3=C_retrieve2(lf[57],C_text("main#quotewrap-no-slash-trans"));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8677,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_retrieve2(lf[124],C_text("main#target-filename"));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8761,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:93: chicken.pathname#normalize-pathname */
t7=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_retrieve2(lf[53],C_text("main#quotewrap"));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8681,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:610: g1090 */
t5=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
f_3900(3,av2);}}}

/* k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in ... */
static void C_ccall f_4552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4552,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:610: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4553 in k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in ... */
static void C_ccall f_4555(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4555,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_mk_bool(C_WINDOWS_SHELL))?C_retrieve2(lf[57],C_text("main#quotewrap-no-slash-trans")):C_retrieve2(lf[53],C_text("main#quotewrap")));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4568,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4572,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:614: scheme#string-append */
t6=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
av2[3]=lf[204];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k4556 in k4553 in k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in ... */
static void C_ccall f_4558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4558,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:610: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[184]);{
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

/* k4559 in k4556 in k4553 in k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in ... */
static void C_ccall f_4561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4561,c,av);}
/* csc.scm:609: command */
f_7537(((C_word*)t0)[2],t1);}

/* k4566 in k4553 in k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in ... */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4568,c,av);}
/* csc.scm:610: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* k4570 in k4553 in k4550 in k4547 in k4544 in k4538 in k4531 in k4528 in k4525 in k4522 in k4519 in k4516 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in ... */
static void C_ccall f_4572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4572,c,av);}
/* csc.scm:610: g1092 */
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

/* k4588 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4590,c,av);}
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];
f_4503(t3,t2);}

/* k4592 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_4594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4594,c,av);}
/* csc.scm:604: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[92],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4598 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4600,c,av);}
a=C_alloc(5);
if(C_truep(C_retrieve2(lf[124],C_text("main#target-filename")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4491(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_nullp(C_retrieve2(lf[88],C_text("main#c-files")));
t4=(C_truep(t3)?C_retrieve2(lf[92],C_text("main#object-files")):C_retrieve2(lf[88],C_text("main#c-files")));
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3311,tmp=(C_word)a,a+=2,tmp);
t6=(
  f_3311(t4)
);
/* csc.scm:590: generate-target-filename */
f_4451(t2,t6);}}

/* k4605 in k4598 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4607,c,av);}
t2=C_mutate(&lf[124] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4491(2,av2);}}

/* k4622 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4624,c,av);}
/* csc.scm:587: stop */
f_3851(((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST);}

/* k4632 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4634,c,av);}
/* csc.scm:584: command */
f_7537(((C_word*)t0)[2],t1);}

/* k4636 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4638,c,av);}
/* csc.scm:585: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
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

/* k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_fcall f_4647(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4647,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[124],C_text("main#target-filename")))){
t3=t2;
f_4650(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4657,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[87],C_text("main#scheme-files"));
/* csc.scm:597: generate-target-filename */
f_4451(t3,C_i_car(C_retrieve2(lf[87],C_text("main#scheme-files"))));}}

/* k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_fcall f_4650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4650,2,t0,t1);}
a=C_alloc(5);
t2=C_retrieve2(lf[87],C_text("main#scheme-files"));
t3=C_i_check_list_2(C_retrieve2(lf[87],C_text("main#scheme-files")),lf[182]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6456,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6456(t7,((C_word*)t0)[2],C_retrieve2(lf[87],C_text("main#scheme-files")));}

/* k4655 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4657,c,av);}
t2=C_mutate(&lf[124] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_4650(t3,t2);}

/* k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4690,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[101],C_text("main#show-ldflags")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:571: linker-options */
f_7240(t3);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4693(2,av2);}}}

/* k4691 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4693,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[102],C_text("main#show-libs")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4709,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:572: linker-libraries */
f_7293(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:573: scheme#newline */
t4=*((C_word*)lf[243]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4694 in k4691 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:573: scheme#newline */
t3=*((C_word*)lf[243]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4697 in k4694 in k4691 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4699,c,av);}
/* csc.scm:574: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4707 in k4691 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4709,c,av);}
/* csc.scm:572: chicken.base#print* */
t2=*((C_word*)lf[244]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4714 in k4688 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4716,c,av);}
/* csc.scm:571: chicken.base#print* */
t2=*((C_word*)lf[244]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4721 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4723,c,av);}
/* csc.scm:570: chicken.base#print* */
t2=*((C_word*)lf[244]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4725 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4727,c,av);}
/* csc.scm:567: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_4734(C_word c,C_word *av){
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
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4734,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(t1,lf[262]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[263]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4749,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_eqp(t1,lf[268]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:625: chicken.platform#chicken-version */
t8=C_fast_retrieve(lf[269]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_eqp(t1,lf[270]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4777,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:628: chicken.base#open-output-string */
t9=C_fast_retrieve(lf[187]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_eqp(t1,lf[272]);
if(C_truep(t7)){
t8=lf[96] /* main#cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
t9=C_a_i_cons(&a,2,lf[273],C_retrieve2(lf[115],C_text("main#compile-options")));
t10=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t9);
/* csc.scm:864: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4467(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
/* csc.scm:864: loop */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4467(t9,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t8=C_eqp(t1,lf[274]);
if(C_truep(t8)){
t9=lf[97] /* main#objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4467(t10,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=C_eqp(t1,lf[275]);
if(C_truep(t9)){
t10=C_a_i_cons(&a,2,lf[276],C_retrieve2(lf[112],C_text("main#translate-options")));
t11=C_mutate(&lf[112] /* (set! main#translate-options ...) */,t10);
t12=lf[131] /* main#static */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t13=((C_word*)((C_word*)t0)[2])[1];
f_4467(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t10=C_eqp(t1,lf[277]);
if(C_truep(t10)){
t11=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t12=lf[100] /* main#show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t13=((C_word*)((C_word*)t0)[2])[1];
f_4467(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t11=C_eqp(t1,lf[278]);
if(C_truep(t11)){
t12=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t13=lf[101] /* main#show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t14=((C_word*)((C_word*)t0)[2])[1];
f_4467(t14,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t12=C_eqp(t1,lf[279]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4856,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:644: chicken.base#print */
t14=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=C_retrieve2(lf[60],C_text("main#compiler"));
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t13=C_eqp(t1,lf[280]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4868,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:645: chicken.base#print */
t15=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=C_retrieve2(lf[61],C_text("main#c++-compiler"));
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t14=C_eqp(t1,lf[281]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:646: chicken.base#print */
t16=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=C_retrieve2(lf[63],C_text("main#linker"));
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t15=C_eqp(t1,lf[282]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4892,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:647: chicken.base#print */
t17=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=C_retrieve2(lf[58],C_text("main#home"));
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=C_eqp(t1,lf[283]);
if(C_truep(t16)){
t17=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t18=lf[102] /* main#show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t19=((C_word*)((C_word*)t0)[2])[1];
f_4467(t19,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t17=C_eqp(t1,lf[284]);
t18=(C_truep(t17)?t17:C_eqp(t1,lf[285]));
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[125],C_text("main#verbose"))))){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:653: cons* */
f_2969(t20,lf[288],C_a_i_list(&a,2,lf[289],C_retrieve2(lf[115],C_text("main#compile-options"))));}
else{
t20=t19;
f_4915(t20,C_SCHEME_UNDEFINED);}}
else{
t19=C_eqp(t1,lf[290]);
t20=(C_truep(t19)?t19:C_eqp(t1,lf[291]));
if(C_truep(t20)){
t21=C_a_i_cons(&a,2,lf[292],C_retrieve2(lf[115],C_text("main#compile-options")));
t22=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t21);
/* csc.scm:661: t-options */
f_4388(t2,C_a_i_list(&a,1,lf[293]));}
else{
t21=C_eqp(t1,lf[294]);
t22=(C_truep(t21)?t21:C_eqp(t1,lf[295]));
if(C_truep(t22)){
t23=lf[127] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:664: t-options */
f_4388(t2,C_a_i_list(&a,1,lf[296]));}
else{
t23=C_eqp(t1,lf[297]);
t24=(C_truep(t23)?t23:C_eqp(t1,lf[298]));
if(C_truep(t24)){
t25=lf[127] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:667: t-options */
f_4388(t2,C_a_i_list(&a,1,lf[299]));}
else{
t25=C_eqp(t1,lf[300]);
if(C_truep(t25)){
t26=lf[126] /* main#keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t27=((C_word*)((C_word*)t0)[2])[1];
f_4467(t27,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t26=C_eqp(t1,lf[301]);
if(C_truep(t26)){
t27=lf[128] /* main#compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t28=((C_word*)((C_word*)t0)[2])[1];
f_4467(t28,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t27=C_eqp(t1,lf[302]);
if(C_truep(t27)){
t28=lf[127] /* main#translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t29=((C_word*)((C_word*)t0)[2])[1];
f_4467(t29,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t28=C_eqp(t1,lf[303]);
t29=(C_truep(t28)?t28:C_eqp(t1,lf[304]));
if(C_truep(t29)){
t30=lf[98] /* main#embedded */ =C_SCHEME_TRUE;;
t31=C_a_i_cons(&a,2,lf[305],C_retrieve2(lf[115],C_text("main#compile-options")));
t32=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t31);
/* csc.scm:864: loop */
t33=((C_word*)((C_word*)t0)[2])[1];
f_4467(t33,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t1,lf[306]);
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:675: check */
f_4395(t31,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t31=C_eqp(t1,lf[309]);
if(C_truep(t31)){
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:681: check */
f_4395(t32,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t32=C_eqp(t1,lf[310]);
t33=(C_truep(t32)?t32:C_eqp(t1,lf[311]));
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:685: check */
f_4395(t34,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t34=C_eqp(t1,lf[313]);
if(C_truep(t34)){
t35=C_a_i_cons(&a,2,lf[314],C_retrieve2(lf[115],C_text("main#compile-options")));
t36=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t35);
/* csc.scm:864: loop */
t37=((C_word*)((C_word*)t0)[2])[1];
f_4467(t37,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t35=C_eqp(t1,lf[315]);
if(C_truep(t35)){
t36=lf[107] /* main#ignore-repository */ =C_SCHEME_TRUE;;
/* csc.scm:692: t-options */
f_4388(t2,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t36=C_eqp(t1,lf[316]);
if(C_truep(t36)){
t37=C_set_block_item(lf[136] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
/* csc.scm:695: t-options */
f_4388(t2,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t37=C_eqp(t1,lf[317]);
if(C_truep(t37)){
t38=lf[77] /* main#generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t39=((C_word*)((C_word*)t0)[2])[1];
f_4467(t39,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t38=C_eqp(t1,lf[318]);
if(C_truep(t38)){
t39=lf[104] /* main#gui */ =C_SCHEME_TRUE;;
t40=C_a_i_cons(&a,2,lf[319],C_retrieve2(lf[115],C_text("main#compile-options")));
t41=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t40);
if(C_truep(C_retrieve2(lf[30],C_text("main#mingw")))){
t42=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:703: chicken.pathname#make-pathname */
t43=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t43;
av2[1]=t42;
av2[2]=C_retrieve2(lf[21],C_text("main#host-sharedir"));
av2[3]=lf[324];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t43+1)))(5,av2);}}
else{
/* csc.scm:864: loop */
t42=((C_word*)((C_word*)t0)[2])[1];
f_4467(t42,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t39=C_eqp(t1,lf[325]);
if(C_truep(t39)){
t40=lf[105] /* main#deployed */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t41=((C_word*)((C_word*)t0)[2])[1];
f_4467(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t40=C_eqp(t1,lf[326]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5161,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:713: check */
f_4395(t41,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t41=C_eqp(t1,lf[328]);
t42=(C_truep(t41)?t41:C_eqp(t1,lf[329]));
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5188,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:718: check */
f_4395(t43,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t43=C_eqp(t1,lf[330]);
t44=(C_truep(t43)?t43:C_eqp(t1,lf[331]));
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:722: cons* */
f_2969(t45,lf[332],C_a_i_list(&a,2,lf[333],((C_word*)((C_word*)t0)[4])[1]));}
else{
t45=C_eqp(t1,lf[334]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5219,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:723: cons* */
f_2969(t46,lf[335],C_a_i_list(&a,2,lf[336],((C_word*)((C_word*)t0)[4])[1]));}
else{
t46=C_eqp(t1,lf[337]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5229,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:724: cons* */
f_2969(t47,lf[338],C_a_i_list(&a,2,lf[339],((C_word*)((C_word*)t0)[4])[1]));}
else{
t47=C_eqp(t1,lf[340]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:725: cons* */
f_2969(t48,lf[341],C_a_i_list(&a,2,lf[342],((C_word*)((C_word*)t0)[4])[1]));}
else{
t48=C_eqp(t1,lf[343]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:726: cons* */
f_2969(t49,lf[344],C_a_i_list(&a,2,lf[345],((C_word*)((C_word*)t0)[4])[1]));}
else{
t49=C_eqp(t1,lf[346]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5259,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:728: cons* */
f_2969(t50,lf[347],C_a_i_list(&a,2,lf[348],((C_word*)((C_word*)t0)[4])[1]));}
else{
t50=C_eqp(t1,lf[349]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:729: cons* */
f_2969(t51,lf[350],C_a_i_list(&a,2,lf[351],((C_word*)((C_word*)t0)[4])[1]));}
else{
t51=C_eqp(t1,lf[352]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:730: cons* */
f_2969(t52,lf[353],C_a_i_list(&a,2,lf[354],((C_word*)((C_word*)t0)[4])[1]));}
else{
t52=C_eqp(t1,lf[355]);
if(C_truep(t52)){
t53=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:731: cons* */
f_2969(t53,lf[356],C_a_i_list(&a,2,lf[357],((C_word*)((C_word*)t0)[4])[1]));}
else{
t53=C_eqp(t1,lf[358]);
if(C_truep(t53)){
t54=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:732: cons* */
f_2969(t54,lf[359],C_a_i_list(&a,2,lf[360],((C_word*)((C_word*)t0)[4])[1]));}
else{
t54=C_eqp(t1,lf[361]);
if(C_truep(t54)){
t55=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5308,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:734: check */
f_4395(t55,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t55=C_eqp(t1,lf[362]);
if(C_truep(t55)){
t56=lf[125] /* main#verbose */ =C_SCHEME_TRUE;;
t57=lf[103] /* main#dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t58=((C_word*)((C_word*)t0)[2])[1];
f_4467(t58,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t56=C_eqp(t1,lf[363]);
t57=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t56)){
t58=t57;
f_5350(t58,t56);}
else{
t58=C_eqp(t1,lf[422]);
t59=t57;
f_5350(t59,(C_truep(t58)?t58:C_eqp(t1,lf[423])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4735 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4737,c,av);}
/* csc.scm:864: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4467(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4747 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4749,c,av);}
/* csc.scm:623: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4759 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4761,c,av);}
/* csc.scm:626: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4766 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4768,c,av);}
/* csc.scm:625: chicken.base#print */
t2=*((C_word*)lf[163]+1);{
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

/* k4775 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4777,c,av);}
/* csc.scm:629: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4782 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4784,c,av);}
a=C_alloc(4);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[183]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:628: ##sys#print */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[59],C_text("main#translator"));
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4788 in k4782 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4790,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:628: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4791 in k4788 in k4782 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_4793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4793,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:628: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[271];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4794 in k4791 in k4788 in k4782 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_4796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4796,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:628: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[184]);{
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

/* k4797 in k4794 in k4791 in k4788 in k4782 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_4799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4799,c,av);}
/* csc.scm:628: chicken.process#system */
t2=C_fast_retrieve(lf[162]);{
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

/* k4854 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4856,c,av);}
/* csc.scm:644: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4866 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4868,c,av);}
/* csc.scm:645: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4878 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4880,c,av);}
/* csc.scm:646: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4890 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4892,c,av);}
/* csc.scm:647: chicken.base#exit */
t2=C_fast_retrieve(lf[44]);{
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

/* k4913 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_fcall f_4915(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4915,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:655: t-options */
f_4388(t2,C_a_i_list(&a,1,lf[286]));}

/* k4916 in k4913 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4918,c,av);}
if(C_truep(C_retrieve2(lf[125],C_text("main#verbose")))){
t2=lf[125] /* main#verbose */ =C_fix(2);;
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[125] /* main#verbose */ =C_SCHEME_TRUE;;
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k4928 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[287],C_retrieve2(lf[120],C_text("main#link-options")));
t4=C_mutate(&lf[120] /* (set! main#link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_4915(t5,t4);}

/* k5018 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5020,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:676: t-options */
f_4388(t2,C_a_i_list(&a,2,lf[308],t3));}

/* k5021 in k5018 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5023,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:678: chicken.string#string-split */
t4=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
av2[3]=lf[307];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5025 in k5021 in k5018 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5027,c,av);}
t2=C_mutate(&lf[95] /* (set! main#linked-extensions ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4467(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5033 in k5021 in k5018 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5035,c,av);}
/* csc.scm:678: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[95],C_text("main#linked-extensions"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5050 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5052(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5052,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[109] /* (set! main#library-dir ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5070 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5072,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:686: t-options */
f_4388(t2,C_a_i_list(&a,2,lf[312],t3));}

/* k5073 in k5070 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5075,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5139 in k5143 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5141,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5143 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_5145,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[92],C_text("main#object-files")));
t3=C_mutate(&lf[92] /* (set! main#object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:708: cons* */
f_2969(t4,lf[320],C_a_i_list(&a,4,lf[321],lf[322],lf[323],C_retrieve2(lf[120],C_text("main#link-options"))));}

/* k5159 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5161,c,av);}
a=C_alloc(11);
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:715: cons* */
f_2969(t2,lf[327],C_a_i_list(&a,2,t3,C_retrieve2(lf[120],C_text("main#link-options"))));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5170 in k5159 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5172,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4467(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5186 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5188,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(&lf[124] /* (set! main#target-filename ...) */,t2);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5207 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5209,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5217 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5219,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5227 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5229,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5237 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5239,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5247 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5249,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5257 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5259,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5267 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5269,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5277 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5279,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5287 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5289,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5297 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5299,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5306 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_5308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5308,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:735: t-options */
f_4388(t2,C_a_i_list(&a,2,((C_word*)t0)[6],t3));}

/* k5309 in k5306 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5311,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#string->list */
t3=C_fast_retrieve(lf[155]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5321 in k5309 in k5306 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5323,c,av);}
if(C_truep(C_u_i_memq(C_make_character(104),t1))){
t2=lf[108] /* main#show-debugging-help */ =C_SCHEME_TRUE;;
t3=lf[127] /* main#translate-only */ =C_SCHEME_TRUE;;
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_fcall f_5350(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5350,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
/* csc.scm:744: shared-build */
f_4421(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[364]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[365]));
if(C_truep(t3)){
/* csc.scm:746: shared-build */
f_4421(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[366]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5374,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:748: check */
f_4395(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[367]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:752: check */
f_4395(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[368]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:756: check */
f_4395(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[369]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5425,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:760: check */
f_4395(t8,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[370]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5442,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:764: check */
f_4395(t9,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[372]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:767: check */
f_4395(t10,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5489,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[374]);
/* csc.scm:771: scheme#append */
t13=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t11;
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t11=C_eqp(((C_word*)t0)[4],lf[375]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:773: check */
f_4395(t12,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5527,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:777: check */
f_4395(t13,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[381]);
if(C_truep(t13)){
/* csc.scm:864: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_4467(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[382]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5582,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:786: check */
f_4395(t15,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[384]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:790: check */
f_4395(t16,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[386]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:794: scheme#append */
t18=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=lf[388];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t18=C_eqp(((C_word*)t0)[4],lf[421]);
if(C_truep(t18)){
t19=lf[129] /* main#to-stdout */ =C_SCHEME_TRUE;;
t20=lf[127] /* main#translate-only */ =C_SCHEME_TRUE;;
t21=t17;
f_5633(t21,t20);}
else{
t19=t17;
f_5633(t19,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}}}

/* k5372 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5374(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5374,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[59] /* (set! main#translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5389 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5391(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5391,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[60] /* (set! main#compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5406 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5408(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5408,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5423 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5425(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5425,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[63] /* (set! main#linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:864: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4467(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5440 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5442,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:765: cons* */
f_2969(t2,lf[371],C_a_i_list(&a,2,t3,t4));}

/* k5444 in k5440 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5446,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5461 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5463,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5475,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:768: chicken.string#string-split */
t4=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5465 in k5461 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5467,c,av);}
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4467(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5473 in k5461 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5475,c,av);}
/* csc.scm:768: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[115],C_text("main#compile-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5487 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5489,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5500 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5502,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5514,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:774: chicken.string#string-split */
t4=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5504 in k5500 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5506,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4467(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5512 in k5500 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5514,c,av);}
/* csc.scm:774: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5525 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5527,c,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[106] /* (set! main#rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5557,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:779: chicken.platform#build-platform */
t6=C_fast_retrieve(lf[380]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5539 in k5525 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_fcall f_5541(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5541,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5553,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:782: scheme#string-append */
t4=*((C_word*)lf[79]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[377];
av2[3]=C_retrieve2(lf[123],C_text("main#rpath-option"));
av2[4]=C_retrieve2(lf[106],C_text("main#rpath"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5543 in k5539 in k5525 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5545,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4467(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5551 in k5539 in k5525 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_5553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5553,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:782: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5555 in k5525 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5557,c,av);}
if(C_truep((C_truep(C_eqp(t1,lf[378]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[379]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_i_not(C_retrieve2(lf[30],C_text("main#mingw")));
t3=((C_word*)t0)[2];
f_5541(t3,(C_truep(t2)?C_i_not(C_retrieve2(lf[32],C_text("main#osx"))):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
f_5541(t2,C_SCHEME_FALSE);}}

/* k5580 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5582,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:787: t-options */
f_4388(t2,C_a_i_list(&a,2,lf[383],t3));}

/* k5583 in k5580 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5585,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5600 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5602,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:791: t-options */
f_4388(t2,C_a_i_list(&a,2,lf[385],t3));}

/* k5603 in k5600 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5605,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5621 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_5623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5623,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[124],C_text("main#target-filename")))){
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:796: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[387];
av2[4]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k5628 in k5621 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_5630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5630,c,av);}
t2=C_mutate(&lf[124] /* (set! main#target-filename ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_fcall f_5633(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5633,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_truep(C_eqp(((C_word*)t0)[2],lf[419]))?C_SCHEME_TRUE:(C_truep(C_eqp(((C_word*)t0)[2],lf[420]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=C_mutate(&lf[118] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[82],C_text("main#best-compilation-optimization-options")));
t4=C_mutate(&lf[119] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[84],C_text("main#best-linking-optimization-options")));
t5=t2;
f_5636(t5,t4);}
else{
t3=t2;
f_5636(t3,C_SCHEME_UNDEFINED);}}

/* k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_fcall f_5636(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_5636,2,t0,t1);}
a=C_alloc(12);
t2=C_i_assq(((C_word*)t0)[2],lf[389]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(
/* csc.scm:804: g1238 */
  f_5643(C_a_i(&a,3),t3,t2)
);
/* csc.scm:864: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4467(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[390]))){
/* csc.scm:805: t-options */
f_4388(((C_word*)t0)[7],C_a_i_list(&a,1,((C_word*)t0)[8]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[391]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5673,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:807: check */
f_4395(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t4=C_block_size(((C_word*)t0)[8]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6078,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:810: scheme#substring */
t6=*((C_word*)lf[396]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_fix(2);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t3;
f_5690(t5,C_SCHEME_FALSE);}}}}}

/* g1238 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static C_word C_fcall f_5643(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k5671 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_5673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5673,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:808: t-options */
f_4388(t2,C_a_i_list(&a,2,((C_word*)t0)[6],t3));}

/* k5674 in k5671 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5676,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4467(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_fcall f_5690(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5690,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
/* csc.scm:811: t-options */
f_4388(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=C_block_size(((C_word*)t0)[4]);
t3=C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(((C_word*)t0)[4],C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(76),t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5709,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(C_i_string_ref(((C_word*)t0)[4],C_fix(2))))){
/* csc.scm:816: chicken.base#error */
t7=*((C_word*)lf[392]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[393];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_5709(2,av2);}}}
else{
t6=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(73),t6))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(C_i_string_ref(((C_word*)t0)[4],C_fix(2))))){
/* csc.scm:820: chicken.base#error */
t8=*((C_word*)lf[392]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[394];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_5736(2,av2);}}}
else{
t7=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(68),t7))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:823: scheme#substring */
t9=*((C_word*)lf[396]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t8=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(70),t8))){
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t10=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* csc.scm:826: scheme#append */
t11=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t9;
av2[2]=C_retrieve2(lf[115],C_text("main#compile-options"));
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
/* csc.scm:864: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_4467(t9,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5791,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t10=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t10,C_fix(3)))){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5910,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:827: scheme#substring */
t12=*((C_word*)lf[396]+1);{
C_word av2[5];
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fix(4);
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t11=t9;
f_5791(t11,C_SCHEME_FALSE);}}}}}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5922,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:840: chicken.file#file-exists? */
t6=C_fast_retrieve(lf[137]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k5707 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5709,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:817: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5711 in k5707 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5713,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5734 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5736,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:821: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[115],C_text("main#compile-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5738 in k5734 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5740,c,av);}
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5765 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5767,c,av);}
a=C_alloc(6);
/* csc.scm:823: t-options */
f_4388(((C_word*)t0)[3],C_a_i_list(&a,2,lf[395],t1));}

/* k5779 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5781,c,av);}
t2=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_fcall f_5791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5791,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:828: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[120],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5893,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string->list */
t4=C_fast_retrieve(lf[155]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csc.scm:839: stop */
f_3851(((C_word*)t0)[6],lf[401],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k5793 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5795,c,av);}
t2=C_mutate(&lf[120] /* (set! main#link-options ...) */,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4467(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5816 in k5887 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_5818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5818,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:864: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4467(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5833 in k5887 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_5835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5835,c,av);}
/* csc.scm:833: scheme#append */
t2=*((C_word*)lf[143]+1);{
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

/* map-loop1259 in k5887 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_fcall f_5837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5837,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=lf[397];
av2[3]=t5;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5860 in map-loop1259 in k5887 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_5862(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5862,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5837(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5887 in k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_5889(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5889,c,av);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5835,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5837,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5837(t11,t7,((C_word*)t0)[5]);}
else{
t2=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_char_equalp(C_make_character(108),t2))){
/* csc.scm:837: stop */
f_3851(((C_word*)t0)[6],lf[398],C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
/* csc.scm:838: stop */
f_3851(((C_word*)t0)[6],lf[399],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k5891 in k5789 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5893(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_5893,c,av);}
a=C_alloc(16);
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_retrieve2(lf[86],C_text("main#short-options"));
t5=C_a_i_list(&a,1,C_retrieve2(lf[86],C_text("main#short-options")));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3411,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3411(t9,t3,t5,t2);}

/* k5908 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5910,c,av);}
t2=((C_word*)t0)[2];
f_5791(t2,C_u_i_string_equal_p(lf[402],t1));}

/* k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_5922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5922,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:841: ##sys#call-with-values */{
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
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6042,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
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
av2[3]=lf[417];
tp(4,av2);}}}

/* a5926 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5927,c,av);}
/* csc.scm:841: chicken.pathname#decompose-pathname */
t2=C_fast_retrieve(lf[403]);{
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

/* a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_5933(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5933,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5944,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:843: scheme#append */
t7=*((C_word*)lf[143]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[404]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[405]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5958,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:845: scheme#append */
t7=*((C_word*)lf[143]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[406]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5972,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:847: scheme#append */
t7=*((C_word*)lf[143]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[89],C_text("main#rc-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[407]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[408]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[409]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[410]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[411]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5985,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
t6=C_a_i_cons(&a,2,lf[412],C_retrieve2(lf[115],C_text("main#compile-options")));
t7=C_mutate(&lf[115] /* (set! main#compile-options ...) */,t6);
t8=t5;
f_5985(t8,t7);}
else{
t6=t5;
f_5985(t6,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[413]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[414]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[415]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=lf[97] /* main#objc-mode */ =C_SCHEME_TRUE;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6009,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:854: scheme#append */
t8=*((C_word*)lf[143]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=C_retrieve2(lf[67],C_text("main#object-extension"));
t6=C_u_i_string_equal_p(t4,C_retrieve2(lf[67],C_text("main#object-extension")));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6021,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_6021(t8,t6);}
else{
t8=C_retrieve2(lf[68],C_text("main#library-extension"));
t9=t7;
f_6021(t9,C_u_i_string_equal_p(t4,C_retrieve2(lf[68],C_text("main#library-extension"))));}}}}}}}

/* k5942 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5944,c,av);}
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5956 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_5958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5958,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5970 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_5972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5972,c,av);}
t2=C_mutate(&lf[89] /* (set! main#rc-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5983 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_fcall f_5985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5985,2,t0,t1);}
a=C_alloc(6);
t2=lf[96] /* main#cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:851: scheme#append */
t5=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5988 in k5983 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_5990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5990,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6007 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6009,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6019 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_fcall f_6021(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6021,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:857: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[92],C_text("main#object-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:858: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6023 in k6019 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6025,c,av);}
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6031 in k6019 in a5932 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6033,c,av);}
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6040 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6042,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6048,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:861: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[137]);{
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

/* k6046 in k6040 in k5920 in k5688 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6048,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* csc.scm:864: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4467(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:863: stop */
f_3851(((C_word*)t0)[6],lf[416],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k6076 in k5634 in k5631 in k5348 in k4732 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_6078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6078,c,av);}
t2=((C_word*)t0)[2];
f_5690(t2,C_u_i_string_equal_p(lf[418],t1));}

/* k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6285,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_member(t1,C_retrieve2(lf[88],C_text("main#c-files"))))){
/* csc.scm:881: stop */
f_3851(t2,lf[237],C_a_i_list(&a,2,((C_word*)t0)[5],t1));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6288(2,av2);}}}

/* k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6288(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_6288,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6325,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6329,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6333,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:885: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
f_3900(3,av2);}}

/* k6289 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6291(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6291,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(C_retrieve2(lf[131],C_text("main#static")))?C_retrieve2(lf[128],C_text("main#compile-only")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:910: chicken.pathname#pathname-replace-extension */
t5=C_fast_retrieve(lf[181]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[227];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;
f_6294(t4,C_SCHEME_UNDEFINED);}}

/* k6292 in k6289 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_fcall f_6294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6294,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:912: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[88],C_text("main#c-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6296 in k6292 in k6289 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6298(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6298,c,av);}
a=C_alloc(8);
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:913: scheme#append */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[90],C_text("main#generated-c-files"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6300 in k6296 in k6292 in k6289 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6302,c,av);}
t2=C_mutate(&lf[90] /* (set! main#generated-c-files ...) */,t1);
t3=((C_word*)((C_word*)t0)[2])[1];
f_6456(t3,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6319 in k6289 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6321,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[94],C_text("main#transient-link-files")));
t3=C_mutate(&lf[94] /* (set! main#transient-link-files ...) */,t2);
t4=((C_word*)t0)[2];
f_6294(t4,t3);}

/* k6323 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6325,c,av);}
/* csc.scm:883: command */
f_7537(((C_word*)t0)[2],t1);}

/* k6327 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6329,c,av);}
/* csc.scm:884: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[228];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6333,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[129],C_text("main#to-stdout")))){
t4=t3;
f_6341(t4,lf[235]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6427,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:889: quotewrap */
t5=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
f_3900(3,av2);}}}

/* k6335 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6337,c,av);}
a=C_alloc(6);
/* csc.scm:885: cons* */
f_2969(((C_word*)t0)[2],C_retrieve2(lf[59],C_text("main#translator")),C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_fcall f_6341(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_6341,2,t0,t1);}
a=C_alloc(18);
t2=(C_truep(C_i_debug_modep())?lf[229]:C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[140],C_text("main#quote-option"));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t5,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6396,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(C_truep(C_retrieve2(lf[131],C_text("main#static")))?C_i_not(C_i_member(lf[232],C_retrieve2(lf[112],C_text("main#translate-options")))):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6413,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:901: chicken.pathname#pathname-replace-extension */
t12=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[234];
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}
else{
t11=t9;
f_6396(t11,C_SCHEME_END_OF_LIST);}}

/* k6350 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6352,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[141]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6360(t7,t3,t1);}

/* k6356 in k6350 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6358,c,av);}
/* csc.scm:886: scheme#append */
t2=*((C_word*)lf[143]+1);{
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

/* map-loop1340 in k6350 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_fcall f_6360(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6360,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:893: g1346 */
t4=C_retrieve2(lf[140],C_text("main#quote-option"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7425(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6383 in map-loop1340 in k6350 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_6385(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6385,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6360(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6394 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_fcall f_6396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_6396,2,t0,t1);}
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
/* csc.scm:894: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[112],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=lf[230];
av2[6]=C_retrieve2(lf[117],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
if(C_truep(C_retrieve2(lf[97],C_text("main#objc-mode")))){
/* csc.scm:894: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[112],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=lf[231];
av2[6]=C_retrieve2(lf[117],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
/* csc.scm:894: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[3]=C_retrieve2(lf[112],C_text("main#translate-options"));
av2[4]=t1;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_retrieve2(lf[117],C_text("main#translation-optimization-options"));
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}}

/* k6411 in k6339 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6413,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_6396(t2,C_a_i_list2(&a,2,lf[233],t1));}

/* k6425 in k6331 in k6286 in k6283 in for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6427,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_6341(t2,C_a_i_list(&a,2,lf[236],t1));}

/* for-each-loop1319 in k4648 in k4645 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_fcall f_6456(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6456,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_length(C_retrieve2(lf[87],C_text("main#scheme-files")));
t5=C_eqp(C_fix(1),t4);
t6=(C_truep(t5)?C_retrieve2(lf[124],C_text("main#target-filename")):t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6285,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
/* csc.scm:875: chicken.pathname#pathname-replace-extension */
t8=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[238];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[97],C_text("main#objc-mode")))){
/* csc.scm:875: chicken.pathname#pathname-replace-extension */
t8=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[239];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* csc.scm:875: chicken.pathname#pathname-replace-extension */
t8=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[240];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_fcall f_6481(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6481,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6485,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[128],C_text("main#compile-only")))){
if(C_truep(C_retrieve2(lf[124],C_text("main#target-filename")))){
t4=C_i_length(C_retrieve2(lf[88],C_text("main#c-files")));
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_retrieve2(lf[124],C_text("main#target-filename"));
f_6485(2,av2);}}
else{
/* csc.scm:927: chicken.pathname#pathname-replace-extension */
t6=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
/* csc.scm:927: chicken.pathname#pathname-replace-extension */
t4=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* csc.scm:927: chicken.pathname#pathname-replace-extension */
t4=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_6485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6485,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6488,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_member(t1,C_retrieve2(lf[92],C_text("main#object-files"))))){
/* csc.scm:929: stop */
f_3851(t2,lf[215],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6488(2,av2);}}}

/* k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6488(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6488,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6503,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))?C_retrieve2(lf[61],C_text("main#c++-compiler")):C_retrieve2(lf[60],C_text("main#compiler")));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6515,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:935: quotewrap */
t6=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
f_3900(3,av2);}}

/* k6489 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6491(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6491,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[93],C_text("main#generated-object-files")));
t3=C_mutate(&lf[93] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6501 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6503,c,av);}
/* csc.scm:931: command */
f_7537(((C_word*)t0)[2],t1);}

/* k6513 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6515,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6519,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6538,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:936: quotewrap */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
f_3900(3,av2);}}

/* k6517 in k6513 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6519,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
t3=C_i_string_equal_p(lf[211],C_retrieve2(lf[61],C_text("main#c++-compiler")));
t4=t2;
f_6523(t4,(C_truep(t3)?lf[212]:lf[213]));}
else{
t3=t2;
f_6523(t3,lf[213]);}}

/* k6521 in k6517 in k6513 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_fcall f_6523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_6523,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:941: compiler-options */
f_6753(t2);}

/* k6525 in k6521 in k6517 in k6513 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6527,c,av);}
a=C_alloc(18);
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[210],((C_word*)t0)[5],t1);
/* csc.scm:932: chicken.string#string-intersperse */
t3=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6536 in k6513 in k6486 in k6483 in g1383 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6538,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[214];
av2[3]=t1;
tp(4,av2);}}

/* k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_6567(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6567,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6703,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[77],C_text("main#generate-manifest")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6728,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:945: chicken.platform#software-type */
t5=C_fast_retrieve(lf[224]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_6703(t4,C_SCHEME_FALSE);}}

/* k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_fcall f_6570(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6570,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[89],C_text("main#rc-files"));
t4=C_i_check_list_2(C_retrieve2(lf[89],C_text("main#rc-files")),lf[182]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6679,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6679(t9,t5,C_retrieve2(lf[89],C_text("main#rc-files")));}

/* g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_fcall f_6571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6571,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6575,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:952: scheme#string-append */
t4=*((C_word*)lf[79]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[216];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6573 in g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6575,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6578,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6590,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6598,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:955: quotewrap */
t5=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
f_3900(3,av2);}}

/* k6576 in k6573 in g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6578(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6578,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[93],C_text("main#generated-object-files")));
t3=C_mutate(&lf[93] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6588 in k6573 in g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6590,c,av);}
/* csc.scm:953: command */
f_7537(((C_word*)t0)[2],t1);}

/* k6596 in k6573 in g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6598,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6602,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:955: quotewrap */
t3=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
f_3900(3,av2);}}

/* k6600 in k6596 in k6573 in g1393 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6602,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,C_retrieve2(lf[62],C_text("main#rc-compiler")),((C_word*)t0)[2],t1);
/* csc.scm:954: chicken.string#string-intersperse */
t3=C_fast_retrieve(lf[142]);{
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

/* k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6608,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6677,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:959: scheme#reverse */
t4=*((C_word*)lf[195]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6612(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6612,c,av);}
a=C_alloc(8);
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[126],C_text("main#keep-files")))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_4497(2,av2);}}
else{
t3=C_retrieve2(lf[170],C_text("main#$delete-file"));
t4=C_retrieve2(lf[90],C_text("main#generated-c-files"));
t5=C_i_check_list_2(C_retrieve2(lf[90],C_text("main#generated-c-files")),lf[182]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6652,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_6652(t10,t6,C_retrieve2(lf[90],C_text("main#generated-c-files")));}}

/* k6619 in k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6621(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6621,c,av);}
a=C_alloc(5);
t2=C_retrieve2(lf[170],C_text("main#$delete-file"));
t3=C_retrieve2(lf[91],C_text("main#generated-rc-files"));
t4=C_i_check_list_2(C_retrieve2(lf[91],C_text("main#generated-rc-files")),lf[182]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6629,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6629(t8,((C_word*)t0)[2],C_retrieve2(lf[91],C_text("main#generated-rc-files")));}

/* for-each-loop1452 in k6619 in k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6629,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:962: g1453 */
t4=C_retrieve2(lf[170],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7550(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6637 in for-each-loop1452 in k6619 in k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6639,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6629(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1435 in k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_fcall f_6652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6652,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6662,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:961: g1436 */
t4=C_retrieve2(lf[170],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7550(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6660 in for-each-loop1435 in k6610 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6662,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6652(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6675 in k6606 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6677,c,av);}
/* csc.scm:959: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[92],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1392 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_fcall f_6679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6679,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6689,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:950: g1393 */
t4=((C_word*)t0)[3];
f_6571(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6687 in for-each-loop1392 in k6568 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6689,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6679(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_fcall f_6703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6703,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:946: chicken.pathname#pathname-replace-extension */
t3=C_fast_retrieve(lf[181]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
av2[3]=lf[223];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_6570(t2,C_SCHEME_UNDEFINED);}}

/* k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6706,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6709,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6721,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:947: chicken.pathname#pathname-file */
t4=C_fast_retrieve(lf[222]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6707 in k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6709,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[89],C_text("main#rc-files")));
t3=C_mutate(&lf[89] /* (set! main#rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[91],C_text("main#generated-rc-files")));
t5=C_mutate(&lf[91] /* (set! main#generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_6570(t6,t5);}

/* k6719 in k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6721,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7609,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[125],C_text("main#verbose")))){
/* csc.scm:1129: chicken.base#print */
t3=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[221];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7609(2,av2);}}}

/* k6726 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_6728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6728,c,av);}
t2=((C_word*)t0)[2];
f_6703(t2,C_eqp(lf[16],t1));}

/* for-each-loop1382 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_fcall f_6730(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6730,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:921: g1383 */
t4=((C_word*)t0)[3];
f_6481(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6738 in for-each-loop1382 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in ... */
static void C_ccall f_6740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6740,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6730(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* main#compiler-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_6753(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6753,1,t1);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[140],C_text("main#quote-option"));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6764,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:967: scheme#append */
t8=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[118],C_text("main#compilation-optimization-options"));
av2[3]=C_retrieve2(lf[115],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6762 in main#compiler-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_6764(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6764,c,av);}
a=C_alloc(10);
t2=C_i_check_list_2(t1,lf[141]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6770,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6772,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6772(t7,t3,t1);}

/* k6768 in k6762 in main#compiler-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_6770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6770,c,av);}
/* csc.scm:965: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
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

/* map-loop1475 in k6762 in main#compiler-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6772,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:966: g1481 */
t4=C_retrieve2(lf[140],C_text("main#quote-option"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7425(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6795 in map-loop1475 in k6762 in main#compiler-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_6797(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6797,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6772(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_6811,c,av);}
a=C_alloc(15);
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[53],C_text("main#quotewrap"));
t8=C_retrieve2(lf[92],C_text("main#object-files"));
t9=C_i_check_list_2(C_retrieve2(lf[92],C_text("main#object-files")),lf[141]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6956,a[2]=t5,a[3]=t12,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6956(t14,t10,C_retrieve2(lf[92],C_text("main#object-files")));}

/* k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_6820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6820,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6823,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:978: quotewrap */
t3=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
f_3900(3,av2);}}

/* k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6823(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6823,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6826,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6921,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6925,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))?C_retrieve2(lf[64],C_text("main#c++-linker")):C_retrieve2(lf[63],C_text("main#linker")));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6933,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6941,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6954,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:986: quotewrap */
t9=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_retrieve2(lf[124],C_text("main#target-filename"));
f_3900(3,av2);}}

/* k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6826,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(C_retrieve2(lf[32],C_text("main#osx")))?C_retrieve2(lf[52],C_text("main#host-mode")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6870,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6880,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6884,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_POSTINSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6829(2,av2);}}}

/* k6827 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6829,c,av);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[126],C_text("main#keep-files")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[170],C_text("main#$delete-file"));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1007: scheme#append */
t4=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[93],C_text("main#generated-object-files"));
av2[3]=C_retrieve2(lf[94],C_text("main#transient-link-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6833 in k6827 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_6835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6835,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[182]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6843(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1537 in k6833 in k6827 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_fcall f_6843(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6843,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6853,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1006: g1538 */
t4=C_retrieve2(lf[170],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7550(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6851 in for-each-loop1537 in k6833 in k6827 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_6853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6853,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6843(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6870,c,av);}
a=C_alloc(4);
if(C_truep(C_retrieve2(lf[104],C_text("main#gui")))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1124: chicken.base#open-output-string */
t3=C_fast_retrieve(lf[187]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_6829(2,av2);}}}

/* k6878 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6880,c,av);}
/* csc.scm:990: command */
f_7537(((C_word*)t0)[2],t1);}

/* k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6884,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:992: libchicken */
f_3975(t2);}

/* k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_6888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6888,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6916,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:994: libchicken */
f_3975(t4);}

/* k6890 in k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6892,c,av);}
/* csc.scm:991: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[188];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[189];
av2[6]=t1;
av2[7]=lf[190];
av2[8]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k6894 in k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_6896(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6896,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[105],C_text("main#deployed")))){
/* csc.scm:996: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6909,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
t4=C_retrieve2(lf[18],C_text("main#host-libdir"));
t5=C_retrieve2(lf[18],C_text("main#host-libdir"));
/* csc.scm:997: chicken.pathname#make-pathname */
t6=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=C_retrieve2(lf[18],C_text("main#host-libdir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[49]+1);{
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
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k6897 in k6894 in k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_6899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6899,c,av);}
/* csc.scm:993: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3900(3,av2);}}

/* k6907 in k6894 in k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_6909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6909,c,av);}
/* csc.scm:997: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[138]);{
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

/* k6914 in k6886 in k6882 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_6916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6916,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[193];
tp(4,av2);}}

/* k6919 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6921,c,av);}
/* csc.scm:980: command */
f_7537(((C_word*)t0)[2],t1);}

/* k6923 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6925,c,av);}
/* csc.scm:981: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
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

/* k6931 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6933,c,av);}
a=C_alloc(3);
/* csc.scm:982: cons* */
f_2969(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k6939 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6941,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6945,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:987: linker-options */
f_7240(t2);}

/* k6943 in k6939 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_6945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6945,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:988: linker-libraries */
f_7293(t2);}

/* k6947 in k6943 in k6939 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_6949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6949,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* csc.scm:984: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6952 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_6954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6954,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[194];
av2[3]=t1;
tp(4,av2);}}

/* map-loop1503 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_fcall f_6956(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6956,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:977: g1509 */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3900(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6979 in map-loop1503 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6981(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6981,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6956(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6995 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_6997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6997,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[136]))){
/* csc.scm:1014: chicken.string#string-chomp */
t3=C_fast_retrieve(lf[201]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[202];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1015: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[200];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6998 in k6995 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_7000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7000,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1015: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[200];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7005 in k6998 in k6995 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_7007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7007,c,av);}
/* csc.scm:1015: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[137]);{
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

/* k7019 in map-loop1566 in k7034 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_7021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7021,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_7054(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}
else{
/* csc.scm:1019: stop */
f_3851(((C_word*)t0)[3],lf[197],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* k7034 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_7036(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7036,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[141]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7044,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7044(t6,((C_word*)t0)[4],t1);}

/* map-loop1566 in k7034 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_fcall f_7044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_7044,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7069,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7021,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1018: find-object-file */
t7=C_retrieve2(lf[134],C_text("main#find-object-file"));{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
f_4276(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7052 in map-loop1566 in k7034 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_fcall f_7054(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7054,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7044(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7067 in map-loop1566 in k7034 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_7069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7069,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7054(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* map-loop1589 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_fcall f_7078(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7078,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1020: g1595 */
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

/* k7101 in map-loop1589 in k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_7103(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7103,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7078(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in ... */
static void C_fcall f_7115(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7115,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7129,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1023: scheme#reverse */
t5=*((C_word*)lf[195]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_retrieve2(lf[131],C_text("main#static"));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7135,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[131],C_text("main#static")))){
t6=t5;
f_7135(t6,C_retrieve2(lf[131],C_text("main#static")));}
else{
t6=C_i_car(t2);
t7=t5;
f_7135(t7,C_i_not(C_i_member(t6,((C_word*)t0)[3])));}}}

/* k7127 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_7129(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7129,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3106,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3106(t5,((C_word*)t0)[2],t1);}

/* k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_fcall f_7135(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7135,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6997,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1012: chicken.pathname#pathname-strip-extension */
t5=C_fast_retrieve(lf[203]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_u_i_car(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
/* csc.scm:1030: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7115(t5,((C_word*)t0)[3],t2,t4);}}

/* k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_7138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7138,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7161,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1027: scheme#with-input-from-file */
t4=C_fast_retrieve(lf[198]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=*((C_word*)lf[199]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
f_7141(2,av2);}}}

/* k7139 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_7141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7141,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1029: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7146 in k7139 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in ... */
static void C_ccall f_7148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7148,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1029: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7150 in k7146 in k7139 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_7152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7152,c,av);}
/* csc.scm:1029: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7115(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k7159 in k7136 in k7133 in loop in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_7161(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7161,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_fast_retrieve(lf[196]);
t11=C_i_check_list_2(t1,lf[141]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7036,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7078,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7078(t16,t12,t1);}

/* main#linker-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_7240(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_7240,1,t1);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[140],C_text("main#quote-option"));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7251,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1044: scheme#append */
t8=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[119],C_text("main#linking-optimization-options"));
av2[3]=C_retrieve2(lf[120],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7249 in main#linker-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7251(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7251,c,av);}
a=C_alloc(10);
t2=C_i_check_list_2(t1,lf[141]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7259,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7259(t7,t3,t1);}

/* k7255 in k7249 in main#linker-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7257,c,av);}
/* csc.scm:1042: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
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

/* map-loop1659 in k7249 in main#linker-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7259,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1043: g1665 */
t4=C_retrieve2(lf[140],C_text("main#quote-option"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7425(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7282 in map-loop1659 in k7249 in main#linker-options in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7284(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7284,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7259(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_7293(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7293,1,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7301,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[131],C_text("main#static")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4103,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4018,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:130: libchicken */
f_3975(t4);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4083,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[52],C_text("main#host-mode")))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k7299 in main#linker-libraries in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7301,c,av);}
/* csc.scm:1047: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[142]);{
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

/* k7326 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7328,c,av);}
a=C_alloc(3);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7338,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1073: chicken.string#string-translate* */
t3=C_fast_retrieve(lf[152]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[153];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7336 in k7326 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_7338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7338,c,av);}
/* csc.scm:1073: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=t1;
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7340 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7342,c,av);}
/* ##sys#list->string */
t2=C_fast_retrieve(lf[154]);{
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

/* k7344 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7346(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7346,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7348,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7348(t5,((C_word*)t0)[3],t1);}

/* fold in k7344 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_fcall f_7348(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7348,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_memq(t3,C_retrieve2(lf[147],C_text("main#constant1687"))))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7371,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1068: fold */
t7=t4;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
if(C_truep(C_u_i_char_whitespacep(t3))){
t4=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9076,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1071: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9080,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1071: fold */
t7=t4;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}}

/* k7369 in fold in k7344 in k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_7371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7371,c,av);}
a=C_alloc(6);
/* csc.scm:1068: cons* */
f_2969(((C_word*)t0)[2],C_make_character(92),C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* main#string-any in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_7391(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7391,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_string_length(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7400,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7400(t8,t1,C_fix(0));}

/* lp in main#string-any in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7400,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_a_i_fixnum_plus(&a,2,t2,C_fix(1));
if(C_truep(C_i_integer_equalp(t4,((C_word*)t0)[3]))){
/* csc.scm:1082: criteria */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7417,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1083: criteria */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k7415 in lp in main#string-any in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7417,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* csc.scm:1084: lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7400(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7425(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7425,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7432,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7455,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1087: string-any */
f_7391(t3,t4,t2);}

/* k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7432,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7443,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1088: string-any */
f_7391(t2,t3,((C_word*)t0)[3]);}}

/* k7436 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7438(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7438,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7328,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7342,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7346,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string->list */
t7=C_fast_retrieve(lf[155]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a7442 in k7430 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7443,c,av);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_memq(t2,C_retrieve2(lf[147],C_text("main#constant1687"))));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7454 in main#quote-option in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7455,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_char_equalp(C_make_character(34),t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7466,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7469,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[125],C_text("main#verbose")))){
/* csc.scm:1104: chicken.base#print */
t3=*((C_word*)lf[163]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7469(2,av2);}}}

/* k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7469,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fix(0);
f_7472(2,av2);}}
else{
/* csc.scm:1105: chicken.process#system */
t3=C_fast_retrieve(lf[162]);{
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

/* k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7472(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7472,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7475,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,C_fix(0));
if(C_truep(t3)){
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7475(2,av2);}}
else{
t4=*((C_word*)lf[158]+1);
t5=*((C_word*)lf[158]+1);
t6=C_i_check_port_2(*((C_word*)lf[158]+1),C_fix(2),C_SCHEME_TRUE,lf[159]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7492,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1107: ##sys#print */
t8=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[161];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[158]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k7473 in k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_7475(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7475,c,av);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=lf[156] /* main#last-exit-code */ =C_fix(0);;
t4=C_retrieve2(lf[156],C_text("main#last-exit-code"));
if(C_truep(C_i_zerop(C_retrieve2(lf[156],C_text("main#last-exit-code"))))){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* csc.scm:1114: chicken.base#exit */
t5=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=C_retrieve2(lf[156],C_text("main#last-exit-code"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=lf[156] /* main#last-exit-code */ =C_fix(1);;
t4=C_retrieve2(lf[156],C_text("main#last-exit-code"));
if(C_truep(C_i_zerop(C_retrieve2(lf[156],C_text("main#last-exit-code"))))){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* csc.scm:1114: chicken.base#exit */
t5=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=C_retrieve2(lf[156],C_text("main#last-exit-code"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}

/* k7490 in k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_7492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7492,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1107: ##sys#print */
t3=*((C_word*)lf[47]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7493 in k7490 in k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in ... */
static void C_ccall f_7495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7495,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1107: ##sys#print */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[160];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7496 in k7493 in k7490 in k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in ... */
static void C_ccall f_7498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7498,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1107: ##sys#print */
t3=*((C_word*)lf[47]+1);{
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

/* k7499 in k7496 in k7493 in k7490 in k7470 in k7467 in k7464 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in ... */
static void C_ccall f_7501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7501,c,av);}
/* csc.scm:1107: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k7515 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7517,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1097: g1743 */
t3=t2;
f_7521(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_7466(2,av2);}}}

/* g1743 in k7515 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_fcall f_7521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7521,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7529,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1102: chicken.process#qs */
t4=C_fast_retrieve(lf[54]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7527 in g1743 in k7515 in main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7529,c,av);}
/* csc.scm:1101: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[166];
av2[3]=t1;
av2[4]=lf[167];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* main#command in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_fcall f_7537(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_7537,2,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7466,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
/* csc.scm:1098: scheme#string-append */
t4=*((C_word*)lf[79]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[164];
av2[3]=t2;
av2[4]=lf[165];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7517,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[32],C_text("main#osx")))){
/* csc.scm:1099: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[168]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[169];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_7517(2,av2);}}}}

/* main#$delete-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7550,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7554,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[125],C_text("main#verbose")))){
/* csc.scm:1118: chicken.base#print */
t4=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[172];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* csc.scm:1119: chicken.file#delete-file */
t4=C_fast_retrieve(lf[171]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k7552 in main#$delete-file in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7554,c,av);}
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* csc.scm:1119: chicken.file#delete-file */
t2=C_fast_retrieve(lf[171]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in ... */
static void C_ccall f_7573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7573,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[183]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7579,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1124: ##sys#print */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[186];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in ... */
static void C_ccall f_7579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7579,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7603,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1125: quotewrap */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
f_3900(3,av2);}}

/* k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_7582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7582,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1124: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k7583 in k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in ... */
static void C_ccall f_7585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7585,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7595,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7599,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1126: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[58],C_text("main#home"));
av2[3]=lf[185];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7586 in k7583 in k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in ... */
static void C_ccall f_7588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7588,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1124: chicken.base#get-output-string */
t3=C_fast_retrieve(lf[184]);{
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

/* k7589 in k7586 in k7583 in k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in ... */
static void C_ccall f_7591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7591,c,av);}
/* csc.scm:1123: command */
f_7537(((C_word*)t0)[2],t1);}

/* k7593 in k7583 in k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in ... */
static void C_ccall f_7595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7595,c,av);}
/* csc.scm:1124: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* k7597 in k7583 in k7580 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in ... */
static void C_ccall f_7599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7599,c,av);}
/* csc.scm:1126: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3900(3,av2);}}

/* k7601 in k7577 in k7571 in k6868 in k6824 in k6821 in k6818 in k6809 in k4504 in k4501 in k4495 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in ... */
static void C_ccall f_7603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7603,c,av);}
/* csc.scm:1124: ##sys#print */
t2=*((C_word*)lf[47]+1);{
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

/* k7607 in k6719 in k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in ... */
static void C_ccall f_7609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7609,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1130: scheme#with-output-to-file */
t3=C_fast_retrieve(lf[220]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a7613 in k7607 in k6719 in k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in ... */
static void C_ccall f_7614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7614,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7622,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[217],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[218],t4);
/* csc.scm:28: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[219]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[219]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}

/* k7620 in a7613 in k7607 in k6719 in k6704 in k6701 in k6565 in k4489 in k4486 in k4483 in k4480 in k4476 in loop in k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in ... */
static void C_ccall f_7622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7622,c,av);}
/* csc.scm:1132: chicken.base#print */
t2=*((C_word*)lf[163]+1);{
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

/* k7638 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7640,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[173]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7644 in k7638 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7646,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7648 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7650(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_7650,c,av);}
a=C_alloc(25);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4388,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4395,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4421,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4451,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4467,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_4467(t17,((C_word*)t0)[2],t1);}

/* k7652 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7654,c,av);}
/* csc.scm:1154: scheme#append */
t2=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[50],C_text("main#arguments"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7656 in k4120 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7658,c,av);}
if(C_truep(t1)){
/* csc.scm:1155: chicken.string#string-split */
t2=C_fast_retrieve(lf[246]);{
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
/* csc.scm:1155: chicken.string#string-split */
t2=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[425];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in ... */
static void C_fcall f_7665(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7665,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7669,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:249: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[168]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[429];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in ... */
static void C_ccall f_7669(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_7669,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_retrieve2(lf[53],C_text("main#quotewrap"));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7688,a[2]=t5,a[3]=t6,a[4]=t2,a[5]=t9,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:251: chicken.string#string-split */
t13=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=t1;
av2[3]=lf[428];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
/* csc.scm:247: scheme#append */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7670 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7672,c,av);}
/* csc.scm:247: scheme#append */
t2=*((C_word*)lf[143]+1);{
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

/* k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in ... */
static void C_ccall f_7688(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7688,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7733,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7733(t6,t2,t1);}

/* k7689 in k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_ccall f_7691(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7691,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[141]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7699,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7699(t6,((C_word*)t0)[4],t1);}

/* map-loop879 in k7689 in k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_fcall f_7699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7699,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:251: g902 */
t4=*((C_word*)lf[79]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[427];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7722 in map-loop879 in k7689 in k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in ... */
static void C_ccall f_7724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7724,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7699(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop906 in k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in ... */
static void C_fcall f_7733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7733,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:251: g912 */
t4=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3900(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7756 in map-loop906 in k7686 in k7667 in k7663 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in ... */
static void C_ccall f_7758(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7758,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7733(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7773 in k4067 in k4037 in k4030 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in ... */
static void C_ccall f_7775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7775,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7665(t2,C_a_i_list1(&a,1,t1));}

/* k7793 in k4025 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in ... */
static void C_ccall f_7795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7795,c,av);}
/* csc.scm:144: chicken.string#string-split */
t2=C_fast_retrieve(lf[246]);{
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

/* k7797 in k4020 in k3970 in k3965 in k3961 in k3948 in k3944 in k3940 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in ... */
static void C_ccall f_7799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7799,c,av);}
/* csc.scm:139: chicken.string#string-split */
t2=C_fast_retrieve(lf[246]);{
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

/* k7822 in k3936 in k3932 in k3928 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in ... */
static void C_ccall f_7824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7824,c,av);}
/* csc.scm:103: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3900(3,av2);}}

/* k7840 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_7842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7842,c,av);}
/* csc.scm:99: quotewrap */
t2=C_retrieve2(lf[53],C_text("main#quotewrap"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_3900(3,av2);}}

/* k7844 in k3880 in k3876 in k3846 in k3840 in k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in ... */
static void C_ccall f_7846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7846,c,av);}
/* csc.scm:99: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[19],C_text("main#host-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7851 in k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in ... */
static void C_ccall f_7853(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7853,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[35]);
t3=lf[36] /* main#aix */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:71: chicken.platform#software-version */
t5=C_fast_retrieve(lf[253]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7855 in k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in ... */
static void C_ccall f_7857(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7857,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[33]);
t3=lf[34] /* main#cygwin */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:70: chicken.platform#build-platform */
t5=C_fast_retrieve(lf[380]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7859 in k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in ... */
static void C_ccall f_7861(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7861,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[31]);
t3=lf[32] /* main#osx */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:69: chicken.platform#software-version */
t5=C_fast_retrieve(lf[253]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7863 in k3814 in k2532 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in ... */
static void C_ccall f_7865(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7865,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[29]);
t3=lf[30] /* main#mingw */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:68: chicken.platform#software-version */
t5=C_fast_retrieve(lf[253]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7874 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in ... */
static void C_ccall f_7876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7876,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* egg-environment.scm:123: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[6],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* egg-environment.scm:124: chicken.process-context#current-directory */
t3=C_fast_retrieve(lf[439]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7877 in k7874 in k2529 in k2460 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in ... */
static void C_ccall f_7879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7879,c,av);}
/* egg-environment.scm:123: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[6],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7884 in k2456 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in ... */
static void C_ccall f_7886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7886,c,av);}
/* egg-environment.scm:99: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[12],C_text("main#default-runlibdir"));
av2[3]=lf[442];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7889 in k2452 in k2448 in k2444 in k2440 in k2436 in k2432 in k2428 in k2424 in k2420 in k2416 in k2412 in k2408 in k2404 in k2400 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in ... */
static void C_ccall f_7891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7891,c,av);}
/* egg-environment.scm:96: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-libdir"));
av2[3]=lf[444];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7894 in k2396 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in ... */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7896,c,av);}
/* egg-environment.scm:78: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[138]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7898 in k2392 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in ... */
static void C_ccall f_7900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7900,c,av);}
/* egg-environment.scm:75: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=lf[445];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7902 in k2388 in k2384 in k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in ... */
static void C_ccall f_7904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7904,c,av);}
/* egg-environment.scm:72: scheme#string-append */
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=lf[446];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7909 in k2376 in k2372 in k2368 in k2364 in k2360 in k2356 in k2352 in k2348 in k2344 in k2340 in k2336 in k2332 in k2328 in k2324 in k2320 in k2314 in k2308 in k2305 in k2302 in k2299 in k2296 in ... */
static void C_ccall f_7911(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7911,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[16]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[17]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[49]+1);{
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

/* a7912 in k2290 in k2287 */
static void C_ccall f_7913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7913,c,av);}
/* csc.scm:28: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[447]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[447]+1);
av2[1]=t1;
av2[2]=lf[448];
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
if(C_unlikely(!C_demand_2(2261))){
C_save(t1);
C_rereclaim2(2261*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,450);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[16]=C_h_intern(&lf[16],7, C_text("windows"));
lf[17]=C_h_intern(&lf[17],4, C_text("unix"));
lf[29]=C_h_intern(&lf[29],7, C_text("mingw32"));
lf[31]=C_h_intern(&lf[31],6, C_text("macosx"));
lf[33]=C_h_intern(&lf[33],6, C_text("cygwin"));
lf[35]=C_h_intern(&lf[35],3, C_text("aix"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001solaris\376\003\000\000\002\376\001\000\000\005\001sunos\376\377\016"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001linux\376\003\000\000\002\376\001\000\000\006\001netbsd\376\003\000\000\002\376\001\000\000\007\001freebsd\376\003\000\000\002\376\001\000\000\007\001solaris\376\003\000\000\002\376\001\000\000\007\001"
"openbsd\376\003\000\000\002\376\001\000\000\004\001hurd\376\003\000\000\002\376\001\000\000\005\001haiku\376\377\016"));
lf[42]=C_h_intern(&lf[42],20, C_text("##sys#standard-error"));
lf[43]=C_h_intern(&lf[43],7, C_text("fprintf"));
lf[44]=C_h_intern(&lf[44],17, C_text("chicken.base#exit"));
lf[45]=C_h_intern(&lf[45],18, C_text("##sys#write-char-0"));
lf[46]=C_h_intern(&lf[46],22, C_text("chicken.format#fprintf"));
lf[47]=C_h_intern(&lf[47],11, C_text("##sys#print"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[49]=C_h_intern(&lf[49],19, C_text("##sys#peek-c-string"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[54]=C_h_intern(&lf[54],18, C_text("chicken.process#qs"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.string#string-translate"));
lf[56]=C_h_intern(&lf[56],35, C_text("chicken.pathname#normalize-pathname"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003obj"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001o"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[73]=C_h_intern(&lf[73],28, C_text("##sys#load-dynamic-extension"));
lf[79]=C_h_intern(&lf[79],20, C_text("scheme#string-append"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003lib"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-R"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-rpath="));
lf[133]=C_h_intern(&lf[133],32, C_text("chicken.platform#repository-path"));
lf[135]=C_h_intern(&lf[135],22, C_text("chicken.load#find-file"));
lf[136]=C_h_intern(&lf[136],16, C_text("##sys#setup-mode"));
lf[137]=C_h_intern(&lf[137],25, C_text("chicken.file#file-exists\077"));
lf[138]=C_h_intern(&lf[138],30, C_text("chicken.pathname#make-pathname"));
lf[141]=C_h_intern(&lf[141],3, C_text("map"));
lf[142]=C_h_intern(&lf[142],33, C_text("chicken.string#string-intersperse"));
lf[143]=C_h_intern(&lf[143],13, C_text("scheme#append"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-l"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[152]=C_h_intern(&lf[152],32, C_text("chicken.string#string-translate\052"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016"));
lf[154]=C_h_intern(&lf[154],18, C_text("##sys#list->string"));
lf[155]=C_h_intern(&lf[155],18, C_text("##sys#string->list"));
lf[158]=C_h_intern(&lf[158],21, C_text("##sys#standard-output"));
lf[159]=C_h_intern(&lf[159],6, C_text("printf"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000;\012Error: shell command terminated with non-zero exit status "));
lf[162]=C_h_intern(&lf[162],22, C_text("chicken.process#system"));
lf[163]=C_h_intern(&lf[163],18, C_text("chicken.base#print"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037/usr/bin/env DYLD_LIBRARY_PATH="));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[168]=C_h_intern(&lf[168],48, C_text("chicken.process-context#get-environment-variable"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021DYLD_LIBRARY_PATH"));
lf[171]=C_h_intern(&lf[171],24, C_text("chicken.file#delete-file"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003rm "));
lf[173]=C_h_intern(&lf[173],34, C_text("chicken.base#implicit-exit-handler"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000#not enough arguments to option `~A\047"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\013-dynamiclib\376\377\016"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007-bundle\376\003\000\000\002\376B\000\000\034-headerpad_max_install_names\376\377\016"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007-shared\376\377\016"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026chicken-compile-shared"));
lf[181]=C_h_intern(&lf[181],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[182]=C_h_intern(&lf[182],8, C_text("for-each"));
lf[183]=C_h_intern(&lf[183],6, C_text("format"));
lf[184]=C_h_intern(&lf[184],30, C_text("chicken.base#get-output-string"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005mac.r"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000 /Developer/Tools/Rez -t APPL -o "));
lf[187]=C_h_intern(&lf[187],31, C_text("chicken.base#open-output-string"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 -change "));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.dylib "));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020@executable_path"));
lf[192]=C_h_intern(&lf[192],19, C_text("##sys#string-append"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006.dylib"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-o "));
lf[195]=C_h_intern(&lf[195],14, C_text("scheme#reverse"));
lf[196]=C_h_intern(&lf[196],23, C_text("chicken.string#->string"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000#could not find linked extension: ~A"));
lf[198]=C_h_intern(&lf[198],27, C_text("scheme#with-input-from-file"));
lf[199]=C_h_intern(&lf[199],11, C_text("scheme#read"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[201]=C_h_intern(&lf[201],27, C_text("chicken.string#string-chomp"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.static"));
lf[203]=C_h_intern(&lf[203],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.old"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004move"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002mv"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005.old\047"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030\047 - renaming source to `"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376B\000\0001Warning: output file will overwrite source file `"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003g++"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-Wno-write-strings"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-o "));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000Pobject file generated from `~a\047 will overwrite explicitly given object file"
" `~a\047"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042\052\042\042 name=\042\042"));
lf[219]=C_h_intern(&lf[219],21, C_text("##sys#print-to-string"));
lf[220]=C_h_intern(&lf[220],26, C_text("scheme#with-output-to-file"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013generating "));
lf[222]=C_h_intern(&lf[222],30, C_text("chicken.pathname#pathname-file"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002rc"));
lf[224]=C_h_intern(&lf[224],30, C_text("chicken.platform#software-type"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031no source files specified"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011bogus.scm"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-:d\376\377\016"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-emit-link-file"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-emit-link-file"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004link"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-output-file"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000KC file generated from `~a\047 will overwrite explicitly given source file `~a\047"
));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cpp"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001m"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-dynamic"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000Gthe `-c\047 option cannot be used in combination with multiple input files"));
lf[243]=C_h_intern(&lf[243],14, C_text("scheme#newline"));
lf[244]=C_h_intern(&lf[244],19, C_text("chicken.base#print\052"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[246]=C_h_intern(&lf[246],27, C_text("chicken.string#string-split"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:;"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026CHICKEN_C_LIBRARY_PATH"));
lf[249]=C_h_intern(&lf[249],7, C_text("freebsd"));
lf[250]=C_h_intern(&lf[250],7, C_text("openbsd"));
lf[251]=C_h_intern(&lf[251],6, C_text("netbsd"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-Wl,-z,origin"));
lf[253]=C_h_intern(&lf[253],33, C_text("chicken.platform#software-version"));
lf[254]=C_h_intern(&lf[254],19, C_text("chicken.string#conc"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-Wl,"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007$ORIGIN"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-Wl,"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-L"));
lf[262]=C_h_intern(&lf[262],5, C_text("-help"));
lf[263]=C_h_intern(&lf[263],6, C_text("--help"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\047.\012"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\052+\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
"d line are translated, compiled or linked as needed.\012\012  FILENAME is a Scheme sou"
"rce file name with optional extension or a\012  C/C++/Objective-C source, object or"
" library file name with extension. OPTION\012  may be one of the following:\012\012  Gene"
"ral options:\012\012    -h  -help                      display this text and exit\012    "
"-v  -verbose                   show compiler notes and tool-invocations\012    -vv "
"                           display information about translation\012               "
"                     progress\012    -vvv                           display informa"
"tion about all compilation\012                                    stages\012    -versi"
"on                       display Scheme compiler version and exit\012    -release  "
"                     display release number and exit\012\012  File and pathname option"
"s:\012\012    -o -output-file FILENAME       specifies target executable name\012    -I -"
"include-path PATHNAME      specifies alternative path for included\012             "
"                       files\012    -to-stdout                     write compiler t"
"o stdout (implies -t)\012    -s -shared -dynamic            generate dynamically lo"
"adable shared object\012                                    file\012\012  Language option"
"s:\012\012    -D  -DSYMBOL  -feature SYMBOL  register feature identifier\012    -no-featu"
"re SYMBOL             disable builtin feature identifier\012    -c++               "
"            compile via a C++ source file (.cpp) \012    -objc                     "
"     compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i"
" -case-insensitive           don\047t preserve case of read symbols    \012    -K -key"
"word-style STYLE        enable alternative keyword-syntax\012                      "
"              (prefix, suffix or none)\012       -no-parentheses-synonyms    disabl"
"es list delimiter synonyms\012       -no-symbol-escape           disables support f"
"or escaped symbols\012       -r5rs-syntax                disables the CHICKEN exten"
"sions to\012                                    R5RS syntax\012    -compile-syntax    "
"            macros are made available at run-time\012    -j -emit-import-library MO"
"DULE write compile-time module information into\012                                "
"    separate file\012    -J -emit-all-import-libraries  emit import-libraries for a"
"ll defined modules\012    -no-compiler-syntax            disable expansion of compi"
"ler-macros\012    -m -module NAME                wrap compiled code in a module\012   "
" -M -module-registration        always generate module registration code\012    -N "
"-no-module-registration     never generate module registration code\012            "
"                        (overrides `-M\047)\012\012  Translation options:\012\012    -x  -expli"
"cit-use              do not use units `library\047 and `eval\047 by\012                  "
"                  default\012    -P  -check-syntax              stop compilation af"
"ter macro-expansion\012    -A  -analyze-only              stop compilation after fi"
"rst analysis pass\012\012  Debugging options:\012\012    -w  -no-warnings               disa"
"ble warnings\012    -d0 -d1 -d2 -d3 -debug-level NUMBER\012                           "
"        set level of available debugging information\012    -no-trace              "
"        disable rudimentary debugging information\012    -debug-info               "
"     enable debug-information in compiled code for use\012                         "
"           with an external debugger\012    -profile                       executab"
"le emits profiling information \012    -accumulate-profile            executable em"
"its profiling information in\012                                    append mode\012   "
" -profile-name FILENAME         name of the generated profile information\012      "
"                              file\012    -consult-types-file FILENAME   load addit"
"ional type database\012\012  Optimization options:\012\012    -O -O0 -O1 -O2 -O3 -O4 -O5 -op"
"timize-level NUMBER\012                                   enable certain sets of op"
"timization options\012    -optimize-leaf-routines        enable leaf routine optimi"
"zation\012    -no-usual-integrations         standard procedures may be redefined\012 "
"   -u  -unsafe                    disable safety checks\012    -local              "
"           assume globals are only modified in current\012                         "
"           file\012    -b  -block                     enable block-compilation\012    "
"-disable-interrupts            disable interrupts in compiled code\012    -f  -fixn"
"um-arithmetic         assume all numbers are fixnums\012    -disable-stack-overflow"
"-checks disables detection of stack-overflows\012    -inline                       "
" enable inlining\012    -inline-limit LIMIT            set inlining threshold\012    -"
"inline-global                 enable cross-module inlining\012    -specialize      "
"              perform type-based specialization of primitive calls\012    -oi -emit"
"-inline-file FILENAME generate file with globally inlinable\012                    "
"                procedures (implies -inline -local)\012    -consult-inline-file FIL"
"ENAME  explicitly load inline file\012    -ot  -emit-types-file FILENAME write type"
"-declaration information into file\012    -no-argc-checks                disable ar"
"gument count checks\012    -no-bound-checks               disable bound variable ch"
"ecks\012    -no-procedure-checks           disable procedure call checks\012    -no-pr"
"ocedure-checks-for-usual-bindings\012                                   disable pro"
"cedure call checks only for usual\012                                    bindings\012 "
"   -no-procedure-checks-for-toplevel-bindings\012                                  "
" disable procedure call checks for toplevel\012                                    "
"bindings\012    -strict-types                  assume variable do not change their "
"type\012    -clustering                    combine groups of local procedures into "
"dispatch\012                                     loop\012    -lfa2                    "
"      perform additional lightweight flow-analysis pass\012    -unroll-limit LIMIT "
"         specifies inlining limit for self-recursive calls\012\012  Configuration opti"
"ons:\012\012    -unit NAME                     compile file as a library unit\012    -use"
"s NAME                     declare library unit as used.\012    -heap-size NUMBER  "
"            specifies heap-size of compiled executable\012    -nursery NUMBER  -sta"
"ck-size NUMBER\012                                   specifies nursery size of comp"
"iled\012                                   executable\012    -X -extend FILENAME      "
"      load file before compilation commences\012    -prelude EXPRESSION            "
"add expression to beginning of source file\012    -postlude EXPRESSION           ad"
"d expression to end of source file\012    -prologue FILENAME             include fi"
"le before main source file\012    -epilogue FILENAME             include file after"
" main source file\012\012    -e  -embedded                  compile as embedded\012      "
"                              (don\047t generate `main()\047)\012    -gui                "
"           compile as GUI application\012    -link NAME                     link ex"
"tension with compiled executable\012                                    (implies -u"
"ses)\012    -R  -require-extension NAME    require extension and import in compiled"
"\012                                    code\012    -dll -library                  com"
"pile multiple units into a dynamic\012                                    library\012 "
"   -libdir DIRECTORY              override directory for runtime library\012\012  Opti"
"ons to other passes:\012\012    -C OPTION                      pass option to C compil"
"er\012    -L OPTION                      pass option to linker\012    -I<DIR>         "
"               pass \134\042-I<DIR>\134\042 to C compiler\012                                  "
"  (add include path)\012    -L<DIR>                        pass \134\042-L<DIR>\134\042 to link"
"er\012                                    (add library path)\012    -k                "
"             keep intermediate files\012    -c                             stop aft"
"er compilation to object files\012    -t                             stop after tra"
"nslation to C\012    -cc COMPILER                   select other C compiler than th"
"e default\012    -cxx COMPILER                  select other C++ compiler than the "
"default\012    -ld COMPILER                   select other linker than the default "
"\012    -static                        link with static CHICKEN libraries and\012     "
"                               extensions (if possible)\012    -F<DIR>             "
"           pass \134\042-F<DIR>\134\042 to C compiler\012                                    (a"
"dd framework header path on Mac OS X)\012    -framework NAME                passed "
"to linker on Mac OS X\012    -rpath PATHNAME                add directory to runtim"
"e library search path\012    -Wl,...                        pass linker options\012   "
" -strip                         strip resulting binary\012\012  Inquiry options:\012\012    "
"-home                          show home-directory (where support files go)\012    "
"-cflags                        show required C-compiler flags and exit\012    -ldfl"
"ags                       show required linker flags and exit\012    -libs         "
"                 show required libraries and exit\012    -cc-name                  "
"     show name of default C compiler used\012    -cxx-name                      sho"
"w name of default C++ compiler used\012    -ld-name                       show name"
" of default linker used\012    -dry-run                       just show commands ex"
"ecuted, don\047t run them\012                                    (implies `-v\047)\012\012  Obs"
"cure options:\012\012    -debug MODES                   display debugging output for t"
"he given modes\012    -compiler PATHNAME             use other compiler than defaul"
"t `chicken\047\012    -raw                           do not generate implicit init- an"
"d exit code\012    -emit-external-prototypes-first\012                                "
"   emit prototypes for callbacks before foreign\012                                "
"    declarations\012    -regenerate-import-libraries   emit import libraries even w"
"hen unchanged\012    -ignore-repository             do not refer to repository for "
"extensions\012    -keep-shadowed-macros          do not remove shadowed macro\012    -"
"host                          compile for host when configured for\012             "
"                       cross-compiling\012    -private-repository            load e"
"xtensions from executable path\012    -deployed                      link support f"
"ile to be used from a deployed \012                                    executable ("
"sets `rpath\047 accordingly, if supported\012                                    on th"
"is platform)\012    -no-elevation                  embed manifest on Windows to sup"
"ress elevation\012                                    warnings for programs named `"
"install\047 or `setup\047\012\012  Options can be collapsed if unambiguous, so\012\012    -vkfO\012\012 "
" is the same as\012\012    -v -k -fixnum-arithmetic -optimize\012\012  The contents of the e"
"nvironment variable CSC_OPTIONS are implicitly passed to\012  every invocation of `"
));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000! [OPTION ...] [FILENAME ...]\012\012  `"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007Usage: "));
lf[268]=C_h_intern(&lf[268],8, C_text("-release"));
lf[269]=C_h_intern(&lf[269],32, C_text("chicken.platform#chicken-version"));
lf[270]=C_h_intern(&lf[270],8, C_text("-version"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 -version"));
lf[272]=C_h_intern(&lf[272],4, C_text("-c++"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-no-cpp-precomp"));
lf[274]=C_h_intern(&lf[274],5, C_text("-objc"));
lf[275]=C_h_intern(&lf[275],7, C_text("-static"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-static"));
lf[277]=C_h_intern(&lf[277],7, C_text("-cflags"));
lf[278]=C_h_intern(&lf[278],8, C_text("-ldflags"));
lf[279]=C_h_intern(&lf[279],8, C_text("-cc-name"));
lf[280]=C_h_intern(&lf[280],9, C_text("-cxx-name"));
lf[281]=C_h_intern(&lf[281],8, C_text("-ld-name"));
lf[282]=C_h_intern(&lf[282],5, C_text("-home"));
lf[283]=C_h_intern(&lf[283],5, C_text("-libs"));
lf[284]=C_h_intern(&lf[284],2, C_text("-v"));
lf[285]=C_h_intern(&lf[285],8, C_text("-verbose"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-verbose"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-v"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-v"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-Q"));
lf[290]=C_h_intern(&lf[290],2, C_text("-w"));
lf[291]=C_h_intern(&lf[291],12, C_text("-no-warnings"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-w"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-no-warnings"));
lf[294]=C_h_intern(&lf[294],2, C_text("-A"));
lf[295]=C_h_intern(&lf[295],13, C_text("-analyze-only"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-analyze-only"));
lf[297]=C_h_intern(&lf[297],2, C_text("-P"));
lf[298]=C_h_intern(&lf[298],13, C_text("-check-syntax"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-check-syntax"));
lf[300]=C_h_intern(&lf[300],2, C_text("-k"));
lf[301]=C_h_intern(&lf[301],2, C_text("-c"));
lf[302]=C_h_intern(&lf[302],2, C_text("-t"));
lf[303]=C_h_intern(&lf[303],2, C_text("-e"));
lf[304]=C_h_intern(&lf[304],9, C_text("-embedded"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-DC_EMBEDDED"));
lf[306]=C_h_intern(&lf[306],5, C_text("-link"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-link"));
lf[309]=C_h_intern(&lf[309],7, C_text("-libdir"));
lf[310]=C_h_intern(&lf[310],18, C_text("-require-extension"));
lf[311]=C_h_intern(&lf[311],2, C_text("-R"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-require-extension"));
lf[313]=C_h_intern(&lf[313],19, C_text("-private-repository"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026-DC_PRIVATE_REPOSITORY"));
lf[315]=C_h_intern(&lf[315],18, C_text("-ignore-repository"));
lf[316]=C_h_intern(&lf[316],11, C_text("-setup-mode"));
lf[317]=C_h_intern(&lf[317],13, C_text("-no-elevation"));
lf[318]=C_h_intern(&lf[318],4, C_text("-gui"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-DC_GUI"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-lkernel32"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-luser32"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-lgdi32"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011-mwindows"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012chicken.rc"));
lf[325]=C_h_intern(&lf[325],9, C_text("-deployed"));
lf[326]=C_h_intern(&lf[326],10, C_text("-framework"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-framework"));
lf[328]=C_h_intern(&lf[328],2, C_text("-o"));
lf[329]=C_h_intern(&lf[329],12, C_text("-output-file"));
lf[330]=C_h_intern(&lf[330],2, C_text("-O"));
lf[331]=C_h_intern(&lf[331],3, C_text("-O1"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[334]=C_h_intern(&lf[334],3, C_text("-O0"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[337]=C_h_intern(&lf[337],3, C_text("-O2"));
lf[338]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[340]=C_h_intern(&lf[340],3, C_text("-O3"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[343]=C_h_intern(&lf[343],3, C_text("-O4"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0014"));
lf[346]=C_h_intern(&lf[346],3, C_text("-O5"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-optimize-level"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0015"));
lf[349]=C_h_intern(&lf[349],3, C_text("-d0"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[352]=C_h_intern(&lf[352],3, C_text("-d1"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[355]=C_h_intern(&lf[355],3, C_text("-d2"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[358]=C_h_intern(&lf[358],3, C_text("-d3"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-debug-level"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[361]=C_h_intern(&lf[361],6, C_text("-debug"));
lf[362]=C_h_intern(&lf[362],8, C_text("-dry-run"));
lf[363]=C_h_intern(&lf[363],2, C_text("-s"));
lf[364]=C_h_intern(&lf[364],4, C_text("-dll"));
lf[365]=C_h_intern(&lf[365],8, C_text("-library"));
lf[366]=C_h_intern(&lf[366],9, C_text("-compiler"));
lf[367]=C_h_intern(&lf[367],3, C_text("-cc"));
lf[368]=C_h_intern(&lf[368],4, C_text("-cxx"));
lf[369]=C_h_intern(&lf[369],3, C_text("-ld"));
lf[370]=C_h_intern(&lf[370],2, C_text("-I"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[372]=C_h_intern(&lf[372],2, C_text("-C"));
lf[373]=C_h_intern(&lf[373],6, C_text("-strip"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[375]=C_h_intern(&lf[375],2, C_text("-L"));
lf[376]=C_h_intern(&lf[376],6, C_text("-rpath"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-Wl,"));
lf[378]=C_h_intern(&lf[378],3, C_text("gnu"));
lf[379]=C_h_intern(&lf[379],5, C_text("clang"));
lf[380]=C_h_intern(&lf[380],31, C_text("chicken.platform#build-platform"));
lf[381]=C_h_intern(&lf[381],5, C_text("-host"));
lf[382]=C_h_intern(&lf[382],3, C_text("-oi"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021-emit-inline-file"));
lf[384]=C_h_intern(&lf[384],3, C_text("-ot"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020-emit-types-file"));
lf[386]=C_h_intern(&lf[386],1, C_text("-"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001-\376\377\016"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\002\001-m\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\002\001-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-D\376\003\000\000\002\376B\000\000\010-featur"
"e\376\377\016\376\003\000\000\002\376\003\000\000\002\376\016\000\000\002\376\377\001\000\000\000\000\376\377\001\377\377\377\377\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-"
"K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-X\376\003\000\000\002\376B\000\000\007-extend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\002\001-J\376\003\000\000\002\376B\000\000\032-emit-all-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-M\376\003\000\000\002\376B\000\000\024-module-r"
"egistration\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-N\376\003\000\000\002\376B\000\000\027-no-module-registration\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\002\001-x\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-u\376\003\000\000\002\376B\000\000\007-unsafe\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\002\001-j\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001-b\376\003\000\000\002\376B\000\000\006-block\376\377\016\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\006\001-types\376\003\000\000\002\376B\000\000\023-consult-types-file\376\377\016\376\377\016"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\015\001-explicit-use\376\003\000\000\002\376\001\000\000\011\001-no-trace\376\003\000\000\002\376\001\000\000\014\001-no-warnings\376\003\000\000\002\376\001\000\000\026\001-n"
"o-usual-integrations\376\003\000\000\002\376\001\000\000\027\001-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007\001-unsafe\376\003\000\000\002\376\001\000"
"\000\006\001-block\376\003\000\000\002\376\001\000\000\023\001-disable-interrupts\376\003\000\000\002\376\001\000\000\022\001-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012\001-"
"to-stdout\376\003\000\000\002\376\001\000\000\010\001-profile\376\003\000\000\002\376\001\000\000\004\001-raw\376\003\000\000\002\376\001\000\000\023\001-accumulate-profile\376\003\000\000\002\376\001"
"\000\000\015\001-check-syntax\376\003\000\000\002\376\001\000\000\021\001-case-insensitive\376\003\000\000\002\376\001\000\000\007\001-shared\376\003\000\000\002\376\001\000\000\017\001-compi"
"le-syntax\376\003\000\000\002\376\001\000\000\017\001-no-lambda-info\376\003\000\000\002\376\001\000\000\010\001-dynamic\376\003\000\000\002\376\001\000\000\036\001-disable-stack-"
"overflow-checks\376\003\000\000\002\376\001\000\000\006\001-local\376\003\000\000\002\376\001\000\000\037\001-emit-external-prototypes-first\376\003\000\000\002\376"
"\001\000\000\007\001-inline\376\003\000\000\002\376\001\000\000\010\001-release\376\003\000\000\002\376\001\000\000\015\001-analyze-only\376\003\000\000\002\376\001\000\000\025\001-keep-shadowed"
"-macros\376\003\000\000\002\376\001\000\000\016\001-inline-global\376\003\000\000\002\376\001\000\000\022\001-ignore-repository\376\003\000\000\002\376\001\000\000\021\001-no-symb"
"ol-escape\376\003\000\000\002\376\001\000\000\030\001-no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\014\001-r5rs-syntax\376\003\000\000\002\376\001\000\000\017\001-n"
"o-argc-checks\376\003\000\000\002\376\001\000\000\020\001-no-bound-checks\376\003\000\000\002\376\001\000\000\024\001-no-procedure-checks\376\003\000\000\002\376\001\000\000"
"\023\001-no-compiler-syntax\376\003\000\000\002\376\001\000\000\032\001-emit-all-import-libraries\376\003\000\000\002\376\001\000\000\015\001-no-elevati"
"on\376\003\000\000\002\376\001\000\000\024\001-module-registration\376\003\000\000\002\376\001\000\000\027\001-no-module-registration\376\003\000\000\002\376\001\000\000\047\001-n"
"o-procedure-checks-for-usual-bindings\376\003\000\000\002\376\001\000\000\034\001-regenerate-import-libraries\376\003\000\000"
"\002\376\001\000\000\013\001-specialize\376\003\000\000\002\376\001\000\000\015\001-strict-types\376\003\000\000\002\376\001\000\000\013\001-clustering\376\003\000\000\002\376\001\000\000\005\001-lfa2"
"\376\003\000\000\002\376\001\000\000\013\001-debug-info\376\003\000\000\002\376\001\000\000\052\001-no-procedure-checks-for-toplevel-bindings\376\377\016"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001-debug\376\003\000\000\002\376\001\000\000\012\001-heap-size\376\003\000\000\002\376\001\000\000\010\001-nursery\376\003\000\000\002\376\001\000\000\013\001-stack-size\376"
"\003\000\000\002\376\001\000\000\011\001-compiler\376\003\000\000\002\376\001\000\000\005\001-unit\376\003\000\000\002\376\001\000\000\005\001-uses\376\003\000\000\002\376\001\000\000\016\001-keyword-style\376\003\000\000"
"\002\376\001\000\000\017\001-optimize-level\376\003\000\000\002\376\001\000\000\015\001-include-path\376\003\000\000\002\376\001\000\000\016\001-database-size\376\003\000\000\002\376\001\000\000"
"\007\001-extend\376\003\000\000\002\376\001\000\000\010\001-prelude\376\003\000\000\002\376\001\000\000\011\001-postlude\376\003\000\000\002\376\001\000\000\011\001-prologue\376\003\000\000\002\376\001\000\000\011\001-"
"epilogue\376\003\000\000\002\376\001\000\000\017\001-emit-link-file\376\003\000\000\002\376\001\000\000\015\001-inline-limit\376\003\000\000\002\376\001\000\000\015\001-profile-na"
"me\376\003\000\000\002\376\001\000\000\015\001-unroll-limit\376\003\000\000\002\376\001\000\000\021\001-emit-inline-file\376\003\000\000\002\376\001\000\000\024\001-consult-inline"
"-file\376\003\000\000\002\376\001\000\000\020\001-emit-types-file\376\003\000\000\002\376\001\000\000\023\001-consult-types-file\376\003\000\000\002\376\001\000\000\010\001-featur"
"e\376\003\000\000\002\376\001\000\000\014\001-debug-level\376\003\000\000\002\376\001\000\000\024\001-emit-import-library\376\003\000\000\002\376\001\000\000\007\001-module\376\003\000\000\002\376\001"
"\000\000\005\001-link\376\003\000\000\002\376\001\000\000\013\001-no-feature\376\377\016"));
lf[392]=C_h_intern(&lf[392],18, C_text("chicken.base#error"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad -L argument, <DIR> starts with whitespace"));
lf[394]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad -I argument: <DIR> starts with whitespace"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[396]=C_h_intern(&lf[396],16, C_text("scheme#substring"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\0004invalid option `~A\047 - did you mean `-L -l<library>\047\077"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid option `~A\047"));
lf[400]=C_h_intern(&lf[400],5, C_text("foldr"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid option `~A\047"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-Wl,"));
lf[403]=C_h_intern(&lf[403],35, C_text("chicken.pathname#decompose-pathname"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001h"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002rc"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cpp"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001C"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002cc"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cxx"));
lf[411]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003hpp"));
lf[412]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017-no-cpp-precomp"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001m"));
lf[414]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001M"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002mm"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030file `~A\047 does not exist"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.scm"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-:"));
lf[419]=C_h_intern(&lf[419],15, C_text("-optimize-level"));
lf[420]=C_h_intern(&lf[420],15, C_text("-benchmark-mode"));
lf[421]=C_h_intern(&lf[421],10, C_text("-to-stdout"));
lf[422]=C_h_intern(&lf[422],7, C_text("-shared"));
lf[423]=C_h_intern(&lf[423],8, C_text("-dynamic"));
lf[424]=C_h_intern(&lf[424],21, C_text("scheme#string->symbol"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013CSC_OPTIONS"));
lf[427]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:;"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026CHICKEN_C_INCLUDE_PATH"));
lf[430]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[431]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030PHhsfiENxubvwAOeWkctgSJM"));
lf[432]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016"));
lf[433]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016"));
lf[434]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007static."));
lf[435]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007static."));
lf[436]=C_h_intern(&lf[436],25, C_text("chicken.platform#feature\077"));
lf[437]=C_h_intern_kw(&lf[437],13, C_text("cross-chicken"));
lf[438]=C_h_intern(&lf[438],46, C_text("chicken.process-context#command-line-arguments"));
lf[439]=C_h_intern(&lf[439],41, C_text("chicken.process-context#current-directory"));
lf[440]=C_h_intern(&lf[440],39, C_text("chicken.platform#system-cache-directory"));
lf[441]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[442]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[443]=C_h_intern(&lf[443],20, C_text("##sys#fixnum->string"));
lf[444]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[445]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[446]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[447]=C_h_intern(&lf[447],30, C_text("##sys#register-compiled-module"));
lf[448]=C_h_intern(&lf[448],4, C_text("main"));
lf[449]=C_h_intern(&lf[449],22, C_text("##sys#with-environment"));
C_register_lf2(lf,450,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[477] = {
{C_text("f8671:csc_2escm"),(void*)f8671},
{C_text("f8677:csc_2escm"),(void*)f8677},
{C_text("f8681:csc_2escm"),(void*)f8681},
{C_text("f8713:csc_2escm"),(void*)f8713},
{C_text("f8761:csc_2escm"),(void*)f8761},
{C_text("f9076:csc_2escm"),(void*)f9076},
{C_text("f9080:csc_2escm"),(void*)f9080},
{C_text("f_2289:csc_2escm"),(void*)f_2289},
{C_text("f_2292:csc_2escm"),(void*)f_2292},
{C_text("f_2295:csc_2escm"),(void*)f_2295},
{C_text("f_2298:csc_2escm"),(void*)f_2298},
{C_text("f_2301:csc_2escm"),(void*)f_2301},
{C_text("f_2304:csc_2escm"),(void*)f_2304},
{C_text("f_2307:csc_2escm"),(void*)f_2307},
{C_text("f_2310:csc_2escm"),(void*)f_2310},
{C_text("f_2316:csc_2escm"),(void*)f_2316},
{C_text("f_2322:csc_2escm"),(void*)f_2322},
{C_text("f_2326:csc_2escm"),(void*)f_2326},
{C_text("f_2330:csc_2escm"),(void*)f_2330},
{C_text("f_2334:csc_2escm"),(void*)f_2334},
{C_text("f_2338:csc_2escm"),(void*)f_2338},
{C_text("f_2342:csc_2escm"),(void*)f_2342},
{C_text("f_2346:csc_2escm"),(void*)f_2346},
{C_text("f_2350:csc_2escm"),(void*)f_2350},
{C_text("f_2354:csc_2escm"),(void*)f_2354},
{C_text("f_2358:csc_2escm"),(void*)f_2358},
{C_text("f_2362:csc_2escm"),(void*)f_2362},
{C_text("f_2366:csc_2escm"),(void*)f_2366},
{C_text("f_2370:csc_2escm"),(void*)f_2370},
{C_text("f_2374:csc_2escm"),(void*)f_2374},
{C_text("f_2378:csc_2escm"),(void*)f_2378},
{C_text("f_2386:csc_2escm"),(void*)f_2386},
{C_text("f_2390:csc_2escm"),(void*)f_2390},
{C_text("f_2394:csc_2escm"),(void*)f_2394},
{C_text("f_2398:csc_2escm"),(void*)f_2398},
{C_text("f_2402:csc_2escm"),(void*)f_2402},
{C_text("f_2406:csc_2escm"),(void*)f_2406},
{C_text("f_2410:csc_2escm"),(void*)f_2410},
{C_text("f_2414:csc_2escm"),(void*)f_2414},
{C_text("f_2418:csc_2escm"),(void*)f_2418},
{C_text("f_2422:csc_2escm"),(void*)f_2422},
{C_text("f_2426:csc_2escm"),(void*)f_2426},
{C_text("f_2430:csc_2escm"),(void*)f_2430},
{C_text("f_2434:csc_2escm"),(void*)f_2434},
{C_text("f_2438:csc_2escm"),(void*)f_2438},
{C_text("f_2442:csc_2escm"),(void*)f_2442},
{C_text("f_2446:csc_2escm"),(void*)f_2446},
{C_text("f_2450:csc_2escm"),(void*)f_2450},
{C_text("f_2454:csc_2escm"),(void*)f_2454},
{C_text("f_2458:csc_2escm"),(void*)f_2458},
{C_text("f_2462:csc_2escm"),(void*)f_2462},
{C_text("f_2531:csc_2escm"),(void*)f_2531},
{C_text("f_2534:csc_2escm"),(void*)f_2534},
{C_text("f_2969:csc_2escm"),(void*)f_2969},
{C_text("f_2975:csc_2escm"),(void*)f_2975},
{C_text("f_2989:csc_2escm"),(void*)f_2989},
{C_text("f_3031:csc_2escm"),(void*)f_3031},
{C_text("f_3058:csc_2escm"),(void*)f_3058},
{C_text("f_3106:csc_2escm"),(void*)f_3106},
{C_text("f_3120:csc_2escm"),(void*)f_3120},
{C_text("f_3133:csc_2escm"),(void*)f_3133},
{C_text("f_3154:csc_2escm"),(void*)f_3154},
{C_text("f_3162:csc_2escm"),(void*)f_3162},
{C_text("f_3183:csc_2escm"),(void*)f_3183},
{C_text("f_3198:csc_2escm"),(void*)f_3198},
{C_text("f_3210:csc_2escm"),(void*)f_3210},
{C_text("f_3214:csc_2escm"),(void*)f_3214},
{C_text("f_3232:csc_2escm"),(void*)f_3232},
{C_text("f_3311:csc_2escm"),(void*)f_3311},
{C_text("f_3411:csc_2escm"),(void*)f_3411},
{C_text("f_3433:csc_2escm"),(void*)f_3433},
{C_text("f_3444:csc_2escm"),(void*)f_3444},
{C_text("f_3816:csc_2escm"),(void*)f_3816},
{C_text("f_3842:csc_2escm"),(void*)f_3842},
{C_text("f_3848:csc_2escm"),(void*)f_3848},
{C_text("f_3851:csc_2escm"),(void*)f_3851},
{C_text("f_3858:csc_2escm"),(void*)f_3858},
{C_text("f_3861:csc_2escm"),(void*)f_3861},
{C_text("f_3864:csc_2escm"),(void*)f_3864},
{C_text("f_3867:csc_2escm"),(void*)f_3867},
{C_text("f_3874:csc_2escm"),(void*)f_3874},
{C_text("f_3878:csc_2escm"),(void*)f_3878},
{C_text("f_3882:csc_2escm"),(void*)f_3882},
{C_text("f_3900:csc_2escm"),(void*)f_3900},
{C_text("f_3908:csc_2escm"),(void*)f_3908},
{C_text("f_3912:csc_2escm"),(void*)f_3912},
{C_text("f_3914:csc_2escm"),(void*)f_3914},
{C_text("f_3922:csc_2escm"),(void*)f_3922},
{C_text("f_3930:csc_2escm"),(void*)f_3930},
{C_text("f_3934:csc_2escm"),(void*)f_3934},
{C_text("f_3938:csc_2escm"),(void*)f_3938},
{C_text("f_3942:csc_2escm"),(void*)f_3942},
{C_text("f_3946:csc_2escm"),(void*)f_3946},
{C_text("f_3950:csc_2escm"),(void*)f_3950},
{C_text("f_3963:csc_2escm"),(void*)f_3963},
{C_text("f_3967:csc_2escm"),(void*)f_3967},
{C_text("f_3972:csc_2escm"),(void*)f_3972},
{C_text("f_3975:csc_2escm"),(void*)f_3975},
{C_text("f_3983:csc_2escm"),(void*)f_3983},
{C_text("f_4018:csc_2escm"),(void*)f_4018},
{C_text("f_4022:csc_2escm"),(void*)f_4022},
{C_text("f_4027:csc_2escm"),(void*)f_4027},
{C_text("f_4032:csc_2escm"),(void*)f_4032},
{C_text("f_4039:csc_2escm"),(void*)f_4039},
{C_text("f_4069:csc_2escm"),(void*)f_4069},
{C_text("f_4083:csc_2escm"),(void*)f_4083},
{C_text("f_4087:csc_2escm"),(void*)f_4087},
{C_text("f_4103:csc_2escm"),(void*)f_4103},
{C_text("f_4122:csc_2escm"),(void*)f_4122},
{C_text("f_4141:csc_2escm"),(void*)f_4141},
{C_text("f_4145:csc_2escm"),(void*)f_4145},
{C_text("f_4149:csc_2escm"),(void*)f_4149},
{C_text("f_4152:csc_2escm"),(void*)f_4152},
{C_text("f_4165:csc_2escm"),(void*)f_4165},
{C_text("f_4170:csc_2escm"),(void*)f_4170},
{C_text("f_4195:csc_2escm"),(void*)f_4195},
{C_text("f_4215:csc_2escm"),(void*)f_4215},
{C_text("f_4223:csc_2escm"),(void*)f_4223},
{C_text("f_4227:csc_2escm"),(void*)f_4227},
{C_text("f_4231:csc_2escm"),(void*)f_4231},
{C_text("f_4247:csc_2escm"),(void*)f_4247},
{C_text("f_4254:csc_2escm"),(void*)f_4254},
{C_text("f_4264:csc_2escm"),(void*)f_4264},
{C_text("f_4276:csc_2escm"),(void*)f_4276},
{C_text("f_4280:csc_2escm"),(void*)f_4280},
{C_text("f_4283:csc_2escm"),(void*)f_4283},
{C_text("f_4286:csc_2escm"),(void*)f_4286},
{C_text("f_4289:csc_2escm"),(void*)f_4289},
{C_text("f_4292:csc_2escm"),(void*)f_4292},
{C_text("f_4298:csc_2escm"),(void*)f_4298},
{C_text("f_4304:csc_2escm"),(void*)f_4304},
{C_text("f_4316:csc_2escm"),(void*)f_4316},
{C_text("f_4326:csc_2escm"),(void*)f_4326},
{C_text("f_4330:csc_2escm"),(void*)f_4330},
{C_text("f_4336:csc_2escm"),(void*)f_4336},
{C_text("f_4348:csc_2escm"),(void*)f_4348},
{C_text("f_4355:csc_2escm"),(void*)f_4355},
{C_text("f_4388:csc_2escm"),(void*)f_4388},
{C_text("f_4393:csc_2escm"),(void*)f_4393},
{C_text("f_4395:csc_2escm"),(void*)f_4395},
{C_text("f_4421:csc_2escm"),(void*)f_4421},
{C_text("f_4426:csc_2escm"),(void*)f_4426},
{C_text("f_4430:csc_2escm"),(void*)f_4430},
{C_text("f_4434:csc_2escm"),(void*)f_4434},
{C_text("f_4451:csc_2escm"),(void*)f_4451},
{C_text("f_4467:csc_2escm"),(void*)f_4467},
{C_text("f_4478:csc_2escm"),(void*)f_4478},
{C_text("f_4482:csc_2escm"),(void*)f_4482},
{C_text("f_4485:csc_2escm"),(void*)f_4485},
{C_text("f_4488:csc_2escm"),(void*)f_4488},
{C_text("f_4491:csc_2escm"),(void*)f_4491},
{C_text("f_4497:csc_2escm"),(void*)f_4497},
{C_text("f_4503:csc_2escm"),(void*)f_4503},
{C_text("f_4506:csc_2escm"),(void*)f_4506},
{C_text("f_4518:csc_2escm"),(void*)f_4518},
{C_text("f_4521:csc_2escm"),(void*)f_4521},
{C_text("f_4524:csc_2escm"),(void*)f_4524},
{C_text("f_4527:csc_2escm"),(void*)f_4527},
{C_text("f_4530:csc_2escm"),(void*)f_4530},
{C_text("f_4533:csc_2escm"),(void*)f_4533},
{C_text("f_4540:csc_2escm"),(void*)f_4540},
{C_text("f_4546:csc_2escm"),(void*)f_4546},
{C_text("f_4549:csc_2escm"),(void*)f_4549},
{C_text("f_4552:csc_2escm"),(void*)f_4552},
{C_text("f_4555:csc_2escm"),(void*)f_4555},
{C_text("f_4558:csc_2escm"),(void*)f_4558},
{C_text("f_4561:csc_2escm"),(void*)f_4561},
{C_text("f_4568:csc_2escm"),(void*)f_4568},
{C_text("f_4572:csc_2escm"),(void*)f_4572},
{C_text("f_4590:csc_2escm"),(void*)f_4590},
{C_text("f_4594:csc_2escm"),(void*)f_4594},
{C_text("f_4600:csc_2escm"),(void*)f_4600},
{C_text("f_4607:csc_2escm"),(void*)f_4607},
{C_text("f_4624:csc_2escm"),(void*)f_4624},
{C_text("f_4634:csc_2escm"),(void*)f_4634},
{C_text("f_4638:csc_2escm"),(void*)f_4638},
{C_text("f_4647:csc_2escm"),(void*)f_4647},
{C_text("f_4650:csc_2escm"),(void*)f_4650},
{C_text("f_4657:csc_2escm"),(void*)f_4657},
{C_text("f_4690:csc_2escm"),(void*)f_4690},
{C_text("f_4693:csc_2escm"),(void*)f_4693},
{C_text("f_4696:csc_2escm"),(void*)f_4696},
{C_text("f_4699:csc_2escm"),(void*)f_4699},
{C_text("f_4709:csc_2escm"),(void*)f_4709},
{C_text("f_4716:csc_2escm"),(void*)f_4716},
{C_text("f_4723:csc_2escm"),(void*)f_4723},
{C_text("f_4727:csc_2escm"),(void*)f_4727},
{C_text("f_4734:csc_2escm"),(void*)f_4734},
{C_text("f_4737:csc_2escm"),(void*)f_4737},
{C_text("f_4749:csc_2escm"),(void*)f_4749},
{C_text("f_4761:csc_2escm"),(void*)f_4761},
{C_text("f_4768:csc_2escm"),(void*)f_4768},
{C_text("f_4777:csc_2escm"),(void*)f_4777},
{C_text("f_4784:csc_2escm"),(void*)f_4784},
{C_text("f_4790:csc_2escm"),(void*)f_4790},
{C_text("f_4793:csc_2escm"),(void*)f_4793},
{C_text("f_4796:csc_2escm"),(void*)f_4796},
{C_text("f_4799:csc_2escm"),(void*)f_4799},
{C_text("f_4856:csc_2escm"),(void*)f_4856},
{C_text("f_4868:csc_2escm"),(void*)f_4868},
{C_text("f_4880:csc_2escm"),(void*)f_4880},
{C_text("f_4892:csc_2escm"),(void*)f_4892},
{C_text("f_4915:csc_2escm"),(void*)f_4915},
{C_text("f_4918:csc_2escm"),(void*)f_4918},
{C_text("f_4930:csc_2escm"),(void*)f_4930},
{C_text("f_5020:csc_2escm"),(void*)f_5020},
{C_text("f_5023:csc_2escm"),(void*)f_5023},
{C_text("f_5027:csc_2escm"),(void*)f_5027},
{C_text("f_5035:csc_2escm"),(void*)f_5035},
{C_text("f_5052:csc_2escm"),(void*)f_5052},
{C_text("f_5072:csc_2escm"),(void*)f_5072},
{C_text("f_5075:csc_2escm"),(void*)f_5075},
{C_text("f_5141:csc_2escm"),(void*)f_5141},
{C_text("f_5145:csc_2escm"),(void*)f_5145},
{C_text("f_5161:csc_2escm"),(void*)f_5161},
{C_text("f_5172:csc_2escm"),(void*)f_5172},
{C_text("f_5188:csc_2escm"),(void*)f_5188},
{C_text("f_5209:csc_2escm"),(void*)f_5209},
{C_text("f_5219:csc_2escm"),(void*)f_5219},
{C_text("f_5229:csc_2escm"),(void*)f_5229},
{C_text("f_5239:csc_2escm"),(void*)f_5239},
{C_text("f_5249:csc_2escm"),(void*)f_5249},
{C_text("f_5259:csc_2escm"),(void*)f_5259},
{C_text("f_5269:csc_2escm"),(void*)f_5269},
{C_text("f_5279:csc_2escm"),(void*)f_5279},
{C_text("f_5289:csc_2escm"),(void*)f_5289},
{C_text("f_5299:csc_2escm"),(void*)f_5299},
{C_text("f_5308:csc_2escm"),(void*)f_5308},
{C_text("f_5311:csc_2escm"),(void*)f_5311},
{C_text("f_5323:csc_2escm"),(void*)f_5323},
{C_text("f_5350:csc_2escm"),(void*)f_5350},
{C_text("f_5374:csc_2escm"),(void*)f_5374},
{C_text("f_5391:csc_2escm"),(void*)f_5391},
{C_text("f_5408:csc_2escm"),(void*)f_5408},
{C_text("f_5425:csc_2escm"),(void*)f_5425},
{C_text("f_5442:csc_2escm"),(void*)f_5442},
{C_text("f_5446:csc_2escm"),(void*)f_5446},
{C_text("f_5463:csc_2escm"),(void*)f_5463},
{C_text("f_5467:csc_2escm"),(void*)f_5467},
{C_text("f_5475:csc_2escm"),(void*)f_5475},
{C_text("f_5489:csc_2escm"),(void*)f_5489},
{C_text("f_5502:csc_2escm"),(void*)f_5502},
{C_text("f_5506:csc_2escm"),(void*)f_5506},
{C_text("f_5514:csc_2escm"),(void*)f_5514},
{C_text("f_5527:csc_2escm"),(void*)f_5527},
{C_text("f_5541:csc_2escm"),(void*)f_5541},
{C_text("f_5545:csc_2escm"),(void*)f_5545},
{C_text("f_5553:csc_2escm"),(void*)f_5553},
{C_text("f_5557:csc_2escm"),(void*)f_5557},
{C_text("f_5582:csc_2escm"),(void*)f_5582},
{C_text("f_5585:csc_2escm"),(void*)f_5585},
{C_text("f_5602:csc_2escm"),(void*)f_5602},
{C_text("f_5605:csc_2escm"),(void*)f_5605},
{C_text("f_5623:csc_2escm"),(void*)f_5623},
{C_text("f_5630:csc_2escm"),(void*)f_5630},
{C_text("f_5633:csc_2escm"),(void*)f_5633},
{C_text("f_5636:csc_2escm"),(void*)f_5636},
{C_text("f_5643:csc_2escm"),(void*)f_5643},
{C_text("f_5673:csc_2escm"),(void*)f_5673},
{C_text("f_5676:csc_2escm"),(void*)f_5676},
{C_text("f_5690:csc_2escm"),(void*)f_5690},
{C_text("f_5709:csc_2escm"),(void*)f_5709},
{C_text("f_5713:csc_2escm"),(void*)f_5713},
{C_text("f_5736:csc_2escm"),(void*)f_5736},
{C_text("f_5740:csc_2escm"),(void*)f_5740},
{C_text("f_5767:csc_2escm"),(void*)f_5767},
{C_text("f_5781:csc_2escm"),(void*)f_5781},
{C_text("f_5791:csc_2escm"),(void*)f_5791},
{C_text("f_5795:csc_2escm"),(void*)f_5795},
{C_text("f_5818:csc_2escm"),(void*)f_5818},
{C_text("f_5835:csc_2escm"),(void*)f_5835},
{C_text("f_5837:csc_2escm"),(void*)f_5837},
{C_text("f_5862:csc_2escm"),(void*)f_5862},
{C_text("f_5889:csc_2escm"),(void*)f_5889},
{C_text("f_5893:csc_2escm"),(void*)f_5893},
{C_text("f_5910:csc_2escm"),(void*)f_5910},
{C_text("f_5922:csc_2escm"),(void*)f_5922},
{C_text("f_5927:csc_2escm"),(void*)f_5927},
{C_text("f_5933:csc_2escm"),(void*)f_5933},
{C_text("f_5944:csc_2escm"),(void*)f_5944},
{C_text("f_5958:csc_2escm"),(void*)f_5958},
{C_text("f_5972:csc_2escm"),(void*)f_5972},
{C_text("f_5985:csc_2escm"),(void*)f_5985},
{C_text("f_5990:csc_2escm"),(void*)f_5990},
{C_text("f_6009:csc_2escm"),(void*)f_6009},
{C_text("f_6021:csc_2escm"),(void*)f_6021},
{C_text("f_6025:csc_2escm"),(void*)f_6025},
{C_text("f_6033:csc_2escm"),(void*)f_6033},
{C_text("f_6042:csc_2escm"),(void*)f_6042},
{C_text("f_6048:csc_2escm"),(void*)f_6048},
{C_text("f_6078:csc_2escm"),(void*)f_6078},
{C_text("f_6285:csc_2escm"),(void*)f_6285},
{C_text("f_6288:csc_2escm"),(void*)f_6288},
{C_text("f_6291:csc_2escm"),(void*)f_6291},
{C_text("f_6294:csc_2escm"),(void*)f_6294},
{C_text("f_6298:csc_2escm"),(void*)f_6298},
{C_text("f_6302:csc_2escm"),(void*)f_6302},
{C_text("f_6321:csc_2escm"),(void*)f_6321},
{C_text("f_6325:csc_2escm"),(void*)f_6325},
{C_text("f_6329:csc_2escm"),(void*)f_6329},
{C_text("f_6333:csc_2escm"),(void*)f_6333},
{C_text("f_6337:csc_2escm"),(void*)f_6337},
{C_text("f_6341:csc_2escm"),(void*)f_6341},
{C_text("f_6352:csc_2escm"),(void*)f_6352},
{C_text("f_6358:csc_2escm"),(void*)f_6358},
{C_text("f_6360:csc_2escm"),(void*)f_6360},
{C_text("f_6385:csc_2escm"),(void*)f_6385},
{C_text("f_6396:csc_2escm"),(void*)f_6396},
{C_text("f_6413:csc_2escm"),(void*)f_6413},
{C_text("f_6427:csc_2escm"),(void*)f_6427},
{C_text("f_6456:csc_2escm"),(void*)f_6456},
{C_text("f_6481:csc_2escm"),(void*)f_6481},
{C_text("f_6485:csc_2escm"),(void*)f_6485},
{C_text("f_6488:csc_2escm"),(void*)f_6488},
{C_text("f_6491:csc_2escm"),(void*)f_6491},
{C_text("f_6503:csc_2escm"),(void*)f_6503},
{C_text("f_6515:csc_2escm"),(void*)f_6515},
{C_text("f_6519:csc_2escm"),(void*)f_6519},
{C_text("f_6523:csc_2escm"),(void*)f_6523},
{C_text("f_6527:csc_2escm"),(void*)f_6527},
{C_text("f_6538:csc_2escm"),(void*)f_6538},
{C_text("f_6567:csc_2escm"),(void*)f_6567},
{C_text("f_6570:csc_2escm"),(void*)f_6570},
{C_text("f_6571:csc_2escm"),(void*)f_6571},
{C_text("f_6575:csc_2escm"),(void*)f_6575},
{C_text("f_6578:csc_2escm"),(void*)f_6578},
{C_text("f_6590:csc_2escm"),(void*)f_6590},
{C_text("f_6598:csc_2escm"),(void*)f_6598},
{C_text("f_6602:csc_2escm"),(void*)f_6602},
{C_text("f_6608:csc_2escm"),(void*)f_6608},
{C_text("f_6612:csc_2escm"),(void*)f_6612},
{C_text("f_6621:csc_2escm"),(void*)f_6621},
{C_text("f_6629:csc_2escm"),(void*)f_6629},
{C_text("f_6639:csc_2escm"),(void*)f_6639},
{C_text("f_6652:csc_2escm"),(void*)f_6652},
{C_text("f_6662:csc_2escm"),(void*)f_6662},
{C_text("f_6677:csc_2escm"),(void*)f_6677},
{C_text("f_6679:csc_2escm"),(void*)f_6679},
{C_text("f_6689:csc_2escm"),(void*)f_6689},
{C_text("f_6703:csc_2escm"),(void*)f_6703},
{C_text("f_6706:csc_2escm"),(void*)f_6706},
{C_text("f_6709:csc_2escm"),(void*)f_6709},
{C_text("f_6721:csc_2escm"),(void*)f_6721},
{C_text("f_6728:csc_2escm"),(void*)f_6728},
{C_text("f_6730:csc_2escm"),(void*)f_6730},
{C_text("f_6740:csc_2escm"),(void*)f_6740},
{C_text("f_6753:csc_2escm"),(void*)f_6753},
{C_text("f_6764:csc_2escm"),(void*)f_6764},
{C_text("f_6770:csc_2escm"),(void*)f_6770},
{C_text("f_6772:csc_2escm"),(void*)f_6772},
{C_text("f_6797:csc_2escm"),(void*)f_6797},
{C_text("f_6811:csc_2escm"),(void*)f_6811},
{C_text("f_6820:csc_2escm"),(void*)f_6820},
{C_text("f_6823:csc_2escm"),(void*)f_6823},
{C_text("f_6826:csc_2escm"),(void*)f_6826},
{C_text("f_6829:csc_2escm"),(void*)f_6829},
{C_text("f_6835:csc_2escm"),(void*)f_6835},
{C_text("f_6843:csc_2escm"),(void*)f_6843},
{C_text("f_6853:csc_2escm"),(void*)f_6853},
{C_text("f_6870:csc_2escm"),(void*)f_6870},
{C_text("f_6880:csc_2escm"),(void*)f_6880},
{C_text("f_6884:csc_2escm"),(void*)f_6884},
{C_text("f_6888:csc_2escm"),(void*)f_6888},
{C_text("f_6892:csc_2escm"),(void*)f_6892},
{C_text("f_6896:csc_2escm"),(void*)f_6896},
{C_text("f_6899:csc_2escm"),(void*)f_6899},
{C_text("f_6909:csc_2escm"),(void*)f_6909},
{C_text("f_6916:csc_2escm"),(void*)f_6916},
{C_text("f_6921:csc_2escm"),(void*)f_6921},
{C_text("f_6925:csc_2escm"),(void*)f_6925},
{C_text("f_6933:csc_2escm"),(void*)f_6933},
{C_text("f_6941:csc_2escm"),(void*)f_6941},
{C_text("f_6945:csc_2escm"),(void*)f_6945},
{C_text("f_6949:csc_2escm"),(void*)f_6949},
{C_text("f_6954:csc_2escm"),(void*)f_6954},
{C_text("f_6956:csc_2escm"),(void*)f_6956},
{C_text("f_6981:csc_2escm"),(void*)f_6981},
{C_text("f_6997:csc_2escm"),(void*)f_6997},
{C_text("f_7000:csc_2escm"),(void*)f_7000},
{C_text("f_7007:csc_2escm"),(void*)f_7007},
{C_text("f_7021:csc_2escm"),(void*)f_7021},
{C_text("f_7036:csc_2escm"),(void*)f_7036},
{C_text("f_7044:csc_2escm"),(void*)f_7044},
{C_text("f_7054:csc_2escm"),(void*)f_7054},
{C_text("f_7069:csc_2escm"),(void*)f_7069},
{C_text("f_7078:csc_2escm"),(void*)f_7078},
{C_text("f_7103:csc_2escm"),(void*)f_7103},
{C_text("f_7115:csc_2escm"),(void*)f_7115},
{C_text("f_7129:csc_2escm"),(void*)f_7129},
{C_text("f_7135:csc_2escm"),(void*)f_7135},
{C_text("f_7138:csc_2escm"),(void*)f_7138},
{C_text("f_7141:csc_2escm"),(void*)f_7141},
{C_text("f_7148:csc_2escm"),(void*)f_7148},
{C_text("f_7152:csc_2escm"),(void*)f_7152},
{C_text("f_7161:csc_2escm"),(void*)f_7161},
{C_text("f_7240:csc_2escm"),(void*)f_7240},
{C_text("f_7251:csc_2escm"),(void*)f_7251},
{C_text("f_7257:csc_2escm"),(void*)f_7257},
{C_text("f_7259:csc_2escm"),(void*)f_7259},
{C_text("f_7284:csc_2escm"),(void*)f_7284},
{C_text("f_7293:csc_2escm"),(void*)f_7293},
{C_text("f_7301:csc_2escm"),(void*)f_7301},
{C_text("f_7328:csc_2escm"),(void*)f_7328},
{C_text("f_7338:csc_2escm"),(void*)f_7338},
{C_text("f_7342:csc_2escm"),(void*)f_7342},
{C_text("f_7346:csc_2escm"),(void*)f_7346},
{C_text("f_7348:csc_2escm"),(void*)f_7348},
{C_text("f_7371:csc_2escm"),(void*)f_7371},
{C_text("f_7391:csc_2escm"),(void*)f_7391},
{C_text("f_7400:csc_2escm"),(void*)f_7400},
{C_text("f_7417:csc_2escm"),(void*)f_7417},
{C_text("f_7425:csc_2escm"),(void*)f_7425},
{C_text("f_7432:csc_2escm"),(void*)f_7432},
{C_text("f_7438:csc_2escm"),(void*)f_7438},
{C_text("f_7443:csc_2escm"),(void*)f_7443},
{C_text("f_7455:csc_2escm"),(void*)f_7455},
{C_text("f_7466:csc_2escm"),(void*)f_7466},
{C_text("f_7469:csc_2escm"),(void*)f_7469},
{C_text("f_7472:csc_2escm"),(void*)f_7472},
{C_text("f_7475:csc_2escm"),(void*)f_7475},
{C_text("f_7492:csc_2escm"),(void*)f_7492},
{C_text("f_7495:csc_2escm"),(void*)f_7495},
{C_text("f_7498:csc_2escm"),(void*)f_7498},
{C_text("f_7501:csc_2escm"),(void*)f_7501},
{C_text("f_7517:csc_2escm"),(void*)f_7517},
{C_text("f_7521:csc_2escm"),(void*)f_7521},
{C_text("f_7529:csc_2escm"),(void*)f_7529},
{C_text("f_7537:csc_2escm"),(void*)f_7537},
{C_text("f_7550:csc_2escm"),(void*)f_7550},
{C_text("f_7554:csc_2escm"),(void*)f_7554},
{C_text("f_7573:csc_2escm"),(void*)f_7573},
{C_text("f_7579:csc_2escm"),(void*)f_7579},
{C_text("f_7582:csc_2escm"),(void*)f_7582},
{C_text("f_7585:csc_2escm"),(void*)f_7585},
{C_text("f_7588:csc_2escm"),(void*)f_7588},
{C_text("f_7591:csc_2escm"),(void*)f_7591},
{C_text("f_7595:csc_2escm"),(void*)f_7595},
{C_text("f_7599:csc_2escm"),(void*)f_7599},
{C_text("f_7603:csc_2escm"),(void*)f_7603},
{C_text("f_7609:csc_2escm"),(void*)f_7609},
{C_text("f_7614:csc_2escm"),(void*)f_7614},
{C_text("f_7622:csc_2escm"),(void*)f_7622},
{C_text("f_7640:csc_2escm"),(void*)f_7640},
{C_text("f_7646:csc_2escm"),(void*)f_7646},
{C_text("f_7650:csc_2escm"),(void*)f_7650},
{C_text("f_7654:csc_2escm"),(void*)f_7654},
{C_text("f_7658:csc_2escm"),(void*)f_7658},
{C_text("f_7665:csc_2escm"),(void*)f_7665},
{C_text("f_7669:csc_2escm"),(void*)f_7669},
{C_text("f_7672:csc_2escm"),(void*)f_7672},
{C_text("f_7688:csc_2escm"),(void*)f_7688},
{C_text("f_7691:csc_2escm"),(void*)f_7691},
{C_text("f_7699:csc_2escm"),(void*)f_7699},
{C_text("f_7724:csc_2escm"),(void*)f_7724},
{C_text("f_7733:csc_2escm"),(void*)f_7733},
{C_text("f_7758:csc_2escm"),(void*)f_7758},
{C_text("f_7775:csc_2escm"),(void*)f_7775},
{C_text("f_7795:csc_2escm"),(void*)f_7795},
{C_text("f_7799:csc_2escm"),(void*)f_7799},
{C_text("f_7824:csc_2escm"),(void*)f_7824},
{C_text("f_7842:csc_2escm"),(void*)f_7842},
{C_text("f_7846:csc_2escm"),(void*)f_7846},
{C_text("f_7853:csc_2escm"),(void*)f_7853},
{C_text("f_7857:csc_2escm"),(void*)f_7857},
{C_text("f_7861:csc_2escm"),(void*)f_7861},
{C_text("f_7865:csc_2escm"),(void*)f_7865},
{C_text("f_7876:csc_2escm"),(void*)f_7876},
{C_text("f_7879:csc_2escm"),(void*)f_7879},
{C_text("f_7886:csc_2escm"),(void*)f_7886},
{C_text("f_7891:csc_2escm"),(void*)f_7891},
{C_text("f_7896:csc_2escm"),(void*)f_7896},
{C_text("f_7900:csc_2escm"),(void*)f_7900},
{C_text("f_7904:csc_2escm"),(void*)f_7904},
{C_text("f_7911:csc_2escm"),(void*)f_7911},
{C_text("f_7913:csc_2escm"),(void*)f_7913},
{C_text("toplevel:csc_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#TARGET_CC 
o|hiding unexported module binding: main#windows 
o|hiding unexported module binding: main#mingw 
o|hiding unexported module binding: main#osx 
o|hiding unexported module binding: main#cygwin 
o|hiding unexported module binding: main#aix 
o|hiding unexported module binding: main#solaris 
o|hiding unexported module binding: main#elf 
o|hiding unexported module binding: main#stop 
o|hiding unexported module binding: main#arguments 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#host-mode 
o|hiding unexported module binding: main#back-slash->forward-slash 
o|hiding unexported module binding: main#quotewrap 
o|hiding unexported module binding: main#quotewrap-no-slash-trans 
o|hiding unexported module binding: main#home 
o|hiding unexported module binding: main#translator 
o|hiding unexported module binding: main#compiler 
o|hiding unexported module binding: main#c++-compiler 
o|hiding unexported module binding: main#rc-compiler 
o|hiding unexported module binding: main#linker 
o|hiding unexported module binding: main#c++-linker 
o|hiding unexported module binding: main#object-extension 
o|hiding unexported module binding: main#library-extension 
o|hiding unexported module binding: main#link-output-flag 
o|hiding unexported module binding: main#executable-extension 
o|hiding unexported module binding: main#compile-output-flag 
o|hiding unexported module binding: main#shared-library-extension 
o|hiding unexported module binding: main#static-object-extension 
o|hiding unexported module binding: main#static-library-extension 
o|hiding unexported module binding: main#default-translation-optimization-options 
o|hiding unexported module binding: main#pic-options 
o|hiding unexported module binding: main#generate-manifest 
o|hiding unexported module binding: main#libchicken 
o|hiding unexported module binding: main#dynamic-libchicken 
o|hiding unexported module binding: main#default-library 
o|hiding unexported module binding: main#default-compilation-optimization-options 
o|hiding unexported module binding: main#best-compilation-optimization-options 
o|hiding unexported module binding: main#default-linking-optimization-options 
o|hiding unexported module binding: main#best-linking-optimization-options 
o|hiding unexported module binding: main#extra-features 
o|hiding unexported module binding: main#constant824 
o|hiding unexported module binding: main#constant827 
o|hiding unexported module binding: main#constant831 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#scheme-files 
o|hiding unexported module binding: main#c-files 
o|hiding unexported module binding: main#rc-files 
o|hiding unexported module binding: main#generated-c-files 
o|hiding unexported module binding: main#generated-rc-files 
o|hiding unexported module binding: main#object-files 
o|hiding unexported module binding: main#generated-object-files 
o|hiding unexported module binding: main#transient-link-files 
o|hiding unexported module binding: main#linked-extensions 
o|hiding unexported module binding: main#cpp-mode 
o|hiding unexported module binding: main#objc-mode 
o|hiding unexported module binding: main#embedded 
o|hiding unexported module binding: main#inquiry-only 
o|hiding unexported module binding: main#show-cflags 
o|hiding unexported module binding: main#show-ldflags 
o|hiding unexported module binding: main#show-libs 
o|hiding unexported module binding: main#dry-run 
o|hiding unexported module binding: main#gui 
o|hiding unexported module binding: main#deployed 
o|hiding unexported module binding: main#rpath 
o|hiding unexported module binding: main#ignore-repository 
o|hiding unexported module binding: main#show-debugging-help 
o|hiding unexported module binding: main#library-dir 
o|hiding unexported module binding: main#extra-libraries 
o|hiding unexported module binding: main#extra-shared-libraries 
o|hiding unexported module binding: main#default-library-files 
o|hiding unexported module binding: main#library-files 
o|hiding unexported module binding: main#shared-library-files 
o|hiding unexported module binding: main#translate-options 
o|hiding unexported module binding: main#include-dir 
o|hiding unexported module binding: main#compile-options 
o|hiding unexported module binding: main#builtin-compile-options 
o|hiding unexported module binding: main#compile-only-flag 
o|hiding unexported module binding: main#translation-optimization-options 
o|hiding unexported module binding: main#compilation-optimization-options 
o|hiding unexported module binding: main#linking-optimization-options 
o|hiding unexported module binding: main#link-options 
o|hiding unexported module binding: main#rpath-option 
o|hiding unexported module binding: main#builtin-link-options 
o|hiding unexported module binding: main#target-filename 
o|hiding unexported module binding: main#verbose 
o|hiding unexported module binding: main#keep-files 
o|hiding unexported module binding: main#translate-only 
o|hiding unexported module binding: main#compile-only 
o|hiding unexported module binding: main#to-stdout 
o|hiding unexported module binding: main#shared 
o|hiding unexported module binding: main#static 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#find-object-file 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#run-translation 
o|hiding unexported module binding: main#run-compilation 
o|hiding unexported module binding: main#compiler-options 
o|hiding unexported module binding: main#run-linking 
o|hiding unexported module binding: main#collect-linked-objects 
o|hiding unexported module binding: main#copy-files 
o|hiding unexported module binding: main#linker-options 
o|hiding unexported module binding: main#linker-libraries 
o|hiding unexported module binding: main#constant1687 
o|hiding unexported module binding: main#cleanup 
o|hiding unexported module binding: main#string-any 
o|hiding unexported module binding: main#quote-option 
o|hiding unexported module binding: main#last-exit-code 
o|hiding unexported module binding: main#$system 
o|hiding unexported module binding: main#command 
o|hiding unexported module binding: main#$delete-file 
o|hiding unexported module binding: main#rez 
o|hiding unexported module binding: main#create-win-manifest 
S|applied compiler syntax:
S|  chicken.format#printf		1
S|  scheme#for-each		6
S|  chicken.format#sprintf		4
S|  chicken.format#fprintf		2
S|  chicken.base#foldl		3
S|  scheme#map		13
S|  chicken.base#foldr		3
o|eliminated procedure checks: 152 
o|specializations:
o|  1 (scheme#zero? *)
o|  2 (scheme#zero? integer)
o|  1 (scheme#= integer integer)
o|  1 (##sys#debug-mode?)
o|  2 (scheme#= fixnum fixnum)
o|  5 (scheme#string-append string string)
o|  5 (scheme#char=? char char)
o|  7 (scheme#string-ref string fixnum)
o|  4 (scheme#string=? string string)
o|  4 (scheme#> fixnum fixnum)
o|  4 (scheme#string-length string)
o|  1 (scheme#memv (or symbol keyword procedure eof null fixnum char boolean) list)
o|  71 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#> integer integer)
o|  2 (scheme#+ fixnum fixnum)
o|  7 (##sys#check-output-port * * *)
o|  2 (chicken.base#current-error-port)
o|  5 (scheme#memq * list)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  8 (scheme#car pair)
o|  2 (scheme#number->string fixnum)
(o e)|safe calls: 820 
(o e)|assignments to immediate values: 25 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-platform 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#target-librarian 
o|removed side-effect free assignment to unused variable: main#target-librarian-options 
o|removed side-effect free assignment to unused variable: main#host-prefix 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#+egg-info-extension+ 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#cache-directory 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k2916 
o|inlining procedure: k2916 
o|inlining procedure: k2947 
o|inlining procedure: k2947 
o|merged explicitly consed rest parameter: xs422 
o|inlining procedure: k2977 
o|inlining procedure: k2977 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k3164 
o|inlining procedure: k3164 
o|inlining procedure: k3156 
o|inlining procedure: k3156 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k3555 
o|inlining procedure: k3555 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#TARGET_CC 
o|removed side-effect free assignment to unused variable: main#windows 
o|substituted constant variable: a3843 
o|substituted constant variable: a3849 
o|merged explicitly consed rest parameter: args773 
o|propagated global variable: out774777 ##sys#standard-error 
o|substituted constant variable: a3854 
o|substituted constant variable: a3855 
o|contracted procedure: "(csc.scm:90) main#back-slash->forward-slash" 
o|inlining procedure: k3893 
o|inlining procedure: k3893 
o|inlining procedure: k3981 
o|inlining procedure: k3981 
o|removed side-effect free assignment to unused variable: main#dynamic-libchicken 
o|substituted constant variable: main#default-translation-optimization-options 
o|inlining procedure: k4266 
o|inlining procedure: k4266 
o|contracted procedure: "(csc.scm:300) main#destination-repository" 
o|inlining procedure: k2495 
o|inlining procedure: k2495 
o|inlining procedure: k4293 
o|inlining procedure: k4293 
o|inlining procedure: k4305 
o|inlining procedure: k4305 
o|inlining procedure: k4317 
o|inlining procedure: k4317 
o|inlining procedure: k4337 
o|inlining procedure: k4337 
o|inlining procedure: k6774 
o|inlining procedure: k6774 
o|removed side-effect free assignment to unused variable: main#copy-files 
o|inlining procedure: k7261 
o|inlining procedure: k7261 
o|inlining procedure: k7307 
o|inlining procedure: k7307 
o|contracted procedure: "(csc.scm:1050) main#library-files" 
o|contracted procedure: "(csc.scm:234) main#default-library" 
o|contracted procedure: "(csc.scm:1051) main#shared-library-files" 
o|contracted procedure: "(csc.scm:235) main#default-library-files" 
o|inlining procedure: k4085 
o|inlining procedure: k4085 
o|substituted constant variable: a7406 
o|inlining procedure: k7407 
o|inlining procedure: k7407 
o|inlining procedure: k7427 
o|inlining procedure: k7427 
o|contracted procedure: "(csc.scm:1091) main#cleanup" 
o|inlining procedure: k7329 
o|inlining procedure: k7329 
o|inlining procedure: k7350 
o|inlining procedure: k7350 
o|consed rest parameter at call site: "(csc.scm:1068) main#cons*" 2 
o|inlining procedure: k7448 
o|inlining procedure: k7448 
o|inlining procedure: k7539 
o|inlining procedure: k7539 
o|contracted procedure: "(csc.scm:1113) main#$system" 
o|inlining procedure: k7477 
o|inlining procedure: k7477 
o|propagated global variable: out17471750 ##sys#standard-output 
o|substituted constant variable: a7488 
o|substituted constant variable: a7489 
o|propagated global variable: out17471750 ##sys#standard-output 
o|inlining procedure: k7518 
o|inlining procedure: k7518 
o|inlining procedure: k7555 
o|inlining procedure: k7555 
o|contracted procedure: "(csc.scm:1153) main#run" 
o|merged explicitly consed rest parameter: os1032 
o|merged explicitly consed rest parameter: n1035 
o|inlining procedure: k4397 
o|inlining procedure: k4397 
o|consed rest parameter at call site: "(csc.scm:541) main#stop" 2 
o|inlining procedure: k4411 
o|inlining procedure: k4411 
o|inlining procedure: k4437 
o|inlining procedure: k4437 
o|consed rest parameter at call site: "(csc.scm:544) main#cons*" 2 
o|inlining procedure: k4457 
o|propagated global variable: r44588004 main#shared-library-extension 
o|inlining procedure: k4457 
o|inlining procedure: k4469 
o|inlining procedure: k4498 
o|inlining procedure: k4498 
o|contracted procedure: "(csc.scm:615) main#run-linking" 
o|inlining procedure: k6830 
o|inlining procedure: k6830 
o|inlining procedure: k6845 
o|inlining procedure: k6845 
o|inlining procedure: k6871 
o|contracted procedure: "(csc.scm:1004) main#rez" 
o|substituted constant variable: a7575 
o|substituted constant variable: a7576 
o|inlining procedure: k6871 
o|inlining procedure: k6897 
o|inlining procedure: k6897 
o|inlining procedure: k6907 
o|propagated global variable: r69088021 main#host-libdir 
o|inlining procedure: k6907 
o|substituted constant variable: a6917 
o|consed rest parameter at call site: "(csc.scm:982) main#cons*" 2 
o|substituted constant variable: main#link-output-flag 
o|substituted constant variable: main#link-output-flag 
o|inlining procedure: k6958 
o|inlining procedure: k6958 
o|propagated global variable: g15151519 main#object-files 
o|contracted procedure: "(csc.scm:976) main#collect-linked-objects" 
o|inlining procedure: k7117 
o|contracted procedure: "(csc.scm:1023) main#delete-duplicates" 
o|inlining procedure: k3108 
o|inlining procedure: k3108 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k3033 
o|inlining procedure: k3033 
o|inlining procedure: k7117 
o|contracted procedure: "(csc.scm:1027) locate-objects1559" 
o|inlining procedure: k7046 
o|contracted procedure: "(csc.scm:1017) g15721581" 
o|inlining procedure: k7022 
o|inlining procedure: k7022 
o|consed rest parameter at call site: "(csc.scm:1019) main#stop" 2 
o|inlining procedure: k7046 
o|inlining procedure: k7080 
o|inlining procedure: k7080 
o|contracted procedure: "(csc.scm:1025) locate-link-file1558" 
o|propagated global variable: tmp16271629 main#static 
o|propagated global variable: tmp16271629 main#static 
o|propagated global variable: ofiles1556 main#object-files 
o|propagated global variable: ofiles1556 main#object-files 
o|propagated global variable: out10721075 ##sys#standard-error 
o|substituted constant variable: a4514 
o|substituted constant variable: a4515 
o|substituted constant variable: a4542 
o|substituted constant variable: a4543 
o|inlining procedure: k4581 
o|inlining procedure: k4581 
o|propagated global variable: out10721075 ##sys#standard-error 
o|contracted procedure: "(csc.scm:604) main#filter-map" 
o|propagated global variable: lst486 main#linked-extensions 
o|inlining procedure: k3211 
o|inlining procedure: k3211 
o|inlining procedure: k3200 
o|inlining procedure: k3200 
o|contracted procedure: "(csc.scm:600) main#run-compilation" 
o|substituted constant variable: main#compile-only-flag 
o|inlining procedure: k6528 
o|inlining procedure: k6528 
o|substituted constant variable: main#compile-output-flag 
o|substituted constant variable: main#compile-output-flag 
o|consed rest parameter at call site: "(csc.scm:929) main#stop" 2 
o|inlining procedure: k6551 
o|substituted constant variable: a6557 
o|inlining procedure: k6551 
o|inlining procedure: k6613 
o|inlining procedure: k6613 
o|inlining procedure: k6631 
o|inlining procedure: k6631 
o|propagated global variable: g14591461 main#generated-rc-files 
o|inlining procedure: k6654 
o|inlining procedure: k6654 
o|propagated global variable: g14421444 main#generated-c-files 
o|inlining procedure: k6681 
o|inlining procedure: k6681 
o|propagated global variable: g13991423 main#rc-files 
o|contracted procedure: "(csc.scm:947) main#create-win-manifest" 
o|inlining procedure: k6732 
o|inlining procedure: k6732 
o|propagated global variable: g13891401 main#c-files 
o|inlining procedure: k4601 
o|inlining procedure: k4601 
o|contracted procedure: "(csc.scm:591) main#last" 
o|inlining procedure: k3313 
o|inlining procedure: k3313 
o|consed rest parameter at call site: "(csc.scm:587) main#stop" 2 
o|inlining procedure: k4622 
o|consed rest parameter at call site: "(csc.scm:587) main#stop" 2 
o|consed rest parameter at call site: "(csc.scm:586) main#cons*" 2 
o|inlining procedure: k4622 
o|consed rest parameter at call site: "(csc.scm:587) main#stop" 2 
o|contracted procedure: "(csc.scm:598) main#run-translation" 
o|inlining procedure: k6458 
o|contracted procedure: "(csc.scm:870) g13201327" 
o|consed rest parameter at call site: "(csc.scm:885) main#cons*" 2 
o|inlining procedure: k6362 
o|inlining procedure: k6362 
o|inlining procedure: k6398 
o|inlining procedure: k6398 
o|consed rest parameter at call site: "(csc.scm:881) main#stop" 2 
o|inlining procedure: k6435 
o|inlining procedure: k6435 
o|substituted constant variable: a6444 
o|inlining procedure: k6458 
o|propagated global variable: g13261328 main#scheme-files 
o|contracted procedure: "(csc.scm:597) main#first" 
o|propagated global variable: x444 main#scheme-files 
o|consed rest parameter at call site: "(csc.scm:579) main#stop" 2 
o|substituted constant variable: a4687 
o|contracted procedure: "(csc.scm:567) main#builtin-link-options" 
o|inlining procedure: k4150 
o|contracted procedure: "(csc.scm:280) g954955" 
o|inlining procedure: k4172 
o|contracted procedure: "(csc.scm:282) g965974" 
o|inlining procedure: k4172 
o|inlining procedure: k4150 
o|substituted constant variable: a4216 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|inlining procedure: k4238 
o|inlining procedure: k4238 
o|inlining procedure: k4469 
o|contracted procedure: "(csc.scm:622) main#usage" 
o|inlining procedure: k4753 
o|inlining procedure: k4753 
o|substituted constant variable: a4786 
o|substituted constant variable: a4787 
o|inlining procedure: k4800 
o|inlining procedure: k4800 
o|inlining procedure: k4821 
o|inlining procedure: k4821 
o|inlining procedure: k4840 
o|inlining procedure: k4840 
o|inlining procedure: k4860 
o|inlining procedure: k4860 
o|inlining procedure: k4884 
o|inlining procedure: k4884 
o|inlining procedure: k4904 
o|consed rest parameter at call site: "(csc.scm:655) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:653) main#cons*" 2 
o|inlining procedure: k4904 
o|consed rest parameter at call site: "(csc.scm:661) t-options1027" 1 
o|inlining procedure: k4951 
o|consed rest parameter at call site: "(csc.scm:664) t-options1027" 1 
o|inlining procedure: k4951 
o|consed rest parameter at call site: "(csc.scm:667) t-options1027" 1 
o|inlining procedure: k4977 
o|inlining procedure: k4977 
o|inlining procedure: k4991 
o|inlining procedure: k4991 
o|inlining procedure: k5012 
o|consed rest parameter at call site: "(csc.scm:676) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:675) check1028" 3 
o|inlining procedure: k5012 
o|consed rest parameter at call site: "(csc.scm:681) check1028" 3 
o|inlining procedure: k5061 
o|consed rest parameter at call site: "(csc.scm:686) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:685) check1028" 3 
o|inlining procedure: k5061 
o|contracted procedure: "(csc.scm:689) use-private-repository1030" 
o|inlining procedure: k5093 
o|consed rest parameter at call site: "(csc.scm:692) t-options1027" 1 
o|inlining procedure: k5093 
o|consed rest parameter at call site: "(csc.scm:695) t-options1027" 1 
o|inlining procedure: k5113 
o|inlining procedure: k5113 
o|inlining procedure: k5131 
o|consed rest parameter at call site: "(csc.scm:708) main#cons*" 2 
o|inlining procedure: k5131 
o|inlining procedure: k5146 
o|inlining procedure: k5146 
o|consed rest parameter at call site: "(csc.scm:715) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:713) check1028" 3 
o|inlining procedure: k5177 
o|consed rest parameter at call site: "(csc.scm:718) check1028" 3 
o|inlining procedure: k5177 
o|consed rest parameter at call site: "(csc.scm:722) main#cons*" 2 
o|inlining procedure: k5210 
o|consed rest parameter at call site: "(csc.scm:723) main#cons*" 2 
o|inlining procedure: k5210 
o|consed rest parameter at call site: "(csc.scm:724) main#cons*" 2 
o|inlining procedure: k5230 
o|consed rest parameter at call site: "(csc.scm:725) main#cons*" 2 
o|inlining procedure: k5230 
o|consed rest parameter at call site: "(csc.scm:726) main#cons*" 2 
o|inlining procedure: k5250 
o|consed rest parameter at call site: "(csc.scm:728) main#cons*" 2 
o|inlining procedure: k5250 
o|consed rest parameter at call site: "(csc.scm:729) main#cons*" 2 
o|inlining procedure: k5270 
o|consed rest parameter at call site: "(csc.scm:730) main#cons*" 2 
o|inlining procedure: k5270 
o|consed rest parameter at call site: "(csc.scm:731) main#cons*" 2 
o|inlining procedure: k5290 
o|consed rest parameter at call site: "(csc.scm:732) main#cons*" 2 
o|inlining procedure: k5290 
o|substituted constant variable: a5319 
o|consed rest parameter at call site: "(csc.scm:735) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:734) check1028" 3 
o|inlining procedure: k5334 
o|inlining procedure: k5334 
o|inlining procedure: k5354 
o|inlining procedure: k5354 
o|consed rest parameter at call site: "(csc.scm:748) check1028" 3 
o|inlining procedure: k5383 
o|consed rest parameter at call site: "(csc.scm:752) check1028" 3 
o|inlining procedure: k5383 
o|consed rest parameter at call site: "(csc.scm:756) check1028" 3 
o|inlining procedure: k5417 
o|consed rest parameter at call site: "(csc.scm:760) check1028" 3 
o|inlining procedure: k5417 
o|consed rest parameter at call site: "(csc.scm:765) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:764) check1028" 3 
o|inlining procedure: k5455 
o|consed rest parameter at call site: "(csc.scm:767) check1028" 3 
o|inlining procedure: k5455 
o|inlining procedure: k5494 
o|consed rest parameter at call site: "(csc.scm:773) check1028" 3 
o|inlining procedure: k5494 
o|substituted constant variable: a5558 
o|inlining procedure: k5559 
o|inlining procedure: k5559 
o|consed rest parameter at call site: "(csc.scm:777) check1028" 3 
o|inlining procedure: k5568 
o|inlining procedure: k5568 
o|consed rest parameter at call site: "(csc.scm:787) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:786) check1028" 3 
o|inlining procedure: k5594 
o|consed rest parameter at call site: "(csc.scm:791) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:790) check1028" 3 
o|inlining procedure: k5594 
o|inlining procedure: k5624 
o|inlining procedure: k5624 
o|inlining procedure: k5640 
o|inlining procedure: k5640 
o|consed rest parameter at call site: "(csc.scm:805) t-options1027" 1 
o|inlining procedure: k5665 
o|consed rest parameter at call site: "(csc.scm:808) t-options1027" 1 
o|consed rest parameter at call site: "(csc.scm:807) check1028" 3 
o|inlining procedure: k5665 
o|consed rest parameter at call site: "(csc.scm:811) t-options1027" 1 
o|inlining procedure: k5694 
o|substituted constant variable: a5706 
o|substituted constant variable: a5703 
o|substituted constant variable: a5726 
o|substituted constant variable: a5733 
o|substituted constant variable: a5730 
o|inlining procedure: k5727 
o|substituted constant variable: a5753 
o|inlining procedure: k5727 
o|substituted constant variable: a5760 
o|substituted constant variable: a5757 
o|consed rest parameter at call site: "(csc.scm:823) t-options1027" 1 
o|substituted constant variable: a5774 
o|substituted constant variable: a5771 
o|inlining procedure: k5768 
o|inlining procedure: k5768 
o|inlining procedure: k5800 
o|inlining procedure: k5839 
o|contracted procedure: "(csc.scm:833) g12651274" 
o|substituted constant variable: a5828 
o|inlining procedure: k5839 
o|inlining procedure: k5870 
o|consed rest parameter at call site: "(csc.scm:837) main#stop" 2 
o|inlining procedure: k5870 
o|consed rest parameter at call site: "(csc.scm:838) main#stop" 2 
o|contracted procedure: "(csc.scm:831) main#lset-difference/eq?" 
o|inlining procedure: k3413 
o|contracted procedure: "(mini-srfi-1.scm:164) g586587" 
o|inlining procedure: k3413 
o|inlining procedure: k5800 
o|consed rest parameter at call site: "(csc.scm:839) main#stop" 2 
o|substituted constant variable: a5901 
o|substituted constant variable: a5906 
o|substituted constant variable: a5915 
o|inlining procedure: k5694 
o|inlining procedure: k5935 
o|inlining procedure: k5935 
o|inlining procedure: k5963 
o|inlining procedure: k5963 
o|inlining procedure: k5999 
o|inlining procedure: k5999 
o|inlining procedure: k6043 
o|inlining procedure: k6043 
o|consed rest parameter at call site: "(csc.scm:863) main#stop" 2 
o|substituted constant variable: a6057 
o|substituted constant variable: a6064 
o|substituted constant variable: a6061 
o|substituted constant variable: a6069 
o|substituted constant variable: a6074 
o|substituted constant variable: a6083 
o|substituted constant variable: main#constant827 
o|substituted constant variable: main#constant824 
o|substituted constant variable: main#constant831 
o|substituted constant variable: a6086 
o|substituted constant variable: a6095 
o|substituted constant variable: a6097 
o|substituted constant variable: a6099 
o|substituted constant variable: a6101 
o|substituted constant variable: a6103 
o|substituted constant variable: a6105 
o|substituted constant variable: a6107 
o|substituted constant variable: a6109 
o|substituted constant variable: a6111 
o|substituted constant variable: a6113 
o|substituted constant variable: a6115 
o|substituted constant variable: a6117 
o|substituted constant variable: a6119 
o|substituted constant variable: a6124 
o|substituted constant variable: a6126 
o|inlining procedure: k6130 
o|inlining procedure: k6130 
o|substituted constant variable: a6137 
o|substituted constant variable: a6139 
o|substituted constant variable: a6141 
o|substituted constant variable: a6143 
o|substituted constant variable: a6145 
o|substituted constant variable: a6147 
o|substituted constant variable: a6149 
o|substituted constant variable: a6151 
o|substituted constant variable: a6153 
o|substituted constant variable: a6155 
o|substituted constant variable: a6157 
o|substituted constant variable: a6159 
o|substituted constant variable: a6161 
o|substituted constant variable: a6163 
o|substituted constant variable: a6168 
o|substituted constant variable: a6170 
o|substituted constant variable: a6175 
o|substituted constant variable: a6177 
o|substituted constant variable: a6179 
o|substituted constant variable: a6181 
o|substituted constant variable: a6183 
o|substituted constant variable: a6185 
o|substituted constant variable: a6187 
o|substituted constant variable: a6189 
o|substituted constant variable: a6191 
o|substituted constant variable: a6196 
o|substituted constant variable: a6198 
o|substituted constant variable: a6200 
o|substituted constant variable: a6202 
o|substituted constant variable: a6207 
o|substituted constant variable: a6209 
o|substituted constant variable: a6211 
o|substituted constant variable: a6213 
o|substituted constant variable: a6215 
o|substituted constant variable: a6220 
o|substituted constant variable: a6222 
o|substituted constant variable: a6227 
o|substituted constant variable: a6229 
o|substituted constant variable: a6234 
o|substituted constant variable: a6236 
o|substituted constant variable: a6241 
o|substituted constant variable: a6243 
o|substituted constant variable: a6245 
o|substituted constant variable: a6247 
o|substituted constant variable: a6249 
o|substituted constant variable: a6251 
o|substituted constant variable: a6253 
o|substituted constant variable: a6255 
o|substituted constant variable: a6257 
o|substituted constant variable: a6259 
o|substituted constant variable: a6261 
o|substituted constant variable: a6263 
o|substituted constant variable: a6265 
o|substituted constant variable: a6267 
o|substituted constant variable: a6272 
o|substituted constant variable: a6274 
o|inlining procedure: k7659 
o|inlining procedure: k7659 
o|inlining procedure: k7670 
o|contracted procedure: "(csc.scm:249) g874875" 
o|inlining procedure: k7701 
o|contracted procedure: "(csc.scm:251) g885894" 
o|inlining procedure: k7701 
o|inlining procedure: k7735 
o|inlining procedure: k7735 
o|inlining procedure: k7670 
o|inlining procedure: k7797 
o|inlining procedure: k7797 
o|inlining procedure: k7807 
o|propagated global variable: r78088211 main#host-cflags 
o|inlining procedure: k7807 
o|propagated global variable: r78088213 main#default-cflags 
o|inlining procedure: k7810 
o|inlining procedure: k7810 
o|propagated global variable: r78118216 main#cygwin 
o|inlining procedure: k7814 
o|propagated global variable: r78158217 main#host-cxx 
o|inlining procedure: k7814 
o|propagated global variable: r78158219 main#default-cxx 
o|inlining procedure: k7818 
o|propagated global variable: r78198221 main#host-cc 
o|inlining procedure: k7818 
o|propagated global variable: r78198223 main#default-cc 
o|inlining procedure: k7822 
o|inlining procedure: k7822 
o|inlining procedure: k7832 
o|propagated global variable: r78338229 main#host-cxx 
o|inlining procedure: k7832 
o|propagated global variable: r78338231 main#default-cxx 
o|inlining procedure: k7836 
o|propagated global variable: r78378233 main#host-cc 
o|inlining procedure: k7836 
o|propagated global variable: r78378235 main#default-cc 
o|inlining procedure: k7877 
o|inlining procedure: k7877 
o|simplifications: ((if . 2)) 
o|replaced variables: 1187 
o|removed binding forms: 462 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|propagated global variable: out774777 ##sys#standard-error 
o|removed side-effect free assignment to unused variable: main#link-output-flag 
o|removed side-effect free assignment to unused variable: main#compile-output-flag 
o|removed side-effect free assignment to unused variable: main#default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: main#constant824 
o|removed side-effect free assignment to unused variable: main#constant827 
o|removed side-effect free assignment to unused variable: main#constant831 
o|removed side-effect free assignment to unused variable: main#compile-only-flag 
o|substituted constant variable: mode207 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r73517978 
o|substituted constant variable: r74787984 
o|substituted constant variable: r74787987 
o|propagated global variable: out17471750 ##sys#standard-output 
o|substituted constant variable: r44127996 
o|substituted constant variable: r44127996 
o|inlining procedure: k4437 
o|substituted constant variable: r44388002 
o|substituted constant variable: r44388002 
o|inlining procedure: k4457 
o|propagated global variable: r44588261 main#object-extension 
o|propagated global variable: r44588261 main#object-extension 
o|propagated global variable: out10721075 ##sys#standard-error 
o|substituted constant variable: r45828039 
o|substituted constant variable: r45828039 
o|substituted constant variable: r45828041 
o|substituted constant variable: r45828041 
o|substituted constant variable: r32018046 
o|propagated global variable: lst486 main#linked-extensions 
o|substituted constant variable: r65298048 
o|substituted constant variable: r65528050 
o|substituted constant variable: r63998078 
o|substituted constant variable: r63998078 
o|inlining procedure: k6398 
o|substituted constant variable: r64368082 
o|substituted constant variable: r64368082 
o|inlining procedure: k6435 
o|substituted constant variable: r41518091 
o|substituted constant variable: r41518091 
o|substituted constant variable: r42308093 
o|substituted constant variable: r42308093 
o|inlining procedure: k4229 
o|propagated global variable: r42308325 main#host-libdir 
o|propagated global variable: r42308325 main#host-libdir 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|substituted constant variable: r55608157 
o|inlining procedure: k4735 
o|substituted constant variable: r55698159 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|inlining procedure: k4735 
o|contracted procedure: "(mini-srfi-1.scm:166) main#filter" 
o|substituted constant variable: r31577939 
o|inlining procedure: k4735 
o|substituted constant variable: r76608197 
o|substituted constant variable: r76608197 
o|substituted constant variable: r76718205 
o|substituted constant variable: r76718205 
o|removed call to pure procedure with unused result: "(csc.scm:66) scheme#eq?" 
o|replaced variables: 146 
o|removed binding forms: 1031 
o|removed conditional forms: 1 
o|contracted procedure: k3819 
o|inlining procedure: k3906 
o|contracted procedure: k2498 
o|inlining procedure: k7543 
o|propagated global variable: r75448642 main#last-exit-code 
o|inlining procedure: k7543 
o|propagated global variable: r75448644 main#last-exit-code 
o|inlining procedure: k7552 
o|contracted procedure: k4437 
o|contracted procedure: k4457 
o|propagated global variable: r4458 main#executable-extension 
o|inlining procedure: k7067 
o|inlining procedure: k6998 
o|inlining procedure: k4574 
o|propagated global variable: r45758675 main#quotewrap-no-slash-trans 
o|inlining procedure: k4574 
o|propagated global variable: r45758679 main#quotewrap 
o|contracted procedure: "(mini-srfi-1.scm:134) g496497" 
o|inlining procedure: k6545 
o|inlining procedure: k6545 
o|inlining procedure: k6464 
o|contracted procedure: k6398 
o|contracted procedure: k6435 
o|inlining procedure: k4672 
o|inlining procedure: k4672 
o|inlining procedure: k4694 
o|inlining procedure: k4206 
o|inlining procedure: k4206 
o|inlining procedure: k4735 
o|removed call to pure procedure with unused result: "(csc.scm:66) chicken.platform#software-type" 
o|replaced variables: 4 
o|removed binding forms: 275 
o|contracted procedure: k7867 
o|substituted constant variable: r2499 
o|substituted constant variable: r44388259 
o|substituted constant variable: r4438 
o|inlining procedure: "(csc.scm:610) main#quotewrap-no-slash-trans" 
o|propagated global variable: str7948759 main#target-filename 
o|substituted constant variable: r65468685 
o|substituted constant variable: r65468686 
o|substituted constant variable: r63998311 
o|substituted constant variable: r6399 
o|substituted constant variable: r64368313 
o|substituted constant variable: r6436 
o|substituted constant variable: r46738710 
o|substituted constant variable: r42078718 
o|simplifications: ((if . 1) (let . 2)) 
o|replaced variables: 8 
o|removed binding forms: 17 
o|removed conditional forms: 5 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|inlining procedure: k2492 
o|replaced variables: 4 
o|removed binding forms: 18 
o|substituted constant variable: r24938796 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 41) (let . 11) (##core#call . 393)) 
o|  call simplifications:
o|    scheme#assq
o|    ##sys#call-with-values
o|    scheme#string-ci=?
o|    ##sys#size	4
o|    chicken.fixnum#fx>	4
o|    scheme#string
o|    scheme#cadr
o|    scheme#number?
o|    ##sys#list
o|    scheme#member	10
o|    scheme#cdr	20
o|    scheme#string=?	2
o|    scheme#equal?
o|    scheme#length	5
o|    scheme#>=	2
o|    scheme#char=?	2
o|    scheme#string->list	4
o|    scheme#memq	5
o|    scheme#char-whitespace?	4
o|    scheme#list->string
o|    scheme#string-length
o|    scheme#string-ref
o|    scheme#list	31
o|    ##sys#check-list	15
o|    scheme#pair?	20
o|    ##sys#setslot	10
o|    ##sys#slot	48
o|    scheme#eq?	83
o|    scheme#not	11
o|    ##sys#apply
o|    scheme#null?	14
o|    scheme#car	30
o|    scheme#cons	57
o|contracted procedure: k7905 
o|contracted procedure: k2380 
o|contracted procedure: k2980 
o|contracted procedure: k2991 
o|contracted procedure: k3823 
o|contracted procedure: k3827 
o|contracted procedure: k3831 
o|contracted procedure: k3835 
o|contracted procedure: k3884 
o|contracted procedure: k3887 
o|contracted procedure: k3924 
o|contracted procedure: k3952 
o|contracted procedure: k3984 
o|contracted procedure: k4063 
o|contracted procedure: k4071 
o|contracted procedure: k4112 
o|contracted procedure: k7780 
o|contracted procedure: k7776 
o|contracted procedure: k4115 
o|contracted procedure: k4129 
o|contracted procedure: k2510 
o|contracted procedure: k2492 
o|contracted procedure: k4311 
o|contracted procedure: k4331 
o|contracted procedure: k6759 
o|contracted procedure: k6765 
o|contracted procedure: k6777 
o|contracted procedure: k6780 
o|contracted procedure: k6783 
o|contracted procedure: k6791 
o|contracted procedure: k6799 
o|contracted procedure: k7246 
o|contracted procedure: k7252 
o|contracted procedure: k7264 
o|contracted procedure: k7267 
o|contracted procedure: k7270 
o|contracted procedure: k7278 
o|contracted procedure: k7286 
o|contracted procedure: k7307 
o|contracted procedure: k7393 
o|contracted procedure: k7402 
o|contracted procedure: k7353 
o|contracted procedure: k7356 
o|contracted procedure: k7362 
o|contracted procedure: k7386 
o|inlining procedure: k7374 
o|inlining procedure: k7374 
o|contracted procedure: k7445 
o|contracted procedure: k7480 
o|contracted procedure: k7484 
o|contracted procedure: k4407 
o|contracted procedure: k4414 
o|inlining procedure: k4400 
o|contracted procedure: k4411 
o|inlining procedure: k4400 
o|contracted procedure: k4472 
o|contracted procedure: k6812 
o|contracted procedure: k6815 
o|contracted procedure: k6836 
o|contracted procedure: k6848 
o|contracted procedure: k6858 
o|contracted procedure: k6862 
o|contracted procedure: k6865 
o|contracted procedure: k6927 
o|contracted procedure: k6935 
o|contracted procedure: k6961 
o|contracted procedure: k6964 
o|contracted procedure: k6967 
o|contracted procedure: k6975 
o|contracted procedure: k6983 
o|propagated global variable: g15151519 main#object-files 
o|contracted procedure: k7120 
o|contracted procedure: k3111 
o|contracted procedure: k3114 
o|contracted procedure: k3124 
o|contracted procedure: k3036 
o|contracted procedure: k3062 
o|contracted procedure: k3042 
o|contracted procedure: k7014 
o|contracted procedure: k7028 
o|contracted procedure: k7031 
o|contracted procedure: k7037 
o|contracted procedure: k7049 
o|contracted procedure: k7055 
o|contracted procedure: k7063 
o|contracted procedure: k7071 
o|contracted procedure: k7083 
o|contracted procedure: k7086 
o|contracted procedure: k7089 
o|contracted procedure: k7097 
o|contracted procedure: k7105 
o|contracted procedure: k7163 
o|contracted procedure: k7170 
o|contracted procedure: k7174 
o|contracted procedure: k7187 
o|contracted procedure: k7183 
o|contracted procedure: k4510 
o|contracted procedure: k4563 
o|contracted procedure: k4584 
o|contracted procedure: k3191 
o|contracted procedure: k3203 
o|contracted procedure: k3226 
o|contracted procedure: k3234 
o|propagated global variable: lst486 main#linked-extensions 
o|contracted procedure: k6493 
o|contracted procedure: k6497 
o|contracted procedure: k6509 
o|contracted procedure: k6505 
o|contracted procedure: k6528 
o|contracted procedure: k6539 
o|contracted procedure: k6559 
o|contracted procedure: k6545 
o|contracted procedure: k6562 
o|contracted procedure: k6580 
o|contracted procedure: k6584 
o|contracted procedure: k6592 
o|contracted procedure: k6603 
o|contracted procedure: k6616 
o|contracted procedure: k6622 
o|contracted procedure: k6634 
o|contracted procedure: k6644 
o|contracted procedure: k6648 
o|propagated global variable: g14591461 main#generated-rc-files 
o|contracted procedure: k6657 
o|contracted procedure: k6667 
o|contracted procedure: k6671 
o|propagated global variable: g14421444 main#generated-c-files 
o|contracted procedure: k6684 
o|contracted procedure: k6694 
o|contracted procedure: k6698 
o|propagated global variable: g13991423 main#rc-files 
o|contracted procedure: k6711 
o|contracted procedure: k6715 
o|contracted procedure: k7632 
o|contracted procedure: k7628 
o|contracted procedure: k7624 
o|contracted procedure: k6735 
o|contracted procedure: k6745 
o|contracted procedure: k6749 
o|propagated global variable: g13891401 main#c-files 
o|contracted procedure: k4595 
o|contracted procedure: k4616 
o|contracted procedure: k4613 
o|contracted procedure: k3326 
o|contracted procedure: k3316 
o|contracted procedure: k4639 
o|contracted procedure: k4619 
o|contracted procedure: k6449 
o|contracted procedure: k6461 
o|contracted procedure: k6475 
o|contracted procedure: k6446 
o|contracted procedure: k6441 
o|contracted procedure: k6280 
o|contracted procedure: k64718704 
o|contracted procedure: k6304 
o|contracted procedure: k6308 
o|contracted procedure: k6311 
o|contracted procedure: k6315 
o|contracted procedure: k6343 
o|contracted procedure: k6347 
o|contracted procedure: k6353 
o|contracted procedure: k6365 
o|contracted procedure: k6368 
o|contracted procedure: k6371 
o|contracted procedure: k6379 
o|contracted procedure: k6387 
o|contracted procedure: k6418 
o|contracted procedure: k6428 
o|propagated global variable: g13261328 main#scheme-files 
o|contracted procedure: k4659 
o|contracted procedure: k4662 
o|contracted procedure: k4666 
o|contracted procedure: k4680 
o|contracted procedure: k4684 
o|contracted procedure: k4155 
o|contracted procedure: k4175 
o|contracted procedure: k4178 
o|contracted procedure: k4181 
o|contracted procedure: k4189 
o|contracted procedure: k4197 
o|contracted procedure: k4728 
o|contracted procedure: k4741 
o|contracted procedure: k4744 
o|contracted procedure: k4381 
o|contracted procedure: k4377 
o|contracted procedure: k4373 
o|contracted procedure: k4369 
o|contracted procedure: k4365 
o|contracted procedure: k4361 
o|contracted procedure: k4357 
o|contracted procedure: k4756 
o|contracted procedure: k4772 
o|contracted procedure: k4803 
o|contracted procedure: k4811 
o|contracted procedure: k4817 
o|contracted procedure: k4824 
o|contracted procedure: k4828 
o|contracted procedure: k4835 
o|contracted procedure: k4843 
o|contracted procedure: k4851 
o|contracted procedure: k4863 
o|contracted procedure: k4875 
o|contracted procedure: k4887 
o|contracted procedure: k4899 
o|contracted procedure: k4907 
o|contracted procedure: k4910 
o|contracted procedure: k4924 
o|contracted procedure: k4932 
o|contracted procedure: k4938 
o|contracted procedure: k4941 
o|contracted procedure: k4945 
o|contracted procedure: k4954 
o|contracted procedure: k4957 
o|contracted procedure: k4967 
o|contracted procedure: k4970 
o|contracted procedure: k4980 
o|contracted procedure: k4987 
o|contracted procedure: k4994 
o|contracted procedure: k5001 
o|contracted procedure: k5004 
o|contracted procedure: k5009 
o|contracted procedure: k5015 
o|contracted procedure: k5029 
o|contracted procedure: k5037 
o|contracted procedure: k5041 
o|contracted procedure: k5047 
o|contracted procedure: k5054 
o|contracted procedure: k5058 
o|contracted procedure: k5064 
o|contracted procedure: k5067 
o|contracted procedure: k5077 
o|contracted procedure: k5081 
o|contracted procedure: k5087 
o|contracted procedure: k4447 
o|contracted procedure: k5096 
o|contracted procedure: k5106 
o|contracted procedure: k5116 
o|contracted procedure: k5123 
o|contracted procedure: k5128 
o|contracted procedure: k5135 
o|contracted procedure: k5149 
o|contracted procedure: k5156 
o|contracted procedure: k5166 
o|contracted procedure: k5174 
o|contracted procedure: k5180 
o|contracted procedure: k5183 
o|contracted procedure: k5189 
o|contracted procedure: k5193 
o|contracted procedure: k5200 
o|contracted procedure: k5203 
o|contracted procedure: k5213 
o|contracted procedure: k5223 
o|contracted procedure: k5233 
o|contracted procedure: k5243 
o|contracted procedure: k5253 
o|contracted procedure: k5263 
o|contracted procedure: k5273 
o|contracted procedure: k5283 
o|contracted procedure: k5293 
o|contracted procedure: k5303 
o|contracted procedure: k5316 
o|contracted procedure: k5327 
o|contracted procedure: k5331 
o|contracted procedure: k5337 
o|contracted procedure: k5345 
o|contracted procedure: k5357 
o|contracted procedure: k5360 
o|contracted procedure: k5369 
o|contracted procedure: k5376 
o|contracted procedure: k5380 
o|contracted procedure: k5386 
o|contracted procedure: k5393 
o|contracted procedure: k5397 
o|contracted procedure: k5403 
o|contracted procedure: k5410 
o|contracted procedure: k5414 
o|contracted procedure: k5420 
o|contracted procedure: k5427 
o|contracted procedure: k5431 
o|contracted procedure: k5437 
o|contracted procedure: k5448 
o|contracted procedure: k5452 
o|contracted procedure: k5458 
o|contracted procedure: k5469 
o|contracted procedure: k5477 
o|contracted procedure: k5483 
o|contracted procedure: k5491 
o|contracted procedure: k5497 
o|contracted procedure: k5508 
o|contracted procedure: k5516 
o|contracted procedure: k5522 
o|contracted procedure: k5529 
o|contracted procedure: k5536 
o|contracted procedure: k5547 
o|contracted procedure: k5562 
o|contracted procedure: k5571 
o|contracted procedure: k5577 
o|contracted procedure: k5587 
o|contracted procedure: k5591 
o|contracted procedure: k5597 
o|contracted procedure: k5607 
o|contracted procedure: k5611 
o|contracted procedure: k5617 
o|contracted procedure: k5637 
o|contracted procedure: k5650 
o|contracted procedure: k5646 
o|contracted procedure: k5659 
o|contracted procedure: k5668 
o|contracted procedure: k5678 
o|contracted procedure: k5682 
o|contracted procedure: k6066 
o|contracted procedure: k6058 
o|contracted procedure: k5697 
o|contracted procedure: k5715 
o|contracted procedure: k5718 
o|contracted procedure: k5742 
o|contracted procedure: k5745 
o|contracted procedure: k5783 
o|contracted procedure: k5797 
o|contracted procedure: k5898 
o|contracted procedure: k5803 
o|contracted procedure: k5806 
o|contracted procedure: k5812 
o|contracted procedure: k5820 
o|contracted procedure: k5842 
o|contracted procedure: k5845 
o|contracted procedure: k5848 
o|contracted procedure: k5856 
o|contracted procedure: k5864 
o|contracted procedure: k5830 
o|contracted procedure: k5883 
o|contracted procedure: k5873 
o|contracted procedure: k3416 
o|contracted procedure: k3423 
o|contracted procedure: k3446 
o|contracted procedure: k3439 
o|contracted procedure: k3147 
o|contracted procedure: k3159 
o|contracted procedure: k3177 
o|contracted procedure: k3185 
o|contracted procedure: k5912 
o|contracted procedure: k5903 
o|contracted procedure: k5938 
o|contracted procedure: k5946 
o|contracted procedure: k5952 
o|contracted procedure: k5960 
o|contracted procedure: k5966 
o|contracted procedure: k5974 
o|contracted procedure: k5980 
o|contracted procedure: k5992 
o|contracted procedure: k5996 
o|contracted procedure: k6002 
o|contracted procedure: k6011 
o|contracted procedure: k6027 
o|contracted procedure: k6035 
o|contracted procedure: k6050 
o|contracted procedure: k6080 
o|contracted procedure: k6071 
o|contracted procedure: k6089 
o|contracted procedure: k6127 
o|contracted procedure: k7675 
o|contracted procedure: k7683 
o|contracted procedure: k7692 
o|contracted procedure: k7704 
o|contracted procedure: k7707 
o|contracted procedure: k7710 
o|contracted procedure: k7718 
o|contracted procedure: k7726 
o|contracted procedure: k7738 
o|contracted procedure: k7741 
o|contracted procedure: k7744 
o|contracted procedure: k7752 
o|contracted procedure: k7760 
o|contracted procedure: k7919 
o|contracted procedure: k7923 
o|contracted procedure: k7927 
o|simplifications: ((if . 4) (let . 93)) 
o|removed binding forms: 365 
o|inlining procedure: k7303 
o|inlining procedure: k7303 
o|contracted procedure: k6404 
o|inlining procedure: k5162 
o|inlining procedure: k5162 
o|inlining procedure: k5312 
o|inlining procedure: k5312 
o|inlining procedure: k5532 
o|inlining procedure: k5532 
o|substituted constant variable: r7920 
o|substituted constant variable: r7924 
o|substituted constant variable: r7928 
o|simplifications: ((let . 2)) 
o|replaced variables: 10 
o|removed binding forms: 5 
o|removed binding forms: 16 
o|direct leaf routine/allocation: g506507 3 
o|direct leaf routine/allocation: loop546 0 
o|direct leaf routine/allocation: g12381239 3 
o|direct leaf routine/allocation: a3432 0 
o|contracted procedure: k4609 
o|converted assignments to bindings: (loop546) 
o|inlining procedure: "(csc.scm:804) k4735" 
o|contracted procedure: "(mini-srfi-1.scm:131) k3167" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g478479 3 
x|eliminated type checks:
x|  C_i_check_list_2:	1
o|customizable procedures: (k3970 k7663 map-loop906923 map-loop879930 k5348 k5631 k5634 k5688 k6019 k5983 k5789 foldr473476 foldl579583 map-loop12591277 k5539 shared-build1029 check1028 k4913 t-options1027 loop1051 k4139 k4143 map-loop959984 k4645 k4648 k6339 k6394 map-loop13401361 k6292 for-each-loop13191373 generate-target-filename1031 g13831400 for-each-loop13821413 k6701 k6568 g13931422 for-each-loop13921428 for-each-loop14351445 for-each-loop14521462 k6521 main#compiler-options foldr491494 k4501 k7133 map-loop15891606 k7052 map-loop15661613 loop1620 loop436 loop456 map-loop15031520 main#linker-options main#linker-libraries main#command for-each-loop15371547 main#stop g17431744 main#string-any fold1693 main#cons* lp1706 main#libchicken map-loop16591676 map-loop14751492 main#repo-path loop423) 
o|calls to known targets: 317 
o|identified direct recursive calls: f_2975 1 
o|identified direct recursive calls: f_7348 3 
o|identified direct recursive calls: f_3031 2 
o|identified direct recursive calls: f_3198 1 
o|identified direct recursive calls: f_3311 1 
o|identified direct recursive calls: f_3154 1 
o|fast box initializations: 30 
o|fast global references: 441 
o|fast global assignments: 205 
o|dropping unused closure argument: f_2969 
o|dropping unused closure argument: f_3311 
o|dropping unused closure argument: f_3851 
o|dropping unused closure argument: f_3975 
o|dropping unused closure argument: f_4264 
o|dropping unused closure argument: f_4388 
o|dropping unused closure argument: f_4395 
o|dropping unused closure argument: f_4421 
o|dropping unused closure argument: f_4451 
o|dropping unused closure argument: f_6753 
o|dropping unused closure argument: f_7240 
o|dropping unused closure argument: f_7293 
o|dropping unused closure argument: f_7391 
o|dropping unused closure argument: f_7537 
*/
/* end of file */
