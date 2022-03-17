/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken-ffi-syntax
   uses: data-structures expand internal extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[98];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,16),40,97,50,54,56,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,42),40,99,111,109,112,105,108,101,114,45,111,110,108,121,45,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,50,48,32,103,56,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,45),40,97,110,110,111,116,97,116,101,45,102,111,114,101,105,103,110,45,112,114,111,99,101,100,117,114,101,32,101,32,97,114,103,116,121,112,101,115,32,114,116,121,112,101,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,16),40,97,50,56,54,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,55,54,32,103,57,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,97,50,57,48,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,50,57,56,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,51,54,32,103,57,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,97,51,48,48,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,97,51,48,56,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,57,51,32,103,57,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,97,51,49,48,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,97,51,50,48,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,51,50,50,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,51,50,51,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,16),40,97,51,50,53,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,16),40,97,51,51,50,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,103,55,50,54,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,105,110,100,105,110,103,115,32,97,108,105,97,115,101,115,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,97,51,53,48,48,32,98,32,97,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,103,49,54,52,32,120,32,114,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,49,53,57,32,103,49,54,48,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,48,49,32,103,50,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,55,52,32,103,49,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,115,116,115,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,50,48,32,103,55,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,51,51,57,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,97,51,53,54,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,97,51,54,53,49,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,53,56,32,103,54,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,51,49,32,103,54,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,97,51,54,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word *av) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word *av) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_fcall f_1686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1775)
static C_word C_fcall f_1775(C_word t0);
C_noret_decl(f_1809)
static C_word C_fcall f_1809(C_word t0);
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_fcall f_2682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2728)
static void C_fcall f_2728(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word *av) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word *av) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word *av) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_2800)
static void C_fcall f_2800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word *av) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word *av) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word *av) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word *av) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word *av) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3116)
static void C_fcall f_3116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word *av) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word *av) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_fcall f_3277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word *av) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word *av) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word *av) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word *av) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word *av) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word *av) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word *av) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_fcall f_3412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word *av) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word *av) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word *av) C_noret;
C_noret_decl(f_3439)
static void C_fcall f_3439(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_fcall f_3524(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_fcall f_3683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_3817)
static void C_fcall f_3817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_fcall f_3866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1614)
static void C_ccall trf_1614(C_word c,C_word *av) C_noret;
static void C_ccall trf_1614(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1614(t0,t1,t2);}

C_noret_decl(trf_1622)
static void C_ccall trf_1622(C_word c,C_word *av) C_noret;
static void C_ccall trf_1622(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1622(t0,t1,t2,t3);}

C_noret_decl(trf_1654)
static void C_ccall trf_1654(C_word c,C_word *av) C_noret;
static void C_ccall trf_1654(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1654(t0,t1,t2);}

C_noret_decl(trf_1686)
static void C_ccall trf_1686(C_word c,C_word *av) C_noret;
static void C_ccall trf_1686(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1686(t0,t1,t2);}

C_noret_decl(trf_1735)
static void C_ccall trf_1735(C_word c,C_word *av) C_noret;
static void C_ccall trf_1735(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1735(t0,t1,t2);}

C_noret_decl(trf_2682)
static void C_ccall trf_2682(C_word c,C_word *av) C_noret;
static void C_ccall trf_2682(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2682(t0,t1);}

C_noret_decl(trf_2728)
static void C_ccall trf_2728(C_word c,C_word *av) C_noret;
static void C_ccall trf_2728(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2728(t0,t1,t2,t3);}

C_noret_decl(trf_2755)
static void C_ccall trf_2755(C_word c,C_word *av) C_noret;
static void C_ccall trf_2755(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2755(t0,t1);}

C_noret_decl(trf_2800)
static void C_ccall trf_2800(C_word c,C_word *av) C_noret;
static void C_ccall trf_2800(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2800(t0,t1,t2);}

C_noret_decl(trf_2939)
static void C_ccall trf_2939(C_word c,C_word *av) C_noret;
static void C_ccall trf_2939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2939(t0,t1,t2);}

C_noret_decl(trf_3039)
static void C_ccall trf_3039(C_word c,C_word *av) C_noret;
static void C_ccall trf_3039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3039(t0,t1,t2);}

C_noret_decl(trf_3116)
static void C_ccall trf_3116(C_word c,C_word *av) C_noret;
static void C_ccall trf_3116(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3116(t0,t1);}

C_noret_decl(trf_3142)
static void C_ccall trf_3142(C_word c,C_word *av) C_noret;
static void C_ccall trf_3142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3142(t0,t1,t2);}

C_noret_decl(trf_3277)
static void C_ccall trf_3277(C_word c,C_word *av) C_noret;
static void C_ccall trf_3277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3277(t0,t1);}

C_noret_decl(trf_3412)
static void C_ccall trf_3412(C_word c,C_word *av) C_noret;
static void C_ccall trf_3412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3412(t0,t1);}

C_noret_decl(trf_3439)
static void C_ccall trf_3439(C_word c,C_word *av) C_noret;
static void C_ccall trf_3439(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3439(t0,t1,t2,t3);}

C_noret_decl(trf_3524)
static void C_ccall trf_3524(C_word c,C_word *av) C_noret;
static void C_ccall trf_3524(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3524(t0,t1,t2);}

C_noret_decl(trf_3683)
static void C_ccall trf_3683(C_word c,C_word *av) C_noret;
static void C_ccall trf_3683(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3683(t0,t1);}

C_noret_decl(trf_3817)
static void C_ccall trf_3817(C_word c,C_word *av) C_noret;
static void C_ccall trf_3817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3817(t0,t1,t2);}

C_noret_decl(trf_3866)
static void C_ccall trf_3866(C_word c,C_word *av) C_noret;
static void C_ccall trf_3866(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3866(t0,t1,t2);}

/* k1384 */
static void C_ccall f_1386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1386,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1387 in k1384 */
static void C_ccall f_1389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1389,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1390 in k1387 in k1384 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1392,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1395,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1398,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:51: ##sys#macro-environment */
t3=*((C_word*)lf[97]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr159 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1614,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1641,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g164 in foldr159 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1622,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1630,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1628 in g164 in foldr159 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1630,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1639 in foldr159 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1641,c,av);}
/* mini-srfi-1.scm:72: g164 */
t2=((C_word*)t0)[2];
f_1622(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1654,3,t0,t1,t2);}
a=C_alloc(25);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_1809(t2)
);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1668,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1733,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1735,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_1735(t15,t11,t2);}}

