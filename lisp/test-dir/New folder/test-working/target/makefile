all: 
	rm -rf target.o target.exe
	g++ -c target.c
	g++ -o target.exe target.o

#	rm -rf main.o app_main.o app_main.dll main.exe
#	gcc -shared -fPIC -DADD_APP_MAIN_EXPORTS -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build -DECL_BUILD -DECL_API -DECL_NO_LEGACY -g -O2 -D_THREAD_SAFE -Dmingw32 -c -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.c
#	gcc -shared -fPIC -o C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.dll -LC:/work/c/memscan-dll/lisp/ecl-21.2.1/build C:/work/c/memscan-dll/lisp/test-dir/New\ folder/app_main.o c/main.o c/all_symbols2.o liblsp.a libeclmin.a libeclgc.a -shared -Wl,--stack,1048576 -leclatomic -leclffi -leclgc -lgmp -lws2_32
#	gcc -I. -c main.c -o main.o
#	gcc -o main.exe main.o app_main.dll


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


