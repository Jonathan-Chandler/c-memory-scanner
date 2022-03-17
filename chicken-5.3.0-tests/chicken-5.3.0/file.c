/* Generated from file.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: file.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file file.c -emit-import-library chicken.file
   unit: file
   uses: pathname irregex extras library
*/
#include "chicken.h"

#include <errno.h>

#define C_test_access(fn, m) C_fix(access(C_c_string(fn), C_unfix(m)))

/* For Windows */
#ifndef R_OK
# define R_OK 2
#endif
#ifndef W_OK
# define W_OK 4
#endif
#ifndef X_OK
# define X_OK 2
#endif

#define C_rename(old, new)  C_fix(rename(C_c_string(old), C_c_string(new)))
#define C_remove(str)       C_fix(remove(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str)))
#endif

#include <sys/types.h>
#include <dirent.h>

#define C_opendir(s,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(s)))
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_foundfile(e,b,l)  (C_strlcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name, l), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

static C_word C_fcall C_u_i_symbolic_linkp(C_word path)
{
#if !defined(_WIN32) || defined(__CYGWIN__)
  struct stat buf;
  if (lstat(C_c_string(path), &buf) == 0)
    return C_mk_bool(S_ISLNK(buf.st_mode));
#endif
  return C_SCHEME_FALSE;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[108];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,45,101,120,105,115,116,115,63,32,110,97,109,101,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,116,101,115,116,45,97,99,99,101,115,115,32,102,105,108,101,110,97,109,101,32,97,99,99,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,114,101,97,100,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,119,114,105,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,101,99,117,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,56,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,52,32,100,105,114,50,51,55,32,102,105,108,101,50,51,57,32,101,120,116,50,52,49,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,11),40,114,109,100,105,114,32,100,105,114,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,103,50,55,52,32,102,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,51,32,103,50,56,48,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,35,114,101,110,97,109,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,111,112,121,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,109,111,118,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,9),40,97,49,54,50,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,55,52,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,103,52,56,52,32,109,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,102,110,115,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,56,51,54,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,97,49,56,51,48,32,101,120,118,97,114,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,55,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,56,56,53,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,14),40,116,109,112,50,55,51,49,32,97,114,103,115,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,56,55,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,9),40,97,49,56,50,52,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,28),40,97,49,55,52,54,32,100,105,114,52,53,54,32,102,105,108,52,53,56,32,101,120,116,52,54,48,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,102,105,108,101,35,103,108,111,98,32,46,32,112,97,116,104,115,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,48,49,53,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,48,50,48,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,48,52,48,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,105,114,32,102,115,32,114,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,57,50,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,48,48,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,48,56,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,51,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,57,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,50,56,32,120,32,121,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,53,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,51,54,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,50,49,51,51,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from getpid */
C_regparm static C_word C_fcall stub444(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from getpid */
C_regparm static C_word C_fcall stub435(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k758 */
C_regparm static C_word C_fcall stub142(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word *av) C_noret;
C_noret_decl(f_1017)
static void C_fcall f_1017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1024)
static void C_fcall f_1024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word *av) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word *av) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word *av) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word *av) C_noret;
C_noret_decl(f_1112)
static void C_fcall f_1112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word *av) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word *av) C_noret;
C_noret_decl(f_1136)
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word *av) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word *av) C_noret;
C_noret_decl(f_1166)
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word *av) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word *av) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word *av) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211(C_word c,C_word *av) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word *av) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word *av) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word *av) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word *av) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word *av) C_noret;
C_noret_decl(f_1241)
static void C_ccall f_1241(C_word c,C_word *av) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word *av) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word *av) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word *av) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word *av) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word *av) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word *av) C_noret;
C_noret_decl(f_1352)
static void C_fcall f_1352(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word *av) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word *av) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word *av) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word *av) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word *av) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word *av) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_fcall f_1482(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word *av) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1566)
static void C_fcall f_1566(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word *av) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word *av) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word *av) C_noret;
C_noret_decl(f_1603)
static void C_fcall f_1603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word *av) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word *av) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word *av) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word *av) C_noret;
C_noret_decl(f_1726)
static void C_fcall f_1726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word *av) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word *av) C_noret;
C_noret_decl(f_1766)
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word *av) C_noret;
C_noret_decl(f_1787)
static void C_fcall f_1787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word *av) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word *av) C_noret;
C_noret_decl(f_1875)
static void C_fcall f_1875(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_fcall f_1880(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word *av) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word *av) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word *av) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word *av) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word *av) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static void C_fcall f_1936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_fcall f_1939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word *av) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word *av) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word *av) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word *av) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word *av) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word *av) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word *av) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word *av) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word *av) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word *av) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word *av) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word *av) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word *av) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word *av) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word *av) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word *av) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word *av) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word *av) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word *av) C_noret;
C_noret_decl(f_761)
static void C_fcall f_761(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word *av) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word *av) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word *av) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word *av) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word *av) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word *av) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word *av) C_noret;
C_noret_decl(f_802)
static void C_fcall f_802(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word *av) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word *av) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word *av) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word *av) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word *av) C_noret;
C_noret_decl(f_893)
static void C_fcall f_893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word *av) C_noret;
C_noret_decl(f_919)
static void C_fcall f_919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externexport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1017)
static void C_ccall trf_1017(C_word c,C_word *av) C_noret;
static void C_ccall trf_1017(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1017(t0,t1,t2);}

C_noret_decl(trf_1024)
static void C_ccall trf_1024(C_word c,C_word *av) C_noret;
static void C_ccall trf_1024(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1024(t0,t1);}

C_noret_decl(trf_1112)
static void C_ccall trf_1112(C_word c,C_word *av) C_noret;
static void C_ccall trf_1112(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1112(t0,t1);}

C_noret_decl(trf_1136)
static void C_ccall trf_1136(C_word c,C_word *av) C_noret;
static void C_ccall trf_1136(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1136(t0,t1,t2);}

C_noret_decl(trf_1166)
static void C_ccall trf_1166(C_word c,C_word *av) C_noret;
static void C_ccall trf_1166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1166(t0,t1,t2);}

C_noret_decl(trf_1352)
static void C_ccall trf_1352(C_word c,C_word *av) C_noret;
static void C_ccall trf_1352(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1352(t0,t1,t2,t3);}

C_noret_decl(trf_1482)
static void C_ccall trf_1482(C_word c,C_word *av) C_noret;
static void C_ccall trf_1482(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1482(t0,t1,t2,t3);}

C_noret_decl(trf_1566)
static void C_ccall trf_1566(C_word c,C_word *av) C_noret;
static void C_ccall trf_1566(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1566(t0,t1);}

C_noret_decl(trf_1603)
static void C_ccall trf_1603(C_word c,C_word *av) C_noret;
static void C_ccall trf_1603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1603(t0,t1);}

C_noret_decl(trf_1660)
static void C_ccall trf_1660(C_word c,C_word *av) C_noret;
static void C_ccall trf_1660(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1660(t0,t1);}

C_noret_decl(trf_1726)
static void C_ccall trf_1726(C_word c,C_word *av) C_noret;
static void C_ccall trf_1726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1726(t0,t1,t2);}

C_noret_decl(trf_1766)
static void C_ccall trf_1766(C_word c,C_word *av) C_noret;
static void C_ccall trf_1766(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1766(t0,t1,t2);}

C_noret_decl(trf_1787)
static void C_ccall trf_1787(C_word c,C_word *av) C_noret;
static void C_ccall trf_1787(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1787(t0,t1,t2);}

C_noret_decl(trf_1875)
static void C_ccall trf_1875(C_word c,C_word *av) C_noret;
static void C_ccall trf_1875(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1875(t0,t1);}

C_noret_decl(trf_1880)
static void C_ccall trf_1880(C_word c,C_word *av) C_noret;
static void C_ccall trf_1880(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1880(t0,t1,t2);}

C_noret_decl(trf_1936)
static void C_ccall trf_1936(C_word c,C_word *av) C_noret;
static void C_ccall trf_1936(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1936(t0,t1);}

