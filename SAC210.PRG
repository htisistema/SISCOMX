*******************************************
* MENU DO EMISSAO, 2 VIA NF. E CANCELAMENTO
*******************************************
FUNCTION sac210
*****************
LOCAL MPRG:='SAC210'

LOCAL opcao,tela,tecla,lci,cci,lba,cba

lci = 06
cci = 25
lba = 15
cba = 53
tela = SAVESCREEN(01,00,24,79)
opcao = 0

WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        setcor(3)
        botao(lci,cci,lba,cba,,' Nota Fiscal ')
        setcor(10)
        @ lci+1,cci+1 PROMPT ' 0-> Emissao               ' MESSAGE '** Emissao de Nota Fiscal - <ESC> p/Retornar **'
        @ lci+2,cci+1 PROMPT ' 1-> Emissao p/Agrupamento ' MESSAGE '** Emissao de Nota Fiscal p/Agrupamento de Pedidos - <ESC> p/Retornar **'
        @ lci+3,cci+1 PROMPT ' 2-> 2a.Via                ' MESSAGE '** 2a.Via da Nota Fiscal - <ESC> p/Retornar **'
        @ lci+4,cci+1 PROMPT ' 3-> Cancelamento          ' MESSAGE '** Cancelamento da Nota Fiscal - <ESC> p/Retornar **'
        @ lci+5,cci+1 PROMPT ' 4-> Alterar/Excl.         ' MESSAGE '** Alteracao e Exclusao - <ESC> p/Retornar **'
        @ lci+6,cci+1 PROMPT ' 5-> Nota Fiscal CORRECAO  ' MESSAGE '** Emissao de NOTA FISCAL DE CORRECAO - <ESC> p/Retornar **'
        @ lci+7,cci+1 PROMPT ' 6-> Estorno CANCELAMENTO  ' MESSAGE '** Estorno de CANCELAMENTO NOTA FISCAL - <ESC> p/Retornar **'
        //@ lci+8,cci+1 PROMPT ' 7-> Emissao Nota BALCAO   ' MESSAGE '** Emissao de Nota de BALCAO - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *        EMISSAO
                         sac211()
                CASE opcao = 2
                *        EMISSAO DE NF. P/AGRUPAMENTO DE PEDIDOS
                         sac2ped(2)
                CASE opcao = 3
                *        2a.VIA
                         sac212()
                CASE opcao = 4
                *        CANCELAMENTO
                         sac213()
                CASE opcao = 5
                *        ALTERACAO/EXCLUSAO
                         sac214()
                CASE opcao = 6
                *        EMISSAO NF CORRECAO
                         sac211(,'*')
                CASE opcao = 7
                *        ESTORNO CANCELAMENTO NOTA FISCAL
                         sac215()
                //CASE opcao = 8
                *        EMISSAO NOTA DE BALCAO
                //         sac211b()
        ENDCASE
ENDDO
RETURN NIL

