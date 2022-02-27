/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:SOCKETS;SOCKETS.LISP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/sockets.eclh"
/*      function definition for WSOCK-INITIALIZE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1wsock_initialize()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[1]))!=ECL_NIL) { goto L1; }
  {
   cl_object v1;
   
{
        WSADATA wsadata;
        cl_object output;
        ecl_disable_interrupts();
        if (WSAStartup(MAKEWORD(2,2), &wsadata) == NO_ERROR)
                output = ECL_T;
        else
                output = ECL_NIL;
        ecl_enable_interrupts();
        v1= output;
}
   if (Null(v1)) { goto L3; }
  }
  cl_set(VV[1],ECL_T);
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = cl_error(1, VV[2]);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FF-SOCKET                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2ff_socket(cl_object v1, cl_object v2, cl_object v3)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   int v4;
   ecl_disable_interrupts();v4=socket(ecl_to_int(v1),ecl_to_int(v2),ecl_to_int(v3));ecl_enable_interrupts();
   value0 = ecl_make_int(v4);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FF-LISTEN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3ff_listen(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   int v3;
   ecl_disable_interrupts();v3=listen(ecl_to_int(v1),ecl_to_int(v2));ecl_enable_interrupts();
   value0 = ecl_make_int(v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FF-CLOSE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4ff_close(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   int v2;
   ecl_disable_interrupts();v2=close(ecl_to_int(v1));ecl_enable_interrupts();
   value0 = ecl_make_int(v2);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FF-CLOSESOCKET                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5ff_closesocket(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   int v2;
   ecl_disable_interrupts();v2=closesocket(ecl_to_int(v1));ecl_enable_interrupts();
   value0 = ecl_make_int(v2);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SPLIT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7split(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2max;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2max = ECL_NIL;
   } else {
    i++;
    v2max = va_arg(args,cl_object);
   }
   if (i >= narg) {
    env0 = ECL_NIL;
    CLV0 = env0 = CONS(VV[13],env0);              /*  WS              */
   } else {
    i++;
    env0 = ECL_NIL;
    CLV0 = env0 = CONS(va_arg(args,cl_object),env0); /*  WS           */
   }
  }
  va_end(args);
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC6is_ws,env0,Cblock,1);
   {
    cl_object v4start;
    v4start = ECL_NIL;
    {
     cl_object v5index;
     v5index = ECL_NIL;
     {
      cl_fixnum v6word_count;
      v6word_count = 0;
      {
       cl_object v7;
       cl_object v8;
       v7 = ecl_list1(ECL_NIL);
       v8 = v7;
       v4start = cl_position_if_not(2, v3, v1string);
L7:;
       if (Null(v4start)) { goto L14; }
       if (Null(v2max)) { goto L16; }
       T0 = ecl_make_integer((v6word_count)+1);
       if (!(ecl_number_equalp(T0,v2max))) { goto L16; }
       v5index = ECL_NIL;
       goto L12;
L16:;
       v5index = cl_position_if(4, v3, v1string, ECL_SYM("START",1337), v4start);
       goto L12;
L14:;
       v5index = ECL_NIL;
       goto L12;
L12:;
       if ((v4start)!=ECL_NIL) { goto L19; }
       goto L8;
L19:;
       {
        cl_object v9;
        v9 = v8;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v9;
       }
       T1 = cl_subseq(3, v1string, v4start, v5index);
       v8 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v8,T0);
       {
        cl_object v9;
        v9 = ecl_make_integer((v6word_count)+1);
        {
         bool v10;
         v10 = ECL_FIXNUMP(v9);
         if (ecl_unlikely(!(v10)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v9);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        v6word_count = ecl_fixnum(v9);
       }
       if ((v5index)!=ECL_NIL) { goto L30; }
       goto L8;
L30:;
       v4start = cl_position_if_not(4, v3, v1string, ECL_SYM("START",1337), v5index);
       goto L7;
L8:;
       value0 = ecl_cdr(v7);
       cl_env_copy->nvalues = 1;
       return value0;
      }
     }
    }
   }
  }
 }
}
/*      closure IS-WS                                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6is_ws(cl_narg narg, cl_object v1char, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  WS              */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[198])(2, ECL_CONS_CAR(CLV0), ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L2:;
   if ((v2)!=ECL_NIL) { goto L4; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[199])(2, ECL_CONS_CAR(CLV0), v2) /*  SEQ-ITERATOR-REF */;
    if (!(ecl_eql(v1char,v3))) { goto L6; }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L6:;
   v2 = ecl_function_dispatch(cl_env_copy,VV[200])(2, ECL_CONS_CAR(CLV0), v2) /*  SEQ-ITERATOR-NEXT */;
   goto L2;
  }
 }
 }
}
/*      local function HOST-ENT-ADDRESS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8host_ent_address(cl_object v1host_ent)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v1host_ent) /*  HOST-ENT-ADDRESSES */;
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GET-HOST-BY-NAME                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9get_host_by_name(cl_object v1host_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  ERRNO           */
   cl_object v4;                                  /*  CANONICAL-NAME  */
   cl_object v5;                                  /*  ADDRESSES       */
   cl_object v6;                                  /*  ALIASES         */
   {
    cl_object v7;
    v7 = si_copy_to_simple_base_string(v1host_name);
    {
     int v8;
     cl_object v9;
     cl_object v10;
     cl_object v11;
     
{
    struct addrinfo hints;
    struct addrinfo *result;
    cl_object host_name = ECL_NIL;
    cl_object aliases = ECL_NIL;
    cl_object addresses = ECL_NIL;
    int err;

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;                     /* IPv4 */
    hints.ai_socktype = 0;                         /* Any type */
    hints.ai_protocol = 0;                         /* Any protocol */
    hints.ai_flags = (AI_CANONNAME);               /* Get cannonname */
    hints.ai_addr = NULL;
    hints.ai_next = NULL;

    ecl_disable_interrupts();
    err = getaddrinfo(ecl_base_string_pointer_safe(v7), NULL, &hints, &result);
    ecl_enable_interrupts();

    if (err == 0) {
        struct addrinfo *rp;

        for (rp = result; rp != NULL; rp = rp->ai_next) {
            if ( (rp == result) && (rp->ai_canonname != 0) ) {  /* first one may hold cannonname */
                host_name = ecl_make_simple_base_string( rp->ai_canonname, -1 );
            }
            struct sockaddr_in *ipv4 = (struct sockaddr_in *)rp->ai_addr;
            uint32_t ip = ntohl( ipv4->sin_addr.s_addr );
            cl_object vector = cl_make_array(1,ecl_make_fixnum(4));
            ecl_aset(vector,0, ecl_make_fixnum( ip>>24 ));
            ecl_aset(vector,1, ecl_make_fixnum( (ip>>16) & 0xFF));
            ecl_aset(vector,2, ecl_make_fixnum( (ip>>8) & 0xFF));
            ecl_aset(vector,3, ecl_make_fixnum( ip & 0xFF ));
            addresses = cl_adjoin(4, vector, addresses, ECL_SYM("TEST",1343), ECL_SYM("EQUALP",338));
            if ( rp->ai_canonname != 0 ) {
                cl_object alias = ecl_make_simple_base_string( rp->ai_canonname, -1 );
                aliases = CONS(alias, aliases);
            }
        }
        freeaddrinfo(result);
    }
    v8= err;
    v9= host_name;
    v10= addresses;
    v11= aliases;
}
     cl_env_copy->values[0] = ecl_make_int(v8);
     cl_env_copy->values[1] = v9;
     cl_env_copy->values[2] = v10;
     cl_env_copy->values[3] = v11;cl_env_copy->nvalues = 4;
     value0 = cl_env_copy->values[0];
    }
   }
   {
    v3 = value0;
    v4 = cl_env_copy->values[1];
    v5 = cl_env_copy->values[2];
    v6 = cl_env_copy->values[3];
   }
   if (!(ecl_number_equalp(v3,ecl_make_fixnum(0)))) { goto L3; }
   value0 = v4;
   if ((value0)!=ECL_NIL) { goto L7; }
   T0 = v1host_name;
   goto L5;
L7:;
   T0 = value0;
   goto L5;
L5:;
   value0 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(9, VV[15], ECL_SYM("NAME",1300), T0, VV[18], v6, ECL_SYM("TYPE",1346), ecl_symbol_value(VV[4]), VV[19], v5) /*  MAKE-INSTANCE */;
   return value0;
L3:;
   value0 = L64name_service_error(2, VV[20], v3);
   return value0;
  }
 }
}
/*      function definition for GET-HOST-BY-ADDRESS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10get_host_by_address(cl_object v1address)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  goto L3;
L2:;
  si_assert_failure(1, VV[22]);
L3:;
  if (!(ECL_VECTORP(v1address))) { goto L9; }
  {
   cl_fixnum v2;
   v2 = ecl_length(v1address);
   if ((v2)==(4)) { goto L6; }
   goto L7;
  }
L9:;
  goto L7;
L7:;
  goto L2;
L6:;
  {
   cl_object v3;                                  /*  ERRNO           */
   cl_object v4;                                  /*  NAME            */
   {
    cl_object v5;
    v5 = v1address;
    T1 = v5;
    {
     cl_fixnum v6;
     if (ecl_unlikely((0)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(0),(v5)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = 0;
     T0 = ecl_aref_unsafe(T1,v6);
    }
   }
   {
    cl_object v5;
    v5 = v1address;
    T2 = v5;
    {
     cl_fixnum v6;
     if (ecl_unlikely((1)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(1),(v5)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = 1;
     T1 = ecl_aref_unsafe(T2,v6);
    }
   }
   {
    cl_object v5;
    v5 = v1address;
    T3 = v5;
    {
     cl_fixnum v6;
     if (ecl_unlikely((2)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(2),(v5)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = 2;
     T2 = ecl_aref_unsafe(T3,v6);
    }
   }
   {
    cl_object v5;
    v5 = v1address;
    T4 = v5;
    {
     cl_fixnum v6;
     if (ecl_unlikely((3)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(3),(v5)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = 3;
     T3 = ecl_aref_unsafe(T4,v6);
    }
   }
   {
    int v5;
    cl_object v6;
    
{
    struct sockaddr_in addr;
    socklen_t addr_len = (socklen_t)sizeof(struct sockaddr_in);
    char host[NI_MAXHOST];
    int err;

    fill_inet_sockaddr(&addr, 0, ecl_to_int(T0), ecl_to_int(T1), ecl_to_int(T2), ecl_to_int(T3));

    ecl_disable_interrupts();
    err = getnameinfo((struct sockaddr *) &addr, addr_len, host, NI_MAXHOST, NULL, 0, NI_NAMEREQD);
    ecl_enable_interrupts();

    v5= err;
    v6= err ? ECL_NIL : ecl_make_simple_base_string(host,-1);
}
    cl_env_copy->values[0] = ecl_make_int(v5);
    cl_env_copy->values[1] = v6;cl_env_copy->nvalues = 2;
    value0 = cl_env_copy->values[0];
   }
   {
    v3 = value0;
    v4 = cl_env_copy->values[1];
   }
   if (!(ecl_number_equalp(v3,ecl_make_fixnum(0)))) { goto L32; }
   T0 = ecl_list1(v1address);
   value0 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(9, VV[15], ECL_SYM("NAME",1300), v4, VV[18], ECL_NIL, ECL_SYM("TYPE",1346), ecl_symbol_value(VV[4]), VV[19], T0) /*  MAKE-INSTANCE */;
   return value0;
L32:;
   value0 = L64name_service_error(2, VV[23], v3);
   return value0;
  }
 }
}
/*      local function LAMBDA34                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda34()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(1, VV[26]);
  return value0;
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13print_object(cl_object v1object, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1object,env0);              /*  OBJECT          */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC12si___print_unreadable_object_body_,env0,Cblock,0);
   T0 = ECL_CONS_CAR(CLV1);
   value0 = si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), T0, ECL_T, ECL_T, v3);
   return value0;
  }
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(cl_slot_boundp(ECL_CONS_CAR(CLV0), VV[27]))) { goto L1; }
  ecl_princ(VV[28],ECL_CONS_CAR(CLV1));
  T0 = cl_slot_value(ECL_CONS_CAR(CLV0), VV[27]);
  value0 = ecl_princ(T0,ECL_CONS_CAR(CLV1));
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ecl_princ(VV[29],ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14shared_initialize(cl_narg narg, cl_object v1socket, cl_object v2slot_names, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3protocol;
  cl_object v4type;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC14shared_initializekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v3protocol = keyvars[0];
   v4type = keyvars[1];
  }
  {
   cl_object v5proto_num;
   cl_object v6fd;
   if (Null(v3protocol)) { goto L2; }
   if (Null(cl_keywordp(v3protocol))) { goto L2; }
   T0 = ecl_symbol_name(v3protocol);
   T1 = cl_string_downcase(1, T0);
   v5proto_num = L21get_protocol_by_name(T1);
   goto L1;
L2:;
   if (Null(v3protocol)) { goto L5; }
   v5proto_num = v3protocol;
   goto L1;
L5:;
   v5proto_num = ecl_make_fixnum(0);
L1:;
   if (Null(cl_slot_boundp(v1socket, VV[27]))) { goto L12; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   goto L10;
L12:;
   value0 = ECL_NIL;
   goto L10;
L10:;
   if ((value0)!=ECL_NIL) { goto L9; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[208])(1, v1socket) /*  SOCKET-FAMILY */;
   T1 = cl_list(2, ecl_make_fixnum(-2), ecl_symbol_value(VV[5]));
   if (Null(ecl_memql(T0,T1))) { goto L16; }
   value0 = ecl_make_fixnum(0);
   goto L14;
L16:;
   value0 = ECL_NIL;
   goto L14;
L14:;
   if ((value0)!=ECL_NIL) { goto L9; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[208])(1, v1socket) /*  SOCKET-FAMILY */;
   {
    cl_object v7;
    value0 = v4type;
    if ((value0)!=ECL_NIL) { goto L21; }
    v7 = ecl_function_dispatch(cl_env_copy,VV[209])(1, v1socket) /*  SOCKET-TYPE */;
    goto L19;
L21:;
    v7 = value0;
    goto L19;
L19:;
    if (!(ecl_eql(v7,VV[30]))) { goto L23; }
    T1 = ecl_make_int(SOCK_DGRAM);
    goto L18;
L23:;
    if (!(ecl_eql(v7,ECL_SYM("STREAM",1340)))) { goto L26; }
    T1 = ecl_make_int(SOCK_STREAM);
    goto L18;
L26:;
    T1 = si_ecase_error(v7, VV[33]);
   }
L18:;
   v6fd = L2ff_socket(T0, T1, v5proto_num);
   goto L7;
L9:;
   v6fd = value0;
   goto L7;
L7:;
   if (!(ecl_number_equalp(v6fd,ecl_make_fixnum(-1)))) { goto L29; }
   L63socket_error(VV[34]);
L29:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v6fd, v1socket, VV[27]) /*  (SETF SLOT-VALUE) */;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v5proto_num, v1socket, VV[35]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      local function SOCKET-LISTEN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15socket_listen(cl_object v1socket, cl_object v2backlog)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3r;
   T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   v3r = L3ff_listen(T0, v2backlog);
   if (!(ecl_number_equalp(v3r,ecl_make_fixnum(-1)))) { goto L2; }
   value0 = L63socket_error(VV[48]);
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SOCKET-CLOSE-LOW-LEVEL                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16socket_close_low_level(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  value0 = L4ff_close(T0);
  return value0;
 }
}
/*      local function SOCKET-CLOSE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17socket_close(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC17socket_closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  {
   cl_object v3fd;
   v3fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   if ((v3fd)==(ecl_make_fixnum(-1))) { goto L2; }
   if (Null(cl_slot_boundp(v1socket, ECL_SYM("STREAM",801)))) { goto L5; }
   {
    cl_object v4stream;
    v4stream = cl_slot_value(v1socket, ECL_SYM("STREAM",801));
    T0 = cl_two_way_stream_input_stream(v4stream);
    cl_close(3, T0, ECL_SYM("ABORT",1217), v2abort);
    T0 = cl_two_way_stream_output_stream(v4stream);
    cl_close(3, T0, ECL_SYM("ABORT",1217), v2abort);
   }
   cl_slot_makunbound(v1socket, ECL_SYM("STREAM",801));
   goto L4;
L5:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[47])(1, v1socket) /*  SOCKET-CLOSE-LOW-LEVEL */;
   if (!(ecl_number_equalp(T0,ecl_make_fixnum(-1)))) { goto L4; }
   L63socket_error(VV[49]);
L4:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, ecl_make_fixnum(-1), v1socket, VV[27]) /*  (SETF SLOT-VALUE) */;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SOCKET-RECEIVE                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18socket_receive(cl_narg narg, cl_object v1socket, cl_object v2buffer, cl_object v3length, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4oob;
  cl_object v5peek;
  cl_object v6waitall;
  cl_object v7element_type;
  ecl_va_list args; ecl_va_start(args,v3length,narg,3);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,LC18socket_receivekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v4oob = keyvars[0];
   v5peek = keyvars[1];
   v6waitall = keyvars[2];
   if (Null(keyvars[7])) {
    v7element_type = ECL_SYM("BYTE8",1358);
   } else {
    v7element_type = keyvars[3];
   }
  }
  if ((v2buffer)!=ECL_NIL) { goto L2; }
  if ((v3length)!=ECL_NIL) { goto L2; }
  cl_error(1, VV[50]);
