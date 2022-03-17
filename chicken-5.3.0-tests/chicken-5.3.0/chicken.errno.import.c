/* Generated from chicken.errno.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.errno.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.errno.import.c
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
/* chicken.errno.import.scm:3: ##sys#with-environment */
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
/* chicken.errno.import.scm:5: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(828))){
C_save(t1);
C_rereclaim2(828*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],30, C_text("##sys#register-compiled-module"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.errno"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001errno/xdev\376\001\000\000\030\001chicken.errno#errno/xdev\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001errno/wo"
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
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2eerrno_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2eerrno_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2eerrno_2eimport_2escm"),(void*)f_123},
{C_text("f_125:chicken_2eerrno_2eimport_2escm"),(void*)f_125},
{C_text("toplevel:chicken_2eerrno_2eimport_2escm"),(void*)C_toplevel},
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
