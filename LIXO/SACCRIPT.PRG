FUNCTION saccript(mop)
**********************
LOCAL mprg:='SACCRIPT',mlinha,mcons_merc
op_tela(10,10,13,70,' Aguarde um momento, Atualizand Arquivos de dados ','*')
DEVPOS(01,00);DEVOUT('Atualizando o Campo CHV_CRIPT do arquivo SACMERC')
mcons_merc := {}
sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@mcons_merc)
FOR i = 1 TO LEN(mcons_merc)
        DEVPOS(02,00);DEVOUT('Atualizando PRODUTO:'+mcons_merc[i,8]+' - '+mcons_merc[i,9]+SPACE(20))
        mlinha := mcons_merc[i,2]+mcons_merc[i,8]+mcons_merc[i,9]+mcons_merc[i,14]+STRZERO(mcons_merc[i,56]*1000,13)+STRZERO(iat(mcons_merc[i,46])*100,14)+mcons_merc[i,68]
        sr_getconnection():exec("UPDATE sacmerc SET chv_cript = "+sr_cdbvalue(criptografia(mlinha,'C'))+" WHERE cod_merc = "+sr_cdbvalue(mcons_merc[i,8]),,.f.)
NEXT
sr_getconnection():exec('COMMIT',,.f.)
wvw_lclosewindow()
RETURN NIL