L2:;
  {
   cl_object v8;
   cl_object v9;
   cl_object v10;
   cl_object v11;
   cl_object v12buffer;
   cl_object v13length;
   cl_object v14fd;
   cl_object v15trunc;
   value0 = v2buffer;
   if ((value0)!=ECL_NIL) { goto L7; }
   v8 = si_make_pure_array(v7element_type, v3length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   goto L5;
L7:;
   v8 = value0;
   goto L5;
L5:;
   value0 = v3length;
   if ((value0)!=ECL_NIL) { goto L11; }
   v9 = ecl_make_fixnum(ecl_length(v2buffer));
   goto L9;
L11:;
   v9 = value0;
   goto L9;
L9:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[209])(1, v1socket) /*  SOCKET-TYPE */;
   if (!(ecl_eql(T0,VV[30]))) { goto L15; }
   v11 = ECL_T;
   goto L14;
L15:;
   v11 = ECL_NIL;
L14:;
   v12buffer = v8;
   v13length = v9;
   v14fd = v10;
   v15trunc = v11;
   {
    cl_object v17;                                /*  LEN-RECV        */
    cl_object v18;                                /*  ERRNO           */
    cl_object v19;                                /*  VECTOR          */
    cl_object v20;                                /*  PORT            */
    {
     long v21;
     int v22;
     cl_object v23;
     int v24;
     
{
        int flags = ( (v4oob)!=ECL_NIL ? MSG_OOB : 0 )  |
                    ( (v5peek)!=ECL_NIL ? MSG_PEEK : 0 ) |
                    ( (v6waitall)!=ECL_NIL ? MSG_WAITALL : 0 ) |
                    ( (v15trunc)!=ECL_NIL ? MSG_TRUNC : 0 );
        cl_type type = ecl_t_of(v12buffer);
        ssize_t len;
        struct sockaddr_in sender;
        socklen_t addr_len = (socklen_t)sizeof(struct sockaddr_in);

        ecl_disable_interrupts();
        len = recvfrom(ecl_to_int(v14fd), wincoerce(char*, safe_buffer_pointer(v12buffer, ecl_to_int(v13length))),
                       ecl_to_int(v13length), flags, (struct sockaddr *)&sender, &addr_len);
        ecl_enable_interrupts();
        if (len >= 0) {
               if (type == t_vector) { v12buffer->vector.fillp = len; }
               else if (type == t_base_string) { v12buffer->base_string.fillp = len; }
        }
        v21= len;
        v22= errno;
        v23= ECL_NIL;
        v24= 0;

        if (len >= 0) {
                uint32_t ip = ntohl(sender.sin_addr.s_addr);
                uint16_t port = ntohs(sender.sin_port);
                cl_object vector = cl_make_array(1,ecl_make_fixnum(4));

                ecl_aset(vector,0, ecl_make_fixnum( ip>>24 ));
                ecl_aset(vector,1, ecl_make_fixnum( (ip>>16) & 0xFF));
                ecl_aset(vector,2, ecl_make_fixnum( (ip>>8) & 0xFF));
                ecl_aset(vector,3, ecl_make_fixnum( ip & 0xFF ));

                v23= vector;
                v24= port;
        }
}

     cl_env_copy->values[0] = ecl_make_long(v21);
     cl_env_copy->values[1] = ecl_make_int(v22);
     cl_env_copy->values[2] = v23;
     cl_env_copy->values[3] = ecl_make_int(v24);cl_env_copy->nvalues = 4;
     value0 = cl_env_copy->values[0];
    }
    {
     v17 = value0;
     v18 = cl_env_copy->values[1];
     v19 = cl_env_copy->values[2];
     v20 = cl_env_copy->values[3];
    }
    if (!(ecl_number_equalp(v17,ecl_make_fixnum(-1)))) { goto L22; }
    T0 = cl_list(2, ecl_symbol_value(VV[6]), ecl_symbol_value(VV[7]));
    if (Null(ecl_memql(v18,T0))) { goto L22; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L22:;
    if (!(ecl_number_equalp(v17,ecl_make_fixnum(-1)))) { goto L25; }
    value0 = L63socket_error(VV[51]);
    return value0;
L25:;
    cl_env_copy->nvalues = 4;
    cl_env_copy->values[3] = v20;
    cl_env_copy->values[2] = v19;
    cl_env_copy->values[1] = v17;
    cl_env_copy->values[0] = v12buffer;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function LAMBDA72                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda72()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda73,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA73                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda73(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[216])(1, v1condition) /*  UNKNOWN-PROTOCOL-NAME */;
  T1 = cl_prin1_to_string(T0);
  value0 = cl_format(3, v2stream, VV[53], T1);
  return value0;
 }
}
/*      function definition for GET-PROTOCOL-BY-NAME                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21get_protocol_by_name(cl_object v1string_or_symbol)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2string;
   int v3proto_num;
   v2string = cl_string(v1string_or_symbol);
   {
    cl_object v4;
    v4 = si_copy_to_simple_base_string(v2string);
    {
     int v5;
     {
                                 struct protoent *pe;
                                 pe = getprotobyname(ecl_base_string_pointer_safe(v4));
                                 v5= pe ? pe->p_proto : -1;
                               }
               
     v3proto_num = v5;
    }
   }
   if (!(ecl_number_equalp(ecl_make_int(v3proto_num),ecl_make_fixnum(-1)))) { goto L4; }
   value0 = cl_error(3, VV[52], ECL_SYM("NAME",1300), v2string);
   return value0;
L4:;
   value0 = ecl_make_int(v3proto_num);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-INET-ADDRESS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22make_inet_address(cl_object v1dotted_quads)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("PARSE-INTEGER",630)->symbol.gfdef);
  T1 = L7split(3, v1dotted_quads, ECL_NIL, VV[55]);
  value0 = cl_map(3, ECL_SYM("VECTOR",900), T0, T1);
  return value0;
 }
}
/*      local function LAMBDA75                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda75()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[4]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-INET-SOCKET                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24make_inet_socket(cl_object v1type, cl_object v2protocol)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(5, VV[57], ECL_SYM("TYPE",1346), v1type, VV[58], v2protocol) /*  MAKE-INSTANCE */;
  return value0;
 }
}
/*      local function SOCKET-BIND                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25socket_bind(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  {
   cl_object v3;
   T0 = ecl_list1(v2address);
   v3 = si_assert_failure(4, VV[60], VV[61], T0, VV[62]);
   v2address = v3;
  }
L3:;
  {
   cl_fixnum v3;
   v3 = ecl_length(v2address);
   if ((2)==(v3)) { goto L9; }
  }
  goto L2;
L9:;
  {
   cl_object v3;
   cl_object v4;
   cl_object v5port;
   v3 = ecl_car(v2address);
   v4 = ecl_cadr(v2address);
   v5port = v4;
   {
    int v6;
    {
     cl_object v7;
     v7 = v3;
     T1 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((0)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(0),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 0;
      T0 = ecl_aref_unsafe(T1,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T2 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((1)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(1),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 1;
      T1 = ecl_aref_unsafe(T2,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T3 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((2)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(2),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 2;
      T2 = ecl_aref_unsafe(T3,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T4 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((3)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(3),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 3;
      T3 = ecl_aref_unsafe(T4,v8);
     }
    }
    T4 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
    {
     int v7;
     
{
        struct sockaddr_in sockaddr;
        int output;
        ecl_disable_interrupts();
        fill_inet_sockaddr(&sockaddr, ecl_to_int(v5port), ecl_to_int(T0), ecl_to_int(T1), ecl_to_int(T2), ecl_to_int(T3));
        output = bind(ecl_to_int(T4),(struct sockaddr*)&sockaddr, sizeof(struct sockaddr_in));
        ecl_enable_interrupts();
        v7= output;
}
     v6 = v7;
    }
    if (!(ecl_number_equalp(ecl_make_fixnum(-1),ecl_make_int(v6)))) { goto L14; }
   }
   value0 = L63socket_error(VV[63]);
   return value0;
L14:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SOCKET-ACCEPT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26socket_accept(cl_object v1socket)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2sfd;
   v2sfd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    cl_object v4;                                 /*  FD              */
    cl_object v5;                                 /*  VECTOR          */
    cl_object v6;                                 /*  PORT            */
    {
     int v7;
     cl_object v8;
     int v9;
     {
        struct sockaddr_in sockaddr;
        socklen_t addr_len = (socklen_t)sizeof(struct sockaddr_in);
        int new_fd;

        ecl_disable_interrupts();
        new_fd = accept(ecl_to_int(v2sfd), (struct sockaddr*)&sockaddr, &addr_len);
        ecl_enable_interrupts();

        v7= new_fd;
        v8= ECL_NIL;
        v9= 0;
        if (new_fd != -1) {
                uint32_t ip = ntohl(sockaddr.sin_addr.s_addr);
                uint16_t port = ntohs(sockaddr.sin_port);
                cl_object vector = cl_make_array(1,ecl_make_fixnum(4));

                ecl_aset(vector,0, ecl_make_fixnum( ip>>24 ));
                ecl_aset(vector,1, ecl_make_fixnum( (ip>>16) & 0xFF));
                ecl_aset(vector,2, ecl_make_fixnum( (ip>>8) & 0xFF));
                ecl_aset(vector,3, ecl_make_fixnum( ip & 0xFF ));

                v8= vector;
                v9= port;
        }
}
     cl_env_copy->values[0] = ecl_make_int(v7);
     cl_env_copy->values[1] = v8;
     cl_env_copy->values[2] = ecl_make_int(v9);cl_env_copy->nvalues = 3;
     value0 = cl_env_copy->values[0];
    }
    {
     v4 = value0;
     v5 = cl_env_copy->values[1];
     v6 = cl_env_copy->values[2];
    }
    if (!(ecl_number_equalp(v4,ecl_make_fixnum(-1)))) { goto L3; }
    value0 = L63socket_error(VV[64]);
    return value0;
