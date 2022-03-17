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
	gcc -Wall -c dummy-target.c
	gcc -Wall -o dummy-target.exe dummy-target.o

clean:
	rm -rf *.o *.exe

