ECHO = echo
#MAKE = mingw32-make
MAKE = make
CC = gcc
EXECFLAGS = -Wall -m32 
DLLCFLAGS = -Wall -m32 -s -shared -Wl,--subsystem,windows
# C:\msys64\mingw32

export ECHO
export CC
export INCLUDES
export CFLAGS

#dllinject failed - injection thread longer than 10s to execute
#force load failed:failed finding address of msvcrt!__mb_cur_max
# gcc -I/c/msys64/mingw32 -L/c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-unmod/ecl-21.2.1/build -Wall -m32 -s -shared -Wl,--subsystem,windows -c app_main.c -lecl -leclgc
# gcc -I/c/msys64/mingw32 -L/c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-unmod/ecl-21.2.1/build -Wall -m32 -s -shared -Wl,--subsystem,windows -o app_main.dll app_main.o -lecl -leclgc
# gcc -I/c/msys64/mingw32 -L/c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-unmod/ecl-21.2.1/build -Wall -m32 -s -shared -Wl,--subsystem,windows -c load_app_main.c -lecl -leclgc
# gcc -I/c/msys64/mingw32 -L/c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-unmod/ecl-21.2.1/build -Wall -m32 -s -shared -Wl,--subsystem,windows -o load_app_main.dll -L. load_app_main.o -lecl -leclgc
# gcc -I/c/msys64/mingw32 -L. -Wall -m32 -c loadself.c
# gcc -I/c/msys64/mingw32 -L. -Wall -m32 -o loadself.exe loadself.o
	
all: 
	#gcc -I../guile/include -L../guile/lib -Wall -c loadself.c -lguile-2.0
	#gcc -I../guile/include -L../guile/lib -Wall -o loadself.exe loadself.o -lguile-2.0
	#gcc -Wall -IC:\msys64\mingw32\include\chicken -c loadself.c C:\msys64\mingw32\lib\libchicken.a
	#gcc -Wall -IC:\msys64\mingw32\include\chicken -o loadself.exe loadself.o C:\msys64\mingw32\lib\libchicken.a
	#gcc -Wall -Ichicken -c loadself.c -lchicken
	#gcc -Wall -Ichicken -o loadself.exe loadself.o -lchicken
	##gcc -shared -Wall -IC:\msys64\mingw32\include\chicken -c launch_chicken.c -l:libchicken.a -lws2_32
	##gcc -shared -Wall -IC:\msys64\mingw32\include\chicken -o launch_chicken.dll launch_chicken.o -l:libchicken.a -lws2_32
	###gcc -shared -Wall -IC:\msys64\mingw32\include\chicken -c launch_chicken.c -Wl,--whole-archive -l:libchicken.a -Wl,--no-whole-archive -lws2_32
	###gcc -shared -Wall -IC:\msys64\mingw32\include\chicken -o launch_chicken.dll launch_chicken.o -Wl,--whole-archive -l:libchicken.a -Wl,--no-whole-archive -lws2_32
	gcc -shared -Wall -c dll-test.c
	gcc -shared -Wall -o dll-test.dll dll-test.o
	#--whole-archive

clean:
	rm -rf *.o *.exe *.dll
	#cd ../multithreaded-attach-test4 && rm -rf *.o *.exe *.dll launch_swank_addr load_app_addr setPathRes.txt start_app_main.txt
	#cd ../build && rm -rf start-swank-server.lisp loadself.* app_main.* load_app_main.*

