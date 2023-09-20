***********************************
* MENU DE ASSISTENCIAS RELATORIOS
***********************************
FUNCTION sacass2(mtp)
****************
LOCAL mprg:='SACASS2',;
      mtela,lci,cci,lba,cba,opcao

lci := 00
cci := 00
lba := 02
cba := 25
op_tela(lci,cci,lba,cba,,' RELATORIOS '+IF(mtp=NIL,'ASSISTENCIA','SOLICITACAO')+' ')

WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT ' '+IF(mtp=NIL,'Assistencia','Solicitacao')+' em Aberto    ' //MESSAGE '** Inclusao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+1,cci PROMPT ' '+IF(mtp=NIL,'Assistencia','Solicitacao')+'  Baixado     ' //MESSAGE '** Alteracao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'

        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          RELATORIO DE ASSISTENCIA EM ABERTO
                        sacass20(mtp)
                CASE opcao = 2
                *          RELATORIO DE ASSISTENCIA BAIXADOS
                        sacass21(mtp)
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************








