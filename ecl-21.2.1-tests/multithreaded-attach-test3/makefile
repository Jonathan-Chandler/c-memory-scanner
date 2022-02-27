ECHO = echo
#MAKE = mingw32-make
MAKE = make
CC = gcc
EXECFLAGS = -Wall -m32 
DLLCFLAGS = -Wall -m32 -s -shared -Wl,--subsystem,windows

export ECHO
export CC
export INCLUDES
export CFLAGS

all: 
	cp app_main.h ../build/
	cp loadself.c ../build/
	cp app_main.c ../build/
	cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/app_main.o -c ../multithreaded-attach-test/app_main.c -lecl -leclgc -Wl,-subsystem,windows -static-libstdc++
	cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/app_main.dll -L. ../multithreaded-attach-test/app_main.o -shared -lecl -leclgc -lws2_32 -Wl,-subsystem,windows -static-libstdc++
	cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/load_app_main.o -c ../multithreaded-attach-test/load_app_main.c -lecl -leclgc -Wl,-subsystem,windows -static-libstdc++
	cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/load_app_main.dll -L. ../multithreaded-attach-test/load_app_main.o -shared -lecl -leclgc -lws2_32 -Wl,-subsystem,windows -static-libstdc++
	cd ../build/ && gcc -Wl,--stack,16777216 -I. -c ../multithreaded-attach-test/loadself.c -o ../multithreaded-attach-test/loadself.o -Wl,-subsystem,windows -static-libstdc++
	cd ../build/ && gcc -Wl,--stack,16777216 -o ../multithreaded-attach-test/loadself.exe ../multithreaded-attach-test/loadself.o -Wl,-subsystem,windows -static-libstdc++
	####cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/app_main.o -c ../multithreaded-attach-test/app_main.c -lecl -leclgc
	####cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/app_main.dll -L. ../multithreaded-attach-test/app_main.o -shared -lecl -leclgc -lws2_32
	####cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/load_app_main.o -c ../multithreaded-attach-test/load_app_main.c -lecl -leclgc
	####cd ../build/ && gcc -Wl,--stack,16777216 -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/load_app_main.dll -L. ../multithreaded-attach-test/load_app_main.o -shared -lecl -leclgc -lws2_32
	####cd ../build/ && gcc -Wl,--stack,16777216 -I. -c ../multithreaded-attach-test/loadself.c -o ../multithreaded-attach-test/loadself.o
	####cd ../build/ && gcc -Wl,--stack,16777216 -o ../multithreaded-attach-test/loadself.exe ../multithreaded-attach-test/loadself.o
	##cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/app_main.o -c ../multithreaded-attach-test/app_main.c -lecl -leclgc
	##cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/app_main.dll -L. ../multithreaded-attach-test/app_main.o -shared -lecl -leclgc -lws2_32
	##cd ../build/ && gcc -I. -c ../multithreaded-attach-test/loadself.c -o ../multithreaded-attach-test/loadself.o 
	##cd ../build/ && gcc -o ../multithreaded-attach-test/loadself.exe ../multithreaded-attach-test/loadself.o
	#cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/app_main.o -c ../multithreaded-attach-test/app_main.c -lecl -leclgc -Wl,-subsystem,windows -static-libstdc++
	#cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/app_main.dll -L. ../multithreaded-attach-test/app_main.o -shared -lecl -leclgc -lws2_32 -Wl,-subsystem,windows -static-libstdc++
	#cd ../build/ && gcc -I. -c ../multithreaded-attach-test/loadself.c -o ../multithreaded-attach-test/loadself.o -Wl,-subsystem,windows -static-libstdc++
	#cd ../build/ && gcc -o ../multithreaded-attach-test/loadself.exe ../multithreaded-attach-test/loadself.o -Wl,-subsystem,windows -static-libstdc++
	#cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../multithreaded-attach-test/app_main.o -c ../multithreaded-attach-test/app_main.c -lecl -leclgc
	#cd ../build/ && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../multithreaded-attach-test/app_main.dll -L. ../multithreaded-attach-test/app_main.o -shared -lecl -leclgc -lws2_32
	#cd ../build/ && gcc -I. -c ../multithreaded-attach-test/loadself.c -o ../multithreaded-attach-test/loadself.o
	#cd ../build/ && gcc -o ../multithreaded-attach-test/loadself.exe ../multithreaded-attach-test/loadself.o
	echo "test"
	cd ../multithreaded-attach-test
	cp app_main.dll ../build/
	cp load_app_main.dll ../build/
	rm -f inject-status*txt
	#cp app_main.dll ../build/
	#cp start-swank-server.lisp ../build/
	#mv main.exe ../build/

