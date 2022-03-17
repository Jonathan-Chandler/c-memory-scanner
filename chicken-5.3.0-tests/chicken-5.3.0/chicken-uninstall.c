/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-uninstall.c
   uses: eval data-structures posix pathname port irregex extras file library
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

static C_TLS C_word lf[114];
static double C_possibly_force_alignment;


C_noret_decl(f4471)
static void C_ccall f4471(C_word c,C_word *av) C_noret;
C_noret_decl(f4476)
static void C_ccall f4476(C_word c,C_word *av) C_noret;
C_noret_decl(f4483)
static void C_ccall f4483(C_word c,C_word *av) C_noret;
C_noret_decl(f4490)
static void C_ccall f4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static C_word C_fcall f_1895(C_word t0);
C_noret_decl(f_1929)
static C_word C_fcall f_1929(C_word t0,C_word t1);
C_noret_decl(f_1987)
static void C_fcall f_1987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word *av) C_noret;
C_noret_decl(f_2015)
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static void C_fcall f_2090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word *av) C_noret;
C_noret_decl(f_2129)
static void C_fcall f_2129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2138)
static void C_fcall f_2138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word *av) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word *av) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word *av) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word *av) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word *av) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word *av) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word *av) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_fcall f_3411(C_word t0) C_noret;
C_noret_decl(f_3419)
static void C_fcall f_3419(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word *av) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word *av) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3463)
static void C_fcall f_3463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word *av) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word *av) C_noret;
C_noret_decl(f_3483)
static void C_fcall f_3483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word *av) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word *av) C_noret;
C_noret_decl(f_3526)
static C_word C_fcall f_3526(C_word t0,C_word t1);
C_noret_decl(f_3532)
static void C_fcall f_3532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_fcall f_3592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word *av) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word *av) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_fcall f_3660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3697)
static void C_fcall f_3697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word *av) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word *av) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_fcall f_3765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_fcall f_3825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3918)
static void C_fcall f_3918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_fcall f_3998(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_fcall f_4118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1987)
static void C_ccall trf_1987(C_word c,C_word *av) C_noret;
static void C_ccall trf_1987(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1987(t0,t1,t2);}

C_noret_decl(trf_2015)
static void C_ccall trf_2015(C_word c,C_word *av) C_noret;
static void C_ccall trf_2015(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2015(t0,t1,t2);}

C_noret_decl(trf_2090)
static void C_ccall trf_2090(C_word c,C_word *av) C_noret;
static void C_ccall trf_2090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2090(t0,t1,t2);}

C_noret_decl(trf_2129)
static void C_ccall trf_2129(C_word c,C_word *av) C_noret;
static void C_ccall trf_2129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2129(t0,t1,t2);}

C_noret_decl(trf_2138)
static void C_ccall trf_2138(C_word c,C_word *av) C_noret;
static void C_ccall trf_2138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2138(t0,t1,t2);}

C_noret_decl(trf_2146)
static void C_ccall trf_2146(C_word c,C_word *av) C_noret;
static void C_ccall trf_2146(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2146(t0,t1,t2,t3);}

C_noret_decl(trf_3411)
static void C_ccall trf_3411(C_word c,C_word *av) C_noret;
static void C_ccall trf_3411(C_word c,C_word *av){
C_word t0=av[0];
f_3411(t0);}

C_noret_decl(trf_3419)
static void C_ccall trf_3419(C_word c,C_word *av) C_noret;
static void C_ccall trf_3419(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3419(t0,t1);}

C_noret_decl(trf_3463)
static void C_ccall trf_3463(C_word c,C_word *av) C_noret;
static void C_ccall trf_3463(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3463(t0,t1,t2);}

C_noret_decl(trf_3483)
static void C_ccall trf_3483(C_word c,C_word *av) C_noret;
static void C_ccall trf_3483(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3483(t0,t1,t2);}

C_noret_decl(trf_3532)
static void C_ccall trf_3532(C_word c,C_word *av) C_noret;
static void C_ccall trf_3532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3532(t0,t1,t2);}

C_noret_decl(trf_3592)
static void C_ccall trf_3592(C_word c,C_word *av) C_noret;
static void C_ccall trf_3592(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3592(t0,t1);}

C_noret_decl(trf_3660)
static void C_ccall trf_3660(C_word c,C_word *av) C_noret;
static void C_ccall trf_3660(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3660(t0,t1,t2);}

C_noret_decl(trf_3697)
static void C_ccall trf_3697(C_word c,C_word *av) C_noret;
static void C_ccall trf_3697(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3697(t0,t1,t2);}

C_noret_decl(trf_3765)
static void C_ccall trf_3765(C_word c,C_word *av) C_noret;
static void C_ccall trf_3765(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3765(t0,t1);}

C_noret_decl(trf_3790)
static void C_ccall trf_3790(C_word c,C_word *av) C_noret;
static void C_ccall trf_3790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3790(t0,t1,t2);}

C_noret_decl(trf_3825)
static void C_ccall trf_3825(C_word c,C_word *av) C_noret;
static void C_ccall trf_3825(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3825(t0,t1);}

C_noret_decl(trf_3918)
static void C_ccall trf_3918(C_word c,C_word *av) C_noret;
static void C_ccall trf_3918(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3918(t0,t1,t2);}

C_noret_decl(trf_3960)
static void C_ccall trf_3960(C_word c,C_word *av) C_noret;
static void C_ccall trf_3960(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3960(t0,t1,t2,t3);}

C_noret_decl(trf_3998)
static void C_ccall trf_3998(C_word c,C_word *av) C_noret;
static void C_ccall trf_3998(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3998(t0,t1);}

C_noret_decl(trf_4118)
static void C_ccall trf_4118(C_word c,C_word *av) C_noret;
static void C_ccall trf_4118(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4118(t0,t1,t2);}