L3:;
    T0 = cl_class_of(v1socket);
    T1 = ecl_function_dispatch(cl_env_copy,VV[209])(1, v1socket) /*  SOCKET-TYPE */;
    T2 = ecl_function_dispatch(cl_env_copy,VV[220])(1, v1socket) /*  SOCKET-PROTOCOL */;
    T3 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(7, T0, ECL_SYM("TYPE",1346), T1, VV[58], T2, VV[65], v4) /*  MAKE-INSTANCE */;
    cl_env_copy->nvalues = 3;
    cl_env_copy->values[2] = v6;
    cl_env_copy->values[1] = v5;
    cl_env_copy->values[0] = T3;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function SOCKET-CONNECT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27socket_connect(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   cl_object v5port;
   v3 = ecl_car(v2address);
   v4 = ecl_cadr(v2address);
   v5port = v4;
   {
    int v6;
    {
     cl_object v7;
     v7 = v3;
     T1 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((0)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(0),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 0;
      T0 = ecl_aref_unsafe(T1,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T2 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((1)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(1),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 1;
      T1 = ecl_aref_unsafe(T2,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T3 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((2)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(2),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 2;
      T2 = ecl_aref_unsafe(T3,v8);
     }
    }
    {
     cl_object v7;
     v7 = v3;
     T4 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((3)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(3),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 3;
      T3 = ecl_aref_unsafe(T4,v8);
     }
    }
    T4 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
    {
     int v7;
     
{
        struct sockaddr_in sockaddr;
        int output;

        ecl_disable_interrupts();
        fill_inet_sockaddr(&sockaddr, ecl_to_int(v5port), ecl_to_int(T0), ecl_to_int(T1), ecl_to_int(T2), ecl_to_int(T3));
        output = connect(ecl_to_int(T4),(struct sockaddr*)&sockaddr, sizeof(struct sockaddr_in));
        ecl_enable_interrupts();

        v7= output;
}
     v6 = v7;
    }
    if (!(ecl_number_equalp(ecl_make_fixnum(-1),ecl_make_int(v6)))) { goto L4; }
   }
   value0 = L63socket_error(VV[66]);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SOCKET-PEERNAME                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28socket_peername(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2vector;
   cl_object v3fd;
   int v4port;
   v2vector = si_make_vector(ECL_T, ecl_make_fixnum(4), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v3fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    int v5;
    {
        struct sockaddr_in name;
        socklen_t len = sizeof(struct sockaddr_in);
        int ret;

        ecl_disable_interrupts();
        ret = getpeername(ecl_to_int(v3fd),(struct sockaddr*)&name,&len);
        ecl_enable_interrupts();

        if (ret == 0) {
                uint32_t ip = ntohl(name.sin_addr.s_addr);
                uint16_t port = ntohs(name.sin_port);

                ecl_aset(v2vector,0, ecl_make_fixnum( ip>>24 ));
                ecl_aset(v2vector,1, ecl_make_fixnum( (ip>>16) & 0xFF));
                ecl_aset(v2vector,2, ecl_make_fixnum( (ip>>8) & 0xFF));
                ecl_aset(v2vector,3, ecl_make_fixnum( ip & 0xFF ));

                v5= port;
         } else {
                v5= -1;
         }
}
    v4port = v5;
   }
   if (!(ecl_greatereq(ecl_make_int(v4port),ecl_make_fixnum(0)))) { goto L4; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ecl_make_int(v4port);
   cl_env_copy->values[0] = v2vector;
   return cl_env_copy->values[0];
L4:;
   value0 = L63socket_error(VV[67]);
   return value0;
  }
 }
}
/*      local function SOCKET-NAME                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29socket_name(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2vector;
   cl_object v3fd;
   int v4port;
   v2vector = si_make_vector(ECL_T, ecl_make_fixnum(4), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v3fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    int v5;
    {
        struct sockaddr_in name;
        socklen_t len = sizeof(struct sockaddr_in);
        int ret;

        ecl_disable_interrupts();
        ret = getsockname(ecl_to_int(v3fd),(struct sockaddr*)&name,&len);
        ecl_enable_interrupts();

        if (ret == 0) {
                uint32_t ip = ntohl(name.sin_addr.s_addr);
                uint16_t port = ntohs(name.sin_port);

                ecl_aset(v2vector,0, ecl_make_fixnum( ip>>24 ));
                ecl_aset(v2vector,1, ecl_make_fixnum( (ip>>16) & 0xFF));
                ecl_aset(v2vector,2, ecl_make_fixnum( (ip>>8) & 0xFF));
                ecl_aset(v2vector,3, ecl_make_fixnum( ip & 0xFF ));

                v5= port;
         } else {
                v5= -1;
         }
}
    v4port = v5;
   }
   if (!(ecl_greatereq(ecl_make_int(v4port),ecl_make_fixnum(0)))) { goto L4; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ecl_make_int(v4port);
   cl_env_copy->values[0] = v2vector;
   return cl_env_copy->values[0];
L4:;
   value0 = L63socket_error(VV[68]);
   return value0;
  }
 }
}
/*      local function SOCKET-CLOSE-LOW-LEVEL                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30socket_close_low_level(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  value0 = L5ff_closesocket(T0);
  return value0;
 }
}
/*      local function SOCKET-SEND                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31socket_send(cl_narg narg, cl_object v1socket, cl_object v2buffer, cl_object v3length, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4address;
  cl_object v5external_format;
  cl_object v6oob;
  cl_object v7eor;
  cl_object v8dontroute;
  cl_object v9dontwait;
  cl_object v10nosignal;
  cl_object v11confirm;
  cl_object v12more;
  ecl_va_list args; ecl_va_start(args,v3length,narg,3);
  {
   cl_object keyvars[18];
   cl_parse_key(args,9,LC31socket_sendkeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v4address = keyvars[0];
   v5external_format = keyvars[1];
   v6oob = keyvars[2];
   v7eor = keyvars[3];
   v8dontroute = keyvars[4];
   v9dontwait = keyvars[5];
   v10nosignal = keyvars[6];
   v11confirm = keyvars[7];
   v12more = keyvars[8];
  }
  goto L3;
L2:;
  si_assert_failure(1, VV[69]);
L3:;
  if (ECL_STRINGP(v2buffer)) { goto L6; }
  if (ECL_VECTORP(v2buffer)) { goto L6; }
  goto L2;
L6:;
  {
   cl_object v13;
   cl_object v14;
   cl_object v15length;
   cl_object v16fd;
   value0 = v3length;
   if ((value0)!=ECL_NIL) { goto L11; }
   v13 = ecl_make_fixnum(ecl_length(v2buffer));
   goto L9;
L11:;
   v13 = value0;
   goto L9;
L9:;
   v14 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   v15length = v13;
   v16fd = v14;
   {
    int v17len_sent;
    if (Null(v4address)) { goto L17; }
    goto L21;
L20:;
    si_assert_failure(1, VV[60]);
L21:;
    {
     cl_fixnum v18;
     v18 = ecl_length(v4address);
     if ((2)==(v18)) { goto L24; }
    }
    goto L20;
L24:;
    T0 = ecl_cadr(v4address);
    {
     cl_object v18;
     v18 = ecl_car(v4address);
     T2 = v18;
     {
      cl_fixnum v19;
      if (ecl_unlikely((0)>=(v18)->vector.dim))
           FEwrong_index(ECL_NIL,v18,-1,ecl_make_fixnum(0),(v18)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = 0;
      T1 = ecl_aref_unsafe(T2,v19);
     }
    }
    {
     cl_object v18;
     v18 = ecl_car(v4address);
     T3 = v18;
     {
      cl_fixnum v19;
      if (ecl_unlikely((1)>=(v18)->vector.dim))
           FEwrong_index(ECL_NIL,v18,-1,ecl_make_fixnum(1),(v18)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = 1;
      T2 = ecl_aref_unsafe(T3,v19);
     }
    }
    {
     cl_object v18;
     v18 = ecl_car(v4address);
     T4 = v18;
     {
      cl_fixnum v19;
      if (ecl_unlikely((2)>=(v18)->vector.dim))
           FEwrong_index(ECL_NIL,v18,-1,ecl_make_fixnum(2),(v18)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = 2;
      T3 = ecl_aref_unsafe(T4,v19);
     }
    }
    {
     cl_object v18;
     v18 = ecl_car(v4address);
     T5 = v18;
     {
      cl_fixnum v19;
      if (ecl_unlikely((3)>=(v18)->vector.dim))
           FEwrong_index(ECL_NIL,v18,-1,ecl_make_fixnum(3),(v18)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = 3;
      T4 = ecl_aref_unsafe(T5,v19);
     }
    }
    {
     long v18;
     
{
        int sock = ecl_to_int(v16fd);
        int length = ecl_to_int(v15length);
        void *buffer = safe_buffer_pointer(v2buffer, length);
        int flags = ( (v6oob)!=ECL_NIL ? MSG_OOB : 0 )  |
                    ( (v7eor)!=ECL_NIL ? MSG_EOR : 0 ) |
                    ( (v8dontroute)!=ECL_NIL ? MSG_DONTROUTE : 0 ) |
                    ( (v9dontwait)!=ECL_NIL ? MSG_DONTWAIT : 0 ) |
                    ( (v10nosignal)!=ECL_NIL ? MSG_NOSIGNAL : 0 ) |
                    ( (v11confirm)!=ECL_NIL ? MSG_CONFIRM : 0 );
        cl_type type = ecl_t_of(v2buffer);
        struct sockaddr_in sockaddr;
        ssize_t len;

        ecl_disable_interrupts();
        fill_inet_sockaddr(&sockaddr, ecl_to_int(T0), ecl_to_int(T1), ecl_to_int(T2), ecl_to_int(T3), ecl_to_int(T4));
#if (MSG_NOSIGNAL == 0) && defined(SO_NOSIGPIPE)
        {
                int sockopt = (v10nosignal)!=ECL_NIL;
                setsockopt(ecl_to_int(v16fd),SOL_SOCKET,SO_NOSIGPIPE,
                           wincoerce(char *,&sockopt),
                           sizeof(int));
        }
#endif
        len = sendto(sock, wincoerce(char *,buffer),
                     length, flags,(struct sockaddr*)&sockaddr, 
                     sizeof(struct sockaddr_in));
        ecl_enable_interrupts();
        v18= len;
}

     v17len_sent = (int)(v18);
     goto L16;
    }
L17:;
    {
     long v19;
     
{
        int sock = ecl_to_int(v16fd);
        int length = ecl_to_int(v15length);
        void *buffer = safe_buffer_pointer(v2buffer, length);
        int flags = ( (v6oob)!=ECL_NIL ? MSG_OOB : 0 )  |
                    ( (v7eor)!=ECL_NIL ? MSG_EOR : 0 ) |
                    ( (v8dontroute)!=ECL_NIL ? MSG_DONTROUTE : 0 ) |
                    ( (v9dontwait)!=ECL_NIL ? MSG_DONTWAIT : 0 ) |
                    ( (v10nosignal)!=ECL_NIL ? MSG_NOSIGNAL : 0 ) |
                    ( (v11confirm)!=ECL_NIL ? MSG_CONFIRM : 0 );
        cl_type type = ecl_t_of(v2buffer);
        ssize_t len;
        ecl_disable_interrupts();
#if (MSG_NOSIGNAL == 0) && defined(SO_NOSIGPIPE)
        {
                int sockopt = (v10nosignal)!=ECL_NIL;
                setsockopt(ecl_to_int(v16fd),SOL_SOCKET,SO_NOSIGPIPE,
                           wincoerce(char *,&sockopt),
                           sizeof(int));
        }
#endif
        len = send(sock, wincoerce(char *, buffer), length, flags);
        ecl_enable_interrupts();
        v19= len;
}

     v17len_sent = (int)(v19);
    }
L16:;
    if (!(ecl_number_equalp(ecl_make_int(v17len_sent),ecl_make_fixnum(-1)))) { goto L46; }
    value0 = L63socket_error(VV[70]);
    return value0;
L46:;
    value0 = ecl_make_int(v17len_sent);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA91                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32__lambda91()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[5]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function INITIALIZE-INSTANCE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33initialize_instance(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v2;
   T0 = cl_slot_value(v1socket, VV[35]);
   T1 = cl_slot_value(v1socket, ECL_SYM("TYPE",871));
   v2 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(5, VV[57], VV[58], T0, ECL_SYM("TYPE",1346), T1) /*  MAKE-INSTANCE */;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v2, v1socket, VV[72]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      local function SOCKET-BIND                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35socket_bind(volatile cl_narg narg, cl_object volatile v1socket, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  {
   cl_object v3;
   T0 = ecl_list1(v2address);
   v3 = si_assert_failure(4, VV[73], VV[61], T0, VV[74]);
   v2address = v3;
  }
L3:;
  {
   cl_fixnum v3;
   v3 = ecl_length(v2address);
   if ((1)==(v3)) { goto L9; }
  }
  goto L2;
L9:;
  T0 = cl_slot_value(v1socket, VV[72]);
  ecl_function_dispatch(cl_env_copy,VV[36])(3, T0, VV[75], ecl_make_fixnum(0)) /*  SOCKET-BIND */;
  {
   cl_object volatile v4;                         /*  PORT            */
   T0 = cl_slot_value(v1socket, VV[72]);
   value0 = ecl_function_dispatch(cl_env_copy,VV[39])(1, T0) /*  SOCKET-PEERNAME */;
   {
    const int v5 = cl_env_copy->nvalues;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   env0 = ECL_NIL;
   CLV0 = env0 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env0); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV0));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L14;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object volatile v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC34__lambda143,env0,Cblock,1);
    T0 = v5;
   }
   T1 = CONS(ECL_SYM("FILE-ERROR",355),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   {
    volatile cl_object v5fd;
    T0 = ecl_car(v2address);
    v5fd = cl_open(7, T0, ECL_SYM("IF-EXISTS",1270), ECL_SYM("ERROR",1251), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309));
    {
     volatile bool unwinding = FALSE;
     cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     {
      struct ecl_stack_frame _ecl_inner_frame_aux;
      volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
      {
       cl_object v8;
       v8 = _ecl_inner_frame;
       cl_env_copy->values[0] = cl_format(3, v5fd, VV[76], v4);
       ecl_stack_frame_push_values(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       if (Null(v5fd)) { goto L23; }
       cl_close(1, v5fd);
L23:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v8);
      }
      ecl_stack_frame_close(_ecl_inner_frame);
     }
     }
     ecl_frs_pop(cl_env_copy);
     v7=ecl_stack_push_values(cl_env_copy);
     if (Null(v5fd)) { goto L25; }
     cl_close(3, v5fd, ECL_SYM("ABORT",1217), ECL_T);
L25:;
     ecl_stack_pop_values(cl_env_copy,v7);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     ecl_frs_pop(cl_env_copy);
     ECL_STACK_SET_INDEX(cl_env_copy,v6);
     ecl_bds_unwind1(cl_env_copy);
     goto L13;
    }
   }
L14:;
   T0 = cl_slot_value(v1socket, VV[72]);
   ecl_function_dispatch(cl_env_copy,VV[44])(1, T0) /*  SOCKET-CLOSE  */;
   WSASetLastError(WSAEADDRINUSE);
   L63socket_error(VV[77]);
   ecl_frs_pop(cl_env_copy);
   goto L13;
L13:;
   {
    cl_object v5;
    v5 = ecl_car(v2address);
    (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v5, v1socket, VV[78]) /*  (SETF SLOT-VALUE) */;
   }
   value0 = v1socket;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SOCKET-ACCEPT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36socket_accept(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_slot_value(v1socket, VV[72]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[37])(1, T0) /*  SOCKET-ACCEPT */;
  {
  }
  T0 = cl_slot_value(v1socket, VV[78]);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T0;
  cl_env_copy->values[0] = v1socket;
  return cl_env_copy->values[0];
 }
}
/*      local function SOCKET-CONNECT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38socket_connect(volatile cl_narg narg, cl_object volatile v1socket, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  {
   cl_object v3;
   T0 = ecl_list1(v2address);
   v3 = si_assert_failure(4, VV[73], VV[61], T0, VV[79]);
   v2address = v3;
  }
L3:;
  {
   cl_fixnum v3;
   v3 = ecl_length(v2address);
   if ((1)==(v3)) { goto L9; }
  }
  goto L2;
L9:;
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env0); /*  TAGBODY */
  {
   ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV0));
   if (__ecl_frs_push_result) {
   if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L11;
   ecl_internal_error("GO found an inexistent tag");
   }
  }
  {
   cl_object volatile v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC37__lambda179,env0,Cblock,1);
   T0 = v3;
  }
  T1 = CONS(ECL_SYM("FILE-ERROR",355),T0);
  T2 = ecl_list1(T1);
  T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
  ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
  {
   volatile cl_object v3fd;
   T0 = ecl_car(v2address);
   v3fd = cl_open(5, T0, ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("ERROR",1251), ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280));
   {
    volatile bool unwinding = FALSE;
    cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v6;
      v6 = _ecl_inner_frame;
      {
       cl_object v7;
       cl_object v8port;
       v7 = cl_make_string(1, ecl_make_fixnum(128));
       v8port = ECL_NIL;
       cl_read_sequence(2, v7, v3fd);
       T0 = cl_subseq(3, v7, ecl_make_fixnum(0), ecl_make_fixnum(10));
       if (Null(cl_string_equal(2, VV[80], T0))) { goto L26; }
       {
        cl_object v9;
        cl_fixnum v10;
        T0 = cl_subseq(2, v7, ecl_make_fixnum(10));
        v8port = cl_read_from_string(3, T0, ECL_NIL, VV[81]);
        v9 = v8port;
        v10 = 0;
        if (!(ECL_FIXNUMP(v9))) { goto L32; }
        v10 = ecl_fixnum(v9);
        if (!((v10)<=(65535))) { goto L37; }
        if ((v10)>=(0)) { goto L23; }
        goto L24;
L37:;
        goto L24;
L32:;
        goto L24;
       }
L26:;
       goto L24;
L24:;
       WSASetLastError(WSAEFAULT);
       L63socket_error(VV[66]);
L23:;
       {
        cl_object v9;
        T0 = cl_slot_value(v1socket, VV[72]);
        v9 = ecl_function_dispatch(cl_env_copy,VV[38])(3, T0, VV[82], v8port) /*  SOCKET-CONNECT */;
        {
         cl_object v10;
         v10 = ecl_car(v2address);
         (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v10, v1socket, VV[78]) /*  (SETF SLOT-VALUE) */;
        }
        cl_env_copy->values[0] = v9;
        cl_env_copy->nvalues = 1;
       }
      }
      ecl_stack_frame_push_values(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v3fd)) { goto L43; }
      cl_close(1, v3fd);
