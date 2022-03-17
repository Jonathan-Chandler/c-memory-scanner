/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-profile.c
   uses: eval data-structures internal posix file library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1384)
static void C_fcall f_1384(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_fcall f_1894(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word *av) C_noret;
C_noret_decl(f_2561)
static void C_fcall f_2561(C_word t0) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2608)
static void C_fcall f_2608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2618)
static void C_fcall f_2618(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_fcall f_2658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_fcall f_2677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word *av) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word *av) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word *av) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word *av) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word *av) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_fcall f_3029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3085)
static void C_fcall f_3085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3095)
static void C_fcall f_3095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3212)
static void C_fcall f_3212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word *av) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word *av) C_noret;
C_noret_decl(f_3292)
static void C_fcall f_3292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word *av) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word *av) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word *av) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word *av) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_3385)
static void C_fcall f_3385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word *av) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word *av) C_noret;
C_noret_decl(f_3408)
static void C_fcall f_3408(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3415)
static void C_fcall f_3415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3482)
static void C_fcall f_3482(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3552)
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3640)
static void C_fcall f_3640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_fcall f_3683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_fcall f_3744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_fcall f_3769(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3800)
static void C_fcall f_3800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3834)
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va4340)
static void C_fcall va4340(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1384)
static void C_ccall trf_1384(C_word c,C_word *av) C_noret;
static void C_ccall trf_1384(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1384(t0,t1,t2);}

C_noret_decl(trf_1894)
static void C_ccall trf_1894(C_word c,C_word *av) C_noret;
static void C_ccall trf_1894(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1894(t0,t1,t2);}

C_noret_decl(trf_2561)
static void C_ccall trf_2561(C_word c,C_word *av) C_noret;
static void C_ccall trf_2561(C_word c,C_word *av){
C_word t0=av[0];
f_2561(t0);}

C_noret_decl(trf_2608)
static void C_ccall trf_2608(C_word c,C_word *av) C_noret;
static void C_ccall trf_2608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2608(t0,t1,t2);}

C_noret_decl(trf_2618)
static void C_ccall trf_2618(C_word c,C_word *av) C_noret;
static void C_ccall trf_2618(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2618(t0,t1);}

C_noret_decl(trf_2658)
static void C_ccall trf_2658(C_word c,C_word *av) C_noret;
static void C_ccall trf_2658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2658(t0,t1);}

C_noret_decl(trf_2677)
static void C_ccall trf_2677(C_word c,C_word *av) C_noret;
static void C_ccall trf_2677(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2677(t0,t1);}

C_noret_decl(trf_2939)
static void C_ccall trf_2939(C_word c,C_word *av) C_noret;
static void C_ccall trf_2939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2939(t0,t1,t2);}

C_noret_decl(trf_3029)
static void C_ccall trf_3029(C_word c,C_word *av) C_noret;
static void C_ccall trf_3029(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3029(t0,t1,t2);}

C_noret_decl(trf_3085)
static void C_ccall trf_3085(C_word c,C_word *av) C_noret;
static void C_ccall trf_3085(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3085(t0,t1,t2,t3);}

C_noret_decl(trf_3095)
static void C_ccall trf_3095(C_word c,C_word *av) C_noret;
static void C_ccall trf_3095(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3095(t0,t1);}

C_noret_decl(trf_3212)
static void C_ccall trf_3212(C_word c,C_word *av) C_noret;
static void C_ccall trf_3212(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3212(t0,t1,t2);}

C_noret_decl(trf_3292)
static void C_ccall trf_3292(C_word c,C_word *av) C_noret;
static void C_ccall trf_3292(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3292(t0,t1);}

C_noret_decl(trf_3385)
static void C_ccall trf_3385(C_word c,C_word *av) C_noret;
static void C_ccall trf_3385(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3385(t0,t1,t2);}

C_noret_decl(trf_3408)
static void C_ccall trf_3408(C_word c,C_word *av) C_noret;
static void C_ccall trf_3408(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3408(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3415)
static void C_ccall trf_3415(C_word c,C_word *av) C_noret;
static void C_ccall trf_3415(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3415(t0,t1);}

C_noret_decl(trf_3482)
static void C_ccall trf_3482(C_word c,C_word *av) C_noret;
static void C_ccall trf_3482(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3482(t0,t1,t2);}

C_noret_decl(trf_3528)
static void C_ccall trf_3528(C_word c,C_word *av) C_noret;
static void C_ccall trf_3528(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3528(t0,t1,t2,t3);}

C_noret_decl(trf_3552)
static void C_ccall trf_3552(C_word c,C_word *av) C_noret;
static void C_ccall trf_3552(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3552(t0,t1,t2,t3);}

C_noret_decl(trf_3592)
static void C_ccall trf_3592(C_word c,C_word *av) C_noret;
static void C_ccall trf_3592(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3592(t0,t1,t2,t3);}

C_noret_decl(trf_3640)
static void C_ccall trf_3640(C_word c,C_word *av) C_noret;
static void C_ccall trf_3640(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3640(t0,t1,t2);}

C_noret_decl(trf_3683)
static void C_ccall trf_3683(C_word c,C_word *av) C_noret;
static void C_ccall trf_3683(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3683(t0,t1,t2);}

C_noret_decl(trf_3744)
static void C_ccall trf_3744(C_word c,C_word *av) C_noret;
static void C_ccall trf_3744(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3744(t0,t1,t2);}

C_noret_decl(trf_3769)
static void C_ccall trf_3769(C_word c,C_word *av) C_noret;
static void C_ccall trf_3769(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3769(t0,t1);}

C_noret_decl(trf_3800)
static void C_ccall trf_3800(C_word c,C_word *av) C_noret;
static void C_ccall trf_3800(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3800(t0,t1,t2);}

C_noret_decl(trf_3834)
static void C_ccall trf_3834(C_word c,C_word *av) C_noret;
static void C_ccall trf_3834(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3834(t0,t1,t2,t3);}

C_noret_decl(trva4340)
static void C_ccall trva4340(C_word c,C_word *av) C_noret;
static void C_ccall trva4340(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va4340(t0,t1);}

/* k1254 */
static void C_ccall f_1256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1256,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1257 in k1254 */
static void C_ccall f_1259(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1259,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3895,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:29: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1260 in k1257 in k1254 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1262,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1265,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1268,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1271,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1274(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_1274,c,av);}
a=C_alloc(24);
t2=C_mutate(&lf[1] /* (set! main#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1384,tmp=(C_word)a,a+=2,tmp));
t3=lf[2] /* main#file */ =C_SCHEME_FALSE;;
t4=lf[3] /* main#no-unused */ =C_SCHEME_FALSE;;
t5=lf[4] /* main#seconds-digits */ =C_fix(3);;
t6=lf[5] /* main#average-digits */ =C_fix(3);;
t7=lf[6] /* main#percent-digits */ =C_fix(3);;
t8=lf[7] /* main#top */ =C_fix(0);;
t9=C_mutate(&lf[8] /* (set! main#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2561,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[16] /* (set! main#sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2822,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[17] /* (set! main#sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2856,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[18] /* (set! main#sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2885,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[19] /* (set! main#sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2913,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
t15=C_mutate(&lf[23] /* (set! main#read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2997,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[32] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3146,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[35] /* (set! main#format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3212,tmp=(C_word)a,a+=2,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3893,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:262: chicken.process-context#command-line-arguments */
t20=C_fast_retrieve(lf[90]);{
C_word *av2=av;
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* main#take in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_1384(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1384,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1402,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k1400 in main#take in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1402,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr290 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_1894(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1894,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1923,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
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

/* k1921 in foldr290 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_1923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1923,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_greaterp(t2,C_fix(0));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_cons(&a,2,((C_word*)t0)[2],t1):t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* main#print-usage in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2561(C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_2561,1,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2572,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[11],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[6],C_text("main#percent-digits")),t4);
t6=C_a_i_cons(&a,2,lf[12],t5);
t7=C_a_i_cons(&a,2,C_retrieve2(lf[5],C_text("main#average-digits")),t6);
t8=C_a_i_cons(&a,2,lf[13],t7);
t9=C_a_i_cons(&a,2,C_retrieve2(lf[4],C_text("main#seconds-digits")),t8);
t10=C_a_i_cons(&a,2,lf[14],t9);
/* chicken-profile.scm:29: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t10;
tp(3,av2);}}

/* k2563 in main#print-usage in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2565,c,av);}
/* chicken-profile.scm:76: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
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

/* k2570 in main#print-usage in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2572,c,av);}
/* chicken-profile.scm:55: scheme#display */
t2=*((C_word*)lf[10]+1);{
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

/* loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2608(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_2608,3,t0,t1,t2);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2618,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
t4=t3;
f_2618(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:84: chicken.file#glob */
t5=C_fast_retrieve(lf[68]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2658,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2677,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t3,lf[73]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:104: print-usage */
f_2561(t11);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[76]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:106: chicken.platform#chicken-version */
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[79]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2733,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:109: chicken.platform#chicken-version */
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[80]))){
t12=lf[3] /* main#no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[81]))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:112: next-number */
t13=t8;
f_2677(t13,t12);}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[82]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[16],C_text("main#sort-by-calls")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[83]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[84]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[18],C_text("main#sort-by-avg")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[85]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[19],C_text("main#sort-by-name")));
t13=t11;{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
f_2700(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[86]))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:117: next-arg */
t13=((C_word*)t7)[1];
f_2658(t13,t12);}
else{
t12=C_block_size(t3);
t13=C_fixnum_greaterp(t12,C_fix(1));
t14=(C_truep(t13)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t3,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t14)){
/* chicken-profile.scm:119: chicken.base#error */
t15=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t11;
av2[2]=lf[89];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
/* chicken-profile.scm:120: print-usage */
f_2561(t11);}
else{
t15=C_mutate(&lf[2] /* (set! main#file ...) */,t3);
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}}}}}}}}}}}}}}

