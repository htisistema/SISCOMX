@ ECHO OFF
CLS
@ ECHO .
@ ECHO Aguarde um momento que estar sendo feito a RESTAURACAO do seu BANCO DE DADOS.....
gbak -R -user SYSDBA -password masterkey siscom.bkp siscom.gdb
@ ECHO .
@ ECHO .
PAUSE