********************
* 07/04/2009
********************
FUNCTION sacseri5
*****************
LOCAL mprg := 'SACSERI5',opcao,mserial

PRIVATE mcod_merc:=0,mnum_ped:=0,ali:='ped_s'

IF ! ver_nivel(mprg,'CONTROLE DE SERIAL (CONSULTA DE SERIAL)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(05,10,13,71,'CONTROLE DE SERIAL (CONSULTA DE SERIAL)')
WHILE .T.
        mserial := SPACE(20)
        mensagem('Digite o numero do pedido - <F1> para consultar - <ESC>p/Sair')
        limpa(00,00,33,100)
        DEVPOS(00,00);DEVOUT("Numero da Serial..:")
        DEVPOS(01,00);DEVOUT("Codigo do Peoduto.:")
        @ 00,20 GET mserial
        @ 01,20 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,01,28) WHEN EMPTY(mserial)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mserial)
                cons_serial(,mserial)
        ELSEIF ! EMPTY(mcod_merc)
                cons_serial(mcod_merc)
        ENDIF
ENDDO
RETURN NIL