L43:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v5=ecl_stack_push_values(cl_env_copy);
    if (Null(v3fd)) { goto L45; }
    cl_close(3, v3fd, ECL_SYM("ABORT",1217), ECL_T);
L45:;
    ecl_stack_pop_values(cl_env_copy,v5);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    ECL_STACK_SET_INDEX(cl_env_copy,v4);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
  }
L11:;
  value0 = L63socket_error(VV[66]);
  ecl_frs_pop(cl_env_copy);
  return value0;
 }
}
/*      local function SOCKET-PEERNAME                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39socket_peername(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_slot_boundp(v1socket, VV[78]))!=ECL_NIL) { goto L1; }
  WSASetLastError(WSAENOTCONN);
  L63socket_error(VV[83]);
L1:;
  value0 = cl_slot_value(v1socket, VV[78]);
  return value0;
 }
}
/*      local function SOCKET-CLOSE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40socket_close(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC40socket_closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  T0 = cl_slot_value(v1socket, VV[72]);
  ecl_function_dispatch(cl_env_copy,VV[44])(3, T0, ECL_SYM("ABORT",1217), v2abort) /*  SOCKET-CLOSE */;
  value0 = cl_slot_makunbound(v1socket, VV[78]);
  return value0;
 }
}
/*      local function SOCKET-MAKE-STREAM                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41socket_make_stream(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[45]);
  T1 = cl_slot_value(v1socket, VV[72]);
  T2 = CONS(T1,v2args);
  value0 = cl_apply(2, T0, T2);
  return value0;
 }
}
/*      local function NON-BLOCKING-MODE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42non_blocking_mode(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_slot_value(v1socket, VV[72]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  NON-BLOCKING-MODE */;
  return value0;
 }
}
/*      local function (SETF NON-BLOCKING-MODE)                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43_setf_non_blocking_mode_(cl_object v1non_blocking_p, cl_object v2socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = cl_slot_value(v2socket, VV[72]);
   value0 = (cl_env_copy->function=ecl_fdefinition(VV[230]))->cfun.entry(2, v1non_blocking_p, v3) /*  (SETF NON-BLOCKING-MODE) */;
   return value0;
  }
 }
}
/*      closure LAMBDA143                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda143(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  TAGBODY         */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  cl_go(ECL_CONS_CAR(CLV0),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA179                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37__lambda179(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  TAGBODY         */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  cl_go(ECL_CONS_CAR(CLV0),ecl_make_fixnum(0));
 }
 }
}
/*      local function SOCKET-BIND                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44socket_bind(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  {
   cl_object v3;
   T0 = ecl_list1(v2address);
   v3 = si_assert_failure(4, VV[73], VV[61], T0, VV[74]);
   v2address = v3;
  }
L3:;
  {
   cl_fixnum v3;
   v3 = ecl_length(v2address);
   if ((1)==(v3)) { goto L9; }
  }
  goto L2;
L9:;
  {
   cl_object v3pipe_name;
   int v4hnd;
   T0 = ecl_car(v2address);
   v3pipe_name = cl_concatenate(3, ECL_SYM("STRING",807), VV[85], T0);
   {
    cl_object v5;
    v5 = si_copy_to_simple_base_string(v3pipe_name);
    {
     int v6;
     
{
        HANDLE hnd;
        ecl_disable_interrupts();
        hnd = CreateNamedPipe(
                        ecl_base_string_pointer_safe(v5),
                        PIPE_ACCESS_DUPLEX,
                        PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        4096,
                        4096,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
        ecl_enable_interrupts();
        if (hnd == INVALID_HANDLE_VALUE)
                v6= -1;
        else
                v6= _open_osfhandle((intptr_t)hnd, O_RDWR);
}
     v4hnd = v6;
    }
   }
   if (!(ecl_number_equalp(ecl_make_int(v4hnd),ecl_make_fixnum(-1)))) { goto L14; }
   L63socket_error(VV[86]);
L14:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v3pipe_name, v1socket, VV[87]) /*  (SETF SLOT-VALUE) */;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, ecl_make_int(v4hnd), v1socket, VV[27]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      local function SOCKET-ACCEPT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45socket_accept(cl_object v1socket)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2fd;
   int v3afd;
   v2fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    int v4;
    