clean:
	rm -rf *.o *.exe *.dll launch_swank_addr load_app_addr setPathRes.txt start_app_main.txt

	# ecl + app_main
	# rm -rf main.o app_main.o app_main.dll main.exe
	# gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o ../working-dll/app_main.o ../working-dll/app_main.c -static-libgcc
	# gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -o ../build/app_main.dll -L../build ../working-dll/app_main.o ../build/c/main.o ../build/c/all_symbols2.o ../build/liblsp.a ../build/libeclmin.a ../build/libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 -static-libgcc


	##gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -Wall -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c -static-libgcc
	##gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o -shared -lecl -lws2_32 -static-libgcc

# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic libecl.a libecl.lib -Wl,--no-whole-archive
# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic,--whole-archive libecl.a libecl.lib -Wl,--no-whole-archive
# dumpbin /EXPORTS ecl.dll
# dumpbin /EXPORTS app_main.dll
# make SHELL='sh -x'
# ./configure --disable-shared
# gcc -I. -D_REENTRANT -fPIC -g -pipe -Wall -c app_main.c

#libs="-lm"

# Note, the -Wl,-R flags will make our shared library available to the
# executable app from the location that it was compiled, rather than
# having to be installed globably or adding the build path to
# LD_LIBRARY_PATH.

#ldflags = -L. -Wl,-R -Wl,.
#ldflags = -L.
#cflags = -I. -g -pipe -Wall
#CFLAGS = -I. -lecl -Wall -m32 -s -shared -Wl,--subsystem,windows
#CFLAGS = -I. -lecl -Wall -m32 -s -shared -Wl,--subsystem,windows


#cflags = -I. -D_REENTRANT -fPIC  -g -pipe -Wall

#all: 
#	rm -rf main.o app_main.o app_main.dll main.exe
#	gcc -I. -DADD_APP_MAIN_EXPORTS -L. $(CFLAGS) $(ldflags) -c app_main.c
#	gcc -I. $(CFLAGS) $(ldflags) -o app_main.dll -s -shared app_main.o -Wl,--subsystem,windows -lecl -lm
#	gcc -I. -Wall -m32 -c main.c
#	gcc main.o -o main.exe -I. $(ldflags) -lapp_main -lecl
#	./main.exe

#	gcc -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c
#	gcc -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o -shared





##############CFLAGS = -Wall -m32 -s -shared -Wl,--subsystem,windows
##############all: 
##############	rm -rf main.o app_main.o app_main.dll main.exe
##############	gcc -DADD_APP_MAIN_EXPORTS -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c
##############	gcc -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32
##############	gcc -I. -c main.c -o main.o
##############	gcc -o main.exe main.o app_main.dll
##############
##############	rm -rf main.o app_main.o app_main.dll main.exe
##############	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c -static-libgcc
##############	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 -static-libgcc
###############	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a libasdf.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32 -static-libgcc
##############	gcc -I. -c main.c -o main.o -static-libgcc 
##############	gcc -o main.exe main.o app_main.dll -static-libgcc 
##############
##############	gcc -o main2.exe main2.o app_main.dll -static-libgcc 
##############
##############	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -Wall -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c -static-libgcc
##############	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o -shared -lecl -lws2_32 -static-libgcc

####export ldflags="-L. -Wl,-R -Wl,."
####export cflags="-DGC_LINUX_THREADS -D_REENTRANT -fPIC  -g -pipe -Wall"
####
####gcc $cflags -c app_main.c
####gcc -shared -Wl,-soname,libapp_main.so $ldflags -lecl -o libapp_main.so *o $libs
####gcc main.c $cflags $ldflags -lapp_main -lecl -o app

#	gcc -shared $(ldflags) -lecl -o app_main.dll *o $(libs)
	#gcc -Wall -I. -DADD_APP_MAIN_EXPORTS -c -o app_main.o app_main.c
	## gcc -Wall -I. -DADD_APP_MAIN_EXPORTS -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o app_main.o app_main.c
	#gcc -o app_main.dll app_main.o -shared ecl-darkstone-trainer--all-systems.dll ecl.dll
	#gcc -I. -c main.c -o main.o
	#gcc -o main.exe main.o app_main.dll