/* k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2618(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_2618,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:205: chicken.base#print */
t3=*((C_word*)lf[51]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
av2[3]=C_retrieve2(lf[2],C_text("main#file"));
av2[4]=lf[64];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2625,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:86: chicken.base#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2643,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:87: chicken.sort#sort */
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2626 in k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2628,c,av);}
t2=C_mutate(&lf[2] /* (set! main#file ...) */,t1);
t3=((C_word*)t0)[2];
f_2618(t3,t2);}

/* k2639 in k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2641,c,av);}
t2=C_i_car(t1);
t3=C_mutate(&lf[2] /* (set! main#file ...) */,t2);
t4=((C_word*)t0)[2];
f_2618(t4,t3);}

/* a2642 in k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2643,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:89: chicken.file.posix#file-modification-time */
t5=C_fast_retrieve(lf[67]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2646 in a2642 in k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2648,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:90: chicken.file.posix#file-modification-time */
t3=C_fast_retrieve(lf[67]);{
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

/* k2650 in k2646 in a2642 in k2623 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2652,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_integer_greaterp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* next-arg in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2658,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:96: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* next-number in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2677,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2681,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:101: next-arg */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2658(t4,t3);}

/* k2679 in next-number in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2681,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_greaterp(t1,C_fix(0)))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2695 in next-number in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2697,c,av);}
/* chicken-profile.scm:101: scheme#string->number */
t2=*((C_word*)lf[72]+1);{
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

/* k2698 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2700,c,av);}
/* chicken-profile.scm:122: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2608(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2716 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2718,c,av);}
/* chicken-profile.scm:107: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2723 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2725,c,av);}
/* chicken-profile.scm:106: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2731 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2733,c,av);}
/* chicken-profile.scm:110: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2738 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2740,c,av);}
/* chicken-profile.scm:109: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k2753 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2755,c,av);}
t2=C_mutate(&lf[7] /* (set! main#top ...) */,t1);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2608(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2791(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2791,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_i_string_length(t1);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:159: arg-digit */
t6=t2;
f_2939(t6,t5,C_fix(0));}
else{
/* chicken-profile.scm:162: chicken.base#error */
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* main#sort-by-calls in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2822,c,av);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-time in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2856(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2856,c,av);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
t6=C_i_nequalp(t4,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?C_i_greaterp(C_i_cadr(t2),C_i_cadr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* main#sort-by-avg in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2885,c,av);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-name in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2913,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2921,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:146: scheme#symbol->string */
t5=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2919 in main#sort-by-name in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2921,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:146: scheme#symbol->string */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2923 in k2919 in main#sort-by-name in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2925,c,av);}
/* chicken-profile.scm:146: scheme#string<? */
t2=*((C_word*)lf[20]+1);{
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

/* arg-digit in k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2939,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_fixnum_difference(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2951,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:154: scheme#<= */{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=C_fix(0);
av2[3]=t5;
av2[4]=C_fix(9);
C_less_or_equal_p(5,av2);}}

/* k2949 in arg-digit in k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2951,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_integer_equalp(((C_word*)t0)[3],C_fix(9)))?C_fix(8):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:156: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2971 in k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2973,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[4] /* (set! main#seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:160: arg-digit */
t4=((C_word*)t0)[5];
f_2939(t4,t3,C_fix(1));}

/* k2975 in k2971 in k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2977,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[5] /* (set! main#average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:161: arg-digit */
t4=((C_word*)t0)[5];
f_2939(t4,t3,C_fix(2));}

/* k2979 in k2975 in k2971 in k2789 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2981,c,av);}
t2=C_mutate(&lf[6] /* (set! main#percent-digits ...) */,t1);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2608(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_2997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2997,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:165: scheme#make-vector */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(3001);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3001,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:169: scheme#read */
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3004,c,av);}
a=C_alloc(9);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:lf[24]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
/* chicken-profile.scm:171: scheme#read */
t6=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
f_3027(2,av2);}}}

