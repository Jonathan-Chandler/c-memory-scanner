/* Generated from read-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: read-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file read-syntax.c -emit-import-library chicken.read-syntax
   unit: read-syntax
   uses: internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[34];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,16),40,102,95,51,49,50,32,99,104,114,32,112,114,111,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,115,121,110,116,97,120,45,115,101,116,116,101,114,32,108,111,99,32,115,108,111,116,32,119,114,97,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,99,111,112,121,45,114,101,97,100,45,116,97,98,108,101,32,114,116,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,100,101,102,105,110,101,45,114,101,97,100,101,114,45,99,116,111,114,32,115,112,101,99,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,18),40,102,95,53,50,56,32,95,32,112,111,114,116,32,110,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,11),40,97,53,50,53,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,53,51,57,32,95,32,112,111,114,116,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,97,53,51,54,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,53,53,48,32,95,32,112,111,114,116,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,97,53,52,55,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_284)
static void C_ccall f_284(C_word c,C_word *av) C_noret;
C_noret_decl(f_287)
static void C_ccall f_287(C_word c,C_word *av) C_noret;
C_noret_decl(f_310)
static void C_fcall f_310(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word *av) C_noret;
C_noret_decl(f_325)
static void C_ccall f_325(C_word c,C_word *av) C_noret;
C_noret_decl(f_328)
static void C_fcall f_328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word *av) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word *av) C_noret;
C_noret_decl(f_371)
static void C_ccall f_371(C_word c,C_word *av) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word *av) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_383)
static void C_ccall f_383(C_word c,C_word *av) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word *av) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word *av) C_noret;
C_noret_decl(f_406)
static void C_ccall f_406(C_word c,C_word *av) C_noret;
C_noret_decl(f_413)
static void C_ccall f_413(C_word c,C_word *av) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word *av) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word *av) C_noret;
C_noret_decl(f_449)
static void C_ccall f_449(C_word c,C_word *av) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word *av) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word *av) C_noret;
C_noret_decl(f_463)
static void C_fcall f_463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word *av) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word *av) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word *av) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word *av) C_noret;
C_noret_decl(f_548)
static void C_ccall f_548(C_word c,C_word *av) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word *av) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word *av) C_noret;
C_noret_decl(C_read_2dsyntax_toplevel)
C_externexport void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_310)
static void C_ccall trf_310(C_word c,C_word *av) C_noret;
static void C_ccall trf_310(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_310(t0,t1,t2,t3);}

C_noret_decl(trf_328)
static void C_ccall trf_328(C_word c,C_word *av) C_noret;
static void C_ccall trf_328(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_328(t0,t1);}

C_noret_decl(trf_463)
static void C_ccall trf_463(C_word c,C_word *av) C_noret;
static void C_ccall trf_463(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_463(t0,t1);}

/* k282 */
static void C_ccall f_284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_284,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k285 in k282 */
static void C_ccall f_287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_287,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.read-syntax#current-read-table ...) */,*((C_word*)lf[3]+1));
t3=C_mutate(&lf[4] /* (set! chicken.read-syntax#syntax-setter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_548,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:64: syntax-setter */
f_310(t4,lf[33],C_fix(1),t5);}

/* chicken.read-syntax#syntax-setter in k285 in k282 */
static void C_fcall f_310(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_310,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_312,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_312 in chicken.read-syntax#syntax-setter in k285 in k282 */
static void C_ccall f_312(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_312,c,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t4=C_i_assq(t2,*((C_word*)lf[5]+1));
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(t4,C_fix(1),t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_a_i_cons(&a,2,t2,t3);
t6=C_a_i_cons(&a,2,t5,*((C_word*)lf[5]+1));
t7=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#read-marks ...) */,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_325,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* read-syntax.scm:51: current-read-table */
t5=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k323 */
static void C_ccall f_325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_325,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_slot(t1,((C_word*)t0)[5]))){
t3=t2;
f_328(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_371,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:53: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=C_fix(256);
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k326 in k323 */
static void C_fcall f_328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_328,2,t0,t1);}
a=C_alloc(9);
t2=C_i_check_char_2(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t3,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* read-syntax.scm:56: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_fix(256);
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* k335 in k326 in k323 */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_337,c,av);}
a=C_alloc(8);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* read-syntax.scm:58: ##sys#check-closure */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(C_slot(((C_word*)t0)[3],((C_word*)t0)[4]),((C_word*)t0)[6],C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k341 in k335 in k326 in k323 */
static void C_ccall f_343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_343,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_354,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:59: wrap */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k352 in k341 in k335 in k326 in k323 */
static void C_ccall f_354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_354,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k369 in k323 */
static void C_ccall f_371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_371,c,av);}
t2=((C_word*)t0)[2];
f_328(t2,C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k373 in k285 in k282 */
static void C_ccall f_375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_375,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[9]+1 /* (set! chicken.read-syntax#set-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:72: syntax-setter */
f_310(t3,lf[32],C_fix(2),t4);}

