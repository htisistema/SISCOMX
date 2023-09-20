FUNCTION saccript(mop)
**********************
LOCAL mprg:='SACCRIPT',mlinha,mcons_merc
op_tela(10,10,13,70,' Aguarde um momento, Atualizand Arquivos de dados ','*')
//DEVPOS(01,00);DEVOUT('Atualizando o Campo CHV_CRIPT do arquivo SACMERC')
mcons_merc := {}
sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@mcons_merc)
sr_getconnection():exec('COMMIT',,.f.)
FOR i = 1 TO LEN(mcons_merc)
        DEVPOS(02,00);DEVOUT('Atualizando PRODUTO:'+mcons_merc[i,8]+' - '+mcons_merc[i,9]+SPACE(20))
        mlinha := SUBSTR(mcons_merc[i,2],1,12) + verif_ean13(SUBSTR(mcons_merc[i,2],1,12))+SPACE(1)
        sr_getconnection():exec("UPDATE sacmerc SET cod_barr = "+sr_cdbvalue(mlinha)+" WHERE cod_merc = "+sr_cdbvalue(mcons_merc[i,8]),,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
NEXT
wvw_lclosewindow()
RETURN NIL
