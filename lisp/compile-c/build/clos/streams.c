/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;STREAMS.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/streams.eclh"
/*      function definition for BUG-OR-ERROR                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1bug_or_error(cl_object v1stream, cl_object v2fun)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_streamp(v1stream))) { goto L1; }
  value0 = cl_error(3, VV[3], v1stream, v2fun);
  return value0;
L1:;
  value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1stream, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("STREAM",801));
  return value0;
 }
}
/*      local function STREAM-ADVANCE-TO-COLUMN                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2stream_advance_to_column(cl_object v1stream, cl_object v2column)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3current_column;
   v3current_column = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-LINE-COLUMN",1686))(1, v1stream) /*  STREAM-LINE-COLUMN */;
   if (Null(v3current_column)) { goto L2; }
   {
    cl_object v4fill;
    v4fill = ecl_minus(v2column,v3current_column);
    {
     cl_object v5i;
     v5i = ecl_make_fixnum(0);
     goto L8;
L7:;
     ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-CHAR",1698))(2, v1stream, CODE_CHAR(32)) /*  STREAM-WRITE-CHAR */;
     v5i = ecl_one_plus(v5i);
L8:;
     if (!(ecl_lower(v5i,v4fill))) { goto L13; }
     goto L7;
L13:;
    }
   }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function STREAM-CLEAR-INPUT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3stream_clear_input(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-CLEAR-INPUT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4stream_clear_input(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_clear_input(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-CLEAR-INPUT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5stream_clear_input(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-CLEAR-INPUT",1677));
  return value0;
 }
}
/*      local function STREAM-CLEAR-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6stream_clear_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-CLEAR-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7stream_clear_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_clear_output(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-CLEAR-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8stream_clear_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-CLEAR-OUTPUT",1678));
  return value0;
 }
}
/*      local function CLOSE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9close(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1stream,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC9closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  (cl_env_copy->function=ecl_fdefinition(VV[19]))->cfun.entry(2, ECL_NIL, v1stream) /*  (SETF OPEN-STREAM-P) */;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function CLOSE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10close(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1stream,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC10closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  value0 = cl_close(3, v1stream, ECL_SYM("ABORT",1217), v2abort);
  return value0;
 }
}
/*      local function CLOSE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11close(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1stream,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC11closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  value0 = L1bug_or_error(v1stream, ECL_SYM("CLOSE",1671));
  return value0;
 }
}
/*      local function STREAM-ELEMENT-TYPE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12stream_element_type(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_SYM("CHARACTER",224);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-ELEMENT-TYPE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13stream_element_type(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_stream_element_type(v1stream);
  return value0;
 }
}
/*      local function STREAM-ELEMENT-TYPE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14stream_element_type(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-ELEMENT-TYPE",1679));
  return value0;
 }
}
/*      local function STREAM-FINISH-OUTPUT                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15stream_finish_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-FINISH-OUTPUT                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16stream_finish_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_finish_output(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-FINISH-OUTPUT                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17stream_finish_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-FINISH-OUTPUT",1682));
  return value0;
 }
}
/*      local function STREAM-FORCE-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18stream_force_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-FORCE-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19stream_force_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_force_output(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-FORCE-OUTPUT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20stream_force_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-FORCE-OUTPUT",1683));
  return value0;
 }
}
/*      local function STREAM-FRESH-LINE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21stream_fresh_line(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-START-LINE-P",1694))(1, v1stream) /*  STREAM-START-LINE-P */)!=ECL_NIL) { goto L1; }
  ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-TERPRI",1695))(1, v1stream) /*  STREAM-TERPRI */;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-FRESH-LINE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22stream_fresh_line(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_fresh_line(1, v1stream);
  return value0;
 }
}
/*      local function INPUT-STREAM-P                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23input_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function INPUT-STREAM-P                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24input_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function INPUT-STREAM-P                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25input_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_input_stream_p(v1stream);
  return value0;
 }
}
/*      local function INPUT-STREAM-P                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26input_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("INPUT-STREAM-P",1673));
  return value0;
 }
}
/*      local function STREAM-INTERACTIVE-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27stream_interactive_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_interactive_stream_p(v1stream);
  return value0;
 }
}
/*      local function STREAM-INTERACTIVE-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28stream_interactive_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-INTERACTIVE-P",1685));
  return value0;
 }
}
/*      local function STREAM-LINE-COLUMN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29stream_line_column(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-LISTEN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30stream_listen(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2char;
   v2char = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691))(1, v1stream) /*  STREAM-READ-CHAR-NO-HANG */;
   if (!(ECL_CHARACTERP(v2char))) { goto L2; }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-UNREAD-CHAR",1696))(2, v1stream, v2char) /*  STREAM-UNREAD-CHAR */;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function STREAM-LISTEN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31stream_listen(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_listen(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-LISTEN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32stream_listen(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-LISTEN",1687));
  return value0;
 }
}
/*      local function OPEN-STREAM-P                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33open_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_open_stream_p(v1stream);
  return value0;
 }
}
/*      local function OPEN-STREAM-P                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34open_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("OPEN-STREAM-P",1675));
  return value0;
 }
}
/*      local function OUTPUT-STREAM-P                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35output_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function OUTPUT-STREAM-P                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36output_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function OUTPUT-STREAM-P                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37output_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_output_stream_p(v1stream);
  return value0;
 }
}
/*      local function OUTPUT-STREAM-P                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38output_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("OUTPUT-STREAM-P",1674));
  return value0;
 }
}
/*      local function STREAM-PEEK-CHAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39stream_peek_char(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2char;
   v2char = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-CHAR",1690))(1, v1stream) /*  STREAM-READ-CHAR */;
   if ((v2char)==(ECL_SYM("EOF",1250))) { goto L2; }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-UNREAD-CHAR",1696))(2, v1stream, v2char) /*  STREAM-UNREAD-CHAR */;
