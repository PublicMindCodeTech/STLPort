call "C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcvarsall.bat" x86
call configure.bat msvc12
call cd build\lib
call nmake clean install