{
        HANDLE hnd = (HANDLE)_get_osfhandle(ecl_to_int(v2fd)), dupHnd;
        ecl_disable_interrupts();
        if (ConnectNamedPipe(hnd, NULL) != 0 || GetLastError() == ERROR_PIPE_CONNECTED) {
                v4= ecl_to_int(v2fd);
        } else
                v4= -1;
        ecl_enable_interrupts();
}
    v3afd = v4;
   }
   if (!(ecl_number_equalp(ecl_make_int(v3afd),ecl_make_fixnum(-1)))) { goto L3; }
   value0 = L63socket_error(VV[64]);
   return value0;
L3:;
   T0 = cl_slot_value(v1socket, VV[87]);
   T1 = cl_subseq(2, T0, ecl_make_fixnum(9));
   ecl_function_dispatch(cl_env_copy,VV[36])(2, v1socket, T1) /*  SOCKET-BIND */;
   T0 = cl_class_of(v1socket);
   T1 = ecl_function_dispatch(cl_env_copy,VV[209])(1, v1socket) /*  SOCKET-TYPE */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[220])(1, v1socket) /*  SOCKET-PROTOCOL */;
   T3 = cl_slot_value(v1socket, VV[87]);
   T4 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(9, T0, ECL_SYM("TYPE",1346), T1, VV[58], T2, VV[65], ecl_make_int(v3afd), VV[88], T3) /*  MAKE-INSTANCE */;
   T5 = cl_slot_value(v1socket, VV[87]);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T5;
   cl_env_copy->values[0] = T4;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function SOCKET-CONNECT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46socket_connect(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2address;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  v2address = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  {
   cl_object v3;
   T0 = ecl_list1(v2address);
   v3 = si_assert_failure(4, VV[73], VV[61], T0, VV[79]);
   v2address = v3;
  }
L3:;
  {
   cl_fixnum v3;
   v3 = ecl_length(v2address);
   if ((1)==(v3)) { goto L9; }
  }
  goto L2;
L9:;
  {
   cl_object v3path;
   cl_object v4pipe_name;
   v3path = ecl_car(v2address);
   v4pipe_name = cl_concatenate(3, ECL_SYM("STRING",807), VV[85], v3path);
   {
    int v5;
    {
     cl_object v6;
     v6 = si_copy_to_simple_base_string(v4pipe_name);
     {
      int v7;
      
{
        HANDLE hnd;
        ecl_disable_interrupts();
        hnd = CreateFile(
                        ecl_base_string_pointer_safe(v6),
                        GENERIC_READ | GENERIC_WRITE,
                        0,
                        NULL,
                        OPEN_EXISTING,
                        0,
                        NULL);
        if (hnd == INVALID_HANDLE_VALUE)
                v7= -1;
        else
                v7= _open_osfhandle((intptr_t)hnd, O_RDWR);
        ecl_enable_interrupts();
}
      v5 = v7;
     }
    }
    T0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, ecl_make_int(v5), v1socket, VV[27]) /*  (SETF SLOT-VALUE) */;
   }
   if (!(ecl_number_equalp(ecl_make_fixnum(-1),T0))) { goto L13; }
   value0 = L63socket_error(VV[66]);
   return value0;
L13:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v4pipe_name, v1socket, VV[87]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      local function SOCKET-PEERNAME                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47socket_peername(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_slot_value(v1socket, VV[87]);
  return value0;
 }
}
/*      local function (SETF NON-BLOCKING-MODE)                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48_setf_non_blocking_mode_(cl_object v1non_blocking_p, cl_object v2socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3fd;
   v3fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    int v4;
    {
     int v5;
     
{
        DWORD mode = PIPE_READMODE_BYTE | (v1non_blocking_p == ECL_T ? PIPE_NOWAIT : PIPE_WAIT);
        HANDLE h = (HANDLE)_get_osfhandle(ecl_to_int(v3fd));
        ecl_disable_interrupts();
        v5= SetNamedPipeHandleState(h, &mode, NULL, NULL);
        ecl_enable_interrupts();
}
     v4 = v5;
    }
    if (!(ecl_number_equalp(ecl_make_fixnum(0),ecl_make_int(v4)))) { goto L2; }
   }
   value0 = L63socket_error(VV[89]);
   return value0;
L2:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v1non_blocking_p, v2socket, VV[90]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      local function SOCKET-CLOSE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49socket_close(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2abort;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC49socket_closekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2abort = keyvars[0];
  }
  {
   cl_object v3fd;
   v3fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   {
    cl_object v4;
    
{
        DWORD flags;
        HANDLE h = (HANDLE)_get_osfhandle(ecl_to_int(v3fd));
        ecl_disable_interrupts();
        if (!GetNamedPipeInfo(h, &flags, NULL, NULL, NULL))
                v4= ECL_NIL;
        if (flags == PIPE_CLIENT_END || DisconnectNamedPipe(h))
                v4= ECL_T;
        else
                v4= ECL_NIL;
        ecl_enable_interrupts();
}
    if ((v4)!=ECL_NIL) { goto L2; }
   }
   L63socket_error(VV[91]);
L2:;
   if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L4; }
   T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   value0 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
   return value0;
L4:;
   value0 = cl_error(1, VV[92]);
   return value0;
  }
 }
}
/*      local function NON-BLOCKING-MODE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50non_blocking_mode(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_slot_value(v1socket, VV[90]);
  return value0;
 }
}
/*      local function (SETF NON-BLOCKING-MODE)                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51_setf_non_blocking_mode_(cl_object v1non_blocking_p, cl_object v2socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_fixnum v4;
   cl_object v5fd;
   cl_object v6nblock;
   v3 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
   if (Null(v1non_blocking_p)) { goto L3; }
   v4 = 1;
   goto L2;
L3:;
   v4 = 0;
L2:;
   v5fd = v3;
   v6nblock = ecl_make_fixnum(v4);
   {
    int v7;
    {
     int v8;
     
{
        int blocking_flag = (ecl_to_int(v6nblock) ? 1 : 0);
        ecl_disable_interrupts();
        v8= ioctlsocket(ecl_to_int(v5fd), FIONBIO, (u_long*)&blocking_flag);
        ecl_enable_interrupts();
}
     v7 = v8;
    }
    if (!(ecl_number_equalp(ecl_make_fixnum(-1),ecl_make_int(v7)))) { goto L7; }
   }
   value0 = L63socket_error(VV[93]);
   return value0;
L7:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v1non_blocking_p, v2socket, VV[90]) /*  (SETF SLOT-VALUE) */;
   return value0;
  }
 }
}
/*      function definition for DUP                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L52dup(cl_object v1fd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_int(dup(ecl_to_int(v1fd)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for AUTO-CLOSE-TWO-WAY-STREAM             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L53auto_close_two_way_stream(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  (v1stream)->stream.flags |= ECL_STREAM_CLOSE_COMPONENTS;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for SOCKET-MAKE-STREAM-INNER              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L54socket_make_stream_inner(cl_object v1fd, cl_object v2input, cl_object v3output, cl_object v4buffering, cl_object v5element_type, cl_object v6external_format)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v2input)) { goto L1; }
  if (Null(v3output)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(8, v1fd, VV[95], VV[96], v4buffering, ECL_SYM("ELEMENT-TYPE",1246), v5element_type, ECL_SYM("EXTERNAL-FORMAT",1258), v6external_format) /*  MAKE-STREAM-FROM-FD */;
  return value0;
L1:;
  if (Null(v2input)) { goto L4; }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(8, v1fd, VV[97], VV[96], v4buffering, ECL_SYM("ELEMENT-TYPE",1246), v5element_type, ECL_SYM("EXTERNAL-FORMAT",1258), v6external_format) /*  MAKE-STREAM-FROM-FD */;
  return value0;
L4:;
  if (Null(v3output)) { goto L6; }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(8, v1fd, VV[98], VV[96], v4buffering, ECL_SYM("ELEMENT-TYPE",1246), v5element_type, ECL_SYM("EXTERNAL-FORMAT",1258), v6external_format) /*  MAKE-STREAM-FROM-FD */;
  return value0;
L6:;
  value0 = cl_error(1, VV[99]);
  return value0;
 }
}
/*      local function SOCKET-MAKE-STREAM                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55socket_make_stream(cl_narg narg, cl_object v1socket, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2input;
  cl_object v3input_p;
  cl_object v4output;
  cl_object v5output_p;
  cl_object v6buffering;
  cl_object v7element_type;
  cl_object v8external_format;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  {
   cl_object keyvars[10];
   cl_parse_key(args,5,LC55socket_make_streamkeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2input = keyvars[0];
   v3input_p = keyvars[5];
   v4output = keyvars[1];
   v5output_p = keyvars[6];
   if (Null(keyvars[7])) {
    v6buffering = ECL_SYM("FULL",1662);
   } else {
    v6buffering = keyvars[2];
   }
   if (Null(keyvars[8])) {
    v7element_type = ECL_SYM("BASE-CHAR",122);
   } else {
    v7element_type = keyvars[3];
   }
   if (Null(keyvars[9])) {
    v8external_format = ECL_SYM("DEFAULT",1237);
   } else {
    v8external_format = keyvars[4];
   }
  }
  {
   cl_object v9stream;
   if (Null(cl_slot_boundp(v1socket, ECL_SYM("STREAM",801)))) { goto L6; }
   v9stream = cl_slot_value(v1socket, ECL_SYM("STREAM",801));
   goto L4;
L6:;
   v9stream = ECL_NIL;
   goto L4;
L4:;
   if ((v9stream)!=ECL_NIL) { goto L8; }
   if ((v3input_p)!=ECL_NIL) { goto L10; }
   if ((v5output_p)!=ECL_NIL) { goto L10; }
   v2input = ECL_T;
   v4output = ECL_T;
L10:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
   v9stream = L54socket_make_stream_inner(T0, v2input, v4output, v6buffering, v7element_type, v8external_format);
   (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v9stream, v1socket, ECL_SYM("STREAM",801)) /*  (SETF SLOT-VALUE) */;
