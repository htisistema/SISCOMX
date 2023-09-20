@ ECHO OFF
CLS
@ ECHO .
@ ECHO Aguarde um momento que estar sendo feito o BACKUP no seu BANCO DE DADOS.....
DEL siscom.bkp
gbak -B -user SYSDBA -password masterkey siscom.gdb siscom.bkp
@ ECHO .
@ ECHO .
PAUSE