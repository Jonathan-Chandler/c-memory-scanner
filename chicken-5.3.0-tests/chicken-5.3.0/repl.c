/* Generated from repl.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: repl.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file repl.c -emit-import-library chicken.repl
   unit: repl
   uses: eval library
*/
#include "chicken.h"

static C_word code_261() { C_clear_trace_buffer();
; return C_SCHEME_UNDEFINED; }


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[59];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,52,55,51,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,112,108,45,112,114,105,110,116,45,104,111,111,107,32,120,32,112,111,114,116,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,115,101,116,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,114,101,115,105,122,101,45,116,114,97,99,101,45,98,117,102,102,101,114,32,105,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,54,32,103,49,54,51,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,119,114,105,116,101,45,101,114,114,32,120,115,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,17),40,97,55,48,53,32,109,115,103,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,54,56,54,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,56,50,49,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,54,32,103,49,57,51,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,52,32,103,50,56,49,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,118,97,114,115,32,117,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,15),40,97,56,50,55,32,46,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,57,56,50,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,8),40,97,57,55,54,32,99,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,55,56,52,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,57,57,50,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,97,54,56,48,32,107,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,112,108,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,50,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word *av) C_noret;
C_noret_decl(f_460)
static void C_ccall f_460(C_word c,C_word *av) C_noret;
C_noret_decl(f_465)
static void C_ccall f_465(C_word c,C_word *av) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word *av) C_noret;
C_noret_decl(f_474)
static void C_ccall f_474(C_word c,C_word *av) C_noret;
C_noret_decl(f_480)
static void C_ccall f_480(C_word c,C_word *av) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word *av) C_noret;
C_noret_decl(f_502)
static void C_ccall f_502(C_word c,C_word *av) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word *av) C_noret;
C_noret_decl(f_513)
static void C_ccall f_513(C_word c,C_word *av) C_noret;
C_noret_decl(f_515)
static void C_ccall f_515(C_word c,C_word *av) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word *av) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word *av) C_noret;
C_noret_decl(f_531)
static void C_ccall f_531(C_word c,C_word *av) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_543)
static void C_fcall f_543(C_word t0,C_word t1) C_noret;
C_noret_decl(f_557)
static void C_fcall f_557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word *av) C_noret;
C_noret_decl(f_604)
static void C_ccall f_604(C_word c,C_word *av) C_noret;
C_noret_decl(f_617)
static void C_ccall f_617(C_word c,C_word *av) C_noret;
C_noret_decl(f_621)
static void C_ccall f_621(C_word c,C_word *av) C_noret;
C_noret_decl(f_629)
static void C_fcall f_629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word *av) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word *av) C_noret;
C_noret_decl(f_664)
static void C_ccall f_664(C_word c,C_word *av) C_noret;
C_noret_decl(f_666)
static C_word C_fcall f_666(C_word t0);
C_noret_decl(f_672)
static C_word C_fcall f_672(C_word t0);
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word *av) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word *av) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word *av) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word *av) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word *av) C_noret;
C_noret_decl(f_706)
static void C_ccall f_706(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word *av) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word *av) C_noret;
C_noret_decl(f_723)
static void C_fcall f_723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word *av) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word *av) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word *av) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word *av) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word *av) C_noret;
C_noret_decl(f_791)
static void C_fcall f_791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word *av) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word *av) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word *av) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word *av) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word *av) C_noret;
C_noret_decl(f_846)
static void C_fcall f_846(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word *av) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word *av) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word *av) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_fcall f_900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word *av) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_externexport void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_543)
static void C_ccall trf_543(C_word c,C_word *av) C_noret;
static void C_ccall trf_543(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_543(t0,t1);}

C_noret_decl(trf_557)
static void C_ccall trf_557(C_word c,C_word *av) C_noret;
static void C_ccall trf_557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_557(t0,t1,t2);}

C_noret_decl(trf_629)
static void C_ccall trf_629(C_word c,C_word *av) C_noret;
static void C_ccall trf_629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_629(t0,t1,t2);}

C_noret_decl(trf_723)
static void C_ccall trf_723(C_word c,C_word *av) C_noret;
static void C_ccall trf_723(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_723(t0,t1);}

C_noret_decl(trf_791)
static void C_ccall trf_791(C_word c,C_word *av) C_noret;
static void C_ccall trf_791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_791(t0,t1);}

