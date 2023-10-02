@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 02/10/2023 @ 16:10:46
REM Compilador .: HTISISTEMAS
REM Destino ....: C:\HTI\SISCOM\SISCOM.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISCOM\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISCOM\lib;C:\HTI\SISCOM;
 SET OBJ=;C:\hti\SISCOM;

REM - XHarbour.xCompiler.prg(97) @ 16:10:46:539
ECHO .ÿ
ECHO * (001/765) Compilando CON21.PRG
 harbour.exe ".\CON21.PRG" /q /o".\CON21.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:46:602
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON21.obj" >> "b32.bc"
 echo ".\CON21.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:46:602
ECHO .ÿ
ECHO * (002/765) Compilando CON21.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:46:664
ECHO .ÿ
ECHO * (003/765) Compilando CON22.PRG
 harbour.exe ".\CON22.PRG" /q /o".\CON22.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:46:742
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON22.obj" >> "b32.bc"
 echo ".\CON22.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:46:742
ECHO .ÿ
ECHO * (004/765) Compilando CON22.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:46:805
ECHO .ÿ
ECHO * (005/765) Compilando CON24.PRG
 harbour.exe ".\CON24.PRG" /q /o".\CON24.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:46:852
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON24.obj" >> "b32.bc"
 echo ".\CON24.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:46:867
ECHO .ÿ
ECHO * (006/765) Compilando CON24.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:46:914
ECHO .ÿ
ECHO * (007/765) Compilando CON25.PRG
 harbour.exe ".\CON25.PRG" /q /o".\CON25.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:46:977
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON25.obj" >> "b32.bc"
 echo ".\CON25.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:46:977
ECHO .ÿ
ECHO * (008/765) Compilando CON25.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:039
ECHO .ÿ
ECHO * (009/765) Compilando CON41.PRG
 harbour.exe ".\CON41.PRG" /q /o".\CON41.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:102
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON41.obj" >> "b32.bc"
 echo ".\CON41.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:102
ECHO .ÿ
ECHO * (010/765) Compilando CON41.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:165
ECHO .ÿ
ECHO * (011/765) Compilando CON42.PRG
 harbour.exe ".\CON42.PRG" /q /o".\CON42.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:227
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON42.obj" >> "b32.bc"
 echo ".\CON42.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:227
ECHO .ÿ
ECHO * (012/765) Compilando CON42.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:290
ECHO .ÿ
ECHO * (013/765) Compilando CON212.PRG
 harbour.exe ".\CON212.PRG" /q /o".\CON212.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:368
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON212.obj" >> "b32.bc"
 echo ".\CON212.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:368
ECHO .ÿ
ECHO * (014/765) Compilando CON212.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:430
ECHO .ÿ
ECHO * (015/765) Compilando CON214.PRG
 harbour.exe ".\CON214.PRG" /q /o".\CON214.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:493
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON214.obj" >> "b32.bc"
 echo ".\CON214.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:493
ECHO .ÿ
ECHO * (016/765) Compilando CON214.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:555
ECHO .ÿ
ECHO * (017/765) Compilando CON221.PRG
 harbour.exe ".\CON221.PRG" /q /o".\CON221.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:633
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON221.obj" >> "b32.bc"
 echo ".\CON221.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:633
ECHO .ÿ
ECHO * (018/765) Compilando CON221.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:696
ECHO .ÿ
ECHO * (019/765) Compilando CON241.PRG
 harbour.exe ".\CON241.PRG" /q /o".\CON241.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:758
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON241.obj" >> "b32.bc"
 echo ".\CON241.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:758
ECHO .ÿ
ECHO * (020/765) Compilando CON241.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:837
ECHO .ÿ
ECHO * (021/765) Compilando CON241V.PRG
 harbour.exe ".\CON241V.PRG" /q /o".\CON241V.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:47:899
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON241V.obj" >> "b32.bc"
 echo ".\CON241V.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:47:899
ECHO .ÿ
ECHO * (022/765) Compilando CON241V.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:47:962
ECHO .ÿ
ECHO * (023/765) Compilando CON243.PRG
 harbour.exe ".\CON243.PRG" /q /o".\CON243.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:48:024
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON243.obj" >> "b32.bc"
 echo ".\CON243.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:48:024
ECHO .ÿ
ECHO * (024/765) Compilando CON243.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:48:086
ECHO .ÿ
ECHO * (025/765) Compilando CON251.PRG
 harbour.exe ".\CON251.PRG" /q /o".\CON251.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:48:477
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON251.obj" >> "b32.bc"
 echo ".\CON251.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:48:477
ECHO .ÿ
ECHO * (026/765) Compilando CON251.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:48:540
ECHO .ÿ
ECHO * (027/765) Compilando CON253.PRG
 harbour.exe ".\CON253.PRG" /q /o".\CON253.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:48:618
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON253.obj" >> "b32.bc"
 echo ".\CON253.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:48:618
ECHO .ÿ
ECHO * (028/765) Compilando CON253.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:48:680
ECHO .ÿ
ECHO * (029/765) Compilando CON411.PRG
 harbour.exe ".\CON411.PRG" /q /o".\CON411.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:48:743
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON411.obj" >> "b32.bc"
 echo ".\CON411.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:48:743
ECHO .ÿ
ECHO * (030/765) Compilando CON411.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:48:805
ECHO .ÿ
ECHO * (031/765) Compilando CON413.PRG
 harbour.exe ".\CON413.PRG" /q /o".\CON413.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:48:883
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON413.obj" >> "b32.bc"
 echo ".\CON413.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:48:883
ECHO .ÿ
ECHO * (032/765) Compilando CON413.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:48:946
ECHO .ÿ
ECHO * (033/765) Compilando CON414.PRG
 harbour.exe ".\CON414.PRG" /q /o".\CON414.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:008
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON414.obj" >> "b32.bc"
 echo ".\CON414.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:008
ECHO .ÿ
ECHO * (034/765) Compilando CON414.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:071
ECHO .ÿ
ECHO * (035/765) Compilando CON415.PRG
 harbour.exe ".\CON415.PRG" /q /o".\CON415.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:133
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON415.obj" >> "b32.bc"
 echo ".\CON415.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:133
ECHO .ÿ
ECHO * (036/765) Compilando CON415.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:196
ECHO .ÿ
ECHO * (037/765) Compilando CON418.PRG
 harbour.exe ".\CON418.PRG" /q /o".\CON418.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:258
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON418.obj" >> "b32.bc"
 echo ".\CON418.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:258
ECHO .ÿ
ECHO * (038/765) Compilando CON418.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:321
ECHO .ÿ
ECHO * (039/765) Compilando CON419.PRG
 harbour.exe ".\CON419.PRG" /q /o".\CON419.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:383
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON419.obj" >> "b32.bc"
 echo ".\CON419.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:383
ECHO .ÿ
ECHO * (040/765) Compilando CON419.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:446
ECHO .ÿ
ECHO * (041/765) Compilando CON420.PRG
 harbour.exe ".\CON420.PRG" /q /o".\CON420.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:524
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON420.obj" >> "b32.bc"
 echo ".\CON420.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:524
ECHO .ÿ
ECHO * (042/765) Compilando CON420.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:586
ECHO .ÿ
ECHO * (043/765) Compilando CON421.PRG
 harbour.exe ".\CON421.PRG" /q /o".\CON421.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:649
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON421.obj" >> "b32.bc"
 echo ".\CON421.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:649
ECHO .ÿ
ECHO * (044/765) Compilando CON421.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:711
ECHO .ÿ
ECHO * (045/765) Compilando CON422.PRG
 harbour.exe ".\CON422.PRG" /q /o".\CON422.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:774
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON422.obj" >> "b32.bc"
 echo ".\CON422.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:774
ECHO .ÿ
ECHO * (046/765) Compilando CON422.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:49:836
ECHO .ÿ
ECHO * (047/765) Compilando CON423.PRG
 harbour.exe ".\CON423.PRG" /q /o".\CON423.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:49:930
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON423.obj" >> "b32.bc"
 echo ".\CON423.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:49:930
ECHO .ÿ
ECHO * (048/765) Compilando CON423.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:008
ECHO .ÿ
ECHO * (049/765) Compilando CON424.PRG
 harbour.exe ".\CON424.PRG" /q /o".\CON424.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:070
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON424.obj" >> "b32.bc"
 echo ".\CON424.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:070
ECHO .ÿ
ECHO * (050/765) Compilando CON424.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:133
ECHO .ÿ
ECHO * (051/765) Compilando CON425.PRG
 harbour.exe ".\CON425.PRG" /q /o".\CON425.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:211
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON425.obj" >> "b32.bc"
 echo ".\CON425.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:211
ECHO .ÿ
ECHO * (052/765) Compilando CON425.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:273
ECHO .ÿ
ECHO * (053/765) Compilando CON426.PRG
 harbour.exe ".\CON426.PRG" /q /o".\CON426.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:336
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON426.obj" >> "b32.bc"
 echo ".\CON426.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:336
ECHO .ÿ
ECHO * (054/765) Compilando CON426.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:398
ECHO .ÿ
ECHO * (055/765) Compilando CON427.PRG
 harbour.exe ".\CON427.PRG" /q /o".\CON427.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:461
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON427.obj" >> "b32.bc"
 echo ".\CON427.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:461
ECHO .ÿ
ECHO * (056/765) Compilando CON427.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:523
ECHO .ÿ
ECHO * (057/765) Compilando CON429.PRG
 harbour.exe ".\CON429.PRG" /q /o".\CON429.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:586
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON429.obj" >> "b32.bc"
 echo ".\CON429.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:586
ECHO .ÿ
ECHO * (058/765) Compilando CON429.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:648
ECHO .ÿ
ECHO * (059/765) Compilando CON2111.PRG
 harbour.exe ".\CON2111.PRG" /q /o".\CON2111.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:727
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON2111.obj" >> "b32.bc"
 echo ".\CON2111.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:727
ECHO .ÿ
ECHO * (060/765) Compilando CON2111.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:789
ECHO .ÿ
ECHO * (061/765) Compilando CON2411.PRG
 harbour.exe ".\CON2411.PRG" /q /o".\CON2411.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:50:867
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON2411.obj" >> "b32.bc"
 echo ".\CON2411.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:50:867
ECHO .ÿ
ECHO * (062/765) Compilando CON2411.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:50:930
ECHO .ÿ
ECHO * (063/765) Compilando CON2511.PRG
 harbour.exe ".\CON2511.PRG" /q /o".\CON2511.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:008
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON2511.obj" >> "b32.bc"
 echo ".\CON2511.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:008
ECHO .ÿ
ECHO * (064/765) Compilando CON2511.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:070
ECHO .ÿ
ECHO * (065/765) Compilando CON4201.PRG
 harbour.exe ".\CON4201.PRG" /q /o".\CON4201.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:133
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4201.obj" >> "b32.bc"
 echo ".\CON4201.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:133
ECHO .ÿ
ECHO * (066/765) Compilando CON4201.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:195
ECHO .ÿ
ECHO * (067/765) Compilando CON4202.PRG
 harbour.exe ".\CON4202.PRG" /q /o".\CON4202.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:258
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4202.obj" >> "b32.bc"
 echo ".\CON4202.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:258
ECHO .ÿ
ECHO * (068/765) Compilando CON4202.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:320
ECHO .ÿ
ECHO * (069/765) Compilando CON4203.PRG
 harbour.exe ".\CON4203.PRG" /q /o".\CON4203.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:383
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4203.obj" >> "b32.bc"
 echo ".\CON4203.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:383
ECHO .ÿ
ECHO * (070/765) Compilando CON4203.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:445
ECHO .ÿ
ECHO * (071/765) Compilando CON4204.PRG
 harbour.exe ".\CON4204.PRG" /q /o".\CON4204.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:508
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4204.obj" >> "b32.bc"
 echo ".\CON4204.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:523
ECHO .ÿ
ECHO * (072/765) Compilando CON4204.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:586
ECHO .ÿ
ECHO * (073/765) Compilando CON4231.PRG
 harbour.exe ".\CON4231.PRG" /q /o".\CON4231.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:648
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4231.obj" >> "b32.bc"
 echo ".\CON4231.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:648
ECHO .ÿ
ECHO * (074/765) Compilando CON4231.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:711
ECHO .ÿ
ECHO * (075/765) Compilando SISCOM.PRG
 harbour.exe ".\SISCOM.PRG" /q /o".\SISCOM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:51:914
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SISCOM.obj" >> "b32.bc"
 echo ".\SISCOM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:51:914
ECHO .ÿ
ECHO * (076/765) Compilando SISCOM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:51:992
ECHO .ÿ
ECHO * (077/765) Compilando SAC1.PRG
 harbour.exe ".\SAC1.PRG" /q /o".\SAC1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:054
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC1.obj" >> "b32.bc"
 echo ".\SAC1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:054
ECHO .ÿ
ECHO * (078/765) Compilando SAC1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:117
ECHO .ÿ
ECHO * (079/765) Compilando SAC1BAN.PRG
 harbour.exe ".\SAC1BAN.PRG" /q /o".\SAC1BAN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:179
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC1BAN.obj" >> "b32.bc"
 echo ".\SAC1BAN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:179
ECHO .ÿ
ECHO * (080/765) Compilando SAC1BAN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:242
ECHO .ÿ
ECHO * (081/765) Compilando SAC1FIN.PRG
 harbour.exe ".\SAC1FIN.PRG" /q /o".\SAC1FIN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:304
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC1FIN.obj" >> "b32.bc"
 echo ".\SAC1FIN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:304
ECHO .ÿ
ECHO * (082/765) Compilando SAC1FIN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:367
ECHO .ÿ
ECHO * (083/765) Compilando SAC2CC11.PRG
 harbour.exe ".\SAC2CC11.PRG" /q /o".\SAC2CC11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:429
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC2CC11.obj" >> "b32.bc"
 echo ".\SAC2CC11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:429
ECHO .ÿ
ECHO * (084/765) Compilando SAC2CC11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:492
ECHO .ÿ
ECHO * (085/765) Compilando SAC2CC12.PRG
 harbour.exe ".\SAC2CC12.PRG" /q /o".\SAC2CC12.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:554
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC2CC12.obj" >> "b32.bc"
 echo ".\SAC2CC12.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:554
ECHO .ÿ
ECHO * (086/765) Compilando SAC2CC12.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:617
ECHO .ÿ
ECHO * (087/765) Compilando SAC2FIN.PRG
 harbour.exe ".\SAC2FIN.PRG" /q /o".\SAC2FIN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:679
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC2FIN.obj" >> "b32.bc"
 echo ".\SAC2FIN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:679
ECHO .ÿ
ECHO * (088/765) Compilando SAC2FIN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:742
ECHO .ÿ
ECHO * (089/765) Compilando SAC3.PRG
 harbour.exe ".\SAC3.PRG" /q /o".\SAC3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:804
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC3.obj" >> "b32.bc"
 echo ".\SAC3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:804
ECHO .ÿ
ECHO * (090/765) Compilando SAC3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:867
ECHO .ÿ
ECHO * (091/765) Compilando SAC4CAL.PRG
 harbour.exe ".\SAC4CAL.PRG" /q /o".\SAC4CAL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:52:929
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4CAL.obj" >> "b32.bc"
 echo ".\SAC4CAL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:52:929
ECHO .ÿ
ECHO * (092/765) Compilando SAC4CAL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:52:992
ECHO .ÿ
ECHO * (093/765) Compilando SAC4CC.PRG
 harbour.exe ".\SAC4CC.PRG" /q /o".\SAC4CC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:054
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4CC.obj" >> "b32.bc"
 echo ".\SAC4CC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:054
ECHO .ÿ
ECHO * (094/765) Compilando SAC4CC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:117
ECHO .ÿ
ECHO * (095/765) Compilando SAC4FLU.PRG
 harbour.exe ".\SAC4FLU.PRG" /q /o".\SAC4FLU.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:195
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4FLU.obj" >> "b32.bc"
 echo ".\SAC4FLU.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:195
ECHO .ÿ
ECHO * (096/765) Compilando SAC4FLU.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:257
ECHO .ÿ
ECHO * (097/765) Compilando SAC4SER.PRG
 harbour.exe ".\SAC4SER.PRG" /q /o".\SAC4SER.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:320
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4SER.obj" >> "b32.bc"
 echo ".\SAC4SER.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:320
ECHO .ÿ
ECHO * (098/765) Compilando SAC4SER.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:382
ECHO .ÿ
ECHO * (099/765) Compilando SAC4TEL.PRG
 harbour.exe ".\SAC4TEL.PRG" /q /o".\SAC4TEL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:445
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4TEL.obj" >> "b32.bc"
 echo ".\SAC4TEL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:445
ECHO .ÿ
ECHO * (100/765) Compilando SAC4TEL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:491
ECHO .ÿ
ECHO * (101/765) Compilando SAC5CAD.PRG
 harbour.exe ".\SAC5CAD.PRG" /q /o".\SAC5CAD.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:554
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5CAD.obj" >> "b32.bc"
 echo ".\SAC5CAD.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:554
ECHO .ÿ
ECHO * (102/765) Compilando SAC5CAD.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:616
ECHO .ÿ
ECHO * (103/765) Compilando SAC5CAD2.PRG
 harbour.exe ".\SAC5CAD2.PRG" /q /o".\SAC5CAD2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:695
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5CAD2.obj" >> "b32.bc"
 echo ".\SAC5CAD2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:695
ECHO .ÿ
ECHO * (104/765) Compilando SAC5CAD2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:741
ECHO .ÿ
ECHO * (105/765) Compilando SAC5CLI.PRG
 harbour.exe ".\SAC5CLI.PRG" /q /o".\SAC5CLI.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:820
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5CLI.obj" >> "b32.bc"
 echo ".\SAC5CLI.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:820
ECHO .ÿ
ECHO * (106/765) Compilando SAC5CLI.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:53:882
ECHO .ÿ
ECHO * (107/765) Compilando SAC5COM1.PRG
 harbour.exe ".\SAC5COM1.PRG" /q /o".\SAC5COM1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:53:960
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM1.obj" >> "b32.bc"
 echo ".\SAC5COM1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:53:960
ECHO .ÿ
ECHO * (108/765) Compilando SAC5COM1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:023
ECHO .ÿ
ECHO * (109/765) Compilando SAC5COM2.PRG
 harbour.exe ".\SAC5COM2.PRG" /q /o".\SAC5COM2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:085
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM2.obj" >> "b32.bc"
 echo ".\SAC5COM2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:085
ECHO .ÿ
ECHO * (110/765) Compilando SAC5COM2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:148
ECHO .ÿ
ECHO * (111/765) Compilando SAC5COM3.PRG
 harbour.exe ".\SAC5COM3.PRG" /q /o".\SAC5COM3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:210
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM3.obj" >> "b32.bc"
 echo ".\SAC5COM3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:210
ECHO .ÿ
ECHO * (112/765) Compilando SAC5COM3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:288
ECHO .ÿ
ECHO * (113/765) Compilando SAC5COM4.PRG
 harbour.exe ".\SAC5COM4.PRG" /q /o".\SAC5COM4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:351
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM4.obj" >> "b32.bc"
 echo ".\SAC5COM4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:351
ECHO .ÿ
ECHO * (114/765) Compilando SAC5COM4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:413
ECHO .ÿ
ECHO * (115/765) Compilando SAC5COM6.PRG
 harbour.exe ".\SAC5COM6.PRG" /q /o".\SAC5COM6.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:476
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM6.obj" >> "b32.bc"
 echo ".\SAC5COM6.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:476
