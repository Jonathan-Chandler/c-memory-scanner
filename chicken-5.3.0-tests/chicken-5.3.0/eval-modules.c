/* Generated from eval-modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: eval-modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval-modules.c
   unit: eval-modules
   uses: eval
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,52,54,52,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,52,53,56,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,97,52,56,56,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,97,52,56,50,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,97,53,48,54,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,97,53,49,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,53,49,50,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,97,53,52,50,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,53,51,54,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,53,54,54,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,53,54,48,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,53,57,48,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,53,56,52,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,54,49,52,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,97,54,48,56,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,54,51,50,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,54,52,52,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,54,51,56,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,54,54,56,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,54,54,50,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,54,57,50,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,54,56,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,6),40,97,55,49,54,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,55,49,48,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,97,55,52,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,97,55,51,52,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,97,55,53,56,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,97,55,55,48,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,97,55,54,52,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,6),40,97,55,57,52,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,97,55,56,56,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,97,56,49,56,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,97,56,49,50,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,97,56,52,50,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,6),40,97,56,51,54,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,97,56,54,54,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,6),40,97,56,54,48,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,6),40,97,56,57,48,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,6),40,97,56,56,52,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,6),40,97,57,49,52,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,6),40,97,57,48,56,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,6),40,97,57,51,56,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,97,57,51,50,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,6),40,97,57,54,50,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,6),40,97,57,53,54,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,6),40,97,57,56,54,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,6),40,97,57,56,48,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,48,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,52,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,56,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,56,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,50,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,54,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,49,48,54,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,49,49,48,48,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,48,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,49,49,50,52,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,49,49,53,52,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,56,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,56,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,50,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,50,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,49,49,57,54,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,54,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,48,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,48,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,52,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,49,50,55,52,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,56,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,56,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,50,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,49,51,50,50,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,54,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word *av) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word *av) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word *av) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word *av) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word *av) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word *av) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word *av) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word *av) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word *av) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word *av) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word *av) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word *av) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word *av) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word *av) C_noret;
C_noret_decl(f_465)
static void C_ccall f_465(C_word c,C_word *av) C_noret;
C_noret_decl(f_483)
static void C_ccall f_483(C_word c,C_word *av) C_noret;
C_noret_decl(f_489)
static void C_ccall f_489(C_word c,C_word *av) C_noret;
C_noret_decl(f_507)
static void C_ccall f_507(C_word c,C_word *av) C_noret;
C_noret_decl(f_513)
static void C_ccall f_513(C_word c,C_word *av) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word *av) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word *av) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word *av) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word *av) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word *av) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word *av) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word *av) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word *av) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word *av) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word *av) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word *av) C_noret;
C_noret_decl(f_669)
static void C_ccall f_669(C_word c,C_word *av) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word *av) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word *av) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word *av) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word *av) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word *av) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word *av) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word *av) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word *av) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word *av) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word *av) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word *av) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word *av) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word *av) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word *av) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word *av) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word *av) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word *av) C_noret;
C_noret_decl(f_963)
static void C_ccall f_963(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_2dmodules_toplevel)
C_externexport void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av) C_noret;

/* a1004 in k455 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1005,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken.pretty-print.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1010 in a1004 in k455 */
static void C_ccall f_1011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1011,c,av);}
/* chicken.pretty-print.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[68];
av2[3]=lf[38];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[69];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1028 in k455 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1029,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken.process.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1034 in a1028 in k455 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1035,c,av);}
/* chicken.process.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[70];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[71];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1052 in k455 */
static void C_ccall f_1053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1053,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* chicken.process.signal.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1058 in a1052 in k455 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1059,c,av);}
/* chicken.process.signal.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[72];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[73];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1076 in k455 */
static void C_ccall f_1077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1077,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* chicken.process-context.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1082 in a1076 in k455 */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1083,c,av);}
/* chicken.process-context.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[74];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[75];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1100 in k455 */
static void C_ccall f_1101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1101,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1107,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* chicken.process-context.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1106 in a1100 in k455 */
static void C_ccall f_1107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1107,c,av);}
/* chicken.process-context.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[76];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[77];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1124 in k455 */
static void C_ccall f_1125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1125,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken.random.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1130 in a1124 in k455 */
static void C_ccall f_1131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1131,c,av);}
/* chicken.random.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[78];
av2[3]=lf[38];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[79];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1148 in k455 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1149,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1155,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken.sort.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1154 in a1148 in k455 */
static void C_ccall f_1155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1155,c,av);}
/* chicken.sort.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[80];
av2[3]=lf[29];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[81];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1172 in k455 */
static void C_ccall f_1173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1173,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
/* chicken.time.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1178 in a1172 in k455 */
static void C_ccall f_1179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1179,c,av);}
/* chicken.time.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[82];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[83];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1196 in k455 */
static void C_ccall f_1197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1197,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
/* chicken.continuation.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1202 in a1196 in k455 */
static void C_ccall f_1203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1203,c,av);}
/* chicken.continuation.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[84];
av2[3]=lf[85];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[86];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1220 in k455 */
static void C_ccall f_1221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1221,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1227,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp);
/* chicken.file.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1226 in a1220 in k455 */
static void C_ccall f_1227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1227,c,av);}
/* chicken.file.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[87];
av2[3]=lf[88];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[89];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1244 in k455 */
static void C_ccall f_1245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1245,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1251,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
/* chicken.read-syntax.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1250 in a1244 in k455 */
static void C_ccall f_1251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1251,c,av);}
/* chicken.read-syntax.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[91];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[92];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1268 in k455 */
static void C_ccall f_1269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1269,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1275,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
/* chicken.repl.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1274 in a1268 in k455 */
static void C_ccall f_1275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1275,c,av);}
/* chicken.repl.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[93];
av2[3]=lf[94];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[95];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1292 in k455 */
static void C_ccall f_1293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1293,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken.tcp.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1298 in a1292 in k455 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1299,c,av);}
/* chicken.tcp.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[96];
av2[3]=lf[97];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[98];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a1316 in k455 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1317,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1323,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1322 in a1316 in k455 */
static void C_ccall f_1323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1323,c,av);}
/* srfi-4.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[99];
av2[3]=lf[99];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[100];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* ##sys#import-library-hook in k455 */
static void C_ccall f_1341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1341,c,av);}
t3=C_i_getprop(t2,lf[6],C_SCHEME_FALSE);
if(C_truep(t3)){
/* eval-modules.scm:100: il */
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
/* eval-modules.scm:101: hook */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k455 */
static void C_ccall f_457(C_word c,C_word *av){
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
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(441,c,3)))){
C_save_and_reclaim((void *)f_457,c,av);}
a=C_alloc(441);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_459,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_putprop(&a,3,lf[2],lf[6],t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_putprop(&a,3,lf[7],lf[6],t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_507,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_putprop(&a,3,lf[10],lf[6],t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_513,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_putprop(&a,3,lf[12],lf[6],t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_putprop(&a,3,lf[14],lf[6],t11);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_561,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t14=C_a_i_putprop(&a,3,lf[16],lf[6],t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_585,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_putprop(&a,3,lf[19],lf[6],t15);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_609,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t18=C_a_i_putprop(&a,3,lf[21],lf[6],t17);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_633,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t20=C_a_i_putprop(&a,3,lf[25],lf[6],t19);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_639,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_putprop(&a,3,lf[28],lf[6],t21);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_663,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t24=C_a_i_putprop(&a,3,lf[31],lf[6],t23);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t26=C_a_i_putprop(&a,3,lf[34],lf[6],t25);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_711,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t28=C_a_i_putprop(&a,3,lf[37],lf[6],t27);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t30=C_a_i_putprop(&a,3,lf[40],lf[6],t29);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t32=C_a_i_putprop(&a,3,lf[43],lf[6],t31);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_765,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t34=C_a_i_putprop(&a,3,lf[46],lf[6],t33);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_789,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t36=C_a_i_putprop(&a,3,lf[49],lf[6],t35);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_813,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t38=C_a_i_putprop(&a,3,lf[51],lf[6],t37);
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_837,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t40=C_a_i_putprop(&a,3,lf[53],lf[6],t39);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t42=C_a_i_putprop(&a,3,lf[55],lf[6],t41);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_885,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
t44=C_a_i_putprop(&a,3,lf[57],lf[6],t43);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t46=C_a_i_putprop(&a,3,lf[60],lf[6],t45);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t48=C_a_i_putprop(&a,3,lf[62],lf[6],t47);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_957,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t50=C_a_i_putprop(&a,3,lf[64],lf[6],t49);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t52=C_a_i_putprop(&a,3,lf[66],lf[6],t51);
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
t54=C_a_i_putprop(&a,3,lf[68],lf[6],t53);
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
t56=C_a_i_putprop(&a,3,lf[70],lf[6],t55);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1053,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
t58=C_a_i_putprop(&a,3,lf[72],lf[6],t57);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
t60=C_a_i_putprop(&a,3,lf[74],lf[6],t59);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1101,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t62=C_a_i_putprop(&a,3,lf[76],lf[6],t61);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1125,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t64=C_a_i_putprop(&a,3,lf[78],lf[6],t63);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t66=C_a_i_putprop(&a,3,lf[80],lf[6],t65);
t67=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
t68=C_a_i_putprop(&a,3,lf[82],lf[6],t67);
t69=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1197,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t70=C_a_i_putprop(&a,3,lf[84],lf[6],t69);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1221,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t72=C_a_i_putprop(&a,3,lf[87],lf[6],t71);
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1245,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t74=C_a_i_putprop(&a,3,lf[90],lf[6],t73);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t76=C_a_i_putprop(&a,3,lf[93],lf[6],t75);
t77=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
t78=C_a_i_putprop(&a,3,lf[96],lf[6],t77);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t80=C_a_i_putprop(&a,3,lf[99],lf[6],t79);
t81=*((C_word*)lf[101]+1);
t82=C_mutate((C_word*)lf[101]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1341,a[2]=t81,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t83=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t83;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t83+1)))(2,av2);}}

/* a458 in k455 */
static void C_ccall f_459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_459,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_465,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken.bitwise.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a464 in a458 in k455 */
static void C_ccall f_465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_465,c,av);}
/* chicken.bitwise.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[2];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[4];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a482 in k455 */
static void C_ccall f_483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_483,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_489,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken.blob.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a488 in a482 in k455 */
static void C_ccall f_489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_489,c,av);}
/* chicken.blob.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[7];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[8];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a506 in k455 */
static void C_ccall f_507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_507,c,av);}
/* chicken.foreign.import.scm:27: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=lf[10];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=*((C_word*)lf[11]+1);
tp(5,av2);}}

/* a512 in k455 */
static void C_ccall f_513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_513,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_519,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken.fixnum.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a518 in a512 in k455 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_519,c,av);}
/* chicken.fixnum.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[12];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[13];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a536 in k455 */
static void C_ccall f_537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_537,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_543,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* chicken.keyword.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a542 in a536 in k455 */
static void C_ccall f_543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_543,c,av);}
/* chicken.keyword.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[14];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[15];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a560 in k455 */
static void C_ccall f_561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_561,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_567,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken.internal.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a566 in a560 in k455 */
static void C_ccall f_567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_567,c,av);}
/* chicken.internal.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[16];
av2[3]=lf[17];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[18];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a584 in k455 */
static void C_ccall f_585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_585,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_591,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken.platform.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a590 in a584 in k455 */
static void C_ccall f_591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_591,c,av);}
/* chicken.platform.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[19];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[20];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a608 in k455 */
static void C_ccall f_609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_609,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_615,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken.errno.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a614 in a608 in k455 */
static void C_ccall f_615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_615,c,av);}
/* chicken.errno.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[21];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[23];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a632 in k455 */
static void C_ccall f_633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_633,c,av);}
/* chicken.condition.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t1;
av2[2]=lf[25];
av2[3]=lf[3];
av2[4]=lf[26];
av2[5]=*((C_word*)lf[27]+1);
tp(6,av2);}}

/* a638 in k455 */
static void C_ccall f_639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_639,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_645,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken.string.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a644 in a638 in k455 */
static void C_ccall f_645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_645,c,av);}
/* chicken.string.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[29];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[30];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a662 in k455 */
static void C_ccall f_663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_663,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_669,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken.irregex.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a668 in a662 in k455 */
static void C_ccall f_669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_669,c,av);}
/* chicken.irregex.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[31];
av2[3]=lf[32];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[33];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a686 in k455 */
static void C_ccall f_687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_687,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* chicken.pathname.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a692 in a686 in k455 */
static void C_ccall f_693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_693,c,av);}
/* chicken.pathname.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[34];
av2[3]=lf[35];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[36];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a710 in k455 */
static void C_ccall f_711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_711,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken.io.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a716 in a710 in k455 */
static void C_ccall f_717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_717,c,av);}
/* chicken.io.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[37];
av2[3]=lf[38];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[39];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a734 in k455 */
static void C_ccall f_735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_735,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_741,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* chicken.port.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a740 in a734 in k455 */
static void C_ccall f_741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_741,c,av);}
/* chicken.port.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[40];
av2[3]=lf[41];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[42];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a758 in k455 */
static void C_ccall f_759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_759,c,av);}
/* chicken.time.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t1;
av2[2]=lf[43];
av2[3]=lf[3];
av2[4]=lf[44];
av2[5]=*((C_word*)lf[45]+1);
tp(6,av2);}}

/* a764 in k455 */
static void C_ccall f_765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_765,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken.memory.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a770 in a764 in k455 */
static void C_ccall f_771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_771,c,av);}
/* chicken.memory.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[46];
av2[3]=lf[47];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[48];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a788 in k455 */
static void C_ccall f_789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_789,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken.file.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a794 in a788 in k455 */
static void C_ccall f_795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_795,c,av);}
/* chicken.file.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[49];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[50];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a812 in k455 */
static void C_ccall f_813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_813,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken.flonum.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a818 in a812 in k455 */
static void C_ccall f_819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_819,c,av);}
/* chicken.flonum.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[51];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[52];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a836 in k455 */
static void C_ccall f_837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_837,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken.format.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a842 in a836 in k455 */
static void C_ccall f_843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_843,c,av);}
/* chicken.format.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[53];
av2[3]=lf[38];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[54];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a860 in k455 */
static void C_ccall f_861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_861,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
/* chicken.gc.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a866 in a860 in k455 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_867,c,av);}
/* chicken.gc.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[55];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[56];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a884 in k455 */
static void C_ccall f_885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_885,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_891,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* chicken.eval.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a890 in a884 in k455 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_891,c,av);}
/* chicken.eval.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[57];
av2[3]=lf[58];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[59];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a908 in k455 */
static void C_ccall f_909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_909,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
/* chicken.load.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a914 in a908 in k455 */
static void C_ccall f_915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_915,c,av);}
/* chicken.load.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[60];
av2[3]=lf[58];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[61];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a932 in k455 */
static void C_ccall f_933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_933,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_939,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
/* chicken.locative.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a938 in a932 in k455 */
static void C_ccall f_939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_939,c,av);}
/* chicken.locative.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[62];
av2[3]=lf[47];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[63];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a956 in k455 */
static void C_ccall f_957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_957,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_963,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken.memory.representation.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a962 in a956 in k455 */
static void C_ccall f_963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_963,c,av);}
/* chicken.memory.representation.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[64];
av2[3]=lf[47];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[65];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* a980 in k455 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_981,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken.plist.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a986 in a980 in k455 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_987,c,av);}
/* chicken.plist.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[66];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[67];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval-modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_2dmodules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(15408))){
C_save(t1);
C_rereclaim2(15408*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[0]=C_h_intern(&lf[0],12, C_text("eval-modules"));
lf[1]=C_h_intern(&lf[1],30, C_text("##sys#register-compiled-module"));
lf[2]=C_h_intern(&lf[2],15, C_text("chicken.bitwise"));
lf[3]=C_h_intern(&lf[3],7, C_text("library"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001arithmetic-shift\376\001\000\000 \001chicken.bitwise#arithmetic-shift\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\016\001integer-length\376\001\000\000\036\001chicken.bitwise#integer-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001bit->boo"
"lean\376\001\000\000\034\001chicken.bitwise#bit->boolean\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001bitwise-not\376\001\000\000\033\001chicken.b"
"itwise#bitwise-not\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001bitwise-xor\376\001\000\000\033\001chicken.bitwise#bitwise-xor\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\013\001bitwise-ior\376\001\000\000\033\001chicken.bitwise#bitwise-ior\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001bitwis"
"e-and\376\001\000\000\033\001chicken.bitwise#bitwise-and\376\377\016"));
lf[5]=C_h_intern(&lf[5],22, C_text("##sys#with-environment"));
lf[6]=C_h_intern(&lf[6],12, C_text("##sys#import"));
lf[7]=C_h_intern(&lf[7],12, C_text("chicken.blob"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001blob->string\376\001\000\000\031\001chicken.blob#blob->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001strin"
"g->blob\376\001\000\000\031\001chicken.blob#string->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001blob\077\376\001\000\000\022\001chicken.blob#bl"
"ob\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001blob=\077\376\001\000\000\023\001chicken.blob#blob=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001blob-size\376\001\000\000\026"
"\001chicken.blob#blob-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001make-blob\376\001\000\000\026\001chicken.blob#make-blob\376\377\016"));
lf[9]=C_h_intern(&lf[9],31, C_text("##sys#register-primitive-module"));
lf[10]=C_h_intern(&lf[10],15, C_text("chicken.foreign"));
lf[11]=C_h_intern(&lf[11],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[12]=C_h_intern(&lf[12],14, C_text("chicken.fixnum"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx/\077\376\001\000\000\023\001chicken.fixnum#fx/\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx\052\077\376\001\000\000\023\001chicken.f"
"ixnum#fx\052\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx-\077\376\001\000\000\023\001chicken.fixnum#fx-\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx+\077\376\001\000\000\023"
"\001chicken.fixnum#fx+\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxrem\376\001\000\000\024\001chicken.fixnum#fxrem\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\005\001fxmod\376\001\000\000\024\001chicken.fixnum#fxmod\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxgcd\376\001\000\000\024\001chicken.fixnum#fxgc"
"d\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fx/\376\001\000\000\022\001chicken.fixnum#fx/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxlen\376\001\000\000\024\001chicken.f"
"ixnum#fxlen\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fxeven\077\376\001\000\000\026\001chicken.fixnum#fxeven\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001fx"
"odd\077\376\001\000\000\025\001chicken.fixnum#fxodd\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxshr\376\001\000\000\024\001chicken.fixnum#fxshr\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxshl\376\001\000\000\024\001chicken.fixnum#fxshl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxnot\376\001\000\000\024\001chicken."
"fixnum#fxnot\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxxor\376\001\000\000\024\001chicken.fixnum#fxxor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxior"
"\376\001\000\000\024\001chicken.fixnum#fxior\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxand\376\001\000\000\024\001chicken.fixnum#fxand\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\005\001fxneg\376\001\000\000\024\001chicken.fixnum#fxneg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxmax\376\001\000\000\024\001chicken.fixnu"
"m#fxmax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fxmin\376\001\000\000\024\001chicken.fixnum#fxmin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx<=\376\001\000\000\023\001"
"chicken.fixnum#fx<=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fx>=\376\001\000\000\023\001chicken.fixnum#fx>=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001"
"fx<\376\001\000\000\022\001chicken.fixnum#fx<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fx>\376\001\000\000\022\001chicken.fixnum#fx>\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\003\001fx=\376\001\000\000\022\001chicken.fixnum#fx=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fx\052\376\001\000\000\022\001chicken.fixnum#fx\052\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\003\001fx-\376\001\000\000\022\001chicken.fixnum#fx-\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fx+\376\001\000\000\022\001chicken.fixnum#f"
"x+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001fixnum-precision\376\001\000\000\037\001chicken.fixnum#fixnum-precision\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\013\001fixnum-bits\376\001\000\000\032\001chicken.fixnum#fixnum-bits\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001most-negative-"
"fixnum\376\001\000\000#\001chicken.fixnum#most-negative-fixnum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001most-positive-fix"
"num\376\001\000\000#\001chicken.fixnum#most-positive-fixnum\376\377\016"));
lf[14]=C_h_intern(&lf[14],15, C_text("chicken.keyword"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001keyword\077\376\001\000\000\030\001chicken.keyword#keyword\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001get-keywor"
"d\376\001\000\000\033\001chicken.keyword#get-keyword\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001keyword->string\376\001\000\000\037\001chicken.k"
"eyword#keyword->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001string->keyword\376\001\000\000\037\001chicken.keyword#strin"
"g->keyword\376\377\016"));
lf[16]=C_h_intern(&lf[16],16, C_text("chicken.internal"));
lf[17]=C_h_intern(&lf[17],8, C_text("internal"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001string->c-identifier\376\001\000\000%\001chicken.internal#string->c-identifier\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001library-id\376\001\000\000\033\001chicken.internal#library-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001valid-"
"library-specifier\077\376\001\000\000)\001chicken.internal#valid-library-specifier\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022"
"\001module-requirement\376\001\000\000#\001chicken.internal#module-requirement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001chec"
"k-for-multiple-bindings\376\001\000\000,\001chicken.internal#check-for-multiple-bindings\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\014\001macro-subset\376\001\000\000\035\001chicken.internal#macro-subset\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001fixup-ma"
"cro-environment\376\001\000\000(\001chicken.internal#fixup-macro-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001mak"
"e-hash-table\376\001\000\000 \001chicken.internal#make-hash-table\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001hash-table-ref"
"\376\001\000\000\037\001chicken.internal#hash-table-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001hash-table-set!\376\001\000\000 \001chicke"
"n.internal#hash-table-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001hash-table-update!\376\001\000\000#\001chicken.intern"
"al#hash-table-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001hash-table-for-each\376\001\000\000$\001chicken.internal#h"
"ash-table-for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001hash-table-size\376\001\000\000 \001chicken.internal#hash-tab"
"le-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001default-imports\376\001\000\000 \001chicken.internal#default-imports\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\026\001default-syntax-imports\376\001\000\000\047\001chicken.internal#default-syntax-imports\376"
"\377\016"));
lf[19]=C_h_intern(&lf[19],16, C_text("chicken.platform"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001build-platform\376\001\000\000\037\001chicken.platform#build-platform\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\017\001chicken-version\376\001\000\000 \001chicken.platform#chicken-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001chicken-"
"home\376\001\000\000\035\001chicken.platform#chicken-home\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001feature\077\376\001\000\000\031\001chicken.pla"
"tform#feature\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001features\376\001\000\000\031\001chicken.platform#features\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\022\001machine-byte-order\376\001\000\000#\001chicken.platform#machine-byte-order\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001"
"machine-type\376\001\000\000\035\001chicken.platform#machine-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001repository-path\376\001"
"\000\000 \001chicken.platform#repository-path\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001installation-repository\376\001\000\000("
"\001chicken.platform#installation-repository\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001register-feature!\376\001\000\000\042\001"
"chicken.platform#register-feature!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001unregister-feature!\376\001\000\000$\001chick"
"en.platform#unregister-feature!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001software-type\376\001\000\000\036\001chicken.platfo"
"rm#software-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001software-version\376\001\000\000!\001chicken.platform#software-"
"version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001return-to-host\376\001\000\000\037\001chicken.platform#return-to-host\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\027\001system-config-directory\376\001\000\000(\001chicken.platform#system-config-directory\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001system-cache-directory\376\001\000\000\047\001chicken.platform#system-cache-directo"
"ry\376\377\016"));
lf[21]=C_h_intern(&lf[21],13, C_text("chicken.errno"));
lf[22]=C_h_intern(&lf[22],5, C_text("posix"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/xdev\376\001\000\000\030\001chicken.errno#errno/xdev\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001errno/wo"
"uldblock\376\001\000\000\036\001chicken.errno#errno/wouldblock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/srch\376\001\000\000\030\001chic"
"ken.errno#errno/srch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/spipe\376\001\000\000\031\001chicken.errno#errno/spipe\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/rofs\376\001\000\000\030\001chicken.errno#errno/rofs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/rang"
"e\376\001\000\000\031\001chicken.errno#errno/range\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/pipe\376\001\000\000\030\001chicken.errno#er"
"rno/pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/perm\376\001\000\000\030\001chicken.errno#errno/perm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001"
"errno/nxio\376\001\000\000\030\001chicken.errno#errno/nxio\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/notty\376\001\000\000\031\001chicken"
".errno#errno/notty\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001errno/notempty\376\001\000\000\034\001chicken.errno#errno/notemp"
"ty\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001errno/notdir\376\001\000\000\032\001chicken.errno#errno/notdir\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001er"
"rno/nosys\376\001\000\000\031\001chicken.errno#errno/nosys\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/nospc\376\001\000\000\031\001chicken"
".errno#errno/nospc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/nomem\376\001\000\000\031\001chicken.errno#errno/nomem\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\013\001errno/nolck\376\001\000\000\031\001chicken.errno#errno/nolck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001errno/noex"
"ec\376\001\000\000\032\001chicken.errno#errno/noexec\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/noent\376\001\000\000\031\001chicken.errno"
"#errno/noent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/nodev\376\001\000\000\031\001chicken.errno#errno/nodev\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\013\001errno/nfile\376\001\000\000\031\001chicken.errno#errno/nfile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001errno/nametoolon"
"g\376\001\000\000\037\001chicken.errno#errno/nametoolong\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/mlink\376\001\000\000\031\001chicken.e"
"rrno#errno/mlink\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/mfile\376\001\000\000\031\001chicken.errno#errno/mfile\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\013\001errno/isdir\376\001\000\000\031\001chicken.errno#errno/isdir\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001errno/io\376\001\000\000"
"\026\001chicken.errno#errno/io\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/inval\376\001\000\000\031\001chicken.errno#errno/inv"
"al\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/intr\376\001\000\000\030\001chicken.errno#errno/intr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/"
"ilseq\376\001\000\000\031\001chicken.errno#errno/ilseq\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/fbig\376\001\000\000\030\001chicken.errn"
"o#errno/fbig\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/fault\376\001\000\000\031\001chicken.errno#errno/fault\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\013\001errno/exist\376\001\000\000\031\001chicken.errno#errno/exist\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001errno/dom\376\001\000\000\027\001c"
"hicken.errno#errno/dom\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001errno/deadlk\376\001\000\000\032\001chicken.errno#errno/dead"
"lk\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/child\376\001\000\000\031\001chicken.errno#errno/child\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errn"
"o/busy\376\001\000\000\030\001chicken.errno#errno/busy\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/badf\376\001\000\000\030\001chicken.errn"
"o#errno/badf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001errno/again\376\001\000\000\031\001chicken.errno#errno/again\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\013\001errno/acces\376\001\000\000\031\001chicken.errno#errno/acces\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/2big\376\001\000\000\030\001"
"chicken.errno#errno/2big\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001errno\376\001\000\000\023\001chicken.errno#errno\376\377\016"));
lf[24]=C_h_intern(&lf[24],26, C_text("##sys#register-core-module"));
lf[25]=C_h_intern(&lf[25],17, C_text("chicken.condition"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001abort\376\001\000\000\027\001chicken.condition#abort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001signal\376\001\000\000\030\001ch"
"icken.condition#signal\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001current-exception-handler\376\001\000\000+\001chicken.con"
"dition#current-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001print-error-message\376\001\000\000%\001chicken"
".condition#print-error-message\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001with-exception-handler\376\001\000\000(\001chicke"
"n.condition#with-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001make-property-condition\376\001\000\000)\001c"
"hicken.condition#make-property-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001make-composite-condition"
"\376\001\000\000\052\001chicken.condition#make-composite-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001condition\376\001\000\000\033\001c"
"hicken.condition#condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001condition\077\376\001\000\000\034\001chicken.condition#cond"
"ition\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001condition->list\376\001\000\000!\001chicken.condition#condition->list\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\023\001condition-predicate\376\001\000\000%\001chicken.condition#condition-predicate\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\033\001condition-property-accessor\376\001\000\000-\001chicken.condition#condition-property-"
"accessor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001get-condition-property\376\001\000\000(\001chicken.condition#get-condit"
"ion-property\376\377\016"));
lf[27]=C_h_intern(&lf[27],41, C_text("##sys#chicken.condition-macro-environment"));
lf[28]=C_h_intern(&lf[28],14, C_text("chicken.string"));
lf[29]=C_h_intern(&lf[29],15, C_text("data-structures"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001conc\376\001\000\000\023\001chicken.string#conc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001->string\376\001\000\000\027\001chick"
"en.string#->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-chop\376\001\000\000\032\001chicken.string#string-chop\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\014\001string-chomp\376\001\000\000\033\001chicken.string#string-chomp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001string"
"-compare3\376\001\000\000\036\001chicken.string#string-compare3\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001string-compare3-ci\376"
"\001\000\000!\001chicken.string#string-compare3-ci\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001reverse-list->string\376\001\000\000#\001"
"chicken.string#reverse-list->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001reverse-string-append\376\001\000\000$\001ch"
"icken.string#reverse-string-append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001string-intersperse\376\001\000\000!\001chicke"
"n.string#string-intersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001string-split\376\001\000\000\033\001chicken.string#stri"
"ng-split\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001string-translate\376\001\000\000\037\001chicken.string#string-translate\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\021\001string-translate\052\376\001\000\000 \001chicken.string#string-translate\052\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\013\001substring=\077\376\001\000\000\032\001chicken.string#substring=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001substring-ci=\077\376\001\000"
"\000\035\001chicken.string#substring-ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001substring-index\376\001\000\000\036\001chicken.str"
"ing#substring-index\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001substring-index-ci\376\001\000\000!\001chicken.string#substr"
"ing-index-ci\376\377\016"));
lf[31]=C_h_intern(&lf[31],15, C_text("chicken.irregex"));
lf[32]=C_h_intern(&lf[32],7, C_text("irregex"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001irregex\376\001\000\000\027\001chicken.irregex#irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001irregex\077\376\001\000\000"
"\030\001chicken.irregex#irregex\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string->sre\376\001\000\000\033\001chicken.irregex#strin"
"g->sre\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001maybe-string->sre\376\001\000\000!\001chicken.irregex#maybe-string->sre\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014\001sre->irregex\376\001\000\000\034\001chicken.irregex#sre->irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001irre"
"gex-names\376\001\000\000\035\001chicken.irregex#irregex-names\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001irregex-num-submatch"
"es\376\001\000\000&\001chicken.irregex#irregex-num-submatches\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001string->irregex\376\001\000"
"\000\037\001chicken.irregex#string->irregex\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001make-irregex-chunker\376\001\000\000$\001chic"
"ken.irregex#make-irregex-chunker\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001irregex-extract\376\001\000\000\037\001chicken.irr"
"egex#irregex-extract\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001irregex-fold\376\001\000\000\034\001chicken.irregex#irregex-fo"
"ld\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001irregex-match\376\001\000\000\035\001chicken.irregex#irregex-match\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\016\001irregex-match\077\376\001\000\000\036\001chicken.irregex#irregex-match\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001irregex-sear"
"ch\376\001\000\000\036\001chicken.irregex#irregex-search\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001irregex-split\376\001\000\000\035\001chicken"
".irregex#irregex-split\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001irregex-replace\376\001\000\000\037\001chicken.irregex#irreg"
"ex-replace\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001irregex-replace/all\376\001\000\000#\001chicken.irregex#irregex-repla"
"ce/all\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001irregex-fold/chunked\376\001\000\000$\001chicken.irregex#irregex-fold/chu"
"nked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001irregex-match/chunked\376\001\000\000%\001chicken.irregex#irregex-match/chu"
"nked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001irregex-search/chunked\376\001\000\000&\001chicken.irregex#irregex-search/c"
"hunked\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001irregex-match-data\077\376\001\000\000#\001chicken.irregex#irregex-match-dat"
"a\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001irregex-match-names\376\001\000\000#\001chicken.irregex#irregex-match-names\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\031\001irregex-match-start-index\376\001\000\000)\001chicken.irregex#irregex-match-start"
"-index\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001irregex-match-end-index\376\001\000\000\047\001chicken.irregex#irregex-match"
"-end-index\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001irregex-match-num-submatches\376\001\000\000,\001chicken.irregex#irre"
"gex-match-num-submatches\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001irregex-match-substring\376\001\000\000\047\001chicken.irr"
"egex#irregex-match-substring\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001irregex-match-valid-index\077\376\001\000\000\052\001chic"
"ken.irregex#irregex-match-valid-index\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001irregex-match-start-chunk\376"
"\001\000\000)\001chicken.irregex#irregex-match-start-chunk\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001irregex-match-end-"
"chunk\376\001\000\000\047\001chicken.irregex#irregex-match-end-chunk\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001irregex-match-"
"subchunk\376\001\000\000&\001chicken.irregex#irregex-match-subchunk\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001glob->sre\376\001\000"
"\000\031\001chicken.irregex#glob->sre\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001sre->string\376\001\000\000\033\001chicken.irregex#sre"
"->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001irregex-opt\376\001\000\000\033\001chicken.irregex#irregex-opt\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\015\001irregex-quote\376\001\000\000\035\001chicken.irregex#irregex-quote\376\377\016"));
lf[34]=C_h_intern(&lf[34],16, C_text("chicken.pathname"));
lf[35]=C_h_intern(&lf[35],8, C_text("pathname"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001absolute-pathname\077\376\001\000\000#\001chicken.pathname#absolute-pathname\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\023\001decompose-directory\376\001\000\000$\001chicken.pathname#decompose-directory\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022\001decompose-pathname\376\001\000\000#\001chicken.pathname#decompose-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\017\001directory-null\077\376\001\000\000 \001chicken.pathname#directory-null\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001make-abs"
"olute-pathname\376\001\000\000\047\001chicken.pathname#make-absolute-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001make-"
"pathname\376\001\000\000\036\001chicken.pathname#make-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001normalize-pathname\376\001"
"\000\000#\001chicken.pathname#normalize-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001pathname-directory\376\001\000\000#\001c"
"hicken.pathname#pathname-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001pathname-extension\376\001\000\000#\001chicke"
"n.pathname#pathname-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001pathname-file\376\001\000\000\036\001chicken.pathname"
"#pathname-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001pathname-replace-directory\376\001\000\000+\001chicken.pathname#p"
"athname-replace-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001pathname-replace-extension\376\001\000\000+\001chicken"
".pathname#pathname-replace-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001pathname-replace-file\376\001\000\000&\001c"
"hicken.pathname#pathname-replace-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001pathname-strip-directory\376\001\000"
"\000)\001chicken.pathname#pathname-strip-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001pathname-strip-exten"
"sion\376\001\000\000)\001chicken.pathname#pathname-strip-extension\376\377\016"));
lf[37]=C_h_intern(&lf[37],10, C_text("chicken.io"));
lf[38]=C_h_intern(&lf[38],6, C_text("extras"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001read-list\376\001\000\000\024\001chicken.io#read-list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001read-buffered"
"\376\001\000\000\030\001chicken.io#read-buffered\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001read-byte\376\001\000\000\024\001chicken.io#read-byt"
"e\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001read-line\376\001\000\000\024\001chicken.io#read-line\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001read-lines\376\001"
"\000\000\025\001chicken.io#read-lines\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001read-string\376\001\000\000\026\001chicken.io#read-string"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001read-string!\376\001\000\000\027\001chicken.io#read-string!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001read-to"
"ken\376\001\000\000\025\001chicken.io#read-token\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001write-byte\376\001\000\000\025\001chicken.io#write-b"
"yte\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001write-line\376\001\000\000\025\001chicken.io#write-line\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001write-st"
"ring\376\001\000\000\027\001chicken.io#write-string\376\377\016"));
lf[40]=C_h_intern(&lf[40],12, C_text("chicken.port"));
lf[41]=C_h_intern(&lf[41],4, C_text("port"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001call-with-input-string\376\001\000\000#\001chicken.port#call-with-input-string\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001call-with-output-string\376\001\000\000$\001chicken.port#call-with-output-string"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001copy-port\376\001\000\000\026\001chicken.port#copy-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001make-input-"
"port\376\001\000\000\034\001chicken.port#make-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001make-output-port\376\001\000\000\035\001chic"
"ken.port#make-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001port-fold\376\001\000\000\026\001chicken.port#port-fold\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\015\001port-for-each\376\001\000\000\032\001chicken.port#port-for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001port-"
"map\376\001\000\000\025\001chicken.port#port-map\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001port-name\376\001\000\000\026\001chicken.port#port-n"
"ame\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001port-position\376\001\000\000\032\001chicken.port#port-position\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001"
"make-bidirectional-port\376\001\000\000$\001chicken.port#make-bidirectional-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023"
"\001make-broadcast-port\376\001\000\000 \001chicken.port#make-broadcast-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001make-c"
"oncatenated-port\376\001\000\000#\001chicken.port#make-concatenated-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001set-buf"
"fering-mode!\376\001\000\000 \001chicken.port#set-buffering-mode!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001set-port-name!"
"\376\001\000\000\033\001chicken.port#set-port-name!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001terminal-name\376\001\000\000\032\001chicken.port"
"#terminal-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001terminal-port\077\376\001\000\000\033\001chicken.port#terminal-port\077\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\015\001terminal-size\376\001\000\000\032\001chicken.port#terminal-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001with-e"
"rror-output-to-port\376\001\000\000&\001chicken.port#with-error-output-to-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001w"
"ith-input-from-port\376\001\000\000!\001chicken.port#with-input-from-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001with-i"
"nput-from-string\376\001\000\000#\001chicken.port#with-input-from-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001with-ou"
"tput-to-port\376\001\000\000 \001chicken.port#with-output-to-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001with-output-to"
"-string\376\001\000\000\042\001chicken.port#with-output-to-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001with-error-output"
"-to-string\376\001\000\000(\001chicken.port#with-error-output-to-string\376\377\016"));
lf[43]=C_h_intern(&lf[43],12, C_text("chicken.time"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001cpu-time\376\001\000\000\025\001chicken.time#cpu-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001current-milli"
"seconds\376\001\000\000!\001chicken.time#current-milliseconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001current-process-mi"
"lliseconds\376\001\000\000)\001chicken.time#current-process-milliseconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001current"
"-seconds\376\001\000\000\034\001chicken.time#current-seconds\376\377\016"));
lf[45]=C_h_intern(&lf[45],36, C_text("##sys#chicken.time-macro-environment"));
lf[46]=C_h_intern(&lf[46],14, C_text("chicken.memory"));
lf[47]=C_h_intern(&lf[47],7, C_text("lolevel"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001address->pointer\376\001\000\000\037\001chicken.memory#address->pointer\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\015\001align-to-word\376\001\000\000\034\001chicken.memory#align-to-word\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001allocate\376\001\000\000"
"\027\001chicken.memory#allocate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001free\376\001\000\000\023\001chicken.memory#free\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\023\001make-pointer-vector\376\001\000\000\042\001chicken.memory#make-pointer-vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014"
"\001move-memory!\376\001\000\000\033\001chicken.memory#move-memory!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001object->pointer\376\001\000"
"\000\036\001chicken.memory#object->pointer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001pointer+\376\001\000\000\027\001chicken.memory#po"
"inter+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer->address\376\001\000\000\037\001chicken.memory#pointer->address\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\017\001pointer->object\376\001\000\000\036\001chicken.memory#pointer->object\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001po"
"inter-f32-ref\376\001\000\000\036\001chicken.memory#pointer-f32-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-f32-set"
"!\376\001\000\000\037\001chicken.memory#pointer-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-f64-ref\376\001\000\000\036\001chick"
"en.memory#pointer-f64-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-f64-set!\376\001\000\000\037\001chicken.memory#po"
"inter-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001pointer-like\077\376\001\000\000\034\001chicken.memory#pointer-like\077\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-s16-ref\376\001\000\000\036\001chicken.memory#pointer-s16-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001"
"pointer-s16-set!\376\001\000\000\037\001chicken.memory#pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-s32"
"-ref\376\001\000\000\036\001chicken.memory#pointer-s32-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-s32-set!\376\001\000\000\037\001ch"
"icken.memory#pointer-s32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-s64-ref\376\001\000\000\036\001chicken.memory"
"#pointer-s64-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-s64-set!\376\001\000\000\037\001chicken.memory#pointer-s64"
"-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001pointer-s8-ref\376\001\000\000\035\001chicken.memory#pointer-s8-ref\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\017\001pointer-s8-set!\376\001\000\000\036\001chicken.memory#pointer-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001pointer"
"-tag\376\001\000\000\032\001chicken.memory#pointer-tag\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-u16-ref\376\001\000\000\036\001chicken"
".memory#pointer-u16-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-u16-set!\376\001\000\000\037\001chicken.memory#poin"
"ter-u16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-u32-ref\376\001\000\000\036\001chicken.memory#pointer-u32-ref\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-u32-set!\376\001\000\000\037\001chicken.memory#pointer-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\017\001pointer-u64-ref\376\001\000\000\036\001chicken.memory#pointer-u64-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001pointer-u"
"64-set!\376\001\000\000\037\001chicken.memory#pointer-u64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001pointer-u8-ref\376\001\000\000\035\001"
"chicken.memory#pointer-u8-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001pointer-u8-set!\376\001\000\000\036\001chicken.memory"
"#pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001pointer-vector\376\001\000\000\035\001chicken.memory#pointer-vecto"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001pointer-vector-fill!\376\001\000\000#\001chicken.memory#pointer-vector-fill!\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\025\001pointer-vector-length\376\001\000\000$\001chicken.memory#pointer-vector-length\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\022\001pointer-vector-ref\376\001\000\000!\001chicken.memory#pointer-vector-ref\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\023\001pointer-vector-set!\376\001\000\000\042\001chicken.memory#pointer-vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017"
"\001pointer-vector\077\376\001\000\000\036\001chicken.memory#pointer-vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001pointer=\077\376\001\000"
"\000\030\001chicken.memory#pointer=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001pointer\077\376\001\000\000\027\001chicken.memory#pointer\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001tag-pointer\376\001\000\000\032\001chicken.memory#tag-pointer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001tagge"
"d-pointer\077\376\001\000\000\036\001chicken.memory#tagged-pointer\077\376\377\016"));
lf[49]=C_h_intern(&lf[49],18, C_text("chicken.file.posix"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001create-fifo\376\001\000\000\036\001chicken.file.posix#create-fifo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001c"
"reate-symbolic-link\376\001\000\000\047\001chicken.file.posix#create-symbolic-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001"
"read-symbolic-link\376\001\000\000%\001chicken.file.posix#read-symbolic-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001dup"
"licate-fileno\376\001\000\000#\001chicken.file.posix#duplicate-fileno\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001fcntl/dupf"
"d\376\001\000\000\036\001chicken.file.posix#fcntl/dupfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001fcntl/getfd\376\001\000\000\036\001chicken.fi"
"le.posix#fcntl/getfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001fcntl/getfl\376\001\000\000\036\001chicken.file.posix#fcntl/ge"
"tfl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001fcntl/setfd\376\001\000\000\036\001chicken.file.posix#fcntl/setfd\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\013\001fcntl/setfl\376\001\000\000\036\001chicken.file.posix#fcntl/setfl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001file-access-tim"
"e\376\001\000\000#\001chicken.file.posix#file-access-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001file-change-time\376\001\000\000#\001"
"chicken.file.posix#file-change-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001file-modification-time\376\001\000\000)\001c"
"hicken.file.posix#file-modification-time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001file-close\376\001\000\000\035\001chicken."
"file.posix#file-close\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001file-control\376\001\000\000\037\001chicken.file.posix#file-c"
"ontrol\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001file-creation-mode\376\001\000\000%\001chicken.file.posix#file-creation-m"
"ode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001file-group\376\001\000\000\035\001chicken.file.posix#file-group\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001"
"file-link\376\001\000\000\034\001chicken.file.posix#file-link\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001file-lock\376\001\000\000\034\001chicke"
"n.file.posix#file-lock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001file-lock/blocking\376\001\000\000%\001chicken.file.posix"
"#file-lock/blocking\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001file-mkstemp\376\001\000\000\037\001chicken.file.posix#file-mks"
"temp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001file-open\376\001\000\000\034\001chicken.file.posix#file-open\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001f"
"ile-owner\376\001\000\000\035\001chicken.file.posix#file-owner\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001file-permissions\376\001\000\000"
"#\001chicken.file.posix#file-permissions\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001file-position\376\001\000\000 \001chicken."
"file.posix#file-position\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001file-read\376\001\000\000\034\001chicken.file.posix#file-r"
"ead\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001file-select\376\001\000\000\036\001chicken.file.posix#file-select\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\011\001file-size\376\001\000\000\034\001chicken.file.posix#file-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001file-stat\376\001\000\000\034\001chic"
"ken.file.posix#file-stat\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001file-test-lock\376\001\000\000!\001chicken.file.posix#f"
"ile-test-lock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001file-truncate\376\001\000\000 \001chicken.file.posix#file-truncate"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001file-unlock\376\001\000\000\036\001chicken.file.posix#file-unlock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001f"
"ile-write\376\001\000\000\035\001chicken.file.posix#file-write\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001file-type\376\001\000\000\034\001chick"
"en.file.posix#file-type\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001block-device\077\376\001\000\000 \001chicken.file.posix#blo"
"ck-device\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001character-device\077\376\001\000\000$\001chicken.file.posix#character-de"
"vice\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001directory\077\376\001\000\000\035\001chicken.file.posix#directory\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\005\001fifo\077\376\001\000\000\030\001chicken.file.posix#fifo\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001regular-file\077\376\001\000\000 \001chicken."
"file.posix#regular-file\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001socket\077\376\001\000\000\032\001chicken.file.posix#socket\077\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001symbolic-link\077\376\001\000\000!\001chicken.file.posix#symbolic-link\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\015\001fileno/stderr\376\001\000\000 \001chicken.file.posix#fileno/stderr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001fileno/st"
"din\376\001\000\000\037\001chicken.file.posix#fileno/stdin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001fileno/stdout\376\001\000\000 \001chick"
"en.file.posix#fileno/stdout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001open-input-file\052\376\001\000\000#\001chicken.file.po"
"six#open-input-file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001open-output-file\052\376\001\000\000$\001chicken.file.posix#op"
"en-output-file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001open/append\376\001\000\000\036\001chicken.file.posix#open/append\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\013\001open/binary\376\001\000\000\036\001chicken.file.posix#open/binary\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001ope"
"n/creat\376\001\000\000\035\001chicken.file.posix#open/creat\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001open/excl\376\001\000\000\034\001chicken"
".file.posix#open/excl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001open/fsync\376\001\000\000\035\001chicken.file.posix#open/fsy"
"nc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001open/noctty\376\001\000\000\036\001chicken.file.posix#open/noctty\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016"
"\001open/noinherit\376\001\000\000!\001chicken.file.posix#open/noinherit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001open/nonbl"
"ock\376\001\000\000 \001chicken.file.posix#open/nonblock\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001open/rdonly\376\001\000\000\036\001chicke"
"n.file.posix#open/rdonly\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001open/rdwr\376\001\000\000\034\001chicken.file.posix#open/r"
"dwr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001open/read\376\001\000\000\034\001chicken.file.posix#open/read\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001op"
"en/sync\376\001\000\000\034\001chicken.file.posix#open/sync\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001open/text\376\001\000\000\034\001chicken."
"file.posix#open/text\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001open/trunc\376\001\000\000\035\001chicken.file.posix#open/trun"
"c\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001open/write\376\001\000\000\035\001chicken.file.posix#open/write\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001op"
"en/wronly\376\001\000\000\036\001chicken.file.posix#open/wronly\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/irgrp\376\001\000\000\035\001chi"
"cken.file.posix#perm/irgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/iroth\376\001\000\000\035\001chicken.file.posix#per"
"m/iroth\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/irusr\376\001\000\000\035\001chicken.file.posix#perm/irusr\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\012\001perm/irwxg\376\001\000\000\035\001chicken.file.posix#perm/irwxg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/irwxo\376\001\000\000\035"
"\001chicken.file.posix#perm/irwxo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/irwxu\376\001\000\000\035\001chicken.file.posix"
"#perm/irwxu\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/isgid\376\001\000\000\035\001chicken.file.posix#perm/isgid\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\012\001perm/isuid\376\001\000\000\035\001chicken.file.posix#perm/isuid\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/isvtx\376"
"\001\000\000\035\001chicken.file.posix#perm/isvtx\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/iwgrp\376\001\000\000\035\001chicken.file.p"
"osix#perm/iwgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/iwoth\376\001\000\000\035\001chicken.file.posix#perm/iwoth\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\012\001perm/iwusr\376\001\000\000\035\001chicken.file.posix#perm/iwusr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/ix"
"grp\376\001\000\000\035\001chicken.file.posix#perm/ixgrp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/ixoth\376\001\000\000\035\001chicken.fi"
"le.posix#perm/ixoth\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001perm/ixusr\376\001\000\000\035\001chicken.file.posix#perm/ixusr"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001port->fileno\376\001\000\000\037\001chicken.file.posix#port->fileno\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017"
"\001set-file-group!\376\001\000\000\042\001chicken.file.posix#set-file-group!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001set-file"
"-owner!\376\001\000\000\042\001chicken.file.posix#set-file-owner!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001set-file-permissi"
"ons!\376\001\000\000(\001chicken.file.posix#set-file-permissions!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001set-file-posit"
"ion!\376\001\000\000%\001chicken.file.posix#set-file-position!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001set-file-times!\376\001"
"\000\000\042\001chicken.file.posix#set-file-times!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001seek/cur\376\001\000\000\033\001chicken.file"
".posix#seek/cur\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001seek/set\376\001\000\000\033\001chicken.file.posix#seek/set\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\010\001seek/end\376\001\000\000\033\001chicken.file.posix#seek/end\376\377\016"));
lf[51]=C_h_intern(&lf[51],14, C_text("chicken.flonum"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001flonum-print-precision\376\001\000\000%\001chicken.flonum#flonum-print-precisio"
"n\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001fpinteger\077\376\001\000\000\031\001chicken.flonum#fpinteger\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpabs\376"
"\001\000\000\024\001chicken.flonum#fpabs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001fpsqrt\376\001\000\000\025\001chicken.flonum#fpsqrt\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\005\001fplog\376\001\000\000\024\001chicken.flonum#fplog\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001fpexpt\376\001\000\000\025\001chicken.flo"
"num#fpexpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpexp\376\001\000\000\024\001chicken.flonum#fpexp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fpatan2"
"\376\001\000\000\026\001chicken.flonum#fpatan2\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001fpatan\376\001\000\000\025\001chicken.flonum#fpatan\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\006\001fpacos\376\001\000\000\025\001chicken.flonum#fpacos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001fpasin\376\001\000\000\025\001chicke"
"n.flonum#fpasin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fptan\376\001\000\000\024\001chicken.flonum#fptan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fp"
"cos\376\001\000\000\024\001chicken.flonum#fpcos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpsin\376\001\000\000\024\001chicken.flonum#fpsin\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011\001fpceiling\376\001\000\000\030\001chicken.flonum#fpceiling\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fpround\376\001\000\000\026\001"
"chicken.flonum#fpround\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001fptruncate\376\001\000\000\031\001chicken.flonum#fptruncate\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fpfloor\376\001\000\000\026\001chicken.flonum#fpfloor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpmin\376\001\000\000\024\001chi"
"cken.flonum#fpmin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpmax\376\001\000\000\024\001chicken.flonum#fpmax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001"
"fpneg\376\001\000\000\024\001chicken.flonum#fpneg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fp<=\376\001\000\000\023\001chicken.flonum#fp<=\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\004\001fp>=\376\001\000\000\023\001chicken.flonum#fp>=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fp<\376\001\000\000\022\001chicken.flonum"
"#fp<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fp>\376\001\000\000\022\001chicken.flonum#fp>\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fp=\376\001\000\000\022\001chicken."
"flonum#fp=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001fp/\077\376\001\000\000\023\001chicken.flonum#fp/\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001fpgcd\376\001\000\000"
"\024\001chicken.flonum#fpgcd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fp/\376\001\000\000\022\001chicken.flonum#fp/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003"
"\001fp\052\376\001\000\000\022\001chicken.flonum#fp\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001fp-\376\001\000\000\022\001chicken.flonum#fp-\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\003\001fp+\376\001\000\000\022\001chicken.flonum#fp+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\037\001flonum-minimum-decimal-exponen"
"t\376\001\000\000.\001chicken.flonum#flonum-minimum-decimal-exponent\376\003\000\000\002\376\003\000\000\002\376\001\000\000\037\001flonum-maxi"
"mum-decimal-exponent\376\001\000\000.\001chicken.flonum#flonum-maximum-decimal-exponent\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\027\001flonum-minimum-exponent\376\001\000\000&\001chicken.flonum#flonum-minimum-exponent\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\027\001flonum-maximum-exponent\376\001\000\000&\001chicken.flonum#flonum-maximum-exponent\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\030\001flonum-decimal-precision\376\001\000\000\047\001chicken.flonum#flonum-decimal-precis"
"ion\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001flonum-precision\376\001\000\000\037\001chicken.flonum#flonum-precision\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016\001flonum-epsilon\376\001\000\000\035\001chicken.flonum#flonum-epsilon\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001flonum-"
"radix\376\001\000\000\033\001chicken.flonum#flonum-radix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001minimum-flonum\376\001\000\000\035\001chicke"
"n.flonum#minimum-flonum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001maximum-flonum\376\001\000\000\035\001chicken.flonum#maximu"
"m-flonum\376\377\016"));
lf[53]=C_h_intern(&lf[53],14, C_text("chicken.format"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001format\376\001\000\000\025\001chicken.format#format\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fprintf\376\001\000\000\026\001ch"
"icken.format#fprintf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001printf\376\001\000\000\025\001chicken.format#printf\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\007\001sprintf\376\001\000\000\026\001chicken.format#sprintf\376\377\016"));
lf[55]=C_h_intern(&lf[55],10, C_text("chicken.gc"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001current-gc-milliseconds\376\001\000\000\042\001chicken.gc#current-gc-milliseconds\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001gc\376\001\000\000\015\001chicken.gc#gc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001memory-statistics\376\001\000\000\034\001chick"
"en.gc#memory-statistics\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001set-finalizer!\376\001\000\000\031\001chicken.gc#set-finali"
"zer!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001set-gc-report!\376\001\000\000\031\001chicken.gc#set-gc-report!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020"
"\001force-finalizers\376\001\000\000\033\001chicken.gc#force-finalizers\376\377\016"));
lf[57]=C_h_intern(&lf[57],12, C_text("chicken.eval"));
lf[58]=C_h_intern(&lf[58],4, C_text("eval"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001eval-handler\376\001\000\000\031\001chicken.eval#eval-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001modul"
"e-environment\376\001\000\000\037\001chicken.eval#module-environment\376\377\016"));
lf[60]=C_h_intern(&lf[60],12, C_text("chicken.load"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001dynamic-load-libraries\376\001\000\000#\001chicken.load#dynamic-load-libraries\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001set-dynamic-load-mode!\376\001\000\000#\001chicken.load#set-dynamic-load-mode!\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014\001load-library\376\001\000\000\031\001chicken.load#load-library\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001load-no"
"isily\376\001\000\000\031\001chicken.load#load-noisily\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001load-relative\376\001\000\000\032\001chicken.l"
"oad#load-relative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001load-verbose\376\001\000\000\031\001chicken.load#load-verbose\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\007\001provide\376\001\000\000\024\001chicken.load#provide\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001provided\077\376\001\000\000\026\001chic"
"ken.load#provided\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001require\376\001\000\000\024\001chicken.load#require\376\377\016"));
lf[62]=C_h_intern(&lf[62],16, C_text("chicken.locative"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001locative\077\376\001\000\000\032\001chicken.locative#locative\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001make-lo"
"cative\376\001\000\000\036\001chicken.locative#make-locative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001make-weak-locative\376\001\000\000"
"#\001chicken.locative#make-weak-locative\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001locative-ref\376\001\000\000\035\001chicken.l"
"ocative#locative-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001locative-set!\376\001\000\000\036\001chicken.locative#locative"
"-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001locative->object\376\001\000\000!\001chicken.locative#locative->object\376\377\016"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.memory.representation"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001block-ref\376\001\000\000\047\001chicken.memory.representation#block-ref\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\012\001block-set!\376\001\000\000(\001chicken.memory.representation#block-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001ex"
"tend-procedure\376\001\000\000.\001chicken.memory.representation#extend-procedure\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\023\001extended-procedure\077\376\001\000\0001\001chicken.memory.representation#extended-procedure\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\024\001make-record-instance\376\001\000\0002\001chicken.memory.representation#make-record-"
"instance\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001mutate-procedure!\376\001\000\000/\001chicken.memory.representation#mut"
"ate-procedure!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001number-of-bytes\376\001\000\000-\001chicken.memory.representation"
"#number-of-bytes\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001number-of-slots\376\001\000\000-\001chicken.memory.representati"
"on#number-of-slots\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001object-become!\376\001\000\000,\001chicken.memory.representat"
"ion#object-become!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001object-copy\376\001\000\000)\001chicken.memory.representation"
"#object-copy\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001procedure-data\376\001\000\000,\001chicken.memory.representation#pr"
"ocedure-data\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001record->vector\376\001\000\000,\001chicken.memory.representation#re"
"cord->vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001record-instance-length\376\001\000\0004\001chicken.memory.represent"
"ation#record-instance-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001record-instance-slot\376\001\000\0002\001chicken.me"
"mory.representation#record-instance-slot\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001record-instance-slot-set"
"!\376\001\000\0007\001chicken.memory.representation#record-instance-slot-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001re"
"cord-instance-type\376\001\000\0002\001chicken.memory.representation#record-instance-type\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\020\001record-instance\077\376\001\000\000.\001chicken.memory.representation#record-instance\077\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\023\001set-procedure-data!\376\001\000\0001\001chicken.memory.representation#set-procedu"
"re-data!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001vector-like\077\376\001\000\000\052\001chicken.memory.representation#vector-l"
"ike\077\376\377\016"));
lf[66]=C_h_intern(&lf[66],13, C_text("chicken.plist"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001get\376\001\000\000\021\001chicken.plist#get\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001get-properties\376\001\000\000\034\001ch"
"icken.plist#get-properties\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001put!\376\001\000\000\022\001chicken.plist#put!\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\010\001remprop!\376\001\000\000\026\001chicken.plist#remprop!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001symbol-plist\376\001\000\000\032\001chic"
"ken.plist#symbol-plist\376\377\016"));
lf[68]=C_h_intern(&lf[68],20, C_text("chicken.pretty-print"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001pp\376\001\000\000\027\001chicken.pretty-print#pp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001pretty-print\376\001\000\000!"
"\001chicken.pretty-print#pretty-print\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001pretty-print-width\376\001\000\000\047\001chicke"
"n.pretty-print#pretty-print-width\376\377\016"));
lf[70]=C_h_intern(&lf[70],15, C_text("chicken.process"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001qs\376\001\000\000\022\001chicken.process#qs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001system\376\001\000\000\026\001chicken.pr"
"ocess#system\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001system\052\376\001\000\000\027\001chicken.process#system\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001"
"process-execute\376\001\000\000\037\001chicken.process#process-execute\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001process-fork"
"\376\001\000\000\034\001chicken.process#process-fork\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001process-run\376\001\000\000\033\001chicken.proce"
"ss#process-run\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001process-signal\376\001\000\000\036\001chicken.process#process-signal"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001process-spawn\376\001\000\000\035\001chicken.process#process-spawn\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001"
"process-wait\376\001\000\000\034\001chicken.process#process-wait\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001call-with-input-pi"
"pe\376\001\000\000$\001chicken.process#call-with-input-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001call-with-output-pip"
"e\376\001\000\000%\001chicken.process#call-with-output-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001close-input-pipe\376\001\000\000"
" \001chicken.process#close-input-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001close-output-pipe\376\001\000\000!\001chicken"
".process#close-output-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001create-pipe\376\001\000\000\033\001chicken.process#creat"
"e-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001open-input-pipe\376\001\000\000\037\001chicken.process#open-input-pipe\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\020\001open-output-pipe\376\001\000\000 \001chicken.process#open-output-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001"
"with-input-from-pipe\376\001\000\000$\001chicken.process#with-input-from-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001wi"
"th-output-to-pipe\376\001\000\000#\001chicken.process#with-output-to-pipe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001proces"
"s\376\001\000\000\027\001chicken.process#process\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001process\052\376\001\000\000\030\001chicken.process#proc"
"ess\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001process-sleep\376\001\000\000\035\001chicken.process#process-sleep\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\010\001pipe/buf\376\001\000\000\030\001chicken.process#pipe/buf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001spawn/overlay\376\001\000\000\035\001chi"
"cken.process#spawn/overlay\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001spawn/wait\376\001\000\000\032\001chicken.process#spawn/"
"wait\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001spawn/nowait\376\001\000\000\034\001chicken.process#spawn/nowait\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\015\001spawn/nowaito\376\001\000\000\035\001chicken.process#spawn/nowaito\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001spawn/detach\376\001"
"\000\000\034\001chicken.process#spawn/detach\376\377\016"));
lf[72]=C_h_intern(&lf[72],22, C_text("chicken.process.signal"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001set-alarm!\376\001\000\000!\001chicken.process.signal#set-alarm!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023"
"\001set-signal-handler!\376\001\000\000\052\001chicken.process.signal#set-signal-handler!\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020\001set-signal-mask!\376\001\000\000\047\001chicken.process.signal#set-signal-mask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016"
"\001signal-handler\376\001\000\000%\001chicken.process.signal#signal-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal"
"-mask\376\001\000\000\042\001chicken.process.signal#signal-mask\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001signal-mask!\376\001\000\000#\001c"
"hicken.process.signal#signal-mask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001signal-masked\077\376\001\000\000%\001chicken.pr"
"ocess.signal#signal-masked\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001signal-unmask!\376\001\000\000%\001chicken.process.s"
"ignal#signal-unmask!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/abrt\376\001\000\000\042\001chicken.process.signal#sign"
"al/abrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/alrm\376\001\000\000\042\001chicken.process.signal#signal/alrm\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\014\001signal/break\376\001\000\000#\001chicken.process.signal#signal/break\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001s"
"ignal/bus\376\001\000\000!\001chicken.process.signal#signal/bus\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/chld\376\001\000\000\042"
"\001chicken.process.signal#signal/chld\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/cont\376\001\000\000\042\001chicken.proc"
"ess.signal#signal/cont\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001signal/fpe\376\001\000\000!\001chicken.process.signal#sig"
"nal/fpe\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001signal/hup\376\001\000\000!\001chicken.process.signal#signal/hup\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\012\001signal/ill\376\001\000\000!\001chicken.process.signal#signal/ill\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001signal/"
"int\376\001\000\000!\001chicken.process.signal#signal/int\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001signal/io\376\001\000\000 \001chicken"
".process.signal#signal/io\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/kill\376\001\000\000\042\001chicken.process.signal"
"#signal/kill\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/pipe\376\001\000\000\042\001chicken.process.signal#signal/pipe\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/prof\376\001\000\000\042\001chicken.process.signal#signal/prof\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\013\001signal/quit\376\001\000\000\042\001chicken.process.signal#signal/quit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/segv"
"\376\001\000\000\042\001chicken.process.signal#signal/segv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/stop\376\001\000\000\042\001chicken"
".process.signal#signal/stop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/term\376\001\000\000\042\001chicken.process.sign"
"al#signal/term\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/trap\376\001\000\000\042\001chicken.process.signal#signal/tra"
"p\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/tstp\376\001\000\000\042\001chicken.process.signal#signal/tstp\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\012\001signal/urg\376\001\000\000!\001chicken.process.signal#signal/urg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/usr1"
"\376\001\000\000\042\001chicken.process.signal#signal/usr1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/usr2\376\001\000\000\042\001chicken"
".process.signal#signal/usr2\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001signal/vtalrm\376\001\000\000$\001chicken.process.si"
"gnal#signal/vtalrm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001signal/winch\376\001\000\000#\001chicken.process.signal#signa"
"l/winch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001signal/xcpu\376\001\000\000\042\001chicken.process.signal#signal/xcpu\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\013\001signal/xfsz\376\001\000\000\042\001chicken.process.signal#signal/xfsz\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001sig"
"nals-list\376\001\000\000#\001chicken.process.signal#signals-list\376\377\016"));
lf[74]=C_h_intern(&lf[74],23, C_text("chicken.process-context"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001argv\376\001\000\000\034\001chicken.process-context#argv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001argc+argv\376"
"\001\000\000!\001chicken.process-context#argc+argv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001command-line-arguments\376\001\000\000"
".\001chicken.process-context#command-line-arguments\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001program-name\376\001\000\000"
"$\001chicken.process-context#program-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001executable-pathname\376\001\000\000+\001c"
"hicken.process-context#executable-pathname\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001change-directory\376\001\000\000(\001"
"chicken.process-context#change-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001current-directory\376\001\000\000)\001c"
"hicken.process-context#current-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001get-environment-variable"
"\376\001\000\0000\001chicken.process-context#get-environment-variable\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001get-enviro"
"nment-variables\376\001\000\0001\001chicken.process-context#get-environment-variables\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\031\001set-environment-variable!\376\001\000\0001\001chicken.process-context#set-environment-var"
"iable!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001unset-environment-variable!\376\001\000\0003\001chicken.process-context#u"
"nset-environment-variable!\376\377\016"));
lf[76]=C_h_intern(&lf[76],29, C_text("chicken.process-context.posix"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001change-directory\052\376\001\000\000/\001chicken.process-context.posix#change-dire"
"ctory\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001set-root-directory!\376\001\000\0001\001chicken.process-context.posix#set"
"-root-directory!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001current-effective-group-id\376\001\000\0008\001chicken.process-"
"context.posix#current-effective-group-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001current-effective-user-i"
"d\376\001\000\0007\001chicken.process-context.posix#current-effective-user-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001cu"
"rrent-process-id\376\001\000\0000\001chicken.process-context.posix#current-process-id\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\020\001current-group-id\376\001\000\000.\001chicken.process-context.posix#current-group-id\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\017\001current-user-id\376\001\000\000-\001chicken.process-context.posix#current-user-id\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\021\001parent-process-id\376\001\000\000/\001chicken.process-context.posix#parent-process-"
"id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001current-user-name\376\001\000\000/\001chicken.process-context.posix#current-u"
"ser-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001current-effective-user-name\376\001\000\0009\001chicken.process-context"
".posix#current-effective-user-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001create-session\376\001\000\000,\001chicken.pr"
"ocess-context.posix#create-session\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001process-group-id\376\001\000\000.\001chicken."
"process-context.posix#process-group-id\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001user-information\376\001\000\000.\001chic"
"ken.process-context.posix#user-information\376\377\016"));
lf[78]=C_h_intern(&lf[78],14, C_text("chicken.random"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001set-pseudo-random-seed!\376\001\000\000&\001chicken.random#set-pseudo-random-se"
"ed!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001pseudo-random-integer\376\001\000\000$\001chicken.random#pseudo-random-integ"
"er\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001pseudo-random-real\376\001\000\000!\001chicken.random#pseudo-random-real\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\014\001random-bytes\376\001\000\000\033\001chicken.random#random-bytes\376\377\016"));
lf[80]=C_h_intern(&lf[80],12, C_text("chicken.sort"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001merge\376\001\000\000\022\001chicken.sort#merge\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001merge!\376\001\000\000\023\001chicken"
".sort#merge!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001sort\376\001\000\000\021\001chicken.sort#sort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001sort!\376\001\000\000"
"\022\001chicken.sort#sort!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001sorted\077\376\001\000\000\024\001chicken.sort#sorted\077\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\020\001topological-sort\376\001\000\000\035\001chicken.sort#topological-sort\376\377\016"));
lf[82]=C_h_intern(&lf[82],18, C_text("chicken.time.posix"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001seconds->utc-time\376\001\000\000$\001chicken.time.posix#seconds->utc-time\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\021\001utc-time->seconds\376\001\000\000$\001chicken.time.posix#utc-time->seconds\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\023\001seconds->local-time\376\001\000\000&\001chicken.time.posix#seconds->local-time\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\017\001seconds->string\376\001\000\000\042\001chicken.time.posix#seconds->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001loca"
"l-time->seconds\376\001\000\000&\001chicken.time.posix#local-time->seconds\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001strin"
"g->time\376\001\000\000\037\001chicken.time.posix#string->time\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001time->string\376\001\000\000\037\001ch"
"icken.time.posix#time->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001local-timezone-abbreviation\376\001\000\000.\001ch"
"icken.time.posix#local-timezone-abbreviation\376\377\016"));
lf[84]=C_h_intern(&lf[84],20, C_text("chicken.continuation"));
lf[85]=C_h_intern(&lf[85],12, C_text("continuation"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001continuation\077\376\001\000\000\042\001chicken.continuation#continuation\077\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\024\001continuation-capture\376\001\000\000)\001chicken.continuation#continuation-capture\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022\001continuation-graft\376\001\000\000\047\001chicken.continuation#continuation-graft\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\023\001continuation-return\376\001\000\000(\001chicken.continuation#continuation-return\376\377\016"));
lf[87]=C_h_intern(&lf[87],12, C_text("chicken.file"));
lf[88]=C_h_intern(&lf[88],4, C_text("file"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001create-directory\376\001\000\000\035\001chicken.file#create-directory\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\020\001delete-directory\376\001\000\000\035\001chicken.file#delete-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001create-tem"
"porary-file\376\001\000\000\042\001chicken.file#create-temporary-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001create-tempor"
"ary-directory\376\001\000\000\047\001chicken.file#create-temporary-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001delete"
"-file\376\001\000\000\030\001chicken.file#delete-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001delete-file\052\376\001\000\000\031\001chicken.fil"
"e#delete-file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001copy-file\376\001\000\000\026\001chicken.file#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\011\001move-file\376\001\000\000\026\001chicken.file#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001rename-file\376\001\000\000\030\001chicken"
".file#rename-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001file-exists\077\376\001\000\000\031\001chicken.file#file-exists\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\021\001directory-exists\077\376\001\000\000\036\001chicken.file#directory-exists\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016"
"\001file-readable\077\376\001\000\000\033\001chicken.file#file-readable\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001file-writable\077\376\001"
"\000\000\033\001chicken.file#file-writable\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001file-executable\077\376\001\000\000\035\001chicken.fil"
"e#file-executable\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001directory\376\001\000\000\026\001chicken.file#directory\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\012\001find-files\376\001\000\000\027\001chicken.file#find-files\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001glob\376\001\000\000\021\001chicken."
"file#glob\376\377\016"));
lf[90]=C_h_intern(&lf[90],19, C_text("chicken.read-syntax"));
lf[91]=C_h_intern(&lf[91],11, C_text("read-syntax"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001copy-read-table\376\001\000\000#\001chicken.read-syntax#copy-read-table\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022\001current-read-table\376\001\000\000&\001chicken.read-syntax#current-read-table\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\022\001define-reader-ctor\376\001\000\000&\001chicken.read-syntax#define-reader-ctor\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020\001set-read-syntax!\376\001\000\000$\001chicken.read-syntax#set-read-syntax!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001se"
"t-sharp-read-syntax!\376\001\000\000\052\001chicken.read-syntax#set-sharp-read-syntax!\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\036\001set-parameterized-read-syntax!\376\001\000\0002\001chicken.read-syntax#set-parameterized-re"
"ad-syntax!\376\377\016"));
lf[93]=C_h_intern(&lf[93],12, C_text("chicken.repl"));
lf[94]=C_h_intern(&lf[94],4, C_text("repl"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001quit\376\001\000\000\021\001chicken.repl#quit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001repl\376\001\000\000\021\001chicken.rep"
"l#repl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001repl-prompt\376\001\000\000\030\001chicken.repl#repl-prompt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001r"
"eset\376\001\000\000\022\001chicken.repl#reset\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001reset-handler\376\001\000\000\032\001chicken.repl#rese"
"t-handler\376\377\016"));
lf[96]=C_h_intern(&lf[96],11, C_text("chicken.tcp"));
lf[97]=C_h_intern(&lf[97],3, C_text("tcp"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001tcp-close\376\001\000\000\025\001chicken.tcp#tcp-close\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001tcp-listen\376\001"
"\000\000\026\001chicken.tcp#tcp-listen\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001tcp-connect\376\001\000\000\027\001chicken.tcp#tcp-conne"
"ct\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001tcp-accept\376\001\000\000\026\001chicken.tcp#tcp-accept\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001tcp-acce"
"pt-ready\077\376\001\000\000\035\001chicken.tcp#tcp-accept-ready\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001tcp-listener\077\376\001\000\000\031\001c"
"hicken.tcp#tcp-listener\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001tcp-addresses\376\001\000\000\031\001chicken.tcp#tcp-addre"
"sses\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001tcp-abandon-port\376\001\000\000\034\001chicken.tcp#tcp-abandon-port\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\021\001tcp-listener-port\376\001\000\000\035\001chicken.tcp#tcp-listener-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001tcp-li"
"stener-fileno\376\001\000\000\037\001chicken.tcp#tcp-listener-fileno\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001tcp-port-numbe"
"rs\376\001\000\000\034\001chicken.tcp#tcp-port-numbers\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001tcp-buffer-size\376\001\000\000\033\001chicken"
".tcp#tcp-buffer-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001tcp-read-timeout\376\001\000\000\034\001chicken.tcp#tcp-read-t"
"imeout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001tcp-write-timeout\376\001\000\000\035\001chicken.tcp#tcp-write-timeout\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\022\001tcp-accept-timeout\376\001\000\000\036\001chicken.tcp#tcp-accept-timeout\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001"
"tcp-connect-timeout\376\001\000\000\037\001chicken.tcp#tcp-connect-timeout\376\377\016"));
lf[99]=C_h_intern(&lf[99],6, C_text("srfi-4"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->f32vector\376\001\000\000\026\001srfi-4#blob->f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob-"
">f32vector/shared\376\001\000\000\035\001srfi-4#blob->f32vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->f64vec"
"tor\376\001\000\000\026\001srfi-4#blob->f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->f64vector/shared\376\001\000\000\035\001srfi-"
"4#blob->f64vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->s16vector\376\001\000\000\026\001srfi-4#blob->s16vec"
"tor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->s16vector/shared\376\001\000\000\035\001srfi-4#blob->s16vector/shared\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017\001blob->s32vector\376\001\000\000\026\001srfi-4#blob->s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->s32"
"vector/shared\376\001\000\000\035\001srfi-4#blob->s32vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->s64vector\376"
"\001\000\000\026\001srfi-4#blob->s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->s64vector/shared\376\001\000\000\035\001srfi-4#bl"
"ob->s64vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001blob->s8vector\376\001\000\000\025\001srfi-4#blob->s8vector\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\025\001blob->s8vector/shared\376\001\000\000\034\001srfi-4#blob->s8vector/shared\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\017\001blob->u16vector\376\001\000\000\026\001srfi-4#blob->u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->u16vector/s"
"hared\376\001\000\000\035\001srfi-4#blob->u16vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->u32vector\376\001\000\000\026\001srf"
"i-4#blob->u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001blob->u32vector/shared\376\001\000\000\035\001srfi-4#blob->u32v"
"ector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001blob->u64vector\376\001\000\000\026\001srfi-4#blob->u64vector\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\026\001blob->u64vector/shared\376\001\000\000\035\001srfi-4#blob->u64vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001"
"blob->u8vector\376\001\000\000\025\001srfi-4#blob->u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001blob->u8vector/shared\376\001"
"\000\000\034\001srfi-4#blob->u8vector/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001f32vector\376\001\000\000\020\001srfi-4#f32vector\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001f32vector->blob\376\001\000\000\026\001srfi-4#f32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001f32vec"
"tor->blob/shared\376\001\000\000\035\001srfi-4#f32vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001f32vector->li"
"st\376\001\000\000\026\001srfi-4#f32vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001f32vector-length\376\001\000\000\027\001srfi-4#f32ve"
"ctor-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001f32vector-ref\376\001\000\000\024\001srfi-4#f32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\016\001f32vector-set!\376\001\000\000\025\001srfi-4#f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001f32vector\077\376\001\000\000\021\001srfi-"
"4#f32vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001f64vector\376\001\000\000\020\001srfi-4#f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001f64ve"
"ctor->blob\376\001\000\000\026\001srfi-4#f64vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001f64vector->blob/shared\376\001\000\000"
"\035\001srfi-4#f64vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001f64vector->list\376\001\000\000\026\001srfi-4#f64ve"
"ctor->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001f64vector-length\376\001\000\000\027\001srfi-4#f64vector-length\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\015\001f64vector-ref\376\001\000\000\024\001srfi-4#f64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001f64vector-set!\376\001\000\000"
"\025\001srfi-4#f64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001f64vector\077\376\001\000\000\021\001srfi-4#f64vector\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\010\001s8vector\376\001\000\000\017\001srfi-4#s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001s8vector->blob\376\001\000\000\025\001srfi-4#"
"s8vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001s8vector->blob/shared\376\001\000\000\034\001srfi-4#s8vector->blob/s"
"hared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001s8vector->list\376\001\000\000\025\001srfi-4#s8vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s8"
"vector-length\376\001\000\000\026\001srfi-4#s8vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001s8vector-ref\376\001\000\000\023\001srfi-"
"4#s8vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001s8vector-set!\376\001\000\000\024\001srfi-4#s8vector-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\011\001s8vector\077\376\001\000\000\020\001srfi-4#s8vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001s16vector\376\001\000\000\020\001srfi-4#s16vec"
"tor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s16vector->blob\376\001\000\000\026\001srfi-4#s16vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001s1"
"6vector->blob/shared\376\001\000\000\035\001srfi-4#s16vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s16vector"
"->list\376\001\000\000\026\001srfi-4#s16vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001s16vector-length\376\001\000\000\027\001srfi-4#s"
"16vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001s16vector-ref\376\001\000\000\024\001srfi-4#s16vector-ref\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\016\001s16vector-set!\376\001\000\000\025\001srfi-4#s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001s16vector\077\376\001\000\000\021\001s"
"rfi-4#s16vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001s32vector\376\001\000\000\020\001srfi-4#s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s"
"32vector->blob\376\001\000\000\026\001srfi-4#s32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001s32vector->blob/shared"
"\376\001\000\000\035\001srfi-4#s32vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s32vector->list\376\001\000\000\026\001srfi-4#s"
"32vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001s32vector-length\376\001\000\000\027\001srfi-4#s32vector-length\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\015\001s32vector-ref\376\001\000\000\024\001srfi-4#s32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001s32vector-set!"
"\376\001\000\000\025\001srfi-4#s32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001s32vector\077\376\001\000\000\021\001srfi-4#s32vector\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011\001s64vector\376\001\000\000\020\001srfi-4#s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s64vector->blob\376\001\000\000\026\001"
"srfi-4#s64vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001s64vector->blob/shared\376\001\000\000\035\001srfi-4#s64vect"
"or->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001s64vector->list\376\001\000\000\026\001srfi-4#s64vector->list\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\020\001s64vector-length\376\001\000\000\027\001srfi-4#s64vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001s64vector"
"-ref\376\001\000\000\024\001srfi-4#s64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001s64vector-set!\376\001\000\000\025\001srfi-4#s64vect"
"or-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001s64vector\077\376\001\000\000\021\001srfi-4#s64vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001u8vector"
"\376\001\000\000\017\001srfi-4#u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001u8vector->blob\376\001\000\000\025\001srfi-4#u8vector->blob\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\025\001u8vector->blob/shared\376\001\000\000\034\001srfi-4#u8vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\016\001u8vector->list\376\001\000\000\025\001srfi-4#u8vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u8vector-length\376\001\000"
"\000\026\001srfi-4#u8vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001u8vector-ref\376\001\000\000\023\001srfi-4#u8vector-ref\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\015\001u8vector-set!\376\001\000\000\024\001srfi-4#u8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u8vector\077\376\001"
"\000\000\020\001srfi-4#u8vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u16vector\376\001\000\000\020\001srfi-4#u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\017\001u16vector->blob\376\001\000\000\026\001srfi-4#u16vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001u16vector->blob/sh"
"ared\376\001\000\000\035\001srfi-4#u16vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u16vector->list\376\001\000\000\026\001srfi"
"-4#u16vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001u16vector-length\376\001\000\000\027\001srfi-4#u16vector-length\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001u16vector-ref\376\001\000\000\024\001srfi-4#u16vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001u16vector-"
"set!\376\001\000\000\025\001srfi-4#u16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001u16vector\077\376\001\000\000\021\001srfi-4#u16vector\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u32vector\376\001\000\000\020\001srfi-4#u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u32vector->blob\376\001"
"\000\000\026\001srfi-4#u32vector->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001u32vector->blob/shared\376\001\000\000\035\001srfi-4#u32"
"vector->blob/shared\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u32vector->list\376\001\000\000\026\001srfi-4#u32vector->list\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020\001u32vector-length\376\001\000\000\027\001srfi-4#u32vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001u32ve"
"ctor-ref\376\001\000\000\024\001srfi-4#u32vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001u32vector-set!\376\001\000\000\025\001srfi-4#u32"
"vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001u32vector\077\376\001\000\000\021\001srfi-4#u32vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u64v"
"ector\376\001\000\000\020\001srfi-4#u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u64vector->blob\376\001\000\000\026\001srfi-4#u64vector"
"->blob\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001u64vector->blob/shared\376\001\000\000\035\001srfi-4#u64vector->blob/shared\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001u64vector->list\376\001\000\000\026\001srfi-4#u64vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001u64vec"
"tor-length\376\001\000\000\027\001srfi-4#u64vector-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001u64vector-ref\376\001\000\000\024\001srfi-4"
"#u64vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001u64vector-set!\376\001\000\000\025\001srfi-4#u64vector-set!\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\012\001u64vector\077\376\001\000\000\021\001srfi-4#u64vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->f32vector\376\001\000\000\026\001srf"
"i-4#list->f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->f64vector\376\001\000\000\026\001srfi-4#list->f64vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->s16vector\376\001\000\000\026\001srfi-4#list->s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->s"
"32vector\376\001\000\000\026\001srfi-4#list->s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->s64vector\376\001\000\000\026\001srfi-4#"
"list->s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001list->s8vector\376\001\000\000\025\001srfi-4#list->s8vector\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\017\001list->u16vector\376\001\000\000\026\001srfi-4#list->u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->u32vect"
"or\376\001\000\000\026\001srfi-4#list->u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001list->u8vector\376\001\000\000\025\001srfi-4#list->u"
"8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001list->u64vector\376\001\000\000\026\001srfi-4#list->u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\016\001make-f32vector\376\001\000\000\025\001srfi-4#make-f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-f64vector\376\001\000\000\025\001s"
"rfi-4#make-f64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-s16vector\376\001\000\000\025\001srfi-4#make-s16vector\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\016\001make-s32vector\376\001\000\000\025\001srfi-4#make-s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-s64ve"
"ctor\376\001\000\000\025\001srfi-4#make-s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001make-s8vector\376\001\000\000\024\001srfi-4#make-s8"
"vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-u16vector\376\001\000\000\025\001srfi-4#make-u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001m"
"ake-u32vector\376\001\000\000\025\001srfi-4#make-u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-u64vector\376\001\000\000\025\001srfi"
"-4#make-u64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001make-u8vector\376\001\000\000\024\001srfi-4#make-u8vector\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016\001number-vector\077\376\001\000\000\025\001srfi-4#number-vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001read-u8vector\376\001"
"\000\000\024\001srfi-4#read-u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001read-u8vector!\376\001\000\000\025\001srfi-4#read-u8vector"
"!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001release-number-vector\376\001\000\000\034\001srfi-4#release-number-vector\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\014\001subf32vector\376\001\000\000\023\001srfi-4#subf32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001subf64vector\376\001\000\000\023\001s"
"rfi-4#subf64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001subs16vector\376\001\000\000\023\001srfi-4#subs16vector\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\014\001subs32vector\376\001\000\000\023\001srfi-4#subs32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001subs64vector\376\001\000\000\023\001sr"
"fi-4#subs64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001subs8vector\376\001\000\000\022\001srfi-4#subs8vector\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\014\001subu16vector\376\001\000\000\023\001srfi-4#subu16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001subu8vector\376\001\000\000\022\001srfi-4"
"#subu8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001subu32vector\376\001\000\000\023\001srfi-4#subu32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014"
"\001subu64vector\376\001\000\000\023\001srfi-4#subu64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001write-u8vector\376\001\000\000\025\001srfi-4"
"#write-u8vector\376\377\016"));
lf[101]=C_h_intern(&lf[101],25, C_text("##sys#import-library-hook"));
C_register_lf2(lf,102,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[79] = {
{C_text("f_1005:eval_2dmodules_2escm"),(void*)f_1005},
{C_text("f_1011:eval_2dmodules_2escm"),(void*)f_1011},
{C_text("f_1029:eval_2dmodules_2escm"),(void*)f_1029},
{C_text("f_1035:eval_2dmodules_2escm"),(void*)f_1035},
{C_text("f_1053:eval_2dmodules_2escm"),(void*)f_1053},
{C_text("f_1059:eval_2dmodules_2escm"),(void*)f_1059},
{C_text("f_1077:eval_2dmodules_2escm"),(void*)f_1077},
{C_text("f_1083:eval_2dmodules_2escm"),(void*)f_1083},
{C_text("f_1101:eval_2dmodules_2escm"),(void*)f_1101},
{C_text("f_1107:eval_2dmodules_2escm"),(void*)f_1107},
{C_text("f_1125:eval_2dmodules_2escm"),(void*)f_1125},
{C_text("f_1131:eval_2dmodules_2escm"),(void*)f_1131},
{C_text("f_1149:eval_2dmodules_2escm"),(void*)f_1149},
{C_text("f_1155:eval_2dmodules_2escm"),(void*)f_1155},
{C_text("f_1173:eval_2dmodules_2escm"),(void*)f_1173},
{C_text("f_1179:eval_2dmodules_2escm"),(void*)f_1179},
{C_text("f_1197:eval_2dmodules_2escm"),(void*)f_1197},
{C_text("f_1203:eval_2dmodules_2escm"),(void*)f_1203},
{C_text("f_1221:eval_2dmodules_2escm"),(void*)f_1221},
{C_text("f_1227:eval_2dmodules_2escm"),(void*)f_1227},
{C_text("f_1245:eval_2dmodules_2escm"),(void*)f_1245},
{C_text("f_1251:eval_2dmodules_2escm"),(void*)f_1251},
{C_text("f_1269:eval_2dmodules_2escm"),(void*)f_1269},
{C_text("f_1275:eval_2dmodules_2escm"),(void*)f_1275},
{C_text("f_1293:eval_2dmodules_2escm"),(void*)f_1293},
{C_text("f_1299:eval_2dmodules_2escm"),(void*)f_1299},
{C_text("f_1317:eval_2dmodules_2escm"),(void*)f_1317},
{C_text("f_1323:eval_2dmodules_2escm"),(void*)f_1323},
{C_text("f_1341:eval_2dmodules_2escm"),(void*)f_1341},
{C_text("f_457:eval_2dmodules_2escm"),(void*)f_457},
{C_text("f_459:eval_2dmodules_2escm"),(void*)f_459},
{C_text("f_465:eval_2dmodules_2escm"),(void*)f_465},
{C_text("f_483:eval_2dmodules_2escm"),(void*)f_483},
{C_text("f_489:eval_2dmodules_2escm"),(void*)f_489},
{C_text("f_507:eval_2dmodules_2escm"),(void*)f_507},
{C_text("f_513:eval_2dmodules_2escm"),(void*)f_513},
{C_text("f_519:eval_2dmodules_2escm"),(void*)f_519},
{C_text("f_537:eval_2dmodules_2escm"),(void*)f_537},
{C_text("f_543:eval_2dmodules_2escm"),(void*)f_543},
{C_text("f_561:eval_2dmodules_2escm"),(void*)f_561},
{C_text("f_567:eval_2dmodules_2escm"),(void*)f_567},
{C_text("f_585:eval_2dmodules_2escm"),(void*)f_585},
{C_text("f_591:eval_2dmodules_2escm"),(void*)f_591},
{C_text("f_609:eval_2dmodules_2escm"),(void*)f_609},
{C_text("f_615:eval_2dmodules_2escm"),(void*)f_615},
{C_text("f_633:eval_2dmodules_2escm"),(void*)f_633},
{C_text("f_639:eval_2dmodules_2escm"),(void*)f_639},
{C_text("f_645:eval_2dmodules_2escm"),(void*)f_645},
{C_text("f_663:eval_2dmodules_2escm"),(void*)f_663},
{C_text("f_669:eval_2dmodules_2escm"),(void*)f_669},
{C_text("f_687:eval_2dmodules_2escm"),(void*)f_687},
{C_text("f_693:eval_2dmodules_2escm"),(void*)f_693},
{C_text("f_711:eval_2dmodules_2escm"),(void*)f_711},
{C_text("f_717:eval_2dmodules_2escm"),(void*)f_717},
{C_text("f_735:eval_2dmodules_2escm"),(void*)f_735},
{C_text("f_741:eval_2dmodules_2escm"),(void*)f_741},
{C_text("f_759:eval_2dmodules_2escm"),(void*)f_759},
{C_text("f_765:eval_2dmodules_2escm"),(void*)f_765},
{C_text("f_771:eval_2dmodules_2escm"),(void*)f_771},
{C_text("f_789:eval_2dmodules_2escm"),(void*)f_789},
{C_text("f_795:eval_2dmodules_2escm"),(void*)f_795},
{C_text("f_813:eval_2dmodules_2escm"),(void*)f_813},
{C_text("f_819:eval_2dmodules_2escm"),(void*)f_819},
{C_text("f_837:eval_2dmodules_2escm"),(void*)f_837},
{C_text("f_843:eval_2dmodules_2escm"),(void*)f_843},
{C_text("f_861:eval_2dmodules_2escm"),(void*)f_861},
{C_text("f_867:eval_2dmodules_2escm"),(void*)f_867},
{C_text("f_885:eval_2dmodules_2escm"),(void*)f_885},
{C_text("f_891:eval_2dmodules_2escm"),(void*)f_891},
{C_text("f_909:eval_2dmodules_2escm"),(void*)f_909},
{C_text("f_915:eval_2dmodules_2escm"),(void*)f_915},
{C_text("f_933:eval_2dmodules_2escm"),(void*)f_933},
{C_text("f_939:eval_2dmodules_2escm"),(void*)f_939},
{C_text("f_957:eval_2dmodules_2escm"),(void*)f_957},
{C_text("f_963:eval_2dmodules_2escm"),(void*)f_963},
{C_text("f_981:eval_2dmodules_2escm"),(void*)f_981},
{C_text("f_987:eval_2dmodules_2escm"),(void*)f_987},
{C_text("toplevel:eval_2dmodules_2escm"),(void*)C_eval_2dmodules_toplevel},
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
(o e)|safe calls: 109 
o|inlining procedure: k1343 
o|contracted procedure: "(eval-modules.scm:100) g307308" 
o|inlining procedure: k1343 
o|replaced variables: 186 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 187 
o|removed binding forms: 2 
o|simplifications: ((##core#call . 108)) 
o|  call simplifications:
o|    scheme#list	108
o|contracted procedure: k471 
o|contracted procedure: k475 
o|contracted procedure: k479 
o|contracted procedure: k495 
o|contracted procedure: k499 
o|contracted procedure: k503 
o|contracted procedure: k525 
o|contracted procedure: k529 
o|contracted procedure: k533 
o|contracted procedure: k549 
o|contracted procedure: k553 
o|contracted procedure: k557 
o|contracted procedure: k573 
o|contracted procedure: k577 
o|contracted procedure: k581 
o|contracted procedure: k597 
o|contracted procedure: k601 
o|contracted procedure: k605 
o|contracted procedure: k621 
o|contracted procedure: k625 
o|contracted procedure: k629 
o|contracted procedure: k651 
o|contracted procedure: k655 
o|contracted procedure: k659 
o|contracted procedure: k675 
o|contracted procedure: k679 
o|contracted procedure: k683 
o|contracted procedure: k699 
o|contracted procedure: k703 
o|contracted procedure: k707 
o|contracted procedure: k723 
o|contracted procedure: k727 
o|contracted procedure: k731 
o|contracted procedure: k747 
o|contracted procedure: k751 
o|contracted procedure: k755 
o|contracted procedure: k777 
o|contracted procedure: k781 
o|contracted procedure: k785 
o|contracted procedure: k801 
o|contracted procedure: k805 
o|contracted procedure: k809 
o|contracted procedure: k825 
o|contracted procedure: k829 
o|contracted procedure: k833 
o|contracted procedure: k849 
o|contracted procedure: k853 
o|contracted procedure: k857 
o|contracted procedure: k873 
o|contracted procedure: k877 
o|contracted procedure: k881 
o|contracted procedure: k897 
o|contracted procedure: k901 
o|contracted procedure: k905 
o|contracted procedure: k921 
o|contracted procedure: k925 
o|contracted procedure: k929 
o|contracted procedure: k945 
o|contracted procedure: k949 
o|contracted procedure: k953 
o|contracted procedure: k969 
o|contracted procedure: k973 
o|contracted procedure: k977 
o|contracted procedure: k993 
o|contracted procedure: k997 
o|contracted procedure: k1001 
o|contracted procedure: k1017 
o|contracted procedure: k1021 
o|contracted procedure: k1025 
o|contracted procedure: k1041 
o|contracted procedure: k1045 
o|contracted procedure: k1049 
o|contracted procedure: k1065 
o|contracted procedure: k1069 
o|contracted procedure: k1073 
o|contracted procedure: k1089 
o|contracted procedure: k1093 
o|contracted procedure: k1097 
o|contracted procedure: k1113 
o|contracted procedure: k1117 
o|contracted procedure: k1121 
o|contracted procedure: k1137 
o|contracted procedure: k1141 
o|contracted procedure: k1145 
o|contracted procedure: k1161 
o|contracted procedure: k1165 
o|contracted procedure: k1169 
o|contracted procedure: k1185 
o|contracted procedure: k1189 
o|contracted procedure: k1193 
o|contracted procedure: k1209 
o|contracted procedure: k1213 
o|contracted procedure: k1217 
o|contracted procedure: k1233 
o|contracted procedure: k1237 
o|contracted procedure: k1241 
o|contracted procedure: k1257 
o|contracted procedure: k1261 
o|contracted procedure: k1265 
o|contracted procedure: k1281 
o|contracted procedure: k1285 
o|contracted procedure: k1289 
o|contracted procedure: k1305 
o|contracted procedure: k1309 
o|contracted procedure: k1313 
o|contracted procedure: k1329 
o|contracted procedure: k1333 
o|contracted procedure: k1337 
o|removed binding forms: 108 
o|substituted constant variable: r472 
o|substituted constant variable: r476 
o|substituted constant variable: r480 
o|substituted constant variable: r496 
o|substituted constant variable: r500 
o|substituted constant variable: r504 
o|substituted constant variable: r526 
o|substituted constant variable: r530 
o|substituted constant variable: r534 
o|substituted constant variable: r550 
o|substituted constant variable: r554 
o|substituted constant variable: r558 
o|substituted constant variable: r574 
o|substituted constant variable: r578 
o|substituted constant variable: r582 
o|substituted constant variable: r598 
o|substituted constant variable: r602 
o|substituted constant variable: r606 
o|substituted constant variable: r622 
o|substituted constant variable: r626 
o|substituted constant variable: r630 
o|substituted constant variable: r652 
o|substituted constant variable: r656 
o|substituted constant variable: r660 
o|substituted constant variable: r676 
o|substituted constant variable: r680 
o|substituted constant variable: r684 
o|substituted constant variable: r700 
o|substituted constant variable: r704 
o|substituted constant variable: r708 
o|substituted constant variable: r724 
o|substituted constant variable: r728 
o|substituted constant variable: r732 
o|substituted constant variable: r748 
o|substituted constant variable: r752 
o|substituted constant variable: r756 
o|substituted constant variable: r778 
o|substituted constant variable: r782 
o|substituted constant variable: r786 
o|substituted constant variable: r802 
o|substituted constant variable: r806 
o|substituted constant variable: r810 
o|substituted constant variable: r826 
o|substituted constant variable: r830 
o|substituted constant variable: r834 
o|substituted constant variable: r850 
o|substituted constant variable: r854 
o|substituted constant variable: r858 
o|substituted constant variable: r874 
o|substituted constant variable: r878 
o|substituted constant variable: r882 
o|substituted constant variable: r898 
o|substituted constant variable: r902 
o|substituted constant variable: r906 
o|substituted constant variable: r922 
o|substituted constant variable: r926 
o|substituted constant variable: r930 
o|substituted constant variable: r946 
o|substituted constant variable: r950 
o|substituted constant variable: r954 
o|substituted constant variable: r970 
o|substituted constant variable: r974 
o|substituted constant variable: r978 
o|substituted constant variable: r994 
o|substituted constant variable: r998 
o|substituted constant variable: r1002 
o|substituted constant variable: r1018 
o|substituted constant variable: r1022 
o|substituted constant variable: r1026 
o|substituted constant variable: r1042 
o|substituted constant variable: r1046 
o|substituted constant variable: r1050 
o|substituted constant variable: r1066 
o|substituted constant variable: r1070 
o|substituted constant variable: r1074 
o|substituted constant variable: r1090 
o|substituted constant variable: r1094 
o|substituted constant variable: r1098 
o|substituted constant variable: r1114 
o|substituted constant variable: r1118 
o|substituted constant variable: r1122 
o|substituted constant variable: r1138 
o|substituted constant variable: r1142 
o|substituted constant variable: r1146 
o|substituted constant variable: r1162 
o|substituted constant variable: r1166 
o|substituted constant variable: r1170 
o|substituted constant variable: r1186 
o|substituted constant variable: r1190 
o|substituted constant variable: r1194 
o|substituted constant variable: r1210 
o|substituted constant variable: r1214 
o|substituted constant variable: r1218 
o|substituted constant variable: r1234 
o|substituted constant variable: r1238 
o|substituted constant variable: r1242 
o|substituted constant variable: r1258 
o|substituted constant variable: r1262 
o|substituted constant variable: r1266 
o|substituted constant variable: r1282 
o|substituted constant variable: r1286 
o|substituted constant variable: r1290 
o|substituted constant variable: r1306 
o|substituted constant variable: r1310 
o|substituted constant variable: r1314 
o|substituted constant variable: r1330 
o|substituted constant variable: r1334 
o|substituted constant variable: r1338 
o|removed binding forms: 108 
*/
/* end of file */
