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
# editbin /STACK:64000000 Darkstone.exe
# dumpbin /headers Darkstone.exe
# 
# make SHELL='sh -x'
# ./configure --disable-shared
# gcc -I. -D_REENTRANT -fPIC -g -pipe -Wall -c app_main.c
# (require :cmp)
# (compile-file "slime-test2/swank-loader.lisp" :system-p t)
# ecl --norc 
# 		-eval '(require :asdf)' 
# 		-eval '(require :cmp)' 
# 		-eval '(push "./" asdf:*central-registry*)' 
# 		-eval '(asdf:make-build :swank :type :static-library :move-here "./")' 
# 		-eval '(quit)'
#
# (require :asdf)
# (require :cmp)
# (push "./slime-test2/" asdf:*central-registry*)
# (asdf:make-build :swank :type :static-library :monolithic t :move-here "./")
# (asdf:make-build :packages :type :static-library :move-here "./")
# (quit)
# 
