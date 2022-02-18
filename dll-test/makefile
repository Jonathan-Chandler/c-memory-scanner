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
	gcc -DBUILD_DLL -c dllmain.c $(DLLCFLAGS)
	gcc -DBUILD_DLL -o dllmain.dll dllmain.o $(DLLCFLAGS)
	gcc -c main.c $(EXECFLAGS) 
	gcc -o main.exe main.o $(EXECFLAGS) 
	gcc -I. -c main2.c -o main2.o -static-libgcc 
	gcc -o main2.exe main2.o app_main.dll -static-libgcc 
	gcc -I. -c main3.c -o main3.o -static-libgcc 
	gcc -o main3.exe main3.o ecl.res app_main.dll -static-libgcc 
	gcc -I. -c test_load_remote_thread.c -o test_load_remote_thread.o -static-libgcc 
	gcc -o test_load_remote_thread.exe test_load_remote_thread.o app_main.dll -static-libgcc 
	gcc -I. -c test_load_remote_no_ecl.c -o test_load_remote_no_ecl.o -static-libgcc 
	gcc -o test_load_remote_no_ecl.exe test_load_remote_no_ecl.o app_main.dll ecl.dll -static-libgcc 

	gcc -I. -c main.c -o main3.o -static
	gcc -o main.exe main.o -static

	gcc -o main.exe main3.o app_main.dll ecl.dll -static-libgcc 

clean:
	rm -rf *.o *.exe dllmain.o dllmain.dll

# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic libecl.a libecl.lib -Wl,--no-whole-archive
# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic,--whole-archive libecl.a libecl.lib -Wl,--no-whole-archive
# dumpbin /EXPORTS ecl.dll
# make SHELL='sh -x'
# ./configure --disable-shared
# gcc -I. -D_REENTRANT -fPIC -g -pipe -Wall -c app_main.c

