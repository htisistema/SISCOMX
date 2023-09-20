function num_codigo
*******************
LOCAL i:=0
CLS
USE SACMERC ALIAS MERC EXCLUSIVE
SELE('merc')
WHILE ! EOF()
        i ++
        merc->cod_merc := STRZERO(i,5)
        DEVPOS(00,00);DEVOUT(merc->cod_merc+'-'+merc->merc)
        SKIP
ENDDO
DBCOMMITALL()
DBUNLOCKALL()
RETURN NIL

