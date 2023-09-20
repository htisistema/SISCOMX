MEMVAR getlist
********************************
* SOLICITAR PEDIDO
*******************************
FUNCTION sac23exp()        // CODIGO DE BARRA
***************
MEMVAR cod_operado,nivel_acess,mdata_sis
LOCAL MPRG:='SAC23EXP',;
      mp_venda,msele,morde,f,mtelap,opcao:='S',mquantd:=0
PRIVATE m_matriz:={},m_codigo:={},m_Cbarra:={},i,;
        mcod_merc:=0,mtot_ped,li,ci,lb,cb,lci,cci,lba,cba,tela,;
        mcod_bc,mnum_ped:=0,ponto:=0,ali:='ped_s',cons_ped:={}

lci := cci := 0
lba = 30
cba = 90

*---------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*mtip_term := m_cfg[2]
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*---------------------------------------------
CLEAR GETS
op_tela(00,00,30,90,'EXPEDICAO DE PEDIDOS')
setcor(3)
DEVPOS(lci,2);DEVOUT(' Numero do PEDIDO: ')
setcor(1)
@ 2,cci TO 2,cba
DEVPOS(1,1);DEVOUT('Cod.')
DEVPOS(1,7);DEVOUT('Descricao')
DEVPOS(1,48);DEVOUT('    Qtd.')
DEVPOS(1,COL()+1);DEVOUT('  Volume')
DEVPOS(1,COL()+1);DEVOUT('   Saldo')
msubtotal := 0
mtot_ipi  := 0
setcor(3)
@ lba-4,cci TO lba-4,cba
@ lba-2,cci TO lba-2,cba
setcor(1)
DEVPOS(lba-4,1);DEVOUT('Cod.')
DEVPOS(lba-4,7);DEVOUT('Descricao')
DEVPOS(lba-4,53);DEVOUT('Qtd.')
DEVPOS(lba-1,1);DEVOUT('Item:')
DEVPOS(lba-1,58);DEVOUT('Total:')

