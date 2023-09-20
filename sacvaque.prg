***************************************************
* PROGRAMA DE FUNCOES IMPRESSAO DE TIPOS DE PEDIDOS
***************************************************
*******************************
* IMPRESSAO EM BOLETO
*****************************

FUNCTION sacvaque(mtipo_form,mdup_2)
*****************
LOCAL mobs_caixa,opcao,mop,mtot_volume:=0,mtot_itens:=0,mtot_ipi:=0,m_montador:={},;
      mop_dup:=' ',mtabela:='',cont:=0

PRIVATE mcons_merc:={},cons_cli:={},imppedido:={}
mtraco := REPLI('=',54)
i := 0
IF ! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13])
        mquantd ++
ENDIF
imppedido:={}
IF ali = 'ped_s'        //.OR. ali = 'q_ped_s'
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
ELSE
        cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
ENDIF
sr_getconnection():exec(ccomm,,.t.,@imppedido)
sr_getconnection():exec('COMMIT',,.f.)

mtipo_fin := imppedido[1,43]
cons_cli := {}
cComm  := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(imppedido[1,23])
sr_getconnection():exec(ccomm,,.t.,@cons_cli)
sr_getconnection():exec('COMMIT',,.f.)
mop := 'S'
//ver_cli(VAL((ali)->pcod_cli),,,'*')
mop_dup := 'S'
//IF m_set[1,13] = 'S' .AND. mop = 'S' .OR.  SUBSTR(mvia,1,6) = '2a.via'
        IF ! imp_arq('PD'+STRZERO(mnum_ped,6)+'.REL','T')
                CLEAR GETS
                SET KEY -8 TO
                mt_pedido := mtot_itens := mt_pedido := mtot_desc := ;
                mtot_quant := mdesconto := 0
                //GO mpoint
                cont := 0
                FOR cont = 1 TO LEN(imppedido)
                        IF m_set[1,36] = 'S'
                                IF imppedido[cont,52] > 0
                                        mdesconto := mperc := 0
                                ELSEIF imppedido[cont,20] > imppedido[cont,18]
                                        mdesconto =  (imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,20])
                                        mperc := iat((((imppedido[cont,14] * imppedido[cont,20]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,20])),3) * 100
                                ELSE
                                        mperc := imppedido[cont,39]
                                ENDIF
                        ELSE
                                mdesconto := 0
                        ENDIF
                        mcust_real = imppedido[cont,14] * imppedido[cont,18]
                        mtot_desc := mtot_desc + mdesconto
                        mt_pedido := mt_pedido + (imppedido[cont,14]*imppedido[cont,18] - mdesconto)
                        mtot_quant = mtot_quant + imppedido[cont,14]
                        mtot_itens ++
                NEXT
                mcust_real = mt_pedido + mtot_desc
                RETURN NIL
        ENDIF
/*
ELSEIF mop = 'S' .AND. m_set[1,13] <> 'S'
        mensagem('Aguarde um momento imprimido pedido BOLETO na porta: '+mporta_imp)
        SET DEVICE TO PRINT
        SET PRINT TO (mporta_imp)
ENDIF

IF EMPTY(mquantd) .OR. mop = 'N'
        mtot_itens := mt_pedido := mtot_desc := mtot_quant := mdesconto := 0
        ASIZE(m_montador,0)
        cont := 0
        FOR cont = 1 TO LEN(imppedido)
                IF m_set[1,36] = 'S'
                        IF imppedido[cont,52] > 0
                                mdesconto := mperc := 0
                        ELSEIF imppedido[cont,20] > imppedido[cont,18]
                                mdesconto =  (imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,20])
                                mperc := iat((((imppedido[cont,14] * imppedido[cont,20]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,20])),3) * 100
                        ELSE
                                mperc := imppedido[cont,39]
                        ENDIF
                ELSE
                        mdesconto := 0
                ENDIF
                mcust_real = imppedido[cont,14] * imppedido[cont,18]
                mtot_desc := mtot_desc + mdesconto
                mt_pedido := mt_pedido + (imppedido[cont,14]*imppedido[cont,18] - mdesconto)
                mtot_quant = mtot_quant + imppedido[cont,14]
                mtot_itens ++
        NEXT
        mcust_real = mt_pedido + mtot_desc
        RETURN NIL
ENDIF
*/
IF mop = 'S'    //.OR. SUBSTR(mvia,1,1) = '2'
        i := 0
        FOR i = 1 TO mquantd

                //GO mpoint
                mtabela := ''
                IF ! EMPTY(imppedido[1,42])
                        ver_cond(VAL(imppedido[1,42]),PCOL()+1)
                        mtabela := imppedido[1,42]+' - '        //+tabpg->descri
                ENDIF
                imprt('M','C')
                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(memp_resa),54))
                @ PROW()+1,00 SAY mtraco