/* k377 in k373 in k285 in k282 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_379,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[10]+1 /* (set! chicken.read-syntax#set-sharp-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:80: syntax-setter */
f_310(t3,lf[31],C_fix(3),t4);}

/* k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_383,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[11]+1 /* (set! chicken.read-syntax#set-parameterized-read-syntax! ...) */,t1);
t3=C_mutate((C_word*)lf[12]+1 /* (set! chicken.read-syntax#copy-read-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_385,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:102: scheme#make-vector */
t5=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.read-syntax#copy-read-table in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_385,c,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[13],lf[14]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_399,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* read-syntax.scm:94: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=C_block_size(t4);
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_399(2,av2);}}}

/* k397 in chicken.read-syntax#copy-read-table in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_399,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
/* read-syntax.scm:96: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_block_size(t2);
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_406(2,av2);}}}

/* k404 in k397 in chicken.read-syntax#copy-read-table in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_406,c,av);}
a=C_alloc(10);
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_413,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
/* read-syntax.scm:98: ##sys#vector-resize */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_block_size(t2);
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[13],((C_word*)t0)[4],t1,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k411 in k404 in k397 in chicken.read-syntax#copy-read-table in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_413,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record4(&a,4,lf[13],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_438(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_438,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[16] /* (set! chicken.read-syntax#sharp-comma-reader-ctors ...) */,t1);
t3=C_mutate((C_word*)lf[17]+1 /* (set! chicken.read-syntax#define-reader-ctor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_440,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[20]+1);
t5=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_449,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:128: chicken.platform#register-feature! */
t7=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* chicken.read-syntax#define-reader-ctor in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_440,c,av);}
t4=C_i_check_symbol_2(t2,lf[18]);
/* read-syntax.scm:106: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=lf[16];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* ##sys#user-read-hook in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_449,c,av);}
a=C_alloc(4);
if(C_truep(C_i_char_equalp(t2,C_make_character(44)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_459,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#read-char/port */
t5=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* read-syntax.scm:126: old */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k457 in ##sys#user-read-hook in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_459,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* read-syntax.scm:115: read */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k460 in k457 in ##sys#user-read-hook in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_462(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_462,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_463,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t3=C_i_nullp(t1);
t4=(C_truep(t3)?t3:C_i_not(C_i_listp(t1)));
if(C_truep(t4)){
/* read-syntax.scm:118: err */
t5=t2;
f_463(t5,((C_word*)t0)[3]);}
else{
t5=C_slot(t1,C_fix(0));
t6=C_i_symbolp(t5);
if(C_truep(C_i_not(t6))){
/* read-syntax.scm:121: err */
t7=t2;
f_463(t7,((C_word*)t0)[3]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:122: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t7;
av2[2]=lf[16];
av2[3]=t5;
tp(4,av2);}}}}