C_noret_decl(trf_1939)
static void C_ccall trf_1939(C_word c,C_word *av) C_noret;
static void C_ccall trf_1939(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1939(t0,t1);}

C_noret_decl(trf_1948)
static void C_ccall trf_1948(C_word c,C_word *av) C_noret;
static void C_ccall trf_1948(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1948(t0,t1,t2,t3,t4);}

C_noret_decl(trf_761)
static void C_ccall trf_761(C_word c,C_word *av) C_noret;
static void C_ccall trf_761(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_761(t0,t1,t2,t3,t4);}

C_noret_decl(trf_802)
static void C_ccall trf_802(C_word c,C_word *av) C_noret;
static void C_ccall trf_802(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_802(t0,t1,t2,t3);}

C_noret_decl(trf_893)
static void C_ccall trf_893(C_word c,C_word *av) C_noret;
static void C_ccall trf_893(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_893(t0,t1);}

C_noret_decl(trf_919)
static void C_ccall trf_919(C_word c,C_word *av) C_noret;
static void C_ccall trf_919(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_919(t0,t1);}

/* k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_1005,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1015,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[3],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1065,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* file.scm:192: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:183: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}}}

/* k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1015,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1017,a[2]=t3,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1017(t5,((C_word*)t0)[2],t1);}

/* loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1017(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1017,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1024,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1057,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:194: directory-exists? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_1024(t4,C_SCHEME_FALSE);}}

/* k1022 in loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1024,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:195: chicken.pathname#pathname-directory */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1025 in k1022 in loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1027,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:183: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}

/* k1041 in k1025 in k1022 in loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1043,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:184: posix-error */
f_761(((C_word*)t0)[2],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1048 in k1022 in loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1050,c,av);}
/* file.scm:195: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1017(t2,((C_word*)t0)[3],t1);}

/* k1055 in loop in k1013 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1057,c,av);}
t2=((C_word*)t0)[2];
f_1024(t2,C_i_not(t1));}

/* a1058 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1059,c,av);}
/* file.scm:192: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1064 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1065,c,av);}
if(C_truep(t3)){
/* file.scm:193: chicken.pathname#make-pathname */
t5=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1086 in k1003 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1088,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* file.scm:184: posix-error */
f_761(((C_word*)t0)[4],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_1106,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1112,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t6=C_i_check_string_2(t2,lf[37]);
if(C_truep(t4)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1135,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:208: find-files */
t8=*((C_word*)lf[40]+1);{
C_word av2[7];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[41];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[42];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(7,av2);}}
else{
/* file.scm:220: rmdir */
f_1112(t1,t2);}}

/* rmdir in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1112(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1112,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:203: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1114 in rmdir in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1116,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:205: posix-error */
f_761(((C_word*)t0)[2],lf[14],lf[37],lf[38],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1135(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1135,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[2],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1166,a[2]=t5,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1166(t7,t3,t1);}

/* g274 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1136,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1149,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:180: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[37];
tp(4,av2);}}

/* k1147 in g274 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1149,c,av);}
a=C_alloc(5);
if(C_truep(C_u_i_symbolic_linkp(t1))){
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:213: g284 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:215: directory-exists? */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1156 in k1147 in g274 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1158,c,av);}
if(C_truep(t1)){
/* file.scm:213: g284 */
f_1112(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:213: g284 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1159 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1161,c,av);}
/* file.scm:219: rmdir */
f_1112(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop273 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1166,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1176,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:212: g274 */
t4=((C_word*)t0)[3];
f_1136(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1174 in for-each-loop273 in k1133 in chicken.file#delete-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1176,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1166(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1198(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1198,c,av);}
a=C_alloc(9);
t3=C_i_check_string_2(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1205,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1227,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* file.scm:227: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k1203 in chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1205,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1209 in k1225 in chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1211,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1216 in k1209 in k1225 in chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1218,c,av);}
/* file.scm:229: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[43];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1220 in k1209 in k1225 in chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1222,c,av);}
/* file.scm:231: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=t1;
tp(4,av2);}}

/* k1225 in chicken.file#delete-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1227,c,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(0),C_remove(t1));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1211,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:228: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}}

/* chicken.file#delete-file* in k747 in k744 in k741 in k738 */
static void C_ccall f_1229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1229,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1236,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:235: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1234 in chicken.file#delete-file* in k747 in k744 in k741 in k738 */
static void C_ccall f_1236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1236,c,av);}
if(C_truep(t1)){
/* file.scm:235: delete-file */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1241(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1241,c,av);}
a=C_alloc(9);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_string_2(t2,lf[48]);
t7=C_i_check_string_2(t3,lf[48]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1254,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1286,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t5))){
/* file.scm:240: file-exists? */
t10=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1254(2,av2);}}}

/* k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1254,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:244: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[48];
tp(4,av2);}}

/* k1255 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1257,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1261 in k1281 in k1277 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1263,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1268 in k1261 in k1281 in k1277 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1270,c,av);}
/* file.scm:247: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[48];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1272 in k1261 in k1281 in k1277 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1274,c,av);}
/* file.scm:249: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=t1;
tp(4,av2);}}

/* k1277 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1279,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1283,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:245: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[48];
tp(4,av2);}}

/* k1281 in k1277 in k1252 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1283,c,av);}
a=C_alloc(5);
t2=C_eqp(C_fix(0),C_rename(((C_word*)t0)[2],t1));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:246: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}}

/* k1284 in chicken.file#rename-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1286,c,av);}
if(C_truep(t1)){
/* file.scm:241: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=lf[51];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1254(2,av2);}}}

/* chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1303(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1303,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[53]);
t11=C_i_check_string_2(t3,lf[53]);
t12=C_i_check_number_2(t8,lf[53]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1328,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1328(2,av2);}}
else{
/* file.scm:257: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[53];
av2[3]=lf[64];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:257: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[53];
av2[3]=lf[64];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1328,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1394,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* file.scm:258: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1331,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1382,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:260: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1334(2,av2);}}}

/* k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1334,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:262: scheme#open-input-file */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1337,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1340,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:263: scheme#open-output-file */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1340,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1343,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:264: scheme#make-string */
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1343,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:265: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1350,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1352(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* loop in k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_fcall f_1352(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1352,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1362,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:269: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* file.scm:273: chicken.io#write-string */
t6=*((C_word*)lf[57]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k1360 in loop in k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1362,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:270: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1363 in k1360 in loop in k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1365,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1366 in loop in k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1368,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:274: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1373 in k1366 in loop in k1348 in k1341 in k1338 in k1335 in k1332 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1375,c,av);}
/* file.scm:274: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1352(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1380 in k1329 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1382,c,av);}
if(C_truep(t1)){
/* file.scm:261: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1334(2,av2);}}}

/* k1392 in k1326 in chicken.file#copy-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1394,c,av);}
if(C_truep(t1)){
/* file.scm:259: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1331(2,av2);}}}

/* chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1433(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1433,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[66]);
t11=C_i_check_string_2(t3,lf[66]);
t12=C_i_check_number_2(t8,lf[66]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1458,a[2]=t2,a[3]=t8,a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1458(2,av2);}}
else{
/* file.scm:281: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[66];
av2[3]=lf[69];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:281: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[66];
av2[3]=lf[69];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1458,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1527,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* file.scm:282: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1461,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1515,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:284: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1464(2,av2);}}}

/* k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1464,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:286: scheme#open-input-file */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1467,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:287: scheme#open-output-file */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1470,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1473,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:288: scheme#make-string */
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1473,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:289: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1480,c,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_1482(t5,((C_word*)t0)[7],t1,C_fix(0));}

/* loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_fcall f_1482(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1482,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1492,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* file.scm:293: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* file.scm:298: chicken.io#write-string */
t6=*((C_word*)lf[57]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k1490 in loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1492,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:294: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1493 in k1490 in loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1495,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:295: delete-file */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1496 in k1493 in k1490 in loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1498,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1499 in loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1501,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:299: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1506 in k1499 in loop in k1478 in k1471 in k1468 in k1465 in k1462 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1508,c,av);}
/* file.scm:299: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1482(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1513 in k1459 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1515,c,av);}
if(C_truep(t1)){
/* file.scm:285: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=lf[67];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1464(2,av2);}}}

/* k1525 in k1456 in chicken.file#move-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1527,c,av);}
if(C_truep(t1)){
/* file.scm:283: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=lf[68];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1461(2,av2);}}}

/* tempdir in k747 in k744 in k741 in k738 */
static void C_fcall f_1566(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1566,2,t0,t1);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1573,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:313: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1571 in tempdir in k747 in k744 in k741 in k738 */
static void C_ccall f_1573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1573,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:314: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1578 in k1571 in tempdir in k747 in k744 in k741 in k738 */
static void C_ccall f_1580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1580,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:315: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[73];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1584 in k1578 in k1571 in tempdir in k747 in k744 in k741 in k738 */
static void C_ccall f_1586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1586,c,av);}
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=lf[71];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1591(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1591,c,av);}
a=C_alloc(9);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?lf[77]:C_get_rest_arg(c,2,av,2,t0));
t4=C_i_check_string_2(t3,lf[78]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1603,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1603(t8,t1);}

/* loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_fcall f_1603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1603,2,t0,t1);}
a=C_alloc(10);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1628,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:326: tempdir */
t5=((C_word*)t0)[5];
f_1566(t5,t4);}

/* k1607 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1609,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:333: file-exists? */
t3=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1613 in k1607 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1615,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:334: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1603(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[4],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* file.scm:335: scheme#call-with-output-file */
t3=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* a1622 in k1613 in k1607 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1623,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1626 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1628,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1632,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1636,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1630 in k1626 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1632,c,av);}
/* file.scm:325: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1634 in k1626 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1636,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:331: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t2;
av2[2]=stub435(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1638 in k1634 in k1626 in loop in chicken.file#create-temporary-file in k747 in k744 in k741 in k738 */
static void C_ccall f_1640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1640,c,av);}
/* file.scm:327: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[80];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1654,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1660,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1660(t5,t1);}

/* loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_fcall f_1660(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1660,2,t0,t1);}
a=C_alloc(9);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:342: tempdir */
t5=((C_word*)t0)[4];
f_1566(t5,t4);}

/* k1664 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1666,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:348: file-exists? */
t3=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1670 in k1664 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1672,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:349: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1660(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:350: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[83];
tp(4,av2);}}}

/* k1677 in k1670 in k1664 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1679,c,av);}
a=C_alloc(10);
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1690 in k1677 in k1670 in k1664 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1692,c,av);}
/* file.scm:353: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[83];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1694 in k1677 in k1670 in k1664 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1696,c,av);}
/* file.scm:355: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[84];
av2[3]=t1;
tp(4,av2);}}

/* k1698 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1700,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1708,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1702 in k1698 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1704,c,av);}
/* file.scm:341: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1706 in k1698 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1708,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:347: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t2;
av2[2]=stub444(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1710 in k1706 in k1698 in loop in chicken.file#create-temporary-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_1712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1712,c,av);}
/* file.scm:343: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1720,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1726,a[2]=t4,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1726(t6,t1,t2);}

/* conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_fcall f_1726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1726,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1741,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1747,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* file.scm:366: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}}

/* a1740 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1741,c,av);}
/* file.scm:366: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1747,c,av);}
a=C_alloc(13);
t5=(C_truep(t2)?t2:lf[87]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1901,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
/* file.scm:368: chicken.pathname#make-pathname */
t9=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* file.scm:368: chicken.pathname#make-pathname */
t9=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[98];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1754,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1825,a[2]=((C_word*)t0)[6],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
/* file.scm:369: scheme#call-with-current-continuation */
t4=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1761,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* file.scm:369: g498 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1764,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1766(t5,((C_word*)t0)[6],t1);}

/* loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1766,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* file.scm:371: conc-loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1726(t4,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* file.scm:372: chicken.irregex#irregex-match */
t5=*((C_word*)lf[89]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1781 in loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1783,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* file.scm:371: g484 */
t3=t2;
f_1787(t3,((C_word*)t0)[5],t1);}
else{
/* file.scm:376: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1766(t2,((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* g484 in k1781 in loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_fcall f_1787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1787,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1795,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1807,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:374: chicken.irregex#irregex-match-substring */
t5=*((C_word*)lf[88]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1793 in g484 in k1781 in loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1795,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:375: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1766(t3,t2,C_i_cdr(((C_word*)t0)[4]));}

/* k1797 in k1793 in g484 in k1781 in loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1799,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1805 in g484 in k1781 in loop in k1762 in k1759 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1807,c,av);}
/* file.scm:374: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1825,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=t2,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* file.scm:369: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a1830 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1831,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1837,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* file.scm:369: k495 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1836 in a1830 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1837,c,av);}
t2=C_i_structurep(((C_word*)t0)[2],lf[90]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_memq(lf[91],t3))){
if(C_truep(C_i_memq(lf[92],t3))){
if(C_truep(C_i_memq(lf[0],t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:369: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:369: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:369: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:369: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* a1872 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1873,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[3],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1897,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1730 */
t5=t2;
f_1875(t5,t4);}

/* tmp1730 in a1872 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_fcall f_1875(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1875,2,t0,t1);}
/* file.scm:369: directory */
t2=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* tmp2731 in a1872 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_fcall f_1880(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1880,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1886,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* file.scm:369: k495 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1885 in tmp2731 in a1872 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1886,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k1895 in a1872 in a1824 in k1752 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1897,c,av);}
a=C_alloc(3);
/* tmp2731 */
t2=((C_word*)t0)[2];
f_1880(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1899 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1901,c,av);}
/* file.scm:368: chicken.irregex#irregex */
t2=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1903 in a1746 in conc-loop in chicken.file#glob in k747 in k744 in k741 in k738 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1905,c,av);}
/* file.scm:368: chicken.irregex#glob->sre */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1911,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t4;
av2[2]=lf[107];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1915,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t2;
av2[2]=lf[106];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
tp(5,av2);}}

/* k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1918,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1921,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t2;
av2[2]=lf[105];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1921,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t2;
av2[2]=lf[104];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
tp(5,av2);}}

/* k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1924,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t2;
av2[2]=lf[41];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
tp(5,av2);}}

/* k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1927,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* file.scm:381: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t2;
av2[2]=lf[42];
av2[3]=((C_word*)t0)[8];
av2[4]=t3;
tp(5,av2);}}

/* k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_1930,c,av);}
a=C_alloc(17);
t2=C_i_check_string_2(((C_word*)t0)[2],lf[99]);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1936,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t6=t5;
f_1936(t6,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2100,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2108,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t7=t5;
f_1936(t7,t6);}
else{
t6=t5;
f_1936(t6,((C_word*)t0)[8]);}}}

/* k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_fcall f_1936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1936,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t3=t2;
f_1939(t3,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:396: chicken.irregex#irregex */
t4=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_fcall f_1939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_1939,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* file.scm:399: directory */
t3=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_1946,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1948,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1948(t5,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10]);}

/* loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1948,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1961,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* file.scm:404: chicken.pathname#make-pathname */
t7=*((C_word*)lf[35]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1961,c,av);}
a=C_alloc(15);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* file.scm:406: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_1970,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[100]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[101]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* file.scm:407: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1948(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2063,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* file.scm:180: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[99];
tp(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* file.scm:418: pproc */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1990 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1992,c,av);}
/* file.scm:409: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1993 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_1995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1995,c,av);}
if(C_truep(t1)){
/* file.scm:409: action */
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
else{
/* file.scm:409: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1948(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2004(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_2004,c,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2016,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2041,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
/* file.scm:413: ##sys#dynamic-wind */
t11=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2054,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:417: pproc */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2012 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2014,c,av);}
/* file.scm:411: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a2015 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2016,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2020 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2021,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:415: directory */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2027 in a2020 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2029,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* file.scm:416: pproc */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2031 in k2027 in a2020 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 in ... */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2033,c,av);}
/* file.scm:414: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2034 in k2027 in a2020 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 in ... */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2036,c,av);}
if(C_truep(t1)){
/* file.scm:416: action */
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
else{
/* file.scm:414: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1948(t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* a2040 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2041,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2049 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2051,c,av);}
/* file.scm:417: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2052 in k2002 in k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2054,c,av);}
if(C_truep(t1)){
/* file.scm:417: action */
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
else{
/* file.scm:417: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1948(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2061 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2063,c,av);}
a=C_alloc(16);
t2=(C_truep(C_u_i_symbolic_linkp(t1))?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:409: pproc */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* file.scm:410: lproc */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2073 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2075,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:418: action */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
/* file.scm:419: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k2080 in k2073 in k1968 in k1959 in loop in k1944 in k1937 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2082,c,av);}
/* file.scm:418: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1948(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2089 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2091,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_1939(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2092,a[2]=t1,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));}

/* f_2092 in k2089 in k1934 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2092,c,av);}
/* file.scm:397: chicken.irregex#irregex-match */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f_2100 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2100,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2108 in k1928 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2108,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2113 in k1925 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2114,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2116 in k1922 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2117,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2119 in k1919 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2120,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2122 in k1916 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2123,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2125 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2126,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2128,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2128 in a2125 in k1913 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2128,c,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2133 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2134,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2136 in a2133 in chicken.file#find-files in k747 in k744 in k741 in k738 */
static void C_ccall f_2136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2136,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k738 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_740,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k741 in k738 */
static void C_ccall f_743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_743,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k744 in k741 in k738 */
static void C_ccall f_746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_746,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k747 in k744 in k741 in k738 */
static void C_ccall f_749(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(67,c,6)))){
C_save_and_reclaim((void *)f_749,c,av);}
a=C_alloc(67);
t2=C_mutate(&lf[2] /* (set! chicken.file#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_761,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_778,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file#directory-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_790,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[13] /* (set! chicken.file#test-access ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_802,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file#file-readable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_832,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file#file-writable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file#file-executable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_844,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file#directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_850,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file#create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_989,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file#delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1106,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[39]+1 /* (set! chicken.file#delete-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1198,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[46]+1 /* (set! chicken.file#delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[47]+1 /* (set! chicken.file#rename-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1241,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[52]+1 /* (set! chicken.file#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1303,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[65]+1 /* (set! chicken.file#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_SCHEME_FALSE;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=lf[70];
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1566,a[2]=t18,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t21=C_mutate((C_word*)lf[76]+1 /* (set! chicken.file#create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1591,a[2]=t19,a[3]=t20,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t22=C_mutate((C_word*)lf[82]+1 /* (set! chicken.file#create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1654,a[2]=t19,a[3]=t20,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t23=C_mutate((C_word*)lf[86]+1 /* (set! chicken.file#glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1720,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t25=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t25+1)))(2,av2);}}

/* chicken.file#posix-error in k747 in k744 in k741 in k738 */
static void C_fcall f_761(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_761,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_765,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* file.scm:118: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k763 in chicken.file#posix-error in k747 in k744 in k741 in k738 */
static void C_ccall f_765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_765,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_776,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* file.scm:115: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub142(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k770 in k763 in chicken.file#posix-error in k747 in k744 in k741 in k738 */
static void C_ccall f_772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_772,c,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[3]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k774 in k763 in chicken.file#posix-error in k747 in k744 in k741 in k738 */
static void C_ccall f_776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_776,c,av);}
/* file.scm:119: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.file#file-exists? in k747 in k744 in k741 in k738 */
static void C_ccall f_778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_778,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_788,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:126: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[9];
tp(6,av2);}}

/* k786 in chicken.file#file-exists? in k747 in k744 in k741 in k738 */
static void C_ccall f_788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_788,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#directory-exists? in k747 in k744 in k741 in k738 */
static void C_ccall f_790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_790,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[12]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_800,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:130: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[12];
tp(6,av2);}}

/* k798 in chicken.file#directory-exists? in k747 in k744 in k741 in k738 */
static void C_ccall f_800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_800,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#test-access in k747 in k744 in k741 in k738 */
static void C_fcall f_802(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_802,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_810,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:141: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k808 in chicken.file#test-access in k747 in k744 in k741 in k738 */
static void C_ccall f_810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_810,c,av);}
a=C_alloc(5);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:143: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k827 in k808 in chicken.file#test-access in k747 in k744 in k741 in k738 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_829,c,av);}
a=C_alloc(3);
t2=C_fix((C_word)EACCES);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:145: posix-error */
f_761(((C_word*)t0)[2],lf[14],((C_word*)t0)[3],lf[15],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* chicken.file#file-readable? in k747 in k744 in k741 in k738 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_832,c,av);}
/* file.scm:147: test-access */
f_802(t1,t2,C_fix((C_word)R_OK),lf[18]);}

/* chicken.file#file-writable? in k747 in k744 in k741 in k738 */
static void C_ccall f_838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_838,c,av);}
/* file.scm:148: test-access */
f_802(t1,t2,C_fix((C_word)W_OK),lf[20]);}

/* chicken.file#file-executable? in k747 in k744 in k741 in k738 */
static void C_ccall f_844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_844,c,av);}
/* file.scm:149: test-access */
f_802(t1,t2,C_fix((C_word)X_OK),lf[22]);}

/* chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_850,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_854,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* file.scm:154: chicken.process-context#current-directory */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_854(2,av2);}}}

/* k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_854(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_854,c,av);}
a=C_alloc(5);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t1,lf[24]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t9;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_869,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:157: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
tp(2,av2);}}

/* k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_872,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_875,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:158: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
tp(2,av2);}}

/* k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_875,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:161: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[24];
tp(4,av2);}}

/* k877 in k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_879,c,av);}
a=C_alloc(10);
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* file.scm:163: posix-error */
f_761(((C_word*)t0)[3],lf[14],lf[24],lf[25],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_893(t6,((C_word*)t0)[3]);}}