L2:;
   value0 = v2char;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function STREAM-PEEK-CHAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40stream_peek_char(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_peek_char(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-PEEK-CHAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41stream_peek_char(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-PEEK-CHAR",1688));
  return value0;
 }
}
/*      local function STREAM-READ-BYTE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42stream_read_byte(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_read_byte(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-READ-BYTE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43stream_read_byte(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-READ-BYTE",1689));
  return value0;
 }
}
/*      local function STREAM-READ-CHAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44stream_read_char(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_read_char(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-READ-CHAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45stream_read_char(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-READ-CHAR",1690));
  return value0;
 }
}
/*      local function STREAM-UNREAD-CHAR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46stream_unread_char(cl_object v1stream, cl_object v2character)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_unread_char(2, v2character, v1stream);
  return value0;
 }
}
/*      local function STREAM-UNREAD-CHAR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47stream_unread_char(cl_object v1stream, cl_object v2character)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-UNREAD-CHAR",1696));
  return value0;
 }
}
/*      local function STREAM-READ-CHAR-NO-HANG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48stream_read_char_no_hang(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-CHAR",1690))(1, v1stream) /*  STREAM-READ-CHAR */;
  return value0;
 }
}
/*      local function STREAM-READ-CHAR-NO-HANG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49stream_read_char_no_hang(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_read_char_no_hang(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-READ-CHAR-NO-HANG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50stream_read_char_no_hang(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691));
  return value0;
 }
}
/*      local function STREAM-READ-LINE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51stream_read_line(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3res;
   cl_object v4len;
   cl_object v5index;
   v2 = cl_make_string(1, ecl_make_fixnum(80));
   v3res = v2;
   v4len = ecl_make_fixnum(80);
   v5index = ecl_make_fixnum(0);
L5:;
   {
    cl_object v6ch;
    v6ch = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-CHAR",1690))(1, v1stream) /*  STREAM-READ-CHAR */;
    if (!((v6ch)==(ECL_SYM("EOF",1250)))) { goto L8; }
    if (!(ecl_zerop(v5index))) { goto L11; }
    T0 = ECL_NIL;
    goto L10;
L11:;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SHRINK-VECTOR",1856))(2, v3res, v5index) /*  SHRINK-VECTOR */;
L10:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
L8:;
    if (!(ecl_char_code(v6ch)==ecl_char_code(CODE_CHAR(10)))) { goto L13; }
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SHRINK-VECTOR",1856))(2, v3res, v5index) /*  SHRINK-VECTOR */;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
L13:;
    if (!(ecl_number_equalp(v5index,v4len))) { goto L15; }
    v4len = ecl_times(v4len,ecl_make_fixnum(2));
    {
     cl_object v7new;
     v7new = cl_make_string(1, v4len);
     cl_replace(2, v7new, v3res);
     v3res = v7new;
    }
