ECHO = echo
#MAKE = mingw32-make
MAKE = make
CC = gcc
#CFLAGS = -Wall -m32 
CFLAGS = -Wall -m32 -s -shared -Wl,--subsystem,windows
LIBS = -lm
INCLUDES = -Iecl

all: app.exe
	$(CC) $(CFLAGS) -c app_main.c
	$(CC) main.c $cflags $ldflags -lapp_main -lecl -o app.exe

clean:
	$(MAKE) -C ./src/scanner clean
	#$(MAKE) -C ./src/test_application clean
	$(MAKE) -C ./src/unit_tests clean



rm -f *.o *.so app

export libs="-lm"

# Note, the -Wl,-R flags will make our shared library available to the
# executable app from the location that it was compiled, rather than
# having to be installed globably or adding the build path to
# LD_LIBRARY_PATH.

export ldflags="-L. -Wl,-R -Wl,."
export cflags="-DGC_LINUX_THREADS -D_REENTRANT -fPIC  -g -pipe -Wall"

gcc ldflags -lecl -o libapp_main.so *o $libs
gcc main.c $cflags $ldflags -lapp_main -lecl -o app

SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:%.c=../../build/scanner/%.o)
#OBJ_NAME = ../../scanner.exe
OBJ_NAME = ../../memscan.dll

../../build/scanner/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(OBJ_NAME)

clean:
	rm -f ../../build/scanner/*
	rm -f $(OBJ_NAME)


