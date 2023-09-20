***************************************
* ATUALIZACAO DOS DADOS
***************************************
FUNCTION sacatual
******************
LOCAL mprg:='SACATUAL',mtitulo:='MANUTENCAO ARQUIVO MORTO',;
      lci,cci,lba,cba,tela1,opcao,mdias,mlin,cor,mdoc,mop,i:=0,;
      telaop,mreg,mdele,mcaminho

mdias := CTOD('  /  /  ')
lci := cci := 0
lba := 23
cba := 79
setcor(3)
op_tela(lci,cci,lba,cba,mtitulo)
@ lci+5,cci+1 TO lci+5,cba-1
DEVPOS(lci+1,cci+1);DEVOUT('E IMPORTANTE que todos os terminais estejam fora de funcionamento para que')
DEVPOS(lci+2,cci+2);DEVOUT('seja feito essa rotina, Caso contrario pode ocorrer serios problemas')
SETCOLOR('I*')
DEVPOS(lci+1,cci+3);DEVOUT('IMPORTANTE')
setcor(1)
IF ! ver_nivel(mprg,mtitulo,'1',nivel_acess,,'AMBIE')
        RELEASE ALL
        wvw_lclosewindow()
        RETURN NIL
ENDIF
DEVPOS(lci+3,cci+2);DEVOUT('Digite a Data que Deseja...:')
DEVPOS(lci+4,cci+2);DEVOUT('Atual.Titulos A REC./A PAG:')
opcao := 'S'
mdoc  := ' '
@ lci+3,cci+31 GET mdias VALID IF(EMPTY(mdias),.F.,.T.)
@ lci+4,cci+31 GET mdoc PICT '@!' VALID mdoc $ 'S,N'
READ
IF LASTKEY() = 27 .OR. opcao = 'N'
        wvw_lclosewindow()
        RETURN NIL
ENDIF
mop := op_simnao('S','Confirma as Informacoes acima:')
IF mop = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF

mensagem("Atualizando arquivos.....")

** SACCAIXA

DEVPOS(lci+6,cci+2);DEVOUT('1> Atualizando Arquivo SACCAIXA.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM saccaixa WHERE data <= "+sr_cdbvalue(mdias),,.f.)

** SACMOV

DEVPOS(lci+8,cci+2);DEVOUT('2> Atualizando Arquivo SACMOV.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM sacmov WHERE data_s_e <= "+sr_cdbvalue(mdias),,.f.)

** SACMOVNT

DEVPOS(lci+10,cci+2);DEVOUT('3> Atualizando Arquivo SACMOVNT.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM sacmovnt WHERE data_s_e <= "+sr_cdbvalue(mdias),,.f.)


** SACPED_E

DEVPOS(lci+14,cci+2);DEVOUT('6> Atualizando Arquivo SACPED_E.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM sacped_e WHERE dat_ped <= "+sr_cdbvalue(mdias),,.f.)

** SACPED_S

DEVPOS(lci+16,cci+2);DEVOUT('7> Atualizando Arquivo SACPED_S.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM sacped_s WHERE pdat_ped <= "+sr_cdbvalue(mdias)+" AND pdatapag IS NOT NULL",,.f.)

** SACTOTNT

DEVPOS(lci+18,cci+2);DEVOUT('8> Atualizando Arquivo SACTOTNT.DBF.. Aguarde um momento OK')
sr_getconnection():exec("DELETE FROM sactotnt WHERE emissao <= "+sr_cdbvalue(mdias),,.f.)

IF mdoc = 'S'
        ** SACDUPR
        DEVPOS(lci+20,cci+2);DEVOUT('9> Atualizando Arquivo SACDUPR.DBF.. Aguarde um momento OK')
	sr_getconnection():exec("DELETE FROM sacdupr WHERE venc <= "+sr_cdbvalue(mdias)+" AND datpag IS NOT NULL",,.f.)

        ** SACDUPP
        DEVPOS(lci+21,cci+2);DEVOUT('10> Atualizando Arquivo SACDUPP.DBF.. Aguarde um momento OK')
	sr_getconnection():exec("DELETE FROM sacdupp WHERE venc <= "+sr_cdbvalue(mdias)+" AND datpag IS NOT NULL",,.f.)
ENDIF
sr_getconnection():exec("COMMIT",,.f.)
DEVPOS(lci+22,cci+2);DEVOUT('F I M   D A   A T U A L I Z A C A O   O K')
INKEY(3)
wvw_lclosewindow()
RETURN NIL

*/