mflag := mtot_custo := 0
mcod_vend := SPACE(3)
WHILE .T.
        m_codigo:={}
        m_matriz:={}
        m_Cbarra:={}
        mnum_ped := 0
        @ lci,21 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RELEASE ALL
                RETURN NIL
        ENDIF
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        ccomm := ccomm + " ORDER BY pnum_ped,pcod_merc"
        cons_ped:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Nao foi possivel encontrar este PEDIDO...')
                LOOP
        ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este pedido foi CANCELADO !!!, nao pode entregar')
                LOOP
        ENDIF
        IF cons_ped[1,49] = 'N'
                atencao('Este pedido e NAO PRODUCAO !!!, nao pode entregar - <ESC>Sair')
                LOOP
        ENDIF
        IF cons_ped[1,49] = ' '
                IF cons_ped[1,62] = '*'
                        opcao := op_simnao('N','Este pedido nao esta PAGO !!!, e foi ENTREGUE no dia: '+DTOC(cons_ped[1,64])+' Pelo operador: '+cons_ped[1,63]+' Deseja Estornar este Pedido entregue:')
                        IF opcao = 'S'
                                cComm  := "UPDATE sacped_s SET pentreg = NULL,pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = NULL WHERE pnum_ped = "+sr_cdbvalue(cons_ped[1,2])
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        EXIT
                ELSE
                        atencao('Este pedido nao esta PAGO !!!, nao pode entregar')
                        EXIT
                ENDIF
        ELSEIF cons_ped[1,49] = '*' .AND. cons_ped[1,62] = '*'
                opcao := op_simnao('N','Este pedido ja foi PAGO !!!, e foi ENTREGUE no dia: '+DTOC(cons_ped[1,64])+' Pelo operador: '+cons_ped[1,63]+' Deseja Estornar este Pedido entregue:')
                IF opcao = 'S'
                        cComm  := "UPDATE sacped_s SET pentreg = NULL,pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = NULL WHERE pnum_ped = "+sr_cdbvalue(cons_ped[1,2])
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
                EXIT
        ELSEIF cons_ped[1,49] = '*'
                mensagem('Este pedido ja foi PAGO !!! - <ENTER>p/entregar - <ESC>nao entregar')
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                cons_merc:={}
                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_ped[i,6])
                sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_merc) = 0
                        LOOP
                ENDIF
                AADD(m_codigo,cons_ped[i,6])
                AADD(m_Cbarra,cons_merc[1,2])
                IF cons_ped[i,13] > 0
                        AADD(m_matriz,{cons_ped[i,13] * cons_ped[i,14],cons_ped[i,7],cons_ped[i,14],cons_ped[i,13]})
                ELSE
                        AADD(m_matriz,{cons_ped[i,14],cons_ped[i,7],cons_ped[i,14],cons_ped[i,13]})
                ENDIF
        NEXT
        IF LEN(m_codigo) = 0
                atencao('Nao tem nenhuma mercadoria este PEDIDO')
                LOOP
        ENDIF
        WHILE .T.
                mtot_ped := 0
                setcor(3)
                DEVPOS(lba-1,07);DEVOUT(STRZERO(mtot_ped,3))
                f = 0
                i = 1
                WHILE  i <= LEN(m_codigo)
                        IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                                i++
                                LOOP
                        ENDIF
                        setcor(3)
                        @ 3+f,1 SAY m_codigo[i]
                        @ 3+f,COL()+1 SAY m_matriz[i,2]
                        @ 3+f,COL()+1 SAY m_matriz[i,3] PICT '99999.99'
                        @ 3+f,COL()+1 SAY m_matriz[i,4] PICT '99999.99'
                        @ 3+f,COL()+1 SAY m_matriz[i,1] PICT '99999.99'
                        mtot_ped := mtot_ped + m_matriz[i,1]
                        IF f > 13
                                i++
                        ELSE
                                i++
                                f++
                        ENDIF
                ENDDO
                IF mtot_ped = 0
                        IF cons_ped[1,49] = '*' .AND. cons_ped[1,62] = '*'
                                IF ver_serie() = '141235'
                                        opcao := mensagem1('Deseja Imprimir o bilhete da entrega do pedido','S','S,N')
                                        IF opcao = 'N' .OR. LASTKEY() = 27
                                                CLEAR GETS
                                                EXIT
                                        ENDIF
                                        imp_entre()
                                ENDIF
                                LOOP
                        ELSE
                                opcao := op_simnao('N','TODAS as Mercadoria estao OK, Deseja da como entrege este pedido:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        cComm  := "UPDATE sacped_s SET pentreg = '*',pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+" WHERE pnum_ped = "+sr_cdbvalue(cons_ped[1,2])
                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF ver_serie() = '141235'
                                                opcao := op_simnao('S','Deseja Imprimir o bilhete da entrega do pedido:')
                                                IF opcao = 'N'
                                                        CLEAR GETS
                                                        EXIT
                                                ENDIF
                                                imp_entre()
                                        ENDIF
                                ELSE
                                        EXIT
                                ENDIF
                                CLEAR GETS
                                EXIT
                        ENDIF
                        EXIT
                ENDIF
                mcod_bc := SPACE(29)
                mcod_merc = 0
                mensagem('Digite o codigo ou nome da mercadoria - <F10>Fechamento - <ESC>Sair')
                @ lba-3,1 GET mcod_bc PICT '@!'
                READ
                IF LASTKEY() = 27
                        SET KEY -2 TO
                        SET KEY -7 TO
                        IF ! EMPTY(m_codigo)
                                opcao := op_simnao('S','Deseja Sair o pedido [s/N]')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                        ENDIF
                        ASIZE(m_codigo,0)
                        ASIZE(m_matriz,0)
                        **** apagando VARIAVEIS PRIVATE *****
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF EMPTY(mcod_bc)
                        LOOP
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                mponto := ASCAN(m_Cbarra,mcod_bc)
                                IF mponto > 0
                                        IF m_matriz[mponto,1] = 0
                                                atencao('Esta mercadoria ja foi toda entregue...')
                                                LOOP
                                        ENDIF
                                ELSE
                                        atencao('Esta mercaodoria nao tem neste pedido')
                                        LOOP
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                mponto := ASCAN(m_codigo,mcod_merc)
                                IF mponto > 0
                                        IF m_matriz[mponto,1] = 0
                                                atencao('Esta mercadoria ja foi toda entregue...')
                                                LOOP
                                        ENDIF
                                ELSE
                                        atencao('Esta mercaodoria nao tem neste pedido')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                setcor(3)
                @ lba-3,1 SAY m_codigo[mponto]
                @ lba-3,COL()+1 SAY m_matriz[mponto,2]
                @ lba-3,COL()+1 SAY 1 PICT '99999.99'
                @ lba-3,COL()+2 SAY 'Saldo: '+TRANSFORM(m_matriz[mponto,1],'99999.99')
                limpa(lba-3,1,lba-3,cba-1)
                m_matriz[mponto,1] := m_matriz[mponto,1] - 1
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************