/* k1666 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1668(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1668,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1686,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1686(t11,t7,((C_word*)t0)[4]);}

/* k1670 in k1666 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1672,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1682 in k1666 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1684,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1654(t2,((C_word*)t0)[3],t1);}

/* map-loop201 in k1666 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_1686(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1686,3,t0,t1,t2);}
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

/* k1731 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_1733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1733,c,av);}{
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

/* map-loop174 in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1735,3,t0,t1,t2);}
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

/* loop in k2747 in k2744 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static C_word C_fcall f_1775(C_word t1){
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
t4=C_eqp(lf[9],t3);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in loop in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static C_word C_fcall f_1809(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_i_nullp(t2);
if(C_truep(t3)){
return(t3);}
else{
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}}}

/* k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2680,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:66: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* compiler-only-er-transformer in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_2682(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2682,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2688,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:57: ##sys#er-transformer */
t4=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a2687 in compiler-only-er-transformer in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2688(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2688,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:59: chicken.platform#feature? */
t6=*((C_word*)lf[3]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2693 in a2687 in compiler-only-er-transformer in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2695,c,av);}
if(C_truep(t1)){
/* chicken-ffi-syntax.scm:60: transformer */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:61: chicken.syntax#syntax-error */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=lf[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2708,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3652,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:106: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2711,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3646,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:113: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2714,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3399,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:131: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2717,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3393,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:166: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[59];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2720,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3258,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:182: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2723,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:208: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_2726,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2728,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3220,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:247: compiler-only-er-transformer */
f_2682(t4,t5);}

/* annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_2728(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2728,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2740,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:218: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2740(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2740,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2800(t7,t3,t1);}

/* k2744 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2746,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2798,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:221: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2749(2,av2);}}}

/* k2747 in k2744 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2749,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[9]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1775,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t2;
f_2755(t6,(
  f_1775(((C_word*)t0)[5])
));}
else{
t5=t2;
f_2755(t5,C_SCHEME_FALSE);}}

/* k2753 in k2747 in k2744 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_2755(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,1)))){
C_save_and_reclaim_args((void *)trf_2755,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,lf[7],t3);
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,lf[8],t4,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],lf[9]);
t3=C_a_i_cons(&a,2,lf[7],t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[8],t3,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2796 in k2744 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2798,c,av);}
/* chicken-ffi-syntax.scm:220: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop820 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_2800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2800,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[10]+1);
/* chicken-ffi-syntax.scm:217: g843 */
t6=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2823 in map-loop820 in k2738 in annotate-foreign-procedure in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2825,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2800(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2835,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3203,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:255: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2838,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[5],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:263: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2841,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[5],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:277: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2844,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:287: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2847,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[5],a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:297: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2850,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[5],a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:307: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2853,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2863,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:317: compiler-only-er-transformer */
f_2682(t3,t4);}

/* k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2856,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:332: chicken.internal#macro-subset */
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

/* k2857 in k2854 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 in ... */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2859,c,av);}
t2=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2861 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2863,c,av);}
/* chicken-ffi-syntax.scm:314: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[17];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2865(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2865,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2869,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:319: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[17];
av2[3]=t2;
av2[4]=lf[30];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2867 in a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 in ... */
static void C_ccall f_2869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2869,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:320: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2870 in k2867 in a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in ... */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2872,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:321: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2873 in k2870 in k2867 in a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_2875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2875,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2878,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_2878(2,av2);}}
else{
/* chicken-ffi-syntax.scm:326: chicken.compiler.c-backend#foreign-type-declaration */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2876 in k2873 in k2870 in k2867 in a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in ... */
static void C_ccall f_2878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2878,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:328: scheme#string-append */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=t1;
av2[4]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2891 in k2876 in k2873 in k2870 in k2867 in a2864 in k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in ... */
static void C_ccall f_2893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_2893,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,4,lf[18],((C_word*)t0)[2],lf[19],t1);
t3=C_a_i_list(&a,4,lf[8],lf[20],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[21],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2905 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2907,c,av);}
/* chicken-ffi-syntax.scm:304: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2908 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2909(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2909,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2913,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:309: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[31];
av2[3]=t2;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2911 in a2908 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2913(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_2913,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[32],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2939,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2939(t14,t10,t8);}

/* k2931 in k2911 in a2908 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 in ... */
static void C_ccall f_2933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2933,c,av);}
/* chicken-ffi-syntax.scm:310: annotate-foreign-procedure */
f_2728(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop976 in k2911 in a2908 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 in ... */
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2939,3,t0,t1,t2);}
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

/* k2977 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2979,c,av);}
/* chicken-ffi-syntax.scm:294: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2980 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2981(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2981,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2985,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:299: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=t2;
av2[4]=lf[36];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2983 in a2980 in k2845 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2985,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:300: annotate-foreign-procedure */
f_2728(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k3005 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3007,c,av);}
/* chicken-ffi-syntax.scm:284: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3008 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3009(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3009,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3013,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:289: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=t2;
av2[4]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3011 in a3008 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3013(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3013,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[38],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3039,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3039(t14,t10,t8);}

/* k3031 in k3011 in a3008 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3033,c,av);}
/* chicken-ffi-syntax.scm:290: annotate-foreign-procedure */
f_2728(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop936 in k3011 in a3008 in k2842 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3039,3,t0,t1,t2);}
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

/* k3077 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3079,c,av);}
/* chicken-ffi-syntax.scm:274: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[40];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3080 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3081(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3081,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3085,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:279: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[40];
av2[3]=t2;
av2[4]=lf[42];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3083 in a3080 in k2839 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3085,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:280: annotate-foreign-procedure */
f_2728(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k3105 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3107,c,av);}
/* chicken-ffi-syntax.scm:260: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3108 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3109(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3109,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3113,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:265: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[43];
av2[3]=t2;
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3111 in a3108 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3113,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t2;
f_3116(t5,C_i_not(C_i_stringp(t4)));}
else{
t4=t2;
f_3116(t4,C_SCHEME_FALSE);}}

/* k3114 in k3111 in a3108 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3116(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_3116,2,t0,t1);}
a=C_alloc(19);
t2=(C_truep(t1)?C_u_i_car(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
t3=(C_truep(t1)?C_i_caddr(((C_word*)t0)[2]):C_u_i_car(C_u_i_cdr(((C_word*)t0)[2])));
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t3,lf[6]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3142,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3142(t13,t9,t3);}

/* k3129 in k3114 in k3111 in a3108 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3131,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[44],t2);
/* chicken-ffi-syntax.scm:270: annotate-foreign-procedure */
f_2728(((C_word*)t0)[4],t3,t1,((C_word*)t0)[5]);}