ECHO .ÿ
ECHO * (116/765) Compilando SAC5COM6.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:538
ECHO .ÿ
ECHO * (117/765) Compilando SAC5COM7.PRG
 harbour.exe ".\SAC5COM7.PRG" /q /o".\SAC5COM7.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:601
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM7.obj" >> "b32.bc"
 echo ".\SAC5COM7.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:601
ECHO .ÿ
ECHO * (118/765) Compilando SAC5COM7.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:663
ECHO .ÿ
ECHO * (119/765) Compilando SAC5COM8.PRG
 harbour.exe ".\SAC5COM8.PRG" /q /o".\SAC5COM8.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:726
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM8.obj" >> "b32.bc"
 echo ".\SAC5COM8.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:726
ECHO .ÿ
ECHO * (120/765) Compilando SAC5COM8.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:788
ECHO .ÿ
ECHO * (121/765) Compilando SAC5DES.PRG
 harbour.exe ".\SAC5DES.PRG" /q /o".\SAC5DES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:866
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5DES.obj" >> "b32.bc"
 echo ".\SAC5DES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:866
ECHO .ÿ
ECHO * (122/765) Compilando SAC5DES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:54:929
ECHO .ÿ
ECHO * (123/765) Compilando SAC5ENV1.PRG
 harbour.exe ".\SAC5ENV1.PRG" /q /o".\SAC5ENV1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:54:991
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ENV1.obj" >> "b32.bc"
 echo ".\SAC5ENV1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:54:991
ECHO .ÿ
ECHO * (124/765) Compilando SAC5ENV1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:054
ECHO .ÿ
ECHO * (125/765) Compilando SAC5ET11.PRG
 harbour.exe ".\SAC5ET11.PRG" /q /o".\SAC5ET11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:116
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET11.obj" >> "b32.bc"
 echo ".\SAC5ET11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:116
ECHO .ÿ
ECHO * (126/765) Compilando SAC5ET11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:179
ECHO .ÿ
ECHO * (127/765) Compilando SAC5ET12.PRG
 harbour.exe ".\SAC5ET12.PRG" /q /o".\SAC5ET12.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:241
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET12.obj" >> "b32.bc"
 echo ".\SAC5ET12.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:241
ECHO .ÿ
ECHO * (128/765) Compilando SAC5ET12.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:304
ECHO .ÿ
ECHO * (129/765) Compilando SAC5ET13.PRG
 harbour.exe ".\SAC5ET13.PRG" /q /o".\SAC5ET13.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:366
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET13.obj" >> "b32.bc"
 echo ".\SAC5ET13.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:366
ECHO .ÿ
ECHO * (130/765) Compilando SAC5ET13.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:429
ECHO .ÿ
ECHO * (131/765) Compilando SAC5ET14.PRG
 harbour.exe ".\SAC5ET14.PRG" /q /o".\SAC5ET14.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:491
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET14.obj" >> "b32.bc"
 echo ".\SAC5ET14.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:491
ECHO .ÿ
ECHO * (132/765) Compilando SAC5ET14.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:553
ECHO .ÿ
ECHO * (133/765) Compilando SAC5ET16.PRG
 harbour.exe ".\SAC5ET16.PRG" /q /o".\SAC5ET16.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:632
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET16.obj" >> "b32.bc"
 echo ".\SAC5ET16.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:632
ECHO .ÿ
ECHO * (134/765) Compilando SAC5ET16.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:694
ECHO .ÿ
ECHO * (135/765) Compilando SAC5ET17.PRG
 harbour.exe ".\SAC5ET17.PRG" /q /o".\SAC5ET17.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:757
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET17.obj" >> "b32.bc"
 echo ".\SAC5ET17.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:757
ECHO .ÿ
ECHO * (136/765) Compilando SAC5ET17.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:819
ECHO .ÿ
ECHO * (137/765) Compilando SAC5ET19.PRG
 harbour.exe ".\SAC5ET19.PRG" /q /o".\SAC5ET19.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:55:882
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET19.obj" >> "b32.bc"
 echo ".\SAC5ET19.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:55:882
ECHO .ÿ
ECHO * (138/765) Compilando SAC5ET19.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:55:944
ECHO .ÿ
ECHO * (139/765) Compilando SAC5ET20.PRG
 harbour.exe ".\SAC5ET20.PRG" /q /o".\SAC5ET20.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:022
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET20.obj" >> "b32.bc"
 echo ".\SAC5ET20.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:022
ECHO .ÿ
ECHO * (140/765) Compilando SAC5ET20.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:085
ECHO .ÿ
ECHO * (141/765) Compilando SAC5ET21.PRG
 harbour.exe ".\SAC5ET21.PRG" /q /o".\SAC5ET21.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:147
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET21.obj" >> "b32.bc"
 echo ".\SAC5ET21.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:147
ECHO .ÿ
ECHO * (142/765) Compilando SAC5ET21.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:210
ECHO .ÿ
ECHO * (143/765) Compilando SAC5ET41.PRG
 harbour.exe ".\SAC5ET41.PRG" /q /o".\SAC5ET41.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:272
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET41.obj" >> "b32.bc"
 echo ".\SAC5ET41.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:272
ECHO .ÿ
ECHO * (144/765) Compilando SAC5ET41.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:335
ECHO .ÿ
ECHO * (145/765) Compilando SAC5ET42.PRG
 harbour.exe ".\SAC5ET42.PRG" /q /o".\SAC5ET42.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:397
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ET42.obj" >> "b32.bc"
 echo ".\SAC5ET42.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:397
ECHO .ÿ
ECHO * (146/765) Compilando SAC5ET42.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:460
ECHO .ÿ
ECHO * (147/765) Compilando SAC5ETQ.PRG
 harbour.exe ".\SAC5ETQ.PRG" /q /o".\SAC5ETQ.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:522
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ETQ.obj" >> "b32.bc"
 echo ".\SAC5ETQ.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:522
ECHO .ÿ
ECHO * (148/765) Compilando SAC5ETQ.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:585
ECHO .ÿ
ECHO * (149/765) Compilando SAC5ETQ1.PRG
 harbour.exe ".\SAC5ETQ1.PRG" /q /o".\SAC5ETQ1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:647
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ETQ1.obj" >> "b32.bc"
 echo ".\SAC5ETQ1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:647
ECHO .ÿ
ECHO * (150/765) Compilando SAC5ETQ1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:709
ECHO .ÿ
ECHO * (151/765) Compilando SAC5ETQ3.PRG
 harbour.exe ".\SAC5ETQ3.PRG" /q /o".\SAC5ETQ3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:772
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ETQ3.obj" >> "b32.bc"
 echo ".\SAC5ETQ3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:772
ECHO .ÿ
ECHO * (152/765) Compilando SAC5ETQ3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:834
ECHO .ÿ
ECHO * (153/765) Compilando SAC5ETQ4.PRG
 harbour.exe ".\SAC5ETQ4.PRG" /q /o".\SAC5ETQ4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:56:897
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ETQ4.obj" >> "b32.bc"
 echo ".\SAC5ETQ4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:56:897
ECHO .ÿ
ECHO * (154/765) Compilando SAC5ETQ4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:56:959
ECHO .ÿ
ECHO * (155/765) Compilando SAC5ETQ5.PRG
 harbour.exe ".\SAC5ETQ5.PRG" /q /o".\SAC5ETQ5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:57:022
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ETQ5.obj" >> "b32.bc"
 echo ".\SAC5ETQ5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:57:022
ECHO .ÿ
ECHO * (156/765) Compilando SAC5ETQ5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:57:084
ECHO .ÿ
ECHO * (157/765) Compilando SAC5MIN.PRG
 harbour.exe ".\SAC5MIN.PRG" /q /o".\SAC5MIN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:57:147
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5MIN.obj" >> "b32.bc"
 echo ".\SAC5MIN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:57:147
ECHO .ÿ
ECHO * (158/765) Compilando SAC5MIN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:57:209
ECHO .ÿ
ECHO * (159/765) Compilando SAC5NOT2.PRG
 harbour.exe ".\SAC5NOT2.PRG" /q /o".\SAC5NOT2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:57:272
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT2.obj" >> "b32.bc"
 echo ".\SAC5NOT2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:57:272
ECHO .ÿ
ECHO * (160/765) Compilando SAC5NOT2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:57:334
ECHO .ÿ
ECHO * (161/765) Compilando SAC5NOT3.PRG
 harbour.exe ".\SAC5NOT3.PRG" /q /o".\SAC5NOT3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:57:584
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT3.obj" >> "b32.bc"
 echo ".\SAC5NOT3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:57:584
ECHO .ÿ
ECHO * (162/765) Compilando SAC5NOT3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:57:647
ECHO .ÿ
ECHO * (163/765) Compilando SAC5NOT6.PRG
 harbour.exe ".\SAC5NOT6.PRG" /q /o".\SAC5NOT6.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:57:709
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT6.obj" >> "b32.bc"
 echo ".\SAC5NOT6.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:57:709
ECHO .ÿ
ECHO * (164/765) Compilando SAC5NOT6.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:58:053
ECHO .ÿ
ECHO * (165/765) Compilando SAC5NOT7.PRG
 harbour.exe ".\SAC5NOT7.PRG" /q /o".\SAC5NOT7.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:58:443
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT7.obj" >> "b32.bc"
 echo ".\SAC5NOT7.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:58:443
ECHO .ÿ
ECHO * (166/765) Compilando SAC5NOT7.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:58:506
ECHO .ÿ
ECHO * (167/765) Compilando SAC5NOT8.PRG
 harbour.exe ".\SAC5NOT8.PRG" /q /o".\SAC5NOT8.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:58:647
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT8.obj" >> "b32.bc"
 echo ".\SAC5NOT8.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:58:647
ECHO .ÿ
ECHO * (168/765) Compilando SAC5NOT8.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:58:709
ECHO .ÿ
ECHO * (169/765) Compilando SAC5ORC2.PRG
 harbour.exe ".\SAC5ORC2.PRG" /q /o".\SAC5ORC2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:58:787
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ORC2.obj" >> "b32.bc"
 echo ".\SAC5ORC2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:58:787
ECHO .ÿ
ECHO * (170/765) Compilando SAC5ORC2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:58:850
ECHO .ÿ
ECHO * (171/765) Compilando SAC5P10.PRG
 harbour.exe ".\SAC5P10.PRG" /q /o".\SAC5P10.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:10:58:912
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5P10.obj" >> "b32.bc"
 echo ".\SAC5P10.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:10:58:912
ECHO .ÿ
ECHO * (172/765) Compilando SAC5P10.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:10:59:943
ECHO .ÿ
ECHO * (173/765) Compilando SAC5P11.PRG
 harbour.exe ".\SAC5P11.PRG" /q /o".\SAC5P11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:006
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5P11.obj" >> "b32.bc"
 echo ".\SAC5P11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:006
ECHO .ÿ
ECHO * (174/765) Compilando SAC5P11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:068
ECHO .ÿ
ECHO * (175/765) Compilando SAC5PE10.PRG
 harbour.exe ".\SAC5PE10.PRG" /q /o".\SAC5PE10.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:131
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PE10.obj" >> "b32.bc"
 echo ".\SAC5PE10.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:131
ECHO .ÿ
ECHO * (176/765) Compilando SAC5PE10.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:193
ECHO .ÿ
ECHO * (177/765) Compilando SAC5PE11.PRG
 harbour.exe ".\SAC5PE11.PRG" /q /o".\SAC5PE11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:256
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PE11.obj" >> "b32.bc"
 echo ".\SAC5PE11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:256
ECHO .ÿ
ECHO * (178/765) Compilando SAC5PE11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:318
ECHO .ÿ
ECHO * (179/765) Compilando SAC5PE12.PRG
 harbour.exe ".\SAC5PE12.PRG" /q /o".\SAC5PE12.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:380
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PE12.obj" >> "b32.bc"
 echo ".\SAC5PE12.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:380
ECHO .ÿ
ECHO * (180/765) Compilando SAC5PE12.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:443
ECHO .ÿ
ECHO * (181/765) Compilando SAC5PE14.PRG
 harbour.exe ".\SAC5PE14.PRG" /q /o".\SAC5PE14.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:505
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PE14.obj" >> "b32.bc"
 echo ".\SAC5PE14.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:505
ECHO .ÿ
ECHO * (182/765) Compilando SAC5PE14.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:568
ECHO .ÿ
ECHO * (183/765) Compilando SAC5PE21.PRG
 harbour.exe ".\SAC5PE21.PRG" /q /o".\SAC5PE21.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:646
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PE21.obj" >> "b32.bc"
 echo ".\SAC5PE21.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:646
ECHO .ÿ
ECHO * (184/765) Compilando SAC5PE21.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:709
ECHO .ÿ
ECHO * (185/765) Compilando SAC5PED.PRG
 harbour.exe ".\SAC5PED.PRG" /q /o".\SAC5PED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:771
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED.obj" >> "b32.bc"
 echo ".\SAC5PED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:771
ECHO .ÿ
ECHO * (186/765) Compilando SAC5PED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:834
ECHO .ÿ
ECHO * (187/765) Compilando SAC5PED2.PRG
 harbour.exe ".\SAC5PED2.PRG" /q /o".\SAC5PED2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:00:927
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED2.obj" >> "b32.bc"
 echo ".\SAC5PED2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:00:927
ECHO .ÿ
ECHO * (188/765) Compilando SAC5PED2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:00:990
ECHO .ÿ
ECHO * (189/765) Compilando SAC5PED4.PRG
 harbour.exe ".\SAC5PED4.PRG" /q /o".\SAC5PED4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:068
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED4.obj" >> "b32.bc"
 echo ".\SAC5PED4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:068
ECHO .ÿ
ECHO * (190/765) Compilando SAC5PED4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:130
ECHO .ÿ
ECHO * (191/765) Compilando SAC5PED6.PRG
 harbour.exe ".\SAC5PED6.PRG" /q /o".\SAC5PED6.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:193
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED6.obj" >> "b32.bc"
 echo ".\SAC5PED6.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:193
ECHO .ÿ
ECHO * (192/765) Compilando SAC5PED6.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:255
ECHO .ÿ
ECHO * (193/765) Compilando SAC5PED7.PRG
 harbour.exe ".\SAC5PED7.PRG" /q /o".\SAC5PED7.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:333
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED7.obj" >> "b32.bc"
 echo ".\SAC5PED7.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:333
ECHO .ÿ
ECHO * (194/765) Compilando SAC5PED7.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:396
ECHO .ÿ
ECHO * (195/765) Compilando SAC5PED8.PRG
 harbour.exe ".\SAC5PED8.PRG" /q /o".\SAC5PED8.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:458
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED8.obj" >> "b32.bc"
 echo ".\SAC5PED8.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:458
ECHO .ÿ
ECHO * (196/765) Compilando SAC5PED8.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:521
ECHO .ÿ
ECHO * (197/765) Compilando SAC5PED9.PRG
 harbour.exe ".\SAC5PED9.PRG" /q /o".\SAC5PED9.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:599
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED9.obj" >> "b32.bc"
 echo ".\SAC5PED9.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:599
ECHO .ÿ
ECHO * (198/765) Compilando SAC5PED9.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:661
ECHO .ÿ
ECHO * (199/765) Compilando SAC5PER1.PRG
 harbour.exe ".\SAC5PER1.PRG" /q /o".\SAC5PER1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:740
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PER1.obj" >> "b32.bc"
 echo ".\SAC5PER1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:740
ECHO .ÿ
ECHO * (200/765) Compilando SAC5PER1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:802
ECHO .ÿ
ECHO * (201/765) Compilando SAC5PER2.PRG
 harbour.exe ".\SAC5PER2.PRG" /q /o".\SAC5PER2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:865
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PER2.obj" >> "b32.bc"
 echo ".\SAC5PER2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:865
ECHO .ÿ
ECHO * (202/765) Compilando SAC5PER2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:01:927
ECHO .ÿ
ECHO * (203/765) Compilando SAC5PER3.PRG
 harbour.exe ".\SAC5PER3.PRG" /q /o".\SAC5PER3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:01:989
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PER3.obj" >> "b32.bc"
 echo ".\SAC5PER3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:01:989
ECHO .ÿ
ECHO * (204/765) Compilando SAC5PER3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:052
ECHO .ÿ
ECHO * (205/765) Compilando SAC5PERF.PRG
 harbour.exe ".\SAC5PERF.PRG" /q /o".\SAC5PERF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:114
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PERF.obj" >> "b32.bc"
 echo ".\SAC5PERF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:114
ECHO .ÿ
ECHO * (206/765) Compilando SAC5PERF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:177
ECHO .ÿ
ECHO * (207/765) Compilando SAC5PLA1.PRG
 harbour.exe ".\SAC5PLA1.PRG" /q /o".\SAC5PLA1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:239
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PLA1.obj" >> "b32.bc"
 echo ".\SAC5PLA1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:239
ECHO .ÿ
ECHO * (208/765) Compilando SAC5PLA1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:286
ECHO .ÿ
ECHO * (209/765) Compilando SAC5ROM1.PRG
 harbour.exe ".\SAC5ROM1.PRG" /q /o".\SAC5ROM1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:364
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM1.obj" >> "b32.bc"
 echo ".\SAC5ROM1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:364
ECHO .ÿ
ECHO * (210/765) Compilando SAC5ROM1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:411
ECHO .ÿ
ECHO * (211/765) Compilando SAC5ROM2.PRG
 harbour.exe ".\SAC5ROM2.PRG" /q /o".\SAC5ROM2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:474
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM2.obj" >> "b32.bc"
 echo ".\SAC5ROM2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:474
ECHO .ÿ
ECHO * (212/765) Compilando SAC5ROM2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:536
ECHO .ÿ
ECHO * (213/765) Compilando SAC5ROM3.PRG
 harbour.exe ".\SAC5ROM3.PRG" /q /o".\SAC5ROM3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:599
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM3.obj" >> "b32.bc"
 echo ".\SAC5ROM3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:599
ECHO .ÿ
ECHO * (214/765) Compilando SAC5ROM3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:661
ECHO .ÿ
ECHO * (215/765) Compilando SAC5ROM4.PRG
 harbour.exe ".\SAC5ROM4.PRG" /q /o".\SAC5ROM4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:724
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM4.obj" >> "b32.bc"
 echo ".\SAC5ROM4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:724
ECHO .ÿ
ECHO * (216/765) Compilando SAC5ROM4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:786
ECHO .ÿ
ECHO * (217/765) Compilando SAC5ROM5.PRG
 harbour.exe ".\SAC5ROM5.PRG" /q /o".\SAC5ROM5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:849
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM5.obj" >> "b32.bc"
 echo ".\SAC5ROM5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:849
ECHO .ÿ
ECHO * (218/765) Compilando SAC5ROM5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:02:911
ECHO .ÿ
ECHO * (219/765) Compilando SAC12.PRG
 harbour.exe ".\SAC12.PRG" /q /o".\SAC12.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:02:974
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC12.obj" >> "b32.bc"
 echo ".\SAC12.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:02:974
ECHO .ÿ
ECHO * (220/765) Compilando SAC12.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:052
ECHO .ÿ
ECHO * (221/765) Compilando SAC17.PRG
 harbour.exe ".\SAC17.PRG" /q /o".\SAC17.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:114
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC17.obj" >> "b32.bc"
 echo ".\SAC17.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:114
ECHO .ÿ
ECHO * (222/765) Compilando SAC17.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:177
ECHO .ÿ
ECHO * (223/765) Compilando SAC18.PRG
 harbour.exe ".\SAC18.PRG" /q /o".\SAC18.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:239
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC18.obj" >> "b32.bc"
 echo ".\SAC18.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:239
ECHO .ÿ
ECHO * (224/765) Compilando SAC18.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:302
ECHO .ÿ
ECHO * (225/765) Compilando SAC22.PRG
 harbour.exe ".\SAC22.PRG" /q /o".\SAC22.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:458
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC22.obj" >> "b32.bc"
 echo ".\SAC22.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:458
