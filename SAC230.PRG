*****************************
* EMISSAO DE PEDIDO COMPRA
* SAC230.PRG
*****************************
MEMVAR nivel_acess
FUNCTION sac230
**************
LOCAL MPRG:='SAC230'

IF ! ver_nivel(mprg,'PEDIDO DE COMPRA (emissao)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('SACPED_E','PED_E');RETURN NIL;ENDIF
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
*------------------------------------------------------------------
set_key('forn','merc')

op_tela(05,20,22,50,' MENU PEDIDO INTERNO DE COMPRAS DE MERCADORIAS ','*')
WHILE .T.
        limpa(00,00,30,90)
        setcor(10)
        botao1(01,02,01+2,02+26)
        botao1(01+4,02,01+6,02+26)
        botao1(01+8,02,01+10,02+26)
        botao1(01+12,02,01+14,02+26)
        setcor(10)
        @ 01+1,02+1 PROMPT  '       SOLICITACAO       '
        @ 01+5,02+1 PROMPT  '        ALTERACAO        '
        @ 01+9,02+1 PROMPT  '        2a. VIA          '
        @ 01+13,02+1 PROMPT '        EXCLUSAO         '
        SET INTEN ON
        MENU TO mop_menu
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mop_menu = 1
                SET CURSOR ON
                sac231()
        ELSEIF mop_menu = 2
                SET CURSOR ON
                sac232()
        ELSEIF mop_menu = 3
                SET CURSOR ON
                sac233()
        ELSEIF mop_menu = 4
                SET CURSOR ON
                sac234()
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