/* k3008 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3010(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(10);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:179: chicken.internal#hash-table-for-each */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k3011 in k3008 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3013,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3017 in k3008 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3018(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3018,c,av);}
a=C_alloc(6);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_a_i_cons(&a,2,t2,t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3027(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3027,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3029,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3029(t5,((C_word*)t0)[3],t1);}

/* doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3029(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3029,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3068,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t7,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* chicken-profile.scm:176: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[4];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_car(t2);
tp(4,av2);}}}

/* k3037 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3039,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:171: scheme#read */
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3044 in k3037 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3046,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3029(t2,((C_word*)t0)[3],t1);}

/* k3066 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3068(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3068,c,av);}
a=C_alloc(12);
t2=(C_truep(t1)?t1:lf[27]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_check_list_2(t2,lf[28]);
t5=C_i_check_list_2(t3,lf[28]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3085(t10,t6,t2,t3);}

/* k3081 in k3066 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3083,c,av);}
/* chicken-profile.scm:173: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop651 in k3066 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3085(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_3085,4,t0,t1,t2,t3);}
a=C_alloc(39);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_s_a_i_plus(&a,2,t7,t8);
t10=t6;
f_3095(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_3095(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_3095(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3093 in map-loop651 in k3066 in doloop646 in k3025 in k3002 in k2999 in main#read-profile in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3095(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3095,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3085(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* main#format-string in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3146(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3146,c,av);}
a=C_alloc(5);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_make_character(32):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_string_length(t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3165,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_fixnum_difference(t3,t10);
/* chicken-profile.scm:187: scheme#make-string */
t13=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t11;
av2[2]=C_i_fixnum_max(C_fix(0),t12);
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k3163 in main#format-string in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3165,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3212(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3212,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3216,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:193: scheme#truncate */
t6=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3216,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3223(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,2)))){
C_save_and_reclaim((void *)f_3223,c,av);}
a=C_alloc(48);
t2=C_i_greaterp(((C_word*)t0)[2],C_fix(0));
t3=(C_truep(t2)?lf[36]:lf[37]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va4340,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=t8;
va4340(t9,C_s_a_i_minus(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k3229 in k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3231,c,av);}
/* chicken-profile.scm:194: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
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

/* k3233 in k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_3235,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* chicken-profile.scm:197: scheme#substring */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(1);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3241 in k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3243,c,av);}
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3245 in k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3247,c,av);}
/* chicken-profile.scm:199: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
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

/* k3257 */
static void C_ccall f_3259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3259,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:200: scheme#truncate */
t3=*((C_word*)lf[42]+1);{
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

/* k3265 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3267,c,av);}
/* chicken-profile.scm:193: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
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

/* k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3273,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:206: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],C_text("main#file"));
av2[3]=C_retrieve2(lf[23],C_text("main#read-profile"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3276(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3276,c,av);}
a=C_alloc(10);
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_i_check_list_2(t3,lf[45]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3834,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3834(t9,t5,t3,C_fix(0));}

/* k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3286(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3286,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3800,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3800(t12,t8,((C_word*)t0)[3]);}

/* k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3289(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3289,c,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3731,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:230: scheme#< */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=C_fix(0);
av2[3]=C_retrieve2(lf[7],C_text("main#top"));
av2[4]=C_i_length(((C_word*)t3)[1]);
C_lessp(5,av2);}}

/* k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3292(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3292,2,t0,t1);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[3],C_text("main#no-unused")))){
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[59]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=((C_word*)t10)[1];
f_1894(t12,t6,t7);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3359(2,av2);}}}

/* k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3317,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3321,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[9]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[57];
f_3321(2,av2);}}
else{
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(10);
tp(4,av2);}}}

/* k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3321,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3325,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3343,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3323 in k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3325,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3337,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3327 in k3323 in k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3329,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-profile.scm:241: format-real */
f_3212(t2,((C_word*)t0)[9],C_retrieve2(lf[6],C_text("main#percent-digits")));}

/* k3331 in k3327 in k3323 in k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3333(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3333,c,av);}
a=C_alloc(18);
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_3683(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[9],C_fix(1)));}

/* k3335 in k3323 in k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3337,c,av);}
/* chicken-profile.scm:240: format-real */
f_3212(((C_word*)t0)[2],t1,C_retrieve2(lf[5],C_text("main#average-digits")));}

/* k3341 in k3319 in k3315 in map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3343,c,av);}
/* chicken-profile.scm:239: format-real */
f_3212(((C_word*)t0)[2],t1,C_retrieve2(lf[4],C_text("main#seconds-digits")));}

/* k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3359(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3359,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3683(t7,t3,t1);}

/* k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3365(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_3365,c,av);}
a=C_alloc(36);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[46],lf[47],lf[48],lf[49],lf[50]);
t4=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t5;
av2[2]=C_fix(2);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3374(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_3374,c,av);}
a=C_alloc(30);
t2=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3383,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3552,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3552(t8,t4,t3,t2);}

/* k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3383,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3385,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:256: print-row */
t4=t2;
f_3385(t4,t3,((C_word*)t0)[6]);}

/* print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3385(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,5)))){
C_save_and_reclaim_args((void *)trf_3385,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[32],C_text("main#format-string"));
t9=C_i_check_list_2(t2,lf[28]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3406,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3408,a[2]=t6,a[3]=t13,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3408(t15,t11,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3391 in print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3393,c,av);}
/* chicken-profile.scm:255: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k3404 in print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3406,c,av);}
/* chicken-profile.scm:255: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[52]);{
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

/* map-loop908 in print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3408(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3408,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_3415(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3415(t6,C_SCHEME_FALSE);}}

/* k3413 in map-loop908 in print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_fcall f_3415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3415,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-profile.scm:255: g914 */
t3=C_retrieve2(lf[32],C_text("main#format-string"));{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[5],C_fix(0));
av2[3]=C_slot(((C_word*)t0)[6],C_fix(0));
av2[4]=C_slot(((C_word*)t0)[7],C_fix(0));
f_3146(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3439 in k3413 in map-loop908 in print-row in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in ... */
static void C_ccall f_3441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3441,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3408(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3471(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3471,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3507,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[5],lf[45]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3528(t9,t5,((C_word*)t0)[5],C_fix(0));}

/* k3472 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3474(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3474,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[53]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3482,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3482(t7,((C_word*)t0)[4],t2);}

/* for-each-loop897 in k3472 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_fcall f_3482(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3482,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:260: g898 */
t4=((C_word*)t0)[3];
f_3385(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3490 in for-each-loop897 in k3472 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in ... */
static void C_ccall f_3492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3492,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3482(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3505 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3507,c,av);}
/* chicken-profile.scm:257: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k3516 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3518(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_3518,c,av);}
a=C_alloc(39);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
t4=C_s_a_u_i_integer_times(&a,2,C_fix(2),t3);
t5=C_s_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:257: scheme#make-string */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_make_character(45);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* foldl947 in k3469 in k3381 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_3528,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_s_a_i_plus(&a,2,t3,t5);
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t18;
C_word t19;
C_word t20;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,0,3)))){
C_save_and_reclaim_args((void *)trf_3552,4,t0,t1,t2,t3);}
a=C_alloc(28);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3675,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t6,lf[28]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3581,a[2]=t3,a[3]=t9,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3640,a[2]=t13,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_3640(t20,t16,t6);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3579 in foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3581,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[28]);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3592(t7,((C_word*)t0)[5],t1,((C_word*)t0)[2]);}