C_noret_decl(trf_846)
static void C_ccall trf_846(C_word c,C_word *av) C_noret;
static void C_ccall trf_846(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_846(t0,t1,t2,t3);}

C_noret_decl(trf_900)
static void C_ccall trf_900(C_word c,C_word *av) C_noret;
static void C_ccall trf_900(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_900(t0,t1,t2);}

/* k1000 in k995 in a992 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_1002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1002,c,av);}
/* repl.scm:189: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a1012 in k458 in k455 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1013,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k455 */
static void C_ccall f_457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_457,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k458 in k455 */
static void C_ccall f_460(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_460,c,av);}
a=C_alloc(18);
t2=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[3] /* ##sys#repl-read-hook */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[4] /* ##sys#repl-recent-call-chain */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#repl-print-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_465,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_480,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! chicken.repl#quit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_486,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[12]+1 /* (set! chicken.repl#reset-handler ...) */,*((C_word*)lf[13]+1));
t9=C_mutate((C_word*)lf[14]+1 /* (set! chicken.repl#reset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_502,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1013,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* repl.scm:58: chicken.base#make-parameter */
t12=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* ##sys#repl-print-hook in k458 in k455 */
static void C_ccall f_465(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_465,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_469,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_474,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:48: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[2]+1);
av2[3]=t5;
tp(4,av2);}}

/* k467 in ##sys#repl-print-hook in k458 in k455 */
static void C_ccall f_469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_469,c,av);}
/* repl.scm:49: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a473 in ##sys#repl-print-hook in k458 in k455 */
static void C_ccall f_474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_474,c,av);}
t2=*((C_word*)lf[7]+1);
/* repl.scm:48: g107 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* chicken.repl#quit-hook in k458 in k455 */
static void C_ccall f_480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_480,c,av);}
/* repl.scm:51: chicken.base#exit */
t3=*((C_word*)lf[10]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.repl#quit in k458 in k455 */
static void C_ccall f_486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_486,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* repl.scm:52: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word av2[3];
av2[0]=lf[9];
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
/* repl.scm:52: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word av2[3];
av2[0]=lf[9];
av2[1]=t1;
av2[2]=C_get_rest_arg(c,2,av,2,t0);
tp(3,av2);}}}

/* chicken.repl#reset in k458 in k455 */
static void C_ccall f_502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_502,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_506,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:55: reset-handler */
t3=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k504 in chicken.repl#reset in k458 in k455 */
static void C_ccall f_506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_506,c,av);}
/* repl.scm:55: g125 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k511 in k458 in k455 */
static void C_ccall f_513(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_513,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.repl#repl-prompt ...) */,t1);
t3=*((C_word*)lf[15]+1);
t4=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_515,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#resize-trace-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_531,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[21]+1);
t7=*((C_word*)lf[22]+1);
t8=C_mutate((C_word*)lf[23]+1 /* (set! chicken.repl#repl ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_537,a[2]=t6,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* ##sys#read-prompt-hook in k511 in k458 in k455 */
static void C_ccall f_515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_515,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_519,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:63: repl-prompt */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k517 in ##sys#read-prompt-hook in k511 in k458 in k455 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_519,c,av);}
/* repl.scm:64: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[18]+1);
tp(3,av2);}}

/* k524 in ##sys#read-prompt-hook in k511 in k458 in k455 */
static void C_ccall f_526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_526,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* repl.scm:63: g130 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k527 in k524 in ##sys#read-prompt-hook in k511 in k458 in k455 */
static void C_ccall f_529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_529,c,av);}
/* repl.scm:63: ##sys#print */
t2=*((C_word*)lf[7]+1);{
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
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#resize-trace-buffer in k511 in k458 in k455 */
static void C_ccall f_531(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_531,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_535,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:67: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k533 in ##sys#resize-trace-buffer in k511 in k458 in k455 */
static void C_ccall f_535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_535,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_resize_trace_buffer(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_537,c,av);}
a=C_alloc(18);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_543,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t5=*((C_word*)lf[26]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[18]+1);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[25]+1);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_661,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* repl.scm:93: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t11;
tp(2,av2);}}

