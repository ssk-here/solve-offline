@echo off
REM Sample usage:
REM  .\build.bat "WEEK3" "binary-tree-paths" 

REM Delete the existing executable file
REM > del .\WEEK3\binary-tree-paths.exe                                               

REM Compile the C++ source file to create a new executable
REM > make MAINFILE=.\WEEK3\binary-tree-paths                                         
REM g++ -Iinclude -Wall -g -o WEEK3/binary-tree-paths.exe WEEK3\binary-tree-paths.cpp

REM Run the executable with input and output files
REM > .\WEEK3\binary-tree-paths.exe .\WEEK3\data\binary-tree-paths_input.txt .\WEEK3\data\binary-tree-paths_output.txt

REM Ensure g++ is installed and its path is part of environment variable PATH
REM Ensure permissions are set to execute this batch file.
REM Ensure Check Execution Policy: PowerShell has an execution policy that determines whether scripts can be run. To check your current execution policy, run:
REM Get-ExecutionPolicy
REM If it’s set to Restricted, you won’t be able to run scripts. You can change it to a less restrictive policy (e.g., RemoteSigned or Unrestricted) using:
REM Set-ExecutionPolicy RemoteSigned

set MAINFOLDER=%1
set slug=%2

set MAINFILE=%MAINFOLDER%\%slug%
set EXEFILE=%MAINFILE%.exe
set CPPFILE=%MAINFILE%.cpp
set INPUTFILE=%MAINFOLDER%\data\%slug%_input.txt
set OUTPUTFILE=%MAINFOLDER%\data\%slug%_output.txt

echo folder=%MAINFOLDER%
echo mainfile=%MAINFILE%
echo EXEFILE=%EXEFILE%
echo CPPFILE=%CPPFILE%
echo INPUTFILE=%INPUTFILE%
echo OUTPUTFILE=%OUTPUTFILE%

REM Deleting contents of ouput file
if exist "%OUTPUTFILE%" (
    echo Deleting contents of %OUTPUTFILE%
    break > "%OUTPUTFILE%"
)


REM Deleting the existing executable file
if exist %EXEFILE% (
    echo deleting %EXEFILE%
    del %EXEFILE%
)

REM Compile the C++ source file to create a new executable
make MAINFILE=%MAINFILE%
if %errorlevel% neq 0 (
    echo Make failed with error code %errorlevel%.
    exit /b %errorlevel%
)
echo BUILD Successful. Running %EXEFILE%

REM Run the executable with input and output files
%EXEFILE% %INPUTFILE% %OUTPUTFILE%
if %errorlevel% neq 0 (
    echo %EXEFILE% failed with error code %errorlevel%.
    exit /b %errorlevel%
)
echo Complete. Check %OUTPUTFILE%
echo Displaying contents of %OUTPUTFILE%
type %OUTPUTFILE%
echo -------------------------------------------------
