********************
* 07/04/2009
********************
FUNCTION sacseri4
*****************
LOCAL mprg := 'SACSERI4',opcao,mserial,cons_seri:={},cons_ped:={},;
      m_serial := {},i:=0,msaldo:=0,mobs

PRIVATE mcod_merc:=0,mnum_ped:=0,ali:='ped_s'

IF ! ver_nivel(mprg,'CONTROLE DE SERIAL (BAIXA)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(05,10,13,71,'CONTROLE DE SERIAL (BAIXA)')
WHILE .T.
        mcod_merc := 0
        mobs := SPACE(60)
        mensagem('Digite o numero do pedido - <F1> para consultar - <ESC>p/Sair')
        limpa(00,00,33,100)
        DEVPOS(00,00);DEVOUT("Numero de Pedido..:")
        DEVPOS(01,00);DEVOUT("Codigo do Produto.:")
        DEVPOS(02,00);DEVOUT("Observacao........:")
        DEVPOS(03,00);DEVOUT("Saldo de Seriais:")
        DEVPOS(04,00);DEVOUT("Digite a Serial...:")
        DEVPOS(05,00);DEVOUT("Quant. Solicitada.:")
        DEVPOS(06,00);DEVOUT("Quant. Digitada...:")
        DEVPOS(07,00);DEVOUT("RESTANTE..........:")
        @ 00,20 GET mnum_ped PICT '999999' VALID ver_cod(mcod_merc,00,28)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_ped := {}
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('PEDIDO NAO ENCONTRADO....')
                LOOP
        ENDIF
        mensagem('Digite o Codigo do Produto - <F1> para consultar - <ESC>p/Sair')
        @ 01,20 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,01,28)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_ped := {}
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        cComm  := ccomm + " AND pcod_merc = "+sr_cdbvalue(mcod_merc)
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('PRODUTO NAO ENCONTRADO NESTE PEDIDO....')
                LOOP
        ENDIF
        cons_seri := {}
        cComm  := "SELECT * FROM sacserial WHERE cod_prod = "+sr_cdbvalue(mcod_merc)
        cComm  := ccomm + " AND data_baix IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@cons_seri)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_seri) = 0
                atencao('NAO EXISTE NENHUMA SERIAL PARA ESTE PRODUTO....')
                LOOP
        ENDIF
        msaldo := LEN(cons_seri)
        cons_seri := {}
        cComm  := "SELECT * FROM sacserial WHERE cod_prod = "+sr_cdbvalue(mcod_merc)
        cComm  := ccomm + " AND n_pedido = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        sr_getconnection():exec(ccomm,,.t.,@cons_seri)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_seri) > 0
                atencao('JA FOI PROCESSADO AS SERIAL DESTE PRODUTO....')
                LOOP
        ENDIF

        setcor(3)
        DEVPOS(03,20);DEVOUT(TRANSFORM(msaldo,'999,999.999'))
        DEVPOS(05,20);DEVOUT(TRANSFORM(cons_ped[1,14],'999,999.999'))
        setcor(1)
        m_serial := {}
        WHILE .T.
                mensagem('Digite a Serial - <ESC>p/Finanlizar')
                mserial := SPACE(20)
                @ 04,20 GET mserial
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                cons_seri := {}
                cComm  := "SELECT * FROM sacserial WHERE cod_prod = "+sr_cdbvalue(mcod_merc)
                cComm  := ccomm + " AND serial = "+sr_cdbvalue(mserial)
                cComm  := ccomm + " AND data_baix IS NULL"
                sr_getconnection():exec(ccomm,,.t.,@cons_seri)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_seri) = 0
                        atencao('ESTA SERIAL NAO FOI ENCONTRADA OU JA FOI SOLICITADA....')
                        LOOP
                ENDIF
                IF ASCAN(m_serial,mserial) > 0
                        atencao('ESTA SERIAL NAO FOI ENCONTRADA OU JA FOI SOLICITADA....')
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Inclusao da Serial:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                AADD(m_serial,mserial)
                DEVPOS(06,20);DEVOUT(TRANSFORM(LEN(m_serial),'999,999.999'))
                DEVPOS(07,20);DEVOUT(TRANSFORM(cons_ped[1,14] - LEN(m_serial),'999,999.999'))
                IF cons_ped[1,14] = LEN(m_serial)
                        EXIT
                ENDIF
        ENDDO
        IF LEN(m_serial) > 0
                opcao := op_simnao('S','Confirma todo o Processo das Seriais:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                mensagem('Aguarde um Momento o final do processo....')
                i:=0
                FOR i = 1 TO LEN(m_serial)
                        cons_seri := {}
                        cComm  := "UPDATE sacserial SET n_pedido = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        ccomm  := ccomm + " ,data_baix = "+sr_cdbvalue(mdata_sis)
                        ccomm  := ccomm + " ,hora_baix = "+sr_cdbvalue(TIME())
                        ccomm  := ccomm + " ,oper_baix = "+sr_cdbvalue(cod_operado)
                        ccomm  := ccomm + " ,obs_baix = "+sr_cdbvalue(mobs)
                        ccomm  := ccomm + " WHERE cod_prod = "+sr_cdbvalue(mcod_merc)
                        cComm  := ccomm + " AND serial = "+sr_cdbvalue(m_serial[i])
                        cComm  := ccomm + " AND data_baix IS NULL"
                        sr_getconnection():exec(ccomm,,.t.,@cons_seri)
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
ENDDO
RETURN NIL


