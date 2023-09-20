***********************
* MENU DO ESTOQUE AV.
***********************

FUNCTION sac2av
*****************
LOCAL MPRG:='SAC2AV'

LOCAL opcao,tela,tecla,lci,cci,lba,cba

lci = 07
cci = 53
lba = 12
cba = 68
tela = SAVESCREEN(01,00,24,79)
opcao = 0
*----------------------------------------------
CLOSE ALL
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacav','av');RETURN NIL;ENDIF
*--------------------------------------------------

WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        botao(lci,cci,lba,cba,,' Est. A.V ')
        setcor(9)
        @ lci+1,cci+1 PROMPT '  Entrada      ' MESSAGE '** Entrada de Mercadoria do Estoque Haver - <ESC> p/Retornar **'
        @ lci+2,cci+1 PROMPT '  Baixa        ' MESSAGE '** Baixa de Estoque Haver - <ESC> p/Retornar **'
        @ lci+3,cci+1 PROMPT '  Estorno      ' MESSAGE '** Estorno de Estoque Haver - <ESC> p/Retornar **'
        @ lci+4,cci+1 PROMPT '  Alteracao    ' MESSAGE '** Alteracao do Estoque Haver - <ESC> p/Retornar **'
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *        ENTRADA ESTOQUE A.V.
                         sac2av1()
                CASE opcao = 2
                *        BAIXA ESTOQUE A.V.
                         sac2av2()
                CASE opcao = 3
                *        ESTORNO ESTOQUE A.V.
                         sac2av3()
                CASE opcao = 4
                *        ALTERACAO ESTOQUE A.V.
                         sac2av4()
        ENDCASE
ENDDO
RETURN NIL

