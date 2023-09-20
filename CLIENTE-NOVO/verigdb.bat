@ ECHO OFF
CLS
@ ECHO .
@ ECHO Aguarde um momento que estar sendo feito uma VERIFICACAO no seu BANCO DE DADOS.....
gfix -v -full -user SYSDBA -password masterkey siscom.gdb
@ ECHO .
@ ECHO .
PAUSE