*               @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                @ PROW(),PCOL()+1 SAY STRZERO(mnum_ped,6)
                @ PROW(),31 SAY mvia+'  T:'+ALLTRIM(imppedido[1,3])
                IF mquantd > 1
                        @ PROW(),PCOL()+1 SAY 'C-'+STRZERO(i,2)
                ENDIF
                IF mcod_cli > 0
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Vaqueiros: '+mobs1
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                ELSE
                        @ PROW()+1,00 SAY 'Emissao:'
                ENDIF
                @ PROW(),08 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY SUBSTR(imppedido[1,47],1,5)
                @ PROW(),PCOL()+1 SAY 'Ope:'
                @ PROW(),PCOL() SAY imppedido[1,34]
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Descricao'
                @ PROW()+1,00 SAY mtraco
                imprt('M','N')
                cont := 0
                FOR cont = 1 TO LEN(imppedido)
                        @ PROW()+1,00 SAY imppedido[cont,7]
                NEXT
                imprt('M','C')
                IF ! EMPTY(mobs2)
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'PATROCINIO: '+mobs2
                        IF ! EMPTY(mobs3)
                                @ PROW()+1,00 SAY '            '+mobs3
                        ENDIF
                        IF ! EMPTY(mobs4)
                                @ PROW()+1,00 SAY '            '+mobs4
                        ENDIF
                ENDIF
                @ PROW()+1,00 SAY mtraco
                IF m_set[1,22] = 'S'
                        @ PROW()+1,00 SAY PADL('HTI Sistemas - (81)'+mfone_HTI,54)
                ENDIF
                DEVPOS(PROW()+5,00);DEVOUT(CHR(18))


                cont := 0
                FOR cont = 1 TO LEN(imppedido)
                        imprt('M','C')
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(memp_resa),54))
                        //@ PROW()+1,00 SAY mtraco
                        //@ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                        //@ PROW(),PCOL()+1 SAY STRZERO(mnum_ped,6)
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Vaqueiros: '+mobs1
                        IF ! EMPTY(mobs2)
                                @ PROW()+1,00 SAY mtraco
                                @ PROW()+1,00 SAY 'PATROCINIO: '+mobs2
                        ENDIF
                        IF ! EMPTY(mobs3)
                                @ PROW()+1,00 SAY '            '+mobs3
                        ENDIF
                        IF ! EMPTY(mobs4)
                                @ PROW()+1,00 SAY '            '+mobs4
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                        @ PROW(),08 SAY imppedido[1,4]
                        @ PROW(),PCOL()+1 SAY SUBSTR(imppedido[1,47],1,5)
                        @ PROW(),PCOL()+1 SAY 'Ope:'
                        @ PROW(),PCOL() SAY imppedido[1,34]
                        @ PROW()+1,00 SAY mtraco
                        imprt('M','N')
                        @ PROW()+1,00 SAY imppedido[cont,7]
                        imprt('M','C')
                        @ PROW()+1,00 SAY mtraco
                        imprt('M','N')
                        @ PROW()+1,00 SAY '| BOI 8 | BOI 9 | BOI 10| Cas |'
                        @ PROW()+1,00 SAY '| Pt| Rt| Pt| Rt| Pt| Rt|pt|rt|'
                        @ PROW()+1,00 SAY '|-----------------------------|'
                        @ PROW()+1,00 SAY '|   |   |   |   |   |   |  |  |'
                        @ PROW()+1,00 SAY '|   |   |   |   |   |   |  |  |'
                        imprt('M','C')
                        @ PROW()+1,00 SAY mtraco
                        imprt('M','N')
                        @ PROW()+1,00 SAY 'TOTAL:                        |'
                        imprt('M','C')
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY PADL('HTI Sistemas - (81)'+mfone_HTI,54)
                        DEVPOS(PROW()+5,00);DEVOUT(CHR(18))

                NEXT
                DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
                SETPRC(00,00)
        NEXT
ENDIF
RETURN NIL
***************************** F I M ***********************************
