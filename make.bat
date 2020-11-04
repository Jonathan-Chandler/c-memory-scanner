call mingw32-make clean
call mingw32-make

rem wait 1 second for test target application to start
start "test_application" "test_application.exe"
SLEEP 1
call unit_test.exe

call scanner.exe "DarkStone DSI"
