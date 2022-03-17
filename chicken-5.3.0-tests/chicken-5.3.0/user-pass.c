/* Generated from user-pass.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: user-pass.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.user-pass -output-file user-pass.c
   unit: user-pass
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[8];
static double C_possibly_force_alignment;


C_noret_decl(f_134)
static void C_ccall f_134(C_word c,C_word *av) C_noret;
C_noret_decl(f_137)
static void C_ccall f_137(C_word c,C_word *av) C_noret;
C_noret_decl(f_141)
static void C_ccall f_141(C_word c,C_word *av) C_noret;
C_noret_decl(f_145)
static void C_ccall f_145(C_word c,C_word *av) C_noret;
C_noret_decl(f_149)
static void C_ccall f_149(C_word c,C_word *av) C_noret;
C_noret_decl(f_153)
static void C_ccall f_153(C_word c,C_word *av) C_noret;
C_noret_decl(f_157)
static void C_ccall f_157(C_word c,C_word *av) C_noret;
C_noret_decl(C_user_2dpass_toplevel)
C_externexport void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;

/* k132 */
static void C_ccall f_134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_134,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k135 in k132 */
static void C_ccall f_137(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_137,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:37: chicken.base#make-parameter */
t5=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k139 in k135 in k132 */
static void C_ccall f_141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_141,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.compiler.user-pass#user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:38: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k143 in k139 in k135 in k132 */
static void C_ccall f_145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_145,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.user-pass#user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:39: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k147 in k143 in k139 in k135 in k132 */
static void C_ccall f_149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_149,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! chicken.compiler.user-pass#user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:40: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k151 in k147 in k143 in k139 in k135 in k132 */
static void C_ccall f_153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_153,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.user-pass#user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* user-pass.scm:41: chicken.base#make-parameter */
t4=C_fast_retrieve(lf[7]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k155 in k151 in k147 in k143 in k139 in k135 in k132 */
static void C_ccall f_157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_157,c,av);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! chicken.compiler.user-pass#user-post-analysis-pass ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("user-pass"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_user_2dpass_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(56))){
C_save(t1);
C_rereclaim2(56*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,8);
lf[0]=C_h_intern(&lf[0],9, C_text("user-pass"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.compiler.user-pass#"));
lf[2]=C_h_intern(&lf[2],44, C_text("chicken.compiler.user-pass#user-options-pass"));
lf[3]=C_h_intern(&lf[3],41, C_text("chicken.compiler.user-pass#user-read-pass"));
lf[4]=C_h_intern(&lf[4],49, C_text("chicken.compiler.user-pass#user-preprocessor-pass"));
lf[5]=C_h_intern(&lf[5],36, C_text("chicken.compiler.user-pass#user-pass"));
lf[6]=C_h_intern(&lf[6],50, C_text("chicken.compiler.user-pass#user-post-analysis-pass"));
lf[7]=C_h_intern(&lf[7],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,8,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_134,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[9] = {
{C_text("f_134:user_2dpass_2escm"),(void*)f_134},
{C_text("f_137:user_2dpass_2escm"),(void*)f_137},
{C_text("f_141:user_2dpass_2escm"),(void*)f_141},
{C_text("f_145:user_2dpass_2escm"),(void*)f_145},
{C_text("f_149:user_2dpass_2escm"),(void*)f_149},
{C_text("f_153:user_2dpass_2escm"),(void*)f_153},
{C_text("f_157:user_2dpass_2escm"),(void*)f_157},
{C_text("toplevel:user_2dpass_2escm"),(void*)C_user_2dpass_toplevel},
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
(o e)|safe calls: 5 
o|removed binding forms: 9 
*/
/* end of file */
