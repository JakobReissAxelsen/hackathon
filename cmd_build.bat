"C:\Qt\5.4\msvc2010_opengl\bin\qmake.exe" "C:\jenkins\jobs\Hackathon1\workspace\Hack2.pro" -spec win32-msvc2010
call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat"

"C:\Qt\Tools\QtCreator\bin\jom.exe" qmake_all
"C:\Qt\Tools\QtCreator\bin\jom.exe"
"C:\Qt\5.4\msvc2010_opengl\bin\windeployqt.exe" "C:\jenkins\jobs\Hackathon1\workspace\release\Hack2.exe"