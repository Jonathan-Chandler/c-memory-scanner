call mingw32-make clean
call mingw32-make
call mingw32-make -f makefile-UnitTest
call unit_test.exe
call memscan-debug.exe