ECHO .ÿ
ECHO * (226/765) Compilando SAC22.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:536
ECHO .ÿ
ECHO * (227/765) Compilando SAC23.PRG
 harbour.exe ".\SAC23.PRG" /q /o".\SAC23.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:598
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC23.obj" >> "b32.bc"
 echo ".\SAC23.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:598
ECHO .ÿ
ECHO * (228/765) Compilando SAC23.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:661
ECHO .ÿ
ECHO * (229/765) Compilando SAC23EXP.PRG
 harbour.exe ".\SAC23EXP.PRG" /q /o".\SAC23EXP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:723
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC23EXP.obj" >> "b32.bc"
 echo ".\SAC23EXP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:723
ECHO .ÿ
ECHO * (230/765) Compilando SAC23EXP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:786
ECHO .ÿ
ECHO * (231/765) Compilando SAC25.PRG
 harbour.exe ".\SAC25.PRG" /q /o".\SAC25.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:848
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC25.obj" >> "b32.bc"
 echo ".\SAC25.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:848
ECHO .ÿ
ECHO * (232/765) Compilando SAC25.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:03:911
ECHO .ÿ
ECHO * (233/765) Compilando SAC26.PRG
 harbour.exe ".\SAC26.PRG" /q /o".\SAC26.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:03:973
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC26.obj" >> "b32.bc"
 echo ".\SAC26.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:03:973
ECHO .ÿ
ECHO * (234/765) Compilando SAC26.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:04:051
ECHO .ÿ
ECHO * (235/765) Compilando SAC27.PRG
 harbour.exe ".\SAC27.PRG" /q /o".\SAC27.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:04:145
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC27.obj" >> "b32.bc"
 echo ".\SAC27.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:04:145
ECHO .ÿ
ECHO * (236/765) Compilando SAC27.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:04:208
ECHO .ÿ
ECHO * (237/765) Compilando SAC29.PRG
 harbour.exe ".\SAC29.PRG" /q /o".\SAC29.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:04:270
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC29.obj" >> "b32.bc"
 echo ".\SAC29.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:04:270
ECHO .ÿ
ECHO * (238/765) Compilando SAC29.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:04:348
ECHO .ÿ
ECHO * (239/765) Compilando SAC30.PRG
 harbour.exe ".\SAC30.PRG" /q /o".\SAC30.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:04:692
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC30.obj" >> "b32.bc"
 echo ".\SAC30.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:04:692
ECHO .ÿ
ECHO * (240/765) Compilando SAC30.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:04:770
ECHO .ÿ
ECHO * (241/765) Compilando SAC31.PRG
 harbour.exe ".\SAC31.PRG" /q /o".\SAC31.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:04:833
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC31.obj" >> "b32.bc"
 echo ".\SAC31.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:04:833
ECHO .ÿ
ECHO * (242/765) Compilando SAC31.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:04:895
ECHO .ÿ
ECHO * (243/765) Compilando SAC31_0.PRG
 harbour.exe ".\SAC31_0.PRG" /q /o".\SAC31_0.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:04:958
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC31_0.obj" >> "b32.bc"
 echo ".\SAC31_0.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:04:958
ECHO .ÿ
ECHO * (244/765) Compilando SAC31_0.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:020
ECHO .ÿ
ECHO * (245/765) Compilando SAC31_1.PRG
 harbour.exe ".\SAC31_1.PRG" /q /o".\SAC31_1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:083
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC31_1.obj" >> "b32.bc"
 echo ".\SAC31_1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:083
ECHO .ÿ
ECHO * (246/765) Compilando SAC31_1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:145
ECHO .ÿ
ECHO * (247/765) Compilando SAC33.PRG
 harbour.exe ".\SAC33.PRG" /q /o".\SAC33.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:239
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC33.obj" >> "b32.bc"
 echo ".\SAC33.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:239
ECHO .ÿ
ECHO * (248/765) Compilando SAC33.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:301
ECHO .ÿ
ECHO * (249/765) Compilando SAC34.PRG
 harbour.exe ".\SAC34.PRG" /q /o".\SAC34.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:364
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC34.obj" >> "b32.bc"
 echo ".\SAC34.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:364
ECHO .ÿ
ECHO * (250/765) Compilando SAC34.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:426
ECHO .ÿ
ECHO * (251/765) Compilando SAC36.PRG
 harbour.exe ".\SAC36.PRG" /q /o".\SAC36.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:489
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC36.obj" >> "b32.bc"
 echo ".\SAC36.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:489
ECHO .ÿ
ECHO * (252/765) Compilando SAC36.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:551
ECHO .ÿ
ECHO * (253/765) Compilando SAC37.PRG
 harbour.exe ".\SAC37.PRG" /q /o".\SAC37.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:614
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC37.obj" >> "b32.bc"
 echo ".\SAC37.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:614
ECHO .ÿ
ECHO * (254/765) Compilando SAC37.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:676
ECHO .ÿ
ECHO * (255/765) Compilando SAC38.PRG
 harbour.exe ".\SAC38.PRG" /q /o".\SAC38.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:739
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC38.obj" >> "b32.bc"
 echo ".\SAC38.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:739
ECHO .ÿ
ECHO * (256/765) Compilando SAC38.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:801
ECHO .ÿ
ECHO * (257/765) Compilando SAC39.PRG
 harbour.exe ".\SAC39.PRG" /q /o".\SAC39.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:05:879
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC39.obj" >> "b32.bc"
 echo ".\SAC39.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:05:879
ECHO .ÿ
ECHO * (258/765) Compilando SAC39.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:05:942
ECHO .ÿ
ECHO * (259/765) Compilando SAC43.PRG
 harbour.exe ".\SAC43.PRG" /q /o".\SAC43.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:020
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC43.obj" >> "b32.bc"
 echo ".\SAC43.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:020
ECHO .ÿ
ECHO * (260/765) Compilando SAC43.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:082
ECHO .ÿ
ECHO * (261/765) Compilando SAC45.PRG
 harbour.exe ".\SAC45.PRG" /q /o".\SAC45.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:145
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC45.obj" >> "b32.bc"
 echo ".\SAC45.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:145
ECHO .ÿ
ECHO * (262/765) Compilando SAC45.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:192
ECHO .ÿ
ECHO * (263/765) Compilando SAC46.PRG
 harbour.exe ".\SAC46.PRG" /q /o".\SAC46.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:270
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC46.obj" >> "b32.bc"
 echo ".\SAC46.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:270
ECHO .ÿ
ECHO * (264/765) Compilando SAC46.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:332
ECHO .ÿ
ECHO * (265/765) Compilando SAC51.PRG
 harbour.exe ".\SAC51.PRG" /q /o".\SAC51.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:410
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC51.obj" >> "b32.bc"
 echo ".\SAC51.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:410
ECHO .ÿ
ECHO * (266/765) Compilando SAC51.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:473
ECHO .ÿ
ECHO * (267/765) Compilando SAC54.PRG
 harbour.exe ".\SAC54.PRG" /q /o".\SAC54.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:551
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC54.obj" >> "b32.bc"
 echo ".\SAC54.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:551
ECHO .ÿ
ECHO * (268/765) Compilando SAC54.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:613
ECHO .ÿ
ECHO * (269/765) Compilando SAC57.PRG
 harbour.exe ".\SAC57.PRG" /q /o".\SAC57.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:676
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC57.obj" >> "b32.bc"
 echo ".\SAC57.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:676
ECHO .ÿ
ECHO * (270/765) Compilando SAC57.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:738
ECHO .ÿ
ECHO * (271/765) Compilando SAC58.PRG
 harbour.exe ".\SAC58.PRG" /q /o".\SAC58.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:801
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC58.obj" >> "b32.bc"
 echo ".\SAC58.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:801
ECHO .ÿ
ECHO * (272/765) Compilando SAC58.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:863
ECHO .ÿ
ECHO * (273/765) Compilando SAC59.PRG
 harbour.exe ".\SAC59.PRG" /q /o".\SAC59.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:06:926
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC59.obj" >> "b32.bc"
 echo ".\SAC59.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:06:926
ECHO .ÿ
ECHO * (274/765) Compilando SAC59.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:06:988
ECHO .ÿ
ECHO * (275/765) Compilando SAC63.PRG
 harbour.exe ".\SAC63.PRG" /q /o".\SAC63.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:051
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC63.obj" >> "b32.bc"
 echo ".\SAC63.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:051
ECHO .ÿ
ECHO * (276/765) Compilando SAC63.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:113
ECHO .ÿ
ECHO * (277/765) Compilando SAC120.PRG
 harbour.exe ".\SAC120.PRG" /q /o".\SAC120.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:176
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC120.obj" >> "b32.bc"
 echo ".\SAC120.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:176
ECHO .ÿ
ECHO * (278/765) Compilando SAC120.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:238
ECHO .ÿ
ECHO * (279/765) Compilando SAC121.PRG
 harbour.exe ".\SAC121.PRG" /q /o".\SAC121.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:301
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC121.obj" >> "b32.bc"
 echo ".\SAC121.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:301
ECHO .ÿ
ECHO * (280/765) Compilando SAC121.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:363
ECHO .ÿ
ECHO * (281/765) Compilando SAC122.PRG
 harbour.exe ".\SAC122.PRG" /q /o".\SAC122.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:426
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC122.obj" >> "b32.bc"
 echo ".\SAC122.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:426
ECHO .ÿ
ECHO * (282/765) Compilando SAC122.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:473
ECHO .ÿ
ECHO * (283/765) Compilando SAC210.PRG
 harbour.exe ".\SAC210.PRG" /q /o".\SAC210.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:535
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC210.obj" >> "b32.bc"
 echo ".\SAC210.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:535
ECHO .ÿ
ECHO * (284/765) Compilando SAC210.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:613
ECHO .ÿ
ECHO * (285/765) Compilando SAC231.PRG
 harbour.exe ".\SAC231.PRG" /q /o".\SAC231.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:676
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC231.obj" >> "b32.bc"
 echo ".\SAC231.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:676
ECHO .ÿ
ECHO * (286/765) Compilando SAC231.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:738
ECHO .ÿ
ECHO * (287/765) Compilando SAC233.PRG
 harbour.exe ".\SAC233.PRG" /q /o".\SAC233.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:801
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC233.obj" >> "b32.bc"
 echo ".\SAC233.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:801
ECHO .ÿ
ECHO * (288/765) Compilando SAC233.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:863
ECHO .ÿ
ECHO * (289/765) Compilando SAC234.PRG
 harbour.exe ".\SAC234.PRG" /q /o".\SAC234.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:07:926
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC234.obj" >> "b32.bc"
 echo ".\SAC234.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:07:926
ECHO .ÿ
ECHO * (290/765) Compilando SAC234.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:07:988
ECHO .ÿ
ECHO * (291/765) Compilando SAC301.PRG
 harbour.exe ".\SAC301.PRG" /q /o".\SAC301.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:051
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC301.obj" >> "b32.bc"
 echo ".\SAC301.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:051
ECHO .ÿ
ECHO * (292/765) Compilando SAC301.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:113
ECHO .ÿ
ECHO * (293/765) Compilando SAC511.PRG
 harbour.exe ".\SAC511.PRG" /q /o".\SAC511.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:191
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC511.obj" >> "b32.bc"
 echo ".\SAC511.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:191
ECHO .ÿ
ECHO * (294/765) Compilando SAC511.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:254
ECHO .ÿ
ECHO * (295/765) Compilando SAC521.PRG
 harbour.exe ".\SAC521.PRG" /q /o".\SAC521.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:316
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC521.obj" >> "b32.bc"
 echo ".\SAC521.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:316
ECHO .ÿ
ECHO * (296/765) Compilando SAC521.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:379
ECHO .ÿ
ECHO * (297/765) Compilando SAC522.PRG
 harbour.exe ".\SAC522.PRG" /q /o".\SAC522.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:457
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC522.obj" >> "b32.bc"
 echo ".\SAC522.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:457
ECHO .ÿ
ECHO * (298/765) Compilando SAC522.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:519
ECHO .ÿ
ECHO * (299/765) Compilando SAC523.PRG
 harbour.exe ".\SAC523.PRG" /q /o".\SAC523.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:597
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC523.obj" >> "b32.bc"
 echo ".\SAC523.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:597
ECHO .ÿ
ECHO * (300/765) Compilando SAC523.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:660
ECHO .ÿ
ECHO * (301/765) Compilando SAC524.PRG
 harbour.exe ".\SAC524.PRG" /q /o".\SAC524.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:722
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC524.obj" >> "b32.bc"
 echo ".\SAC524.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:722
ECHO .ÿ
ECHO * (302/765) Compilando SAC524.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:785
ECHO .ÿ
ECHO * (303/765) Compilando SAC527.PRG
 harbour.exe ".\SAC527.PRG" /q /o".\SAC527.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:847
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC527.obj" >> "b32.bc"
 echo ".\SAC527.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:847
ECHO .ÿ
ECHO * (304/765) Compilando SAC527.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:08:910
ECHO .ÿ
ECHO * (305/765) Compilando SAC528.PRG
 harbour.exe ".\SAC528.PRG" /q /o".\SAC528.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:08:972
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC528.obj" >> "b32.bc"
 echo ".\SAC528.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:08:972
ECHO .ÿ
ECHO * (306/765) Compilando SAC528.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:035
ECHO .ÿ
ECHO * (307/765) Compilando SAC529.PRG
 harbour.exe ".\SAC529.PRG" /q /o".\SAC529.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:097
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC529.obj" >> "b32.bc"
 echo ".\SAC529.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:097
ECHO .ÿ
ECHO * (308/765) Compilando SAC529.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:160
ECHO .ÿ
ECHO * (309/765) Compilando SAC530.PRG
 harbour.exe ".\SAC530.PRG" /q /o".\SAC530.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:222
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC530.obj" >> "b32.bc"
 echo ".\SAC530.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:222
ECHO .ÿ
ECHO * (310/765) Compilando SAC530.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:456
ECHO .ÿ
ECHO * (311/765) Compilando SAC534.PRG
 harbour.exe ".\SAC534.PRG" /q /o".\SAC534.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:519
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC534.obj" >> "b32.bc"
 echo ".\SAC534.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:519
ECHO .ÿ
ECHO * (312/765) Compilando SAC534.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:581
ECHO .ÿ
ECHO * (313/765) Compilando SAC541.PRG
 harbour.exe ".\SAC541.PRG" /q /o".\SAC541.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:644
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC541.obj" >> "b32.bc"
 echo ".\SAC541.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:644
ECHO .ÿ
ECHO * (314/765) Compilando SAC541.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:706
ECHO .ÿ
ECHO * (315/765) Compilando SAC542.PRG
 harbour.exe ".\SAC542.PRG" /q /o".\SAC542.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:769
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC542.obj" >> "b32.bc"
 echo ".\SAC542.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:769
ECHO .ÿ
ECHO * (316/765) Compilando SAC542.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:831
ECHO .ÿ
ECHO * (317/765) Compilando SAC543.PRG
 harbour.exe ".\SAC543.PRG" /q /o".\SAC543.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:09:894
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC543.obj" >> "b32.bc"
 echo ".\SAC543.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:09:894
ECHO .ÿ
ECHO * (318/765) Compilando SAC543.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:09:956
ECHO .ÿ
ECHO * (319/765) Compilando SAC561.PRG
 harbour.exe ".\SAC561.PRG" /q /o".\SAC561.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:019
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC561.obj" >> "b32.bc"
 echo ".\SAC561.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:019
ECHO .ÿ
ECHO * (320/765) Compilando SAC561.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:081
ECHO .ÿ
ECHO * (321/765) Compilando SAC571.PRG
 harbour.exe ".\SAC571.PRG" /q /o".\SAC571.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:159
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC571.obj" >> "b32.bc"
 echo ".\SAC571.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:159
ECHO .ÿ
ECHO * (322/765) Compilando SAC571.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:222
ECHO .ÿ
ECHO * (323/765) Compilando SAC580.PRG
 harbour.exe ".\SAC580.PRG" /q /o".\SAC580.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:284
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC580.obj" >> "b32.bc"
 echo ".\SAC580.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:284
ECHO .ÿ
ECHO * (324/765) Compilando SAC580.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:347
ECHO .ÿ
ECHO * (325/765) Compilando SAC610.PRG
 harbour.exe ".\SAC610.PRG" /q /o".\SAC610.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:519
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC610.obj" >> "b32.bc"
 echo ".\SAC610.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:519
ECHO .ÿ
ECHO * (326/765) Compilando SAC610.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:581
ECHO .ÿ
ECHO * (327/765) Compilando SACALTCO.PRG
 harbour.exe ".\SACALTCO.PRG" /q /o".\SACALTCO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:644
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACALTCO.obj" >> "b32.bc"
 echo ".\SACALTCO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:644
ECHO .ÿ
ECHO * (328/765) Compilando SACALTCO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:706
ECHO .ÿ
ECHO * (329/765) Compilando SACATUAL.PRG
 harbour.exe ".\SACATUAL.PRG" /q /o".\SACATUAL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:769
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACATUAL.obj" >> "b32.bc"
 echo ".\SACATUAL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:769
ECHO .ÿ
ECHO * (330/765) Compilando SACATUAL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:831
ECHO .ÿ
ECHO * (331/765) Compilando SACCAIXA.PRG
 harbour.exe ".\SACCAIXA.PRG" /q /o".\SACCAIXA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:10:894
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCAIXA.obj" >> "b32.bc"
 echo ".\SACCAIXA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:10:894
ECHO .ÿ
ECHO * (332/765) Compilando SACCAIXA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:10:956
ECHO .ÿ
ECHO * (333/765) Compilando SACCEP.PRG
 harbour.exe ".\SACCEP.PRG" /q /o".\SACCEP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:019
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCEP.obj" >> "b32.bc"
 echo ".\SACCEP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:019
ECHO .ÿ
ECHO * (334/765) Compilando SACCEP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:081
ECHO .ÿ
ECHO * (335/765) Compilando SACCHEQ.PRG
 harbour.exe ".\SACCHEQ.PRG" /q /o".\SACCHEQ.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:128
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCHEQ.obj" >> "b32.bc"
 echo ".\SACCHEQ.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:128
ECHO .ÿ
ECHO * (336/765) Compilando SACCHEQ.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:190
ECHO .ÿ
ECHO * (337/765) Compilando SACCLF.PRG
 harbour.exe ".\SACCLF.PRG" /q /o".\SACCLF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:253
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCLF.obj" >> "b32.bc"
 echo ".\SACCLF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:253
ECHO .ÿ
ECHO * (338/765) Compilando SACCLF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:315
ECHO .ÿ
ECHO * (339/765) Compilando SACCOTA1.PRG
 harbour.exe ".\SACCOTA1.PRG" /q /o".\SACCOTA1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:394
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCOTA1.obj" >> "b32.bc"
 echo ".\SACCOTA1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:394
ECHO .ÿ
ECHO * (340/765) Compilando SACCOTA1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:456
ECHO .ÿ
ECHO * (341/765) Compilando SACCOTA2.PRG
 harbour.exe ".\SACCOTA2.PRG" /q /o".\SACCOTA2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:518
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCOTA2.obj" >> "b32.bc"
 echo ".\SACCOTA2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:518
ECHO .ÿ
ECHO * (342/765) Compilando SACCOTA2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:581
ECHO .ÿ
ECHO * (343/765) Compilando SACCOTA3.PRG
 harbour.exe ".\SACCOTA3.PRG" /q /o".\SACCOTA3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:643
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCOTA3.obj" >> "b32.bc"
 echo ".\SACCOTA3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:643
