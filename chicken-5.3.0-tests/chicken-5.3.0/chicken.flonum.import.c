/* Generated from chicken.flonum.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.flonum.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.flonum.import.c
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[5];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,49,50,52,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_117)
static void C_ccall f_117(C_word c,C_word *av) C_noret;
C_noret_decl(f_120)
static void C_ccall f_120(C_word c,C_word *av) C_noret;
C_noret_decl(f_123)
static void C_ccall f_123(C_word c,C_word *av) C_noret;
C_noret_decl(f_125)
static void C_ccall f_125(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k115 */
static void C_ccall f_117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_117,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k118 in k115 */
static void C_ccall f_120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_120,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_125,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken.flonum.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}

/* k121 in k118 in k115 */
static void C_ccall f_123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_123,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a124 in k118 in k115 */
static void C_ccall f_125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_125,c,av);}
/* chicken.flonum.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t1;
av2[2]=lf[1];
av2[3]=lf[2];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[3];
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
if(C_unlikely(!C_demand_2(868))){
C_save(t1);
C_rereclaim2(868*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],30, C_text("##sys#register-compiled-module"));
lf[1]=C_h_intern(&lf[1],14, C_text("chicken.flonum"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001flonum-print-precision\376\001\000\000%\001chicken.flonum#flonum-print-precisio"
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
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2eflonum_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2eflonum_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2eflonum_2eimport_2escm"),(void*)f_123},
{C_text("f_125:chicken_2eflonum_2eimport_2escm"),(void*)f_125},
{C_text("toplevel:chicken_2eflonum_2eimport_2escm"),(void*)C_toplevel},
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
(o e)|safe calls: 3 
o|replaced variables: 4 
o|removed binding forms: 3 
o|removed binding forms: 4 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    scheme#list	3
o|contracted procedure: k131 
o|contracted procedure: k135 
o|contracted procedure: k139 
o|removed binding forms: 3 
o|substituted constant variable: r132 
o|substituted constant variable: r136 
o|substituted constant variable: r140 
o|removed binding forms: 3 
*/
/* end of file */