L15:;
    ecl_elt_set(v3res,ecl_to_size(v5index),v6ch);
    v5index = ecl_plus(v5index,ecl_make_fixnum(1));
   }
   goto L5;
  }
 }
}
/*      local function STREAM-READ-LINE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52stream_read_line(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_read_line(1, v1stream);
  return value0;
 }
}
/*      local function STREAM-READ-LINE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53stream_read_line(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-READ-LINE",1692));
  return value0;
 }
}
/*      function definition for CLOS-DEFAULT-READ-SEQUENCE            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L54clos_default_read_sequence(cl_object v1stream, cl_object v2sequence, cl_object v3start, cl_object v4end)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ecl_unlikely(!(ECL_LISTP(v2sequence) || ECL_VECTORP(v2sequence))))
           FEtype_error_sequence(v2sequence);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   bool v5;
   v5 = ECL_FIXNUMP(v3start);
   if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v3start);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
  }
  {
   cl_object v5;
   cl_object v6;
   cl_fixnum v7end;
   value0 = v4end;
   if ((value0)!=ECL_NIL) { goto L5; }
   v5 = ecl_make_fixnum(ecl_length(v2sequence));
   goto L3;
L5:;
   v5 = value0;
   goto L3;
L3:;
   v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-ELEMENT-TYPE",1679))(1, v1stream) /*  STREAM-ELEMENT-TYPE */;
   {
    cl_object v8;
    v8 = v5;
    {
     bool v9;
     v9 = ECL_FIXNUMP(v8);
     if (ecl_unlikely(!(v9)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v7end = ecl_fixnum(v8);
   }
   if ((v6)==(ECL_SYM("CHARACTER",224))) { goto L13; }
   if (!((v6)==(ECL_SYM("BASE-CHAR",122)))) { goto L11; }
   goto L12;
L13:;
L12:;
   {
    cl_object v8pos;
    v8pos = v3start;
L16:;
    if (!(ecl_greatereq(v8pos,ecl_make_fixnum(v7end)))) { goto L18; }
    goto L17;
L18:;
    {
     cl_object v9c;
     v9c = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-CHAR",1690))(1, v1stream) /*  STREAM-READ-CHAR */;
     if (!(ecl_eql(v9c,ECL_SYM("EOF",1250)))) { goto L22; }
     value0 = v8pos;
     cl_env_copy->nvalues = 1;
     return value0;
L22:;
     ecl_elt_set(v2sequence,ecl_to_size(v8pos),v9c);
    }
    v8pos = ecl_one_plus(v8pos);
    goto L16;
L17:;
    value0 = v8pos;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L11:;
   {
    cl_object v9pos;
    v9pos = v3start;
L29:;
    if (!(ecl_greatereq(v9pos,ecl_make_fixnum(v7end)))) { goto L31; }
    goto L30;
L31:;
    {
     cl_object v10b;
     v10b = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-READ-BYTE",1689))(1, v1stream) /*  STREAM-READ-BYTE */;
     if (!(ecl_eql(v10b,ECL_SYM("EOF",1250)))) { goto L35; }
     value0 = v9pos;
     cl_env_copy->nvalues = 1;
     return value0;
L35:;
     ecl_elt_set(v2sequence,ecl_to_size(v9pos),v10b);
    }
    v9pos = ecl_one_plus(v9pos);
    goto L29;
L30:;
    value0 = v9pos;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function STREAM-READ-SEQUENCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55stream_read_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L54clos_default_read_sequence(v1stream, v2sequence, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-READ-SEQUENCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56stream_read_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L54clos_default_read_sequence(v1stream, v2sequence, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-READ-SEQUENCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57stream_read_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_do_read_sequence(v2sequence, v1stream, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-READ-SEQUENCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58stream_read_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ECL_NIL;
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-READ-SEQUENCE",1693));
  return value0;
 }
}
/*      local function STREAM-START-LINE-P                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC59stream_start_line_p(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-LINE-COLUMN",1686))(1, v1stream) /*  STREAM-LINE-COLUMN */;
  value0 = ecl_make_bool((T0)==(ecl_make_fixnum(0)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-FILE-POSITION                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC60stream_file_position(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2position;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2position = ECL_NIL;
   } else {
    i++;
    v2position = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_file_position(2, v1stream, v2position);
  return value0;
 }
}
/*      local function STREAM-FILE-POSITION                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC61stream_file_position(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2position;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2position = ECL_NIL;
   } else {
    i++;
    v2position = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAMP                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC62streamp(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAMP                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63streamp(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-WRITE-BYTE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC64stream_write_byte(cl_object v1stream, cl_object v2integer)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_byte(v2integer, v1stream);
  return value0;
 }
}
/*      local function STREAM-WRITE-BYTE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65stream_write_byte(cl_object v1stream, cl_object v2integer)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-WRITE-BYTE",1697));
  return value0;
 }
}
/*      local function STREAM-WRITE-CHAR                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC66stream_write_char(cl_object v1stream, cl_object v2character)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_char(2, v2character, v1stream);
  return value0;
 }
}
/*      local function STREAM-WRITE-CHAR                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67stream_write_char(cl_object v1stream, cl_object v2character)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-WRITE-CHAR",1698));
  return value0;
 }
}
/*      function definition for CLOS-DEFAULT-WRITE-SEQUENCE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L68clos_default_write_sequence(cl_object v1stream, cl_object v2sequence, cl_object v3start, cl_object v4end)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ecl_unlikely(!(ECL_LISTP(v2sequence) || ECL_VECTORP(v2sequence))))
           FEtype_error_sequence(v2sequence);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   bool v5;
   v5 = ECL_FIXNUMP(v3start);
   if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v3start);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
  }
  {
   cl_object v5;
   cl_object v6;
   cl_fixnum v7end;
   value0 = v4end;
   if ((value0)!=ECL_NIL) { goto L6; }
   v5 = ecl_make_fixnum(ecl_length(v2sequence));
   goto L4;
L6:;
   v5 = value0;
   goto L4;
L4:;
   v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-ELEMENT-TYPE",1679))(1, v1stream) /*  STREAM-ELEMENT-TYPE */;
   {
    cl_object v8;
    v8 = v5;
    {
     bool v9;
     v9 = ECL_FIXNUMP(v8);
     if (ecl_unlikely(!(v9)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v7end = ecl_fixnum(v8);
   }
   if ((v6)==(ECL_SYM("CHARACTER",224))) { goto L14; }
   if (!((v6)==(ECL_SYM("BASE-CHAR",122)))) { goto L12; }
   goto L13;
L14:;
L13:;
   {
    cl_object v8pos;
    v8pos = v3start;
L17:;
    if (!(ecl_greatereq(v8pos,ecl_make_fixnum(v7end)))) { goto L19; }
    goto L18;
L19:;
    T0 = ecl_elt(v2sequence,ecl_fixnum(v8pos));
    ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-CHAR",1698))(2, v1stream, T0) /*  STREAM-WRITE-CHAR */;
    v8pos = ecl_one_plus(v8pos);
    goto L17;
L18:;
    goto L3;
   }
L12:;
   {
    cl_object v9pos;
    v9pos = v3start;
L26:;
    if (!(ecl_greatereq(v9pos,ecl_make_fixnum(v7end)))) { goto L28; }
    goto L27;
L28:;
    T0 = ecl_elt(v2sequence,ecl_fixnum(v9pos));
    ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-BYTE",1697))(2, v1stream, T0) /*  STREAM-WRITE-BYTE */;
    v9pos = ecl_one_plus(v9pos);
    goto L26;
L27:;
   }
  }
L3:;
  value0 = v2sequence;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-WRITE-SEQUENCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC69stream_write_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_STRINGP(v2sequence))) { goto L3; }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-STRING",1700))(4, v1stream, v2sequence, v3start, v4end) /*  STREAM-WRITE-STRING */;
  return value0;
L3:;
  value0 = L68clos_default_write_sequence(v1stream, v2sequence, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-WRITE-SEQUENCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC70stream_write_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L68clos_default_write_sequence(v1stream, v2sequence, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-WRITE-SEQUENCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC71stream_write_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_do_write_sequence(v2sequence, v1stream, v3start, v4end);
  return value0;
 }
}
/*      local function STREAM-WRITE-SEQUENCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72stream_write_sequence(cl_narg narg, cl_object v1stream, cl_object v2sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2sequence);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ECL_NIL;
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-WRITE-SEQUENCE",1699));
  return value0;
 }
}
/*      local function STREAM-WRITE-STRING                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC73stream_write_string(cl_narg narg, cl_object v1stream, cl_object v2string, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2string);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
    {
     bool v5;
     v5 = ECL_FIXNUMP(v3start);
     if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v3start);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   bool v5;
   v5 = ECL_STRINGP(v2string);
   if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("STRING",807),v2string);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
  }
  {
   cl_fixnum v5end;
   {
    cl_object v6;
    value0 = v4end;
    if ((value0)!=ECL_NIL) { goto L9; }
    v6 = ecl_make_fixnum(ecl_length(v2string));
    goto L7;
L9:;
    v6 = value0;
    goto L7;
L7:;
    {
     bool v7;
     v7 = ECL_FIXNUMP(v6);
     if (ecl_unlikely(!(v7)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v5end = ecl_fixnum(v6);
   }
   {
    cl_fixnum v6pos;
    {
     cl_fixnum v7;
     v7 = ecl_fixnum(v3start);
     {
      cl_fixnum v8;
      v8 = 0;
      v8 = v7;
      if (!((v8)<=(536870911))) { goto L23; }
      T0 = ecl_make_bool((v8)>=(0));
      goto L15;
L23:;
      T0 = ECL_NIL;
      goto L15;
      T0 = ECL_NIL;
      goto L15;
     }
L15:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[6],ecl_make_fixnum(v7));
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6pos = v7;
    }
    goto L27;
L26:;
    {
     ecl_character v7;
     {
      cl_object v8;
      v8 = v2string;
      T0 = v8;
      {
       cl_fixnum v9;
       {
        cl_fixnum v10;
        v10 = v6pos;
        if (ecl_unlikely((v10)>=(v8)->vector.dim))
           FEwrong_index(ECL_NIL,v8,-1,ecl_make_fixnum(v10),(v8)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v9 = v10;
       }
       v7 = CHAR_CODE(ecl_aref_unsafe(T0,v9));
      }
     }
     ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-CHAR",1698))(2, v1stream, CODE_CHAR(v7)) /*  STREAM-WRITE-CHAR */;
    }
    {
     cl_object v7;
     v7 = ecl_make_integer((v6pos)+1);
     {
      cl_fixnum v8;
      v8 = 0;
      if (!(ECL_FIXNUMP(v7))) { goto L43; }
      v8 = ecl_fixnum(v7);
      if (!((v8)<=(536870911))) { goto L48; }
      T0 = ecl_make_bool((v8)>=(0));
      goto L40;
L48:;
      T0 = ECL_NIL;
      goto L40;
L43:;
      T0 = ECL_NIL;
      goto L40;
     }
L40:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[6],v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6pos = ecl_fixnum(v7);
    }
L27:;
    if ((v6pos)>=(v5end)) { goto L50; }
    goto L26;
L50:;
   }
  }
  value0 = v2string;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-WRITE-STRING                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC74stream_write_string(cl_narg narg, cl_object v1stream, cl_object v2string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2string);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ecl_make_fixnum(0);
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_write_string(6, v2string, v1stream, ECL_SYM("START",1337), v3start, ECL_SYM("END",1247), v4end);
  return value0;
 }
}
/*      local function STREAM-WRITE-STRING                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC75stream_write_string(cl_narg narg, cl_object v1stream, cl_object v2string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start;
  cl_object v4end;
  va_list args; va_start(args,v2string);
  {
   int i = 2;
   if (i >= narg) {
    v3start = ECL_NIL;
   } else {
    i++;
    v3start = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4end = ECL_NIL;
   } else {
    i++;
    v4end = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-WRITE-STRING",1700));
  return value0;
 }
}
/*      local function STREAM-TERPRI                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC76stream_terpri(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-WRITE-CHAR",1698))(2, v1stream, CODE_CHAR(10)) /*  STREAM-WRITE-CHAR */;
  return value0;
 }
}
/*      local function STREAM-TERPRI                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC77stream_terpri(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_terpri(v1stream);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function STREAM-TERPRI                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78stream_terpri(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-TERPRI",1695));
  return value0;
 }
}
/*      local function STREAM-FILE-DESCRIPTOR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79stream_file_descriptor(cl_narg narg, cl_object v1stream, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2direction;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2direction = ECL_SYM("INPUT",1280);
   } else {
    i++;
    v2direction = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  PREDICATE       */
   cl_object v5;                                  /*  KIND            */
   if (!(ecl_eql(v2direction,ECL_SYM("INPUT",1280)))) { goto L3; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = VV[7];
   cl_env_copy->values[0] = ECL_SYM("INPUT-STREAM-P",1673);
   value0 = cl_env_copy->values[0];
   goto L2;
L3:;
   if (!(ecl_eql(v2direction,ECL_SYM("OUTPUT",1309)))) { goto L5; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = VV[8];
   cl_env_copy->values[0] = ECL_SYM("OUTPUT-STREAM-P",1674);
   value0 = cl_env_copy->values[0];
   goto L2;
L5:;
   T0 = ecl_list1(v2direction);
   value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[9], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v2direction, ECL_SYM("EXPECTED-TYPE",1254), VV[10]);
L2:;
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if ((ecl_function_dispatch(cl_env_copy,v4)(1, v1stream))!=ECL_NIL) { goto L7; }
   T0 = cl_list(3, v5, v1stream, v2direction);
   T1 = cl_list(2, ECL_SYM("SATISFIES",737), v4);
   value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[11], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v1stream, ECL_SYM("EXPECTED-TYPE",1254), T1);
   return value0;
