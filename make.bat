@ECHO OFF
call mingw32-make clean
echo.
call mingw32-make
echo.
if errorlevel 1 goto build_failed

rem wait 1 second for test target application to start
start "test_application" "test_application.exe"
SLEEP 1
echo.
call unit_test.exe
if errorlevel 1 goto unit_test_failed
echo.
call scanner.exe "DarkStone DSI"
goto exit_make

:build_failed
echo.
echo Build failed
goto exit_make

:unit_test_failed
echo.
echo Unit test failed
goto exit_make

:exit_make
