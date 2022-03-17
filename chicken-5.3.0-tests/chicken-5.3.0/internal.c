/* Generated from internal.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: internal.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file internal.c -emit-import-library chicken.internal
   unit: internal
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[44];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,54,55,32,105,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,115,116,114,105,110,103,45,62,99,45,105,100,101,110,116,105,102,105,101,114,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,118,97,108,105,100,45,108,105,98,114,97,114,121,45,115,112,101,99,105,102,105,101,114,63,32,120,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,108,105,98,114,97,114,121,45,112,97,114,116,45,62,115,116,114,105,110,103,32,120,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,48,57,32,108,115,116,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,108,105,98,114,97,114,121,45,105,100,32,108,105,98,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,111,100,117,108,101,45,114,101,113,117,105,114,101,109,101,110,116,32,105,100,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,115,32,115,101,101,110,32,119,97,114,110,101,100,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,32,102,111,114,109,32,108,111,99,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,11),40,103,54,55,50,32,115,100,101,102,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,55,49,32,103,54,55,56,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,115,121,109,98,111,108,32,110,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,114,101,102,32,104,116,32,107,101,121,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,98,117,99,107,101,116,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,32,107,101,121,32,118,97,108,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,32,107,101,121,32,117,112,100,116,102,117,110,99,32,118,97,108,117,102,117,110,99,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,103,55,52,49,32,98,117,99,107,101,116,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,52,48,32,103,55,52,55,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,55,51,53,32,105,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,112,32,104,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,108,101,110,32,98,107,116,32,115,105,122,101,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static C_word C_fcall f_1389(C_word t0);
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word *av) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_fcall f_2304(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_fcall f_2330(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word *av) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word *av) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word *av) C_noret;
C_noret_decl(f_2422)
static void C_fcall f_2422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2517)
static void C_fcall f_2517(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2545)
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2600)
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2613)
static void C_fcall f_2613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2684)
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_fcall f_2726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2767)
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static C_word C_fcall f_2799(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word *av) C_noret;
C_noret_decl(f_2839)
static C_word C_fcall f_2839(C_word t0,C_word t1);
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_2897)
static void C_fcall f_2897(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word *av) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word *av) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word *av) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word *av) C_noret;
C_noret_decl(f_2972)
static void C_fcall f_2972(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_fcall f_3043(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externexport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2304)
static void C_ccall trf_2304(C_word c,C_word *av) C_noret;
static void C_ccall trf_2304(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2304(t0,t1,t2);}

C_noret_decl(trf_2330)
static void C_ccall trf_2330(C_word c,C_word *av) C_noret;
static void C_ccall trf_2330(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2330(t0,t1);}

C_noret_decl(trf_2422)
static void C_ccall trf_2422(C_word c,C_word *av) C_noret;
static void C_ccall trf_2422(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2422(t0,t1);}

C_noret_decl(trf_2465)
static void C_ccall trf_2465(C_word c,C_word *av) C_noret;
static void C_ccall trf_2465(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2465(t0,t1,t2);}

C_noret_decl(trf_2517)
static void C_ccall trf_2517(C_word c,C_word *av) C_noret;
static void C_ccall trf_2517(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2517(t0,t1);}

C_noret_decl(trf_2545)
static void C_ccall trf_2545(C_word c,C_word *av) C_noret;
static void C_ccall trf_2545(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2545(t0,t1,t2,t3);}

C_noret_decl(trf_2600)
static void C_ccall trf_2600(C_word c,C_word *av) C_noret;
static void C_ccall trf_2600(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2600(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2613)
static void C_ccall trf_2613(C_word c,C_word *av) C_noret;
static void C_ccall trf_2613(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2613(t0,t1);}

C_noret_decl(trf_2684)
static void C_ccall trf_2684(C_word c,C_word *av) C_noret;
static void C_ccall trf_2684(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2684(t0,t1,t2);}

C_noret_decl(trf_2726)
static void C_ccall trf_2726(C_word c,C_word *av) C_noret;
static void C_ccall trf_2726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2726(t0,t1,t2);}

C_noret_decl(trf_2767)
static void C_ccall trf_2767(C_word c,C_word *av) C_noret;
static void C_ccall trf_2767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2767(t0,t1,t2);}

C_noret_decl(trf_2897)
static void C_ccall trf_2897(C_word c,C_word *av) C_noret;
static void C_ccall trf_2897(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2897(t0,t1,t2);}

C_noret_decl(trf_2972)
static void C_ccall trf_2972(C_word c,C_word *av) C_noret;
static void C_ccall trf_2972(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2972(t0,t1,t2);}

C_noret_decl(trf_2980)
static void C_ccall trf_2980(C_word c,C_word *av) C_noret;
static void C_ccall trf_2980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2980(t0,t1,t2);}

C_noret_decl(trf_3010)
static void C_ccall trf_3010(C_word c,C_word *av) C_noret;
static void C_ccall trf_3010(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3010(t0,t1,t2);}

C_noret_decl(trf_3043)
static void C_ccall trf_3043(C_word c,C_word *av) C_noret;
static void C_ccall trf_3043(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3043(t0,t1,t2,t3,t4);}

/* k1010 */
static void C_ccall f_1012(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(49,c,6)))){
C_save_and_reclaim((void *)f_1012,c,av);}
a=C_alloc(49);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.internal#string->c-identifier ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.internal#valid-library-specifier? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2379,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.internal#library-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! chicken.internal#module-requirement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[22]+1 /* (set! chicken.internal#check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2594,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[26]+1 /* (set! chicken.internal#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2668,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[27]+1 /* (set! chicken.internal#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_rand(C_fix(65536));
t14=C_mutate(&lf[31] /* (set! chicken.internal#hash-symbol ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2799,a[2]=t10,a[3]=t12,a[4]=t13,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[32]+1 /* (set! chicken.internal#make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[34]+1 /* (set! chicken.internal#hash-table-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[35]+1 /* (set! chicken.internal#hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! chicken.internal#hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[37]+1 /* (set! chicken.internal#hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[38]+1 /* (set! chicken.internal#hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[40]+1 /* (set! chicken.internal#default-imports ...) */,lf[41]);
t22=C_mutate((C_word*)lf[42]+1 /* (set! chicken.internal#default-syntax-imports ...) */,lf[43]);
t23=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* loop in chicken.internal#valid-library-specifier? in k1010 */
static C_word C_fcall f_1389(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_i_symbolp(t3);
if(C_truep(t4)){
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t5=C_fixnump(t3);
if(C_truep(C_i_not(t5))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}}

/* chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2292,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:68: chicken.base#open-output-string */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2296,c,av);}
a=C_alloc(9);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2304,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2304(t6,((C_word*)t0)[3],C_fix(0));}

/* doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_fcall f_2304(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2304,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* internal.scm:71: chicken.base#get-output-string */
t3=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2330,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_char_alphabeticp(t3);
if(C_truep(C_i_not(t6))){
t7=C_u_i_char_numericp(t3);
t8=C_i_not(t7);
t9=t5;
f_2330(t9,(C_truep(t8)?t8:C_eqp(t2,C_fix(0))));}
else{
t7=t5;
f_2330(t7,C_SCHEME_FALSE);}}}

/* k2318 in doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2320,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2304(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2328 in doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_fcall f_2330(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2330,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_fix(C_character_code(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* ##sys#write-char/port */
t2=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2334 in k2328 in doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2336,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(16)))){
/* ##sys#write-char/port */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(48);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2339(2,av2);}}}

/* k2337 in k2334 in k2328 in doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2339,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2344 in k2337 in k2334 in k2328 in doloop567 in k2294 in chicken.internal#string->c-identifier in k1010 */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2346,c,av);}
/* internal.scm:78: scheme#display */
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

/* chicken.internal#valid-library-specifier? in k1010 */
static void C_ccall f_2379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2379,c,av);}
a=C_alloc(3);
t3=C_i_symbolp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t4=C_i_nullp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1389,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_1389(t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* chicken.internal#library-id in k1010 */
static void C_ccall f_2419(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2419,c,av);}
a=C_alloc(17);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2422,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2465,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_symbolp(t2))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t2))){
/* internal.scm:104: fail */
t9=((C_word*)t4)[1];
f_2422(t9,t1);}
else{
t9=C_i_listp(t2);
if(C_truep(C_i_not(t9))){
/* internal.scm:105: fail */
t10=((C_word*)t4)[1];
f_2422(t10,t1);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2517,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t11=C_i_cdr(t2);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cddr(t2);
if(C_truep(C_i_nullp(t12))){
t13=C_eqp(lf[18],C_u_i_car(t2));
if(C_truep(t13)){
t14=C_u_i_cdr(t2);
t15=t10;
f_2517(t15,C_fixnump(C_u_i_car(t14)));}
else{
t14=t10;
f_2517(t14,C_SCHEME_FALSE);}}
else{
t13=t10;
f_2517(t13,C_SCHEME_FALSE);}}
else{
t12=t10;
f_2517(t12,C_SCHEME_FALSE);}}}}}

/* fail in chicken.internal#library-id in k1010 */
static void C_fcall f_2422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2422,2,t0,t1);}
/* internal.scm:92: ##sys#error */
t2=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[11];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* library-part->string in chicken.internal#library-id in k1010 */
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2465,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* internal.scm:99: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
if(C_truep(C_fixnump(t2))){
/* internal.scm:100: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* internal.scm:101: fail */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2422(t3,t1);}}}

/* k2515 in chicken.internal#library-id in k1010 */
static void C_fcall f_2517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2517,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:108: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:111: library-part->string */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2465(t4,t3,C_u_i_car(((C_word*)t0)[3]));}}

/* k2522 in k2515 in chicken.internal#library-id in k1010 */
static void C_ccall f_2524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2524,c,av);}
/* internal.scm:107: ##sys#intern-symbol */{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
C_string_to_symbol(3,av2);}}

