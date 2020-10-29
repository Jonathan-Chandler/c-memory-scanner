del memscan-debug.exe
del build\debug\*.o
del build\no_debug\*.o
del build\unit_tests\*.o

call mingw32-make clean
call mingw32-make
call mingw32-make -f makefile-UnitTest
call unit_test.exe
call memscan-debug.exe "DarkStone DSI"