/* map-loop837 in k3579 in foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3592,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:251: g843 */
t7=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3619 in map-loop837 in k3579 in foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3621,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3592(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop858 in foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3640(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3640,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
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

/* k3673 in foldl824 in k3372 in k3363 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3675,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3552(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop784 in k3357 in k3290 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3683(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3683,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_i_caddr(t3);
t6=C_i_cadddr(t3);
t7=C_i_cddddr(t3);
t8=C_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t8,a[7]=t6,a[8]=t5,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-profile.scm:237: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t9;
av2[2]=C_i_car(t3);
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3729 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3731,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:231: take */
f_1384(t2,((C_word*)((C_word*)t0)[2])[1],C_retrieve2(lf[7],C_text("main#top")));}
else{
t2=((C_word*)t0)[3];
f_3292(t2,C_SCHEME_UNDEFINED);}}

/* k3733 in k3729 in k3287 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3735,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3292(t3,t2);}

/* g752 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3744,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3762,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
if(C_truep(C_i_greaterp(t3,C_fix(0)))){
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_3762(2,av2);}}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_3762(2,av2);}}}

/* k3760 in g752 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3762(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3762,c,av);}
a=C_alloc(8);
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3769,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t4=t3;
f_3769(t4,C_SCHEME_FALSE);}}

/* k3767 in k3760 in g752 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3769(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3769,2,t0,t1);}
a=C_alloc(6);
t2=(C_truep(t1)?C_a_i_list2(&a,2,((C_word*)t0)[2],t1):C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0)));
/* chicken-profile.scm:219: scheme#append */
t3=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3780 in k3760 in g752 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3782,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_3769(t2,C_s_a_i_times(&a,2,t1,C_fix(100)));}