ECHO .ÿ
ECHO * (344/765) Compilando SACCOTA3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:706
ECHO .ÿ
ECHO * (345/765) Compilando SACCOTAC.PRG
 harbour.exe ".\SACCOTAC.PRG" /q /o".\SACCOTAC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:768
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCOTAC.obj" >> "b32.bc"
 echo ".\SACCOTAC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:768
ECHO .ÿ
ECHO * (346/765) Compilando SACCOTAC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:831
ECHO .ÿ
ECHO * (347/765) Compilando SACENTRE.PRG
 harbour.exe ".\SACENTRE.PRG" /q /o".\SACENTRE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:11:893
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACENTRE.obj" >> "b32.bc"
 echo ".\SACENTRE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:11:893
ECHO .ÿ
ECHO * (348/765) Compilando SACENTRE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:11:956
ECHO .ÿ
ECHO * (349/765) Compilando SACESPE.PRG
 harbour.exe ".\SACESPE.PRG" /q /o".\SACESPE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:018
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACESPE.obj" >> "b32.bc"
 echo ".\SACESPE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:018
ECHO .ÿ
ECHO * (350/765) Compilando SACESPE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:081
ECHO .ÿ
ECHO * (351/765) Compilando SACETQ_C.PRG
 harbour.exe ".\SACETQ_C.PRG" /q /o".\SACETQ_C.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:143
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACETQ_C.obj" >> "b32.bc"
 echo ".\SACETQ_C.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:143
ECHO .ÿ
ECHO * (352/765) Compilando SACETQ_C.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:206
ECHO .ÿ
ECHO * (353/765) Compilando SACEXP.PRG
 harbour.exe ".\SACEXP.PRG" /q /o".\SACEXP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:268
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEXP.obj" >> "b32.bc"
 echo ".\SACEXP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:268
ECHO .ÿ
ECHO * (354/765) Compilando SACEXP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:331
ECHO .ÿ
ECHO * (355/765) Compilando SACEXP1.PRG
 harbour.exe ".\SACEXP1.PRG" /q /o".\SACEXP1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:393
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEXP1.obj" >> "b32.bc"
 echo ".\SACEXP1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:393
ECHO .ÿ
ECHO * (356/765) Compilando SACEXP1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:456
ECHO .ÿ
ECHO * (357/765) Compilando SACEXP2.PRG
 harbour.exe ".\SACEXP2.PRG" /q /o".\SACEXP2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:518
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEXP2.obj" >> "b32.bc"
 echo ".\SACEXP2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:518
ECHO .ÿ
ECHO * (358/765) Compilando SACEXP2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:581
ECHO .ÿ
ECHO * (359/765) Compilando SACEXP3.PRG
 harbour.exe ".\SACEXP3.PRG" /q /o".\SACEXP3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:643
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEXP3.obj" >> "b32.bc"
 echo ".\SACEXP3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:643
ECHO .ÿ
ECHO * (360/765) Compilando SACEXP3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:706
ECHO .ÿ
ECHO * (361/765) Compilando SACEXPOR.PRG
 harbour.exe ".\SACEXPOR.PRG" /q /o".\SACEXPOR.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:768
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEXPOR.obj" >> "b32.bc"
 echo ".\SACEXPOR.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:768
ECHO .ÿ
ECHO * (362/765) Compilando SACEXPOR.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:831
ECHO .ÿ
ECHO * (363/765) Compilando SACFRETE.PRG
 harbour.exe ".\SACFRETE.PRG" /q /o".\SACFRETE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:12:909
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACFRETE.obj" >> "b32.bc"
 echo ".\SACFRETE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:12:909
ECHO .ÿ
ECHO * (364/765) Compilando SACFRETE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:12:971
ECHO .ÿ
ECHO * (365/765) Compilando SACIMPOR.PRG
 harbour.exe ".\SACIMPOR.PRG" /q /o".\SACIMPOR.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:034
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACIMPOR.obj" >> "b32.bc"
 echo ".\SACIMPOR.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:034
ECHO .ÿ
ECHO * (366/765) Compilando SACIMPOR.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:096
ECHO .ÿ
ECHO * (367/765) Compilando SACINVE.PRG
 harbour.exe ".\SACINVE.PRG" /q /o".\SACINVE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:159
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACINVE.obj" >> "b32.bc"
 echo ".\SACINVE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:159
ECHO .ÿ
ECHO * (368/765) Compilando SACINVE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:221
ECHO .ÿ
ECHO * (369/765) Compilando SACLOG1.PRG
 harbour.exe ".\SACLOG1.PRG" /q /o".\SACLOG1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:299
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACLOG1.obj" >> "b32.bc"
 echo ".\SACLOG1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:299
ECHO .ÿ
ECHO * (370/765) Compilando SACLOG1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:565
ECHO .ÿ
ECHO * (371/765) Compilando SACLOG2.PRG
 harbour.exe ".\SACLOG2.PRG" /q /o".\SACLOG2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:627
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACLOG2.obj" >> "b32.bc"
 echo ".\SACLOG2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:627
ECHO .ÿ
ECHO * (372/765) Compilando SACLOG2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:690
ECHO .ÿ
ECHO * (373/765) Compilando SACMAQ.PRG
 harbour.exe ".\SACMAQ.PRG" /q /o".\SACMAQ.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:768
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACMAQ.obj" >> "b32.bc"
 echo ".\SACMAQ.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:768
ECHO .ÿ
ECHO * (374/765) Compilando SACMAQ.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:830
ECHO .ÿ
ECHO * (375/765) Compilando SACOS1.PRG
 harbour.exe ".\SACOS1.PRG" /q /o".\SACOS1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:13:893
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS1.obj" >> "b32.bc"
 echo ".\SACOS1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:13:893
ECHO .ÿ
ECHO * (376/765) Compilando SACOS1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:13:955
ECHO .ÿ
ECHO * (377/765) Compilando SACOS5.PRG
 harbour.exe ".\SACOS5.PRG" /q /o".\SACOS5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:018
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS5.obj" >> "b32.bc"
 echo ".\SACOS5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:018
ECHO .ÿ
ECHO * (378/765) Compilando SACOS5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:080
ECHO .ÿ
ECHO * (379/765) Compilando SACOS11.PRG
 harbour.exe ".\SACOS11.PRG" /q /o".\SACOS11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:143
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS11.obj" >> "b32.bc"
 echo ".\SACOS11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:143
ECHO .ÿ
ECHO * (380/765) Compilando SACOS11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:205
ECHO .ÿ
ECHO * (381/765) Compilando SACOS15.PRG
 harbour.exe ".\SACOS15.PRG" /q /o".\SACOS15.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:283
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS15.obj" >> "b32.bc"
 echo ".\SACOS15.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:283
ECHO .ÿ
ECHO * (382/765) Compilando SACOS15.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:346
ECHO .ÿ
ECHO * (383/765) Compilando SACOS51.PRG
 harbour.exe ".\SACOS51.PRG" /q /o".\SACOS51.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:408
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS51.obj" >> "b32.bc"
 echo ".\SACOS51.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:408
ECHO .ÿ
ECHO * (384/765) Compilando SACOS51.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:471
ECHO .ÿ
ECHO * (385/765) Compilando SACOS52.PRG
 harbour.exe ".\SACOS52.PRG" /q /o".\SACOS52.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:533
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS52.obj" >> "b32.bc"
 echo ".\SACOS52.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:533
ECHO .ÿ
ECHO * (386/765) Compilando SACOS52.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:596
ECHO .ÿ
ECHO * (387/765) Compilando SACOS53.PRG
 harbour.exe ".\SACOS53.PRG" /q /o".\SACOS53.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:658
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS53.obj" >> "b32.bc"
 echo ".\SACOS53.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:658
ECHO .ÿ
ECHO * (388/765) Compilando SACOS53.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:721
ECHO .ÿ
ECHO * (389/765) Compilando SACOS54.PRG
 harbour.exe ".\SACOS54.PRG" /q /o".\SACOS54.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:783
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS54.obj" >> "b32.bc"
 echo ".\SACOS54.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:783
ECHO .ÿ
ECHO * (390/765) Compilando SACOS54.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:846
ECHO .ÿ
ECHO * (391/765) Compilando SACOS531.PRG
 harbour.exe ".\SACOS531.PRG" /q /o".\SACOS531.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:14:908
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS531.obj" >> "b32.bc"
 echo ".\SACOS531.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:14:908
ECHO .ÿ
ECHO * (392/765) Compilando SACOS531.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:14:971
ECHO .ÿ
ECHO * (393/765) Compilando SACOSIMP.PRG
 harbour.exe ".\SACOSIMP.PRG" /q /o".\SACOSIMP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:049
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOSIMP.obj" >> "b32.bc"
 echo ".\SACOSIMP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:049
ECHO .ÿ
ECHO * (394/765) Compilando SACOSIMP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:111
ECHO .ÿ
ECHO * (395/765) Compilando SACPCHEQ.PRG
 harbour.exe ".\SACPCHEQ.PRG" /q /o".\SACPCHEQ.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:174
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPCHEQ.obj" >> "b32.bc"
 echo ".\SACPCHEQ.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:174
ECHO .ÿ
ECHO * (396/765) Compilando SACPCHEQ.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:236
ECHO .ÿ
ECHO * (397/765) Compilando SACPDFLT.PRG
 harbour.exe ".\SACPDFLT.PRG" /q /o".\SACPDFLT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:299
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPDFLT.obj" >> "b32.bc"
 echo ".\SACPDFLT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:299
ECHO .ÿ
ECHO * (398/765) Compilando SACPDFLT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:361
ECHO .ÿ
ECHO * (399/765) Compilando SACPROT1.PRG
 harbour.exe ".\SACPROT1.PRG" /q /o".\SACPROT1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:424
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPROT1.obj" >> "b32.bc"
 echo ".\SACPROT1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:424
ECHO .ÿ
ECHO * (400/765) Compilando SACPROT1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:502
ECHO .ÿ
ECHO * (401/765) Compilando SACPROT2.PRG
 harbour.exe ".\SACPROT2.PRG" /q /o".\SACPROT2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:564
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPROT2.obj" >> "b32.bc"
 echo ".\SACPROT2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:564
ECHO .ÿ
ECHO * (402/765) Compilando SACPROT2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:627
ECHO .ÿ
ECHO * (403/765) Compilando SACPROT3.PRG
 harbour.exe ".\SACPROT3.PRG" /q /o".\SACPROT3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:689
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPROT3.obj" >> "b32.bc"
 echo ".\SACPROT3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:689
ECHO .ÿ
ECHO * (404/765) Compilando SACPROT3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:752
ECHO .ÿ
ECHO * (405/765) Compilando SACPROTO.PRG
 harbour.exe ".\SACPROTO.PRG" /q /o".\SACPROTO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:814
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPROTO.obj" >> "b32.bc"
 echo ".\SACPROTO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:814
ECHO .ÿ
ECHO * (406/765) Compilando SACPROTO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:15:877
ECHO .ÿ
ECHO * (407/765) Compilando SACRCCOM.PRG
 harbour.exe ".\SACRCCOM.PRG" /q /o".\SACRCCOM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:15:939
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACRCCOM.obj" >> "b32.bc"
 echo ".\SACRCCOM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:15:939
ECHO .ÿ
ECHO * (408/765) Compilando SACRCCOM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:002
ECHO .ÿ
ECHO * (409/765) Compilando SACREC.PRG
 harbour.exe ".\SACREC.PRG" /q /o".\SACREC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:080
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACREC.obj" >> "b32.bc"
 echo ".\SACREC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:080
ECHO .ÿ
ECHO * (410/765) Compilando SACREC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:142
ECHO .ÿ
ECHO * (411/765) Compilando SACREG.PRG
 harbour.exe ".\SACREG.PRG" /q /o".\SACREG.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:205
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACREG.obj" >> "b32.bc"
 echo ".\SACREG.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:205
ECHO .ÿ
ECHO * (412/765) Compilando SACREG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:267
ECHO .ÿ
ECHO * (413/765) Compilando SACREORC.PRG
 harbour.exe ".\SACREORC.PRG" /q /o".\SACREORC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:330
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACREORC.obj" >> "b32.bc"
 echo ".\SACREORC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:330
ECHO .ÿ
ECHO * (414/765) Compilando SACREORC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:392
ECHO .ÿ
ECHO * (415/765) Compilando SACTIPDC.PRG
 harbour.exe ".\SACTIPDC.PRG" /q /o".\SACTIPDC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:455
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACTIPDC.obj" >> "b32.bc"
 echo ".\SACTIPDC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:455
ECHO .ÿ
ECHO * (416/765) Compilando SACTIPDC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:517
ECHO .ÿ
ECHO * (417/765) Compilando SACTROCA.PRG
 harbour.exe ".\SACTROCA.PRG" /q /o".\SACTROCA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:611
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACTROCA.obj" >> "b32.bc"
 echo ".\SACTROCA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:611
ECHO .ÿ
ECHO * (418/765) Compilando SACTROCA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:674
ECHO .ÿ
ECHO * (419/765) Compilando SACVEN1.PRG
 harbour.exe ".\SACVEN1.PRG" /q /o".\SACVEN1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:736
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACVEN1.obj" >> "b32.bc"
 echo ".\SACVEN1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:736
ECHO .ÿ
ECHO * (420/765) Compilando SACVEN1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:16:799
ECHO .ÿ
ECHO * (421/765) Compilando VENDA.PRG
 harbour.exe ".\VENDA.PRG" /q /o".\VENDA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:16:955
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\VENDA.obj" >> "b32.bc"
 echo ".\VENDA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:16:955
ECHO .ÿ
ECHO * (422/765) Compilando VENDA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:017
ECHO .ÿ
ECHO * (423/765) Compilando SACETQCP.PRG
 harbour.exe ".\SACETQCP.PRG" /q /o".\SACETQCP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:080
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACETQCP.obj" >> "b32.bc"
 echo ".\SACETQCP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:080
ECHO .ÿ
ECHO * (424/765) Compilando SACETQCP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:142
ECHO .ÿ
ECHO * (425/765) Compilando con254.prg
 harbour.exe ".\con254.prg" /q /o".\con254.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:205
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\con254.obj" >> "b32.bc"
 echo ".\con254.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:205
ECHO .ÿ
ECHO * (426/765) Compilando con254.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:267
ECHO .ÿ
ECHO * (427/765) Compilando sactran1.prg
 harbour.exe ".\sactran1.prg" /q /o".\sactran1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:330
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sactran1.obj" >> "b32.bc"
 echo ".\sactran1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:330
ECHO .ÿ
ECHO * (428/765) Compilando sactran1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:392
ECHO .ÿ
ECHO * (429/765) Compilando sacsef1.prg
 harbour.exe ".\sacsef1.prg" /q /o".\sacsef1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:486
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacsef1.obj" >> "b32.bc"
 echo ".\sacsef1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:486
ECHO .ÿ
ECHO * (430/765) Compilando sacsef1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:564
ECHO .ÿ
ECHO * (431/765) Compilando sacpres.prg
 harbour.exe ".\sacpres.prg" /q /o".\sacpres.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:626
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacpres.obj" >> "b32.bc"
 echo ".\sacpres.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:626
ECHO .ÿ
ECHO * (432/765) Compilando sacpres.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:673
ECHO .ÿ
ECHO * (433/765) Compilando saccliatu.prg
 harbour.exe ".\saccliatu.prg" /q /o".\saccliatu.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:736
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\saccliatu.obj" >> "b32.bc"
 echo ".\saccliatu.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:736
ECHO .ÿ
ECHO * (434/765) Compilando saccliatu.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:798
ECHO .ÿ
ECHO * (435/765) Compilando sacproatu.prg
 harbour.exe ".\sacproatu.prg" /q /o".\sacproatu.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:17:861
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacproatu.obj" >> "b32.bc"
 echo ".\sacproatu.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:17:861
ECHO .ÿ
ECHO * (436/765) Compilando sacproatu.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:17:923
ECHO .ÿ
ECHO * (437/765) Compilando SACSEF2.PRG
 harbour.exe ".\SACSEF2.PRG" /q /o".\SACSEF2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:18:017
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACSEF2.obj" >> "b32.bc"
 echo ".\SACSEF2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:18:017
ECHO .ÿ
ECHO * (438/765) Compilando SACSEF2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:18:079
ECHO .ÿ
ECHO * (439/765) Compilando sacmovnt.prg
 harbour.exe ".\sacmovnt.prg" /q /o".\sacmovnt.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:18:142
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacmovnt.obj" >> "b32.bc"
 echo ".\sacmovnt.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:18:142
ECHO .ÿ
ECHO * (440/765) Compilando sacmovnt.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:18:970
ECHO .ÿ
ECHO * (441/765) Compilando sac23orc.prg
 harbour.exe ".\sac23orc.prg" /q /o".\sac23orc.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:19:095
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac23orc.obj" >> "b32.bc"
 echo ".\sac23orc.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:19:095
ECHO .ÿ
ECHO * (442/765) Compilando sac23orc.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:19:157
ECHO .ÿ
ECHO * (443/765) Compilando sac23o2.prg
 harbour.exe ".\sac23o2.prg" /q /o".\sac23o2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:19:235
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac23o2.obj" >> "b32.bc"
 echo ".\sac23o2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:19:235
ECHO .ÿ
ECHO * (444/765) Compilando sac23o2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:19:298
ECHO .ÿ
ECHO * (445/765) Compilando SACENTPR.PRG
 harbour.exe ".\SACENTPR.PRG" /q /o".\SACENTPR.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:19:360
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACENTPR.obj" >> "b32.bc"
 echo ".\SACENTPR.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:19:360
ECHO .ÿ
ECHO * (446/765) Compilando SACENTPR.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:19:423
ECHO .ÿ
ECHO * (447/765) Compilando sac23pd1.prg
 harbour.exe ".\sac23pd1.prg" /q /o".\sac23pd1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:19:767
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac23pd1.obj" >> "b32.bc"
 echo ".\sac23pd1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:19:767
ECHO .ÿ
ECHO * (448/765) Compilando sac23pd1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:19:860
ECHO .ÿ
ECHO * (449/765) Compilando SAC5291.PRG
 harbour.exe ".\SAC5291.PRG" /q /o".\SAC5291.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:19:907
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5291.obj" >> "b32.bc"
 echo ".\SAC5291.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:19:907
ECHO .ÿ
ECHO * (450/765) Compilando SAC5291.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:19:970
ECHO .ÿ
ECHO * (451/765) Compilando sac5com5.prg
 harbour.exe ".\sac5com5.prg" /q /o".\sac5com5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:048
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5com5.obj" >> "b32.bc"
 echo ".\sac5com5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:048
ECHO .ÿ
ECHO * (452/765) Compilando sac5com5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:110
ECHO .ÿ
ECHO * (453/765) Compilando sac5pe15.prg
 harbour.exe ".\sac5pe15.prg" /q /o".\sac5pe15.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:173
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5pe15.obj" >> "b32.bc"
 echo ".\sac5pe15.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:173
ECHO .ÿ
ECHO * (454/765) Compilando sac5pe15.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:235
ECHO .ÿ
ECHO * (455/765) Compilando sacseri1.prg
 harbour.exe ".\sacseri1.prg" /q /o".\sacseri1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:298
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacseri1.obj" >> "b32.bc"
 echo ".\sacseri1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:298
ECHO .ÿ
ECHO * (456/765) Compilando sacseri1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:360
ECHO .ÿ
ECHO * (457/765) Compilando sacseri2.prg
 harbour.exe ".\sacseri2.prg" /q /o".\sacseri2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:423
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacseri2.obj" >> "b32.bc"
 echo ".\sacseri2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:423
