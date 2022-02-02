@ECHO OFF
call mingw32-make clean
echo.
call mingw32-make
echo.
if errorlevel 1 goto build_failed

rem wait 1 second for test target application to start
rem start "test_application" "test_application.exe"
rem SLEEP 1
echo.
rm -rf data/unit_tests/unit_test_save.dat
rm -rf data/unit_tests/save_dir/*
call unit_test.exe
if errorlevel 1 goto unit_test_failed
echo.
rem call scanner.exe "DarkStone DSI"
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