L8:;
   value0 = v9stream;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function STREAM-FD                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56ext__stream_fd(cl_object v1socket)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  return value0;
 }
}
/*      local function SOCKET-MAKE-STREAM                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57socket_make_stream(cl_narg narg, cl_object v1socket, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2input;
  cl_object v3output;
  cl_object v4buffering;
  cl_object v5external_format;
  ecl_va_list args; ecl_va_start(args,v1socket,narg,1);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,LC57socket_make_streamkeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2input = keyvars[0];
   v3output = keyvars[1];
   if (Null(keyvars[6])) {
    v4buffering = ECL_SYM("FULL",1662);
   } else {
    v4buffering = keyvars[2];
   }
   if (Null(keyvars[7])) {
    v5external_format = ECL_SYM("DEFAULT",1237);
   } else {
    v5external_format = keyvars[3];
   }
  }
  {
   cl_object v6stream;
   if (Null(cl_slot_boundp(v1socket, ECL_SYM("STREAM",801)))) { goto L5; }
   v6stream = cl_slot_value(v1socket, ECL_SYM("STREAM",801));
   goto L3;
L5:;
   v6stream = ECL_NIL;
   goto L3;
L3:;
   if ((v6stream)!=ECL_NIL) { goto L7; }
   {
    cl_object v7fd;
    cl_object v8in;
    cl_object v9out;
    v7fd = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
    v8in = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(4, v7fd, VV[102], v4buffering, v5external_format) /*  MAKE-STREAM-FROM-FD */;
    v9out = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(4, v7fd, VV[103], v4buffering, v5external_format) /*  MAKE-STREAM-FROM-FD */;
    v6stream = cl_make_two_way_stream(v8in, v9out);
   }
   (cl_env_copy->function=ECL_CONS_CAR(VV[210]))->cfun.entry(3, v6stream, v1socket, ECL_SYM("STREAM",801)) /*  (SETF SLOT-VALUE) */;
L7:;
   value0 = v6stream;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for GET-WIN32-ERROR-STRING                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L58get_win32_error_string(cl_object v1num)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   {char *lpMsgBuf;
          cl_object msg;
          ecl_disable_interrupts();
          FormatMessage(
            FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
            NULL,
            ecl_to_int(v1num),
            0,
            (LPTSTR)&lpMsgBuf,
            0,
            NULL);
          msg = ecl_make_simple_base_string(lpMsgBuf,-1);
          LocalFree(lpMsgBuf);
          ecl_enable_interrupts();
          v2= msg;}
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA295                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC60__lambda295()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC59__lambda296,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA296                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC59__lambda296(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3num;
   v3num = ecl_function_dispatch(cl_env_copy,VV[243])(1, v1c) /*  SOCKET-ERROR-ERRNO */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[244])(1, v1c) /*  SOCKET-ERROR-SYSCALL */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[109])(1, v1c) /*  SOCKET-ERROR-SYMBOL */;
   if ((value0)!=ECL_NIL) { goto L4; }
   T1 = ecl_function_dispatch(cl_env_copy,VV[243])(1, v1c) /*  SOCKET-ERROR-ERRNO */;
   goto L2;
L4:;
   T1 = value0;
   goto L2;
L2:;
   T2 = L58get_win32_error_string(v3num);
   value0 = cl_format(5, v2s, VV[106], T0, T1, T2);
   return value0;
  }
 }
}
/*      local function DEFINE-SOCKET-CONDITION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC61define_socket_condition(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4symbol;
   cl_object v5name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbol = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5name = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[247])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = ecl_symbol_name(v4symbol);
   T1 = cl_list(2, VV[107], T0);
   T2 = cl_list(3, ECL_SYM("DEFCONSTANT",279), v4symbol, T1);
   T3 = cl_list(2, ECL_SYM("QUOTE",681), v4symbol);
   T4 = cl_list(5, ECL_SYM("SYMBOL",842), ECL_SYM("READER",1008), VV[109], ECL_SYM("INITFORM",998), T3);
   T5 = ecl_list1(T4);
   T6 = cl_list(4, ECL_SYM("DEFINE-CONDITION",280), v5name, VV[108], T5);
   T7 = cl_list(2, ECL_SYM("QUOTE",681), v5name);
   T8 = cl_list(2, ECL_SYM("EXPORT",346), T7);
   T9 = cl_list(2, ECL_SYM("QUOTE",681), v5name);
   T10 = cl_list(3, ECL_SYM("CONS",253), v4symbol, T9);
   T11 = cl_list(3, ECL_SYM("PUSH",679), T10, VV[110]);
   value0 = cl_list(6, ECL_SYM("LET",479), ECL_NIL, T2, T6, T8, T11);
   return value0;
  }
 }
}
/*      function definition for CONDITION-FOR-ERRNO                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L62condition_for_errno(cl_object v1err)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_assql(v1err,ecl_symbol_value(VV[110]));
  value0 = ecl_cdr(T0);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = VV[105];
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SOCKET-ERROR                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L63socket_error(cl_object v1where)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   int v2errno;
   cl_object v3condition;
   v2errno = WSAGetLastError();
   v3condition = L62condition_for_errno(ecl_make_int(v2errno));
   value0 = cl_error(5, v3condition, VV[140], ecl_make_int(v2errno), VV[141], v1where);
   return value0;
  }
 }
}
/*      function definition for NAME-SERVICE-ERROR                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L64name_service_error(cl_narg narg, cl_object v1where, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2errno;
  va_list args; va_start(args,v1where);
  {
   int i = 1;
   if (i >= narg) {
    v2errno = ecl_make_int(WSAGetLastError());
   } else {
    i++;
    v2errno = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   int v3;
   v3 = EAI_SYSTEM;
   if (!(ecl_number_equalp(v2errno,ecl_make_int(v3)))) { goto L2; }
  }
  value0 = L63socket_error(v1where);
  return value0;
L2:;
  {
   cl_object v3condition;
   v3condition = L68condition_for_name_service_errno(v2errno);
   value0 = cl_error(5, v3condition, VV[140], v2errno, VV[141], v1where);
   return value0;
  }
 }
}
/*      local function LAMBDA319                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC66__lambda319()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC65__lambda320,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA320                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65__lambda320(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3num;
   v3num = ecl_function_dispatch(cl_env_copy,VV[251])(1, v1c) /*  NAME-SERVICE-ERROR-ERRNO */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v1c) /*  NAME-SERVICE-ERROR-SYSCALL */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[145])(1, v1c) /*  NAME-SERVICE-ERROR-SYMBOL */;
   if ((value0)!=ECL_NIL) { goto L4; }
   T1 = ecl_function_dispatch(cl_env_copy,VV[251])(1, v1c) /*  NAME-SERVICE-ERROR-ERRNO */;
   goto L2;
L4:;
   T1 = value0;
   goto L2;
