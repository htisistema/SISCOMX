@ ECHO OFF
CLS
CD\SIAC
gfix -v -full -user SYSDBA -password masterkey siscom.gdb
@ ECHO .
@ ECHO .
PAUSE