/* Generated from chicken.file.posix.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken.file.posix.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.file.posix.import.c
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
/* chicken.file.posix.import.scm:3: ##sys#with-environment */
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
/* chicken.file.posix.import.scm:5: ##sys#register-compiled-module */
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
if(C_unlikely(!C_demand_2(1728))){
C_save(t1);
C_rereclaim2(1728*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],30, C_text("##sys#register-compiled-module"));
lf[1]=C_h_intern(&lf[1],18, C_text("chicken.file.posix"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001create-fifo\376\001\000\000\036\001chicken.file.posix#create-fifo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001c"
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
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_117:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_117},
{C_text("f_120:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_120},
{C_text("f_123:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_123},
{C_text("f_125:chicken_2efile_2eposix_2eimport_2escm"),(void*)f_125},
{C_text("toplevel:chicken_2efile_2eposix_2eimport_2escm"),(void*)C_toplevel},
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