/* map-loop893 in k3114 in k3111 in a3108 in k2836 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3142,3,t0,t1,t2);}
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

/* k3201 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3203,c,av);}
/* chicken-ffi-syntax.scm:252: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3204 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3205(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3205,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3209,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:257: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
av2[3]=t2;
av2[4]=lf[47];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3207 in a3204 in k2833 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3209,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[18],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3218 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3220,c,av);}
/* chicken-ffi-syntax.scm:244: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3221 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3222(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3222,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3226,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:249: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=t2;
av2[4]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3224 in a3221 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3226,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[49],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3235 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3237,c,av);}
/* chicken-ffi-syntax.scm:205: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3238 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3239(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3239,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3243,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:210: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[51];
av2[3]=t2;
av2[4]=lf[53];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3241 in a3238 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3243,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[52],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3256 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3258,c,av);}
/* chicken-ffi-syntax.scm:179: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3260(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3260,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:184: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t2;
av2[4]=lf[58];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3264,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:185: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3265 in k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3267,c,av);}
a=C_alloc(22);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3277,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3301,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t6=t3;
f_3277(t6,C_a_i_list(&a,4,lf[18],t1,t4,t2));}
else{
if(C_truep(C_i_symbolp(t2))){
/* chicken-ffi-syntax.scm:191: scheme#symbol->string */
t6=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-ffi-syntax.scm:193: chicken.syntax#syntax-error */
t6=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=lf[56];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}

/* k3275 in k3265 in k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3277,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:198: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3283 in k3275 in k3265 in k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3285,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[8],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[21],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3287 in k3275 in k3265 in k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3289,c,av);}
/* chicken-ffi-syntax.scm:197: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3299 in k3265 in k3262 in a3259 in k2718 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_3301,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
f_3277(t2,C_a_i_list(&a,4,lf[18],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k3322 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3324,c,av);}
/* chicken-ffi-syntax.scm:164: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3326,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3330,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:169: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
av2[3]=t2;
av2[4]=lf[72];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3330,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:170: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3333,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3348,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:172: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3348,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3356,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:174: chicken.base#open-output-string */
t3=*((C_word*)lf[70]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3356,c,av);}
a=C_alloc(7);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[61]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[69];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3362,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3365,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[68];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3366 in k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3368,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3381,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:176: chicken.string#string-intersperse */
t4=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cdr(((C_word*)t0)[6]);
av2[3]=lf[67];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3369 in k3366 in k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3371,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[65];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3372 in k3369 in k3366 in k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3374,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:174: chicken.base#get-output-string */
t3=*((C_word*)lf[63]+1);{
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

/* k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 in ... */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_3377,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[51],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[62],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[21],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3379 in k3366 in k3363 in k3360 in k3354 in k3346 in k3331 in k3328 in a3325 in k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3381,c,av);}
/* chicken-ffi-syntax.scm:174: ##sys#print */
t2=*((C_word*)lf[64]+1);{
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

/* k3391 in k2715 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_3393,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:167: compiler-only-er-transformer */
f_2682(t4,t5);}

/* k3395 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3397,c,av);}
/* chicken-ffi-syntax.scm:128: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3399(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3399,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3403,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:133: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[74];
av2[3]=t2;
av2[4]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3403(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3403,c,av);}
a=C_alloc(23);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[3],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3524,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_3524(t15,t11,t2);}

/* g726 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3412,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:136: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3418 in g726 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3420,c,av);}
/* chicken-ffi-syntax.scm:136: r */
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

/* k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3426(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3426,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(((C_word*)t0)[4],lf[77]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1614,a[2]=t3,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1614(t9,t2,((C_word*)t0)[4]);}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1654,a[2]=t7,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1654(t9,t2,t5);}}

/* k3431 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3433,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3439(t6,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3435 in k3431 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3437,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[75],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3431 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3439(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3439,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[75],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3462,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_u_i_cdr(t3);
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* k3460 in loop in k3431 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3462,c,av);}
a=C_alloc(15);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,5,lf[76],t4,t5,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[76],t4,t5,t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a3500 in k3424 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3501(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3501,c,av);}
a=C_alloc(6);
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t2);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list1(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* map-loop720 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3524(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3524,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:136: g726 */
t4=((C_word*)t0)[4];
f_3412(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3547 in map-loop720 in k3401 in a3398 in k2712 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3549,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3524(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3562 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3564,c,av);}
/* chicken-ffi-syntax.scm:111: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3566(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3566,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3570,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:116: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[81];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3568 in a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3570(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3570,c,av);}
a=C_alloc(11);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3585,a[2]=t2,a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:120: chicken.base#gensym */
t11=*((C_word*)lf[27]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k3583 in k3568 in a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3585,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:121: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3590 in k3583 in k3568 in a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3592,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:122: scheme#symbol->string */
t3=*((C_word*)lf[55]+1);{
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

/* k3626 in k3590 in k3583 in k3568 in a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3628(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,1)))){
C_save_and_reclaim((void *)f_3628,c,av);}
a=C_alloc(48);
t2=C_a_i_list(&a,4,lf[18],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[82],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[83],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3630 in k3568 in a3565 in k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3632,c,av);}
/* chicken-ffi-syntax.scm:120: r */
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

/* k3644 in k2709 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_3646,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:114: compiler-only-er-transformer */
f_2682(t4,t5);}

/* k3648 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3650,c,av);}
/* chicken-ffi-syntax.scm:103: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3651 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3652(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3652,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3656,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:108: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3654 in a3651 in k2706 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3656,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[86],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3669 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3671,c,av);}
/* chicken-ffi-syntax.scm:64: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[90];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3673(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3673,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_stringp(C_u_i_car(t5)):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3683,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t7))){
t9=C_i_pairp(t5);
t10=t8;
f_3683(t10,(C_truep(t9)?C_i_symbolp(C_u_i_car(t5)):C_SCHEME_FALSE));}
else{
t9=t8;
f_3683(t9,C_SCHEME_FALSE);}}

/* k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3683,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:75: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[91];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3746,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:85: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[95];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:86: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[96];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k3687 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3689,c,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:77: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3697 in k3687 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3699(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3699,c,av);}
a=C_alloc(42);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[18],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[82],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,3,lf[83],((C_word*)t0)[3],t8);
t10=C_a_i_list(&a,1,t9);
t11=C_a_i_cons(&a,2,t6,t10);
t12=C_a_i_cons(&a,2,t3,t11);
t13=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,t1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t8=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t3,t8);
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,t1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3746,c,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3759,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:89: r */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_3759,c,av);}
a=C_alloc(37);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[92],t3);
t5=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[93]);
t6=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t7=C_a_i_list(&a,2,lf[92],t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(((C_word*)t0)[5],lf[6]);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3866,a[2]=t10,a[3]=t15,a[4]=t11,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_3866(t17,t13,((C_word*)t0)[5]);}

/* k3787 in k3862 in k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3789(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3789,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3817,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3817(t10,t6,((C_word*)t0)[11]);}

/* k3803 in k3787 in k3862 in k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3805,c,av);}
a=C_alloc(33);
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[94],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop658 in k3787 in k3862 in k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3817(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3817,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k3862 in k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3864,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[92],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:95: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop631 in k3757 in k3744 in k3681 in a3672 in k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_fcall f_3866(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3866,3,t0,t1,t2);}
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

/* k3961 in k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_3963,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[89],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3671,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:69: compiler-only-er-transformer */
f_2682(t4,t5);}

