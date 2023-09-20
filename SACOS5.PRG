***********************************
* MENU DE ASSISTENCIAS RELATORIOS
***********************************
FUNCTION sacos5(mtp)
****************
LOCAL mprg:='SACOS5',;
      mtela,lci,cci,lba,cba,opcao

lci := 00
cci := 00
lba := 03
cba := 24
op_tela(lci,cci,lba+2,cba,,' Relatorios O.S ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT   ' O.S. em Aberto       '  //MESSAGE '** Relatorio de O.S. em Aberto - <ESC> Retornar **'
        @ lci+1,cci PROMPT ' O.S.  Baixado        ' //MESSAGE '** Relatorio de O.S. Baixadas - <ESC> Retornar **'
        @ lci+2,cci PROMPT ' O.S.  Canceladas     ' //MESSAGE '** Relatorio de O.S. Canceladas - <ESC> Retornar **'
        @ lci+3,cci PROMPT ' Movimento de Produto ' //MESSAGE '** Relatorio de Produtos das O.S. em ABERTO - <ESC> Retornar **'
        @ lci+4,cci PROMPT ' Resumo dos Produto   ' //MESSAGE '** Relatorio do RESUMO dos Produtos das O.S. em ABERTO - <ESC> Retornar **'

        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          RELATORIO DE O.S. EM ABERTO
                        sacos51()
                CASE opcao = 2
                *          RELATORIO DE O.S. BAIXADOS
                        sacos52()
                CASE opcao = 3
                *          RELATORIO DE O.S. CANCELADAS
                        sacos54()
                CASE opcao = 4
                *          RELATORIO DE PRODUTOS DA O.S.
                        sacos53()
                CASE opcao = 5
                *          RELATORIO DE PRODUTOS DA O.S. RESUMO
                        sacos531()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************








