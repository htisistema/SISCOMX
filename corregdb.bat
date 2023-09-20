@ ECHO OFF
CLS
@ ECHO .
@ ECHO Aguarde um momento que estar sendo feito uma CORRECAO no seu BANCO DE DADOS.....
gfix -mend -full -ignore -user SYSDBA -password masterkey siscom.gdb
@ ECHO .
@ ECHO .
PAUSE