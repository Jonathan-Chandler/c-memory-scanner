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
	gcc -o dummy-target.exe dummy-target.o
	cp dummy-target.exe "C:\work\c\memscan-dll\ecl-21.2.1-tests\build"

clean:
	rm -rf *.o *.exe