/* err in k460 in k457 in ##sys#user-read-hook in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_fcall f_463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_463,2,t0,t1);}
/* read-syntax.scm:116: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[22];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k492 in k460 in k457 in ##sys#user-read-hook in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_494,c,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_slot(((C_word*)t0)[3],C_fix(1));
C_apply(4,av2);}}
else{
/* read-syntax.scm:125: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[23];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}

/* k522 in k436 in k381 in k377 in k373 in k285 in k282 */
static void C_ccall f_524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_524,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a525 in k377 in k373 in k285 in k282 */
static void C_ccall f_526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_526,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_528,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_528 in a525 in k377 in k373 in k285 in k282 */
static void C_ccall f_528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_528,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_532,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:84: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k530 */
static void C_ccall f_532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_532,c,av);}
/* read-syntax.scm:85: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* a536 in k373 in k285 in k282 */
static void C_ccall f_537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_537,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_539,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_539 in a536 in k373 in k285 in k282 */
static void C_ccall f_539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_539,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_543,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:76: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k541 */
static void C_ccall f_543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_543,c,av);}
/* read-syntax.scm:77: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a547 in k285 in k282 */
static void C_ccall f_548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_548,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_550,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_550 in a547 in k285 in k282 */
static void C_ccall f_550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_550,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:68: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k552 */
static void C_ccall f_554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_554,c,av);}
/* read-syntax.scm:69: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("read-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_read_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(210))){
C_save(t1);
C_rereclaim2(210*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,34);
lf[0]=C_h_intern(&lf[0],11, C_text("read-syntax"));
lf[1]=C_h_intern(&lf[1],20, C_text("chicken.read-syntax#"));
lf[2]=C_h_intern(&lf[2],38, C_text("chicken.read-syntax#current-read-table"));
lf[3]=C_h_intern(&lf[3],24, C_text("##sys#current-read-table"));
lf[5]=C_h_intern(&lf[5],16, C_text("##sys#read-marks"));
lf[6]=C_h_intern(&lf[6],19, C_text("##sys#check-closure"));
lf[7]=C_h_intern(&lf[7],17, C_text("##sys#check-range"));
lf[8]=C_h_intern(&lf[8],17, C_text("##sys#make-vector"));
lf[9]=C_h_intern(&lf[9],36, C_text("chicken.read-syntax#set-read-syntax!"));
lf[10]=C_h_intern(&lf[10],42, C_text("chicken.read-syntax#set-sharp-read-syntax!"));
lf[11]=C_h_intern(&lf[11],50, C_text("chicken.read-syntax#set-parameterized-read-syntax!"));
lf[12]=C_h_intern(&lf[12],35, C_text("chicken.read-syntax#copy-read-table"));
lf[13]=C_h_intern(&lf[13],10, C_text("read-table"));
lf[14]=C_h_intern(&lf[14],15, C_text("copy-read-table"));
lf[15]=C_h_intern(&lf[15],19, C_text("##sys#vector-resize"));
lf[17]=C_h_intern(&lf[17],38, C_text("chicken.read-syntax#define-reader-ctor"));
lf[18]=C_h_intern(&lf[18],18, C_text("define-reader-ctor"));
lf[19]=C_h_intern(&lf[19],32, C_text("chicken.internal#hash-table-set!"));
lf[20]=C_h_intern(&lf[20],20, C_text("##sys#user-read-hook"));
lf[21]=C_h_intern(&lf[21],16, C_text("##sys#read-error"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000!invalid sharp-comma external form"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000!undefined sharp-comma constructor"));
lf[24]=C_h_intern(&lf[24],31, C_text("chicken.internal#hash-table-ref"));
lf[25]=C_h_intern(&lf[25],11, C_text("scheme#read"));
lf[26]=C_h_intern(&lf[26],20, C_text("##sys#read-char/port"));
lf[27]=C_h_intern(&lf[27],34, C_text("chicken.platform#register-feature!"));
lf[28]=C_h_intern(&lf[28],7, C_text("srfi-10"));
lf[29]=C_h_intern(&lf[29],18, C_text("scheme#make-vector"));
lf[30]=C_h_intern(&lf[30],17, C_text("##sys#read-char-0"));
lf[31]=C_h_intern(&lf[31],30, C_text("set-parameterized-read-syntax!"));
lf[32]=C_h_intern(&lf[32],22, C_text("set-sharp-read-syntax!"));
lf[33]=C_h_intern(&lf[33],16, C_text("set-read-syntax!"));
C_register_lf2(lf,34,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_284,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[36] = {
{C_text("f_284:read_2dsyntax_2escm"),(void*)f_284},
{C_text("f_287:read_2dsyntax_2escm"),(void*)f_287},
{C_text("f_310:read_2dsyntax_2escm"),(void*)f_310},
{C_text("f_312:read_2dsyntax_2escm"),(void*)f_312},
{C_text("f_325:read_2dsyntax_2escm"),(void*)f_325},
{C_text("f_328:read_2dsyntax_2escm"),(void*)f_328},
{C_text("f_337:read_2dsyntax_2escm"),(void*)f_337},
{C_text("f_343:read_2dsyntax_2escm"),(void*)f_343},
{C_text("f_354:read_2dsyntax_2escm"),(void*)f_354},
{C_text("f_371:read_2dsyntax_2escm"),(void*)f_371},
{C_text("f_375:read_2dsyntax_2escm"),(void*)f_375},
{C_text("f_379:read_2dsyntax_2escm"),(void*)f_379},
{C_text("f_383:read_2dsyntax_2escm"),(void*)f_383},
{C_text("f_385:read_2dsyntax_2escm"),(void*)f_385},
{C_text("f_399:read_2dsyntax_2escm"),(void*)f_399},
{C_text("f_406:read_2dsyntax_2escm"),(void*)f_406},
{C_text("f_413:read_2dsyntax_2escm"),(void*)f_413},
{C_text("f_438:read_2dsyntax_2escm"),(void*)f_438},
{C_text("f_440:read_2dsyntax_2escm"),(void*)f_440},
{C_text("f_449:read_2dsyntax_2escm"),(void*)f_449},
{C_text("f_459:read_2dsyntax_2escm"),(void*)f_459},
{C_text("f_462:read_2dsyntax_2escm"),(void*)f_462},
{C_text("f_463:read_2dsyntax_2escm"),(void*)f_463},
{C_text("f_494:read_2dsyntax_2escm"),(void*)f_494},
{C_text("f_524:read_2dsyntax_2escm"),(void*)f_524},
{C_text("f_526:read_2dsyntax_2escm"),(void*)f_526},
{C_text("f_528:read_2dsyntax_2escm"),(void*)f_528},
{C_text("f_532:read_2dsyntax_2escm"),(void*)f_532},
{C_text("f_537:read_2dsyntax_2escm"),(void*)f_537},
{C_text("f_539:read_2dsyntax_2escm"),(void*)f_539},
{C_text("f_543:read_2dsyntax_2escm"),(void*)f_543},
{C_text("f_548:read_2dsyntax_2escm"),(void*)f_548},
{C_text("f_550:read_2dsyntax_2escm"),(void*)f_550},
{C_text("f_554:read_2dsyntax_2escm"),(void*)f_554},
{C_text("toplevel:read_2dsyntax_2escm"),(void*)C_read_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.read-syntax#d 
o|hiding unexported module binding: chicken.read-syntax#define-alias 
o|hiding unexported module binding: chicken.read-syntax#set-read-mark! 
o|hiding unexported module binding: chicken.read-syntax#syntax-setter 
o|hiding unexported module binding: chicken.read-syntax#sharp-comma-reader-ctors 
o|eliminated procedure checks: 12 
(o e)|safe calls: 41 
o|safe globals: (chicken.read-syntax#syntax-setter chicken.read-syntax#current-read-table chicken.read-syntax#set-read-mark!) 
o|inlining procedure: k314 
o|contracted procedure: "(read-syntax.scm:50) chicken.read-syntax#set-read-mark!" 
o|inlining procedure: k294 
o|inlining procedure: k294 
o|inlining procedure: k314 
o|inlining procedure: k411 
o|inlining procedure: k411 
o|inlining procedure: k451 
o|inlining procedure: k483 
o|inlining procedure: k483 
o|inlining procedure: k451 
o|replaced variables: 78 
o|removed binding forms: 26 
o|substituted constant variable: r412564 
o|substituted constant variable: r412564 
o|replaced variables: 7 
o|removed binding forms: 54 
o|removed binding forms: 6 
o|simplifications: ((##core#call . 33)) 
o|  call simplifications:
o|    scheme#char=?
o|    scheme#read-char
o|    scheme#null?
o|    scheme#list?
o|    scheme#not	2
o|    scheme#apply
o|    ##sys#check-symbol
o|    ##sys#check-structure
o|    ##sys#size	3
o|    ##sys#make-structure	2
o|    scheme#symbol?	2
o|    ##sys#check-char
o|    scheme#char->integer
o|    ##sys#slot	8
o|    scheme#assq
o|    scheme#cons	2
o|    ##sys#setslot	4
o|contracted procedure: k317 
o|contracted procedure: k291 
o|contracted procedure: k305 
o|contracted procedure: k301 
o|contracted procedure: k329 
o|contracted procedure: k332 
o|contracted procedure: k348 
o|contracted procedure: k359 
o|contracted procedure: k362 
o|contracted procedure: k387 
o|contracted procedure: k394 
o|contracted procedure: k401 
o|contracted procedure: k408 
o|contracted procedure: k418 
o|contracted procedure: k425 
o|contracted procedure: k432 
o|contracted procedure: k442 
o|contracted procedure: k454 
o|contracted procedure: k471 
o|contracted procedure: k480 
o|contracted procedure: k509 
o|contracted procedure: k486 
o|contracted procedure: k502 
o|contracted procedure: k516 
o|simplifications: ((if . 1) (let . 10)) 
o|removed binding forms: 24 
o|contracted procedure: k474 
o|removed binding forms: 1 
o|customizable procedures: (chicken.read-syntax#syntax-setter err149 k326) 
o|calls to known targets: 9 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_310 
*/
/* end of file */
