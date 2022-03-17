/* Generated from chicken.memory.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.memory.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.memory.import.c
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
/* chicken.memory.import.scm:3: ##sys#with-environment */
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
/* chicken.memory.import.scm:5: ##sys#register-compiled-module */
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
lf[1]=C_h_intern(&lf[1],14, C_text("chicken.memory"));
lf[2]=C_h_intern(&lf[2],7, C_text("lolevel"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001address->pointer\376\001\000\000\037\001chicken.memory#address->pointer\376\003\000\000\002\376\003\000\000\002\376"
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
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2ememory_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2ememory_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2ememory_2eimport_2escm"),(void*)f_123},
{C_text("f_125:chicken_2ememory_2eimport_2escm"),(void*)f_125},
{C_text("toplevel:chicken_2ememory_2eimport_2escm"),(void*)C_toplevel},
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
