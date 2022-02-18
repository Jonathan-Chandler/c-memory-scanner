#!/bin/bash

gcc -I. -I/usr/local/include/ -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 \
    -g -O2 -fPIC -D_THREAD_SAFE -Dlinux -O2 -c /tmp/ecl001QoKf8.c \
    -o /tmp/ecl001QoKf80.o

rm -f *.o *.so app




export libs="-lm"

# Note, the -Wl,-R flags will make our shared library available to the
# executable app from the location that it was compiled, rather than
# having to be installed globably or adding the build path to
# LD_LIBRARY_PATH.

export ldflags="-L. -Wl,-R -Wl,."
export cflags="-DGC_LINUX_THREADS -D_REENTRANT -fPIC  -g -pipe -Wall"

# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic libecl.a libecl.lib -Wl,--no-whole-archive
# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic,--whole-archive libecl.a libecl.lib -Wl,--no-whole-archive
# dumpbin /EXPORTS ecl.dll
# ./configure --disable-shared
# gcc -I. -D_REENTRANT -fPIC -g -pipe -Wall -c app_main.c

gcc $cflags -c app_main.c
gcc -shared -Wl,-soname,libapp_main.so $ldflags -Wl, -lecl -o libapp_main.so *o $libs

gcc main.c $cflags $ldflags -lapp_main -lecl -o app

gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic libecl.a libecl.lib -Wl,--no-whole-archive

gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecl.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 
gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecl.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build  ecl-21.2.1/c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 
gcc -o test-ecl.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build  all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 
gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/bin/ecl.exe -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.o -L./ ecl.res ecl.dll -lws2_32 
gcc -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -L./ test-ecl.dll -lws2_32

#unmod
gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/bin/ecl.exe -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.o -L./ ecl.res ecl.dll -lws2_32 
gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecl.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 
gcc -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -g -O2 -D_THREAD_SAFE -Dmingw32 -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c -c C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.c -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.o


#mod 
gcc -I. -g -O2 -D_THREAD_SAFE -Dmingw32 -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c -c C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.c -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/e4F34tmp.o


gcc -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecl.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 

gcc -c 
gcc -o test-ecl.dll -L.  all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 
gcc c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 

#use
gcc -I. -g -O2 -D_THREAD_SAFE -Dmingw32 -c app_main.c -o app_main.o
gcc -o test-ecl.dll -L. -lecltest -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 

#81k
gcc -o test-ecl.dll -L. -lecltest -shared -Wl,--stack,1048576 -lgmp -lws2_32 

#81k
gcc -o test-ecl.dll -L. -Wl,-Bstatic,--whole-archive libecltest.lib -Wl,-Bstatic,--no-whole-archive -shared -Wl,--stack,1048576 -lgmp -lws2_32 
gcc -o test-ecl.dll -L. -Wl,-Bstatic,--whole-archive -L -lecltest -Wl,-Bstatic,--no-whole-archive -shared -Wl,--stack,1048576 -lgmp -lws2_32

gcc -o test-ecl.dll -L. -Wl,-Bstatic,--whole-archive -L -llibecltest -Wl,-Bstatic,--no-whole-archive -shared -Wl,--stack,1048576 -lgmp -lws2_32


ar rcs C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecltest.lib -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32

gcc -c -o C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ecltest.o -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 

C:/work/c/memscan-dll/lisp/test-dir/app_main.o

#used 
gcc -o C:/work/c/memscan-dll/lisp/test-dir/apptest.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 

gcc -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -I/c/work/c/memscan-dll/lisp/ecl-21.2.1/src/c -I../ecl/ -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/app_main.o C:/work/c/memscan-dll/lisp/test-dir/app_main.c


gcc -o C:/work/c/memscan-dll/lisp/test-dir/apptest.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32

gcc -I. -c main.c -o main.o
gcc -o main.exe main.o apptest.dll

#used
dumpbin /EXPORTS app_main.dll
gcc -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -I/c/work/c/memscan-dll/lisp/ecl-21.2.1/src/c -I../ecl/ -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/app_main.o C:/work/c/memscan-dll/lisp/test-dir/app_main.c
gcc -o C:/work/c/memscan-dll/lisp/test-dir/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/app_main.o c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32

gcc -I. -c main.c -o main.o
gcc -o main.exe main.o app_main.dll

# orig
gcc -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/app_main.o C:/work/c/memscan-dll/lisp/test-dir/app_main.c
gcc -o C:/work/c/memscan-dll/lisp/test-dir/app_main.dll C:/work/c/memscan-dll/lisp/test-dir/app_main.o -shared ecl.dll


-DADD_APP_MAIN_EXPORTS