ECHO .ÿ
ECHO * (458/765) Compilando sacseri2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:485
ECHO .ÿ
ECHO * (459/765) Compilando sacseri3.prg
 harbour.exe ".\sacseri3.prg" /q /o".\sacseri3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:548
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacseri3.obj" >> "b32.bc"
 echo ".\sacseri3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:548
ECHO .ÿ
ECHO * (460/765) Compilando sacseri3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:610
ECHO .ÿ
ECHO * (461/765) Compilando sacseri4.PRG
 harbour.exe ".\sacseri4.PRG" /q /o".\sacseri4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:673
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacseri4.obj" >> "b32.bc"
 echo ".\sacseri4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:673
ECHO .ÿ
ECHO * (462/765) Compilando sacseri4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:735
ECHO .ÿ
ECHO * (463/765) Compilando SACSERI5.PRG
 harbour.exe ".\SACSERI5.PRG" /q /o".\SACSERI5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:798
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACSERI5.obj" >> "b32.bc"
 echo ".\SACSERI5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:798
ECHO .ÿ
ECHO * (464/765) Compilando SACSERI5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:860
ECHO .ÿ
ECHO * (465/765) Compilando sacbanco.prg
 harbour.exe ".\sacbanco.prg" /q /o".\sacbanco.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:20:923
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacbanco.obj" >> "b32.bc"
 echo ".\sacbanco.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:20:923
ECHO .ÿ
ECHO * (466/765) Compilando sacbanco.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:20:985
ECHO .ÿ
ECHO * (467/765) Compilando con2512.prg
 harbour.exe ".\con2512.prg" /q /o".\con2512.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:063
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\con2512.obj" >> "b32.bc"
 echo ".\con2512.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:063
ECHO .ÿ
ECHO * (468/765) Compilando con2512.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:126
ECHO .ÿ
ECHO * (469/765) Compilando sac2513.prg
 harbour.exe ".\sac2513.prg" /q /o".\sac2513.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:188
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac2513.obj" >> "b32.bc"
 echo ".\sac2513.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:188
ECHO .ÿ
ECHO * (470/765) Compilando sac2513.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:251
ECHO .ÿ
ECHO * (471/765) Compilando sac5com9.prg
 harbour.exe ".\sac5com9.prg" /q /o".\sac5com9.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:313
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5com9.obj" >> "b32.bc"
 echo ".\sac5com9.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:313
ECHO .ÿ
ECHO * (472/765) Compilando sac5com9.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:376
ECHO .ÿ
ECHO * (473/765) Compilando CON4205.PRG
 harbour.exe ".\CON4205.PRG" /q /o".\CON4205.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:438
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4205.obj" >> "b32.bc"
 echo ".\CON4205.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:438
ECHO .ÿ
ECHO * (474/765) Compilando CON4205.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:501
ECHO .ÿ
ECHO * (475/765) Compilando sacformula.prg
 harbour.exe ".\sacformula.prg" /q /o".\sacformula.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:563
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacformula.obj" >> "b32.bc"
 echo ".\sacformula.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:563
ECHO .ÿ
ECHO * (476/765) Compilando sacformula.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:641
ECHO .ÿ
ECHO * (477/765) Compilando sac572.prg
 harbour.exe ".\sac572.prg" /q /o".\sac572.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:719
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac572.obj" >> "b32.bc"
 echo ".\sac572.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:719
ECHO .ÿ
ECHO * (478/765) Compilando sac572.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:782
ECHO .ÿ
ECHO * (479/765) Compilando sac5ped10.prg
 harbour.exe ".\sac5ped10.prg" /q /o".\sac5ped10.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:860
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5ped10.obj" >> "b32.bc"
 echo ".\sac5ped10.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:860
ECHO .ÿ
ECHO * (480/765) Compilando sac5ped10.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:21:922
ECHO .ÿ
ECHO * (481/765) Compilando con2521.prg
 harbour.exe ".\con2521.prg" /q /o".\con2521.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:21:985
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\con2521.obj" >> "b32.bc"
 echo ".\con2521.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:21:985
ECHO .ÿ
ECHO * (482/765) Compilando con2521.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:047
ECHO .ÿ
ECHO * (483/765) Compilando sac5com10.prg
 harbour.exe ".\sac5com10.prg" /q /o".\sac5com10.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:125
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5com10.obj" >> "b32.bc"
 echo ".\sac5com10.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:125
ECHO .ÿ
ECHO * (484/765) Compilando sac5com10.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:188
ECHO .ÿ
ECHO * (485/765) Compilando sac5231.prg
 harbour.exe ".\sac5231.prg" /q /o".\sac5231.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:266
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5231.obj" >> "b32.bc"
 echo ".\sac5231.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:266
ECHO .ÿ
ECHO * (486/765) Compilando sac5231.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:328
ECHO .ÿ
ECHO * (487/765) Compilando sacexp11.prg
 harbour.exe ".\sacexp11.prg" /q /o".\sacexp11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:391
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacexp11.obj" >> "b32.bc"
 echo ".\sacexp11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:391
ECHO .ÿ
ECHO * (488/765) Compilando sacexp11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:453
ECHO .ÿ
ECHO * (489/765) Compilando SAC5COM11.PRG
 harbour.exe ".\SAC5COM11.PRG" /q /o".\SAC5COM11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:516
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5COM11.obj" >> "b32.bc"
 echo ".\SAC5COM11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:516
ECHO .ÿ
ECHO * (490/765) Compilando SAC5COM11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:578
ECHO .ÿ
ECHO * (491/765) Compilando sacsef3.prg
 harbour.exe ".\sacsef3.prg" /q /o".\sacsef3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:672
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacsef3.obj" >> "b32.bc"
 echo ".\sacsef3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:672
ECHO .ÿ
ECHO * (492/765) Compilando sacsef3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:735
ECHO .ÿ
ECHO * (493/765) Compilando sac5et201.prg
 harbour.exe ".\sac5et201.prg" /q /o".\sac5et201.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:813
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5et201.obj" >> "b32.bc"
 echo ".\sac5et201.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:813
ECHO .ÿ
ECHO * (494/765) Compilando sac5et201.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:22:875
ECHO .ÿ
ECHO * (495/765) Compilando sac513.prg
 harbour.exe ".\sac513.prg" /q /o".\sac513.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:22:938
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac513.obj" >> "b32.bc"
 echo ".\sac513.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:22:938
ECHO .ÿ
ECHO * (496/765) Compilando sac513.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:000
ECHO .ÿ
ECHO * (497/765) Compilando SAC2531.PRG
 harbour.exe ".\SAC2531.PRG" /q /o".\SAC2531.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:078
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC2531.obj" >> "b32.bc"
 echo ".\SAC2531.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:078
ECHO .ÿ
ECHO * (498/765) Compilando SAC2531.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:141
ECHO .ÿ
ECHO * (499/765) Compilando sac5devol.prg
 harbour.exe ".\sac5devol.prg" /q /o".\sac5devol.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:203
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5devol.obj" >> "b32.bc"
 echo ".\sac5devol.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:203
ECHO .ÿ
ECHO * (500/765) Compilando sac5devol.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:266
ECHO .ÿ
ECHO * (501/765) Compilando sac3411.prg
 harbour.exe ".\sac3411.prg" /q /o".\sac3411.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:328
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac3411.obj" >> "b32.bc"
 echo ".\sac3411.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:328
ECHO .ÿ
ECHO * (502/765) Compilando sac3411.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:391
ECHO .ÿ
ECHO * (503/765) Compilando sac22_1.prg
 harbour.exe ".\sac22_1.prg" /q /o".\sac22_1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:484
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac22_1.obj" >> "b32.bc"
 echo ".\sac22_1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:484
ECHO .ÿ
ECHO * (504/765) Compilando sac22_1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:563
ECHO .ÿ
ECHO * (505/765) Compilando sac_email.prg
 harbour.exe ".\sac_email.prg" /q /o".\sac_email.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:625
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac_email.obj" >> "b32.bc"
 echo ".\sac_email.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:625
ECHO .ÿ
ECHO * (506/765) Compilando sac_email.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:688
ECHO .ÿ
ECHO * (507/765) Compilando sacmens.prg
 harbour.exe ".\sacmens.prg" /q /o".\sacmens.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:750
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacmens.obj" >> "b32.bc"
 echo ".\sacmens.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:750
ECHO .ÿ
ECHO * (508/765) Compilando sacmens.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:812
ECHO .ÿ
ECHO * (509/765) Compilando SACOS55.PRG
 harbour.exe ".\SACOS55.PRG" /q /o".\SACOS55.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:23:875
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS55.obj" >> "b32.bc"
 echo ".\SACOS55.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:23:875
ECHO .ÿ
ECHO * (510/765) Compilando SACOS55.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:23:937
ECHO .ÿ
ECHO * (511/765) Compilando sendemail.prg
 harbour.exe ".\sendemail.prg" /q /o".\sendemail.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:000
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sendemail.obj" >> "b32.bc"
 echo ".\sendemail.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:000
ECHO .ÿ
ECHO * (512/765) Compilando sendemail.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:062
ECHO .ÿ
ECHO * (513/765) Compilando CON4191.PRG
 harbour.exe ".\CON4191.PRG" /q /o".\CON4191.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:141
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON4191.obj" >> "b32.bc"
 echo ".\CON4191.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:141
ECHO .ÿ
ECHO * (514/765) Compilando CON4191.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:203
ECHO .ÿ
ECHO * (515/765) Compilando SACROT1.PRG
 harbour.exe ".\SACROT1.PRG" /q /o".\SACROT1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:266
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACROT1.obj" >> "b32.bc"
 echo ".\SACROT1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:266
ECHO .ÿ
ECHO * (516/765) Compilando SACROT1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:547
ECHO .ÿ
ECHO * (517/765) Compilando saccalc.prg
 harbour.exe ".\saccalc.prg" /q /o".\saccalc.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:609
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\saccalc.obj" >> "b32.bc"
 echo ".\saccalc.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:609
ECHO .ÿ
ECHO * (518/765) Compilando saccalc.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:672
ECHO .ÿ
ECHO * (519/765) Compilando SACFTP1.PRG
 harbour.exe ".\SACFTP1.PRG" /q /o".\SACFTP1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:734
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACFTP1.obj" >> "b32.bc"
 echo ".\SACFTP1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:734
ECHO .ÿ
ECHO * (520/765) Compilando SACFTP1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:797
ECHO .ÿ
ECHO * (521/765) Compilando sacftp3.prg
 harbour.exe ".\sacftp3.prg" /q /o".\sacftp3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:24:859
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacftp3.obj" >> "b32.bc"
 echo ".\sacftp3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:24:859
ECHO .ÿ
ECHO * (522/765) Compilando sacftp3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:24:922
ECHO .ÿ
ECHO * (523/765) Compilando SAC611.PRG
 harbour.exe ".\SAC611.PRG" /q /o".\SAC611.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:047
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC611.obj" >> "b32.bc"
 echo ".\SAC611.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:047
ECHO .ÿ
ECHO * (524/765) Compilando SAC611.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:125
ECHO .ÿ
ECHO * (525/765) Compilando impacbr.prg
 harbour.exe ".\impacbr.prg" /q /o".\impacbr.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:234
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\impacbr.obj" >> "b32.bc"
 echo ".\impacbr.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:234
ECHO .ÿ
ECHO * (526/765) Compilando impacbr.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:297
ECHO .ÿ
ECHO * (527/765) Compilando errorsys.prg
 harbour.exe ".\errorsys.prg" /q /o".\errorsys.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:359
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\errorsys.obj" >> "b32.bc"
 echo ".\errorsys.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:359
ECHO .ÿ
ECHO * (528/765) Compilando errorsys.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:421
ECHO .ÿ
ECHO * (529/765) Compilando sac35.prg
 harbour.exe ".\sac35.prg" /q /o".\sac35.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:484
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac35.obj" >> "b32.bc"
 echo ".\sac35.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:484
ECHO .ÿ
ECHO * (530/765) Compilando sac35.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:546
ECHO .ÿ
ECHO * (531/765) Compilando hti_impbol.prg
 harbour.exe ".\hti_impbol.prg" /q /o".\hti_impbol.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:609
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\hti_impbol.obj" >> "b32.bc"
 echo ".\hti_impbol.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:609
ECHO .ÿ
ECHO * (532/765) Compilando hti_impbol.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:671
ECHO .ÿ
ECHO * (533/765) Compilando sac42ant.prg
 harbour.exe ".\sac42ant.prg" /q /o".\sac42ant.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:765
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac42ant.obj" >> "b32.bc"
 echo ".\sac42ant.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:765
ECHO .ÿ
ECHO * (534/765) Compilando sac42ant.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:25:843
ECHO .ÿ
ECHO * (535/765) Compilando sac5not4.prg
 harbour.exe ".\sac5not4.prg" /q /o".\sac5not4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:25:906
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5not4.obj" >> "b32.bc"
 echo ".\sac5not4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:25:906
ECHO .ÿ
ECHO * (536/765) Compilando sac5not4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:140
ECHO .ÿ
ECHO * (537/765) Compilando SACCNNT.PRG
 harbour.exe ".\SACCNNT.PRG" /q /o".\SACCNNT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:203
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCNNT.obj" >> "b32.bc"
 echo ".\SACCNNT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:203
ECHO .ÿ
ECHO * (538/765) Compilando SACCNNT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:265
ECHO .ÿ
ECHO * (539/765) Compilando con215.prg
 harbour.exe ".\con215.prg" /q /o".\con215.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:343
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\con215.obj" >> "b32.bc"
 echo ".\con215.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:343
ECHO .ÿ
ECHO * (540/765) Compilando con215.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:406
ECHO .ÿ
ECHO * (541/765) Compilando SAC_LIMCLI.PRG
 harbour.exe ".\SAC_LIMCLI.PRG" /q /o".\SAC_LIMCLI.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:468
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC_LIMCLI.obj" >> "b32.bc"
 echo ".\SAC_LIMCLI.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:468
ECHO .ÿ
ECHO * (542/765) Compilando SAC_LIMCLI.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:531
ECHO .ÿ
ECHO * (543/765) Compilando sac5ped11.prg
 harbour.exe ".\sac5ped11.prg" /q /o".\sac5ped11.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:593
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac5ped11.obj" >> "b32.bc"
 echo ".\sac5ped11.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:593
ECHO .ÿ
ECHO * (544/765) Compilando sac5ped11.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:656
ECHO .ÿ
ECHO * (545/765) Compilando SACCTE.PRG
 harbour.exe ".\SACCTE.PRG" /q /o".\SACCTE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:734
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCTE.obj" >> "b32.bc"
 echo ".\SACCTE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:734
ECHO .ÿ
ECHO * (546/765) Compilando SACCTE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:26:812
ECHO .ÿ
ECHO * (547/765) Compilando SACCARNE.PRG
 harbour.exe ".\SACCARNE.PRG" /q /o".\SACCARNE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:26:921
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCARNE.obj" >> "b32.bc"
 echo ".\SACCARNE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:26:921
ECHO .ÿ
ECHO * (548/765) Compilando SACCARNE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:27:030
ECHO .ÿ
ECHO * (549/765) Compilando SAC216.PRG
 harbour.exe ".\SAC216.PRG" /q /o".\SAC216.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:27:093
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC216.obj" >> "b32.bc"
 echo ".\SAC216.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:27:093
ECHO .ÿ
ECHO * (550/765) Compilando SAC216.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:27:155
ECHO .ÿ
ECHO * (551/765) Compilando SACENTXML.PRG
 harbour.exe ".\SACENTXML.PRG" /q /o".\SACENTXML.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:27:234
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACENTXML.obj" >> "b32.bc"
 echo ".\SACENTXML.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:27:234
ECHO .ÿ
ECHO * (552/765) Compilando SACENTXML.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:27:296
ECHO .ÿ
ECHO * (553/765) Compilando SACTEF.PRG
 harbour.exe ".\SACTEF.PRG" /q /o".\SACTEF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:27:374
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACTEF.obj" >> "b32.bc"
 echo ".\SACTEF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:27:374
ECHO .ÿ
ECHO * (554/765) Compilando SACTEF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:27:452
ECHO .ÿ
ECHO * (555/765) Compilando sac23caixa.prg
 harbour.exe ".\sac23caixa.prg" /q /o".\sac23caixa.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:27:937
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac23caixa.obj" >> "b32.bc"
 echo ".\sac23caixa.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:27:937
ECHO .ÿ
ECHO * (556/765) Compilando sac23caixa.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:015
ECHO .ÿ
ECHO * (557/765) Compilando boleto_pdv.prg
 harbour.exe ".\boleto_pdv.prg" /q /o".\boleto_pdv.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:140
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\boleto_pdv.obj" >> "b32.bc"
 echo ".\boleto_pdv.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:140
ECHO .ÿ
ECHO * (558/765) Compilando boleto_pdv.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:202
ECHO .ÿ
ECHO * (559/765) Compilando CON211.PRG
 harbour.exe ".\CON211.PRG" /q /o".\CON211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:280
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON211.obj" >> "b32.bc"
 echo ".\CON211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:280
ECHO .ÿ
ECHO * (560/765) Compilando CON211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:343
ECHO .ÿ
ECHO * (561/765) Compilando SAC345.PRG
 harbour.exe ".\SAC345.PRG" /q /o".\SAC345.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:405
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC345.obj" >> "b32.bc"
 echo ".\SAC345.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:405
ECHO .ÿ
ECHO * (562/765) Compilando SAC345.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:468
ECHO .ÿ
ECHO * (563/765) Compilando sacnf_e.prg
 harbour.exe ".\sacnf_e.prg" /q /o".\sacnf_e.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:577
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacnf_e.obj" >> "b32.bc"
 echo ".\sacnf_e.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:577
ECHO .ÿ
ECHO * (564/765) Compilando sacnf_e.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:671
ECHO .ÿ
ECHO * (565/765) Compilando sacsql.prg
 harbour.exe ".\sacsql.prg" /q /o".\sacsql.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:811
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacsql.obj" >> "b32.bc"
 echo ".\sacsql.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:811
ECHO .ÿ
ECHO * (566/765) Compilando sacsql.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:28:905
ECHO .ÿ
ECHO * (567/765) Compilando SAC_DBF.PRG
 harbour.exe ".\SAC_DBF.PRG" /q /o".\SAC_DBF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:28:999
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC_DBF.obj" >> "b32.bc"
 echo ".\SAC_DBF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:28:999
ECHO .ÿ
ECHO * (568/765) Compilando SAC_DBF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:29:061
ECHO .ÿ
ECHO * (569/765) Compilando sacbal_pin.prg
 harbour.exe ".\sacbal_pin.prg" /q /o".\sacbal_pin.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:29:139
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacbal_pin.obj" >> "b32.bc"
 echo ".\sacbal_pin.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:29:139
ECHO .ÿ
ECHO * (570/765) Compilando sacbal_pin.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:29:202
ECHO .ÿ
ECHO * (571/765) Compilando SAC213.PRG
 harbour.exe ".\SAC213.PRG" /q /o".\SAC213.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:29:264
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC213.obj" >> "b32.bc"
 echo ".\SAC213.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:29:264
ECHO .ÿ
ECHO * (572/765) Compilando SAC213.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:29:327
ECHO .ÿ
ECHO * (573/765) Compilando SAC217.prg
 harbour.exe ".\SAC217.prg" /q /o".\SAC217.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:29:389
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC217.obj" >> "b32.bc"
 echo ".\SAC217.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:29:389
ECHO .ÿ
ECHO * (574/765) Compilando SAC217.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:29:467
ECHO .ÿ
ECHO * (575/765) Compilando SACMDFE.PRG
 harbour.exe ".\SACMDFE.PRG" /q /o".\SACMDFE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:29:546
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACMDFE.obj" >> "b32.bc"
 echo ".\SACMDFE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:29:546