/* k3796 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3798,c,av);}
/* chicken-profile.scm:217: chicken.sort#sort */
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
av2[3]=C_retrieve2(lf[22],C_text("main#sort-by"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop746 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3800,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:217: g752 */
t4=((C_word*)t0)[4];
f_3744(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3823 in map-loop746 in k3284 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3825(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3825,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3800(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* foldl728 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3834,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_eqp(((C_word*)t0)[2],lf[24]);
t6=(C_truep(t5)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3863,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3872,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:213: g735 */
t8=t6;{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3853 in foldl728 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3855,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3834(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3863 in foldl728 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3863,c,av);}
/* chicken-profile.scm:214: scheme#max */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_i_caddr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f_3872 in foldl728 in k3274 in k3271 in k2616 in loop in k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3872,c,av);}
a=C_alloc(29);
t4=C_i_caddr(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_s_a_i_plus(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3881 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3887 in k3881 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3889,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3891 in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_ccall f_3893(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3893,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2608(t5,((C_word*)t0)[2],t1);}

/* a3894 in k1257 in k1254 */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3895,c,av);}
/* chicken-profile.scm:29: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t1;
av2[2]=lf[92];
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
if(C_unlikely(!C_demand_2(307))){
C_save(t1);
C_rereclaim2(307*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[9]=C_h_intern(&lf[9],17, C_text("chicken.base#exit"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\001\321Usage: chicken-profile [OPTION ...] [FILENAME ...]\012\012 -sort-by-calls        "
"    sort output by call frequency\012 -sort-by-time             sort output by proc"
"edure execution time\012 -sort-by-avg              sort output by average procedure"
" execution time\012 -sort-by-name             sort output alphabetically by procedu"
"re name\012 -decimals DDD             set number of decimals for seconds, average a"
"nd\012                           percent columns (three digits, default: "));
lf[15]=C_h_intern(&lf[15],21, C_text("##sys#print-to-string"));
lf[20]=C_h_intern(&lf[20],15, C_text("scheme#string<\077"));
lf[21]=C_h_intern(&lf[21],21, C_text("scheme#symbol->string"));
lf[24]=C_h_intern(&lf[24],12, C_text("instrumented"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.internal#hash-table-for-each"));
lf[26]=C_h_intern(&lf[26],11, C_text("scheme#read"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016"));
lf[28]=C_h_intern(&lf[28],3, C_text("map"));
lf[29]=C_h_intern(&lf[29],32, C_text("chicken.internal#hash-table-set!"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.internal#hash-table-ref"));
lf[31]=C_h_intern(&lf[31],18, C_text("scheme#make-vector"));
lf[33]=C_h_intern(&lf[33],19, C_text("##sys#string-append"));
lf[34]=C_h_intern(&lf[34],18, C_text("scheme#make-string"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_h_intern(&lf[39],16, C_text("scheme#substring"));
lf[40]=C_h_intern(&lf[40],20, C_text("##sys#number->string"));
lf[41]=C_h_intern(&lf[41],21, C_text("scheme#inexact->exact"));
lf[42]=C_h_intern(&lf[42],15, C_text("scheme#truncate"));
lf[43]=C_h_intern(&lf[43],11, C_text("scheme#expt"));
lf[44]=C_h_intern(&lf[44],34, C_text("chicken.base#implicit-exit-handler"));
lf[45]=C_h_intern(&lf[45],5, C_text("foldl"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011procedure"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005calls"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007seconds"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007average"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007percent"));
lf[51]=C_h_intern(&lf[51],18, C_text("chicken.base#print"));
lf[52]=C_h_intern(&lf[52],33, C_text("chicken.string#string-intersperse"));
lf[53]=C_h_intern(&lf[53],8, C_text("for-each"));
lf[54]=C_h_intern(&lf[54],10, C_text("scheme#max"));
lf[55]=C_h_intern(&lf[55],17, C_text("##sys#make-string"));
lf[56]=C_h_intern(&lf[56],9, C_text("##sys#/-2"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010overflow"));
lf[58]=C_h_intern(&lf[58],20, C_text("##sys#symbol->string"));
lf[59]=C_h_intern(&lf[59],5, C_text("foldr"));
lf[60]=C_h_intern(&lf[60],13, C_text("scheme#append"));
lf[61]=C_h_intern(&lf[61],17, C_text("chicken.sort#sort"));
lf[62]=C_h_intern(&lf[62],27, C_text("scheme#with-input-from-file"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011reading `"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\047 ...\012"));
lf[65]=C_h_intern(&lf[65],18, C_text("chicken.base#error"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021no PROFILEs found"));
lf[67]=C_h_intern(&lf[67],41, C_text("chicken.file.posix#file-modification-time"));
lf[68]=C_h_intern(&lf[68],17, C_text("chicken.file#glob"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011PROFILE.\052"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032missing argument to option"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid argument to option"));
lf[72]=C_h_intern(&lf[72],21, C_text("scheme#string->number"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032chicken-profile - Version "));
lf[78]=C_h_intern(&lf[78],32, C_text("chicken.platform#chicken-version"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-release"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-no-unused"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-top"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016-sort-by-calls"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-time"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-sort-by-avg"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-name"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011-decimals"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[90]=C_h_intern(&lf[90],46, C_text("chicken.process-context#command-line-arguments"));
lf[91]=C_h_intern(&lf[91],30, C_text("##sys#register-compiled-module"));
lf[92]=C_h_intern(&lf[92],4, C_text("main"));
lf[93]=C_h_intern(&lf[93],22, C_text("##sys#with-environment"));
C_register_lf2(lf,94,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va4340 in k3221 in k3214 in main#format-real in k1272 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 */
static void C_fcall va4340(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva4340,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_minus(&a,2,t1,C_fix(-1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3259,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:201: scheme#expt */
t4=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[125] = {
{C_text("f_1256:chicken_2dprofile_2escm"),(void*)f_1256},
{C_text("f_1259:chicken_2dprofile_2escm"),(void*)f_1259},
{C_text("f_1262:chicken_2dprofile_2escm"),(void*)f_1262},
{C_text("f_1265:chicken_2dprofile_2escm"),(void*)f_1265},
{C_text("f_1268:chicken_2dprofile_2escm"),(void*)f_1268},
{C_text("f_1271:chicken_2dprofile_2escm"),(void*)f_1271},
{C_text("f_1274:chicken_2dprofile_2escm"),(void*)f_1274},
{C_text("f_1384:chicken_2dprofile_2escm"),(void*)f_1384},
{C_text("f_1402:chicken_2dprofile_2escm"),(void*)f_1402},
{C_text("f_1894:chicken_2dprofile_2escm"),(void*)f_1894},
{C_text("f_1923:chicken_2dprofile_2escm"),(void*)f_1923},
{C_text("f_2561:chicken_2dprofile_2escm"),(void*)f_2561},
{C_text("f_2565:chicken_2dprofile_2escm"),(void*)f_2565},
{C_text("f_2572:chicken_2dprofile_2escm"),(void*)f_2572},
{C_text("f_2608:chicken_2dprofile_2escm"),(void*)f_2608},
{C_text("f_2618:chicken_2dprofile_2escm"),(void*)f_2618},
{C_text("f_2625:chicken_2dprofile_2escm"),(void*)f_2625},
{C_text("f_2628:chicken_2dprofile_2escm"),(void*)f_2628},
{C_text("f_2641:chicken_2dprofile_2escm"),(void*)f_2641},
{C_text("f_2643:chicken_2dprofile_2escm"),(void*)f_2643},
{C_text("f_2648:chicken_2dprofile_2escm"),(void*)f_2648},
{C_text("f_2652:chicken_2dprofile_2escm"),(void*)f_2652},
{C_text("f_2658:chicken_2dprofile_2escm"),(void*)f_2658},
{C_text("f_2677:chicken_2dprofile_2escm"),(void*)f_2677},
{C_text("f_2681:chicken_2dprofile_2escm"),(void*)f_2681},
{C_text("f_2697:chicken_2dprofile_2escm"),(void*)f_2697},
{C_text("f_2700:chicken_2dprofile_2escm"),(void*)f_2700},
{C_text("f_2718:chicken_2dprofile_2escm"),(void*)f_2718},
{C_text("f_2725:chicken_2dprofile_2escm"),(void*)f_2725},
{C_text("f_2733:chicken_2dprofile_2escm"),(void*)f_2733},
{C_text("f_2740:chicken_2dprofile_2escm"),(void*)f_2740},
{C_text("f_2755:chicken_2dprofile_2escm"),(void*)f_2755},
{C_text("f_2791:chicken_2dprofile_2escm"),(void*)f_2791},
{C_text("f_2822:chicken_2dprofile_2escm"),(void*)f_2822},
{C_text("f_2856:chicken_2dprofile_2escm"),(void*)f_2856},
{C_text("f_2885:chicken_2dprofile_2escm"),(void*)f_2885},
{C_text("f_2913:chicken_2dprofile_2escm"),(void*)f_2913},
{C_text("f_2921:chicken_2dprofile_2escm"),(void*)f_2921},
{C_text("f_2925:chicken_2dprofile_2escm"),(void*)f_2925},
{C_text("f_2939:chicken_2dprofile_2escm"),(void*)f_2939},
{C_text("f_2951:chicken_2dprofile_2escm"),(void*)f_2951},
{C_text("f_2973:chicken_2dprofile_2escm"),(void*)f_2973},
{C_text("f_2977:chicken_2dprofile_2escm"),(void*)f_2977},
{C_text("f_2981:chicken_2dprofile_2escm"),(void*)f_2981},
{C_text("f_2997:chicken_2dprofile_2escm"),(void*)f_2997},
{C_text("f_3001:chicken_2dprofile_2escm"),(void*)f_3001},
{C_text("f_3004:chicken_2dprofile_2escm"),(void*)f_3004},
{C_text("f_3010:chicken_2dprofile_2escm"),(void*)f_3010},
{C_text("f_3013:chicken_2dprofile_2escm"),(void*)f_3013},
{C_text("f_3018:chicken_2dprofile_2escm"),(void*)f_3018},
{C_text("f_3027:chicken_2dprofile_2escm"),(void*)f_3027},
{C_text("f_3029:chicken_2dprofile_2escm"),(void*)f_3029},
{C_text("f_3039:chicken_2dprofile_2escm"),(void*)f_3039},
{C_text("f_3046:chicken_2dprofile_2escm"),(void*)f_3046},
{C_text("f_3068:chicken_2dprofile_2escm"),(void*)f_3068},
{C_text("f_3083:chicken_2dprofile_2escm"),(void*)f_3083},
{C_text("f_3085:chicken_2dprofile_2escm"),(void*)f_3085},
{C_text("f_3095:chicken_2dprofile_2escm"),(void*)f_3095},
{C_text("f_3146:chicken_2dprofile_2escm"),(void*)f_3146},
{C_text("f_3165:chicken_2dprofile_2escm"),(void*)f_3165},
{C_text("f_3212:chicken_2dprofile_2escm"),(void*)f_3212},
{C_text("f_3216:chicken_2dprofile_2escm"),(void*)f_3216},
{C_text("f_3223:chicken_2dprofile_2escm"),(void*)f_3223},
{C_text("f_3231:chicken_2dprofile_2escm"),(void*)f_3231},
{C_text("f_3235:chicken_2dprofile_2escm"),(void*)f_3235},
{C_text("f_3243:chicken_2dprofile_2escm"),(void*)f_3243},
{C_text("f_3247:chicken_2dprofile_2escm"),(void*)f_3247},
{C_text("f_3259:chicken_2dprofile_2escm"),(void*)f_3259},
{C_text("f_3267:chicken_2dprofile_2escm"),(void*)f_3267},
{C_text("f_3273:chicken_2dprofile_2escm"),(void*)f_3273},
{C_text("f_3276:chicken_2dprofile_2escm"),(void*)f_3276},
{C_text("f_3286:chicken_2dprofile_2escm"),(void*)f_3286},
{C_text("f_3289:chicken_2dprofile_2escm"),(void*)f_3289},
{C_text("f_3292:chicken_2dprofile_2escm"),(void*)f_3292},
{C_text("f_3317:chicken_2dprofile_2escm"),(void*)f_3317},
{C_text("f_3321:chicken_2dprofile_2escm"),(void*)f_3321},
{C_text("f_3325:chicken_2dprofile_2escm"),(void*)f_3325},
{C_text("f_3329:chicken_2dprofile_2escm"),(void*)f_3329},
{C_text("f_3333:chicken_2dprofile_2escm"),(void*)f_3333},
{C_text("f_3337:chicken_2dprofile_2escm"),(void*)f_3337},
{C_text("f_3343:chicken_2dprofile_2escm"),(void*)f_3343},
{C_text("f_3359:chicken_2dprofile_2escm"),(void*)f_3359},
{C_text("f_3365:chicken_2dprofile_2escm"),(void*)f_3365},
{C_text("f_3374:chicken_2dprofile_2escm"),(void*)f_3374},
{C_text("f_3383:chicken_2dprofile_2escm"),(void*)f_3383},
{C_text("f_3385:chicken_2dprofile_2escm"),(void*)f_3385},
{C_text("f_3393:chicken_2dprofile_2escm"),(void*)f_3393},
{C_text("f_3406:chicken_2dprofile_2escm"),(void*)f_3406},
{C_text("f_3408:chicken_2dprofile_2escm"),(void*)f_3408},
{C_text("f_3415:chicken_2dprofile_2escm"),(void*)f_3415},
{C_text("f_3441:chicken_2dprofile_2escm"),(void*)f_3441},
{C_text("f_3471:chicken_2dprofile_2escm"),(void*)f_3471},
{C_text("f_3474:chicken_2dprofile_2escm"),(void*)f_3474},
{C_text("f_3482:chicken_2dprofile_2escm"),(void*)f_3482},
{C_text("f_3492:chicken_2dprofile_2escm"),(void*)f_3492},
{C_text("f_3507:chicken_2dprofile_2escm"),(void*)f_3507},
{C_text("f_3518:chicken_2dprofile_2escm"),(void*)f_3518},
{C_text("f_3528:chicken_2dprofile_2escm"),(void*)f_3528},
{C_text("f_3552:chicken_2dprofile_2escm"),(void*)f_3552},
{C_text("f_3581:chicken_2dprofile_2escm"),(void*)f_3581},
{C_text("f_3592:chicken_2dprofile_2escm"),(void*)f_3592},
{C_text("f_3621:chicken_2dprofile_2escm"),(void*)f_3621},
{C_text("f_3640:chicken_2dprofile_2escm"),(void*)f_3640},
{C_text("f_3675:chicken_2dprofile_2escm"),(void*)f_3675},
{C_text("f_3683:chicken_2dprofile_2escm"),(void*)f_3683},
{C_text("f_3731:chicken_2dprofile_2escm"),(void*)f_3731},
{C_text("f_3735:chicken_2dprofile_2escm"),(void*)f_3735},
{C_text("f_3744:chicken_2dprofile_2escm"),(void*)f_3744},
{C_text("f_3762:chicken_2dprofile_2escm"),(void*)f_3762},
{C_text("f_3769:chicken_2dprofile_2escm"),(void*)f_3769},
{C_text("f_3782:chicken_2dprofile_2escm"),(void*)f_3782},
{C_text("f_3798:chicken_2dprofile_2escm"),(void*)f_3798},
{C_text("f_3800:chicken_2dprofile_2escm"),(void*)f_3800},
{C_text("f_3825:chicken_2dprofile_2escm"),(void*)f_3825},
{C_text("f_3834:chicken_2dprofile_2escm"),(void*)f_3834},
{C_text("f_3855:chicken_2dprofile_2escm"),(void*)f_3855},
{C_text("f_3863:chicken_2dprofile_2escm"),(void*)f_3863},
{C_text("f_3872:chicken_2dprofile_2escm"),(void*)f_3872},
{C_text("f_3883:chicken_2dprofile_2escm"),(void*)f_3883},
{C_text("f_3889:chicken_2dprofile_2escm"),(void*)f_3889},
{C_text("f_3893:chicken_2dprofile_2escm"),(void*)f_3893},
{C_text("f_3895:chicken_2dprofile_2escm"),(void*)f_3895},
{C_text("toplevel:chicken_2dprofile_2escm"),(void*)C_toplevel},
{C_text("va4340:chicken_2dprofile_2escm"),(void*)va4340},
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
o|hiding unexported module binding: main#symbol-table-size 
o|hiding unexported module binding: main#sort-by 
o|hiding unexported module binding: main#file 
o|hiding unexported module binding: main#no-unused 
o|hiding unexported module binding: main#seconds-digits 
o|hiding unexported module binding: main#average-digits 
o|hiding unexported module binding: main#percent-digits 
o|hiding unexported module binding: main#top 
o|hiding unexported module binding: main#print-usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#sort-by-calls 
o|hiding unexported module binding: main#sort-by-time 
o|hiding unexported module binding: main#sort-by-avg 
o|hiding unexported module binding: main#sort-by-name 
o|hiding unexported module binding: main#set-decimals 
o|hiding unexported module binding: main#make-symbol-table 
o|hiding unexported module binding: main#read-profile 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#format-real 
o|hiding unexported module binding: main#write-profile 
S|applied compiler syntax:
S|  scheme#for-each		1
S|  chicken.base#foldl		6
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 64 
o|folded constant expression: (scheme#char->integer (quote #\0)) 
o|specializations:
o|  1 (scheme#* integer integer)
o|  1 (scheme#make-string fixnum char)
o|  4 (scheme#/ * *)
o|  3 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#= integer integer)
o|  2 (scheme#- fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
o|  8 (scheme#string=? string string)
o|  1 (scheme#> integer integer)
o|  3 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  7 (scheme#car pair)
(o e)|safe calls: 418 
(o e)|assignments to immediate values: 5 
o|dropping redundant toplevel assignment: main#sort-by 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|inlining procedure: k1386 
o|inlining procedure: k1386 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1656 
o|inlining procedure: k1656 
o|inlining procedure: k1687 
o|inlining procedure: k1687 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#delete-duplicates 
o|inlining procedure: k1904 
o|inlining procedure: k1904 
o|inlining procedure: k1896 
o|inlining procedure: k1896 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2295 
o|inlining procedure: k2295 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|inlining procedure: k2830 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: k2830 
o|inlining procedure: k2849 
o|inlining procedure: k2849 
o|inlining procedure: "(chicken-profile.scm:126) main#second" 
o|inlining procedure: "(chicken-profile.scm:125) main#second" 
o|inlining procedure: k2864 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: k2864 
o|inlining procedure: "(chicken-profile.scm:133) main#third" 
o|inlining procedure: "(chicken-profile.scm:132) main#third" 
o|inlining procedure: k2893 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: k2893 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|contracted procedure: "(chicken-profile.scm:181) main#alist-cons" 
o|inlining procedure: k3031 
o|inlining procedure: k3031 
o|inlining procedure: k3087 
o|contracted procedure: "(chicken-profile.scm:175) g657667" 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: k3087 
o|inlining procedure: "(chicken-profile.scm:176) main#first" 
o|inlining procedure: "(chicken-profile.scm:174) main#first" 
o|contracted procedure: "(chicken-profile.scm:168) main#make-symbol-table" 
o|substituted constant variable: main#symbol-table-size 
o|inlining procedure: k3166 
o|inlining procedure: k3166 
o|contracted procedure: "(chicken-profile.scm:262) main#run" 
o|inlining procedure: k2610 
o|contracted procedure: "(chicken-profile.scm:91) main#write-profile" 
o|inlining procedure: k3410 
o|inlining procedure: k3410 
o|inlining procedure: k3460 
o|inlining procedure: k3460 
o|inlining procedure: k3484 
o|inlining procedure: k3484 
o|substituted constant variable: spacing816 
o|substituted constant variable: a3526 
o|substituted constant variable: spacing816 
o|inlining procedure: k3530 
o|inlining procedure: k3530 
o|substituted constant variable: g946949 
o|inlining procedure: k3554 
o|contracted procedure: "(chicken-profile.scm:249) g831832" 
o|inlining procedure: k3594 
o|inlining procedure: k3594 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|inlining procedure: k3554 
o|substituted constant variable: spacing816 
o|substituted constant variable: spacing816 
o|substituted constant variable: a3681 
o|inlining procedure: k3685 
o|contracted procedure: "(chicken-profile.scm:232) g790799" 
o|substituted constant variable: a3339 
o|substituted constant variable: a3345 
o|inlining procedure: "(chicken-profile.scm:237) main#first" 
o|contracted procedure: "(chicken-profile.scm:236) main#fifth" 
o|contracted procedure: "(chicken-profile.scm:235) main#fourth" 
o|inlining procedure: "(chicken-profile.scm:234) main#third" 
o|inlining procedure: "(chicken-profile.scm:233) main#second" 
o|inlining procedure: k3685 
o|inlining procedure: "(chicken-profile.scm:243) main#second" 
o|inlining procedure: k3770 
o|inlining procedure: k3770 
o|inlining procedure: k3785 
o|inlining procedure: k3785 
o|inlining procedure: "(chicken-profile.scm:222) main#third" 
o|inlining procedure: "(chicken-profile.scm:221) main#second" 
o|inlining procedure: k3802 
o|inlining procedure: k3802 
o|inlining procedure: k3836 
o|inlining procedure: "(chicken-profile.scm:214) main#third" 
o|inlining procedure: "(chicken-profile.scm:215) main#third" 
o|inlining procedure: k3836 
o|substituted constant variable: g727730 
o|inlining procedure: k2626 
o|inlining procedure: k2626 
o|inlining procedure: "(chicken-profile.scm:87) main#first" 
o|inlining procedure: k2660 
o|inlining procedure: k2660 
o|inlining procedure: k2682 
o|inlining procedure: k2682 
o|inlining procedure: k2610 
o|inlining procedure: k2710 
o|inlining procedure: k2710 
o|substituted constant variable: a2730 
o|substituted constant variable: a2745 
o|inlining procedure: k2741 
o|inlining procedure: k2741 
o|substituted constant variable: a2751 
o|substituted constant variable: a2760 
o|inlining procedure: k2756 
o|inlining procedure: k2756 
o|substituted constant variable: a2766 
o|substituted constant variable: a2772 
o|inlining procedure: k2768 
o|inlining procedure: k2768 
o|substituted constant variable: a2778 
o|substituted constant variable: a2784 
o|inlining procedure: k2780 
o|contracted procedure: "(chicken-profile.scm:117) main#set-decimals" 
o|substituted constant variable: a2945 
o|inlining procedure: k2946 
o|substituted constant variable: a2956 
o|inlining procedure: k2946 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|substituted constant variable: a2989 
o|inlining procedure: k2780 
o|inlining procedure: k2801 
o|inlining procedure: k2801 
o|substituted constant variable: a2814 
o|substituted constant variable: a2811 
o|substituted constant variable: a2819 
o|replaced variables: 408 
o|removed binding forms: 144 
o|substituted constant variable: r13873912 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#symbol-table-size 
o|substituted constant variable: r28503937 
o|substituted constant variable: r30583996 
o|substituted constant variable: r34614014 
o|converted assignments to bindings: (print-row894) 
o|contracted procedure: "(chicken-profile.scm:243) main#filter" 
o|substituted constant variable: r18973921 
o|substituted constant variable: r37714049 
o|substituted constant variable: r37714049 
o|substituted constant variable: r37864052 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|converted assignments to bindings: (arg-digit635) 
o|inlining procedure: k2698 
o|simplifications: ((let . 2)) 
o|replaced variables: 117 
o|removed binding forms: 384 
o|inlining procedure: k3112 
o|inlining procedure: k3112 
o|inlining procedure: k2698 
o|replaced variables: 2 
o|removed binding forms: 127 
o|substituted constant variable: r31134165 
o|substituted constant variable: r31134166 
o|inlining procedure: "(mini-srfi-1.scm:131) a3719" 
o|inlining procedure: k2685 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:131) g295296" 
o|substituted constant variable: r26864227 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((let . 1) (if . 18) (##core#call . 193)) 
o|  call simplifications:
o|    scheme#member
o|    scheme#string=?
o|    ##sys#size
o|    chicken.fixnum#fx>
o|    scheme#string-ref
o|    scheme#char->integer
o|    scheme#<=
o|    scheme#eq?	2
o|    scheme#<
o|    scheme#cddddr
o|    scheme#not
o|    scheme#list	9
o|    scheme#length	2
o|    scheme#-
o|    scheme#*	2
o|    scheme#null?	7
o|    scheme#string-length	3
o|    chicken.fixnum#fxmax
o|    scheme#symbol?	2
o|    scheme#eof-object?
o|    scheme#cdr	4
o|    ##sys#check-list	12
o|    scheme#pair?	15
o|    scheme#+	5
o|    ##sys#setslot	6
o|    ##sys#slot	36
o|    scheme#cadddr	3
o|    scheme#=
o|    scheme#cadr	7
o|    scheme#caddr	10
o|    scheme#>	11
o|    chicken.fixnum#fx<=
o|    scheme#car	13
o|    chicken.fixnum#fx-	2
o|    scheme#cons	27
o|contracted procedure: k1389 
o|contracted procedure: k1396 
o|contracted procedure: k1406 
o|contracted procedure: k2598 
o|contracted procedure: k2594 
o|contracted procedure: k2590 
o|contracted procedure: k2586 
o|contracted procedure: k2582 
o|contracted procedure: k2578 
o|contracted procedure: k2574 
o|contracted procedure: k2824 
o|contracted procedure: k2827 
o|contracted procedure: k2839 
o|contracted procedure: k2843 
o|contracted procedure: k2858 
o|contracted procedure: k2861 
o|contracted procedure: k2867 
o|contracted procedure: k2874 
o|contracted procedure: k2878 
o|contracted procedure: k2887 
o|contracted procedure: k2890 
o|contracted procedure: k2902 
o|contracted procedure: k2906 
o|contracted procedure: k2927 
o|contracted procedure: k2931 
o|contracted procedure: k3142 
o|contracted procedure: k3005 
o|contracted procedure: k1881 
o|contracted procedure: k3021 
o|contracted procedure: k3034 
o|contracted procedure: k3048 
o|contracted procedure: k3052 
o|contracted procedure: k3069 
o|contracted procedure: k3072 
o|contracted procedure: k3075 
o|contracted procedure: k3078 
o|contracted procedure: k3126 
o|contracted procedure: k3090 
o|contracted procedure: k3096 
o|contracted procedure: k3104 
o|contracted procedure: k3108 
o|contracted procedure: k3116 
o|contracted procedure: k3120 
o|contracted procedure: k3112 
o|contracted procedure: k3133 
o|contracted procedure: k3136 
o|contracted procedure: k3205 
o|contracted procedure: k3148 
o|contracted procedure: k3199 
o|contracted procedure: k3151 
o|contracted procedure: k3193 
o|contracted procedure: k3154 
o|contracted procedure: k3187 
o|contracted procedure: k3157 
o|contracted procedure: k3160 
o|contracted procedure: k3184 
o|contracted procedure: k3180 
o|contracted procedure: k3260 
o|contracted procedure: k3225 
o|contracted procedure: k3237 
o|contracted procedure: k3249 
o|contracted procedure: k2613 
o|contracted procedure: k3277 
o|contracted procedure: k3281 
o|contracted procedure: k3294 
o|contracted procedure: k3360 
o|contracted procedure: k3366 
o|contracted procedure: k3369 
o|contracted procedure: k3375 
o|contracted procedure: k3378 
o|contracted procedure: k3395 
o|contracted procedure: k3398 
o|contracted procedure: k3401 
o|contracted procedure: k3416 
o|contracted procedure: k3419 
o|contracted procedure: k3427 
o|contracted procedure: k3431 
o|contracted procedure: k3435 
o|contracted procedure: k3443 
o|contracted procedure: k3447 
o|contracted procedure: k3451 
o|contracted procedure: k3457 
o|contracted procedure: k3463 
o|contracted procedure: k3475 
o|contracted procedure: k3487 
o|contracted procedure: k3497 
o|contracted procedure: k3501 
o|contracted procedure: k3513 
o|contracted procedure: k3523 
o|contracted procedure: k3509 
o|contracted procedure: k3533 
o|contracted procedure: k3540 
o|contracted procedure: k3548 
o|contracted procedure: k3544 
o|contracted procedure: k3557 
o|contracted procedure: k3564 
o|contracted procedure: k3677 
o|contracted procedure: k3570 
o|contracted procedure: k3573 
o|contracted procedure: k3576 
o|contracted procedure: k3582 
o|contracted procedure: k3585 
o|contracted procedure: k3633 
o|contracted procedure: k3597 
o|contracted procedure: k3600 
o|contracted procedure: k3603 
o|contracted procedure: k3611 
o|contracted procedure: k3615 
o|contracted procedure: k3623 
o|contracted procedure: k3627 
o|contracted procedure: k3645 
o|contracted procedure: k3667 
o|contracted procedure: k3663 
o|contracted procedure: k3648 
o|contracted procedure: k3651 
o|contracted procedure: k3659 
o|contracted procedure: k3688 
o|contracted procedure: k3710 
o|contracted procedure: k3299 
o|contracted procedure: k3302 
o|contracted procedure: k3305 
o|contracted procedure: k1836 
o|contracted procedure: k3308 
o|contracted procedure: k3706 
o|contracted procedure: k3691 
o|contracted procedure: k3694 
o|contracted procedure: k3702 
o|contracted procedure: k3346 
o|contracted procedure: k3354 
o|contracted procedure: k1887 
o|contracted procedure: k1899 
o|contracted procedure: k1917 
o|contracted procedure: k37264220 
o|contracted procedure: k1907 
o|contracted procedure: k1925 
o|contracted procedure: k3737 
o|contracted procedure: k3741 
o|contracted procedure: k3750 
o|contracted procedure: k3753 
o|contracted procedure: k3763 
o|contracted procedure: k3756 
o|contracted procedure: k3773 
o|contracted procedure: k3788 
o|contracted procedure: k3805 
o|contracted procedure: k3808 
o|contracted procedure: k3811 
o|contracted procedure: k3819 
o|contracted procedure: k3827 
o|contracted procedure: k3839 
o|contracted procedure: k3846 
o|contracted procedure: k3860 
o|contracted procedure: k3850 
o|contracted procedure: k3869 
o|contracted procedure: k3878 
o|contracted procedure: k3857 
o|contracted procedure: k2629 
o|inlining procedure: k2626 
o|contracted procedure: k2653 
o|contracted procedure: k2663 
o|contracted procedure: k2669 
o|contracted procedure: k2673 
o|contracted procedure: k2685 
o|contracted procedure: k2704 
o|contracted procedure: k2713 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|contracted procedure: k2961 
o|contracted procedure: k2942 
o|contracted procedure: k2986 
o|contracted procedure: k2967 
o|contracted procedure: k2816 
o|contracted procedure: k2808 
o|contracted procedure: k2795 
o|contracted procedure: k3901 
o|contracted procedure: k3905 
o|contracted procedure: k3909 
o|simplifications: ((##core#call . 2) (if . 4) (let . 56)) 
o|  call simplifications:
o|    scheme#-	2
o|removed binding forms: 173 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest698701 0 
o|contracted procedure: k3253 
o|substituted constant variable: r3902 
o|substituted constant variable: r3906 
o|substituted constant variable: r3910 
o|replaced variables: 3 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3152 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3152 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3152 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3152 1 
o|removed binding forms: 4 
o|removed binding forms: 2 
o|customizable procedures: (arg-digit635 next-number603 main#print-usage loop590 next-arg602 k2616 foldl728732 g752761 map-loop746775 k3767 k3290 foldr290293 main#format-real map-loop784807 map-loop858875 map-loop837882 foldl824828 foldl947951 print-row894 for-each-loop897958 k3413 map-loop908929 va4340 k3093 map-loop651677 doloop646647 main#take) 
o|calls to known targets: 69 
o|identified direct recursive calls: f_1384 1 
o|unused rest argument: rest698701 f_3146 
o|identified direct recursive calls: f_3528 1 
o|identified direct recursive calls: f_3640 1 
o|identified direct recursive calls: f_1894 1 
o|identified direct recursive calls: f_2608 5 
o|fast box initializations: 14 
o|fast global references: 29 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1384 
o|dropping unused closure argument: f_2561 
o|dropping unused closure argument: f_3212 
*/
/* end of file */