/* f4471 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f4471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4471,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* f4476 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f4476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4476,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* f4483 in k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f4483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4483,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* f4490 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4490,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* k1489 */
static void C_ccall f_1491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1491,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1492 in k1489 */
static void C_ccall f_1494(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1494,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4256,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:27: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[113]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1495 in k1492 in k1489 */
static void C_ccall f_1497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1497,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1500,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1503,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1506,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1509,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1512,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1515,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_1518(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1518,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[1] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2129,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[3] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t4=C_mutate(&lf[4] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t6=C_fast_retrieve(lf[109]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* loop in k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static C_word C_fcall f_1895(C_word t1){
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
t4=C_i_memq(t3,lf[93]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in a3519 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static C_word C_fcall f_1929(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(
/* mini-srfi-1.scm:88: pred */
  f_3526(((C_word*)t0)[2],C_i_car(t1))
);
if(C_truep(t2)){
return(t2);}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}}

/* loop in k3479 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_fcall f_1987(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1987,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2005,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:101: loop */
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2003 in loop in k3479 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_2005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2005,c,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[72]+1);{
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

/* loop in loop in k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2015,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k2040 in loop in loop in k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_2042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2042,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_fcall f_2090(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2090,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2104,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2117,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2015,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2015(t10,t6,t4);}}

/* k2102 in loop in k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_2104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2104,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2115 in loop in k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_2117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2117,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2090(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_fcall f_2129(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2129,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2138(t8,t1,t3);}

/* foldr329 in main#filter in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_fcall f_2138(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2138,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g334 in foldr329 in main#filter in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2146,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2153,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2151 in g334 in foldr329 in main#filter in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2153,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2165 in foldr329 in main#filter in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2167,c,av);}
/* mini-srfi-1.scm:131: g334 */
t2=((C_word*)t0)[2];
f_2146(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2802(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2802,c,av);}
a=C_alloc(6);
t2=lf[5] /* main#cross-chicken */ =t1;;
t3=lf[6] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[7] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[105]+1);{
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

/* k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2808,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2812,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2816,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2820,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2824,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2828,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2832,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2836,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2840,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2844,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in ... */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2848,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in ... */
static void C_ccall f_2852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2852,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in k1495 in ... */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2856,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in k1498 in ... */
static void C_ccall f_2860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2860,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in ... */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:64: chicken.platform#software-type */
t3=C_fast_retrieve(lf[108]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in ... */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2872,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in ... */
static void C_ccall f_2876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2876,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[11] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4247,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[105]+1);{
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

/* k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in ... */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2880,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in ... */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2884,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4239,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
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

/* k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in ... */
static void C_ccall f_2888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2888,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in ... */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2892,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in ... */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2896,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in ... */
static void C_ccall f_2900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2900,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2904,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#host-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in ... */
static void C_ccall f_2908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2908,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in ... */
static void C_ccall f_2912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2912,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in ... */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2916,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in ... */
static void C_ccall f_2920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2920,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in ... */
static void C_ccall f_2924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2924,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in ... */
static void C_ccall f_2928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2928,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in ... */
static void C_ccall f_2932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2932,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in ... */
static void C_ccall f_2936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2936,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
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

/* k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in ... */
static void C_ccall f_2940(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2940,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4234,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in ... */
static void C_ccall f_2944(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2944,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4229,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in ... */
static void C_ccall f_2948(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2948,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[17] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[18] /* (set! main#+egg-info-extension+ ...) */,lf[19]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:122: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[101];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2957 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_2959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2959,c,av);}
a=C_alloc(4);
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
if(C_truep(t2)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_3973(2,av2);}}
else{
/* egg-environment.scm:110: chicken.base#error */
t4=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* egg-environment.scm:109: chicken.pathname#absolute-pathname? */
t4=C_fast_retrieve(lf[81]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2966 in k2957 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_2968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2968,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3973(2,av2);}}
else{
/* egg-environment.scm:110: chicken.base#error */
t2=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2990 in k3417 in main#repo-path in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_2992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2992,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:C_retrieve2(lf[15],C_text("main#host-repo")));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in ... */
static void C_ccall f_3017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3017,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3020(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:123: chicken.platform#system-cache-directory */
t4=C_fast_retrieve(lf[100]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_3020(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3020,c,av);}
a=C_alloc(3);
t2=lf[20] /* main#host-extensions */ =C_SCHEME_TRUE;;
t3=lf[21] /* main#force-uninstall */ =C_SCHEME_FALSE;;
t4=lf[22] /* main#sudo-uninstall */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:53: chicken.process-context#get-environment-variable */
t6=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3024 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3026,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[41]);{
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

/* k3030 in k3024 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3032,c,av);}
if(C_truep(t1)){
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3034 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3036,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t3=C_fast_retrieve(lf[51]);{
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

/* k3038 in k3034 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3040,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t3=C_fast_retrieve(lf[50]);{
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

/* k3042 in k3038 in k3034 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3044,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
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

/* k3046 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3048,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
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
av2[3]=lf[52];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_3406(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3406,c,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[23]);
t3=C_mutate(&lf[24] /* (set! main#sudo-program ...) */,t2);
t4=C_mutate(&lf[25] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3411,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[30] /* (set! main#delete-installed-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3825,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:199: chicken.process-context#command-line-arguments */
t8=C_fast_retrieve(lf[97]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* main#repo-path in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3411(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3411,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[5],C_text("main#cross-chicken")))){
t3=C_i_not(C_retrieve2(lf[20],C_text("main#host-extensions")));
t4=t2;
f_3419(t4,(C_truep(t3)?lf[26]:lf[29]));}
else{
t3=t2;
f_3419(t3,lf[29]);}}

/* k3417 in main#repo-path in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_fcall f_3419(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3419,2,t0,t1);}
a=C_alloc(3);
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_eqp(lf[26],t1);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t4)?C_retrieve2(lf[17],C_text("main#target-run-repo")):C_retrieve2(lf[16],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:115: chicken.process-context#get-environment-variable */
t7=C_fast_retrieve(lf[27]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* a3432 in k3469 in g976 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3433,c,av);}
t3=C_fast_retrieve(lf[75]);
/* chicken-uninstall.scm:63: g935 */
t4=C_fast_retrieve(lf[75]);{
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

/* k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3446,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3532(t6,t2,t1);}

/* k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3449(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3449,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3463,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[71]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3481,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3483,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3483(t13,t9,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:73: filter */
f_2129(t2,t3,t1);}}

/* k3450 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_3452(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3452,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2090,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2090(t5,((C_word*)t0)[2],t1);}

/* g976 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_fcall f_3463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3463,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3471,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3475,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:71: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[77]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3469 in g976 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3471,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:63: filter */
f_2129(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3473 in g976 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3475,c,av);}
/* chicken-uninstall.scm:71: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[76]);{
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

/* k3479 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_3481(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3481,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1987,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1987(t5,((C_word*)t0)[2],t1);}

/* map-loop970 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_fcall f_3483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3483,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:70: g976 */
t4=((C_word*)t0)[4];
f_3463(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3506 in map-loop970 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3508(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3508,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3483(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3519 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_3520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3520,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1929,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_1929(t4,((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3525 in a3519 in k3447 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static C_word C_fcall f_3526(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_string_equal_p(t1,((C_word*)t0)[2]));}

/* map-loop943 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_fcall f_3532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3532,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:66: g949 */
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

/* k3555 in map-loop943 in k3444 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_3557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3557,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3532(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3566 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3568,c,av);}
/* chicken-uninstall.scm:67: chicken.file#glob */
t2=C_fast_retrieve(lf[78]);{
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

/* k3570 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3572,c,av);}
/* chicken-uninstall.scm:67: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[79];
av2[4]=C_retrieve2(lf[18],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3576 in k3606 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3578,c,av);}
/* chicken-uninstall.scm:81: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3587,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3592(t5,((C_word*)t0)[2]);}

/* loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_fcall f_3592(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3592,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3596,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:89: scheme#display */
t3=*((C_word*)lf[66]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[67];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3596,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:90: chicken.base#flush-output */
t3=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3599,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:91: chicken.io#read-line */
t3=C_fast_retrieve(lf[64]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3602,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_eofp(t1))){
/* chicken-uninstall.scm:93: chicken.base#error */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3605(2,av2);}}}

/* k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3605(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_3605,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3697,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3737,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3741,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3749,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3753,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string->list */
t11=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k3606 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3608,c,av);}
a=C_alloc(3);
t2=C_i_string_equal_p(t1,lf[55]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t1,lf[56]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:80: chicken.base#print */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[58];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-uninstall.scm:97: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3592(t3,((C_word*)t0)[2]);}}}

/* k3633 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3635,c,av);}
/* chicken-uninstall.scm:84: chicken.base#print */
t2=*((C_word*)lf[43]+1);{
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

/* k3637 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3639,c,av);}
/* chicken-uninstall.scm:84: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[69];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3656 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3658,c,av);}
/* chicken-uninstall.scm:85: scheme#append */
t2=*((C_word*)lf[72]+1);{
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

/* map-loop1011 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_fcall f_3660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3660,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:86: g1034 */
t4=*((C_word*)lf[35]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[73];
av2[3]=C_slot(t2,C_fix(0));
av2[4]=lf[74];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3683 in map-loop1011 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_3685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3685,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3660(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* left in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_fcall f_3697(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3697,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_u_i_char_whitespacep(t3))){
/* chicken-uninstall.scm:102: left */
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3724,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:103: left */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3722 in left in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3724,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3735 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3737,c,av);}
/* ##sys#list->string */
t2=C_fast_retrieve(lf[59]);{
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

/* k3739 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3741,c,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[60]+1);{
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

/* k3743 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3745,c,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3697(t2,((C_word*)t0)[3],t1);}

/* k3747 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3749,c,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[60]+1);{
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

/* k3751 in k3603 in k3600 in k3597 in k3594 in loop in k3585 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3753,c,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3697(t2,((C_word*)t0)[3],t1);}

/* k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3759(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_3759,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3036,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t7=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
f_3918(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}}

/* k3763 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_fcall f_3765(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3765,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_check_list_2(t1,lf[45]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3790(t7,t3,t1);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3918(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3774 in for-each-loop1073 in k3763 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3776,c,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:113: delete-installed-file */
f_3825(((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3790(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3783 in k3763 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3785,c,av);}
/* chicken-uninstall.scm:115: delete-installed-file */
f_3825(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1073 in k3763 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3790,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3776,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-uninstall.scm:113: chicken.file#file-exists? */
t6=C_fast_retrieve(lf[41]);{
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

/* k3798 in for-each-loop1073 in k3763 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3800,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3790(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3813 in k3757 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3815,c,av);}
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_car(t2));
t5=C_i_assq(lf[46],t1);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=((C_word*)t0)[2];
f_3765(t7,(C_truep(t6)?t6:t4));}
else{
t6=((C_word*)t0)[2];
f_3765(t6,t4);}}

/* k3817 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3819,c,av);}
/* chicken-uninstall.scm:107: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[41]);{
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

/* k3821 in k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3823,c,av);}
/* chicken-uninstall.scm:108: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[18],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_fcall f_3825(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3825,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3881,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:118: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[41]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3842 in k3879 in main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3844,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-uninstall.scm:123: chicken.base#warning */
t3=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[33];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3856 in k3879 in main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3858,c,av);}
/* chicken-uninstall.scm:121: chicken.process#system */
t2=C_fast_retrieve(lf[34]);{
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

/* k3860 in k3879 in main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3862,c,av);}
/* chicken-uninstall.scm:121: scheme#string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[24],C_text("main#sudo-program"));
av2[3]=lf[36];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3866 in k3879 in main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3868,c,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:125: chicken.file#delete-directory */
t2=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* chicken-uninstall.scm:127: chicken.file#delete-file */
t2=C_fast_retrieve(lf[39]);{
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

/* k3879 in main#delete-installed-file in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3881(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3881,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(t1))){
/* chicken-uninstall.scm:119: chicken.base#warning */
t2=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[22],C_text("main#sudo-uninstall")))?C_eqp(lf[13],C_retrieve2(lf[14],C_text("main#default-platform"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3858,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:121: chicken.process#qs */
t6=C_fast_retrieve(lf[37]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:124: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_3887,c,av);}
a=C_alloc(32);
if(C_truep(C_i_nullp(t1))){
/* chicken-uninstall.scm:132: chicken.base#print */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_retrieve2(lf[21],C_text("main#force-uninstall"));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[21],C_text("main#force-uninstall")))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_retrieve2(lf[21],C_text("main#force-uninstall"));
f_3902(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,lf[70]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(t1,lf[71]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3660,a[2]=t10,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_3660(t17,t13,t1);}}}

/* k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3902,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[45]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3918,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3918(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3905 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3907(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3907,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3819,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3823,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:108: repo-path */
f_3411(t4);}

/* for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_fcall f_3918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3918,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3907,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-uninstall.scm:136: chicken.base#print */
t6=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3926 in for-each-loop1112 in k3900 in k3885 in k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_3928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3928,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3918(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3960,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4471,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t6=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3970(2,av2);}}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[84]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3998,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_3998(t7,t5);}
else{
t7=C_u_i_string_equal_p(t4,lf[95]);
t8=t6;
f_3998(t8,(C_truep(t7)?t7:C_u_i_string_equal_p(t4,lf[96])));}}}

/* k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3970,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:108: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[27]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3973,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:163: scheme#reverse */
t3=*((C_word*)lf[60]+1);{
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

/* k3978 in k3971 in k3968 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_3980(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_3980,c,av);}
a=C_alloc(22);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[51]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3446,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3568,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: repo-path */
f_3411(t11);}

/* k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_fcall f_3998(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3998,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4476,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t3=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[85]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4016,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:171: chicken.platform#chicken-version */
t4=C_fast_retrieve(lf[86]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[87]))){
t2=lf[20] /* main#host-extensions */ =C_SCHEME_FALSE;;
/* chicken-uninstall.scm:175: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3960(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[88]))){
/* chicken-uninstall.scm:178: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3960(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[89]))){
t2=lf[21] /* main#force-uninstall */ =C_SCHEME_TRUE;;
/* chicken-uninstall.scm:181: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3960(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[90]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
/* chicken-uninstall.scm:184: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3960(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[91]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[92]));
if(C_truep(t3)){
t4=lf[22] /* main#sudo-uninstall */ =C_SCHEME_TRUE;;
/* chicken-uninstall.scm:187: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3960(t5,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t4=C_block_size(((C_word*)t0)[3]);
t5=(C_truep(C_i_fixnum_positivep(t4))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(((C_word*)t0)[3],C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t6,C_fix(2)))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4163,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:191: scheme#substring */
t9=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t8=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[6]);
/* chicken-uninstall.scm:197: loop */
t8=((C_word*)((C_word*)t0)[4])[1];
f_3960(t8,((C_word*)t0)[2],t6,t7);}}}}}}}}}