ECHO .ÿ
ECHO * (576/765) Compilando SACMDFE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:29:608
ECHO .ÿ
ECHO * (577/765) Compilando HRBFUN.PRG
 harbour.exe ".\HRBFUN.PRG" /q /o".\HRBFUN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:30:936
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\HRBFUN.obj" >> "b32.bc"
 echo ".\HRBFUN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:30:936
ECHO .ÿ
ECHO * (578/765) Compilando HRBFUN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:31:498
ECHO .ÿ
ECHO * (579/765) Compilando SACROT.PRG
 harbour.exe ".\SACROT.PRG" /q /o".\SACROT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:31:764
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACROT.obj" >> "b32.bc"
 echo ".\SACROT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:31:764
ECHO .ÿ
ECHO * (580/765) Compilando SACROT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:31:842
ECHO .ÿ
ECHO * (581/765) Compilando SAC130.PRG
 harbour.exe ".\SAC130.PRG" /q /o".\SAC130.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:31:920
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC130.obj" >> "b32.bc"
 echo ".\SAC130.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:31:920
ECHO .ÿ
ECHO * (582/765) Compilando SAC130.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:31:998
ECHO .ÿ
ECHO * (583/765) Compilando SAC140.PRG
 harbour.exe ".\SAC140.PRG" /q /o".\SAC140.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:061
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC140.obj" >> "b32.bc"
 echo ".\SAC140.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:061
ECHO .ÿ
ECHO * (584/765) Compilando SAC140.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:123
ECHO .ÿ
ECHO * (585/765) Compilando SAC141.PRG
 harbour.exe ".\SAC141.PRG" /q /o".\SAC141.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:186
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC141.obj" >> "b32.bc"
 echo ".\SAC141.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:186
ECHO .ÿ
ECHO * (586/765) Compilando SAC141.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:248
ECHO .ÿ
ECHO * (587/765) Compilando SAC142.PRG
 harbour.exe ".\SAC142.PRG" /q /o".\SAC142.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:310
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC142.obj" >> "b32.bc"
 echo ".\SAC142.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:310
ECHO .ÿ
ECHO * (588/765) Compilando SAC142.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:373
ECHO .ÿ
ECHO * (589/765) Compilando sacprofi.prg
 harbour.exe ".\sacprofi.prg" /q /o".\sacprofi.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:451
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacprofi.obj" >> "b32.bc"
 echo ".\sacprofi.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:451
ECHO .ÿ
ECHO * (590/765) Compilando sacprofi.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:514
ECHO .ÿ
ECHO * (591/765) Compilando SAC10.PRG
 harbour.exe ".\SAC10.PRG" /q /o".\SAC10.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:592
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC10.obj" >> "b32.bc"
 echo ".\SAC10.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:592
ECHO .ÿ
ECHO * (592/765) Compilando SAC10.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:654
ECHO .ÿ
ECHO * (593/765) Compilando SACOS41.PRG
 harbour.exe ".\SACOS41.PRG" /q /o".\SACOS41.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:717
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOS41.obj" >> "b32.bc"
 echo ".\SACOS41.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:717
ECHO .ÿ
ECHO * (594/765) Compilando SACOS41.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:779
ECHO .ÿ
ECHO * (595/765) Compilando SAC1OP.PRG
 harbour.exe ".\SAC1OP.PRG" /q /o".\SAC1OP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:842
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC1OP.obj" >> "b32.bc"
 echo ".\SAC1OP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:842
ECHO .ÿ
ECHO * (596/765) Compilando SAC1OP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:32:904
ECHO .ÿ
ECHO * (597/765) Compilando SACEMP.PRG
 harbour.exe ".\SACEMP.PRG" /q /o".\SACEMP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:32:967
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEMP.obj" >> "b32.bc"
 echo ".\SACEMP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:32:967
ECHO .ÿ
ECHO * (598/765) Compilando SACEMP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:33:045
ECHO .ÿ
ECHO * (599/765) Compilando SAC20.PRG
 harbour.exe ".\SAC20.PRG" /q /o".\SAC20.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:33:107
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC20.obj" >> "b32.bc"
 echo ".\SAC20.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:33:107
ECHO .ÿ
ECHO * (600/765) Compilando SAC20.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:33:513
ECHO .ÿ
ECHO * (601/765) Compilando SACOBS.PRG
 harbour.exe ".\SACOBS.PRG" /q /o".\SACOBS.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:33:591
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACOBS.obj" >> "b32.bc"
 echo ".\SACOBS.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:33:591
ECHO .ÿ
ECHO * (602/765) Compilando SACOBS.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:33:654
ECHO .ÿ
ECHO * (603/765) Compilando SAC40.PRG
 harbour.exe ".\SAC40.PRG" /q /o".\SAC40.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:33:716
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC40.obj" >> "b32.bc"
 echo ".\SAC40.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:33:716
ECHO .ÿ
ECHO * (604/765) Compilando SAC40.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:33:779
ECHO .ÿ
ECHO * (605/765) Compilando SACCFG.PRG
 harbour.exe ".\SACCFG.PRG" /q /o".\SACCFG.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:33:873
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCFG.obj" >> "b32.bc"
 echo ".\SACCFG.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:33:873
ECHO .ÿ
ECHO * (606/765) Compilando SACCFG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:33:935
ECHO .ÿ
ECHO * (607/765) Compilando sacdbf.prg
 harbour.exe ".\sacdbf.prg" /q /o".\sacdbf.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:013
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacdbf.obj" >> "b32.bc"
 echo ".\sacdbf.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:013
ECHO .ÿ
ECHO * (608/765) Compilando sacdbf.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:34:091
ECHO .ÿ
ECHO * (609/765) Compilando saccdx.prg
 harbour.exe ".\saccdx.prg" /q /o".\saccdx.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:185
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\saccdx.obj" >> "b32.bc"
 echo ".\saccdx.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:185
ECHO .ÿ
ECHO * (610/765) Compilando saccdx.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:34:263
ECHO .ÿ
ECHO * (611/765) Compilando SAUTORIZA.PRG
 harbour.exe ".\SAUTORIZA.PRG" /q /o".\SAUTORIZA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:326
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAUTORIZA.obj" >> "b32.bc"
 echo ".\SAUTORIZA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:326
ECHO .ÿ
ECHO * (612/765) Compilando SAUTORIZA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:34:388
ECHO .ÿ
ECHO * (613/765) Compilando CON252.PRG
 harbour.exe ".\CON252.PRG" /q /o".\CON252.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:466
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON252.obj" >> "b32.bc"
 echo ".\CON252.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:466
ECHO .ÿ
ECHO * (614/765) Compilando CON252.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:34:779
ECHO .ÿ
ECHO * (615/765) Compilando SACPROMI.PRG
 harbour.exe ".\SACPROMI.PRG" /q /o".\SACPROMI.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:841
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACPROMI.obj" >> "b32.bc"
 echo ".\SACPROMI.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:841
ECHO .ÿ
ECHO * (616/765) Compilando SACPROMI.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:34:904
ECHO .ÿ
ECHO * (617/765) Compilando sacvaque.prg
 harbour.exe ".\sacvaque.prg" /q /o".\sacvaque.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:34:982
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacvaque.obj" >> "b32.bc"
 echo ".\sacvaque.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:34:982
ECHO .ÿ
ECHO * (618/765) Compilando sacvaque.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:35:044
ECHO .ÿ
ECHO * (619/765) Compilando sacbole2.prg
 harbour.exe ".\sacbole2.prg" /q /o".\sacbole2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:35:154
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacbole2.obj" >> "b32.bc"
 echo ".\sacbole2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:35:154
ECHO .ÿ
ECHO * (620/765) Compilando sacbole2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:35:232
ECHO .ÿ
ECHO * (621/765) Compilando SAC211.PRG
 harbour.exe ".\SAC211.PRG" /q /o".\SAC211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:35:310
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC211.obj" >> "b32.bc"
 echo ".\SAC211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:35:310
ECHO .ÿ
ECHO * (622/765) Compilando SAC211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:35:388
ECHO .ÿ
ECHO * (623/765) Compilando SAC5PED1.PRG
 harbour.exe ".\SAC5PED1.PRG" /q /o".\SAC5PED1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:35:841
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED1.obj" >> "b32.bc"
 echo ".\SAC5PED1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:35:841
ECHO .ÿ
ECHO * (624/765) Compilando SAC5PED1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:35:903
ECHO .ÿ
ECHO * (625/765) Compilando SAC350.PRG
 harbour.exe ".\SAC350.PRG" /q /o".\SAC350.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:35:982
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC350.obj" >> "b32.bc"
 echo ".\SAC350.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:35:982
ECHO .ÿ
ECHO * (626/765) Compilando SAC350.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:044
ECHO .ÿ
ECHO * (627/765) Compilando SAC42.PRG
 harbour.exe ".\SAC42.PRG" /q /o".\SAC42.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:122
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC42.obj" >> "b32.bc"
 echo ".\SAC42.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:122
ECHO .ÿ
ECHO * (628/765) Compilando SAC42.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:200
ECHO .ÿ
ECHO * (629/765) Compilando SAC2PED.PRG
 harbour.exe ".\SAC2PED.PRG" /q /o".\SAC2PED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:278
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC2PED.obj" >> "b32.bc"
 echo ".\SAC2PED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:278
ECHO .ÿ
ECHO * (630/765) Compilando SAC2PED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:341
ECHO .ÿ
ECHO * (631/765) Compilando SAC212.PRG
 harbour.exe ".\SAC212.PRG" /q /o".\SAC212.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:497
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC212.obj" >> "b32.bc"
 echo ".\SAC212.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:497
ECHO .ÿ
ECHO * (632/765) Compilando SAC212.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:559
ECHO .ÿ
ECHO * (633/765) Compilando SAC214.PRG
 harbour.exe ".\SAC214.PRG" /q /o".\SAC214.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:638
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC214.obj" >> "b32.bc"
 echo ".\SAC214.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:638
ECHO .ÿ
ECHO * (634/765) Compilando SAC214.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:700
ECHO .ÿ
ECHO * (635/765) Compilando SAC215.PRG
 harbour.exe ".\SAC215.PRG" /q /o".\SAC215.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:778
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC215.obj" >> "b32.bc"
 echo ".\SAC215.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:778
ECHO .ÿ
ECHO * (636/765) Compilando SAC215.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:841
ECHO .ÿ
ECHO * (637/765) Compilando SAC5PED3.PRG
 harbour.exe ".\SAC5PED3.PRG" /q /o".\SAC5PED3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:36:903
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED3.obj" >> "b32.bc"
 echo ".\SAC5PED3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:36:903
ECHO .ÿ
ECHO * (638/765) Compilando SAC5PED3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:36:966
ECHO .ÿ
ECHO * (639/765) Compilando SAC5PED5.PRG
 harbour.exe ".\SAC5PED5.PRG" /q /o".\SAC5PED5.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:044
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5PED5.obj" >> "b32.bc"
 echo ".\SAC5PED5.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:044
ECHO .ÿ
ECHO * (640/765) Compilando SAC5PED5.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:106
ECHO .ÿ
ECHO * (641/765) Compilando CON428.PRG
 harbour.exe ".\CON428.PRG" /q /o".\CON428.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:169
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON428.obj" >> "b32.bc"
 echo ".\CON428.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:169
ECHO .ÿ
ECHO * (642/765) Compilando CON428.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:247
ECHO .ÿ
ECHO * (643/765) Compilando CON244.PRG
 harbour.exe ".\CON244.PRG" /q /o".\CON244.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:341
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON244.obj" >> "b32.bc"
 echo ".\CON244.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:341
ECHO .ÿ
ECHO * (644/765) Compilando CON244.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:544
ECHO .ÿ
ECHO * (645/765) Compilando saccst.prg
 harbour.exe ".\saccst.prg" /q /o".\saccst.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:606
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\saccst.obj" >> "b32.bc"
 echo ".\saccst.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:622
ECHO .ÿ
ECHO * (646/765) Compilando saccst.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:684
ECHO .ÿ
ECHO * (647/765) Compilando SACCID.PRG
 harbour.exe ".\SACCID.PRG" /q /o".\SACCID.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:747
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCID.obj" >> "b32.bc"
 echo ".\SACCID.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:747
ECHO .ÿ
ECHO * (648/765) Compilando SACCID.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:809
ECHO .ÿ
ECHO * (649/765) Compilando sac_ncm.prg
 harbour.exe ".\sac_ncm.prg" /q /o".\sac_ncm.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:37:872
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac_ncm.obj" >> "b32.bc"
 echo ".\sac_ncm.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:37:872
ECHO .ÿ
ECHO * (650/765) Compilando sac_ncm.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:37:934
ECHO .ÿ
ECHO * (651/765) Compilando SACBAL1.PRG
 harbour.exe ".\SACBAL1.PRG" /q /o".\SACBAL1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:012
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACBAL1.obj" >> "b32.bc"
 echo ".\SACBAL1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:012
ECHO .ÿ
ECHO * (652/765) Compilando SACBAL1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:075
ECHO .ÿ
ECHO * (653/765) Compilando SACDETA.PRG
 harbour.exe ".\SACDETA.PRG" /q /o".\SACDETA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:137
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACDETA.obj" >> "b32.bc"
 echo ".\SACDETA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:137
ECHO .ÿ
ECHO * (654/765) Compilando SACDETA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:200
ECHO .ÿ
ECHO * (655/765) Compilando SACBOLE1.PRG
 harbour.exe ".\SACBOLE1.PRG" /q /o".\SACBOLE1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:278
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACBOLE1.obj" >> "b32.bc"
 echo ".\SACBOLE1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:278
ECHO .ÿ
ECHO * (656/765) Compilando SACBOLE1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:340
ECHO .ÿ
ECHO * (657/765) Compilando SAC526.PRG
 harbour.exe ".\SAC526.PRG" /q /o".\SAC526.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:434
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC526.obj" >> "b32.bc"
 echo ".\SAC526.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:434
ECHO .ÿ
ECHO * (658/765) Compilando SAC526.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:497
ECHO .ÿ
ECHO * (659/765) Compilando SAC211B.PRG
 harbour.exe ".\SAC211B.PRG" /q /o".\SAC211B.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:575
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC211B.obj" >> "b32.bc"
 echo ".\SAC211B.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:575
ECHO .ÿ
ECHO * (660/765) Compilando SAC211B.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:637
ECHO .ÿ
ECHO * (661/765) Compilando SAC5NOT1.PRG
 harbour.exe ".\SAC5NOT1.PRG" /q /o".\SAC5NOT1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:715
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NOT1.obj" >> "b32.bc"
 echo ".\SAC5NOT1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:715
ECHO .ÿ
ECHO * (662/765) Compilando SAC5NOT1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:778
ECHO .ÿ
ECHO * (663/765) Compilando sacdepe.prg
 harbour.exe ".\sacdepe.prg" /q /o".\sacdepe.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:38:918
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacdepe.obj" >> "b32.bc"
 echo ".\sacdepe.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:38:918
ECHO .ÿ
ECHO * (664/765) Compilando sacdepe.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:38:981
ECHO .ÿ
ECHO * (665/765) Compilando SAC5CAD1.PRG
 harbour.exe ".\SAC5CAD1.PRG" /q /o".\SAC5CAD1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:043
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5CAD1.obj" >> "b32.bc"
 echo ".\SAC5CAD1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:043
ECHO .ÿ
ECHO * (666/765) Compilando SAC5CAD1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:106
ECHO .ÿ
ECHO * (667/765) Compilando SAC341.PRG
 harbour.exe ".\SAC341.PRG" /q /o".\SAC341.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:168
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC341.obj" >> "b32.bc"
 echo ".\SAC341.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:168
ECHO .ÿ
ECHO * (668/765) Compilando SAC341.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:246
ECHO .ÿ
ECHO * (669/765) Compilando SAC19.PRG
 harbour.exe ".\SAC19.PRG" /q /o".\SAC19.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:324
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC19.obj" >> "b32.bc"
 echo ".\SAC19.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:324
ECHO .ÿ
ECHO * (670/765) Compilando SAC19.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:387
ECHO .ÿ
ECHO * (671/765) Compilando SAC520.PRG
 harbour.exe ".\SAC520.PRG" /q /o".\SAC520.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:465
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC520.obj" >> "b32.bc"
 echo ".\SAC520.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:465
ECHO .ÿ
ECHO * (672/765) Compilando SAC520.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:528
ECHO .ÿ
ECHO * (673/765) Compilando SACBAL3.PRG
 harbour.exe ".\SACBAL3.PRG" /q /o".\SACBAL3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:621
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACBAL3.obj" >> "b32.bc"
 echo ".\SACBAL3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:621
ECHO .ÿ
ECHO * (674/765) Compilando SACBAL3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:684
ECHO .ÿ
ECHO * (675/765) Compilando sacbal4.prg
 harbour.exe ".\sacbal4.prg" /q /o".\sacbal4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:746
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sacbal4.obj" >> "b32.bc"
 echo ".\sacbal4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:746
ECHO .ÿ
ECHO * (676/765) Compilando sacbal4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:809
ECHO .ÿ
ECHO * (677/765) Compilando FORMULA.PRG
 harbour.exe ".\FORMULA.000" /q /o".\FORMULA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:39:902
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\FORMULA.obj" >> "b32.bc"
 echo ".\FORMULA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:39:902
ECHO .ÿ
ECHO * (678/765) Compilando FORMULA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:39:981
ECHO .ÿ
ECHO * (679/765) Compilando boleto2.prg
 harbour.exe ".\boleto2.prg" /q /o".\boleto2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:090
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\boleto2.obj" >> "b32.bc"
 echo ".\boleto2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:090
ECHO .ÿ
ECHO * (680/765) Compilando boleto2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:152
ECHO .ÿ
ECHO * (681/765) Compilando SAC525.PRG
 harbour.exe ".\SAC525.PRG" /q /o".\SAC525.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:231
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC525.obj" >> "b32.bc"
 echo ".\SAC525.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:231
ECHO .ÿ
ECHO * (682/765) Compilando SAC525.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:293
ECHO .ÿ
ECHO * (683/765) Compilando SACSINT.PRG
 harbour.exe ".\SACSINT.PRG" /q /o".\SACSINT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:371
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACSINT.obj" >> "b32.bc"
 echo ".\SACSINT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:371
ECHO .ÿ
ECHO * (684/765) Compilando SACSINT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:434
ECHO .ÿ
ECHO * (685/765) Compilando SACEMAIL.PRG
 harbour.exe ".\SACEMAIL.PRG" /q /o".\SACEMAIL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:512
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACEMAIL.obj" >> "b32.bc"
 echo ".\SACEMAIL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:512
ECHO .ÿ
ECHO * (686/765) Compilando SACEMAIL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:574
ECHO .ÿ
ECHO * (687/765) Compilando SAC131.PRG
 harbour.exe ".\SAC131.PRG" /q /o".\SAC131.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:668
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC131.obj" >> "b32.bc"
 echo ".\SAC131.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:668
ECHO .ÿ
ECHO * (688/765) Compilando SAC131.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:746
ECHO .ÿ
ECHO * (689/765) Compilando SAC132.PRG
 harbour.exe ".\SAC132.PRG" /q /o".\SAC132.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:808
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC132.obj" >> "b32.bc"
 echo ".\SAC132.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:808
ECHO .ÿ
ECHO * (690/765) Compilando SAC132.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:871
ECHO .ÿ
ECHO * (691/765) Compilando SAC112.PRG
 harbour.exe ".\SAC112.PRG" /q /o".\SAC112.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:40:933
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC112.obj" >> "b32.bc"
 echo ".\SAC112.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:40:933
