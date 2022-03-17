/* Generated from chicken.base.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.base.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.base.import.c
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
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_117)
static void C_ccall f_117(C_word c,C_word *av) C_noret;
C_noret_decl(f_120)
static void C_ccall f_120(C_word c,C_word *av) C_noret;
C_noret_decl(f_123)
static void C_ccall f_123(C_word c,C_word *av) C_noret;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_120,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=lf[2];
av2[4]=lf[3];
av2[5]=C_fast_retrieve(lf[4]);
tp(6,av2);}}

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
if(C_unlikely(!C_demand_2(1728))){
C_save(t1);
C_rereclaim2(1728*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],26, C_text("##sys#register-core-module"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.base"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001add1\376\001\000\000\021\001chicken.base#add1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001alist-ref\376\001\000\000\026\001chicke"
"n.base#alist-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001alist-update\376\001\000\000\031\001chicken.base#alist-update\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\015\001alist-update!\376\001\000\000\032\001chicken.base#alist-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001atom\077\376\001\000"
"\000\022\001chicken.base#atom\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001bignum\077\376\001\000\000\024\001chicken.base#bignum\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\007\001butlast\376\001\000\000\024\001chicken.base#butlast\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001call/cc\376\001\000\000\024\001chicken.base"
"#call/cc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001case-sensitive\376\001\000\000\033\001chicken.base#case-sensitive\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\011\001char-name\376\001\000\000\026\001chicken.base#char-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001chop\376\001\000\000\021\001chicken.ba"
"se#chop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001complement\376\001\000\000\027\001chicken.base#complement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001co"
"mpose\376\001\000\000\024\001chicken.base#compose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001compress\376\001\000\000\025\001chicken.base#compre"
"ss\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001conjoin\376\001\000\000\024\001chicken.base#conjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001constantly\376\001\000"
"\000\027\001chicken.base#constantly\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001cplxnum\077\376\001\000\000\025\001chicken.base#cplxnum\077\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\022\001current-error-port\376\001\000\000\037\001chicken.base#current-error-port\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\007\001disjoin\376\001\000\000\024\001chicken.base#disjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001each\376\001\000\000\021\001chicken.base#each"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001emergency-exit\376\001\000\000\033\001chicken.base#emergency-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001e"
"nable-warnings\376\001\000\000\034\001chicken.base#enable-warnings\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001equal=\077\376\001\000\000\024\001chi"
"cken.base#equal=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001error\376\001\000\000\022\001chicken.base#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001ex"
"act-integer\077\376\001\000\000\033\001chicken.base#exact-integer\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001exact-integer-nth-r"
"oot\376\001\000\000#\001chicken.base#exact-integer-nth-root\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001exact-integer-sqrt\376\001"
"\000\000\037\001chicken.base#exact-integer-sqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001exit\376\001\000\000\021\001chicken.base#exit\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014\001exit-handler\376\001\000\000\031\001chicken.base#exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001finite\077"
"\376\001\000\000\024\001chicken.base#finite\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fixnum\077\376\001\000\000\024\001chicken.base#fixnum\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\007\001flatten\376\001\000\000\024\001chicken.base#flatten\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001flip\376\001\000\000\021\001chicken.ba"
"se#flip\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001flonum\077\376\001\000\000\024\001chicken.base#flonum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001flush-ou"
"tput\376\001\000\000\031\001chicken.base#flush-output\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001foldl\376\001\000\000\022\001chicken.base#foldl"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001foldr\376\001\000\000\022\001chicken.base#foldr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001gensym\376\001\000\000\023\001chicken"
".base#gensym\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001get-call-chain\376\001\000\000\033\001chicken.base#get-call-chain\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\021\001get-output-string\376\001\000\000\036\001chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001"
"getter-with-setter\376\001\000\000\037\001chicken.base#getter-with-setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001identity\376"
"\001\000\000\025\001chicken.base#identity\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001implicit-exit-handler\376\001\000\000\042\001chicken.bas"
"e#implicit-exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001infinite\077\376\001\000\000\026\001chicken.base#infinite\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\020\001input-port-open\077\376\001\000\000\035\001chicken.base#input-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001i"
"ntersperse\376\001\000\000\030\001chicken.base#intersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001join\376\001\000\000\021\001chicken.base#j"
"oin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001keyword-style\376\001\000\000\032\001chicken.base#keyword-style\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001"
"list-of\077\376\001\000\000\025\001chicken.base#list-of\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-parameter\376\001\000\000\033\001chicken.b"
"ase#make-parameter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001make-promise\376\001\000\000\031\001chicken.base#make-promise\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\004\001nan\077\376\001\000\000\021\001chicken.base#nan\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001notice\376\001\000\000\023\001chicken.base"
"#notice\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001o\376\001\000\000\016\001chicken.base#o\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001on-exit\376\001\000\000\024\001chicken"
".base#on-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001open-input-string\376\001\000\000\036\001chicken.base#open-input-stri"
"ng\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001open-output-string\376\001\000\000\037\001chicken.base#open-output-string\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\021\001output-port-open\077\376\001\000\000\036\001chicken.base#output-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001pa"
"rentheses-synonyms\376\001\000\000!\001chicken.base#parentheses-synonyms\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001port\077\376\001"
"\000\000\022\001chicken.base#port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001port-closed\077\376\001\000\000\031\001chicken.base#port-closed"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001print-call-chain\376\001\000\000\035\001chicken.base#print-call-chain\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\005\001print\376\001\000\000\022\001chicken.base#print\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001print\052\376\001\000\000\023\001chicken.base#print\052"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001procedure-information\376\001\000\000\042\001chicken.base#procedure-information\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\010\001promise\077\376\001\000\000\025\001chicken.base#promise\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001quotient&modulo\376"
"\001\000\000\034\001chicken.base#quotient&modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001quotient&remainder\376\001\000\000\037\001chicken"
".base#quotient&remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001rassoc\376\001\000\000\023\001chicken.base#rassoc\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\007\001ratnum\077\376\001\000\000\024\001chicken.base#ratnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001record-printer\376\001\000\000\033\001chic"
"ken.base#record-printer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001set-record-printer!\376\001\000\000 \001chicken.base#set"
"-record-printer!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001setter\376\001\000\000\023\001chicken.base#setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001s"
"ignum\376\001\000\000\023\001chicken.base#signum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001sleep\376\001\000\000\022\001chicken.base#sleep\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\031\001string->uninterned-symbol\376\001\000\000&\001chicken.base#string->uninterned-symbol"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001sub1\376\001\000\000\021\001chicken.base#sub1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001subvector\376\001\000\000\026\001chicke"
"n.base#subvector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001symbol-append\376\001\000\000\032\001chicken.base#symbol-append\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\015\001symbol-escape\376\001\000\000\032\001chicken.base#symbol-escape\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001tail\077\376"
"\001\000\000\022\001chicken.base#tail\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001vector-copy!\376\001\000\000\031\001chicken.base#vector-cop"
"y!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001vector-resize\376\001\000\000\032\001chicken.base#vector-resize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001v"
"oid\376\001\000\000\021\001chicken.base#void\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001warning\376\001\000\000\024\001chicken.base#warning\376\377\016"));
lf[4]=C_h_intern(&lf[4],36, C_text("##sys#chicken.base-macro-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{C_text("f_117:chicken_2ebase_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2ebase_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2ebase_2eimport_2escm"),(void*)f_123},
{C_text("toplevel:chicken_2ebase_2eimport_2escm"),(void*)C_toplevel},
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
o|removed binding forms: 3 
*/
/* end of file */
