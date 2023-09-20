ECHO OFF
DEL SISCOM3.rar
rar A -p6821 siscom3 *.PRG *.CLP *.BAT *.lnk *.xdev *.xtag *.LIB *.CH *.DLL
RAR A -p6821 SISCOM3 *.bmp
RAR A -p6821 SISCOM3 *.jpg
RAR A -p6821 SISCOM3 *.ico
RAR A -p6821 SISCOM3 Language.ini

RAR A siscomex siscom.EXE ssendmail.exe AnyDesk.exe Magick_install.exe ssleay32.dll libeay32.dll acbr*.dll ibptax_dbf.rar AA_v3.exe instsvc.exe sacncm.rar Language.ini
RAR A siscomex gbak.exe BKP_SISCOM.BAT firebird.msg fbclient.dll 
RAR A SISCOMEX *.jpg
RAR A SISCOMEX *.bmp
RAR A SISCOMEX *.ico

ECHO Backup p/Caneta

COPY siscom3.rar E:
COPY siscomex.rar E:

COPY siscom3.rar C:\BACKUP_HTI
COPY siscomex.rar C:\BACKUP_HTI
rem COPY siscom.GDB H:\BACKUP_HTI

COPY siscom3.rar %3
COPY siscomex.rar %3