ECHO .ÿ
ECHO * (692/765) Compilando SAC112.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:40:996
ECHO .ÿ
ECHO * (693/765) Compilando SACNOTA.PRG
 harbour.exe ".\SACNOTA.PRG" /q /o".\SACNOTA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:058
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACNOTA.obj" >> "b32.bc"
 echo ".\SACNOTA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:058
ECHO .ÿ
ECHO * (694/765) Compilando SACNOTA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:121
ECHO .ÿ
ECHO * (695/765) Compilando cons_prod.prg
 harbour.exe ".\cons_prod.prg" /q /o".\cons_prod.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:183
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\cons_prod.obj" >> "b32.bc"
 echo ".\cons_prod.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:183
ECHO .ÿ
ECHO * (696/765) Compilando cons_prod.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:246
ECHO .ÿ
ECHO * (697/765) Compilando xls.prg
 harbour.exe ".\xls.prg" /q /o".\xls.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:324
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\xls.obj" >> "b32.bc"
 echo ".\xls.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:324
ECHO .ÿ
ECHO * (698/765) Compilando xls.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:386
ECHO .ÿ
ECHO * (699/765) Compilando SACTP.PRG
 harbour.exe ".\SACTP.PRG" /q /o".\SACTP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:480
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACTP.obj" >> "b32.bc"
 echo ".\SACTP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:480
ECHO .ÿ
ECHO * (700/765) Compilando SACTP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:543
ECHO .ÿ
ECHO * (701/765) Compilando SACTPS.PRG
 harbour.exe ".\SACTPS.PRG" /q /o".\SACTPS.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:652
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACTPS.obj" >> "b32.bc"
 echo ".\SACTPS.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:668
ECHO .ÿ
ECHO * (702/765) Compilando SACTPS.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:730
ECHO .ÿ
ECHO * (703/765) Compilando SPED.PRG
 harbour.exe ".\SPED.PRG" /q /o".\SPED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:808
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SPED.obj" >> "b32.bc"
 echo ".\SPED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:808
ECHO .ÿ
ECHO * (704/765) Compilando SPED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:871
ECHO .ÿ
ECHO * (705/765) Compilando SACAUTO1.PRG
 harbour.exe ".\SACAUTO1.PRG" /q /o".\SACAUTO1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:41:933
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACAUTO1.obj" >> "b32.bc"
 echo ".\SACAUTO1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:41:933
ECHO .ÿ
ECHO * (706/765) Compilando SACAUTO1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:41:996
ECHO .ÿ
ECHO * (707/765) Compilando SAC110NOVO.PRG
 harbour.exe ".\SAC110NOVO.PRG" /q /o".\SAC110NOVO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:42:074
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC110NOVO.obj" >> "b32.bc"
 echo ".\SAC110NOVO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:42:074
ECHO .ÿ
ECHO * (708/765) Compilando SAC110NOVO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:42:136
ECHO .ÿ
ECHO * (709/765) Compilando SACAPPHTI.PRG
 harbour.exe ".\SACAPPHTI.PRG" /q /o".\SACAPPHTI.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:42:199
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACAPPHTI.obj" >> "b32.bc"
 echo ".\SACAPPHTI.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:42:199
ECHO .ÿ
ECHO * (710/765) Compilando SACAPPHTI.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:42:261
ECHO .ÿ
ECHO * (711/765) Compilando BOLETO.PRG
 harbour.exe ".\BOLETO.PRG" /q /o".\BOLETO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:42:371
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\BOLETO.obj" >> "b32.bc"
 echo ".\BOLETO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:42:371
ECHO .ÿ
ECHO * (712/765) Compilando BOLETO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:42:433
ECHO .ÿ
ECHO * (713/765) Compilando SAC00.PRG
 harbour.exe ".\SAC00.PRG" /q /o".\SAC00.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:42:808
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC00.obj" >> "b32.bc"
 echo ".\SAC00.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:42:808
ECHO .ÿ
ECHO * (714/765) Compilando SAC00.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:42:886
ECHO .ÿ
ECHO * (715/765) Compilando SAC111NOVO.PRG
 harbour.exe ".\SAC111NOVO.PRG" /q /o".\SAC111NOVO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:42:964
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC111NOVO.obj" >> "b32.bc"
 echo ".\SAC111NOVO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:42:964
ECHO .ÿ
ECHO * (716/765) Compilando SAC111NOVO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:43:042
ECHO .ÿ
ECHO * (717/765) Compilando CON251PRO.PRG
 harbour.exe ".\CON251PRO.PRG" /q /o".\CON251PRO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:43:214
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON251PRO.obj" >> "b32.bc"
 echo ".\CON251PRO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:43:214
ECHO .ÿ
ECHO * (718/765) Compilando CON251PRO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:43:292
ECHO .ÿ
ECHO * (719/765) Compilando sac23pd1novo.prg
 harbour.exe ".\sac23pd1novo.prg" /q /o".\sac23pd1novo.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:43:574
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\sac23pd1novo.obj" >> "b32.bc"
 echo ".\sac23pd1novo.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:43:574
ECHO .ÿ
ECHO * (720/765) Compilando sac23pd1novo.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:43:652
ECHO .ÿ
ECHO * (721/765) Compilando CON412.PRG
 harbour.exe ".\CON412.PRG" /q /o".\CON412.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:43:714
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON412.obj" >> "b32.bc"
 echo ".\CON412.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:43:714
ECHO .ÿ
ECHO * (722/765) Compilando CON412.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:43:777
ECHO .ÿ
ECHO * (723/765) Compilando SACNFCE.prg
 harbour.exe ".\SACNFCE.prg" /q /o".\SACNFCE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:43:902
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACNFCE.obj" >> "b32.bc"
 echo ".\SACNFCE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:43:917
ECHO .ÿ
ECHO * (724/765) Compilando SACNFCE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:43:980
ECHO .ÿ
ECHO * (725/765) Compilando SISPINPAD.PRG
 harbour.exe ".\SISPINPAD.PRG" /q /o".\SISPINPAD.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:042
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SISPINPAD.obj" >> "b32.bc"
 echo ".\SISPINPAD.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:042
ECHO .ÿ
ECHO * (726/765) Compilando SISPINPAD.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:105
ECHO .ÿ
ECHO * (727/765) Compilando SAC22PED.PRG
 harbour.exe ".\SAC22PED.PRG" /q /o".\SAC22PED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:183
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC22PED.obj" >> "b32.bc"
 echo ".\SAC22PED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:183
ECHO .ÿ
ECHO * (728/765) Compilando SAC22PED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:245
ECHO .ÿ
ECHO * (729/765) Compilando FORMULA_APP.PRG
 harbour.exe ".\FORMULA_APP.PRG" /q /o".\FORMULA_APP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:323
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\FORMULA_APP.obj" >> "b32.bc"
 echo ".\FORMULA_APP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:323
ECHO .ÿ
ECHO * (730/765) Compilando FORMULA_APP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:386
ECHO .ÿ
ECHO * (731/765) Compilando PINPAD.PRG
 harbour.exe ".\PINPAD.PRG" /q /o".\PINPAD.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:464
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\PINPAD.obj" >> "b32.bc"
 echo ".\PINPAD.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:464
ECHO .ÿ
ECHO * (732/765) Compilando PINPAD.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:511
ECHO .ÿ
ECHO * (733/765) Compilando SAC5EST1.PRG
 harbour.exe ".\SAC5EST1.PRG" /q /o".\SAC5EST1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:589
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5EST1.obj" >> "b32.bc"
 echo ".\SAC5EST1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:589
ECHO .ÿ
ECHO * (734/765) Compilando SAC5EST1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:651
ECHO .ÿ
ECHO * (735/765) Compilando ACBRLIB.PRG
 harbour.exe ".\ACBRLIB.PRG" /q /o".\ACBRLIB.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:745
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\ACBRLIB.obj" >> "b32.bc"
 echo ".\ACBRLIB.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:745
ECHO .ÿ
ECHO * (736/765) Compilando ACBRLIB.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:808
ECHO .ÿ
ECHO * (737/765) Compilando SAC4FMES.PRG
 harbour.exe ".\SAC4FMES.PRG" /q /o".\SAC4FMES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:44:870
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC4FMES.obj" >> "b32.bc"
 echo ".\SAC4FMES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:44:870
ECHO .ÿ
ECHO * (738/765) Compilando SAC4FMES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:44:933
ECHO .ÿ
ECHO * (739/765) Compilando SAC232.PRG
 harbour.exe ".\SAC232.PRG" /q /o".\SAC232.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:011
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC232.obj" >> "b32.bc"
 echo ".\SAC232.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:011
ECHO .ÿ
ECHO * (740/765) Compilando SAC232.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:073
ECHO .ÿ
ECHO * (741/765) Compilando SAC5ROM6.PRG
 harbour.exe ".\SAC5ROM6.PRG" /q /o".\SAC5ROM6.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:136
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5ROM6.obj" >> "b32.bc"
 echo ".\SAC5ROM6.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:136
ECHO .ÿ
ECHO * (742/765) Compilando SAC5ROM6.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:198
ECHO .ÿ
ECHO * (743/765) Compilando SACDASH.PRG
 harbour.exe ".\SACDASH.PRG" /q /o".\SACDASH.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:261
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACDASH.obj" >> "b32.bc"
 echo ".\SACDASH.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:261
ECHO .ÿ
ECHO * (744/765) Compilando SACDASH.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:323
ECHO .ÿ
ECHO * (745/765) Compilando SACCRIPT.PRG
 harbour.exe ".\SACCRIPT.PRG" /q /o".\SACCRIPT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:386
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCRIPT.obj" >> "b32.bc"
 echo ".\SACCRIPT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:386
ECHO .ÿ
ECHO * (746/765) Compilando SACCRIPT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:448
ECHO .ÿ
ECHO * (747/765) Compilando SACAPPREL.PRG
 harbour.exe ".\SACAPPREL.PRG" /q /o".\SACAPPREL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:511
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACAPPREL.obj" >> "b32.bc"
 echo ".\SACAPPREL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:511
ECHO .ÿ
ECHO * (748/765) Compilando SACAPPREL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:573
ECHO .ÿ
ECHO * (749/765) Compilando SMEDALBUM.PRG
 harbour.exe ".\SMEDALBUM.PRG" /q /o".\SMEDALBUM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:635
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SMEDALBUM.obj" >> "b32.bc"
 echo ".\SMEDALBUM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:635
ECHO .ÿ
ECHO * (750/765) Compilando SMEDALBUM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:698
ECHO .ÿ
ECHO * (751/765) Compilando CON416.PRG
 harbour.exe ".\CON416.PRG" /q /o".\CON416.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:760
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON416.obj" >> "b32.bc"
 echo ".\CON416.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:760
ECHO .ÿ
ECHO * (752/765) Compilando CON416.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:823
ECHO .ÿ
ECHO * (753/765) Compilando CON42_0.PRG
 harbour.exe ".\CON42_0.PRG" /q /o".\CON42_0.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:45:885
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\CON42_0.obj" >> "b32.bc"
 echo ".\CON42_0.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:45:885
ECHO .ÿ
ECHO * (754/765) Compilando CON42_0.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:45:948
ECHO .ÿ
ECHO * (755/765) Compilando SACINVENTA.PRG
 harbour.exe ".\SACINVENTA.PRG" /q /o".\SACINVENTA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:46:010
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACINVENTA.obj" >> "b32.bc"
 echo ".\SACINVENTA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:46:010
ECHO .ÿ
ECHO * (756/765) Compilando SACINVENTA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:46:073
ECHO .ÿ
ECHO * (757/765) Compilando SACCHK_NF.PRG
 harbour.exe ".\SACCHK_NF.PRG" /q /o".\SACCHK_NF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:46:135
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SACCHK_NF.obj" >> "b32.bc"
 echo ".\SACCHK_NF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:46:135
ECHO .ÿ
ECHO * (758/765) Compilando SACCHK_NF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:46:807
ECHO .ÿ
ECHO * (759/765) Compilando SAC331.PRG
 harbour.exe ".\SAC331.PRG" /q /o".\SAC331.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:46:885
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC331.obj" >> "b32.bc"
 echo ".\SAC331.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:46:885
ECHO .ÿ
ECHO * (760/765) Compilando SAC331.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:46:995
ECHO .ÿ
ECHO * (761/765) Compilando SAC5NCM.PRG
 harbour.exe ".\SAC5NCM.PRG" /q /o".\SAC5NCM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:47:057
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\SAC5NCM.obj" >> "b32.bc"
 echo ".\SAC5NCM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:47:057
ECHO .ÿ
ECHO * (762/765) Compilando SAC5NCM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 16:11:47:120
ECHO .ÿ
ECHO * (763/765) Compilando FORMULA_1.PRG
 harbour.exe ".\FORMULA_1.000" /q /o".\FORMULA_1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 16:11:47:432
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" >> "b32.bc"
 echo -o".\FORMULA_1.obj" >> "b32.bc"
 echo ".\FORMULA_1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 16:11:47:432