L7:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function STREAM-FILE-DESCRIPTOR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80stream_file_descriptor(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2direction;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2direction = ECL_NIL;
   } else {
    i++;
    v2direction = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L1bug_or_error(v1stream, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680));
  return value0;
 }
}
/*      local function STREAM-FILE-DESCRIPTOR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC81stream_file_descriptor(cl_narg narg, cl_object v1stream, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2direction;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2direction = ECL_SYM("INPUT",1280);
   } else {
    i++;
    v2direction = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ecl_eql(v2direction,ECL_SYM("INPUT",1280)))) { goto L3; }
  T0 = cl_two_way_stream_input_stream(v1stream);
  goto L2;
L3:;
  if (!(ecl_eql(v2direction,ECL_SYM("OUTPUT",1309)))) { goto L5; }
  T0 = cl_two_way_stream_output_stream(v1stream);
  goto L2;
L5:;
  T0 = ECL_NIL;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STREAM-FILE-DESCRIPTOR",1680))(2, T0, v2direction) /*  STREAM-FILE-DESCRIPTOR */;
  return value0;
 }
}
/*      local function STREAM-FILE-DESCRIPTOR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82stream_file_descriptor(cl_narg narg, cl_object v1stream, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2direction;
  va_list args; va_start(args,v1stream);
  {
   int i = 1;
   if (i >= narg) {
    v2direction = ECL_SYM("INPUT",1280);
   } else {
    i++;
    v2direction = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_file_stream_fd(v1stream);
  return value0;
 }
}
/*      function definition for %REDEFINE-CL-FUNCTIONS                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L83_redefine_cl_functions(cl_object v1cl_symbol, cl_object v2gray_symbol, cl_object v3gray_package)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_fdefinition(v1cl_symbol);
  if ((si_of_class_p(2, T0, ECL_SYM("GENERIC-FUNCTION",947)))!=ECL_NIL) { goto L1; }
  {
   cl_object v4gf;
   v4gf = cl_fdefinition(v2gray_symbol);
   si_fset(2, v1cl_symbol, v4gf);
   T0 = ecl_symbol_name(v1cl_symbol);
   T1 = ecl_symbol_name(v2gray_symbol);
   if (!(ecl_string_eq(T0,T1))) { goto L5; }
   cl_unintern(2, v2gray_symbol, v3gray_package);
   cl_import(2, v1cl_symbol, v3gray_package);
   cl_export(2, v1cl_symbol, v3gray_package);
L5:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[24]))->cfun.entry(3, v1cl_symbol, v4gf, ECL_SYM("NAME",1596)) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REDEFINE-CL-FUNCTIONS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L84redefine_cl_functions()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   cl_object v2;
   v1 = si_package_lock(VV[13], ECL_NIL);
   v2 = cl_find_package(VV[14]);
   {
    cl_object v3cl_symbol;
    cl_object v4;
    v3cl_symbol = ECL_NIL;
    v4 = VV[15];
    {
     cl_object v5gray_symbol;
     v5gray_symbol = ECL_NIL;
L8:;
     v3cl_symbol = _ecl_car(v4);
     {
      cl_object v6;
      v6 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v6;
     }
     T0 = ecl_symbol_name(v3cl_symbol);
     v5gray_symbol = cl_find_symbol(2, T0, v2);
     L83_redefine_cl_functions(v3cl_symbol, v5gray_symbol, v2);
     if (!(ecl_endp(v4))) { goto L19; }
     goto L9;
L19:;
     goto L8;
L9:;
    }
   }
   L83_redefine_cl_functions(ECL_SYM("FILE-POSITION",359), ECL_SYM("STREAM-FILE-POSITION",1681), v2);
   si_package_lock(VV[13], v1);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/streams.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclnAASjAb7_wTJ6lq51(cl_object flag)
{
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object *VVtemp;
 if (flag != OBJNULL){
 Cblock = flag;
 #ifndef ECL_DYNAMIC_VV
 flag->cblock.data = VV;
 #endif
 flag->cblock.data_size = VM;
 flag->cblock.temp_data_size = VMtemp;
 flag->cblock.data_text = compiler_data_text;
 flag->cblock.cfuns_size = compiler_cfuns_size;
 flag->cblock.cfuns = compiler_cfuns;
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;STREAMS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclnAASjAb7_wTJ6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  cl_import(1, ECL_SYM("ANSI-STREAM",1851));
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-ADVANCE-TO-COLUMN",1676), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[1], ECL_SYM("DOCUMENTATION",1244), VVtemp[2]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-CLEAR-INPUT",1677), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[4]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-CLEAR-OUTPUT",1678), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[5]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("CLOSE",1671), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[6], ECL_SYM("DOCUMENTATION",1244), VVtemp[7]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-ELEMENT-TYPE",1679), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[8]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-FINISH-OUTPUT",1682), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[9]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-FORCE-OUTPUT",1683), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[10]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-FRESH-LINE",1684), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[11]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("INPUT-STREAM-P",1673), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[12]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[1], VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[13]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-INTERACTIVE-P",1685), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[14]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-LINE-COLUMN",1686), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[15]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(5, ECL_SYM("STREAM-LISTEN",1687), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("OPEN-STREAM-P",1675), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[16]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("OUTPUT-STREAM-P",1674), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[17]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-PEEK-CHAR",1688), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[18]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-READ-BYTE",1689), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[19]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-READ-CHAR",1690), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[20]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[21]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-READ-LINE",1692), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[22]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-READ-SEQUENCE",1693), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[23], ECL_SYM("DOCUMENTATION",1244), VVtemp[24]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-START-LINE-P",1694), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[25]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-TERPRI",1695), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[26]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-UNREAD-CHAR",1696), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[27], ECL_SYM("DOCUMENTATION",1244), VVtemp[28]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-WRITE-BYTE",1697), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[29], ECL_SYM("DOCUMENTATION",1244), VVtemp[30]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-WRITE-CHAR",1698), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[27], ECL_SYM("DOCUMENTATION",1244), VVtemp[31]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-WRITE-STRING",1700), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[32], ECL_SYM("DOCUMENTATION",1244), VVtemp[33]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-WRITE-SEQUENCE",1699), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[23], ECL_SYM("DOCUMENTATION",1244), VVtemp[34]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-FILE-POSITION",1681), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[35], ECL_SYM("DOCUMENTATION",1244), VVtemp[36]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680), VV[0], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[37], ECL_SYM("DOCUMENTATION",1244), VVtemp[38]) /*  ENSURE-GENERIC-FUNCTION */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_bds_bind(cl_env_copy,VV[2],ECL_SYM("MAP-DEPENDENTS",1590)); /*  *CLOS-BOOTED* */
  T0 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[41]);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-STREAM",1701), VVtemp[39], VVtemp[40], T0);
  ecl_bds_unwind1(cl_env_copy);
 }
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-INPUT-STREAM",1702), VVtemp[42], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-OUTPUT-STREAM",1703), VVtemp[42], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-CHARACTER-STREAM",1704), VVtemp[42], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-BINARY-STREAM",1705), VVtemp[42], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-CHARACTER-INPUT-STREAM",1706), VVtemp[43], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-CHARACTER-OUTPUT-STREAM",1707), VVtemp[44], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-BINARY-INPUT-STREAM",1708), VVtemp[45], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FUNDAMENTAL-BINARY-OUTPUT-STREAM",1709), VVtemp[46], ECL_NIL, ECL_NIL);
  (void)0; /* No entry created for BUG-OR-ERROR */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2stream_advance_to_column,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-ADVANCE-TO-COLUMN",1676), ECL_NIL, VVtemp[47], VVtemp[1], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3stream_clear_input,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-INPUT",1677), ECL_NIL, VVtemp[48], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4stream_clear_input,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-INPUT",1677), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5stream_clear_input,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-INPUT",1677), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6stream_clear_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-OUTPUT",1678), ECL_NIL, VVtemp[51], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7stream_clear_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-OUTPUT",1678), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8stream_clear_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-CLEAR-OUTPUT",1678), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC9close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("CLOSE",1671), ECL_NIL, VVtemp[42], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC10close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("CLOSE",1671), ECL_NIL, VVtemp[49], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC11close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("CLOSE",1671), ECL_NIL, VVtemp[3], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12stream_element_type,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-ELEMENT-TYPE",1679), ECL_NIL, VVtemp[52], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13stream_element_type,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-ELEMENT-TYPE",1679), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14stream_element_type,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-ELEMENT-TYPE",1679), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15stream_finish_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FINISH-OUTPUT",1682), ECL_NIL, VVtemp[51], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16stream_finish_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FINISH-OUTPUT",1682), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17stream_finish_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FINISH-OUTPUT",1682), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18stream_force_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FORCE-OUTPUT",1683), ECL_NIL, VVtemp[51], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19stream_force_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FORCE-OUTPUT",1683), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20stream_force_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FORCE-OUTPUT",1683), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21stream_fresh_line,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FRESH-LINE",1684), ECL_NIL, VVtemp[53], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22stream_fresh_line,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FRESH-LINE",1684), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23input_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("INPUT-STREAM-P",1673), ECL_NIL, VVtemp[42], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24input_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("INPUT-STREAM-P",1673), ECL_NIL, VVtemp[54], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC25input_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("INPUT-STREAM-P",1673), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26input_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("INPUT-STREAM-P",1673), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC27stream_interactive_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-INTERACTIVE-P",1685), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28stream_interactive_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-INTERACTIVE-P",1685), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29stream_line_column,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-LINE-COLUMN",1686), ECL_NIL, VVtemp[53], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30stream_listen,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-LISTEN",1687), ECL_NIL, VVtemp[48], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC31stream_listen,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-LISTEN",1687), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC32stream_listen,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-LISTEN",1687), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC33open_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OPEN-STREAM-P",1675), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC34open_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OPEN-STREAM-P",1675), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC35output_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OUTPUT-STREAM-P",1674), ECL_NIL, VVtemp[42], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC36output_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OUTPUT-STREAM-P",1674), ECL_NIL, VVtemp[51], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC37output_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OUTPUT-STREAM-P",1674), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC38output_stream_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("OUTPUT-STREAM-P",1674), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC39stream_peek_char,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-PEEK-CHAR",1688), ECL_NIL, VVtemp[48], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC40stream_peek_char,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-PEEK-CHAR",1688), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC41stream_peek_char,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-PEEK-CHAR",1688), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42stream_read_byte,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-BYTE",1689), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC43stream_read_byte,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-BYTE",1689), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC44stream_read_char,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-CHAR",1690), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45stream_read_char,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-CHAR",1690), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC46stream_unread_char,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-UNREAD-CHAR",1696), ECL_NIL, VVtemp[55], VVtemp[27], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC47stream_unread_char,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-UNREAD-CHAR",1696), ECL_NIL, VVtemp[55], VVtemp[27], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC48stream_read_char_no_hang,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691), ECL_NIL, VVtemp[48], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC49stream_read_char_no_hang,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC50stream_read_char_no_hang,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-CHAR-NO-HANG",1691), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC51stream_read_line,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-LINE",1692), ECL_NIL, VVtemp[48], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC52stream_read_line,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-LINE",1692), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC53stream_read_line,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-LINE",1692), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[20]);                          /*  CLOS-DEFAULT-READ-SEQUENCE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC55stream_read_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-SEQUENCE",1693), ECL_NIL, VVtemp[56], VVtemp[57], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC56stream_read_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-SEQUENCE",1693), ECL_NIL, VVtemp[58], VVtemp[57], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC57stream_read_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-SEQUENCE",1693), ECL_NIL, VVtemp[55], VVtemp[57], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC58stream_read_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-READ-SEQUENCE",1693), ECL_NIL, VVtemp[59], VVtemp[23], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC59stream_start_line_p,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-START-LINE-P",1694), ECL_NIL, VVtemp[53], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC60stream_file_position,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-POSITION",1681), ECL_NIL, VVtemp[49], VVtemp[35], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC61stream_file_position,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-POSITION",1681), ECL_NIL, VVtemp[50], VVtemp[35], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC62streamp,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAMP",1672), ECL_NIL, VVtemp[3], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC63streamp,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAMP",1672), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC64stream_write_byte,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-BYTE",1697), ECL_NIL, VVtemp[55], VVtemp[29], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC65stream_write_byte,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-BYTE",1697), ECL_NIL, VVtemp[59], VVtemp[29], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC66stream_write_char,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-CHAR",1698), ECL_NIL, VVtemp[55], VVtemp[27], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC67stream_write_char,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-CHAR",1698), ECL_NIL, VVtemp[59], VVtemp[27], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[21]);                          /*  CLOS-DEFAULT-WRITE-SEQUENCE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC69stream_write_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-SEQUENCE",1699), ECL_NIL, VVtemp[47], VVtemp[60], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC70stream_write_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-SEQUENCE",1699), ECL_NIL, VVtemp[61], VVtemp[60], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC71stream_write_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-SEQUENCE",1699), ECL_NIL, VVtemp[55], VVtemp[60], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC72stream_write_sequence,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-SEQUENCE",1699), ECL_NIL, VVtemp[59], VVtemp[23], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC73stream_write_string,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-STRING",1700), ECL_NIL, VVtemp[47], VVtemp[62], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC74stream_write_string,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-STRING",1700), ECL_NIL, VVtemp[55], VVtemp[62], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC75stream_write_string,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-WRITE-STRING",1700), ECL_NIL, VVtemp[59], VVtemp[32], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC76stream_terpri,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-TERPRI",1695), ECL_NIL, VVtemp[53], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC77stream_terpri,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-TERPRI",1695), ECL_NIL, VVtemp[49], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC78stream_terpri,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-TERPRI",1695), ECL_NIL, VVtemp[50], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC79stream_file_descriptor,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680), VVtemp[63], VVtemp[50], VVtemp[64], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC80stream_file_descriptor,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680), ECL_NIL, VVtemp[50], VVtemp[37], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC81stream_file_descriptor,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680), ECL_NIL, VVtemp[65], VVtemp[64], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC82stream_file_descriptor,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[17])(5, ECL_SYM("STREAM-FILE-DESCRIPTOR",1680), ECL_NIL, VVtemp[66], VVtemp[64], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1p;
   v1p = cl_find_package(VVtemp[0]);
   cl_export(2, VVtemp[67], v1p);
   {
    cl_object v2;
    cl_object v3;
    cl_object v4s;
    T0 = cl_find_package(VVtemp[68]);
    v2 = ecl_function_dispatch(cl_env_copy,VV[22])(3, T0, VVtemp[69], ECL_T) /*  PACKAGES-ITERATOR */;
    v3 = ECL_NIL;
    v4s = ECL_NIL;
    goto L221;
L220:;
    value0 = ecl_function_dispatch(cl_env_copy,v2)(0);
    {
     const int v5 = cl_env_copy->nvalues;
     v3 = value0;
     cl_object v6;
     v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
     v4s = v6;
    }
    if ((v3)!=ECL_NIL) { goto L225; }
    goto L213;
L225:;
    if ((ecl_memql(v4s,VVtemp[70]))!=ECL_NIL) { goto L227; }
    cl_export(2, v4s, v1p);
L227:;
L221:;
    goto L220;
   }
  }
L213:;
 }
  ecl_cmp_defun(VV[23]);                          /*  %REDEFINE-CL-FUNCTIONS */
  ecl_cmp_defun(VV[25]);                          /*  REDEFINE-CL-FUNCTIONS */
  cl_set(VV[2],ECL_T);
}
