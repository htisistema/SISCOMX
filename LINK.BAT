@ECHO OFF
CLS
ECHO COMPILANDO COM BLINKER 6.0
ECHO .
ECHO OFF
@echo off
cls
clipper @hrbfun /N /I /M
clipper @sacroti /N /I /M
rem RMAKE siac.rmk
clipper @siac /N /I /M
ECHO SIAC.CLP
rem RMAKE sac1.rmk
clipper @sac1 /N /I /M
ECHO SAC1.CLP
clipper @sac2 /N /I /M
ECHO SAC2.CLP
clipper @sac3 /N /I /M
ECHO SAC3.CLP
clipper @sac4 /N /I /M
ECHO SAC4.CLP
clipper @sac5 /N /I /M
ECHO SAC5.CLP
clipper @sac6 /N /I /M
ECHO SAC6.CLP
clipper @sac7 /N /I /M
ECHO SAC7.CLP
clipper @sac8 /N /I /M
ECHO SAC8.CLP
clipper @sac9 /N /I /M
ECHO SAC9.CLP
clipper @siaccfg /N /I /M
ECHO SIACCFG.CLP
clipper @sacecf /N /I /M
ECHO SACECF.CLP
clipper @sacnota /N /I /M
ECHO SACNOTA.CLP
REM BLINKER FI @SIAC @\FW\INCLUDE\FIVEWIN.LNK
BLINKER FI @SIAC
DEL siac.obj
DEL sac1.obj
DEL sac2.obj
DEL sac3.obj
DEL sac4.obj
DEL sac5.obj
DEL sac6.obj
DEL sac7.obj
DEL sac8.obj
DEL sac9.obj
DEL siaccfg.obj
DEL sacecf.obj
DEL sacnota.obj
DIR SIAC.EXE
cls

clipper @SACCFG /n
RTLINK fi SACCFG,hrbfun,__wait,timeslic LIB clipper,extend,novterm,gaspro52,SCRNSAVE,RELOGIO,oslib,SIX3,WAPI
REM RTLINK fi SACCFG,hrbfun,__wait,timeslic LIB clipper,extend,novterm,dbfcdx,gaspro52,SCRNSAVE,RELOGIO,oslib,SIX3

del SACCFG.obj
cls
clipper @hrbfun /N /I /M
clipper @sacroti /N /I /M
clipper @SIACFIS /n
clipper @SIACFIS1 /n
BLINKER FI @SIACFIS
CLS
cls
clipper @SIACPED /n
clipper @SIACPED1 /n
clipper @SIACPED2 /n
BLINKER FI @SIACPED
CLS
ECHO Fim da Compilacao





REM clipper @SIACRX /N /I
REM clipper @SIACRX1 /N /I
REM clipper @SIACRX2 /N /I
REM clipper @sacnota /N /I
REM BLINKER FI @SIACRX
REM cls

REM cls
REM clipper @siacoper /n
REM RTLINK /FREE FI siacoper,hrbfun,amdk6 LIB clipper,extend,dbfcdx,novterm,GASPRO52
REM cls
REM clipper @manuten /n
REM RTLINK /FREE FI manuten,hrbfun,amdk6 LIB clipper,extend,novterm,dbfcdx,gaspro52,SCRNSAVE
REM cls
REM clipper @SIACCFG /n
REM clipper @SIACCFG1 /n
REM clipper @SIACCFG2 /n
REM BLINKER FI @SIACCFG
REM cls











