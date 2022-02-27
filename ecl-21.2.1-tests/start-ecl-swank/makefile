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
	#cp start-ecl-swank.c ../build/
	#cp start-ecl-swank.h ../build/
	###cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../start-ecl-swank/app_main.o -c ../start-ecl-swank/app_main.c
	###cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../start-ecl-swank/app_main.dll -L. ../start-ecl-swank/app_main.o -shared -lecl -lws2_32
	###cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../start-ecl-swank/preload.o -c ../start-ecl-swank/preload.c -Wl,-Bdynamic -lecl -Wl,-Bstatic -lpthread
	###cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../start-ecl-swank/preload.dll -L. ../start-ecl-swank/preload.o -shared -Wl,-Bdynamic -lecl -Wl,-Bstatic -lws2_32 -Wl,-Bstatic -lpthread
	#cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -Wall -I. -D_THREAD_SAFE -o ../start-ecl-swank/preload.o -c ../start-ecl-swank/preload.c -lecl -Lgc/.libs -lgc -lwinpthread
	#cd ../build && gcc -shared -DADD_APP_MAIN_EXPORTS -o ../start-ecl-swank/preload.dll -L. ../start-ecl-swank/preload.o -shared -lecl -lws2_32 -Lgc/.libs -lgc -lwinpthread
	cd ../build && gcc -I. -c ../start-ecl-swank/start-ecl-swank.c -o ../start-ecl-swank/start-ecl-swank.o -L. -lecl
	cd ../build && gcc -o ../start-ecl-swank/start-ecl-swank.exe ../start-ecl-swank/start-ecl-swank.o -L. -lecl
	cd ../start-ecl-swank && cp start-ecl-swank.exe ../build/
	cp ../start-ecl-swank/launch-swank.lisp ../build/

clean:
	rm -rf *.o *.exe