ECHO .ÿ
ECHO * (764/765) Compilando FORMULA_1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(285) @ 16:11:47:636
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISCOM;" + > "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISCOM;;;C:\hti\SISCOM;" + >> "b32.bc"
 echo -Gn -M -m  -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\SISCOM.obj"  +  >> "b32.bc"
 echo ".\CON21.obj"  +  >> "b32.bc"
 echo ".\CON22.obj"  +  >> "b32.bc"
 echo ".\CON24.obj"  +  >> "b32.bc"
 echo ".\CON25.obj"  +  >> "b32.bc"
 echo ".\CON41.obj"  +  >> "b32.bc"
 echo ".\CON42.obj"  +  >> "b32.bc"
 echo ".\CON212.obj"  +  >> "b32.bc"
 echo ".\CON214.obj"  +  >> "b32.bc"
 echo ".\CON221.obj"  +  >> "b32.bc"
 echo ".\CON241.obj"  +  >> "b32.bc"
 echo ".\CON241V.obj"  +  >> "b32.bc"
 echo ".\CON243.obj"  +  >> "b32.bc"
 echo ".\CON251.obj"  +  >> "b32.bc"
 echo ".\CON253.obj"  +  >> "b32.bc"
 echo ".\CON411.obj"  +  >> "b32.bc"
 echo ".\CON413.obj"  +  >> "b32.bc"
 echo ".\CON414.obj"  +  >> "b32.bc"
 echo ".\CON415.obj"  +  >> "b32.bc"
 echo ".\CON418.obj"  +  >> "b32.bc"
 echo ".\CON419.obj"  +  >> "b32.bc"
 echo ".\CON420.obj"  +  >> "b32.bc"
 echo ".\CON421.obj"  +  >> "b32.bc"
 echo ".\CON422.obj"  +  >> "b32.bc"
 echo ".\CON423.obj"  +  >> "b32.bc"
 echo ".\CON424.obj"  +  >> "b32.bc"
 echo ".\CON425.obj"  +  >> "b32.bc"
 echo ".\CON426.obj"  +  >> "b32.bc"
 echo ".\CON427.obj"  +  >> "b32.bc"
 echo ".\CON429.obj"  +  >> "b32.bc"
 echo ".\CON2111.obj"  +  >> "b32.bc"
 echo ".\CON2411.obj"  +  >> "b32.bc"
 echo ".\CON2511.obj"  +  >> "b32.bc"
 echo ".\CON4201.obj"  +  >> "b32.bc"
 echo ".\CON4202.obj"  +  >> "b32.bc"
 echo ".\CON4203.obj"  +  >> "b32.bc"
 echo ".\CON4204.obj"  +  >> "b32.bc"
 echo ".\CON4231.obj"  +  >> "b32.bc"
 echo ".\SAC1.obj"  +  >> "b32.bc"
 echo ".\SAC1BAN.obj"  +  >> "b32.bc"
 echo ".\SAC1FIN.obj"  +  >> "b32.bc"
 echo ".\SAC2CC11.obj"  +  >> "b32.bc"
 echo ".\SAC2CC12.obj"  +  >> "b32.bc"
 echo ".\SAC2FIN.obj"  +  >> "b32.bc"
 echo ".\SAC3.obj"  +  >> "b32.bc"
 echo ".\SAC4CAL.obj"  +  >> "b32.bc"
 echo ".\SAC4CC.obj"  +  >> "b32.bc"
 echo ".\SAC4FLU.obj"  +  >> "b32.bc"
 echo ".\SAC4SER.obj"  +  >> "b32.bc"
 echo ".\SAC4TEL.obj"  +  >> "b32.bc"
 echo ".\SAC5CAD.obj"  +  >> "b32.bc"
 echo ".\SAC5CAD2.obj"  +  >> "b32.bc"
 echo ".\SAC5CLI.obj"  +  >> "b32.bc"
 echo ".\SAC5COM1.obj"  +  >> "b32.bc"
 echo ".\SAC5COM2.obj"  +  >> "b32.bc"
 echo ".\SAC5COM3.obj"  +  >> "b32.bc"
 echo ".\SAC5COM4.obj"  +  >> "b32.bc"
 echo ".\SAC5COM6.obj"  +  >> "b32.bc"
 echo ".\SAC5COM7.obj"  +  >> "b32.bc"
 echo ".\SAC5COM8.obj"  +  >> "b32.bc"
 echo ".\SAC5DES.obj"  +  >> "b32.bc"
 echo ".\SAC5ENV1.obj"  +  >> "b32.bc"
 echo ".\SAC5ET11.obj"  +  >> "b32.bc"
 echo ".\SAC5ET12.obj"  +  >> "b32.bc"
 echo ".\SAC5ET13.obj"  +  >> "b32.bc"
 echo ".\SAC5ET14.obj"  +  >> "b32.bc"
 echo ".\SAC5ET16.obj"  +  >> "b32.bc"
 echo ".\SAC5ET17.obj"  +  >> "b32.bc"
 echo ".\SAC5ET19.obj"  +  >> "b32.bc"
 echo ".\SAC5ET20.obj"  +  >> "b32.bc"
 echo ".\SAC5ET21.obj"  +  >> "b32.bc"
 echo ".\SAC5ET41.obj"  +  >> "b32.bc"
 echo ".\SAC5ET42.obj"  +  >> "b32.bc"
 echo ".\SAC5ETQ.obj"  +  >> "b32.bc"
 echo ".\SAC5ETQ1.obj"  +  >> "b32.bc"
 echo ".\SAC5ETQ3.obj"  +  >> "b32.bc"
 echo ".\SAC5ETQ4.obj"  +  >> "b32.bc"
 echo ".\SAC5ETQ5.obj"  +  >> "b32.bc"
 echo ".\SAC5MIN.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT2.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT3.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT6.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT7.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT8.obj"  +  >> "b32.bc"
 echo ".\SAC5ORC2.obj"  +  >> "b32.bc"
 echo ".\SAC5P10.obj"  +  >> "b32.bc"
 echo ".\SAC5P11.obj"  +  >> "b32.bc"
 echo ".\SAC5PE10.obj"  +  >> "b32.bc"
 echo ".\SAC5PE11.obj"  +  >> "b32.bc"
 echo ".\SAC5PE12.obj"  +  >> "b32.bc"
 echo ".\SAC5PE14.obj"  +  >> "b32.bc"
 echo ".\SAC5PE21.obj"  +  >> "b32.bc"
 echo ".\SAC5PED.obj"  +  >> "b32.bc"
 echo ".\SAC5PED2.obj"  +  >> "b32.bc"
 echo ".\SAC5PED4.obj"  +  >> "b32.bc"
 echo ".\SAC5PED6.obj"  +  >> "b32.bc"
 echo ".\SAC5PED7.obj"  +  >> "b32.bc"
 echo ".\SAC5PED8.obj"  +  >> "b32.bc"
 echo ".\SAC5PED9.obj"  +  >> "b32.bc"
 echo ".\SAC5PER1.obj"  +  >> "b32.bc"
 echo ".\SAC5PER2.obj"  +  >> "b32.bc"
 echo ".\SAC5PER3.obj"  +  >> "b32.bc"
 echo ".\SAC5PERF.obj"  +  >> "b32.bc"
 echo ".\SAC5PLA1.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM1.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM2.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM3.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM4.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM5.obj"  +  >> "b32.bc"
 echo ".\SAC12.obj"  +  >> "b32.bc"
 echo ".\SAC17.obj"  +  >> "b32.bc"
 echo ".\SAC18.obj"  +  >> "b32.bc"
 echo ".\SAC22.obj"  +  >> "b32.bc"
 echo ".\SAC23.obj"  +  >> "b32.bc"
 echo ".\SAC23EXP.obj"  +  >> "b32.bc"
 echo ".\SAC25.obj"  +  >> "b32.bc"
 echo ".\SAC26.obj"  +  >> "b32.bc"
 echo ".\SAC27.obj"  +  >> "b32.bc"
 echo ".\SAC29.obj"  +  >> "b32.bc"
 echo ".\SAC30.obj"  +  >> "b32.bc"
 echo ".\SAC31.obj"  +  >> "b32.bc"
 echo ".\SAC31_0.obj"  +  >> "b32.bc"
 echo ".\SAC31_1.obj"  +  >> "b32.bc"
 echo ".\SAC33.obj"  +  >> "b32.bc"
 echo ".\SAC34.obj"  +  >> "b32.bc"
 echo ".\SAC36.obj"  +  >> "b32.bc"
 echo ".\SAC37.obj"  +  >> "b32.bc"
 echo ".\SAC38.obj"  +  >> "b32.bc"
 echo ".\SAC39.obj"  +  >> "b32.bc"
 echo ".\SAC43.obj"  +  >> "b32.bc"
 echo ".\SAC45.obj"  +  >> "b32.bc"
 echo ".\SAC46.obj"  +  >> "b32.bc"
 echo ".\SAC51.obj"  +  >> "b32.bc"
 echo ".\SAC54.obj"  +  >> "b32.bc"
 echo ".\SAC57.obj"  +  >> "b32.bc"
 echo ".\SAC58.obj"  +  >> "b32.bc"
 echo ".\SAC59.obj"  +  >> "b32.bc"
 echo ".\SAC63.obj"  +  >> "b32.bc"
 echo ".\SAC120.obj"  +  >> "b32.bc"
 echo ".\SAC121.obj"  +  >> "b32.bc"
 echo ".\SAC122.obj"  +  >> "b32.bc"
 echo ".\SAC210.obj"  +  >> "b32.bc"
 echo ".\SAC231.obj"  +  >> "b32.bc"
 echo ".\SAC233.obj"  +  >> "b32.bc"
 echo ".\SAC234.obj"  +  >> "b32.bc"
 echo ".\SAC301.obj"  +  >> "b32.bc"
 echo ".\SAC511.obj"  +  >> "b32.bc"
 echo ".\SAC521.obj"  +  >> "b32.bc"
 echo ".\SAC522.obj"  +  >> "b32.bc"
 echo ".\SAC523.obj"  +  >> "b32.bc"
 echo ".\SAC524.obj"  +  >> "b32.bc"
 echo ".\SAC527.obj"  +  >> "b32.bc"
 echo ".\SAC528.obj"  +  >> "b32.bc"
 echo ".\SAC529.obj"  +  >> "b32.bc"
 echo ".\SAC530.obj"  +  >> "b32.bc"
 echo ".\SAC534.obj"  +  >> "b32.bc"
 echo ".\SAC541.obj"  +  >> "b32.bc"
 echo ".\SAC542.obj"  +  >> "b32.bc"
 echo ".\SAC543.obj"  +  >> "b32.bc"
 echo ".\SAC561.obj"  +  >> "b32.bc"
 echo ".\SAC571.obj"  +  >> "b32.bc"
 echo ".\SAC580.obj"  +  >> "b32.bc"
 echo ".\SAC610.obj"  +  >> "b32.bc"
 echo ".\SACALTCO.obj"  +  >> "b32.bc"
 echo ".\SACATUAL.obj"  +  >> "b32.bc"
 echo ".\SACCAIXA.obj"  +  >> "b32.bc"
 echo ".\SACCEP.obj"  +  >> "b32.bc"
 echo ".\SACCHEQ.obj"  +  >> "b32.bc"
 echo ".\SACCLF.obj"  +  >> "b32.bc"
 echo ".\SACCOTA1.obj"  +  >> "b32.bc"
 echo ".\SACCOTA2.obj"  +  >> "b32.bc"
 echo ".\SACCOTA3.obj"  +  >> "b32.bc"
 echo ".\SACCOTAC.obj"  +  >> "b32.bc"
 echo ".\SACENTRE.obj"  +  >> "b32.bc"
 echo ".\SACESPE.obj"  +  >> "b32.bc"
 echo ".\SACETQ_C.obj"  +  >> "b32.bc"
 echo ".\SACEXP.obj"  +  >> "b32.bc"
 echo ".\SACEXP1.obj"  +  >> "b32.bc"
 echo ".\SACEXP2.obj"  +  >> "b32.bc"
 echo ".\SACEXP3.obj"  +  >> "b32.bc"
 echo ".\SACEXPOR.obj"  +  >> "b32.bc"
 echo ".\SACFRETE.obj"  +  >> "b32.bc"
 echo ".\SACIMPOR.obj"  +  >> "b32.bc"
 echo ".\SACINVE.obj"  +  >> "b32.bc"
 echo ".\SACLOG1.obj"  +  >> "b32.bc"
 echo ".\SACLOG2.obj"  +  >> "b32.bc"
 echo ".\SACMAQ.obj"  +  >> "b32.bc"
 echo ".\SACOS1.obj"  +  >> "b32.bc"
 echo ".\SACOS5.obj"  +  >> "b32.bc"
 echo ".\SACOS11.obj"  +  >> "b32.bc"
 echo ".\SACOS15.obj"  +  >> "b32.bc"
 echo ".\SACOS51.obj"  +  >> "b32.bc"
 echo ".\SACOS52.obj"  +  >> "b32.bc"
 echo ".\SACOS53.obj"  +  >> "b32.bc"
 echo ".\SACOS54.obj"  +  >> "b32.bc"
 echo ".\SACOS531.obj"  +  >> "b32.bc"
 echo ".\SACOSIMP.obj"  +  >> "b32.bc"
 echo ".\SACPCHEQ.obj"  +  >> "b32.bc"
 echo ".\SACPDFLT.obj"  +  >> "b32.bc"
 echo ".\SACPROT1.obj"  +  >> "b32.bc"
 echo ".\SACPROT2.obj"  +  >> "b32.bc"
 echo ".\SACPROT3.obj"  +  >> "b32.bc"
 echo ".\SACPROTO.obj"  +  >> "b32.bc"
 echo ".\SACRCCOM.obj"  +  >> "b32.bc"
 echo ".\SACREC.obj"  +  >> "b32.bc"
 echo ".\SACREG.obj"  +  >> "b32.bc"
 echo ".\SACREORC.obj"  +  >> "b32.bc"
 echo ".\SACTIPDC.obj"  +  >> "b32.bc"
 echo ".\SACTROCA.obj"  +  >> "b32.bc"
 echo ".\SACVEN1.obj"  +  >> "b32.bc"
 echo ".\VENDA.obj"  +  >> "b32.bc"
 echo ".\SACETQCP.obj"  +  >> "b32.bc"
 echo ".\con254.obj"  +  >> "b32.bc"
 echo ".\sactran1.obj"  +  >> "b32.bc"
 echo ".\sacsef1.obj"  +  >> "b32.bc"
 echo ".\sacpres.obj"  +  >> "b32.bc"
 echo ".\saccliatu.obj"  +  >> "b32.bc"
 echo ".\sacproatu.obj"  +  >> "b32.bc"
 echo ".\SACSEF2.obj"  +  >> "b32.bc"
 echo ".\sacmovnt.obj"  +  >> "b32.bc"
 echo ".\sac23orc.obj"  +  >> "b32.bc"
 echo ".\sac23o2.obj"  +  >> "b32.bc"
 echo ".\SACENTPR.obj"  +  >> "b32.bc"
 echo ".\sac23pd1.obj"  +  >> "b32.bc"
 echo ".\SAC5291.obj"  +  >> "b32.bc"
 echo ".\sac5com5.obj"  +  >> "b32.bc"
 echo ".\sac5pe15.obj"  +  >> "b32.bc"
 echo ".\sacseri1.obj"  +  >> "b32.bc"
 echo ".\sacseri2.obj"  +  >> "b32.bc"
 echo ".\sacseri3.obj"  +  >> "b32.bc"
 echo ".\sacseri4.obj"  +  >> "b32.bc"
 echo ".\SACSERI5.obj"  +  >> "b32.bc"
 echo ".\sacbanco.obj"  +  >> "b32.bc"
 echo ".\con2512.obj"  +  >> "b32.bc"
 echo ".\sac2513.obj"  +  >> "b32.bc"
 echo ".\sac5com9.obj"  +  >> "b32.bc"
 echo ".\CON4205.obj"  +  >> "b32.bc"
 echo ".\sacformula.obj"  +  >> "b32.bc"
 echo ".\sac572.obj"  +  >> "b32.bc"
 echo ".\sac5ped10.obj"  +  >> "b32.bc"
 echo ".\con2521.obj"  +  >> "b32.bc"
 echo ".\sac5com10.obj"  +  >> "b32.bc"
 echo ".\sac5231.obj"  +  >> "b32.bc"
 echo ".\sacexp11.obj"  +  >> "b32.bc"
 echo ".\SAC5COM11.obj"  +  >> "b32.bc"
 echo ".\sacsef3.obj"  +  >> "b32.bc"
 echo ".\sac5et201.obj"  +  >> "b32.bc"
 echo ".\sac513.obj"  +  >> "b32.bc"
 echo ".\SAC2531.obj"  +  >> "b32.bc"
 echo ".\sac5devol.obj"  +  >> "b32.bc"
 echo ".\sac3411.obj"  +  >> "b32.bc"
 echo ".\sac22_1.obj"  +  >> "b32.bc"
 echo ".\sac_email.obj"  +  >> "b32.bc"
 echo ".\sacmens.obj"  +  >> "b32.bc"
 echo ".\SACOS55.obj"  +  >> "b32.bc"
 echo ".\sendemail.obj"  +  >> "b32.bc"
 echo ".\CON4191.obj"  +  >> "b32.bc"
 echo ".\SACROT1.obj"  +  >> "b32.bc"
 echo ".\saccalc.obj"  +  >> "b32.bc"
 echo ".\SACFTP1.obj"  +  >> "b32.bc"
 echo ".\sacftp3.obj"  +  >> "b32.bc"
 echo ".\SAC611.obj"  +  >> "b32.bc"
 echo ".\impacbr.obj"  +  >> "b32.bc"
 echo ".\errorsys.obj"  +  >> "b32.bc"
 echo ".\sac35.obj"  +  >> "b32.bc"
 echo ".\hti_impbol.obj"  +  >> "b32.bc"
 echo ".\sac42ant.obj"  +  >> "b32.bc"
 echo ".\sac5not4.obj"  +  >> "b32.bc"
 echo ".\SACCNNT.obj"  +  >> "b32.bc"
 echo ".\con215.obj"  +  >> "b32.bc"
 echo ".\SAC_LIMCLI.obj"  +  >> "b32.bc"
 echo ".\sac5ped11.obj"  +  >> "b32.bc"
 echo ".\SACCTE.obj"  +  >> "b32.bc"
 echo ".\SACCARNE.obj"  +  >> "b32.bc"
 echo ".\SAC216.obj"  +  >> "b32.bc"
 echo ".\SACENTXML.obj"  +  >> "b32.bc"
 echo ".\SACTEF.obj"  +  >> "b32.bc"
 echo ".\sac23caixa.obj"  +  >> "b32.bc"
 echo ".\boleto_pdv.obj"  +  >> "b32.bc"
 echo ".\CON211.obj"  +  >> "b32.bc"
 echo ".\SAC345.obj"  +  >> "b32.bc"
 echo ".\sacnf_e.obj"  +  >> "b32.bc"
 echo ".\sacsql.obj"  +  >> "b32.bc"
 echo ".\SAC_DBF.obj"  +  >> "b32.bc"
 echo ".\sacbal_pin.obj"  +  >> "b32.bc"
 echo ".\SAC213.obj"  +  >> "b32.bc"
 echo ".\SAC217.obj"  +  >> "b32.bc"
 echo ".\SACMDFE.obj"  +  >> "b32.bc"
 echo ".\HRBFUN.obj"  +  >> "b32.bc"
 echo ".\SACROT.obj"  +  >> "b32.bc"
 echo ".\SAC130.obj"  +  >> "b32.bc"
 echo ".\SAC140.obj"  +  >> "b32.bc"
 echo ".\SAC141.obj"  +  >> "b32.bc"
 echo ".\SAC142.obj"  +  >> "b32.bc"
 echo ".\sacprofi.obj"  +  >> "b32.bc"
 echo ".\SAC10.obj"  +  >> "b32.bc"
 echo ".\SACOS41.obj"  +  >> "b32.bc"
 echo ".\SAC1OP.obj"  +  >> "b32.bc"
 echo ".\SACEMP.obj"  +  >> "b32.bc"
 echo ".\SAC20.obj"  +  >> "b32.bc"
 echo ".\SACOBS.obj"  +  >> "b32.bc"
 echo ".\SAC40.obj"  +  >> "b32.bc"
 echo ".\SACCFG.obj"  +  >> "b32.bc"
 echo ".\sacdbf.obj"  +  >> "b32.bc"
 echo ".\saccdx.obj"  +  >> "b32.bc"
 echo ".\SAUTORIZA.obj"  +  >> "b32.bc"
 echo ".\CON252.obj"  +  >> "b32.bc"
 echo ".\SACPROMI.obj"  +  >> "b32.bc"
 echo ".\sacvaque.obj"  +  >> "b32.bc"
 echo ".\sacbole2.obj"  +  >> "b32.bc"
 echo ".\SAC211.obj"  +  >> "b32.bc"
 echo ".\SAC5PED1.obj"  +  >> "b32.bc"
 echo ".\SAC350.obj"  +  >> "b32.bc"
 echo ".\SAC42.obj"  +  >> "b32.bc"
 echo ".\SAC2PED.obj"  +  >> "b32.bc"
 echo ".\SAC212.obj"  +  >> "b32.bc"
 echo ".\SAC214.obj"  +  >> "b32.bc"
 echo ".\SAC215.obj"  +  >> "b32.bc"
 echo ".\SAC5PED3.obj"  +  >> "b32.bc"
 echo ".\SAC5PED5.obj"  +  >> "b32.bc"
 echo ".\CON428.obj"  +  >> "b32.bc"
 echo ".\CON244.obj"  +  >> "b32.bc"
 echo ".\saccst.obj"  +  >> "b32.bc"
 echo ".\SACCID.obj"  +  >> "b32.bc"
 echo ".\sac_ncm.obj"  +  >> "b32.bc"
 echo ".\SACBAL1.obj"  +  >> "b32.bc"
 echo ".\SACDETA.obj"  +  >> "b32.bc"
 echo ".\SACBOLE1.obj"  +  >> "b32.bc"
 echo ".\SAC526.obj"  +  >> "b32.bc"
 echo ".\SAC211B.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT1.obj"  +  >> "b32.bc"
 echo ".\sacdepe.obj"  +  >> "b32.bc"
 echo ".\SAC5CAD1.obj"  +  >> "b32.bc"
 echo ".\SAC341.obj"  +  >> "b32.bc"
 echo ".\SAC19.obj"  +  >> "b32.bc"
 echo ".\SAC520.obj"  +  >> "b32.bc"
 echo ".\SACBAL3.obj"  +  >> "b32.bc"
 echo ".\sacbal4.obj"  +  >> "b32.bc"
 echo ".\FORMULA.obj"  +  >> "b32.bc"
 echo ".\boleto2.obj"  +  >> "b32.bc"
 echo ".\SAC525.obj"  +  >> "b32.bc"
 echo ".\SACSINT.obj"  +  >> "b32.bc"
 echo ".\SACEMAIL.obj"  +  >> "b32.bc"
 echo ".\SAC131.obj"  +  >> "b32.bc"
 echo ".\SAC132.obj"  +  >> "b32.bc"
 echo ".\SAC112.obj"  +  >> "b32.bc"
 echo ".\SACNOTA.obj"  +  >> "b32.bc"
 echo ".\cons_prod.obj"  +  >> "b32.bc"
 echo ".\xls.obj"  +  >> "b32.bc"
 echo ".\SACTP.obj"  +  >> "b32.bc"
 echo ".\SACTPS.obj"  +  >> "b32.bc"
 echo ".\SPED.obj"  +  >> "b32.bc"
 echo ".\SACAUTO1.obj"  +  >> "b32.bc"
 echo ".\SAC110NOVO.obj"  +  >> "b32.bc"
 echo ".\SACAPPHTI.obj"  +  >> "b32.bc"
 echo ".\BOLETO.obj"  +  >> "b32.bc"
 echo ".\SAC00.obj"  +  >> "b32.bc"
 echo ".\SAC111NOVO.obj"  +  >> "b32.bc"
 echo ".\CON251PRO.obj"  +  >> "b32.bc"
 echo ".\sac23pd1novo.obj"  +  >> "b32.bc"
 echo ".\CON412.obj"  +  >> "b32.bc"
 echo ".\SACNFCE.obj"  +  >> "b32.bc"
 echo ".\SISPINPAD.obj"  +  >> "b32.bc"
 echo ".\SAC22PED.obj"  +  >> "b32.bc"
 echo ".\FORMULA_APP.obj"  +  >> "b32.bc"
 echo ".\PINPAD.obj"  +  >> "b32.bc"
 echo ".\SAC5EST1.obj"  +  >> "b32.bc"
 echo ".\ACBRLIB.obj"  +  >> "b32.bc"
 echo ".\SAC4FMES.obj"  +  >> "b32.bc"
 echo ".\SAC232.obj"  +  >> "b32.bc"
 echo ".\SAC5ROM6.obj"  +  >> "b32.bc"
 echo ".\SACDASH.obj"  +  >> "b32.bc"
 echo ".\SACCRIPT.obj"  +  >> "b32.bc"
 echo ".\SACAPPREL.obj"  +  >> "b32.bc"
 echo ".\SMEDALBUM.obj"  +  >> "b32.bc"
 echo ".\CON416.obj"  +  >> "b32.bc"
 echo ".\CON42_0.obj"  +  >> "b32.bc"
 echo ".\SACINVENTA.obj"  +  >> "b32.bc"
 echo ".\SACCHK_NF.obj"  +  >> "b32.bc"
 echo ".\SAC331.obj"  +  >> "b32.bc"
 echo ".\SAC5NCM.obj"  +  >> "b32.bc"
 echo ".\FORMULA_1.obj", +  >> "b32.bc"
 echo ".\SISCOM.EXE", +    >> "b32.bc"
 echo ".\SISCOM.map", +    >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo "C:\xHarbour997\lib\WVWTOOLS.LIB" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbffpt.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbfcdx.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\sql.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_bc.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_ms.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libmysql.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libpq.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\oci.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\odbccp32.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\tip.lib" +   >> "b32.bc"
 echo ".\lib\gtwvt.lib" +   >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo gtwin.lib +  >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo ct.lib +     >> "b32.bc"
 echo tip.lib +     >> "b32.bc"
 echo hsx.lib +     >> "b32.bc"
 echo pcrepos.lib +     >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo , >> "b32.bc"

REM - XHarbour.xCompiler.prg(286) @ 16:11:47:636
ECHO .ÿ
ECHO * (765/765) Linkando SISCOM.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