/* k4007 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_4009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4009,c,av);}
/* chicken-uninstall.scm:172: chicken.base#exit */
t2=C_fast_retrieve(lf[57]);{
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

/* k4014 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_4016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4016,c,av);}
/* chicken-uninstall.scm:171: chicken.base#print */
t2=*((C_word*)lf[43]+1);{
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

/* k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_4089(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4089,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1895,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_1895(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4118(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4483,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4100 in k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_4102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4102,c,av);}
/* chicken-uninstall.scm:193: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3960(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4112 in k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4114,c,av);}
/* chicken-uninstall.scm:193: scheme#append */
t2=*((C_word*)lf[72]+1);{
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

/* map-loop1177 in k4087 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_fcall f_4118(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4118,3,t0,t1,t2);}
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

/* k4161 in k3996 in loop in k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4163,c,av);}
/* ##sys#string->list */
t2=C_fast_retrieve(lf[61]);{
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

/* k4200 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4202,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[42]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4206 in k4200 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_4208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4208,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4210 in k3404 in k3018 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in ... */
static void C_ccall f_4212(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4212,c,av);}
a=C_alloc(8);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3960,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3960(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4217 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4219,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* egg-environment.scm:123: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[8],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* egg-environment.scm:124: chicken.process-context#current-directory */
t3=C_fast_retrieve(lf[99]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4220 in k4217 in k3015 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4222,c,av);}
/* egg-environment.scm:123: chicken.pathname#make-pathname */
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
av2[3]=C_retrieve2(lf[8],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4227 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in ... */
static void C_ccall f_4229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4229,c,av);}
/* egg-environment.scm:99: scheme#string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-runlibdir"));
av2[3]=lf[102];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4232 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in ... */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4234,c,av);}
/* egg-environment.scm:96: scheme#string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[9],C_text("main#default-libdir"));
av2[3]=lf[104];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4237 in k2882 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in ... */
static void C_ccall f_4239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4239,c,av);}
/* egg-environment.scm:78: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[49]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4241 in k2878 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in ... */
static void C_ccall f_4243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4243,c,av);}
/* egg-environment.scm:75: scheme#string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=lf[106];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4245 in k2874 in k2870 in k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in ... */
static void C_ccall f_4247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4247,c,av);}
/* egg-environment.scm:72: scheme#string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=lf[107];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4252 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2814 in k2810 in k2806 in k2800 in k1516 in k1513 in k1510 in k1507 in k1504 in ... */
static void C_ccall f_4254(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4254,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[12]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[13]);
t4=C_mutate(&lf[14] /* (set! main#default-platform ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[105]+1);{
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

/* a4255 in k1492 in k1489 */
static void C_ccall f_4256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4256,c,av);}
/* chicken-uninstall.scm:27: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[111]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t1;
av2[2]=lf[112];
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
if(C_unlikely(!C_demand_2(387))){
C_save(t1);
C_rereclaim2(387*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,114);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[12]=C_h_intern(&lf[12],7, C_text("windows"));
lf[13]=C_h_intern(&lf[13],4, C_text("unix"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004sudo"));
lf[26]=C_h_intern(&lf[26],6, C_text("target"));
lf[27]=C_h_intern(&lf[27],48, C_text("chicken.process-context#get-environment-variable"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[29]=C_h_intern(&lf[29],4, C_text("host"));
lf[31]=C_h_intern(&lf[31],20, C_text("chicken.base#warning"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023file does not exist"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024deleting file failed"));
lf[34]=C_h_intern(&lf[34],22, C_text("chicken.process#system"));
lf[35]=C_h_intern(&lf[35],20, C_text("scheme#string-append"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015 rm -f -r -- "));
lf[37]=C_h_intern(&lf[37],18, C_text("chicken.process#qs"));
lf[38]=C_h_intern(&lf[38],29, C_text("chicken.file#delete-directory"));
lf[39]=C_h_intern(&lf[39],24, C_text("chicken.file#delete-file"));
lf[40]=C_h_intern(&lf[40],30, C_text("chicken.file#directory-exists\077"));
lf[41]=C_h_intern(&lf[41],25, C_text("chicken.file#file-exists\077"));
lf[42]=C_h_intern(&lf[42],34, C_text("chicken.base#implicit-exit-handler"));
lf[43]=C_h_intern(&lf[43],18, C_text("chicken.base#print"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022nothing to remove."));
lf[45]=C_h_intern(&lf[45],8, C_text("for-each"));
lf[46]=C_h_intern(&lf[46],15, C_text("installed-files"));
lf[47]=C_h_intern(&lf[47],27, C_text("scheme#with-input-from-file"));
lf[48]=C_h_intern(&lf[48],11, C_text("scheme#read"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.pathname#make-pathname"));
lf[50]=C_h_intern(&lf[50],35, C_text("chicken.pathname#pathname-extension"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.pathname#pathname-file"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[53]=C_h_intern(&lf[53],35, C_text("chicken.pathname#pathname-directory"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011removing "));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[57]=C_h_intern(&lf[57],17, C_text("chicken.base#exit"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010aborted."));
lf[59]=C_h_intern(&lf[59],18, C_text("##sys#list->string"));
lf[60]=C_h_intern(&lf[60],14, C_text("scheme#reverse"));
lf[61]=C_h_intern(&lf[61],18, C_text("##sys#string->list"));
lf[62]=C_h_intern(&lf[62],18, C_text("chicken.base#error"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000$EOF - use `-force\047 to proceed anyway"));
lf[64]=C_h_intern(&lf[64],20, C_text("chicken.io#read-line"));
lf[65]=C_h_intern(&lf[65],25, C_text("chicken.base#flush-output"));
lf[66]=C_h_intern(&lf[66],14, C_text("scheme#display"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000!Do you want to proceed\077 (yes/no) "));
lf[68]=C_h_intern(&lf[68],33, C_text("chicken.string#string-intersperse"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000+About to delete the following extensions:\012\012"));
lf[71]=C_h_intern(&lf[71],3, C_text("map"));
lf[72]=C_h_intern(&lf[72],13, C_text("scheme#append"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[75]=C_h_intern(&lf[75],30, C_text("chicken.irregex#irregex-search"));
lf[76]=C_h_intern(&lf[76],23, C_text("chicken.irregex#irregex"));
lf[77]=C_h_intern(&lf[77],25, C_text("chicken.irregex#glob->sre"));
lf[78]=C_h_intern(&lf[78],17, C_text("chicken.file#glob"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\0007CHICKEN_INSTALL_REPOSITORY must be an absolute pathname"));
lf[81]=C_h_intern(&lf[81],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\002,usage: chicken-uninstall [OPTION ...] [NAME ...]\012\012  -h   -help             "
"       show this message and exit\012       -version                 show version a"
"nd exit\012       -force                   don\047t ask, delete whatever matches\012     "
"  -match                   treat NAME as a glob pattern\012  -s   -sudo            "
"        use external command to elevate privileges for deleting files\012       -ho"
"st                    when cross-compiling, uninstall host extensions only\012     "
"  -target                  when cross-compiling, uninstall target extensions onl"
"y"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[86]=C_h_intern(&lf[86],32, C_text("chicken.platform#chicken-version"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-force"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-sudo"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\377\016"));
lf[94]=C_h_intern(&lf[94],16, C_text("scheme#substring"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[97]=C_h_intern(&lf[97],46, C_text("chicken.process-context#command-line-arguments"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004SUDO"));
lf[99]=C_h_intern(&lf[99],41, C_text("chicken.process-context#current-directory"));
lf[100]=C_h_intern(&lf[100],39, C_text("chicken.platform#system-cache-directory"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[103]=C_h_intern(&lf[103],20, C_text("##sys#fixnum->string"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[105]=C_h_intern(&lf[105],19, C_text("##sys#peek-c-string"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[108]=C_h_intern(&lf[108],30, C_text("chicken.platform#software-type"));
lf[109]=C_h_intern(&lf[109],25, C_text("chicken.platform#feature\077"));
lf[110]=C_h_intern_kw(&lf[110],13, C_text("cross-chicken"));
lf[111]=C_h_intern(&lf[111],30, C_text("##sys#register-compiled-module"));
lf[112]=C_h_intern(&lf[112],4, C_text("main"));
lf[113]=C_h_intern(&lf[113],22, C_text("##sys#with-environment"));
C_register_lf2(lf,114,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[160] = {
{C_text("f4471:chicken_2duninstall_2escm"),(void*)f4471},
{C_text("f4476:chicken_2duninstall_2escm"),(void*)f4476},
{C_text("f4483:chicken_2duninstall_2escm"),(void*)f4483},
{C_text("f4490:chicken_2duninstall_2escm"),(void*)f4490},
{C_text("f_1491:chicken_2duninstall_2escm"),(void*)f_1491},
{C_text("f_1494:chicken_2duninstall_2escm"),(void*)f_1494},
{C_text("f_1497:chicken_2duninstall_2escm"),(void*)f_1497},
{C_text("f_1500:chicken_2duninstall_2escm"),(void*)f_1500},
{C_text("f_1503:chicken_2duninstall_2escm"),(void*)f_1503},
{C_text("f_1506:chicken_2duninstall_2escm"),(void*)f_1506},
{C_text("f_1509:chicken_2duninstall_2escm"),(void*)f_1509},
{C_text("f_1512:chicken_2duninstall_2escm"),(void*)f_1512},
{C_text("f_1515:chicken_2duninstall_2escm"),(void*)f_1515},
{C_text("f_1518:chicken_2duninstall_2escm"),(void*)f_1518},
{C_text("f_1895:chicken_2duninstall_2escm"),(void*)f_1895},
{C_text("f_1929:chicken_2duninstall_2escm"),(void*)f_1929},
{C_text("f_1987:chicken_2duninstall_2escm"),(void*)f_1987},
{C_text("f_2005:chicken_2duninstall_2escm"),(void*)f_2005},
{C_text("f_2015:chicken_2duninstall_2escm"),(void*)f_2015},
{C_text("f_2042:chicken_2duninstall_2escm"),(void*)f_2042},
{C_text("f_2090:chicken_2duninstall_2escm"),(void*)f_2090},
{C_text("f_2104:chicken_2duninstall_2escm"),(void*)f_2104},
{C_text("f_2117:chicken_2duninstall_2escm"),(void*)f_2117},
{C_text("f_2129:chicken_2duninstall_2escm"),(void*)f_2129},
{C_text("f_2138:chicken_2duninstall_2escm"),(void*)f_2138},
{C_text("f_2146:chicken_2duninstall_2escm"),(void*)f_2146},
{C_text("f_2153:chicken_2duninstall_2escm"),(void*)f_2153},
{C_text("f_2167:chicken_2duninstall_2escm"),(void*)f_2167},
{C_text("f_2802:chicken_2duninstall_2escm"),(void*)f_2802},
{C_text("f_2808:chicken_2duninstall_2escm"),(void*)f_2808},
{C_text("f_2812:chicken_2duninstall_2escm"),(void*)f_2812},
{C_text("f_2816:chicken_2duninstall_2escm"),(void*)f_2816},
{C_text("f_2820:chicken_2duninstall_2escm"),(void*)f_2820},
{C_text("f_2824:chicken_2duninstall_2escm"),(void*)f_2824},
{C_text("f_2828:chicken_2duninstall_2escm"),(void*)f_2828},
{C_text("f_2832:chicken_2duninstall_2escm"),(void*)f_2832},
{C_text("f_2836:chicken_2duninstall_2escm"),(void*)f_2836},
{C_text("f_2840:chicken_2duninstall_2escm"),(void*)f_2840},
{C_text("f_2844:chicken_2duninstall_2escm"),(void*)f_2844},
{C_text("f_2848:chicken_2duninstall_2escm"),(void*)f_2848},
{C_text("f_2852:chicken_2duninstall_2escm"),(void*)f_2852},
{C_text("f_2856:chicken_2duninstall_2escm"),(void*)f_2856},
{C_text("f_2860:chicken_2duninstall_2escm"),(void*)f_2860},
{C_text("f_2864:chicken_2duninstall_2escm"),(void*)f_2864},
{C_text("f_2872:chicken_2duninstall_2escm"),(void*)f_2872},
{C_text("f_2876:chicken_2duninstall_2escm"),(void*)f_2876},
{C_text("f_2880:chicken_2duninstall_2escm"),(void*)f_2880},
{C_text("f_2884:chicken_2duninstall_2escm"),(void*)f_2884},
{C_text("f_2888:chicken_2duninstall_2escm"),(void*)f_2888},
{C_text("f_2892:chicken_2duninstall_2escm"),(void*)f_2892},
{C_text("f_2896:chicken_2duninstall_2escm"),(void*)f_2896},
{C_text("f_2900:chicken_2duninstall_2escm"),(void*)f_2900},
{C_text("f_2904:chicken_2duninstall_2escm"),(void*)f_2904},
{C_text("f_2908:chicken_2duninstall_2escm"),(void*)f_2908},
{C_text("f_2912:chicken_2duninstall_2escm"),(void*)f_2912},
{C_text("f_2916:chicken_2duninstall_2escm"),(void*)f_2916},
{C_text("f_2920:chicken_2duninstall_2escm"),(void*)f_2920},
{C_text("f_2924:chicken_2duninstall_2escm"),(void*)f_2924},
{C_text("f_2928:chicken_2duninstall_2escm"),(void*)f_2928},
{C_text("f_2932:chicken_2duninstall_2escm"),(void*)f_2932},
{C_text("f_2936:chicken_2duninstall_2escm"),(void*)f_2936},
{C_text("f_2940:chicken_2duninstall_2escm"),(void*)f_2940},
{C_text("f_2944:chicken_2duninstall_2escm"),(void*)f_2944},
{C_text("f_2948:chicken_2duninstall_2escm"),(void*)f_2948},
{C_text("f_2959:chicken_2duninstall_2escm"),(void*)f_2959},
{C_text("f_2968:chicken_2duninstall_2escm"),(void*)f_2968},
{C_text("f_2992:chicken_2duninstall_2escm"),(void*)f_2992},
{C_text("f_3017:chicken_2duninstall_2escm"),(void*)f_3017},
{C_text("f_3020:chicken_2duninstall_2escm"),(void*)f_3020},
{C_text("f_3026:chicken_2duninstall_2escm"),(void*)f_3026},
{C_text("f_3032:chicken_2duninstall_2escm"),(void*)f_3032},
{C_text("f_3036:chicken_2duninstall_2escm"),(void*)f_3036},
{C_text("f_3040:chicken_2duninstall_2escm"),(void*)f_3040},
{C_text("f_3044:chicken_2duninstall_2escm"),(void*)f_3044},
{C_text("f_3048:chicken_2duninstall_2escm"),(void*)f_3048},
{C_text("f_3406:chicken_2duninstall_2escm"),(void*)f_3406},
{C_text("f_3411:chicken_2duninstall_2escm"),(void*)f_3411},
{C_text("f_3419:chicken_2duninstall_2escm"),(void*)f_3419},
{C_text("f_3433:chicken_2duninstall_2escm"),(void*)f_3433},
{C_text("f_3446:chicken_2duninstall_2escm"),(void*)f_3446},
{C_text("f_3449:chicken_2duninstall_2escm"),(void*)f_3449},
{C_text("f_3452:chicken_2duninstall_2escm"),(void*)f_3452},
{C_text("f_3463:chicken_2duninstall_2escm"),(void*)f_3463},
{C_text("f_3471:chicken_2duninstall_2escm"),(void*)f_3471},
{C_text("f_3475:chicken_2duninstall_2escm"),(void*)f_3475},
{C_text("f_3481:chicken_2duninstall_2escm"),(void*)f_3481},
{C_text("f_3483:chicken_2duninstall_2escm"),(void*)f_3483},
{C_text("f_3508:chicken_2duninstall_2escm"),(void*)f_3508},
{C_text("f_3520:chicken_2duninstall_2escm"),(void*)f_3520},
{C_text("f_3526:chicken_2duninstall_2escm"),(void*)f_3526},
{C_text("f_3532:chicken_2duninstall_2escm"),(void*)f_3532},
{C_text("f_3557:chicken_2duninstall_2escm"),(void*)f_3557},
{C_text("f_3568:chicken_2duninstall_2escm"),(void*)f_3568},
{C_text("f_3572:chicken_2duninstall_2escm"),(void*)f_3572},
{C_text("f_3578:chicken_2duninstall_2escm"),(void*)f_3578},
{C_text("f_3587:chicken_2duninstall_2escm"),(void*)f_3587},
{C_text("f_3592:chicken_2duninstall_2escm"),(void*)f_3592},
{C_text("f_3596:chicken_2duninstall_2escm"),(void*)f_3596},
{C_text("f_3599:chicken_2duninstall_2escm"),(void*)f_3599},
{C_text("f_3602:chicken_2duninstall_2escm"),(void*)f_3602},
{C_text("f_3605:chicken_2duninstall_2escm"),(void*)f_3605},
{C_text("f_3608:chicken_2duninstall_2escm"),(void*)f_3608},
{C_text("f_3635:chicken_2duninstall_2escm"),(void*)f_3635},
{C_text("f_3639:chicken_2duninstall_2escm"),(void*)f_3639},
{C_text("f_3658:chicken_2duninstall_2escm"),(void*)f_3658},
{C_text("f_3660:chicken_2duninstall_2escm"),(void*)f_3660},
{C_text("f_3685:chicken_2duninstall_2escm"),(void*)f_3685},
{C_text("f_3697:chicken_2duninstall_2escm"),(void*)f_3697},
{C_text("f_3724:chicken_2duninstall_2escm"),(void*)f_3724},
{C_text("f_3737:chicken_2duninstall_2escm"),(void*)f_3737},
{C_text("f_3741:chicken_2duninstall_2escm"),(void*)f_3741},
{C_text("f_3745:chicken_2duninstall_2escm"),(void*)f_3745},
{C_text("f_3749:chicken_2duninstall_2escm"),(void*)f_3749},
{C_text("f_3753:chicken_2duninstall_2escm"),(void*)f_3753},
{C_text("f_3759:chicken_2duninstall_2escm"),(void*)f_3759},
{C_text("f_3765:chicken_2duninstall_2escm"),(void*)f_3765},
{C_text("f_3776:chicken_2duninstall_2escm"),(void*)f_3776},
{C_text("f_3785:chicken_2duninstall_2escm"),(void*)f_3785},
{C_text("f_3790:chicken_2duninstall_2escm"),(void*)f_3790},
{C_text("f_3800:chicken_2duninstall_2escm"),(void*)f_3800},
{C_text("f_3815:chicken_2duninstall_2escm"),(void*)f_3815},
{C_text("f_3819:chicken_2duninstall_2escm"),(void*)f_3819},
{C_text("f_3823:chicken_2duninstall_2escm"),(void*)f_3823},
{C_text("f_3825:chicken_2duninstall_2escm"),(void*)f_3825},
{C_text("f_3844:chicken_2duninstall_2escm"),(void*)f_3844},
{C_text("f_3858:chicken_2duninstall_2escm"),(void*)f_3858},
{C_text("f_3862:chicken_2duninstall_2escm"),(void*)f_3862},
{C_text("f_3868:chicken_2duninstall_2escm"),(void*)f_3868},
{C_text("f_3881:chicken_2duninstall_2escm"),(void*)f_3881},
{C_text("f_3887:chicken_2duninstall_2escm"),(void*)f_3887},
{C_text("f_3902:chicken_2duninstall_2escm"),(void*)f_3902},
{C_text("f_3907:chicken_2duninstall_2escm"),(void*)f_3907},
{C_text("f_3918:chicken_2duninstall_2escm"),(void*)f_3918},
{C_text("f_3928:chicken_2duninstall_2escm"),(void*)f_3928},
{C_text("f_3960:chicken_2duninstall_2escm"),(void*)f_3960},
{C_text("f_3970:chicken_2duninstall_2escm"),(void*)f_3970},
{C_text("f_3973:chicken_2duninstall_2escm"),(void*)f_3973},
{C_text("f_3980:chicken_2duninstall_2escm"),(void*)f_3980},
{C_text("f_3998:chicken_2duninstall_2escm"),(void*)f_3998},
{C_text("f_4009:chicken_2duninstall_2escm"),(void*)f_4009},
{C_text("f_4016:chicken_2duninstall_2escm"),(void*)f_4016},
{C_text("f_4089:chicken_2duninstall_2escm"),(void*)f_4089},
{C_text("f_4102:chicken_2duninstall_2escm"),(void*)f_4102},
{C_text("f_4114:chicken_2duninstall_2escm"),(void*)f_4114},
{C_text("f_4118:chicken_2duninstall_2escm"),(void*)f_4118},
{C_text("f_4163:chicken_2duninstall_2escm"),(void*)f_4163},
{C_text("f_4202:chicken_2duninstall_2escm"),(void*)f_4202},
{C_text("f_4208:chicken_2duninstall_2escm"),(void*)f_4208},
{C_text("f_4212:chicken_2duninstall_2escm"),(void*)f_4212},
{C_text("f_4219:chicken_2duninstall_2escm"),(void*)f_4219},
{C_text("f_4222:chicken_2duninstall_2escm"),(void*)f_4222},
{C_text("f_4229:chicken_2duninstall_2escm"),(void*)f_4229},
{C_text("f_4234:chicken_2duninstall_2escm"),(void*)f_4234},
{C_text("f_4239:chicken_2duninstall_2escm"),(void*)f_4239},
{C_text("f_4243:chicken_2duninstall_2escm"),(void*)f_4243},
{C_text("f_4247:chicken_2duninstall_2escm"),(void*)f_4247},
{C_text("f_4254:chicken_2duninstall_2escm"),(void*)f_4254},
{C_text("f_4256:chicken_2duninstall_2escm"),(void*)f_4256},
{C_text("toplevel:chicken_2duninstall_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#force-uninstall 
o|hiding unexported module binding: main#sudo-uninstall 
o|hiding unexported module binding: main#sudo-program 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#fini 
o|hiding unexported module binding: main#ask 
o|hiding unexported module binding: main#trim 
o|hiding unexported module binding: main#remove-extension 
o|hiding unexported module binding: main#delete-installed-file 
o|hiding unexported module binding: main#uninstall 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		2
S|  chicken.base#foldl		3
S|  scheme#map		7
S|  chicken.base#foldr		3
o|eliminated procedure checks: 77 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  1 (scheme#zero? integer)
o|  10 (scheme#string=? string string)
o|  2 (scheme#cdar (pair pair *))
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  37 (scheme#cdr pair)
o|  9 (scheme#car pair)
(o e)|safe calls: 389 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1900 
o|inlining procedure: k1900 
o|inlining procedure: k1931 
o|inlining procedure: k1931 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2148 
o|inlining procedure: k2148 
o|inlining procedure: k2140 
o|inlining procedure: k2140 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2539 
o|inlining procedure: k2539 
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
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#cache-directory 
o|removed side-effect free assignment to unused variable: main#get-egg-property 
o|inlining procedure: k3112 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|inlining procedure: k3147 
o|inlining procedure: k3147 
o|substituted constant variable: a3188 
o|substituted constant variable: a3190 
o|inlining procedure: k3112 
o|inlining procedure: k3198 
o|inlining procedure: k3198 
o|inlining procedure: k3208 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3243 
o|inlining procedure: k3243 
o|inlining procedure: k3273 
o|inlining procedure: k3273 
o|substituted constant variable: a3302 
o|substituted constant variable: a3304 
o|substituted constant variable: a3306 
o|inlining procedure: k3208 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|contracted procedure: "(chicken-uninstall.scm:57) main#destination-repository" 
o|inlining procedure: k2981 
o|inlining procedure: k2981 
o|inlining procedure: k3420 
o|inlining procedure: k3420 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|inlining procedure: k3845 
o|inlining procedure: k3845 
o|inlining procedure: k3863 
o|inlining procedure: k3863 
o|contracted procedure: "(chicken-uninstall.scm:199) main#main" 
o|inlining procedure: k3962 
o|contracted procedure: "(chicken-uninstall.scm:163) main#uninstall" 
o|inlining procedure: k3888 
o|inlining procedure: k3888 
o|inlining procedure: k3920 
o|contracted procedure: "(chicken-uninstall.scm:134) g11131120" 
o|contracted procedure: "(chicken-uninstall.scm:137) main#remove-extension" 
o|inlining procedure: k3760 
o|inlining procedure: k3792 
o|contracted procedure: "(chicken-uninstall.scm:111) g10741081" 
o|inlining procedure: k3771 
o|inlining procedure: k3771 
o|inlining procedure: k3792 
o|contracted procedure: "(chicken-uninstall.scm:109) main#get-egg-property*" 
o|inlining procedure: k3094 
o|inlining procedure: k3094 
o|contracted procedure: "(chicken-uninstall.scm:109) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3027 
o|inlining procedure: k3027 
o|inlining procedure: k3760 
o|inlining procedure: k3920 
o|propagated global variable: tmp11071109 main#force-uninstall 
o|propagated global variable: tmp11071109 main#force-uninstall 
o|contracted procedure: "(chicken-uninstall.scm:133) main#ask" 
o|inlining procedure: k3612 
o|inlining procedure: k3612 
o|substituted constant variable: a3619 
o|contracted procedure: "(chicken-uninstall.scm:96) main#fini" 
o|contracted procedure: "(chicken-uninstall.scm:94) main#trim" 
o|inlining procedure: k3699 
o|inlining procedure: k3699 
o|inlining procedure: k3662 
o|contracted procedure: "(chicken-uninstall.scm:86) g10171026" 
o|inlining procedure: k3662 
o|contracted procedure: "(chicken-uninstall.scm:130) main#gather-eggs" 
o|contracted procedure: "(chicken-uninstall.scm:77) main#delete-duplicates" 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2017 
o|inlining procedure: k2017 
o|contracted procedure: "(chicken-uninstall.scm:71) main#grep" 
o|propagated global variable: g935936 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:69) main#concatenate" 
o|inlining procedure: k1989 
o|inlining procedure: k1989 
o|inlining procedure: k3485 
o|inlining procedure: k3485 
o|inlining procedure: k3534 
o|inlining procedure: k3534 
o|contracted procedure: "(chicken-uninstall.scm:162) main#validate-environment" 
o|inlining procedure: k2960 
o|inlining procedure: k2960 
o|inlining procedure: k3962 
o|substituted constant variable: a4006 
o|inlining procedure: k4002 
o|inlining procedure: k4002 
o|substituted constant variable: a4021 
o|substituted constant variable: a4032 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|inlining procedure: k4028 
o|inlining procedure: k4028 
o|substituted constant variable: a4043 
o|substituted constant variable: a4054 
o|inlining procedure: k4050 
o|inlining procedure: k4050 
o|substituted constant variable: a4065 
o|inlining procedure: k4075 
o|inlining procedure: k4090 
o|inlining procedure: k4120 
o|contracted procedure: "(chicken-uninstall.scm:193) g11831192" 
o|inlining procedure: k4120 
o|inlining procedure: k4090 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4171 
o|inlining procedure: k4075 
o|substituted constant variable: a4189 
o|substituted constant variable: a4186 
o|substituted constant variable: a4192 
o|substituted constant variable: a4194 
o|inlining procedure: k4195 
o|inlining procedure: k4195 
o|substituted constant variable: a4199 
o|inlining procedure: k4220 
o|inlining procedure: k4220 
o|replaced variables: 406 
o|removed binding forms: 187 
o|substituted constant variable: r21414280 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r34214302 
o|removed side-effect free assignment to unused variable: main#short-options 
o|substituted constant variable: prop811 
o|substituted constant variable: r37614322 
o|substituted constant variable: code1005 
o|substituted constant variable: r37004326 
o|substituted constant variable: r19904334 
o|contracted procedure: "(chicken-uninstall.scm:75) main#any" 
o|substituted constant variable: r19324275 
o|contracted procedure: "(chicken-uninstall.scm:192) main#every" 
o|replaced variables: 73 
o|removed binding forms: 376 
o|removed conditional forms: 1 
o|inlining procedure: k3798 
o|inlining procedure: k3926 
o|inlining procedure: k3091 
o|inlining procedure: k3052 
o|inlining procedure: k3052 
o|inlining procedure: k3926 
o|inlining procedure: k2966 
o|inlining procedure: "(chicken-uninstall.scm:161) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:169) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:195) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:196) main#usage" 
o|replaced variables: 6 
o|removed binding forms: 67 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r30924421 
o|substituted constant variable: r30924421 
o|substituted constant variable: code11304469 
o|substituted constant variable: code11304474 
o|substituted constant variable: code11304481 
o|inlining procedure: "(mini-srfi-1.scm:82) a4154" 
o|substituted constant variable: code11304488 
o|replaced variables: 7 
o|removed binding forms: 13 
o|removed conditional forms: 1 
o|replaced variables: 2 
o|removed binding forms: 15 
o|removed binding forms: 2 
o|simplifications: ((let . 15) (if . 14) (##core#call . 99)) 
o|  call simplifications:
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#memq
o|    scheme#string
o|    scheme#equal?
o|    scheme#list	4
o|    ##sys#setslot	4
o|    scheme#eof-object?
o|    scheme#string->list	2
o|    scheme#list->string
o|    scheme#char-whitespace?
o|    scheme#string=?	4
o|    scheme#assq
o|    scheme#cdr
o|    scheme#not	4
o|    scheme#null?	11
o|    scheme#car	9
o|    scheme#eq?	4
o|    ##sys#check-list	5
o|    scheme#pair?	7
o|    ##sys#slot	21
o|    scheme#cons	13
o|contracted procedure: k2131 
o|contracted procedure: k2143 
o|contracted procedure: k2161 
o|contracted procedure: k2169 
o|contracted procedure: k4248 
o|contracted procedure: k2866 
o|contracted procedure: k3407 
o|contracted procedure: k2996 
o|contracted procedure: k2978 
o|contracted procedure: k2984 
o|contracted procedure: k3420 
o|contracted procedure: k3830 
o|contracted procedure: k3839 
o|contracted procedure: k3848 
o|contracted procedure: k3965 
o|contracted procedure: k3891 
o|contracted procedure: k3911 
o|contracted procedure: k3923 
o|contracted procedure: k3933 
o|contracted procedure: k3937 
o|contracted procedure: k3780 
o|contracted procedure: k3795 
o|contracted procedure: k3805 
o|contracted procedure: k3809 
o|contracted procedure: k38054414 
o|contracted procedure: k39334420 
o|contracted procedure: k3100 
o|contracted procedure: k3085 
o|contracted procedure: k3088 
o|contracted procedure: k3091 
o|contracted procedure: k39334429 
o|contracted procedure: k3609 
o|contracted procedure: k3702 
o|contracted procedure: k3728 
o|contracted procedure: k3708 
o|contracted procedure: k3626 
o|contracted procedure: k3641 
o|contracted procedure: k3645 
o|contracted procedure: k3653 
o|contracted procedure: k3665 
o|contracted procedure: k3668 
o|contracted procedure: k3671 
o|contracted procedure: k3679 
o|contracted procedure: k3687 
o|contracted procedure: k3441 
o|contracted procedure: k2095 
o|contracted procedure: k2098 
o|contracted procedure: k2108 
o|contracted procedure: k2020 
o|contracted procedure: k2046 
o|contracted procedure: k2026 
o|contracted procedure: k3460 
o|contracted procedure: k3476 
o|contracted procedure: k1992 
o|contracted procedure: k1999 
o|contracted procedure: k3488 
o|contracted procedure: k3491 
o|contracted procedure: k3494 
o|contracted procedure: k3502 
o|contracted procedure: k3510 
o|contracted procedure: k1934 
o|contracted procedure: k1949 
o|contracted procedure: k3537 
o|contracted procedure: k3540 
o|contracted procedure: k3543 
o|contracted procedure: k3551 
o|contracted procedure: k3559 
o|contracted procedure: k2963 
o|contracted procedure: k3981 
o|contracted procedure: k3987 
o|contracted procedure: k3993 
o|contracted procedure: k4066 
o|contracted procedure: k4183 
o|contracted procedure: k4078 
o|contracted procedure: k4168 
o|contracted procedure: k4084 
o|contracted procedure: k4104 
o|contracted procedure: k4123 
o|contracted procedure: k4145 
o|contracted procedure: k4141 
o|contracted procedure: k4126 
o|contracted procedure: k4129 
o|contracted procedure: k4137 
o|contracted procedure: k1897 
o|contracted procedure: k1919 
o|contracted procedure: k1915 
o|contracted procedure: k1906 
o|contracted procedure: k4179 
o|contracted procedure: k4262 
o|contracted procedure: k4266 
o|contracted procedure: k4270 
o|simplifications: ((let . 35)) 
o|removed binding forms: 91 
o|substituted constant variable: r4263 
o|substituted constant variable: r4267 
o|substituted constant variable: r4271 
o|removed binding forms: 3 
o|direct leaf routine/allocation: a3525 0 
o|direct leaf routine/allocation: loop253 0 
o|contracted procedure: "(mini-srfi-1.scm:88) k1937" 
o|contracted procedure: k4093 
o|converted assignments to bindings: (loop253) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: loop266 0 
o|converted assignments to bindings: (loop266) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k3996 map-loop11771202 loop1136 map-loop943960 g976985 map-loop970988 loop285 main#filter loop292 loop312 map-loop10111036 left1060 loop1043 main#repo-path k3763 for-each-loop10731084 main#delete-installed-file for-each-loop11121124 k3417 foldr329332 g334335) 
o|calls to known targets: 58 
o|identified direct recursive calls: f_2138 1 
o|identified direct recursive calls: f_3697 2 
o|identified direct recursive calls: f_2015 2 
o|identified direct recursive calls: f_1987 1 
o|identified direct recursive calls: f_1929 1 
o|identified direct recursive calls: f_1895 1 
o|identified direct recursive calls: f_4118 1 
o|fast box initializations: 13 
o|fast global references: 30 
o|fast global assignments: 25 
o|dropping unused closure argument: f_1895 
o|dropping unused closure argument: f_2129 
o|dropping unused closure argument: f_3411 
o|dropping unused closure argument: f_3825 
*/
/* end of file */
