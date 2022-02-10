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

clean:
	$(MAKE) -C ./src/scanner clean
	#$(MAKE) -C ./src/test_application clean
	$(MAKE) -C ./src/unit_tests clean