/* k2526 in k2515 in chicken.internal#library-id in k1010 */
static void C_ccall f_2528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2528,c,av);}
/* internal.scm:108: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
av2[3]=t1;
tp(4,av2);}}

/* k2541 in k2515 in chicken.internal#library-id in k1010 */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2543,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2545,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2545(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* doloop609 in k2541 in k2515 in chicken.internal#library-id in k1010 */
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2545,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* internal.scm:114: ##sys#intern-symbol */{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
C_string_to_symbol(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2570,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:112: library-part->string */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2465(t7,t6,C_u_i_car(t2));}}

/* k2564 in doloop609 in k2541 in k2515 in chicken.internal#library-id in k1010 */
static void C_ccall f_2566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2566,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2545(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2568 in doloop609 in k2541 in k2515 in chicken.internal#library-id in k1010 */
static void C_ccall f_2570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2570,c,av);}
/* internal.scm:112: scheme#string-append */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[17];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.internal#module-requirement in k1010 */
static void C_ccall f_2580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2580,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:121: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(1));
av2[3]=lf[21];
tp(4,av2);}}

/* k2586 in chicken.internal#module-requirement in k1010 */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2588,c,av);}
/* internal.scm:120: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* chicken.internal#check-for-multiple-bindings in k1010 */
static void C_ccall f_2594(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2594,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2600,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2600(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in chicken.internal#check-for-multiple-bindings in k1010 */
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2600,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2613,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=C_u_i_car(t2);
t9=t6;
f_2613(t9,C_i_not(C_i_memq(C_u_i_car(t8),t4)));}
else{
t8=t6;
f_2613(t8,C_SCHEME_FALSE);}}}

/* k2611 in loop in chicken.internal#check-for-multiple-bindings in k1010 */
static void C_fcall f_2613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2613,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* internal.scm:133: scheme#string-append */
t4=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* internal.scm:137: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2600(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[3]);}}

/* k2614 in k2611 in loop in chicken.internal#check-for-multiple-bindings in k1010 */
static void C_ccall f_2616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2616,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* internal.scm:136: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2600(t5,((C_word*)t0)[5],t2,((C_word*)t0)[6],t4);}

/* k2631 in k2611 in loop in chicken.internal#check-for-multiple-bindings in k1010 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2633,c,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* internal.scm:132: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_u_i_car(t2);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* chicken.internal#macro-subset in k1010 */
static void C_ccall f_2668(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2668,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2675,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:142: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2673 in chicken.internal#macro-subset in k1010 */
static void C_ccall f_2675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2675,c,av);}
/* internal.scm:146: fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2680 in chicken.internal#macro-subset in k1010 */
static void C_ccall f_2682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2682,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2684(t5,((C_word*)t0)[3],t1);}

/* loop in k2680 in chicken.internal#macro-subset in k1010 */
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2684,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2705,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:145: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* k2703 in loop in k2680 in chicken.internal#macro-subset in k1010 */
static void C_ccall f_2705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2705,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal#fixup-macro-environment in k1010 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2718,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2725,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* internal.scm:149: ##sys#append */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
f_2725(2,av2);}}}

/* k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_ccall f_2725(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2725,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2726,a[2]=t1,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[30]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2767,a[2]=t6,a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2767(t8,t4,((C_word*)t0)[2]);}

/* g672 in k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_fcall f_2726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2726,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2742,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(C_i_nullp(t6))){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_car(t4,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_u_i_cdr(t2);
/* internal.scm:157: ##sys#append */
t8=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_u_i_car(t7);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2740 in g672 in k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_ccall f_2742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2742,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2763 in k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_ccall f_2765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2765,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop671 in k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2767,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:150: g672 */
t4=((C_word*)t0)[3];
f_2726(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2775 in for-each-loop671 in k2723 in chicken.internal#fixup-macro-environment in k1010 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2777,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2767(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-symbol in k1010 */
static C_word C_fcall f_2799(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
t3=C_eqp(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t5=C_slot(t1,C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_u_i_string_hash(t5,((C_word*)t0)[4]));
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}}

/* chicken.internal#make-hash-table in k1010 */
static void C_ccall f_2814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2814,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* internal.scm:178: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* internal.scm:178: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_get_rest_arg(c,2,av,2,t0);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* chicken.internal#hash-table-ref in k1010 */
static void C_ccall f_2829(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2829,c,av);}
a=C_alloc(4);
t4=(
/* internal.scm:181: hash-symbol */
  f_2799(lf[31],t3,C_block_size(t2))
);
t5=C_slot(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2839,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  f_2839(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* loop in chicken.internal#hash-table-ref in k1010 */
static C_word C_fcall f_2839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_eqp(C_SCHEME_END_OF_LIST,t1);
if(C_truep(C_i_not(t2))){
t3=C_slot(t1,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(C_slot(C_slot(t1,C_fix(0)),C_fix(1)));}
else{
t7=C_slot(t1,C_fix(1));
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* chicken.internal#hash-table-set! in k1010 */
static void C_ccall f_2885(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2885,c,av);}
a=C_alloc(11);
t5=(
/* internal.scm:188: hash-symbol */
  f_2799(lf[31],t3,C_block_size(t2))
);
t6=C_slot(t2,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2897,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=t2,a[6]=t5,a[7]=t8,a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2897(t10,t1,t6);}

/* loop in chicken.internal#hash-table-set! in k1010 */
static void C_fcall f_2897(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2897,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_setslot(C_slot(t2,C_fix(0)),C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* internal.scm:195: loop */
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* chicken.internal#hash-table-update! in k1010 */
static void C_ccall f_2946(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2946,c,av);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2958,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:198: hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k2952 in chicken.internal#hash-table-update! in k1010 */
static void C_ccall f_2954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2954,c,av);}
/* internal.scm:198: hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k2956 in chicken.internal#hash-table-update! in k1010 */
static void C_ccall f_2958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2958,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* internal.scm:198: updtfunc */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
/* internal.scm:198: valufunc */
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k2959 in k2956 in chicken.internal#hash-table-update! in k1010 */
static void C_ccall f_2961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2961,c,av);}
/* internal.scm:198: updtfunc */
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

/* chicken.internal#hash-table-for-each in k1010 */
static void C_ccall f_2966(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2966,c,av);}
a=C_alloc(9);
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2972,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2972(t8,t1,C_fix(0));}

