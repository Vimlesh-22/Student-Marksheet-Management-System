@echo off
echo Compiling Student Marksheet System...

REM Try different compilers
echo Trying g++ (MinGW)...
g++ Student-Marksheet.cpp -o Student-Marksheet.exe 2>nul
if exist Student-Marksheet.exe goto :success

echo Trying cl (Visual Studio)...
cl Student-Marksheet.cpp /Fe:Student-Marksheet.exe 2>nul
if exist Student-Marksheet.exe goto :success

echo Trying gcc...
gcc Student-Marksheet.cpp -o Student-Marksheet.exe -lstdc++ 2>nul
if exist Student-Marksheet.exe goto :success

REM If no compiler found
echo.
echo ===================================================
echo   NO C++ COMPILER FOUND ON YOUR SYSTEM
echo ===================================================
echo.
echo To compile this program, you need to install a C++ compiler:
echo.
echo 1. MinGW-w64 (Recommended for Windows):
echo    Download: https://www.mingw-w64.org/downloads/
echo    Or use: https://github.com/niXman/mingw-builds-binaries/releases
echo.
echo 2. Visual Studio Community (Free):
echo    Download: https://visualstudio.microsoft.com/
echo    Install with "Desktop development with C++" workload
echo.
echo 3. Code::Blocks (IDE with built-in compiler):
echo    Download: http://www.codeblocks.org/downloads
echo.
echo 4. Online Compiler (temporary solution):
echo    - Copy the Student-Marksheet.cpp code
echo    - Paste it at: https://www.onlinegdb.com/online_c++_compiler
echo    - Click Run to test the program
echo.
echo After installing a compiler, run this batch file again.
echo.
pause
goto :end

:success
echo.
echo ===================================================
echo   COMPILATION SUCCESSFUL!
echo ===================================================
echo.
echo Running the Student Marksheet System...
echo.
Student-Marksheet.exe

:end