/* loop in k877 in k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_fcall f_893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_893,2,t0,t1);}
a=C_alloc(6);
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_907,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* file.scm:169: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* k905 in loop in k877 in k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_907(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_907,c,av);}
a=C_alloc(5);
t2=C_i_string_ref(t1,C_fix(0));
t3=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_make_character(46),t2);
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_919(t8,t7);}
else{
t8=C_eqp(C_make_character(46),t4);
if(C_truep(t8)){
t9=C_eqp(C_fix(2),((C_word*)t0)[2]);
t10=t5;
f_919(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[5])));}
else{
t9=t5;
f_919(t9,C_i_not(((C_word*)t0)[5]));}}}
else{
t7=t5;
f_919(t7,C_SCHEME_FALSE);}}

/* k917 in k905 in loop in k877 in k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_fcall f_919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_919,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:176: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_893(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_929,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:177: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_893(t3,t2);}}

/* k927 in k917 in k905 in loop in k877 in k873 in k870 in k867 in k852 in chicken.file#directory in k747 in k744 in k741 in k738 */
static void C_ccall f_929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_929,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_989,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[31]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_999,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_block_size(t2);
t8=C_eqp(C_fix(0),t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1005,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
f_1005(2,av2);}}
else{
/* file.scm:190: file-exists? */
t10=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k997 in chicken.file#create-directory in k747 in k744 in k741 in k738 */
static void C_ccall f_999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_999,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_file_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("file"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_file_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(553))){
C_save(t1);
C_rereclaim2(553*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,108);
lf[0]=C_h_intern(&lf[0],4, C_text("file"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.file#"));
lf[3]=C_h_intern(&lf[3],17, C_text("##sys#signal-hook"));
lf[4]=C_h_intern(&lf[4],20, C_text("scheme#string-append"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[6]=C_h_intern(&lf[6],19, C_text("##sys#peek-c-string"));
lf[7]=C_h_intern(&lf[7],18, C_text("##sys#update-errno"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.file#file-exists\077"));
lf[9]=C_h_intern(&lf[9],12, C_text("file-exists\077"));
lf[10]=C_h_intern(&lf[10],18, C_text("##sys#file-exists\077"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file#directory-exists\077"));
lf[12]=C_h_intern(&lf[12],17, C_text("directory-exists\077"));
lf[14]=C_h_intern_kw(&lf[14],10, C_text("file-error"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[16]=C_h_intern(&lf[16],19, C_text("##sys#make-c-string"));
lf[17]=C_h_intern(&lf[17],27, C_text("chicken.file#file-readable\077"));
lf[18]=C_h_intern(&lf[18],14, C_text("file-readable\077"));
lf[19]=C_h_intern(&lf[19],27, C_text("chicken.file#file-writable\077"));
lf[20]=C_h_intern(&lf[20],14, C_text("file-writable\077"));
lf[21]=C_h_intern(&lf[21],29, C_text("chicken.file#file-executable\077"));
lf[22]=C_h_intern(&lf[22],16, C_text("file-executable\077"));
lf[23]=C_h_intern(&lf[23],22, C_text("chicken.file#directory"));
lf[24]=C_h_intern(&lf[24],9, C_text("directory"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot open directory"));
lf[26]=C_h_intern(&lf[26],15, C_text("##sys#substring"));
lf[27]=C_h_intern(&lf[27],18, C_text("##sys#make-pointer"));
lf[28]=C_h_intern(&lf[28],17, C_text("##sys#make-string"));
lf[29]=C_h_intern(&lf[29],41, C_text("chicken.process-context#current-directory"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file#create-directory"));
lf[31]=C_h_intern(&lf[31],16, C_text("create-directory"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot create directory"));
lf[33]=C_h_intern(&lf[33],35, C_text("chicken.pathname#pathname-directory"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.pathname#decompose-pathname"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.pathname#make-pathname"));
lf[36]=C_h_intern(&lf[36],29, C_text("chicken.file#delete-directory"));
lf[37]=C_h_intern(&lf[37],16, C_text("delete-directory"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot delete directory"));
lf[39]=C_h_intern(&lf[39],24, C_text("chicken.file#delete-file"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.file#find-files"));
lf[41]=C_h_intern_kw(&lf[41],8, C_text("dotfiles"));
lf[42]=C_h_intern_kw(&lf[42],15, C_text("follow-symlinks"));
lf[43]=C_h_intern(&lf[43],11, C_text("delete-file"));
lf[44]=C_h_intern(&lf[44],19, C_text("##sys#string-append"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot delete file - "));
lf[46]=C_h_intern(&lf[46],25, C_text("chicken.file#delete-file\052"));
lf[47]=C_h_intern(&lf[47],24, C_text("chicken.file#rename-file"));
lf[48]=C_h_intern(&lf[48],11, C_text("rename-file"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot rename file - "));
lf[50]=C_h_intern(&lf[50],11, C_text("##sys#error"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[52]=C_h_intern(&lf[52],22, C_text("chicken.file#copy-file"));
lf[53]=C_h_intern(&lf[53],9, C_text("copy-file"));
lf[54]=C_h_intern(&lf[54],24, C_text("scheme#close-output-port"));
lf[55]=C_h_intern(&lf[55],23, C_text("scheme#close-input-port"));
lf[56]=C_h_intern(&lf[56],23, C_text("chicken.io#read-string!"));
lf[57]=C_h_intern(&lf[57],23, C_text("chicken.io#write-string"));
lf[58]=C_h_intern(&lf[58],18, C_text("scheme#make-string"));
lf[59]=C_h_intern(&lf[59],23, C_text("scheme#open-output-file"));
lf[60]=C_h_intern_kw(&lf[60],6, C_text("binary"));
lf[61]=C_h_intern(&lf[61],22, C_text("scheme#open-input-file"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot copy directories"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid blocksize - not a positive integer"));
lf[65]=C_h_intern(&lf[65],22, C_text("chicken.file#move-file"));
lf[66]=C_h_intern(&lf[66],9, C_text("move-file"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot move directories"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid blocksize - not a positive integer"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004temp"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004/tmp"));
lf[72]=C_h_intern(&lf[72],48, C_text("chicken.process-context#get-environment-variable"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003TMP"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004TEMP"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006TMPDIR"));
lf[76]=C_h_intern(&lf[76],34, C_text("chicken.file#create-temporary-file"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003tmp"));
lf[78]=C_h_intern(&lf[78],21, C_text("create-temporary-file"));
lf[79]=C_h_intern(&lf[79],28, C_text("scheme#call-with-output-file"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[81]=C_h_intern(&lf[81],20, C_text("##sys#number->string"));
lf[82]=C_h_intern(&lf[82],39, C_text("chicken.file#create-temporary-directory"));
lf[83]=C_h_intern(&lf[83],26, C_text("create-temporary-directory"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot create temporary directory - "));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[86]=C_h_intern(&lf[86],17, C_text("chicken.file#glob"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[88]=C_h_intern(&lf[88],39, C_text("chicken.irregex#irregex-match-substring"));
lf[89]=C_h_intern(&lf[89],29, C_text("chicken.irregex#irregex-match"));
lf[90]=C_h_intern(&lf[90],9, C_text("condition"));
lf[91]=C_h_intern(&lf[91],3, C_text("exn"));
lf[92]=C_h_intern(&lf[92],3, C_text("i/o"));
lf[93]=C_h_intern(&lf[93],24, C_text("chicken.condition#signal"));
lf[94]=C_h_intern(&lf[94],40, C_text("chicken.condition#with-exception-handler"));
lf[95]=C_h_intern(&lf[95],37, C_text("scheme#call-with-current-continuation"));
lf[96]=C_h_intern(&lf[96],23, C_text("chicken.irregex#irregex"));
lf[97]=C_h_intern(&lf[97],25, C_text("chicken.irregex#glob->sre"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[99]=C_h_intern(&lf[99],10, C_text("find-files"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[102]=C_h_intern(&lf[102],18, C_text("##sys#dynamic-wind"));
lf[103]=C_h_intern(&lf[103],17, C_text("##sys#get-keyword"));
lf[104]=C_h_intern_kw(&lf[104],5, C_text("limit"));
lf[105]=C_h_intern_kw(&lf[105],4, C_text("seed"));
lf[106]=C_h_intern_kw(&lf[106],6, C_text("action"));
lf[107]=C_h_intern_kw(&lf[107],4, C_text("test"));
C_register_lf2(lf,108,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_740,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[188] = {
{C_text("f_1005:file_2escm"),(void*)f_1005},
{C_text("f_1015:file_2escm"),(void*)f_1015},
{C_text("f_1017:file_2escm"),(void*)f_1017},
{C_text("f_1024:file_2escm"),(void*)f_1024},
{C_text("f_1027:file_2escm"),(void*)f_1027},
{C_text("f_1043:file_2escm"),(void*)f_1043},
{C_text("f_1050:file_2escm"),(void*)f_1050},
{C_text("f_1057:file_2escm"),(void*)f_1057},
{C_text("f_1059:file_2escm"),(void*)f_1059},
{C_text("f_1065:file_2escm"),(void*)f_1065},
{C_text("f_1088:file_2escm"),(void*)f_1088},
{C_text("f_1106:file_2escm"),(void*)f_1106},
{C_text("f_1112:file_2escm"),(void*)f_1112},
{C_text("f_1116:file_2escm"),(void*)f_1116},
{C_text("f_1135:file_2escm"),(void*)f_1135},
{C_text("f_1136:file_2escm"),(void*)f_1136},
{C_text("f_1149:file_2escm"),(void*)f_1149},
{C_text("f_1158:file_2escm"),(void*)f_1158},
{C_text("f_1161:file_2escm"),(void*)f_1161},
{C_text("f_1166:file_2escm"),(void*)f_1166},
{C_text("f_1176:file_2escm"),(void*)f_1176},
{C_text("f_1198:file_2escm"),(void*)f_1198},
{C_text("f_1205:file_2escm"),(void*)f_1205},
{C_text("f_1211:file_2escm"),(void*)f_1211},
{C_text("f_1218:file_2escm"),(void*)f_1218},
{C_text("f_1222:file_2escm"),(void*)f_1222},
{C_text("f_1227:file_2escm"),(void*)f_1227},
{C_text("f_1229:file_2escm"),(void*)f_1229},
{C_text("f_1236:file_2escm"),(void*)f_1236},
{C_text("f_1241:file_2escm"),(void*)f_1241},
{C_text("f_1254:file_2escm"),(void*)f_1254},
{C_text("f_1257:file_2escm"),(void*)f_1257},
{C_text("f_1263:file_2escm"),(void*)f_1263},
{C_text("f_1270:file_2escm"),(void*)f_1270},
{C_text("f_1274:file_2escm"),(void*)f_1274},
{C_text("f_1279:file_2escm"),(void*)f_1279},
{C_text("f_1283:file_2escm"),(void*)f_1283},
{C_text("f_1286:file_2escm"),(void*)f_1286},
{C_text("f_1303:file_2escm"),(void*)f_1303},
{C_text("f_1328:file_2escm"),(void*)f_1328},
{C_text("f_1331:file_2escm"),(void*)f_1331},
{C_text("f_1334:file_2escm"),(void*)f_1334},
{C_text("f_1337:file_2escm"),(void*)f_1337},
{C_text("f_1340:file_2escm"),(void*)f_1340},
{C_text("f_1343:file_2escm"),(void*)f_1343},
{C_text("f_1350:file_2escm"),(void*)f_1350},
{C_text("f_1352:file_2escm"),(void*)f_1352},
{C_text("f_1362:file_2escm"),(void*)f_1362},
{C_text("f_1365:file_2escm"),(void*)f_1365},
{C_text("f_1368:file_2escm"),(void*)f_1368},
{C_text("f_1375:file_2escm"),(void*)f_1375},
{C_text("f_1382:file_2escm"),(void*)f_1382},
{C_text("f_1394:file_2escm"),(void*)f_1394},
{C_text("f_1433:file_2escm"),(void*)f_1433},
{C_text("f_1458:file_2escm"),(void*)f_1458},
{C_text("f_1461:file_2escm"),(void*)f_1461},
{C_text("f_1464:file_2escm"),(void*)f_1464},
{C_text("f_1467:file_2escm"),(void*)f_1467},
{C_text("f_1470:file_2escm"),(void*)f_1470},
{C_text("f_1473:file_2escm"),(void*)f_1473},
{C_text("f_1480:file_2escm"),(void*)f_1480},
{C_text("f_1482:file_2escm"),(void*)f_1482},
{C_text("f_1492:file_2escm"),(void*)f_1492},
{C_text("f_1495:file_2escm"),(void*)f_1495},
{C_text("f_1498:file_2escm"),(void*)f_1498},
{C_text("f_1501:file_2escm"),(void*)f_1501},
{C_text("f_1508:file_2escm"),(void*)f_1508},
{C_text("f_1515:file_2escm"),(void*)f_1515},
{C_text("f_1527:file_2escm"),(void*)f_1527},
{C_text("f_1566:file_2escm"),(void*)f_1566},
{C_text("f_1573:file_2escm"),(void*)f_1573},
{C_text("f_1580:file_2escm"),(void*)f_1580},
{C_text("f_1586:file_2escm"),(void*)f_1586},
{C_text("f_1591:file_2escm"),(void*)f_1591},
{C_text("f_1603:file_2escm"),(void*)f_1603},
{C_text("f_1609:file_2escm"),(void*)f_1609},
{C_text("f_1615:file_2escm"),(void*)f_1615},
{C_text("f_1623:file_2escm"),(void*)f_1623},
{C_text("f_1628:file_2escm"),(void*)f_1628},
{C_text("f_1632:file_2escm"),(void*)f_1632},
{C_text("f_1636:file_2escm"),(void*)f_1636},
{C_text("f_1640:file_2escm"),(void*)f_1640},
{C_text("f_1654:file_2escm"),(void*)f_1654},
{C_text("f_1660:file_2escm"),(void*)f_1660},
{C_text("f_1666:file_2escm"),(void*)f_1666},
{C_text("f_1672:file_2escm"),(void*)f_1672},
{C_text("f_1679:file_2escm"),(void*)f_1679},
{C_text("f_1692:file_2escm"),(void*)f_1692},
{C_text("f_1696:file_2escm"),(void*)f_1696},
{C_text("f_1700:file_2escm"),(void*)f_1700},
{C_text("f_1704:file_2escm"),(void*)f_1704},
{C_text("f_1708:file_2escm"),(void*)f_1708},
{C_text("f_1712:file_2escm"),(void*)f_1712},
{C_text("f_1720:file_2escm"),(void*)f_1720},
{C_text("f_1726:file_2escm"),(void*)f_1726},
{C_text("f_1741:file_2escm"),(void*)f_1741},
{C_text("f_1747:file_2escm"),(void*)f_1747},
{C_text("f_1754:file_2escm"),(void*)f_1754},
{C_text("f_1761:file_2escm"),(void*)f_1761},
{C_text("f_1764:file_2escm"),(void*)f_1764},
{C_text("f_1766:file_2escm"),(void*)f_1766},
{C_text("f_1783:file_2escm"),(void*)f_1783},
{C_text("f_1787:file_2escm"),(void*)f_1787},
{C_text("f_1795:file_2escm"),(void*)f_1795},
{C_text("f_1799:file_2escm"),(void*)f_1799},
{C_text("f_1807:file_2escm"),(void*)f_1807},
{C_text("f_1825:file_2escm"),(void*)f_1825},
{C_text("f_1831:file_2escm"),(void*)f_1831},
{C_text("f_1837:file_2escm"),(void*)f_1837},
{C_text("f_1873:file_2escm"),(void*)f_1873},
{C_text("f_1875:file_2escm"),(void*)f_1875},
{C_text("f_1880:file_2escm"),(void*)f_1880},
{C_text("f_1886:file_2escm"),(void*)f_1886},
{C_text("f_1897:file_2escm"),(void*)f_1897},
{C_text("f_1901:file_2escm"),(void*)f_1901},
{C_text("f_1905:file_2escm"),(void*)f_1905},
{C_text("f_1911:file_2escm"),(void*)f_1911},
{C_text("f_1915:file_2escm"),(void*)f_1915},
{C_text("f_1918:file_2escm"),(void*)f_1918},
{C_text("f_1921:file_2escm"),(void*)f_1921},
{C_text("f_1924:file_2escm"),(void*)f_1924},
{C_text("f_1927:file_2escm"),(void*)f_1927},
{C_text("f_1930:file_2escm"),(void*)f_1930},
{C_text("f_1936:file_2escm"),(void*)f_1936},
{C_text("f_1939:file_2escm"),(void*)f_1939},
{C_text("f_1946:file_2escm"),(void*)f_1946},
{C_text("f_1948:file_2escm"),(void*)f_1948},
{C_text("f_1961:file_2escm"),(void*)f_1961},
{C_text("f_1970:file_2escm"),(void*)f_1970},
{C_text("f_1992:file_2escm"),(void*)f_1992},
{C_text("f_1995:file_2escm"),(void*)f_1995},
{C_text("f_2004:file_2escm"),(void*)f_2004},
{C_text("f_2014:file_2escm"),(void*)f_2014},
{C_text("f_2016:file_2escm"),(void*)f_2016},
{C_text("f_2021:file_2escm"),(void*)f_2021},
{C_text("f_2029:file_2escm"),(void*)f_2029},
{C_text("f_2033:file_2escm"),(void*)f_2033},
{C_text("f_2036:file_2escm"),(void*)f_2036},
{C_text("f_2041:file_2escm"),(void*)f_2041},
{C_text("f_2051:file_2escm"),(void*)f_2051},
{C_text("f_2054:file_2escm"),(void*)f_2054},
{C_text("f_2063:file_2escm"),(void*)f_2063},
{C_text("f_2075:file_2escm"),(void*)f_2075},
{C_text("f_2082:file_2escm"),(void*)f_2082},
{C_text("f_2091:file_2escm"),(void*)f_2091},
{C_text("f_2092:file_2escm"),(void*)f_2092},
{C_text("f_2100:file_2escm"),(void*)f_2100},
{C_text("f_2108:file_2escm"),(void*)f_2108},
{C_text("f_2114:file_2escm"),(void*)f_2114},
{C_text("f_2117:file_2escm"),(void*)f_2117},
{C_text("f_2120:file_2escm"),(void*)f_2120},
{C_text("f_2123:file_2escm"),(void*)f_2123},
{C_text("f_2126:file_2escm"),(void*)f_2126},
{C_text("f_2128:file_2escm"),(void*)f_2128},
{C_text("f_2134:file_2escm"),(void*)f_2134},
{C_text("f_2136:file_2escm"),(void*)f_2136},
{C_text("f_740:file_2escm"),(void*)f_740},
{C_text("f_743:file_2escm"),(void*)f_743},
{C_text("f_746:file_2escm"),(void*)f_746},
{C_text("f_749:file_2escm"),(void*)f_749},
{C_text("f_761:file_2escm"),(void*)f_761},
{C_text("f_765:file_2escm"),(void*)f_765},
{C_text("f_772:file_2escm"),(void*)f_772},
{C_text("f_776:file_2escm"),(void*)f_776},
{C_text("f_778:file_2escm"),(void*)f_778},
{C_text("f_788:file_2escm"),(void*)f_788},
{C_text("f_790:file_2escm"),(void*)f_790},
{C_text("f_800:file_2escm"),(void*)f_800},
{C_text("f_802:file_2escm"),(void*)f_802},
{C_text("f_810:file_2escm"),(void*)f_810},
{C_text("f_829:file_2escm"),(void*)f_829},
{C_text("f_832:file_2escm"),(void*)f_832},
{C_text("f_838:file_2escm"),(void*)f_838},
{C_text("f_844:file_2escm"),(void*)f_844},
{C_text("f_850:file_2escm"),(void*)f_850},
{C_text("f_854:file_2escm"),(void*)f_854},
{C_text("f_869:file_2escm"),(void*)f_869},
{C_text("f_872:file_2escm"),(void*)f_872},
{C_text("f_875:file_2escm"),(void*)f_875},
{C_text("f_879:file_2escm"),(void*)f_879},
{C_text("f_893:file_2escm"),(void*)f_893},
{C_text("f_907:file_2escm"),(void*)f_907},
{C_text("f_919:file_2escm"),(void*)f_919},
{C_text("f_929:file_2escm"),(void*)f_929},
{C_text("f_989:file_2escm"),(void*)f_989},
{C_text("f_999:file_2escm"),(void*)f_999},
{C_text("toplevel:file_2escm"),(void*)C_file_toplevel},
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
o|hiding unexported module binding: chicken.file#d 
o|hiding unexported module binding: chicken.file#define-alias 
o|hiding unexported module binding: chicken.file#posix-error 
o|hiding unexported module binding: chicken.file#test-access 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (scheme#cdr pair)
o|  2 (scheme#number->string * *)
o|  2 (scheme#integer? *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#string-length string)
o|  1 (scheme#make-string fixnum)
(o e)|safe calls: 202 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-file 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-directory 
o|safe globals: (chicken.file#find-files chicken.file#glob chicken.file#create-temporary-directory chicken.file#create-temporary-file chicken.file#move-file chicken.file#copy-file chicken.file#rename-file chicken.file#delete-file* chicken.file#delete-file chicken.file#delete-directory chicken.file#create-directory chicken.file#directory chicken.file#file-executable? chicken.file#file-writable? chicken.file#file-readable? chicken.file#test-access chicken.file#directory-exists? chicken.file#file-exists? chicken.file#posix-error) 
o|merged explicitly consed rest parameter: args149 
o|contracted procedure: "(file.scm:119) strerror139" 
o|inlining procedure: k783 
o|inlining procedure: k783 
o|inlining procedure: k795 
o|inlining procedure: k795 
o|inlining procedure: k814 
o|inlining procedure: k814 
o|consed rest parameter at call site: "(file.scm:145) chicken.file#posix-error" 4 
o|inlining procedure: k880 
o|consed rest parameter at call site: "(file.scm:163) chicken.file#posix-error" 4 
o|inlining procedure: k880 
o|inlining procedure: k895 
o|inlining procedure: k895 
o|inlining procedure: k936 
o|inlining procedure: k936 
o|substituted constant variable: a958 
o|substituted constant variable: a960 
o|inlining procedure: k997 
o|inlining procedure: k997 
o|inlining procedure: k1019 
o|contracted procedure: "(file.scm:196) g231232" 
o|inlining procedure: k1030 
o|inlining procedure: k1030 
o|consed rest parameter at call site: "(file.scm:184) chicken.file#posix-error" 4 
o|inlining procedure: k1019 
o|inlining procedure: k1067 
o|inlining procedure: k1067 
o|contracted procedure: "(file.scm:197) g249250" 
o|inlining procedure: k1075 
o|inlining procedure: k1075 
o|consed rest parameter at call site: "(file.scm:184) chicken.file#posix-error" 4 
o|inlining procedure: k1117 
o|inlining procedure: k1117 
o|consed rest parameter at call site: "(file.scm:205) chicken.file#posix-error" 4 
o|inlining procedure: k1138 
o|propagated global variable: r11392164 chicken.file#delete-file 
o|inlining procedure: k1138 
o|contracted procedure: "(file.scm:214) g290291" 
o|inlining procedure: k1130 
o|inlining procedure: k1168 
o|inlining procedure: k1168 
o|inlining procedure: k1130 
o|inlining procedure: k1203 
o|inlining procedure: k1203 
o|inlining procedure: k1231 
o|inlining procedure: k1231 
o|inlining procedure: k1255 
o|inlining procedure: k1255 
o|inlining procedure: k1354 
o|inlining procedure: k1354 
o|inlining procedure: k1484 
o|inlining procedure: k1484 
o|inlining procedure: k1568 
o|inlining procedure: k1568 
o|inlining procedure: k1581 
o|inlining procedure: k1581 
o|inlining procedure: k1610 
o|inlining procedure: k1610 
o|contracted procedure: "(file.scm:331) getpid434" 
o|substituted constant variable: a1646 
o|inlining procedure: k1667 
o|inlining procedure: k1667 
o|contracted procedure: "(file.scm:347) getpid443" 
o|substituted constant variable: a1718 
o|inlining procedure: k1728 
o|inlining procedure: k1728 
o|inlining procedure: k1768 
o|inlining procedure: k1768 
o|inlining procedure: k1842 
o|inlining procedure: k1842 
o|inlining procedure: k1851 
o|inlining procedure: k1851 
o|merged explicitly consed rest parameter: args496511 
o|consed rest parameter at call site: tmp2731 1 
o|inlining procedure: k1907 
o|inlining procedure: k1907 
o|inlining procedure: k1950 
o|inlining procedure: k1950 
o|inlining procedure: k1971 
o|inlining procedure: k1971 
o|inlining procedure: k1990 
o|inlining procedure: k1990 
o|inlining procedure: k1999 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|inlining procedure: k1999 
o|inlining procedure: k2049 
o|inlining procedure: k2049 
o|contracted procedure: "(file.scm:408) g556557" 
o|inlining procedure: k2070 
o|inlining procedure: k2070 
o|inlining procedure: k2102 
o|inlining procedure: k2102 
o|replaced variables: 396 
o|removed binding forms: 100 
o|substituted constant variable: r7842139 
o|substituted constant variable: r7962141 
o|substituted constant variable: r8962146 
o|substituted constant variable: loc233 
o|substituted constant variable: loc233 
o|substituted constant variable: loc251 
o|substituted constant variable: loc251 
o|propagated global variable: g2842852165 chicken.file#delete-file 
o|inlining procedure: k1138 
o|inlining procedure: k1138 
o|propagated global variable: r11392247 chicken.file#delete-file 
o|propagated global variable: r11392247 chicken.file#delete-file 
o|substituted constant variable: loc293 
o|converted assignments to bindings: (rmdir267) 
o|substituted constant variable: r12322183 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|substituted constant variable: r17292200 
o|substituted constant variable: r18432204 
o|substituted constant variable: r18522207 
o|substituted constant variable: r19082210 
o|substituted constant variable: r19082210 
o|substituted constant variable: loc559 
o|converted assignments to bindings: (tempdir407) 
o|simplifications: ((let . 2)) 
o|replaced variables: 37 
o|removed binding forms: 292 
o|inlining procedure: k939 
o|inlining procedure: k997 
o|inlining procedure: k1284 
o|inlining procedure: k1380 
o|inlining procedure: k1398 
o|inlining procedure: k1513 
o|inlining procedure: k1531 
o|inlining procedure: k1642 
o|inlining procedure: k1714 
o|inlining procedure: k1845 
o|inlining procedure: k1845 
o|inlining procedure: k1845 
o|inlining procedure: k2064 
o|replaced variables: 11 
o|removed binding forms: 57 
o|substituted constant variable: r9402300 
o|substituted constant variable: r9402300 
o|contracted procedure: k1150 
o|substituted constant variable: r12852308 
o|substituted constant variable: r13812311 
o|substituted constant variable: r13992312 
o|substituted constant variable: r15142315 
o|substituted constant variable: r15322316 
o|substituted constant variable: r18462325 
o|substituted constant variable: r18462327 
o|substituted constant variable: r18462329 
o|simplifications: ((let . 2)) 
o|removed binding forms: 16 
o|removed conditional forms: 9 
o|removed binding forms: 10 
o|simplifications: ((if . 22) (let . 9) (##core#call . 113)) 
o|  call simplifications:
o|    chicken.base#fixnum?
o|    chicken.fixnum#fx<
o|    scheme#procedure?
o|    scheme#member
o|    ##sys#apply
o|    ##sys#structure?
o|    scheme#memv	3
o|    ##sys#check-number	2
o|    scheme#>	2
o|    chicken.fixnum#fx+	3
o|    scheme#pair?	2
o|    ##sys#slot	5
o|    ##sys#call-with-values	2
o|    scheme#car	12
o|    scheme#null?	18
o|    scheme#cdr	8
o|    ##sys#null-pointer?	2
o|    ##sys#size	2
o|    scheme#string-ref
o|    chicken.fixnum#fx>
o|    scheme#eq?	6
o|    scheme#not	10
o|    scheme#cons	3
o|    chicken.fixnum#fx=	8
o|    ##sys#check-string	15
o|    ##sys#foreign-fixnum-argument
o|    scheme#apply
o|contracted procedure: k758 
o|contracted procedure: k780 
o|contracted procedure: k792 
o|contracted procedure: k804 
o|contracted procedure: k811 
o|contracted procedure: k820 
o|contracted procedure: k973 
o|contracted procedure: k855 
o|contracted procedure: k967 
o|contracted procedure: k858 
o|contracted procedure: k961 
o|contracted procedure: k861 
o|contracted procedure: k864 
o|contracted procedure: k883 
o|contracted procedure: k898 
o|contracted procedure: k902 
o|contracted procedure: k908 
o|contracted procedure: k954 
o|contracted procedure: k911 
o|contracted procedure: k930 
o|contracted procedure: k933 
o|contracted procedure: k948 
o|contracted procedure: k939 
o|contracted procedure: k979 
o|contracted procedure: k1099 
o|contracted procedure: k991 
o|contracted procedure: k994 
o|contracted procedure: k1096 
o|contracted procedure: k1000 
o|contracted procedure: k1033 
o|contracted procedure: k1078 
o|contracted procedure: k1191 
o|contracted procedure: k1108 
o|contracted procedure: k1120 
o|contracted procedure: k1127 
o|contracted procedure: k1171 
o|contracted procedure: k1181 
o|contracted procedure: k1185 
o|contracted procedure: k1200 
o|contracted procedure: k1206 
o|contracted procedure: k1296 
o|contracted procedure: k1243 
o|contracted procedure: k1246 
o|contracted procedure: k1249 
o|contracted procedure: k1258 
o|contracted procedure: k1290 
o|contracted procedure: k1426 
o|contracted procedure: k1305 
o|contracted procedure: k1420 
o|contracted procedure: k1308 
o|contracted procedure: k1414 
o|contracted procedure: k1311 
o|contracted procedure: k1408 
o|contracted procedure: k1314 
o|contracted procedure: k1317 
o|contracted procedure: k1320 
o|contracted procedure: k1323 
o|contracted procedure: k1357 
o|contracted procedure: k1377 
o|contracted procedure: k1386 
o|contracted procedure: k1398 
o|substituted constant variable: g2405 
o|contracted procedure: k1559 
o|contracted procedure: k1435 
o|contracted procedure: k1553 
o|contracted procedure: k1438 
o|contracted procedure: k1547 
o|contracted procedure: k1441 
o|contracted procedure: k1541 
o|contracted procedure: k1444 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1453 
o|contracted procedure: k1487 
o|contracted procedure: k1510 
o|contracted procedure: k1519 
o|contracted procedure: k1531 
o|substituted constant variable: g2409 
o|contracted procedure: k1647 
o|contracted procedure: k1593 
o|contracted procedure: k1596 
o|contracted procedure: k1683 
o|contracted procedure: k1731 
o|contracted procedure: k1734 
o|contracted procedure: k1749 
o|contracted procedure: k1821 
o|contracted procedure: k1771 
o|contracted procedure: k1778 
o|contracted procedure: k1801 
o|contracted procedure: k1817 
o|contracted procedure: k1866 
o|contracted procedure: k1839 
o|contracted procedure: k1854 
o|contracted procedure: k1860 
o|contracted procedure: k1845 
o|contracted procedure: k1931 
o|contracted procedure: k1953 
o|contracted procedure: k1956 
o|contracted procedure: k1962 
o|contracted procedure: k1974 
o|contracted procedure: k1983 
o|contracted procedure: k2009 
o|contracted procedure: k2086 
o|contracted procedure: k2097 
o|contracted procedure: k2105 
o|simplifications: ((if . 1) (let . 26)) 
o|replaced variables: 2 
o|removed binding forms: 103 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest217219 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest217219 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest259261 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest259261 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest314317 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest314317 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest333336 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest333336 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest333336 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest333336 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest369372 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest369372 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest369372 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest369372 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest425426 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest425426 0 
o|replaced variables: 2 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1309 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1309 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1309 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1309 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1439 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1439 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1439 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1439 1 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|customizable procedures: (k1934 k1937 loop540 tmp1730 tmp2731 g484485 loop476 conc-loop453 loop441 tempdir407 loop432 loop388 loop352 g274281 for-each-loop273294 rmdir267 k1022 loop228 k917 loop194 chicken.file#test-access chicken.file#posix-error) 
o|calls to known targets: 71 
o|unused rest argument: rest217219 f_989 
o|unused rest argument: rest259261 f_1106 
o|unused rest argument: rest314317 f_1241 
o|unused rest argument: rest333336 f_1303 
o|unused rest argument: rest369372 f_1433 
o|unused rest argument: rest425426 f_1591 
o|unused rest argument: _535 f_2100 
o|unused rest argument: _536 f_2108 
o|unused rest argument: _521 f_2136 
o|fast box initializations: 10 
o|fast global references: 8 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1112 
o|dropping unused closure argument: f_761 
o|dropping unused closure argument: f_802 
*/
/* end of file */