/* write-err in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_543(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_543,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[24]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_557,a[2]=t5,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_557(t7,t1,t2);}

/* for-each-loop156 in write-err in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_557,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:78: g172 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[25]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k565 in for-each-loop156 in write-err in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_567,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_557(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k602 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_604,c,av);}
a=C_alloc(6);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_617,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_621,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:87: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=C_i_length(((C_word*)t0)[2]);
tp(3,av2);}}
else{
/* repl.scm:183: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_791(t2,((C_word*)t0)[5]);}}

/* k615 in k602 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_617,c,av);}
/* repl.scm:86: ##sys#print */
t2=*((C_word*)lf[7]+1);{
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
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k619 in k602 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_621,c,av);}
/* repl.scm:87: string-append */
t2=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=t1;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop186 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_629,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_639,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:84: g202 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[18]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k637 in for-each-loop186 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_639,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_629(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_661,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* repl.scm:94: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
tp(2,av2);}}

/* k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_664(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_664,c,av);}
a=C_alloc(29);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=lf[9];
t5=*((C_word*)lf[27]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_681,a[2]=t3,a[3]=t9,a[4]=((C_word*)t0)[5],a[5]=t7,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=t5,a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp);
/* repl.scm:109: call-with-current-continuation */
t13=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=((C_word*)t0)[9];
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}

/* saveports in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static C_word C_fcall f_666(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[26]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[18]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[25]+1));
return(t3);}

/* resetports in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static C_word C_fcall f_672(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t2=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[4])[1]);
return(t3);}

/* a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_681(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_681,c,av);}
a=C_alloc(22);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_687,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_785,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[2],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* repl.scm:111: ##sys#dynamic-wind */
t6=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_687,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* repl.scm:113: chicken.load#load-verbose */
t3=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_692(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_692,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_694,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_701,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:115: chicken.load#load-verbose */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* chicken.repl#quit-hook in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_694,c,av);}
/* repl.scm:114: k */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_701,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:116: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
tp(3,av2);}}

/* a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_706,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(
/* repl.scm:118: resetports */
  f_672(((C_word*)((C_word*)t0)[2])[1])
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_713,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* repl.scm:119: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[38];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_713,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_780,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:121: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[37];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_716(2,av2);}}}

/* k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_716(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_716,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_760,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:125: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:128: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t5;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}}

/* k717 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_719(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_719,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[28]+1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[28]+1))){
if(C_truep(C_i_structurep(*((C_word*)lf[28]+1),lf[34]))){
t4=C_slot(*((C_word*)lf[28]+1),C_fix(2));
t5=C_i_member(lf[35],t4);
t6=t3;
f_723(t6,(C_truep(t5)?C_i_cadr(t5):C_SCHEME_FALSE));}
else{
t4=t3;
f_723(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_723(t4,C_SCHEME_FALSE);}}

/* k721 in k717 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_723,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
f_726(2,av2);}}
else{
/* repl.scm:135: chicken.base#get-call-chain */
t3=*((C_word*)lf[32]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
av2[3]=*((C_word*)lf[33]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k724 in k721 in k717 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_726,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_729,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:136: ##sys#really-print-call-chain */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[25]+1);
av2[3]=t1;
av2[4]=lf[31];
tp(5,av2);}}

/* k727 in k724 in k721 in k717 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_729,c,av);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#repl-recent-call-chain ...) */,((C_word*)t0)[2]);
/* repl.scm:140: chicken.base#flush-output */
t3=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k758 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_760,c,av);}
/* repl.scm:126: write-err */
f_543(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k764 in k714 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_766,c,av);}
/* repl.scm:129: write-err */
f_543(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k778 in k711 in a705 in k699 in k690 in a686 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_780,c,av);}
/* repl.scm:122: ##sys#print */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_785,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_791(t5,t1);}

/* loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_791,2,t0,t1);}
a=C_alloc(10);
t2=(
/* repl.scm:143: saveports */
  f_666(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[6],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:144: call-with-current-continuation */
t5=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_798,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* repl.scm:151: ##sys#read-prompt-hook */
t3=*((C_word*)lf[16]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_801(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_801,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[3]+1);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:152: g256 */
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_807,c,av);}
a=C_alloc(9);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_816,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:154: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[53]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t3;
av2[2]=*((C_word*)lf[26]+1);
tp(3,av2);}}}

/* k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_816(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_816,c,av);}
a=C_alloc(9);
t2=code_261();
t3=C_set_block_item(lf[27] /* ##sys#unbound-in-eval */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_828,a[2]=((C_word*)t0)[4],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:158: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a821 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_822,c,av);}
/* repl.scm:158: evaluator */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +11,c,4)))){
C_save_and_reclaim((void*)f_828,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+11);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(*((C_word*)lf[46]+1))?C_i_pairp(*((C_word*)lf[27]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_846,a[2]=t6,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_846(t8,t3,*((C_word*)lf[27]+1),C_SCHEME_END_OF_LIST);}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_832(2,av2);}}}

