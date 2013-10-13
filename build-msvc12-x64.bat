call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86_amd64
call configure.bat msvc12x64
call cd build\lib
call nmake clean install