/* doloop735 in chicken.internal#hash-table-for-each in k1010 */
static void C_fcall f_2972(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2972,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3010,a[2]=t8,a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3010(t10,t6,t4);}}

/* g741 in doloop735 in chicken.internal#hash-table-for-each in k1010 */
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2980,3,t0,t1,t2);}
/* internal.scm:204: p */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t2,C_fix(1));
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k2999 in doloop735 in chicken.internal#hash-table-for-each in k1010 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3001,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2972(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop740 in doloop735 in chicken.internal#hash-table-for-each in k1010 */
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3010,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:204: g741 */
t4=((C_word*)t0)[3];
f_2980(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3018 in for-each-loop740 in doloop735 in chicken.internal#hash-table-for-each in k1010 */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3020,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3010(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-table-size in k1010 */
static void C_ccall f_3033(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3033,c,av);}
a=C_alloc(7);
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3043,a[2]=t5,a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3043(t7,t1,t3,C_fix(0),C_fix(0));}

/* loop in chicken.internal#hash-table-size in k1010 */
static void C_fcall f_3043(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3043,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(t3,t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t3,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* internal.scm:211: ##sys#length */
t8=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_slot(((C_word*)t0)[3],t3);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3063 in loop in chicken.internal#hash-table-size in k1010 */
static void C_ccall f_3065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3065,c,av);}
/* internal.scm:211: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3043(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[6],t1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_internal_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("internal"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_internal_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(305))){
C_save(t1);
C_rereclaim2(305*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,44);
lf[0]=C_h_intern(&lf[0],8, C_text("internal"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.internal#"));
lf[2]=C_h_intern(&lf[2],37, C_text("chicken.internal#string->c-identifier"));
lf[3]=C_h_intern(&lf[3],30, C_text("chicken.base#get-output-string"));
lf[4]=C_h_intern(&lf[4],14, C_text("scheme#display"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#fixnum->string"));
lf[6]=C_h_intern(&lf[6],21, C_text("##sys#write-char/port"));
lf[7]=C_h_intern(&lf[7],31, C_text("chicken.base#open-output-string"));
lf[8]=C_h_intern(&lf[8],41, C_text("chicken.internal#valid-library-specifier\077"));
lf[9]=C_h_intern(&lf[9],27, C_text("chicken.internal#library-id"));
lf[10]=C_h_intern(&lf[10],11, C_text("##sys#error"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031invalid library specifier"));
lf[12]=C_h_intern(&lf[12],20, C_text("##sys#symbol->string"));
lf[13]=C_h_intern(&lf[13],20, C_text("##sys#number->string"));
lf[14]=C_h_intern(&lf[14],19, C_text("##sys#string-append"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005srfi-"));
lf[16]=C_h_intern(&lf[16],20, C_text("scheme#string-append"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[18]=C_h_intern(&lf[18],4, C_text("srfi"));
lf[19]=C_h_intern(&lf[19],35, C_text("chicken.internal#module-requirement"));
lf[20]=C_h_intern(&lf[20],20, C_text("##sys#string->symbol"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[22]=C_h_intern(&lf[22],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[23]=C_h_intern(&lf[23],10, C_text("##sys#warn"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000!variable bound multiple times in "));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 construct"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.internal#macro-subset"));
lf[27]=C_h_intern(&lf[27],40, C_text("chicken.internal#fixup-macro-environment"));
lf[28]=C_h_intern(&lf[28],23, C_text("##sys#macro-environment"));
lf[29]=C_h_intern(&lf[29],12, C_text("##sys#append"));
lf[30]=C_h_intern(&lf[30],8, C_text("for-each"));
lf[32]=C_h_intern(&lf[32],32, C_text("chicken.internal#make-hash-table"));
lf[33]=C_h_intern(&lf[33],18, C_text("scheme#make-vector"));
lf[34]=C_h_intern(&lf[34],31, C_text("chicken.internal#hash-table-ref"));
lf[35]=C_h_intern(&lf[35],32, C_text("chicken.internal#hash-table-set!"));
lf[36]=C_h_intern(&lf[36],35, C_text("chicken.internal#hash-table-update!"));
lf[37]=C_h_intern(&lf[37],36, C_text("chicken.internal#hash-table-for-each"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.internal#hash-table-size"));
lf[39]=C_h_intern(&lf[39],12, C_text("##sys#length"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.internal#default-imports"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001scheme\376\003\000\000\002\376\001\000\000\014\001chicken.base\376\003\000\000\002\376\001\000\000\016\001chicken.syntax\376\377\016"));
lf[42]=C_h_intern(&lf[42],39, C_text("chicken.internal#default-syntax-imports"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001scheme\376\003\000\000\002\376\001\000\000\014\001chicken.base\376\003\000\000\002\376\001\000\000\016\001chicken.syntax\376\377\016"));
C_register_lf2(lf,44,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1012,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[61] = {
{C_text("f_1012:internal_2escm"),(void*)f_1012},
{C_text("f_1389:internal_2escm"),(void*)f_1389},
{C_text("f_2292:internal_2escm"),(void*)f_2292},
{C_text("f_2296:internal_2escm"),(void*)f_2296},
{C_text("f_2304:internal_2escm"),(void*)f_2304},
{C_text("f_2320:internal_2escm"),(void*)f_2320},
{C_text("f_2330:internal_2escm"),(void*)f_2330},
{C_text("f_2336:internal_2escm"),(void*)f_2336},
{C_text("f_2339:internal_2escm"),(void*)f_2339},
{C_text("f_2346:internal_2escm"),(void*)f_2346},
{C_text("f_2379:internal_2escm"),(void*)f_2379},
{C_text("f_2419:internal_2escm"),(void*)f_2419},
{C_text("f_2422:internal_2escm"),(void*)f_2422},
{C_text("f_2465:internal_2escm"),(void*)f_2465},
{C_text("f_2517:internal_2escm"),(void*)f_2517},
{C_text("f_2524:internal_2escm"),(void*)f_2524},
{C_text("f_2528:internal_2escm"),(void*)f_2528},
{C_text("f_2543:internal_2escm"),(void*)f_2543},
{C_text("f_2545:internal_2escm"),(void*)f_2545},
{C_text("f_2566:internal_2escm"),(void*)f_2566},
{C_text("f_2570:internal_2escm"),(void*)f_2570},
{C_text("f_2580:internal_2escm"),(void*)f_2580},
{C_text("f_2588:internal_2escm"),(void*)f_2588},
{C_text("f_2594:internal_2escm"),(void*)f_2594},
{C_text("f_2600:internal_2escm"),(void*)f_2600},
{C_text("f_2613:internal_2escm"),(void*)f_2613},
{C_text("f_2616:internal_2escm"),(void*)f_2616},
{C_text("f_2633:internal_2escm"),(void*)f_2633},
{C_text("f_2668:internal_2escm"),(void*)f_2668},
{C_text("f_2675:internal_2escm"),(void*)f_2675},
{C_text("f_2682:internal_2escm"),(void*)f_2682},
{C_text("f_2684:internal_2escm"),(void*)f_2684},
{C_text("f_2705:internal_2escm"),(void*)f_2705},
{C_text("f_2718:internal_2escm"),(void*)f_2718},
{C_text("f_2725:internal_2escm"),(void*)f_2725},
{C_text("f_2726:internal_2escm"),(void*)f_2726},
{C_text("f_2742:internal_2escm"),(void*)f_2742},
{C_text("f_2765:internal_2escm"),(void*)f_2765},
{C_text("f_2767:internal_2escm"),(void*)f_2767},
{C_text("f_2777:internal_2escm"),(void*)f_2777},
{C_text("f_2799:internal_2escm"),(void*)f_2799},
{C_text("f_2814:internal_2escm"),(void*)f_2814},
{C_text("f_2829:internal_2escm"),(void*)f_2829},
{C_text("f_2839:internal_2escm"),(void*)f_2839},
{C_text("f_2885:internal_2escm"),(void*)f_2885},
{C_text("f_2897:internal_2escm"),(void*)f_2897},
{C_text("f_2946:internal_2escm"),(void*)f_2946},
{C_text("f_2954:internal_2escm"),(void*)f_2954},
{C_text("f_2958:internal_2escm"),(void*)f_2958},
{C_text("f_2961:internal_2escm"),(void*)f_2961},
{C_text("f_2966:internal_2escm"),(void*)f_2966},
{C_text("f_2972:internal_2escm"),(void*)f_2972},
{C_text("f_2980:internal_2escm"),(void*)f_2980},
{C_text("f_3001:internal_2escm"),(void*)f_3001},
{C_text("f_3010:internal_2escm"),(void*)f_3010},
{C_text("f_3020:internal_2escm"),(void*)f_3020},
{C_text("f_3033:internal_2escm"),(void*)f_3033},
{C_text("f_3043:internal_2escm"),(void*)f_3043},
{C_text("f_3065:internal_2escm"),(void*)f_3065},
{C_text("toplevel:internal_2escm"),(void*)C_internal_toplevel},
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
o|hiding unexported module binding: chicken.internal#d 
o|hiding unexported module binding: chicken.internal#define-alias 
o|hiding unexported module binding: chicken.internal#partition 
o|hiding unexported module binding: chicken.internal#span 
o|hiding unexported module binding: chicken.internal#take 
o|hiding unexported module binding: chicken.internal#drop 
o|hiding unexported module binding: chicken.internal#split-at 
o|hiding unexported module binding: chicken.internal#append-map 
o|hiding unexported module binding: chicken.internal#every 
o|hiding unexported module binding: chicken.internal#any 
o|hiding unexported module binding: chicken.internal#cons* 
o|hiding unexported module binding: chicken.internal#concatenate 
o|hiding unexported module binding: chicken.internal#delete 
o|hiding unexported module binding: chicken.internal#first 
o|hiding unexported module binding: chicken.internal#second 
o|hiding unexported module binding: chicken.internal#third 
o|hiding unexported module binding: chicken.internal#fourth 
o|hiding unexported module binding: chicken.internal#fifth 
o|hiding unexported module binding: chicken.internal#delete-duplicates 
o|hiding unexported module binding: chicken.internal#alist-cons 
o|hiding unexported module binding: chicken.internal#filter 
o|hiding unexported module binding: chicken.internal#filter-map 
o|hiding unexported module binding: chicken.internal#remove 
o|hiding unexported module binding: chicken.internal#unzip1 
o|hiding unexported module binding: chicken.internal#last 
o|hiding unexported module binding: chicken.internal#list-index 
o|hiding unexported module binding: chicken.internal#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.internal#lset-difference/eq? 
o|hiding unexported module binding: chicken.internal#lset-union/eq? 
o|hiding unexported module binding: chicken.internal#lset-intersection/eq? 
o|hiding unexported module binding: chicken.internal#list-tabulate 
o|hiding unexported module binding: chicken.internal#lset<=/eq? 
o|hiding unexported module binding: chicken.internal#lset=/eq? 
o|hiding unexported module binding: chicken.internal#length+ 
o|hiding unexported module binding: chicken.internal#find 
o|hiding unexported module binding: chicken.internal#find-tail 
o|hiding unexported module binding: chicken.internal#iota 
o|hiding unexported module binding: chicken.internal#make-list 
o|hiding unexported module binding: chicken.internal#posq 
o|hiding unexported module binding: chicken.internal#posv 
o|hiding unexported module binding: chicken.internal#hash-symbol 
S|applied compiler syntax:
S|  ##sys#for-each		1
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		3
S|  chicken.base#foldr		3
o|eliminated procedure checks: 50 
o|specializations:
o|  2 (scheme#caar (pair pair *))
o|  2 (scheme#cadr (pair * pair))
o|  1 (scheme#number->string fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 289 
o|safe globals: (chicken.internal#default-syntax-imports chicken.internal#default-imports chicken.internal#hash-table-size chicken.internal#hash-table-for-each chicken.internal#hash-table-update! chicken.internal#hash-table-set! chicken.internal#hash-table-ref chicken.internal#make-hash-table chicken.internal#hash-symbol chicken.internal#fixup-macro-environment chicken.internal#macro-subset chicken.internal#check-for-multiple-bindings chicken.internal#module-requirement chicken.internal#library-id chicken.internal#valid-library-specifier? chicken.internal#string->c-identifier chicken.internal#posv chicken.internal#posq chicken.internal#make-list chicken.internal#iota chicken.internal#find-tail chicken.internal#find chicken.internal#length+ chicken.internal#lset=/eq? chicken.internal#lset<=/eq? chicken.internal#list-tabulate chicken.internal#lset-intersection/eq? chicken.internal#lset-union/eq? chicken.internal#lset-difference/eq? chicken.internal#lset-adjoin/eq? chicken.internal#list-index chicken.internal#last chicken.internal#unzip1 chicken.internal#remove chicken.internal#filter-map chicken.internal#filter chicken.internal#alist-cons chicken.internal#delete-duplicates chicken.internal#fifth chicken.internal#fourth chicken.internal#third chicken.internal#second chicken.internal#first chicken.internal#delete chicken.internal#concatenate chicken.internal#cons* chicken.internal#any chicken.internal#every chicken.internal#append-map chicken.internal#split-at chicken.internal#drop chicken.internal#take chicken.internal#span chicken.internal#partition) 
o|removed side-effect free assignment to unused variable: chicken.internal#partition 
o|removed side-effect free assignment to unused variable: chicken.internal#span 
o|removed side-effect free assignment to unused variable: chicken.internal#drop 
o|removed side-effect free assignment to unused variable: chicken.internal#split-at 
o|removed side-effect free assignment to unused variable: chicken.internal#append-map 
o|inlining procedure: k1394 
o|inlining procedure: k1394 
o|inlining procedure: k1425 
o|inlining procedure: k1425 
o|removed side-effect free assignment to unused variable: chicken.internal#cons* 
o|removed side-effect free assignment to unused variable: chicken.internal#concatenate 
o|removed side-effect free assignment to unused variable: chicken.internal#first 
o|removed side-effect free assignment to unused variable: chicken.internal#second 
o|removed side-effect free assignment to unused variable: chicken.internal#third 
o|removed side-effect free assignment to unused variable: chicken.internal#fourth 
o|removed side-effect free assignment to unused variable: chicken.internal#fifth 
o|removed side-effect free assignment to unused variable: chicken.internal#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.internal#alist-cons 
o|inlining procedure: k1642 
o|inlining procedure: k1642 
o|inlining procedure: k1634 
o|inlining procedure: k1634 
o|removed side-effect free assignment to unused variable: chicken.internal#filter-map 
o|removed side-effect free assignment to unused variable: chicken.internal#remove 
o|removed side-effect free assignment to unused variable: chicken.internal#unzip1 
o|removed side-effect free assignment to unused variable: chicken.internal#last 
o|removed side-effect free assignment to unused variable: chicken.internal#list-index 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-intersection/eq? 
o|inlining procedure: k2033 
o|inlining procedure: k2033 
o|removed side-effect free assignment to unused variable: chicken.internal#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#length+ 
o|removed side-effect free assignment to unused variable: chicken.internal#find 
o|removed side-effect free assignment to unused variable: chicken.internal#find-tail 
o|removed side-effect free assignment to unused variable: chicken.internal#iota 
o|removed side-effect free assignment to unused variable: chicken.internal#make-list 
o|removed side-effect free assignment to unused variable: chicken.internal#posq 
o|removed side-effect free assignment to unused variable: chicken.internal#posv 
o|inlining procedure: k2306 
o|inlining procedure: k2306 
o|substituted constant variable: a2348 
o|inlining procedure: k2364 
o|inlining procedure: k2364 
o|inlining procedure: k2384 
o|inlining procedure: k2384 
o|inlining procedure: k2393 
o|inlining procedure: k2408 
o|inlining procedure: k2408 
o|inlining procedure: k2393 
o|inlining procedure: k2467 
o|inlining procedure: k2467 
o|inlining procedure: k2488 
o|inlining procedure: k2488 
o|inlining procedure: k2503 
o|inlining procedure: k2503 
o|inlining procedure: k2547 
o|inlining procedure: k2547 
o|contracted procedure: "(internal.scm:106) srfi?598" 
o|inlining procedure: k2430 
o|inlining procedure: k2442 
o|inlining procedure: k2442 
o|inlining procedure: k2430 
o|inlining procedure: k2605 
o|inlining procedure: k2605 
o|inlining procedure: k2686 
o|inlining procedure: k2686 
o|inlining procedure: k2728 
o|inlining procedure: k2740 
o|inlining procedure: k2740 
o|inlining procedure: k2728 
o|inlining procedure: k2769 
o|inlining procedure: k2769 
o|inlining procedure: k2801 
o|inlining procedure: k2801 
o|inlining procedure: k2816 
o|inlining procedure: k2816 
o|inlining procedure: k2841 
o|inlining procedure: k2841 
o|inlining procedure: k2899 
o|inlining procedure: k2899 
o|inlining procedure: k2959 
o|inlining procedure: k2959 
o|inlining procedure: k2974 
o|inlining procedure: k2974 
o|inlining procedure: k3012 
o|inlining procedure: k3012 
o|inlining procedure: k3045 
o|inlining procedure: k3045 
o|replaced variables: 221 
o|removed binding forms: 88 
o|removed side-effect free assignment to unused variable: chicken.internal#any 
o|removed side-effect free assignment to unused variable: chicken.internal#filter 
o|removed side-effect free assignment to unused variable: chicken.internal#list-tabulate 
o|contracted procedure: "(internal.scm:88) chicken.internal#every" 
o|substituted constant variable: r23943091 
o|substituted constant variable: r24433102 
o|substituted constant variable: r24313103 
o|substituted constant variable: r26873106 
o|substituted constant variable: r28173118 
o|substituted constant variable: r28173118 
o|substituted constant variable: r28423129 
o|replaced variables: 20 
o|removed binding forms: 217 
o|replaced variables: 3 
o|removed binding forms: 25 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:82) a2402" 
o|removed binding forms: 1 
o|replaced variables: 4 
o|inlining procedure: k1409 
o|removed binding forms: 2 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 13) (if . 4) (##core#call . 108)) 
o|  call simplifications:
o|    ##sys#size
o|    ##sys#setslot	2
o|    ##sys#check-list	2
o|    scheme#set-car!	2
o|    scheme#memq	2
o|    scheme#caar	3
o|    scheme#cons	5
o|    ##sys#slot	21
o|    scheme#pair?	4
o|    scheme#cddr
o|    scheme#eq?	7
o|    scheme#cdr	4
o|    scheme#cadr	2
o|    ##sys#intern-symbol	2
o|    scheme#list?	2
o|    scheme#null?	11
o|    scheme#car	5
o|    scheme#symbol?	4
o|    chicken.base#fixnum?	3
o|    scheme#string-length
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref
o|    scheme#char-alphabetic?
o|    scheme#char-numeric?
o|    scheme#not	8
o|    chicken.fixnum#fx=	2
o|    scheme#char->integer
o|    chicken.fixnum#fx<
o|    scheme#write-char	3
o|    chicken.fixnum#fx+	4
o|contracted procedure: k2297 
o|contracted procedure: k2309 
o|contracted procedure: k2315 
o|contracted procedure: k2325 
o|contracted procedure: k2331 
o|contracted procedure: k2349 
o|contracted procedure: k2375 
o|contracted procedure: k2358 
o|contracted procedure: k2371 
o|contracted procedure: k2361 
o|contracted procedure: k2381 
o|contracted procedure: k2390 
o|contracted procedure: k2415 
o|contracted procedure: k2396 
o|contracted procedure: k1391 
o|contracted procedure: k1413 
o|contracted procedure: k2405 
o|inlining procedure: k1400 
o|contracted procedure: k1409 
o|inlining procedure: k1400 
o|contracted procedure: k2470 
o|contracted procedure: k2479 
o|contracted procedure: k2491 
o|contracted procedure: k2497 
o|contracted procedure: k2576 
o|contracted procedure: k2506 
o|contracted procedure: k2530 
o|contracted procedure: k2537 
o|contracted procedure: k2550 
o|contracted procedure: k2560 
o|contracted procedure: k2461 
o|contracted procedure: k2433 
o|contracted procedure: k2457 
o|contracted procedure: k2439 
o|contracted procedure: k2445 
o|contracted procedure: k2590 
o|contracted procedure: k2602 
o|contracted procedure: k2627 
o|contracted procedure: k2623 
o|contracted procedure: k2647 
o|contracted procedure: k2643 
o|contracted procedure: k2664 
o|contracted procedure: k2650 
o|contracted procedure: k2657 
o|contracted procedure: k2711 
o|contracted procedure: k2670 
o|contracted procedure: k2689 
o|contracted procedure: k2692 
o|contracted procedure: k2699 
o|contracted procedure: k2792 
o|contracted procedure: k2720 
o|contracted procedure: k2757 
o|contracted procedure: k2731 
o|contracted procedure: k2753 
o|contracted procedure: k2743 
o|contracted procedure: k2760 
o|contracted procedure: k2772 
o|contracted procedure: k2782 
o|contracted procedure: k2786 
o|contracted procedure: k2804 
o|contracted procedure: k2810 
o|contracted procedure: k2822 
o|contracted procedure: k2816 
o|contracted procedure: k2835 
o|contracted procedure: k2876 
o|contracted procedure: k2844 
o|contracted procedure: k2872 
o|contracted procedure: k2868 
o|contracted procedure: k2850 
o|contracted procedure: k2857 
o|contracted procedure: k2864 
o|contracted procedure: k2890 
o|contracted procedure: k2902 
o|contracted procedure: k2913 
o|contracted procedure: k2909 
o|contracted procedure: k2941 
o|contracted procedure: k2937 
o|contracted procedure: k2919 
o|contracted procedure: k2926 
o|contracted procedure: k2933 
o|contracted procedure: k2977 
o|contracted procedure: k2986 
o|contracted procedure: k2990 
o|contracted procedure: k2993 
o|contracted procedure: k2996 
o|contracted procedure: k3006 
o|contracted procedure: k3015 
o|contracted procedure: k3025 
o|contracted procedure: k3029 
o|contracted procedure: k3039 
o|contracted procedure: k3048 
o|contracted procedure: k3055 
o|contracted procedure: k3059 
o|contracted procedure: k3067 
o|simplifications: ((let . 39)) 
o|removed binding forms: 92 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest641643 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest641643 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest700701 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest700701 0 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop199 0 
o|direct leaf routine/allocation: chicken.internal#hash-symbol 0 
o|direct leaf routine/allocation: loop710 0 
o|converted assignments to bindings: (loop199) 
o|contracted procedure: "(internal.scm:181) k2880" 
o|converted assignments to bindings: (loop710) 
o|contracted procedure: "(internal.scm:188) k2887" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 2 
o|customizable procedures: (loop760 g741748 for-each-loop740751 doloop735736 loop720 g672679 for-each-loop671682 loop650 k2611 loop623 k2515 library-part->string599 doloop609610 fail597 k2328 doloop567568) 
o|calls to known targets: 36 
o|identified direct recursive calls: f_1389 2 
o|identified direct recursive calls: f_2684 1 
o|unused rest argument: rest641643 f_2668 
o|unused rest argument: rest660662 f_2718 
o|unused rest argument: rest700701 f_2814 
o|identified direct recursive calls: f_2839 1 
o|identified direct recursive calls: f_2897 1 
o|fast box initializations: 11 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_1389 
*/
/* end of file */
