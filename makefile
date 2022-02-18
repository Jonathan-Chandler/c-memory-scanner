ECHO = echo
#MAKE = mingw32-make
MAKE = make
CC = gcc
#CFLAGS = -Wall -m32 
CFLAGS = -Wall -m32 -s -shared -Wl,--subsystem,windows

export ECHO
export CC
export INCLUDES
export CFLAGS

all: $(OBJS)
	mkdir -p ../../build/unit_tests/
	#mkdir -p ../../build/test_application/
	mkdir -p ../../build/scanner/
	$(MAKE) -C ./src/scanner all
	#$(MAKE) -C ./src/test_application all
	$(MAKE) -C ./src/unit_tests all
	cp memscan.dll ./lisp/

clean:
	$(MAKE) -C ./src/scanner clean
	#$(MAKE) -C ./src/test_application clean
	$(MAKE) -C ./src/unit_tests clean

# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic libecl.a libecl.lib -Wl,--no-whole-archive
# gcc -Wall -m32 -s -v -shared -Wl,--subsystem,windows -I. app_main.o -o test.dll -lm -Wl,-Bstatic,--whole-archive libecl.a libecl.lib -Wl,--no-whole-archive
# dumpbin /EXPORTS ecl.dll
# make SHELL='sh -x'
# ./configure --disable-shared
# gcc -I. -D_REENTRANT -fPIC -g -pipe -Wall -c app_main.c
