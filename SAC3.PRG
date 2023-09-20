***********************
* MENU DO CAIXA
***********************

FUNCTION sac3
*****************
LOCAL MPRG:='SAC3'

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba = 06
cba = 32
opcao = 0
setcor(1)
****************************************************
op_tela(10,10,16,42,' Continuacao Caixa ','*')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci+1,cci+1 PROMPT '  0 -> Consulta de Cliente     ' MESSAGE '** Consulta de Cliente - <ESC> p/Retornar **'
        @ lci+2,cci+1 PROMPT '  1 -> Inclusao de Cliente     ' MESSAGE '** Inclusao de Cliente - <ESC> p/Retornar **'
        @ lci+3,cci+1 PROMPT "  2 -> Consulta de CEP'S       " MESSAGE "** Consulta de CEP'S - <ESC> p/Retornar **"
        @ lci+4,cci+1 PROMPT "  3 -> Preenchimento Cheques   " MESSAGE "** Preenchimento de CHEQUES - <ESC> p/Retornar **"
        @ lci+5,cci+1 PROMPT "  4 -> Emissao de Carnes       " MESSAGE "** Emissao de Carnes - <ESC> p/Retornar **"
*       @ lci+6,cci+1 PROMPT ' 5 -> Faturamento Periodo     ' MESSAGE '** Relatorio do Faturamento p/periodo - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                *       CONSULTA DE CLIENTES
                         sac42()
                CASE opcao = 2
                *       INCLUSAO DE CLIENTES
                        *************
                        CLOSE ALL
                        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                        IF ! AbriArq('saccep','cep');RETURN NIL;ENDIF
                        //
                        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                        set_key('cliente')
                        SELE('cli');ORDSETFOCUS(2)
                        GO TOP
                        *************
                        f7_cli('*')
                CASE opcao = 3
                *       CONSULTA DE CEP'S
                         saccep()
                CASE opcao = 4
                *       PREENCHIMENTO DE CHEQUES
                         saccheq()
                CASE opcao = 5
                *       EMISSAO DE CARNES       //prg sac30
                         emi_carne()
*               CASE opcao = 6
*               *        RELATORIO DE FATURAMENTO NO PERIODO
*                       sac39()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