/* k3965 in k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3967,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:68: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3969 in k2678 in k1396 in k1393 in k1390 in k1387 in k1384 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3971,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[88],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3967,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:67: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-ffi-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dffi_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1118))){
C_save(t1);
C_rereclaim2(1118*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,98);
lf[0]=C_h_intern(&lf[0],18, C_text("chicken-ffi-syntax"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.syntax#syntax-error"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000,The FFI is not supported in interpreted mode"));
lf[3]=C_h_intern(&lf[3],25, C_text("chicken.platform#feature\077"));
lf[4]=C_h_intern(&lf[4],9, C_text("compiling"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#er-transformer"));
lf[6]=C_h_intern(&lf[6],3, C_text("map"));
lf[7]=C_h_intern(&lf[7],9, C_text("procedure"));
lf[8]=C_h_intern(&lf[8],10, C_text("##core#the"));
lf[9]=C_h_intern(&lf[9],1, C_text("\052"));
lf[10]=C_h_intern(&lf[10],52, C_text("chicken.compiler.support#foreign-type->scrutiny-type"));
lf[11]=C_h_intern(&lf[11],6, C_text("result"));
lf[12]=C_h_intern(&lf[12],27, C_text("chicken.syntax#strip-syntax"));
lf[13]=C_h_intern(&lf[13],3, C_text("arg"));
lf[14]=C_h_intern(&lf[14],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[15]=C_h_intern(&lf[15],29, C_text("chicken.internal#macro-subset"));
lf[16]=C_h_intern(&lf[16],30, C_text("##sys#extend-macro-environment"));
lf[17]=C_h_intern(&lf[17],17, C_text("foreign-type-size"));
lf[18]=C_h_intern(&lf[18],30, C_text("##core#define-foreign-variable"));
lf[19]=C_h_intern(&lf[19],6, C_text("size_t"));
lf[20]=C_h_intern(&lf[20],6, C_text("fixnum"));
lf[21]=C_h_intern(&lf[21],12, C_text("##core#begin"));
lf[22]=C_h_intern(&lf[22],20, C_text("scheme#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007sizeof("));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[25]=C_h_intern(&lf[25],51, C_text("chicken.compiler.c-backend#foreign-type-declaration"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[27]=C_h_intern(&lf[27],19, C_text("chicken.base#gensym"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[29]=C_h_intern(&lf[29],18, C_text("##sys#check-syntax"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[31]=C_h_intern(&lf[31],20, C_text("foreign-safe-lambda\052"));
lf[32]=C_h_intern(&lf[32],27, C_text("##core#foreign-safe-lambda\052"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[34]=C_h_intern(&lf[34],19, C_text("foreign-safe-lambda"));
lf[35]=C_h_intern(&lf[35],26, C_text("##core#foreign-safe-lambda"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[37]=C_h_intern(&lf[37],15, C_text("foreign-lambda\052"));
lf[38]=C_h_intern(&lf[38],22, C_text("##core#foreign-lambda\052"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[40]=C_h_intern(&lf[40],14, C_text("foreign-lambda"));
lf[41]=C_h_intern(&lf[41],21, C_text("##core#foreign-lambda"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[43]=C_h_intern(&lf[43],17, C_text("foreign-primitive"));
lf[44]=C_h_intern(&lf[44],24, C_text("##core#foreign-primitive"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[46]=C_h_intern(&lf[46],23, C_text("define-foreign-variable"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\006\001string\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[48]=C_h_intern(&lf[48],19, C_text("define-foreign-type"));
lf[49]=C_h_intern(&lf[49],26, C_text("##core#define-foreign-type"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\002"));
lf[51]=C_h_intern(&lf[51],15, C_text("foreign-declare"));
lf[52]=C_h_intern(&lf[52],14, C_text("##core#declare"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001string\376\377\001\000\000\000\000"));
lf[54]=C_h_intern(&lf[54],13, C_text("foreign-value"));
lf[55]=C_h_intern(&lf[55],21, C_text("scheme#symbol->string"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052bad argument type - not a string or symbol"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[59]=C_h_intern(&lf[59],7, C_text("declare"));
lf[60]=C_h_intern(&lf[60],12, C_text("foreign-code"));
lf[61]=C_h_intern(&lf[61],6, C_text("format"));
lf[62]=C_h_intern(&lf[62],13, C_text("##core#inline"));
lf[63]=C_h_intern(&lf[63],30, C_text("chicken.base#get-output-string"));
lf[64]=C_h_intern(&lf[64],11, C_text("##sys#print"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012"));
lf[66]=C_h_intern(&lf[66],33, C_text("chicken.string#string-intersperse"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005() { "));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016static C_word "));
lf[70]=C_h_intern(&lf[70],31, C_text("chicken.base#open-output-string"));
lf[71]=C_h_intern(&lf[71],5, C_text("code_"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001string\376\377\001\000\000\000\000"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.base#alist-ref"));
lf[74]=C_h_intern(&lf[74],12, C_text("let-location"));
lf[75]=C_h_intern(&lf[75],10, C_text("##core#let"));
lf[76]=C_h_intern(&lf[76],19, C_text("##core#let-location"));
lf[77]=C_h_intern(&lf[77],5, C_text("foldr"));
lf[78]=C_h_intern(&lf[78],13, C_text("scheme#append"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376"
"\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[80]=C_h_intern(&lf[80],5, C_text("begin"));
lf[81]=C_h_intern(&lf[81],15, C_text("define-location"));
lf[82]=C_h_intern(&lf[82],31, C_text("##core#define-external-variable"));
lf[83]=C_h_intern(&lf[83],11, C_text("##core#set!"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[85]=C_h_intern(&lf[85],8, C_text("location"));
lf[86]=C_h_intern(&lf[86],15, C_text("##core#location"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001location\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[88]=C_h_intern(&lf[88],6, C_text("define"));
lf[89]=C_h_intern(&lf[89],6, C_text("lambda"));
lf[90]=C_h_intern(&lf[90],15, C_text("define-external"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[92]=C_h_intern(&lf[92],12, C_text("##core#quote"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[94]=C_h_intern(&lf[94],31, C_text("##core#foreign-callback-wrapper"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\377\001\000"
"\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000"
"\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[97]=C_h_intern(&lf[97],23, C_text("##sys#macro-environment"));
C_register_lf2(lf,98,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1386,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[147] = {
{C_text("f_1386:chicken_2dffi_2dsyntax_2escm"),(void*)f_1386},
{C_text("f_1389:chicken_2dffi_2dsyntax_2escm"),(void*)f_1389},
{C_text("f_1392:chicken_2dffi_2dsyntax_2escm"),(void*)f_1392},
{C_text("f_1395:chicken_2dffi_2dsyntax_2escm"),(void*)f_1395},
{C_text("f_1398:chicken_2dffi_2dsyntax_2escm"),(void*)f_1398},
{C_text("f_1614:chicken_2dffi_2dsyntax_2escm"),(void*)f_1614},
{C_text("f_1622:chicken_2dffi_2dsyntax_2escm"),(void*)f_1622},
{C_text("f_1630:chicken_2dffi_2dsyntax_2escm"),(void*)f_1630},
{C_text("f_1641:chicken_2dffi_2dsyntax_2escm"),(void*)f_1641},
{C_text("f_1654:chicken_2dffi_2dsyntax_2escm"),(void*)f_1654},
{C_text("f_1668:chicken_2dffi_2dsyntax_2escm"),(void*)f_1668},
{C_text("f_1672:chicken_2dffi_2dsyntax_2escm"),(void*)f_1672},
{C_text("f_1684:chicken_2dffi_2dsyntax_2escm"),(void*)f_1684},
{C_text("f_1686:chicken_2dffi_2dsyntax_2escm"),(void*)f_1686},
{C_text("f_1733:chicken_2dffi_2dsyntax_2escm"),(void*)f_1733},
{C_text("f_1735:chicken_2dffi_2dsyntax_2escm"),(void*)f_1735},
{C_text("f_1775:chicken_2dffi_2dsyntax_2escm"),(void*)f_1775},
{C_text("f_1809:chicken_2dffi_2dsyntax_2escm"),(void*)f_1809},
{C_text("f_2680:chicken_2dffi_2dsyntax_2escm"),(void*)f_2680},
{C_text("f_2682:chicken_2dffi_2dsyntax_2escm"),(void*)f_2682},
{C_text("f_2688:chicken_2dffi_2dsyntax_2escm"),(void*)f_2688},
{C_text("f_2695:chicken_2dffi_2dsyntax_2escm"),(void*)f_2695},
{C_text("f_2708:chicken_2dffi_2dsyntax_2escm"),(void*)f_2708},
{C_text("f_2711:chicken_2dffi_2dsyntax_2escm"),(void*)f_2711},
{C_text("f_2714:chicken_2dffi_2dsyntax_2escm"),(void*)f_2714},
{C_text("f_2717:chicken_2dffi_2dsyntax_2escm"),(void*)f_2717},
{C_text("f_2720:chicken_2dffi_2dsyntax_2escm"),(void*)f_2720},
{C_text("f_2723:chicken_2dffi_2dsyntax_2escm"),(void*)f_2723},
{C_text("f_2726:chicken_2dffi_2dsyntax_2escm"),(void*)f_2726},
{C_text("f_2728:chicken_2dffi_2dsyntax_2escm"),(void*)f_2728},
{C_text("f_2740:chicken_2dffi_2dsyntax_2escm"),(void*)f_2740},
{C_text("f_2746:chicken_2dffi_2dsyntax_2escm"),(void*)f_2746},
{C_text("f_2749:chicken_2dffi_2dsyntax_2escm"),(void*)f_2749},
{C_text("f_2755:chicken_2dffi_2dsyntax_2escm"),(void*)f_2755},
{C_text("f_2798:chicken_2dffi_2dsyntax_2escm"),(void*)f_2798},
{C_text("f_2800:chicken_2dffi_2dsyntax_2escm"),(void*)f_2800},
{C_text("f_2825:chicken_2dffi_2dsyntax_2escm"),(void*)f_2825},
{C_text("f_2835:chicken_2dffi_2dsyntax_2escm"),(void*)f_2835},
{C_text("f_2838:chicken_2dffi_2dsyntax_2escm"),(void*)f_2838},
{C_text("f_2841:chicken_2dffi_2dsyntax_2escm"),(void*)f_2841},
{C_text("f_2844:chicken_2dffi_2dsyntax_2escm"),(void*)f_2844},
{C_text("f_2847:chicken_2dffi_2dsyntax_2escm"),(void*)f_2847},
{C_text("f_2850:chicken_2dffi_2dsyntax_2escm"),(void*)f_2850},
{C_text("f_2853:chicken_2dffi_2dsyntax_2escm"),(void*)f_2853},
{C_text("f_2856:chicken_2dffi_2dsyntax_2escm"),(void*)f_2856},
{C_text("f_2859:chicken_2dffi_2dsyntax_2escm"),(void*)f_2859},
{C_text("f_2863:chicken_2dffi_2dsyntax_2escm"),(void*)f_2863},
{C_text("f_2865:chicken_2dffi_2dsyntax_2escm"),(void*)f_2865},
{C_text("f_2869:chicken_2dffi_2dsyntax_2escm"),(void*)f_2869},
{C_text("f_2872:chicken_2dffi_2dsyntax_2escm"),(void*)f_2872},
{C_text("f_2875:chicken_2dffi_2dsyntax_2escm"),(void*)f_2875},
{C_text("f_2878:chicken_2dffi_2dsyntax_2escm"),(void*)f_2878},
{C_text("f_2893:chicken_2dffi_2dsyntax_2escm"),(void*)f_2893},
{C_text("f_2907:chicken_2dffi_2dsyntax_2escm"),(void*)f_2907},
{C_text("f_2909:chicken_2dffi_2dsyntax_2escm"),(void*)f_2909},
{C_text("f_2913:chicken_2dffi_2dsyntax_2escm"),(void*)f_2913},
{C_text("f_2933:chicken_2dffi_2dsyntax_2escm"),(void*)f_2933},
{C_text("f_2939:chicken_2dffi_2dsyntax_2escm"),(void*)f_2939},
{C_text("f_2979:chicken_2dffi_2dsyntax_2escm"),(void*)f_2979},
{C_text("f_2981:chicken_2dffi_2dsyntax_2escm"),(void*)f_2981},
{C_text("f_2985:chicken_2dffi_2dsyntax_2escm"),(void*)f_2985},
{C_text("f_3007:chicken_2dffi_2dsyntax_2escm"),(void*)f_3007},
{C_text("f_3009:chicken_2dffi_2dsyntax_2escm"),(void*)f_3009},
{C_text("f_3013:chicken_2dffi_2dsyntax_2escm"),(void*)f_3013},
{C_text("f_3033:chicken_2dffi_2dsyntax_2escm"),(void*)f_3033},
{C_text("f_3039:chicken_2dffi_2dsyntax_2escm"),(void*)f_3039},
{C_text("f_3079:chicken_2dffi_2dsyntax_2escm"),(void*)f_3079},
{C_text("f_3081:chicken_2dffi_2dsyntax_2escm"),(void*)f_3081},
{C_text("f_3085:chicken_2dffi_2dsyntax_2escm"),(void*)f_3085},
{C_text("f_3107:chicken_2dffi_2dsyntax_2escm"),(void*)f_3107},
{C_text("f_3109:chicken_2dffi_2dsyntax_2escm"),(void*)f_3109},
{C_text("f_3113:chicken_2dffi_2dsyntax_2escm"),(void*)f_3113},
{C_text("f_3116:chicken_2dffi_2dsyntax_2escm"),(void*)f_3116},
{C_text("f_3131:chicken_2dffi_2dsyntax_2escm"),(void*)f_3131},
{C_text("f_3142:chicken_2dffi_2dsyntax_2escm"),(void*)f_3142},
{C_text("f_3203:chicken_2dffi_2dsyntax_2escm"),(void*)f_3203},
{C_text("f_3205:chicken_2dffi_2dsyntax_2escm"),(void*)f_3205},
{C_text("f_3209:chicken_2dffi_2dsyntax_2escm"),(void*)f_3209},
{C_text("f_3220:chicken_2dffi_2dsyntax_2escm"),(void*)f_3220},
{C_text("f_3222:chicken_2dffi_2dsyntax_2escm"),(void*)f_3222},
{C_text("f_3226:chicken_2dffi_2dsyntax_2escm"),(void*)f_3226},
{C_text("f_3237:chicken_2dffi_2dsyntax_2escm"),(void*)f_3237},
{C_text("f_3239:chicken_2dffi_2dsyntax_2escm"),(void*)f_3239},
{C_text("f_3243:chicken_2dffi_2dsyntax_2escm"),(void*)f_3243},
{C_text("f_3258:chicken_2dffi_2dsyntax_2escm"),(void*)f_3258},
{C_text("f_3260:chicken_2dffi_2dsyntax_2escm"),(void*)f_3260},
{C_text("f_3264:chicken_2dffi_2dsyntax_2escm"),(void*)f_3264},
{C_text("f_3267:chicken_2dffi_2dsyntax_2escm"),(void*)f_3267},
{C_text("f_3277:chicken_2dffi_2dsyntax_2escm"),(void*)f_3277},
{C_text("f_3285:chicken_2dffi_2dsyntax_2escm"),(void*)f_3285},
{C_text("f_3289:chicken_2dffi_2dsyntax_2escm"),(void*)f_3289},
{C_text("f_3301:chicken_2dffi_2dsyntax_2escm"),(void*)f_3301},
{C_text("f_3324:chicken_2dffi_2dsyntax_2escm"),(void*)f_3324},
{C_text("f_3326:chicken_2dffi_2dsyntax_2escm"),(void*)f_3326},
{C_text("f_3330:chicken_2dffi_2dsyntax_2escm"),(void*)f_3330},
{C_text("f_3333:chicken_2dffi_2dsyntax_2escm"),(void*)f_3333},
{C_text("f_3348:chicken_2dffi_2dsyntax_2escm"),(void*)f_3348},
{C_text("f_3356:chicken_2dffi_2dsyntax_2escm"),(void*)f_3356},
{C_text("f_3362:chicken_2dffi_2dsyntax_2escm"),(void*)f_3362},
{C_text("f_3365:chicken_2dffi_2dsyntax_2escm"),(void*)f_3365},
{C_text("f_3368:chicken_2dffi_2dsyntax_2escm"),(void*)f_3368},
{C_text("f_3371:chicken_2dffi_2dsyntax_2escm"),(void*)f_3371},
{C_text("f_3374:chicken_2dffi_2dsyntax_2escm"),(void*)f_3374},
{C_text("f_3377:chicken_2dffi_2dsyntax_2escm"),(void*)f_3377},
{C_text("f_3381:chicken_2dffi_2dsyntax_2escm"),(void*)f_3381},
{C_text("f_3393:chicken_2dffi_2dsyntax_2escm"),(void*)f_3393},
{C_text("f_3397:chicken_2dffi_2dsyntax_2escm"),(void*)f_3397},
{C_text("f_3399:chicken_2dffi_2dsyntax_2escm"),(void*)f_3399},
{C_text("f_3403:chicken_2dffi_2dsyntax_2escm"),(void*)f_3403},
{C_text("f_3412:chicken_2dffi_2dsyntax_2escm"),(void*)f_3412},
{C_text("f_3420:chicken_2dffi_2dsyntax_2escm"),(void*)f_3420},
{C_text("f_3426:chicken_2dffi_2dsyntax_2escm"),(void*)f_3426},
{C_text("f_3433:chicken_2dffi_2dsyntax_2escm"),(void*)f_3433},
{C_text("f_3437:chicken_2dffi_2dsyntax_2escm"),(void*)f_3437},
{C_text("f_3439:chicken_2dffi_2dsyntax_2escm"),(void*)f_3439},
{C_text("f_3462:chicken_2dffi_2dsyntax_2escm"),(void*)f_3462},
{C_text("f_3501:chicken_2dffi_2dsyntax_2escm"),(void*)f_3501},
{C_text("f_3524:chicken_2dffi_2dsyntax_2escm"),(void*)f_3524},
{C_text("f_3549:chicken_2dffi_2dsyntax_2escm"),(void*)f_3549},
{C_text("f_3564:chicken_2dffi_2dsyntax_2escm"),(void*)f_3564},
{C_text("f_3566:chicken_2dffi_2dsyntax_2escm"),(void*)f_3566},
{C_text("f_3570:chicken_2dffi_2dsyntax_2escm"),(void*)f_3570},
{C_text("f_3585:chicken_2dffi_2dsyntax_2escm"),(void*)f_3585},
{C_text("f_3592:chicken_2dffi_2dsyntax_2escm"),(void*)f_3592},
{C_text("f_3628:chicken_2dffi_2dsyntax_2escm"),(void*)f_3628},
{C_text("f_3632:chicken_2dffi_2dsyntax_2escm"),(void*)f_3632},
{C_text("f_3646:chicken_2dffi_2dsyntax_2escm"),(void*)f_3646},
{C_text("f_3650:chicken_2dffi_2dsyntax_2escm"),(void*)f_3650},
{C_text("f_3652:chicken_2dffi_2dsyntax_2escm"),(void*)f_3652},
{C_text("f_3656:chicken_2dffi_2dsyntax_2escm"),(void*)f_3656},
{C_text("f_3671:chicken_2dffi_2dsyntax_2escm"),(void*)f_3671},
{C_text("f_3673:chicken_2dffi_2dsyntax_2escm"),(void*)f_3673},
{C_text("f_3683:chicken_2dffi_2dsyntax_2escm"),(void*)f_3683},
{C_text("f_3689:chicken_2dffi_2dsyntax_2escm"),(void*)f_3689},
{C_text("f_3699:chicken_2dffi_2dsyntax_2escm"),(void*)f_3699},
{C_text("f_3746:chicken_2dffi_2dsyntax_2escm"),(void*)f_3746},
{C_text("f_3759:chicken_2dffi_2dsyntax_2escm"),(void*)f_3759},
{C_text("f_3789:chicken_2dffi_2dsyntax_2escm"),(void*)f_3789},
{C_text("f_3805:chicken_2dffi_2dsyntax_2escm"),(void*)f_3805},
{C_text("f_3817:chicken_2dffi_2dsyntax_2escm"),(void*)f_3817},
{C_text("f_3864:chicken_2dffi_2dsyntax_2escm"),(void*)f_3864},
{C_text("f_3866:chicken_2dffi_2dsyntax_2escm"),(void*)f_3866},
{C_text("f_3963:chicken_2dffi_2dsyntax_2escm"),(void*)f_3963},
{C_text("f_3967:chicken_2dffi_2dsyntax_2escm"),(void*)f_3967},
{C_text("f_3971:chicken_2dffi_2dsyntax_2escm"),(void*)f_3971},
{C_text("toplevel:chicken_2dffi_2dsyntax_2escm"),(void*)C_chicken_2dffi_2dsyntax_toplevel},
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
S|applied compiler syntax:
S|  chicken.format#sprintf		1
S|  chicken.base#foldl		3
S|  scheme#map		10
S|  chicken.base#foldr		3
o|eliminated procedure checks: 128 
o|specializations:
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#cdddr (pair * (pair * pair)))
o|  3 (scheme#cddr (pair * pair))
o|  5 (scheme#cadr (pair * pair))
o|  1 (scheme#eqv? * *)
o|  4 (##sys#check-list (or pair list) *)
o|  25 (scheme#cdr pair)
o|  12 (scheme#car pair)
(o e)|safe calls: 389 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|inlining procedure: k1780 
o|inlining procedure: k1780 
o|inlining procedure: k1811 
o|inlining procedure: k1811 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k2028 
o|inlining procedure: k2028 
o|inlining procedure: k2020 
o|inlining procedure: k2020 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k2419 
o|inlining procedure: k2419 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k2690 
o|inlining procedure: k2690 
o|inlining procedure: k2750 
o|inlining procedure: k2750 
o|inlining procedure: k2768 
o|inlining procedure: k2768 
o|inlining procedure: k2802 
o|contracted procedure: "(chicken-ffi-syntax.scm:217) g826835" 
o|propagated global variable: g843844 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k2802 
o|inlining procedure: k2941 
o|inlining procedure: k2941 
o|inlining procedure: k3041 
o|inlining procedure: k3041 
o|inlining procedure: k3144 
o|inlining procedure: k3144 
o|inlining procedure: k3299 
o|inlining procedure: k3299 
o|substituted constant variable: a3358 
o|substituted constant variable: a3359 
o|removed unused formal parameters: (_737) 
o|inlining procedure: k3441 
o|inlining procedure: k3441 
o|substituted constant variable: a3491 
o|inlining procedure: k3503 
o|inlining procedure: k3503 
o|contracted procedure: "(chicken-ffi-syntax.scm:138) append-map" 
o|inlining procedure: k1601 
o|inlining procedure: k1616 
o|inlining procedure: k1616 
o|inlining procedure: k1601 
o|inlining procedure: k1656 
o|inlining procedure: k1656 
o|inlining procedure: k1688 
o|contracted procedure: "(mini-srfi-1.scm:77) g207216" 
o|inlining procedure: k1688 
o|inlining procedure: k1737 
o|contracted procedure: "(mini-srfi-1.scm:76) g180189" 
o|inlining procedure: k1737 
o|inlining procedure: k3526 
o|removed unused parameter to known procedure: _737 "(chicken-ffi-syntax.scm:136) g726735" 
o|inlining procedure: k3526 
o|inlining procedure: k3610 
o|inlining procedure: k3610 
o|inlining procedure: k3684 
o|inlining procedure: k3717 
o|inlining procedure: k3717 
o|inlining procedure: k3684 
o|inlining procedure: k3807 
o|inlining procedure: k3807 
o|inlining procedure: k3819 
o|contracted procedure: "(chicken-ffi-syntax.scm:96) g664673" 
o|inlining procedure: k3819 
o|inlining procedure: k3868 
o|contracted procedure: "(chicken-ffi-syntax.scm:94) g637646" 
o|inlining procedure: k3868 
o|inlining procedure: k3900 
o|inlining procedure: k3900 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|replaced variables: 425 
o|removed binding forms: 139 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r27693988 
o|substituted constant variable: r27693988 
o|contracted procedure: "(chicken-ffi-syntax.scm:232) every" 
o|converted assignments to bindings: (annotate-foreign-procedure812) 
o|substituted constant variable: r35044005 
o|substituted constant variable: r16174009 
o|substituted constant variable: r16574011 
o|contracted procedure: "(mini-srfi-1.scm:74) any" 
o|substituted constant variable: r18123974 
o|substituted constant variable: r36114021 
o|substituted constant variable: r36114021 
o|substituted constant variable: r37184026 
o|substituted constant variable: r37184026 
o|substituted constant variable: r39304042 
o|converted assignments to bindings: (compiler-only-er-transformer596) 
o|simplifications: ((let . 2)) 
o|replaced variables: 21 
o|removed binding forms: 374 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:136) ##sys#slot" 
o|replaced variables: 5 
o|removed binding forms: 32 
o|inlining procedure: "(mini-srfi-1.scm:82) a2783" 
o|contracted procedure: k3551 
o|removed binding forms: 7 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 10) (let . 11) (##core#call . 220)) 
o|  call simplifications:
o|    scheme#apply
o|    scheme#length
o|    scheme#symbol?	2
o|    scheme#cddr	3
o|    scheme#cdddr	3
o|    scheme#cdr	11
o|    scheme#caddr	9
o|    scheme#cadr	13
o|    scheme#string?	4
o|    ##sys#check-list	8
o|    scheme#pair?	16
o|    scheme#cons	20
o|    ##sys#setslot	9
o|    ##sys#slot	28
o|    scheme#null?	6
o|    scheme#eq?	3
o|    scheme#not	4
o|    scheme#list	2
o|    ##sys#cons	28
o|    ##sys#list	33
o|    scheme#car	16
o|contracted procedure: k2703 
o|contracted procedure: k2730 
o|contracted procedure: k2741 
o|contracted procedure: k2760 
o|contracted procedure: k2768 
o|contracted procedure: k2774 
o|contracted procedure: k2777 
o|contracted procedure: k1777 
o|contracted procedure: k1799 
o|contracted procedure: k1795 
o|contracted procedure: k1786 
o|contracted procedure: k2805 
o|contracted procedure: k2808 
o|contracted procedure: k2811 
o|contracted procedure: k2819 
o|contracted procedure: k2827 
o|contracted procedure: k2883 
o|contracted procedure: k2887 
o|contracted procedure: k2894 
o|contracted procedure: k2901 
o|contracted procedure: k2973 
o|contracted procedure: k2918 
o|contracted procedure: k2922 
o|contracted procedure: k2925 
o|contracted procedure: k2928 
o|contracted procedure: k2935 
o|contracted procedure: k2944 
o|contracted procedure: k2966 
o|contracted procedure: k2962 
o|contracted procedure: k2947 
o|contracted procedure: k2950 
o|contracted procedure: k2958 
o|contracted procedure: k3001 
o|contracted procedure: k2990 
o|contracted procedure: k2994 
o|contracted procedure: k3073 
o|contracted procedure: k3018 
o|contracted procedure: k3022 
o|contracted procedure: k3025 
o|contracted procedure: k3028 
o|contracted procedure: k3035 
o|contracted procedure: k3044 
o|contracted procedure: k3066 
o|contracted procedure: k3062 
o|contracted procedure: k3047 
o|contracted procedure: k3050 
o|contracted procedure: k3058 
o|contracted procedure: k3101 
o|contracted procedure: k3090 
o|contracted procedure: k3094 
o|contracted procedure: k3117 
o|contracted procedure: k3120 
o|contracted procedure: k3123 
o|contracted procedure: k3126 
o|contracted procedure: k3136 
o|contracted procedure: k3147 
o|contracted procedure: k3169 
o|contracted procedure: k3165 
o|contracted procedure: k3150 
o|contracted procedure: k3153 
o|contracted procedure: k3161 
o|contracted procedure: k3197 
o|contracted procedure: k3182 
o|contracted procedure: k3193 
o|contracted procedure: k3189 
o|contracted procedure: k3214 
o|contracted procedure: k3231 
o|contracted procedure: k3252 
o|contracted procedure: k3248 
o|contracted procedure: k3268 
o|contracted procedure: k3279 
o|contracted procedure: k3291 
o|contracted procedure: k3295 
o|contracted procedure: k3302 
o|contracted procedure: k3308 
o|contracted procedure: k3387 
o|contracted procedure: k3318 
o|contracted procedure: k3350 
o|contracted procedure: k3338 
o|contracted procedure: k3342 
o|contracted procedure: k3383 
o|contracted procedure: k3404 
o|contracted procedure: k3409 
o|contracted procedure: k3421 
o|contracted procedure: k3444 
o|contracted procedure: k3451 
o|contracted procedure: k3454 
o|contracted procedure: k3457 
o|contracted procedure: k3493 
o|contracted procedure: k3466 
o|contracted procedure: k3473 
o|contracted procedure: k3477 
o|contracted procedure: k3484 
o|contracted procedure: k3488 
o|contracted procedure: k3520 
o|contracted procedure: k3506 
o|contracted procedure: k3513 
o|contracted procedure: k1604 
o|contracted procedure: k1607 
o|contracted procedure: k1619 
o|contracted procedure: k1635 
o|contracted procedure: k1643 
o|contracted procedure: k1650 
o|contracted procedure: k1674 
o|contracted procedure: k1691 
o|contracted procedure: k1713 
o|contracted procedure: k1709 
o|contracted procedure: k1694 
o|contracted procedure: k1697 
o|contracted procedure: k1705 
o|contracted procedure: k1720 
o|contracted procedure: k1728 
o|contracted procedure: k1740 
o|contracted procedure: k1762 
o|contracted procedure: k1758 
o|contracted procedure: k1743 
o|contracted procedure: k1746 
o|contracted procedure: k1754 
o|contracted procedure: k1814 
o|contracted procedure: k1829 
o|contracted procedure: k1817 
o|contracted procedure: k3529 
o|contracted procedure: k3532 
o|contracted procedure: k3535 
o|contracted procedure: k3543 
o|contracted procedure: k3640 
o|contracted procedure: k3558 
o|contracted procedure: k3571 
o|contracted procedure: k3574 
o|contracted procedure: k3633 
o|contracted procedure: k3580 
o|contracted procedure: k3598 
o|contracted procedure: k3594 
o|contracted procedure: k3606 
o|contracted procedure: k3613 
o|contracted procedure: k3620 
o|contracted procedure: k3610 
o|contracted procedure: k3661 
o|contracted procedure: k3949 
o|contracted procedure: k3953 
o|contracted procedure: k3957 
o|contracted procedure: k3665 
o|contracted procedure: k3675 
o|contracted procedure: k3940 
o|contracted procedure: k3678 
o|contracted procedure: k3690 
o|contracted procedure: k3741 
o|contracted procedure: k3705 
o|contracted procedure: k3701 
o|contracted procedure: k3713 
o|contracted procedure: k3720 
o|contracted procedure: k3731 
o|contracted procedure: k3727 
o|contracted procedure: k3717 
o|contracted procedure: k3747 
o|contracted procedure: k3750 
o|contracted procedure: k3767 
o|contracted procedure: k3771 
o|contracted procedure: k3900 
o|contracted procedure: k3775 
o|contracted procedure: k3851 
o|contracted procedure: k3859 
o|contracted procedure: k3779 
o|contracted procedure: k3795 
o|contracted procedure: k3807 
o|contracted procedure: k3791 
o|contracted procedure: k3783 
o|contracted procedure: k3763 
o|contracted procedure: k3822 
o|contracted procedure: k3844 
o|contracted procedure: k3840 
o|contracted procedure: k3825 
o|contracted procedure: k3828 
o|contracted procedure: k3836 
o|contracted procedure: k3871 
o|contracted procedure: k3893 
o|contracted procedure: k3889 
o|contracted procedure: k3874 
o|contracted procedure: k3877 
o|contracted procedure: k3885 
o|contracted procedure: k3926 
o|contracted procedure: k3932 
o|simplifications: ((let . 39)) 
o|removed binding forms: 182 
o|inlining procedure: k2764 
o|inlining procedure: k2764 
o|inlining procedure: k3602 
o|inlining procedure: k3602 
o|inlining procedure: k3709 
o|inlining procedure: k3709 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop230 0 
o|direct leaf routine/allocation: loop243 0 
o|converted assignments to bindings: (loop230) 
o|contracted procedure: k1659 
o|converted assignments to bindings: (loop243) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (k3681 map-loop631649 map-loop658676 g726735 map-loop720738 map-loop174192 map-loop201219 loop170 foldr159162 g164165 loop750 k3275 k3114 map-loop893910 map-loop936953 map-loop976993 annotate-foreign-procedure812 compiler-only-er-transformer596 map-loop820845 k2753) 
o|calls to known targets: 56 
o|identified direct recursive calls: f_1775 1 
o|identified direct recursive calls: f_2939 1 
o|identified direct recursive calls: f_3039 1 
o|identified direct recursive calls: f_3142 1 
o|identified direct recursive calls: f_3439 1 
o|identified direct recursive calls: f_1614 1 
o|identified direct recursive calls: f_1809 1 
o|identified direct recursive calls: f_1686 1 
o|identified direct recursive calls: f_1735 1 
o|identified direct recursive calls: f_3817 1 
o|identified direct recursive calls: f_3866 1 
o|fast box initializations: 12 
o|dropping unused closure argument: f_1775 
o|dropping unused closure argument: f_1809 
o|dropping unused closure argument: f_2682 
o|dropping unused closure argument: f_2728 
*/
/* end of file */
