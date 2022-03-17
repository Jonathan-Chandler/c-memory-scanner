/* Generated from chicken.memory.representation.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.memory.representation.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.memory.representation.import.c
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
/* chicken.memory.representation.import.scm:3: ##sys#with-environment */
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
/* chicken.memory.representation.import.scm:5: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(408))){
C_save(t1);
C_rereclaim2(408*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],30, C_text("##sys#register-compiled-module"));
lf[1]=C_h_intern(&lf[1],29, C_text("chicken.memory.representation"));
lf[2]=C_h_intern(&lf[2],7, C_text("lolevel"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001block-ref\376\001\000\000\047\001chicken.memory.representation#block-ref\376\003\000\000\002\376\003\000\000\002"
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
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2ememory_2erepresentation_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2ememory_2erepresentation_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2ememory_2erepresentation_2eimport_2escm"),(void*)f_123},
{C_text("f_125:chicken_2ememory_2erepresentation_2eimport_2escm"),(void*)f_125},
{C_text("toplevel:chicken_2ememory_2erepresentation_2eimport_2escm"),(void*)C_toplevel},
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