L2:;
   T2 = L69get_name_service_error_message(v3num);
   value0 = cl_format(5, v2s, VV[143], T0, T1, T2);
   return value0;
  }
 }
}
/*      local function DEFINE-NAME-SERVICE-CONDITION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67define_name_service_condition(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4symbol;
   cl_object v5name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbol = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5name = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[247])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = ecl_symbol_name(v4symbol);
   T1 = cl_list(2, VV[107], T0);
   T2 = cl_list(3, ECL_SYM("DEFCONSTANT",279), v4symbol, T1);
   T3 = cl_list(2, ECL_SYM("QUOTE",681), v4symbol);
   T4 = cl_list(5, ECL_SYM("SYMBOL",842), ECL_SYM("READER",1008), VV[145], ECL_SYM("INITFORM",998), T3);
   T5 = ecl_list1(T4);
   T6 = cl_list(4, ECL_SYM("DEFINE-CONDITION",280), v5name, VV[144], T5);
   T7 = cl_list(2, ECL_SYM("QUOTE",681), v5name);
   T8 = cl_list(3, ECL_SYM("CONS",253), v4symbol, T7);
   T9 = cl_list(3, ECL_SYM("PUSH",679), T8, VV[146]);
   T10 = cl_list(2, ECL_SYM("QUOTE",681), v4symbol);
   T11 = cl_list(2, ECL_SYM("EXPORT",346), T10);
   value0 = cl_list(6, ECL_SYM("LET",479), ECL_NIL, T2, T6, T9, T11);
   return value0;
  }
 }
}
/*      function definition for CONDITION-FOR-NAME-SERVICE-ERRNO      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L68condition_for_name_service_errno(cl_object v1err)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_assql(v1err,ecl_symbol_value(VV[146]));
  value0 = ecl_cdr(T0);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = VV[154];
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GET-NAME-SERVICE-ERROR-MESSAGE        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L69get_name_service_error_message(cl_object v1num)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L58get_win32_error_string(v1num);
  return value0;
 }
}
/*      function definition for GET-SOCKOPT-INT                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L70get_sockopt_int(cl_object v1fd, cl_object v2level, cl_object v3const)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4ret;
   {
    cl_object v5;
    {
        int sockopt, ret;
        socklen_t socklen = sizeof(int);

        ecl_disable_interrupts();
        ret = getsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char*,&sockopt),&socklen);
        ecl_enable_interrupts();

        v5= (ret == 0) ? ecl_make_integer(sockopt) : ECL_NIL;
}
    v4ret = v5;
   }
   if (Null(v4ret)) { goto L2; }
   value0 = v4ret;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      function definition for GET-SOCKOPT-BOOL                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L71get_sockopt_bool(cl_object v1fd, cl_object v2level, cl_object v3const)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4ret;
   {
    cl_object v5;
    {
        int sockopt, ret;
        socklen_t socklen = sizeof(int);

        ecl_disable_interrupts();
        ret = getsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char*,&sockopt),&socklen);
        ecl_enable_interrupts();

        v5= (ret == 0) ? ecl_make_integer(sockopt) : ECL_NIL;
}
    v4ret = v5;
   }
   if (Null(v4ret)) { goto L2; }
   value0 = ecl_make_bool(!ecl_number_equalp(v4ret,ecl_make_fixnum(0)));
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      function definition for GET-SOCKOPT-TIMEVAL                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L72get_sockopt_timeval(cl_object v1fd, cl_object v2level, cl_object v3const)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L70get_sockopt_int(v1fd, v2level, v3const);
  value0 = ecl_times(ecl_make_fixnum(1000),T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GET-SOCKOPT-LINGER                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L73get_sockopt_linger(cl_object v1fd, cl_object v2level, cl_object v3const)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4ret;
   {
    cl_object v5;
    {
        struct linger sockopt;
        socklen_t socklen = sizeof(struct linger);
        int ret;

        ecl_disable_interrupts();
        ret = getsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char*,&sockopt),&socklen);
        ecl_enable_interrupts();

        v5= (ret == 0) ? ecl_make_integer((sockopt.l_onoff != 0) ? sockopt.l_linger : 0) : ECL_NIL;
}
    v4ret = v5;
   }
   if (Null(v4ret)) { goto L2; }
   value0 = v4ret;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      function definition for SET-SOCKOPT-INT                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L74set_sockopt_int(cl_object v1fd, cl_object v2level, cl_object v3const, cl_object v4value)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5ret;
   {
    cl_object v6;
    {
        int sockopt = ecl_to_int(v4value);
        int ret;

        ecl_disable_interrupts();
        ret = setsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char *,&sockopt),sizeof(int));
        ecl_enable_interrupts();

        v6= (ret == 0) ? ECL_T : ECL_NIL;
}
    v5ret = v6;
   }
   if (Null(v5ret)) { goto L2; }
   value0 = v4value;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      function definition for SET-SOCKOPT-BOOL                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L75set_sockopt_bool(cl_object v1fd, cl_object v2level, cl_object v3const, cl_object v4value)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5ret;
   {
    cl_object v6;
    {
        int sockopt = (v4value == ECL_NIL) ? 0 : 1;
        int ret;

        ecl_disable_interrupts();
        ret = setsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char *,&sockopt),sizeof(int));
        ecl_enable_interrupts();

        v6= (ret == 0) ? ECL_T : ECL_NIL;
}
    v5ret = v6;
   }
   if (Null(v5ret)) { goto L2; }
   value0 = v4value;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      function definition for SET-SOCKOPT-TIMEVAL                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L76set_sockopt_timeval(cl_object v1fd, cl_object v2level, cl_object v3const, cl_object v4value)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_times(ecl_make_fixnum(1000),v4value);
  value0 = L74set_sockopt_int(v1fd, v2level, v3const, T0);
  return value0;
 }
}
/*      function definition for SET-SOCKOPT-LINGER                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L77set_sockopt_linger(cl_object v1fd, cl_object v2level, cl_object v3const, cl_object v4value)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5ret;
   {
    cl_object v6;
    {
        struct linger sockopt = {0, 0};
        int value = ecl_to_int(v4value);
        int ret;

        if (value > 0) {
                sockopt.l_onoff = 1;
                sockopt.l_linger = value;
        }

        ecl_disable_interrupts();
        ret = setsockopt(ecl_to_int(v1fd),ecl_to_int(v2level),ecl_to_int(v3const),wincoerce(char *,&sockopt),
                         sizeof(struct linger));
        ecl_enable_interrupts();

        v6= (ret == 0) ? ECL_T : ECL_NIL;
}
    v5ret = v6;
   }
   if (Null(v5ret)) { goto L2; }
   value0 = v4value;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cstring_to_base_string_or_nil(strerror(errno));
   value0 = cl_error(2, VV[157], T0);
   return value0;
  }
 }
}
/*      local function DEFINE-SOCKOPT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78define_sockopt(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5c_level;
   cl_object v6c_const;
   cl_object v7type;
   cl_object v8read_only;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v9;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5c_level = v9;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6c_const = v9;
   }
   if (!(v3==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[246])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7type = v9;
   }
   if (Null(v3)) { goto L27; }
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v8read_only = v9;
    goto L26;
   }
L27:;
   v8read_only = ECL_NIL;
L26:;
   if (Null(v3)) { goto L32; }
   ecl_function_dispatch(cl_env_copy,VV[247])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L32:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   T1 = cl_list(2, ECL_SYM("EXPORT",346), T0);
   T2 = cl_format(3, ECL_NIL, VV[167], v7type);
   T3 = cl_intern(1, T2);
   T4 = cl_list(2, VV[107], v5c_level);
   T5 = cl_list(2, VV[107], v6c_const);
   T6 = cl_list(4, T3, VV[168], T4, T5);
   T7 = cl_list(4, ECL_SYM("DEFUN",291), v4name, VV[166], T6);
   if ((v8read_only)!=ECL_NIL) { goto L35; }
   T9 = cl_list(2, ECL_SYM("SETF",752), v4name);
   T10 = cl_format(3, ECL_NIL, VV[170], v7type);
   T11 = cl_intern(1, T10);
   T12 = cl_list(2, VV[107], v5c_level);
   T13 = cl_list(2, VV[107], v6c_const);
   T14 = cl_list(5, T11, VV[168], T12, T13, VV[171]);
   T15 = cl_list(4, ECL_SYM("DEFUN",291), T9, VV[169], T14);
   T8 = ecl_list1(T15);
   goto L34;
L35:;
   T8 = ECL_NIL;
L34:;
   value0 = cl_listX(4, ECL_SYM("PROGN",673), T1, T7, T8);
   return value0;
  }
 }
}
/*      function definition for SOCKOPT-TYPE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L79sockopt_type(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_TYPE;
    value0 = L70get_sockopt_int(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-RECEIVE-BUFFER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L80sockopt_receive_buffer(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_RCVBUF;
    value0 = L70get_sockopt_int(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-RECEIVE-BUFFER)         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L81_setf_sockopt_receive_buffer_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_RCVBUF;
    value0 = L74set_sockopt_int(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-RECEIVE-TIMEOUT               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L82sockopt_receive_timeout(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_RCVTIMEO;
    value0 = L72get_sockopt_timeval(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-RECEIVE-TIMEOUT)        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L83_setf_sockopt_receive_timeout_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_RCVTIMEO;
    value0 = L76set_sockopt_timeval(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-SEND-TIMEOUT                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L84sockopt_send_timeout(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_SNDTIMEO;
    value0 = L72get_sockopt_timeval(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-SEND-TIMEOUT)           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L85_setf_sockopt_send_timeout_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_SNDTIMEO;
    value0 = L76set_sockopt_timeval(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-REUSE-ADDRESS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L86sockopt_reuse_address(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_REUSEADDR;
    value0 = L71get_sockopt_bool(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-REUSE-ADDRESS)          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L87_setf_sockopt_reuse_address_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_REUSEADDR;
    value0 = L75set_sockopt_bool(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-KEEP-ALIVE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L88sockopt_keep_alive(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_KEEPALIVE;
    value0 = L71get_sockopt_bool(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-KEEP-ALIVE)             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L89_setf_sockopt_keep_alive_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_KEEPALIVE;
    value0 = L75set_sockopt_bool(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-DONT-ROUTE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L90sockopt_dont_route(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_DONTROUTE;
    value0 = L71get_sockopt_bool(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-DONT-ROUTE)             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L91_setf_sockopt_dont_route_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_DONTROUTE;
    value0 = L75set_sockopt_bool(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-LINGER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L92sockopt_linger(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = SOL_SOCKET;
   {
    int v3;
    v3 = SO_LINGER;
    value0 = L73get_sockopt_linger(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-LINGER)                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L93_setf_sockopt_linger_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = SOL_SOCKET;
   {
    int v4;
    v4 = SO_LINGER;
    value0 = L77set_sockopt_linger(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}
/*      function definition for SOCKOPT-TCP-NODELAY                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L94sockopt_tcp_nodelay(cl_object v1socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v1socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v2;
   v2 = IPPROTO_TCP;
   {
    int v3;
    v3 = TCP_NODELAY;
    value0 = L71get_sockopt_bool(T0, ecl_make_int(v2), ecl_make_int(v3));
    return value0;
   }
  }
 }
}
/*      function definition for (SETF SOCKOPT-TCP-NODELAY)            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L95_setf_sockopt_tcp_nodelay_(cl_object v1value, cl_object v2socket)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[207])(1, v2socket) /*  SOCKET-FILE-DESCRIPTOR */;
  {
   int v3;
   v3 = IPPROTO_TCP;
   {
    int v4;
    v4 = TCP_NODELAY;
    value0 = L75set_sockopt_bool(T0, ecl_make_int(v3), ecl_make_int(v4), v1value);
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/sockets.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclQ5rqp4b7_Yf8aTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:SOCKETS;SOCKETS.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclQ5rqp4b7_Yf8aTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  si_Xmake_special(VV[1]);
  if (ecl_boundp(cl_env_copy,VV[1])) { goto L7; }
  cl_set(VV[1],ECL_NIL);
L7:;
  ecl_cmp_defun(VV[192]);                         /*  WSOCK-INITIALIZE */
  L1wsock_initialize();
  {
   int v1;
   v1 = AF_INET;
   si_Xmake_constant(VV[4], ecl_make_int(v1));
  }
  {
   int v1;
   v1 = AF_LOCAL;
   si_Xmake_constant(VV[5], ecl_make_int(v1));
  }
  {
   int v1;
   v1 = EAGAIN;
   si_Xmake_constant(VV[6], ecl_make_int(v1));
  }
  {
   int v1;
   v1 = EINTR;
   si_Xmake_constant(VV[7], ecl_make_int(v1));
  }
  si_Xmake_constant(VV[8], ecl_make_fixnum(-2));
  ecl_cmp_defun(VV[193]);                         /*  FF-SOCKET       */
  ecl_cmp_defun(VV[194]);                         /*  FF-LISTEN       */
  ecl_cmp_defun(VV[195]);                         /*  FF-CLOSE        */
  ecl_cmp_defun(VV[196]);                         /*  FF-CLOSESOCKET  */
  ecl_cmp_defun(VV[197]);                         /*  SPLIT           */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[2]);
  clos_load_defclass(VV[15], ECL_NIL, VVtemp[1], T0);
 }
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[16], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[3], ECL_SYM("DOCUMENTATION",1244), VVtemp[2]) /*  ENSURE-GENERIC-FUNCTION */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8host_ent_address,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[16], ECL_NIL, VVtemp[3], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[203]);                         /*  GET-HOST-BY-NAME */
  ecl_cmp_defun(VV[204]);                         /*  GET-HOST-BY-ADDRESS */
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda34,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[5]);
  T2 = cl_list(6, VVtemp[4], T1, VVtemp[6], VVtemp[7], VVtemp[8], VVtemp[9]);
  T3 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[10]);
  clos_load_defclass(VV[25], ECL_NIL, T2, T3);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[11], VVtemp[12], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC14shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, ECL_SYM("SHARED-INITIALIZE",967), VVtemp[13], VVtemp[11], VVtemp[14], T0) /*  INSTALL-METHOD */;
 }
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[36], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[15], ECL_SYM("DOCUMENTATION",1244), VVtemp[16]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[37], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[17], ECL_SYM("DOCUMENTATION",1244), VVtemp[18]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[38], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[15], ECL_SYM("DOCUMENTATION",1244), VVtemp[19]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[39], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[17], ECL_SYM("DOCUMENTATION",1244), VVtemp[20]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[40], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[17], ECL_SYM("DOCUMENTATION",1244), VVtemp[21]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[41], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[22], ECL_SYM("DOCUMENTATION",1244), VVtemp[23]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[42], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[24], ECL_SYM("DOCUMENTATION",1244), VVtemp[25]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[43], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[26], ECL_SYM("DOCUMENTATION",1244), VVtemp[27]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[44], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[28], ECL_SYM("DOCUMENTATION",1244), VVtemp[29]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[45], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[30], ECL_SYM("DOCUMENTATION",1244), VVtemp[31]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[46], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[17], ECL_SYM("DOCUMENTATION",1244), VVtemp[32]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VVtemp[33], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[34], ECL_SYM("DOCUMENTATION",1244), VVtemp[35]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(7, VV[47], VV[17], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[17], ECL_SYM("DOCUMENTATION",1244), VVtemp[36]) /*  ENSURE-GENERIC-FUNCTION */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15socket_listen,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[41], ECL_NIL, VVtemp[11], VVtemp[22], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16socket_close_low_level,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[47], ECL_NIL, VVtemp[17], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC17socket_close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[44], ECL_NIL, VVtemp[17], VVtemp[28], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC18socket_receive,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[42], ECL_NIL, VVtemp[37], VVtemp[38], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda72,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[40]);
  T2 = cl_list(2, T1, VVtemp[41]);
  clos_load_defclass(VV[52], VVtemp[39], T2, ECL_NIL);
 }
  ecl_cmp_defun(VV[217]);                         /*  GET-PROTOCOL-BY-NAME */
  ecl_cmp_defun(VV[218]);                         /*  MAKE-INET-ADDRESS */
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda75,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[42]);
  T2 = ecl_list1(T1);
  T3 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[43]);
  clos_load_defclass(VV[57], VVtemp[17], T2, T3);
 }
  ecl_cmp_defun(VV[219]);                         /*  MAKE-INET-SOCKET */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC25socket_bind,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[36], ECL_NIL, VVtemp[44], VVtemp[15], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26socket_accept,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[37], ECL_NIL, VVtemp[44], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC27socket_connect,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[38], ECL_NIL, VVtemp[44], VVtemp[15], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28socket_peername,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[39], ECL_NIL, VVtemp[44], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29socket_name,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[40], ECL_NIL, VVtemp[44], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30socket_close_low_level,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[47], ECL_NIL, VVtemp[44], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC31socket_send,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[43], ECL_NIL, VVtemp[37], VVtemp[26], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC32__lambda91,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[45]);
  T2 = cl_list(3, T1, VVtemp[46], VVtemp[47]);
  T3 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[48]);
  clos_load_defclass(VV[71], VVtemp[17], T2, T3);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC33initialize_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, ECL_SYM("INITIALIZE-INSTANCE",949), VVtemp[13], VVtemp[49], VVtemp[30], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC35socket_bind,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[36], ECL_NIL, VVtemp[49], VVtemp[15], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC36socket_accept,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[37], ECL_NIL, VVtemp[49], VVtemp[17], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC38socket_connect,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[38], ECL_NIL, VVtemp[49], VVtemp[15], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC39socket_peername,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[39], ECL_NIL, VVtemp[49], VVtemp[17], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC40socket_close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[44], ECL_NIL, VVtemp[49], VVtemp[28], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC41socket_make_stream,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[45], ECL_NIL, VVtemp[49], VVtemp[30], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42non_blocking_mode,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[46], ECL_NIL, VVtemp[49], VVtemp[17], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC43_setf_non_blocking_mode_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VVtemp[33], ECL_NIL, VVtemp[50], VVtemp[34], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[52]);
  clos_load_defclass(VV[84], VVtemp[17], VVtemp[51], T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC44socket_bind,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[36], ECL_NIL, VVtemp[53], VVtemp[15], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45socket_accept,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[37], ECL_NIL, VVtemp[53], VVtemp[17], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC46socket_connect,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[38], ECL_NIL, VVtemp[53], VVtemp[15], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC47socket_peername,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[39], ECL_NIL, VVtemp[53], VVtemp[17], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC48_setf_non_blocking_mode_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VVtemp[33], ECL_NIL, VVtemp[54], VVtemp[34], T0) /*  INSTALL-METHOD */;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC49socket_close,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[44], ECL_NIL, VVtemp[53], VVtemp[28], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC50non_blocking_mode,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[46], ECL_NIL, VVtemp[17], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC51_setf_non_blocking_mode_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VVtemp[33], ECL_NIL, VVtemp[55], VVtemp[34], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[231]);                         /*  DUP             */
  (void)0; /* No entry created for AUTO-CLOSE-TWO-WAY-STREAM */
  ecl_cmp_defun(VV[232]);                         /*  SOCKET-MAKE-STREAM-INNER */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC55socket_make_stream,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[45], ECL_NIL, VVtemp[17], VVtemp[56], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC56ext__stream_fd,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[101], ECL_NIL, VVtemp[17], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC57socket_make_stream,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[201])(5, VV[45], ECL_NIL, VVtemp[53], VVtemp[57], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[242]);                         /*  GET-WIN32-ERROR-STRING */
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC60__lambda295,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[58]);
  T2 = cl_list(4, T1, VVtemp[59], VVtemp[60], VVtemp[61]);
  T3 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[62]);
  clos_load_defclass(VV[105], VVtemp[39], T2, T3);
 }
  ecl_cmp_defmacro(VV[245]);                      /*  DEFINE-SOCKET-CONDITION */
  si_Xmake_special(VV[110]);
  cl_set(VV[110],ECL_NIL);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EADDRINUSE;
   si_Xmake_constant(VV[112], ecl_make_int(v1));
  }
  clos_load_defclass(VV[113], VV[108], VVtemp[63], ECL_NIL);
  cl_export(1, VV[113]);
  T0 = CONS(ecl_symbol_value(VV[112]),VV[113]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EAGAIN;
   si_Xmake_constant(VV[114], ecl_make_int(v1));
  }
  clos_load_defclass(VV[115], VV[108], VVtemp[64], ECL_NIL);
  cl_export(1, VV[115]);
  T0 = CONS(ecl_symbol_value(VV[114]),VV[115]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EBADF;
   si_Xmake_constant(VV[116], ecl_make_int(v1));
  }
  clos_load_defclass(VV[117], VV[108], VVtemp[65], ECL_NIL);
  cl_export(1, VV[117]);
  T0 = CONS(ecl_symbol_value(VV[116]),VV[117]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ECONNREFUSED;
   si_Xmake_constant(VV[118], ecl_make_int(v1));
  }
  clos_load_defclass(VV[119], VV[108], VVtemp[66], ECL_NIL);
  cl_export(1, VV[119]);
  T0 = CONS(ecl_symbol_value(VV[118]),VV[119]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ETIMEDOUT;
   si_Xmake_constant(VV[120], ecl_make_int(v1));
  }
  clos_load_defclass(VV[121], VV[108], VVtemp[67], ECL_NIL);
  cl_export(1, VV[121]);
  T0 = CONS(ecl_symbol_value(VV[120]),VV[121]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EINTR;
   si_Xmake_constant(VV[122], ecl_make_int(v1));
  }
  clos_load_defclass(VV[115], VV[108], VVtemp[68], ECL_NIL);
  cl_export(1, VV[115]);
  T0 = CONS(ecl_symbol_value(VV[122]),VV[115]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EINVAL;
   si_Xmake_constant(VV[123], ecl_make_int(v1));
  }
  clos_load_defclass(VV[124], VV[108], VVtemp[69], ECL_NIL);
  cl_export(1, VV[124]);
  T0 = CONS(ecl_symbol_value(VV[123]),VV[124]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ENOBUFS;
   si_Xmake_constant(VV[125], ecl_make_int(v1));
  }
  clos_load_defclass(VV[126], VV[108], VVtemp[70], ECL_NIL);
  cl_export(1, VV[126]);
  T0 = CONS(ecl_symbol_value(VV[125]),VV[126]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ENOMEM;
   si_Xmake_constant(VV[127], ecl_make_int(v1));
  }
  clos_load_defclass(VV[128], VV[108], VVtemp[71], ECL_NIL);
  cl_export(1, VV[128]);
  T0 = CONS(ecl_symbol_value(VV[127]),VV[128]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EOPNOTSUPP;
   si_Xmake_constant(VV[129], ecl_make_int(v1));
  }
  clos_load_defclass(VV[130], VV[108], VVtemp[72], ECL_NIL);
  cl_export(1, VV[130]);
  T0 = CONS(ecl_symbol_value(VV[129]),VV[130]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EPERM;
   si_Xmake_constant(VV[131], ecl_make_int(v1));
  }
  clos_load_defclass(VV[132], VV[108], VVtemp[73], ECL_NIL);
  cl_export(1, VV[132]);
  T0 = CONS(ecl_symbol_value(VV[131]),VV[132]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EPROTONOSUPPORT;
   si_Xmake_constant(VV[133], ecl_make_int(v1));
  }
  clos_load_defclass(VV[134], VV[108], VVtemp[74], ECL_NIL);
  cl_export(1, VV[134]);
  T0 = CONS(ecl_symbol_value(VV[133]),VV[134]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ESOCKTNOSUPPORT;
   si_Xmake_constant(VV[135], ecl_make_int(v1));
  }
  clos_load_defclass(VV[136], VV[108], VVtemp[75], ECL_NIL);
  cl_export(1, VV[136]);
  T0 = CONS(ecl_symbol_value(VV[135]),VV[136]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = ENETUNREACH;
   si_Xmake_constant(VV[137], ecl_make_int(v1));
  }
  clos_load_defclass(VV[138], VV[108], VVtemp[76], ECL_NIL);
  cl_export(1, VV[138]);
  T0 = CONS(ecl_symbol_value(VV[137]),VV[138]);
  cl_set(VV[110],CONS(T0,ecl_symbol_value(VV[110])));
 }
  ecl_cmp_defun(VV[248]);                         /*  CONDITION-FOR-ERRNO */
  ecl_cmp_defun(VV[249]);                         /*  SOCKET-ERROR    */
  ecl_cmp_defun(VV[250]);                         /*  NAME-SERVICE-ERROR */
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC66__lambda319,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[78]);
  T2 = cl_list(4, T1, VVtemp[79], VVtemp[80], VVtemp[81]);
  clos_load_defclass(VV[142], VVtemp[77], T2, ECL_NIL);
 }
  ecl_cmp_defmacro(VV[253]);                      /*  DEFINE-NAME-SERVICE-CONDITION */
  si_Xmake_special(VV[146]);
  cl_set(VV[146],ECL_NIL);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EAI_NONAME;
   si_Xmake_constant(VV[148], ecl_make_int(v1));
  }
  clos_load_defclass(VV[149], VV[144], VVtemp[82], ECL_NIL);
  T0 = CONS(ecl_symbol_value(VV[148]),VV[149]);
  cl_set(VV[146],CONS(T0,ecl_symbol_value(VV[146])));
  cl_export(1, VV[148]);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EAI_AGAIN;
   si_Xmake_constant(VV[150], ecl_make_int(v1));
  }
  clos_load_defclass(VV[151], VV[144], VVtemp[83], ECL_NIL);
  T0 = CONS(ecl_symbol_value(VV[150]),VV[151]);
  cl_set(VV[146],CONS(T0,ecl_symbol_value(VV[146])));
  cl_export(1, VV[150]);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   int v1;
   v1 = EAI_FAIL;
   si_Xmake_constant(VV[152], ecl_make_int(v1));
  }
  clos_load_defclass(VV[153], VV[144], VVtemp[84], ECL_NIL);
  T0 = CONS(ecl_symbol_value(VV[152]),VV[153]);
  cl_set(VV[146],CONS(T0,ecl_symbol_value(VV[146])));
  cl_export(1, VV[152]);
 }
  ecl_cmp_defun(VV[254]);                         /*  CONDITION-FOR-NAME-SERVICE-ERRNO */
  ecl_cmp_defun(VV[255]);                         /*  GET-NAME-SERVICE-ERROR-MESSAGE */
  ecl_cmp_defun(VV[256]);                         /*  GET-SOCKOPT-INT */
  ecl_cmp_defun(VV[257]);                         /*  GET-SOCKOPT-BOOL */
  ecl_cmp_defun(VV[258]);                         /*  GET-SOCKOPT-TIMEVAL */
  ecl_cmp_defun(VV[259]);                         /*  GET-SOCKOPT-LINGER */
  ecl_cmp_defun(VV[260]);                         /*  SET-SOCKOPT-INT */
  ecl_cmp_defun(VV[261]);                         /*  SET-SOCKOPT-BOOL */
  ecl_cmp_defun(VV[262]);                         /*  SET-SOCKOPT-TIMEVAL */
  ecl_cmp_defun(VV[263]);                         /*  SET-SOCKOPT-LINGER */
  ecl_cmp_defmacro(VV[264]);                      /*  DEFINE-SOCKOPT  */
  cl_export(1, VV[173]);
  ecl_cmp_defun(VV[265]);                         /*  SOCKOPT-TYPE    */
  cl_export(1, VV[174]);
  ecl_cmp_defun(VV[266]);                         /*  SOCKOPT-RECEIVE-BUFFER */
  ecl_cmp_defun(VV[267]);                         /*  (SETF SOCKOPT-RECEIVE-BUFFER) */
  cl_export(1, VV[176]);
  ecl_cmp_defun(VV[268]);                         /*  SOCKOPT-RECEIVE-TIMEOUT */
  ecl_cmp_defun(VV[269]);                         /*  (SETF SOCKOPT-RECEIVE-TIMEOUT) */
  cl_export(1, VV[178]);
  ecl_cmp_defun(VV[270]);                         /*  SOCKOPT-SEND-TIMEOUT */
  ecl_cmp_defun(VV[271]);                         /*  (SETF SOCKOPT-SEND-TIMEOUT) */
  cl_export(1, VV[180]);
  ecl_cmp_defun(VV[272]);                         /*  SOCKOPT-REUSE-ADDRESS */
  ecl_cmp_defun(VV[273]);                         /*  (SETF SOCKOPT-REUSE-ADDRESS) */
  cl_export(1, VV[182]);
  ecl_cmp_defun(VV[274]);                         /*  SOCKOPT-KEEP-ALIVE */
  ecl_cmp_defun(VV[275]);                         /*  (SETF SOCKOPT-KEEP-ALIVE) */
  cl_export(1, VV[184]);
  ecl_cmp_defun(VV[276]);                         /*  SOCKOPT-DONT-ROUTE */
  ecl_cmp_defun(VV[277]);                         /*  (SETF SOCKOPT-DONT-ROUTE) */
  cl_export(1, VV[186]);
  ecl_cmp_defun(VV[278]);                         /*  SOCKOPT-LINGER  */
  ecl_cmp_defun(VV[279]);                         /*  (SETF SOCKOPT-LINGER) */
  cl_export(1, VV[188]);
  ecl_cmp_defun(VV[280]);                         /*  SOCKOPT-TCP-NODELAY */
  ecl_cmp_defun(VV[281]);                         /*  (SETF SOCKOPT-TCP-NODELAY) */
  cl_provide(VV[190]);
  cl_provide(VV[191]);
}