/* k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_832(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_832,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* repl.scm:82: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[41];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_604,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_629,a[2]=t7,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_629(t9,t5,((C_word*)t0)[4]);}
else{
/* repl.scm:183: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_791(t5,((C_word*)t0)[3]);}}}

/* k833 in k830 in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_835,c,av);}
/* repl.scm:183: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_791(t2,((C_word*)t0)[3]);}

/* loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_846(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_846,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_850,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_pairp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:164: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=lf[50];
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
f_930(2,av2);}}
else{
t8=C_u_i_car(t2);
t9=C_u_i_car(t8);
t10=C_u_i_namespaced_symbolp(t9);
if(C_truep(t10)){
t11=t7;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
f_930(2,av2);}}
else{
t11=C_u_i_car(t2);
/* repl.scm:179: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t7;
av2[2]=C_u_i_car(t11);
tp(3,av2);}}}}}

/* k848 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_850,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_862(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_862,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_900,a[2]=t4,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_900(t6,t2,((C_word*)t0)[3]);}

/* k865 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_867,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:169: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k868 in k865 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_870,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_cdr(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_880,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:171: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* repl.scm:174: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}}

/* k871 in k868 in k865 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_873,c,av);}
/* repl.scm:174: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}

/* k878 in k868 in k865 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_880,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* repl.scm:172: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k881 in k878 in k868 in k865 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_883,c,av);}
/* repl.scm:173: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[25]+1);
tp(4,av2);}}

/* k893 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_895,c,av);}
/* repl.scm:176: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[25]+1);
tp(3,av2);}}

/* for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_fcall f_900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_900,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_867,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:168: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[25]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k908 in for-each-loop274 in k860 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_910,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_900(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k928 in loop in a827 in k814 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_930(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_930,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
/* repl.scm:180: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_846(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[4]);
t3=C_u_i_car(((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[5]);
/* repl.scm:181: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_846(t5,((C_word*)t0)[3],t2,t4);}}

/* k973 in k805 in k799 in k796 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_975,c,av);}
t2=C_eqp(C_make_character(10),t1);
if(C_truep(t2)){
/* repl.scm:155: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[26]+1);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_816(2,av2);}}}

/* a976 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_977,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:146: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a982 in a976 in loop in a784 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_983,c,av);}
t2=C_set_block_item(lf[54] /* ##sys#read-error-with-line-number */,0,C_SCHEME_FALSE);
t3=(
/* repl.scm:149: resetports */
  f_672(((C_word*)((C_word*)t0)[2])[1])
);
/* repl.scm:150: c */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a992 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_993,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* repl.scm:185: chicken.load#load-verbose */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k995 in a992 in a680 in k662 in k659 in chicken.repl#repl in k511 in k458 in k455 */
static void C_ccall f_997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_997,c,av);}
a=C_alloc(4);
t2=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,((C_word*)t0)[2]);
t3=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#unbound-in-eval ...) */,((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:188: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_repl_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("repl"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_repl_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(339))){
C_save(t1);
C_rereclaim2(339*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,59);
lf[0]=C_h_intern(&lf[0],4, C_text("repl"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.repl#"));
lf[2]=C_h_intern(&lf[2],29, C_text("##sys#repl-print-length-limit"));
lf[3]=C_h_intern(&lf[3],20, C_text("##sys#repl-read-hook"));
lf[4]=C_h_intern(&lf[4],28, C_text("##sys#repl-recent-call-chain"));
lf[5]=C_h_intern(&lf[5],21, C_text("##sys#repl-print-hook"));
lf[6]=C_h_intern(&lf[6],18, C_text("##sys#write-char-0"));
lf[7]=C_h_intern(&lf[7],11, C_text("##sys#print"));
lf[8]=C_h_intern(&lf[8],29, C_text("##sys#with-print-length-limit"));
lf[10]=C_h_intern(&lf[10],17, C_text("chicken.base#exit"));
lf[11]=C_h_intern(&lf[11],17, C_text("chicken.repl#quit"));
lf[12]=C_h_intern(&lf[12],26, C_text("chicken.repl#reset-handler"));
lf[13]=C_h_intern(&lf[13],19, C_text("##sys#reset-handler"));
lf[14]=C_h_intern(&lf[14],18, C_text("chicken.repl#reset"));
lf[15]=C_h_intern(&lf[15],24, C_text("chicken.repl#repl-prompt"));
lf[16]=C_h_intern(&lf[16],22, C_text("##sys#read-prompt-hook"));
lf[17]=C_h_intern(&lf[17],18, C_text("##sys#flush-output"));
lf[18]=C_h_intern(&lf[18],21, C_text("##sys#standard-output"));
lf[19]=C_h_intern(&lf[19],25, C_text("##sys#resize-trace-buffer"));
lf[20]=C_h_intern(&lf[20],18, C_text("##sys#check-fixnum"));
lf[21]=C_h_intern(&lf[21],11, C_text("scheme#eval"));
lf[22]=C_h_intern(&lf[22],11, C_text("scheme#read"));
lf[23]=C_h_intern(&lf[23],17, C_text("chicken.repl#repl"));
lf[24]=C_h_intern(&lf[24],8, C_text("for-each"));
lf[25]=C_h_intern(&lf[25],20, C_text("##sys#standard-error"));
lf[26]=C_h_intern(&lf[26],20, C_text("##sys#standard-input"));
lf[27]=C_h_intern(&lf[27],21, C_text("##sys#unbound-in-eval"));
lf[28]=C_h_intern(&lf[28],20, C_text("##sys#last-exception"));
lf[29]=C_h_intern(&lf[29],25, C_text("chicken.base#flush-output"));
lf[30]=C_h_intern(&lf[30],29, C_text("##sys#really-print-call-chain"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020\012\011Call history:\012"));
lf[32]=C_h_intern(&lf[32],27, C_text("chicken.base#get-call-chain"));
lf[33]=C_h_intern(&lf[33],20, C_text("##sys#current-thread"));
lf[34]=C_h_intern(&lf[34],9, C_text("condition"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001exn\376\001\000\000\012\001call-chain"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\012Error"));
lf[39]=C_h_intern(&lf[39],19, C_text("##sys#error-handler"));
lf[40]=C_h_intern(&lf[40],25, C_text("chicken.load#load-verbose"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014; no values\012"));
lf[42]=C_h_intern(&lf[42],20, C_text("scheme#string-append"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002; "));
lf[44]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 values\012"));
lf[45]=C_h_intern(&lf[45],20, C_text("##sys#number->string"));
lf[46]=C_h_intern(&lf[46],22, C_text("##sys#warnings-enabled"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 (in "));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[49]=C_h_intern(&lf[49],12, C_text("##sys#notice"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000=the following toplevel variables are referenced but unbound:\012"));
lf[51]=C_h_intern(&lf[51],34, C_text("##sys#symbol-has-toplevel-binding\077"));
lf[52]=C_h_intern(&lf[52],17, C_text("##sys#read-char-0"));
lf[53]=C_h_intern(&lf[53],17, C_text("##sys#peek-char-0"));
lf[54]=C_h_intern(&lf[54],33, C_text("##sys#read-error-with-line-number"));
lf[55]=C_h_intern(&lf[55],37, C_text("scheme#call-with-current-continuation"));
lf[56]=C_h_intern(&lf[56],18, C_text("##sys#dynamic-wind"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004#;> "));
lf[58]=C_h_intern(&lf[58],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,59,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[75] = {
{C_text("f_1002:repl_2escm"),(void*)f_1002},
{C_text("f_1013:repl_2escm"),(void*)f_1013},
{C_text("f_457:repl_2escm"),(void*)f_457},
{C_text("f_460:repl_2escm"),(void*)f_460},
{C_text("f_465:repl_2escm"),(void*)f_465},
{C_text("f_469:repl_2escm"),(void*)f_469},
{C_text("f_474:repl_2escm"),(void*)f_474},
{C_text("f_480:repl_2escm"),(void*)f_480},
{C_text("f_486:repl_2escm"),(void*)f_486},
{C_text("f_502:repl_2escm"),(void*)f_502},
{C_text("f_506:repl_2escm"),(void*)f_506},
{C_text("f_513:repl_2escm"),(void*)f_513},
{C_text("f_515:repl_2escm"),(void*)f_515},
{C_text("f_519:repl_2escm"),(void*)f_519},
{C_text("f_526:repl_2escm"),(void*)f_526},
{C_text("f_529:repl_2escm"),(void*)f_529},
{C_text("f_531:repl_2escm"),(void*)f_531},
{C_text("f_535:repl_2escm"),(void*)f_535},
{C_text("f_537:repl_2escm"),(void*)f_537},
{C_text("f_543:repl_2escm"),(void*)f_543},
{C_text("f_557:repl_2escm"),(void*)f_557},
{C_text("f_567:repl_2escm"),(void*)f_567},
{C_text("f_604:repl_2escm"),(void*)f_604},
{C_text("f_617:repl_2escm"),(void*)f_617},
{C_text("f_621:repl_2escm"),(void*)f_621},
{C_text("f_629:repl_2escm"),(void*)f_629},
{C_text("f_639:repl_2escm"),(void*)f_639},
{C_text("f_661:repl_2escm"),(void*)f_661},
{C_text("f_664:repl_2escm"),(void*)f_664},
{C_text("f_666:repl_2escm"),(void*)f_666},
{C_text("f_672:repl_2escm"),(void*)f_672},
{C_text("f_681:repl_2escm"),(void*)f_681},
{C_text("f_687:repl_2escm"),(void*)f_687},
{C_text("f_692:repl_2escm"),(void*)f_692},
{C_text("f_694:repl_2escm"),(void*)f_694},
{C_text("f_701:repl_2escm"),(void*)f_701},
{C_text("f_706:repl_2escm"),(void*)f_706},
{C_text("f_713:repl_2escm"),(void*)f_713},
{C_text("f_716:repl_2escm"),(void*)f_716},
{C_text("f_719:repl_2escm"),(void*)f_719},
{C_text("f_723:repl_2escm"),(void*)f_723},
{C_text("f_726:repl_2escm"),(void*)f_726},
{C_text("f_729:repl_2escm"),(void*)f_729},
{C_text("f_760:repl_2escm"),(void*)f_760},
{C_text("f_766:repl_2escm"),(void*)f_766},
{C_text("f_780:repl_2escm"),(void*)f_780},
{C_text("f_785:repl_2escm"),(void*)f_785},
{C_text("f_791:repl_2escm"),(void*)f_791},
{C_text("f_798:repl_2escm"),(void*)f_798},
{C_text("f_801:repl_2escm"),(void*)f_801},
{C_text("f_807:repl_2escm"),(void*)f_807},
{C_text("f_816:repl_2escm"),(void*)f_816},
{C_text("f_822:repl_2escm"),(void*)f_822},
{C_text("f_828:repl_2escm"),(void*)f_828},
{C_text("f_832:repl_2escm"),(void*)f_832},
{C_text("f_835:repl_2escm"),(void*)f_835},
{C_text("f_846:repl_2escm"),(void*)f_846},
{C_text("f_850:repl_2escm"),(void*)f_850},
{C_text("f_862:repl_2escm"),(void*)f_862},
{C_text("f_867:repl_2escm"),(void*)f_867},
{C_text("f_870:repl_2escm"),(void*)f_870},
{C_text("f_873:repl_2escm"),(void*)f_873},
{C_text("f_880:repl_2escm"),(void*)f_880},
{C_text("f_883:repl_2escm"),(void*)f_883},
{C_text("f_895:repl_2escm"),(void*)f_895},
{C_text("f_900:repl_2escm"),(void*)f_900},
{C_text("f_910:repl_2escm"),(void*)f_910},
{C_text("f_930:repl_2escm"),(void*)f_930},
{C_text("f_975:repl_2escm"),(void*)f_975},
{C_text("f_977:repl_2escm"),(void*)f_977},
{C_text("f_983:repl_2escm"),(void*)f_983},
{C_text("f_993:repl_2escm"),(void*)f_993},
{C_text("f_997:repl_2escm"),(void*)f_997},
{C_text("toplevel:repl_2escm"),(void*)C_repl_toplevel},
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
o|hiding unexported module binding: chicken.repl#d 
o|hiding unexported module binding: chicken.repl#define-alias 
o|hiding unexported module binding: chicken.repl#quit-hook 
S|applied compiler syntax:
S|  scheme#for-each		3
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (scheme#car pair)
o|  2 (scheme#caar (pair pair *))
o|  6 (scheme#cdr pair)
o|  2 (##sys#check-list (or pair list) *)
(o e)|safe calls: 52 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.repl#reset chicken.repl#reset-handler chicken.repl#quit chicken.repl#quit-hook ##sys#repl-print-hook ##sys#repl-recent-call-chain ##sys#repl-read-hook ##sys#repl-print-length-limit) 
o|propagated global variable: g107108 ##sys#print 
o|inlining procedure: k488 
o|inlining procedure: k488 
o|inlining procedure: k559 
o|contracted procedure: "(repl.scm:78) g157164" 
o|inlining procedure: k559 
o|inlining procedure: k582 
o|inlining procedure: k582 
o|inlining procedure: k605 
o|inlining procedure: k605 
o|inlining procedure: k631 
o|contracted procedure: "(repl.scm:84) g187194" 
o|inlining procedure: k631 
o|propagated global variable: lexn238 ##sys#last-exception 
o|inlining procedure: k739 
o|inlining procedure: k739 
o|propagated global variable: lexn238 ##sys#last-exception 
o|inlining procedure: k808 
o|inlining procedure: k808 
o|inlining procedure: k848 
o|inlining procedure: k902 
o|contracted procedure: "(repl.scm:166) g275282" 
o|inlining procedure: k871 
o|inlining procedure: k871 
o|inlining procedure: k902 
o|inlining procedure: k848 
o|inlining procedure: k950 
o|inlining procedure: k950 
o|replaced variables: 105 
o|removed binding forms: 79 
o|substituted constant variable: r4891015 
o|substituted constant variable: r4891015 
o|substituted constant variable: r7401034 
o|contracted procedure: "(repl.scm:182) write-results152" 
o|inlining procedure: k848 
o|converted assignments to bindings: (write-err151) 
o|simplifications: ((let . 1)) 
o|replaced variables: 12 
o|removed binding forms: 103 
o|replaced variables: 9 
o|removed binding forms: 15 
o|inlining procedure: k833 
o|inlining procedure: k833 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((let . 5) (if . 5) (##core#call . 36)) 
o|  call simplifications:
o|    scheme#eof-object?
o|    ##sys#call-with-values
o|    scheme#caar
o|    scheme#memq
o|    scheme#cons
o|    scheme#eq?	2
o|    scheme#not
o|    scheme#length
o|    ##sys#structure?
o|    scheme#member
o|    scheme#cadr
o|    ##sys#check-list
o|    scheme#pair?	7
o|    ##sys#slot	7
o|    scheme#null?	5
o|    scheme#car	4
o|contracted procedure: k494 
o|contracted procedure: k488 
o|contracted procedure: k1006 
o|contracted procedure: k539 
o|contracted procedure: k550 
o|contracted procedure: k562 
o|contracted procedure: k572 
o|contracted procedure: k576 
o|contracted procedure: k736 
o|contracted procedure: k752 
o|propagated global variable: lexn238 ##sys#last-exception 
o|contracted procedure: k742 
o|contracted procedure: k770 
o|contracted procedure: k755 
o|contracted procedure: k802 
o|contracted procedure: k811 
o|contracted procedure: k585 
o|contracted procedure: k656 
o|contracted procedure: k652 
o|contracted procedure: k594 
o|contracted procedure: k608 
o|contracted procedure: k623 
o|contracted procedure: k634 
o|contracted procedure: k644 
o|contracted procedure: k648 
o|contracted procedure: k839 
o|contracted procedure: k851 
o|contracted procedure: k857 
o|contracted procedure: k905 
o|contracted procedure: k915 
o|contracted procedure: k919 
o|contracted procedure: k890 
o|contracted procedure: k960 
o|contracted procedure: k925 
o|contracted procedure: k942 
o|contracted procedure: k966 
o|simplifications: ((let . 17)) 
o|removed binding forms: 35 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest116117 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest116117 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest144145 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest144145 0 
o|direct leaf routine/allocation: saveports218 0 
o|direct leaf routine/allocation: resetports219 0 
o|contracted procedure: "(repl.scm:118) k708" 
o|contracted procedure: "(repl.scm:143) k793" 
o|contracted procedure: "(repl.scm:149) k986" 
o|removed binding forms: 3 
o|customizable procedures: (loop265 for-each-loop274290 for-each-loop186204 loop251 write-err151 k721 for-each-loop156174) 
o|calls to known targets: 24 
o|unused rest argument: rest116117 f_486 
o|unused rest argument: rest144145 f_537 
o|fast box initializations: 7 
o|fast global references: 3 
o|fast global assignments: 3 
o|dropping unused closure argument: f_543 
*/
/* end of file */
