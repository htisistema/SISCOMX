* IMPRESSAO EM BOLETO
*********************
FUNCTION boleto_pdv(mtipo_form,mdup_2,mtipo_pag,mtrc)
********************************************
LOCAL mobs_caixa,opcao,mop,mtot_volume:=0,mtot_itens:=0,mtot_ipi:=0,m_montador:={},;
      mop_dup:=' ',mtabela:='',cont:=0,mpeso_liq:=0,mpeso_brut:=0,cons_caixa := {}      //,mtipo_imp:='D'

PRIVATE mcons_merc:={},cons_cli:={},imppedido:={},mtraco := REPLI('=',54)
/*
op_tela(10,10,11,30)
@ 0,0 GET mtipo_imp
READ
FECHA_TELA()
*/
i := 0
/*
IF ! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13])
        mquantd ++
ENDIF
*/
imppedido:={}
IF ali = 'ped_s'        //.OR. ali = 'q_ped_s'
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        IF m_set[1,174] = 'A'
                cComm := cComm + ' ORDER BY pmerc'
        ELSEIF m_set[1,174] = 'C'
                cComm := cComm + ' ORDER BY pcod_merc'
        ENDIF
        mtraco := REPLI('=',54)
ELSE
        cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        IF m_set[1,174] = 'A'
                cComm := cComm + ' ORDER BY pmerc'
        ELSEIF m_set[1,174] = 'C'
                cComm := cComm + ' ORDER BY pcod_merc'
        ENDIF
        mtraco := REPLI(CHR(223),54)
ENDIF
sr_getconnection():exec(ccomm,,.t.,@imppedido)
IF LEN(imppedido) = 0
        atencao('Nao Encontrado o PEDIDO/ORCAMENTO de No.: '+STRZERO(mnum_ped,6))
        RETURN NIL
ENDIF
mtipo_fin := imppedido[1,43]
cons_cli := {}
cComm  := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(imppedido[1,23])
sr_getconnection():exec(ccomm,,.t.,@cons_cli)

//mop := op_simnao('S','Deseja imprimir o Pedido [S/n]:')

mop_dup := 'S'
IF m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. SUBSTR(imppedido[1,44],1,2) = 'DU' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via'
        mop_dup := mensagem1('Deseja imprimir a(s) Duplicata(s) [S/n]:',' ','S,N')
        IF LASTKEY() = 27 .OR. mop_dup = 'N'
                mop_dup := 'N'
        ENDIF
ELSE
        mop_dup := 'S'
ENDIF
//IF m_set[1,13] = 'S' .AND. mop = 'S' .OR.  SUBSTR(mvia,1,6) = '2a.via'
        IF ! imp_arq('PD'+STRZERO(mnum_ped,6)+'.REL','B')
                CLEAR GETS
                SET KEY -8 TO
                mt_pedido := mtot_itens := mt_pedido := mtot_desc := ;
                mtot_quant := mdesconto := 0
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
ELSEIF mop = 'S' .AND. m_set[1,13] <> 'S' .AND. EMPTY(mtipo_pag)
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
//IF mop = 'S'
        imprt('M','N')
        IF m_set[1,86] = 'T' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'         //.AND. ! EMPTY(mquantd)
                imprt('M','C')
                @ PROW()+1,00 SAY ' '
                @ PROW(),00 SAY 'Emissao:'
                @ PROW(),10 SAY imppedido[1,4]
                @ PROW(),21 SAY imppedido[1,47]
                @ PROW(),30 SAY 'Cod.:'
                @ PROW(),35 SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),39 SAY imppedido[1,33]
                ENDIF
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                imprt('M','N')
                @ PROW(),00 SAY STRZERO(mnum_ped,6)
                DEVPOS(PROW()+1,00);DEVOUT('Valor R$: '+TRANSFORM(mt_pedido,'999,999.99'))
                imprt('M','C')
                @ PROW()+4,00 SAY '--------------------------- Corte aqui --------------------'
                imprt('M','N',2)
        ENDIF
        i := 0
        FOR i = 1 TO mquantd
                mtabela := ''
                IF ! EMPTY(imppedido[1,42])
                        ver_cond(VAL(imppedido[1,42]),PCOL()+1)
                        mtabela := imppedido[1,42]+' - '        //+tabpg->descri
                ENDIF
                /*
                IF i = mquantd .AND. (! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13]))
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        opcao := op_simnao('S','Imprimir na 2a. porta de impressao [S/n]:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                        mensagem('Imprimindo Pedido no BOLETO na 2a. porta:'+IF(! EMPTY(m_indiv[1,8]),m_indiv[1,8],m_indiv[1,13]))
                        SET DEVICE TO PRINT
                        SET PRINT TO (IF(! EMPTY(m_indiv[1,8]),m_indiv[1,8],m_indiv[1,13]))
                */
                IF i = mquantd .AND. i > 1
                        opcao := op_simnao('S','Imprimir na 2a.VIA de impressao [S/n]:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                ENDIF
                mtot_itens := mt_pedido := mtot_desc := mtot_quant := mdesconto := 0
                IF m_indiv[1,7] = '4200'
                        imprt('M','N+')
                ELSE
                        imprt('M','C')
                ENDIF
                IF m_set[1,22] = 'S'
                        IF mmult_emp = 'N'
                                IF m_set[1,18] = 'J' .AND. FILE('hticabe.jpg')
                                        DEVPOS(00,03);DEVOUT('"hticabe.jpg"')
                                        @ PROW()+6,0 SAY PADL(mvia+'  T:'+ALLTRIM(imppedido[1,3]),54)
                                        @ PROW()+1,00 SAY mtraco
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(memp_resa),54))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mend_firm),54))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcid_firm)+RTRIM(' - Fone: '+mfone_firm),54))
                                        @ PROW()+1,0 SAY PADL(mvia+'  T:'+ALLTRIM(imppedido[1,3]),54)
                                        @ PROW()+1,00 SAY mtraco
                                ENDIF
                        ELSE
                                cons_emp := {}
                                sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(imppedido[1,1]),,.t.,@cons_emp)
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])),54))
                                IF SUBSTR(cons_emp[1,4],1,2) = '* '
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(LEFT(cons_emp[1,4],35)),54))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_emp[1,10]),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_emp[1,12])+'-'+RTRIM(cons_emp[1,14])+RTRIM(' - Fone: '+cons_emp[1,15]),54))
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                ENDIF

                imprt(mtipo_imp,'P8')

                IF m_indiv[1,7] = '4200'
                        imprt('M','N+')
                        @ PROW()+1,00 SAY PADC(IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6),50)
                ELSE
                        imprt('M','N')
                        @ PROW()+1,05 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6)
                ENDIF
                IF m_indiv[1,7] = '4200'
                        imprt('M','N+')
                ELSE
                        imprt('M','C')
                ENDIF
                //imprt('M','C')
                IF mquantd > 1
                        @ PROW(),PCOL()+1 SAY 'C-'+STRZERO(i,2)
                ENDIF
                IF SUBSTR(mvia,1,6) = '2a.via'
                        IF imppedido[1,49] = '*'
                                @ PROW()+1,00 SAY 'Situacao: PAGO'
                        ELSEIF imppedido[1,49] = 'C'
                                @ PROW()+1,00 SAY 'Situacao: CANCELADO - MOTIVO: '+imppedido[1,91]
                        ELSE
                                @ PROW()+1,00 SAY 'Situacao: ABERTO'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao da 2a.via:'
                        @ PROW(),PCOL()+1 SAY mdata_sis
                        @ PROW(),PCOL()+2 SAY 'Hora:'
                        @ PROW(),PCOL()+1 SAY TIME()
                        @ PROW(),PCOL()+2 SAY 'Op.:'
                        @ PROW(),PCOL()+1 SAY cod_operado
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                IF ver_serie() <> '141237'
                        @ PROW()+1,00 SAY PADC('*** SEM VALOR FISCAL ***',54)
                ENDIF
                @ PROW()+1,00 SAY 'Cliente:'
                @ PROW(),08 SAY cons_cli[1,2]
                @ PROW(),14 SAY cons_cli[1,3]
                IF m_set[1,40] = 'S'
                        @ PROW()+1,00 SAY 'Fantasia:'
                        @ PROW(),PCOL()+1 SAY cons_cli[1,4]
                ENDIF
                IF m_set[1,39] = 'S'
                        @ PROW()+1,00 SAY 'End.: '+ALLTRIM(cons_cli[1,21])+', '+ALLTRIM(cons_cli[1,136])+' - '+ALLTRIM(cons_cli[1,137])
                        @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                        @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- Fone: '+cons_cli[1,29]
                        IF ! EMPTY(cons_cli[1,32])
                                @ PROW()+1,00 SAY 'CNPJ:'
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                        ELSEIF ! EMPTY(cons_cli[1,34])
                                @ PROW()+1,00 SAY 'CPF:'
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                        ENDIF
                        IF ! EMPTY(cons_cli[1,28])
                                @ PROW()+1,00 SAY 'Rota: '+SUBSTR(cons_cli[1,28],1,42)
                                @ PROW()+1,00 SAY '      '+SUBSTR(cons_cli[1,28],42)
                        ENDIF
                ENDIF
                IF ! EMPTY(imppedido[1,26]) .OR. ! EMPTY(imppedido[1,27])
                        @ PROW()+1,00 SAY 'Placa do Veiculo: '+imppedido[1,26]+'  Marca: '+imppedido[1,27]
                        @ PROW()+1,00 SAY 'Modelo..........: '+imppedido[1,28]+'  KM: '+imppedido[1,29]
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
                @ PROW(),08 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY SUBSTR(imppedido[1,47],1,5)
                @ PROW(),PCOL()+1 SAY 'Ope:'
                @ PROW(),PCOL() SAY imppedido[1,34]
                @ PROW(),PCOL()+1 SAY 'Cod.:'
                @ PROW(),PCOL() SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),PCOL()+1 SAY LEFT(imppedido[1,33],14)
                ENDIF
                @ PROW()+1,00 SAY mtraco
                IF mtipo_form = NIL
                        @ PROW()+1,00 SAY 'Cod.'
                        @ PROW(),15 SAY 'Descricao'
                        IF m_set[1,36] = 'S'
                                @ PROW(),52 SAY 'UN'
                                @ PROW()+1,00 SAY '   Quantd.'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Unit.'
                                @ PROW(),PCOL()+1 SAY 'Dsc(%)'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                        ELSE
                                @ PROW(),52 SAY 'UN'
                                @ PROW()+1,02 SAY 'Quantd.'
                                @ PROW(),32 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        IF ! EMPTY(imppedido[1,92])
                                @ PROW()+1,00 SAY 'localizacao: '+imppedido[1,92]
                        ENDIF
                        mdesconto := cont := 0
                        FOR cont = 1 TO LEN(imppedido)
                                @ PROW()+1,00 SAY imppedido[cont,6]
                                IF ! EMPTY(imppedido[cont,10]) .AND. m_set[1,37] = 'N'
                                        @ PROW(),06 SAY LEFT(imppedido[cont,7],27)
                                        @ PROW(),PCOL() SAY ' * '+imppedido[cont,10]
                                ELSE
                                        @ PROW(),06 SAY imppedido[cont,7]
                                ENDIF
                                mdesconto := 0
                                IF m_set[1,36] = 'S'
                                        @ PROW(),51 SAY imppedido[cont,8]
                                        @ PROW()+1,00 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                        IF imppedido[cont,52] > 0
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := mperc := 0
                                        ELSEIF imppedido[cont,17] > imppedido[cont,18]
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,17] PICT ALLTRIM(m_set[1,98])
                                                mdesconto =  iat((imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,17]),2)
                                                mperc := iat((((imppedido[cont,14] * imppedido[cont,17]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,17])),3) * 100
                                        ELSEIF imppedido[cont,20] > imppedido[cont,18]
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,20] PICT ALLTRIM(m_set[1,98])
                                                mdesconto =  (imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,20])
                                                mperc := iat((((imppedido[cont,14] * imppedido[cont,20]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,20])),3) * 100
                                        ELSE
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,17] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := 0
                                                mperc := imppedido[cont,39]
                                        ENDIF
                                        @ PROW(),PCOL()+1 SAY mperc PICT '99.99'
                                        @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ELSE
                                        mdesconto := 0
                                        @ PROW(),51 SAY imppedido[cont,8]
                                        @ PROW()+1,00 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                        @ PROW(),32 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ENDIF
                                mcust_real = imppedido[cont,14] * imppedido[cont,18]
                                @ PROW(),43 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])
                                mpeso_brut := mpeso_brut + (imppedido[cont,11] * imppedido[cont,14])
                                mpeso_liq := mpeso_liq + (imppedido[cont,12] * imppedido[cont,14])
                                mtot_desc := mtot_desc + mdesconto
                                mt_pedido := mt_pedido + (imppedido[cont,14]*imppedido[cont,18] - mdesconto)
                                mtot_itens ++
                                IF ! EMPTY(imppedido[cont,13])
                                        DEVPOS(PROW()+1,00);DEVOUT('Volume(s): '+TRANSFORM(imppedido[cont,14] * imppedido[cont,13],'99,999.99'))
                                        mtot_quant := mtot_quant + (imppedido[cont,14] * imppedido[cont,13])
                                ELSE
                                        mtot_quant := mtot_quant + imppedido[cont,14]
                                ENDIF
                                IF ! EMPTY(imppedido[cont,80])
                                        @ PROW()+1,00 SAY imppedido[cont,80]
                                ENDIF
                                IF (ver_serie() = '141425' .OR. ver_serie() = '141477') .AND. ! EMPTY(imppedido[cont,10])
                                        imprt('M','N')
                                        DEVPOS(PROW()+1,00);DEVOUT('')
                                        imprt('M','E')
                                        DEVPOS(PROW(),00);DEVOUT(imppedido[cont,10])
                                        imprt('M','N')
                                        imprt('M','C')
                                ENDIF
                                IF ! EMPTY(imppedido[cont,58])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,58])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,81])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,81])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,82])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,82])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,83])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,83])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,84])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,84])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,36])=0
                                        AADD(m_montador,imppedido[cont,36])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,38])=0
                                        AADD(m_montador,imppedido[cont,38])
                                ENDIF
                                IF STRZERO(mnum_ped,6) = imppedido[cont,2]
                                        IF ! EMPTY(imppedido[cont,92])
                                                @ PROW()+1,00 SAY 'localizacao: '+imppedido[cont,92]
                                                @ PROW(),PCOL()+1 SAY REPLI('-',44)
                                        ENDIF
                                ENDIF
                        NEXT
                ELSE
                        @ PROW()+1,00 SAY 'Cod.'
                        @ PROW(),52 SAY 'UN'
                        @ PROW()+1,00 SAY 'Descricao'
                        IF m_set[1,36] = 'S'
                                @ PROW()+1,00 SAY '   Quantd.'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Unit.'
                                @ PROW(),PCOL()+1 SAY 'Dsc(%)'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                        ELSE
                                @ PROW()+1,02 SAY 'Quantd.'
                                @ PROW(),32 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        mdesconto := cont := 0
                        FOR cont = 1 TO LEN(imppedido)
                                imprt('M','N')
                                @ PROW()+1,00 SAY imppedido[cont,6]
                                @ PROW(),37 SAY imppedido[cont,8]
                                IF ! EMPTY(imppedido[cont,10]) .AND. m_set[1,37] = 'N'
                                        @ PROW()+1,00 SAY LEFT(imppedido[cont,7],27)
                                        @ PROW(),PCOL() SAY ' * '+imppedido[cont,10]
                                ELSE
                                        @ PROW()+1,00 SAY imppedido[cont,7]
                                ENDIF
                                mdesconto := 0
                                imprt('M','C')
                                IF m_set[1,36] = 'S'
                                        @ PROW()+1,00 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                        IF imppedido[cont,52] > 0
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := mperc := 0
                                        ELSEIF imppedido[cont,20] > imppedido[cont,18]      //.AND. imppedido[cont,17] <= imppedido[cont,20]
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,20] PICT ALLTRIM(m_set[1,98])
                                                mdesconto =  (imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,20])
                                                mperc := iat((((imppedido[cont,14] * imppedido[cont,20]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,20])),3) * 100
                                        ELSE
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,17] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := 0
                                                mperc := imppedido[cont,39]
                                        ENDIF
                                        @ PROW(),PCOL()+1 SAY mperc PICT '99.99'
                                        @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ELSE
                                        mdesconto := 0
                                        @ PROW()+1,00 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                        @ PROW(),32 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ENDIF
                                mcust_real = imppedido[cont,14] * imppedido[cont,18]
                                @ PROW(),43 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])
                                mtot_desc := mtot_desc + mdesconto
                                mt_pedido := mt_pedido + (imppedido[cont,14]*imppedido[cont,18] - mdesconto)
                                mtot_itens ++
                                IF ! EMPTY(imppedido[cont,13])
                                        DEVPOS(PROW()+1,00);DEVOUT('Volume(s): '+TRANSFORM(imppedido[cont,14] * imppedido[cont,13],'99,999.99'))
                                        mtot_quant := mtot_quant + (imppedido[cont,14] * imppedido[cont,13])
                                ELSE
                                        mtot_quant := mtot_quant + imppedido[cont,14]
                                ENDIF
                                IF ! EMPTY(imppedido[cont,80])
                                        @ PROW()+1,00 SAY imppedido[cont,80]
                                ENDIF
                                IF ! EMPTY(imppedido[cont,58])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,58])
                                ENDIF
                        NEXT
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Total de Itens:'
                @ PROW(),16 SAY TRANSFORM(mtot_itens,'999999')
                @ PROW(),26 SAY 'Volume Total:'
                @ PROW(),40 SAY TRANSFORM(mtot_quant,'999999')
                @ PROW()+1,00 SAY 'Sub-total R$.:'
                @ PROW(),15 SAY mt_pedido PICT '99,999,999.99'
                @ PROW()+1,00 SAY 'Desconto R$..:'
                @ PROW(),15 SAY mtot_desc PICT '99,999,999.99'
                @ PROW()+1,00 SAY 'TOTAL DA NOTA:'
                mcust_real = mt_pedido + mtot_desc
                @ PROW(),15 SAY iat(mcust_real,2) PICT '99,999,999.99'
                IF ! EMPTY(mtrc)
                        @ PROW()+1,00 SAY 'TROCO R$.....:'
                        @ PROW(),15 SAY iat(mtrc,2) PICT '99,999,999.99'
                ENDIF
                @ PROW()+1,00 SAY mtraco

                        cons_caixa := {}
                        sr_getconnection():exec("SELECT * FROM saccaixa WHERE nota = "+sr_cdbvalue('PD'+STRZERO(mnum_ped,6)),,.t.,@cons_caixa)
                        i := 0
                        FOR i = 1 TO LEN(cons_caixa)
                                IF cons_caixa[i,2] = 'DN'
                                        DEVPOS(PROW()+1,00);DEVOUT('Dinheiro R$..: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                ELSEIF cons_caixa[i,2] = 'CR'
                                        DEVPOS(PROW()+1,00);DEVOUT('Credito R$...: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                ELSEIF cons_caixa[i,2] = 'CH'
                                        DEVPOS(PROW()+1,00);DEVOUT('Cheque R$....: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' Bco: '+cons_caixa[i,6]+' No.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                ELSEIF cons_caixa[i,2] = 'PX'
                                        DEVPOS(PROW()+1,00);DEVOUT('PIX R$.......: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' No.: '+cons_caixa[i,8])
                                ELSEIF cons_caixa[i,2] = 'DU'
                                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata R$.: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' No.: '+cons_caixa[i,8]+IF(cons_caixa[i,20] = '*',' Pag..: ',' Venc.: ')+DTOC(cons_caixa[i,9]))
                                ELSEIF cons_caixa[i,2] = 'FI'
                                        DEVPOS(PROW()+1,00);DEVOUT('Financeira R$: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' No.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                ELSEIF cons_caixa[i,2] = 'CT'
                                        DEVPOS(PROW()+1,00);DEVOUT('Cartao R$....: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' Cod.: '+cons_caixa[i,7]+' Doc.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                ELSEIF cons_caixa[i,2] = 'CA'
                                        DEVPOS(PROW()+1,00);DEVOUT('PEDIDO CANCELADO PELO OPERADOR COD.: '+cons_caixa[i,17])
                                ELSEIF cons_caixa[i,2] = 'ES'
                                        DEVPOS(PROW()+1,00);DEVOUT(cons_caixa[i,13]+'-'+cons_caixa[i,14])
                                ELSE
                                        LOOP
                                ENDIF
                        NEXT
                IF (SUBSTR(m_set[1,9],1,1) = 'S'.OR. SUBSTR(m_set[1,9],2,1) = 'S') .AND. ! EMPTY(imppedido[1,86])
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'OBS.: '+ALLTRIM(imppedido[1,86])
                        IF ! EMPTY(imppedido[1,87])
                                @ PROW()+1,00 SAY '      '+ALLTRIM(imppedido[1,87])
                        ENDIF
                        IF ! EMPTY(imppedido[1,88])
                                @ PROW()+1,00 SAY '      '+ALLTRIM(imppedido[1,88])
                        ENDIF
                        IF ! EMPTY(imppedido[1,89])
                                @ PROW()+1,00 SAY '      '+ALLTRIM(imppedido[1,89])
                        ENDIF
                ENDIF
                mobs_caixa := ALLTRIM(imppedido[1,86])+' '+ALLTRIM(imppedido[1,87])
                IF ! EMPTY(m_set[1,25])
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,25],54)),54)
                        IF ! EMPTY(m_set[1,26])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,26],54)),54)
                        ENDIF
                        IF ! EMPTY(m_set[1,27])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,27],54)),54)
                        ENDIF
                        IF ! EMPTY(m_set[1,28])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,28],54)),54)
                        ENDIF
                ENDIF
                @ PROW()+1,00 SAY mtraco
                IF m_set[1,22] = 'S'
                        @ PROW()+1,00 SAY PADL('HTI Sistemas - (81)'+mfone_HTI,54)
                ENDIF
                IF mquantd > 1
                        imprt('M','N')
                ENDIF
                SETPRC(00,00)
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'P6')
        NEXT
//ENDIF
IF (mop_dup = 'S' .AND. m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. SUBSTR(imppedido[1,44],1,2) = 'DU' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via') .OR. mdup_2 <> NIL
        mensagem('Imprimindo o DUPLICATA')
        f=0
        m_vlr[1] := m_vlr[2] := m_vlr[3] := m_vlr[4] := m_vlr[5] := ;
        m_vlr[6] := m_vlr[7] := m_vlr[8] := m_vlr[9] := m_vlr[10] := ;
        m_vlr[11] := m_vlr[12] := m_vlr[13] := m_vlr[14] := m_vlr[15] :=;
        mdif := 0
        IF VAL(SUBSTR(mcond_veze,2,2)) >= 2
                m_vlr[1] := (mcust_real-mvlr_ent)/VAL(SUBSTR(mcond_veze,2,2))
                m_vlr[2] := (mcust_real-mvlr_ent)/VAL(SUBSTR(mcond_veze,2,2))
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 3
                        m_vlr[3] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 4
                        m_vlr[4] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 5
                        m_vlr[5] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 6
                        m_vlr[6] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 7
                        m_vlr[7] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 8
                        m_vlr[8] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 9
                        m_vlr[9] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 10
                        m_vlr[10] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 11
                        m_vlr[11] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 12
                        m_vlr[12] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 13
                        m_vlr[13] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 14
                        m_vlr[14] := m_vlr[1]
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 15
                        m_vlr[15] := m_vlr[1]
                ENDIF
        ELSE
                m_vlr[1] := (mcust_real-mvlr_ent)
        ENDIF
        FOR f = 1 TO m_indiv[1,22]
                mdif := (mcust_real-mvlr_ent)- (iat(m_vlr[1],2)+iat(m_vlr[2],2)+;
                        iat(m_vlr[3],2)+iat(m_vlr[4],2)+iat(m_vlr[5],2)+iat(m_vlr[6],2)+;
                        iat(m_vlr[7],2)+iat(m_vlr[8],2)+iat(m_vlr[9],2)+iat(m_vlr[10],2)+;
                        iat(m_vlr[11],2)+iat(m_vlr[12],2)+iat(m_vlr[13],2)+iat(m_vlr[14],2)+iat(m_vlr[15],2))
                m_vlr[1] := m_vlr[1] + mdif
                i := 0
                mdocumento := STRZERO(mnum_ped,6)
                FOR i = 1 TO VAL(SUBSTR(mcond_veze,2,2))
                        /*
                        IF i = 1
                                mcust_real := m_vlr[1]
                                //mdocumento := STRZERO(mnum_ped,6)
                        ELSEIF i = 2
                                mcust_real := m_vlr[2]
                                //mdocumento := STRZERO(mnum_ped,6)+'-1'+'/'+SUBSTR(mcond_veze,2,2)
                        ELSEIF i = 3
                                mcust_real := m_vlr[3]
                                //mdocumento := STRZERO(mnum_ped,6)+'B'
                        ELSEIF i = 4
                                mcust_real := m_vlr[4]
                                //mdocumento := STRZERO(mnum_ped,6)+'C'
                        ELSEIF i = 5
                                mcust_real := m_vlr[5]
                                //mdocumento := STRZERO(mnum_ped,6)+'D'
                        ELSEIF i = 6
                                mcust_real := m_vlr[6]
                                //mdocumento := STRZERO(mnum_ped,6)+'E'
                        ELSEIF i = 7
                                mcust_real := m_vlr[7]
                                //mdocumento := STRZERO(mnum_ped,6)+'F'
                        ELSEIF i = 8
                                mcust_real := m_vlr[8]
                                //mdocumento := STRZERO(mnum_ped,6)+'G'
                        ELSEIF i = 9
                                mcust_real := m_vlr[9]
                                //mdocumento := STRZERO(mnum_ped,6)+'H'
                        ELSEIF i = 10
                                mcust_real := m_vlr[10]
                                //mdocumento := STRZERO(mnum_ped,6)+'I'
                        ELSEIF i = 11
                                mcust_real := m_vlr[11]
                                mdocumento := STRZERO(mnum_ped,6)+'J'
                        ELSEIF i = 12
                                mcust_real := m_vlr[12]
                                mdocumento := STRZERO(mnum_ped,6)+'L'
                        ELSEIF i = 13
                                mcust_real := m_vlr[13]
                                mdocumento := STRZERO(mnum_ped,6)+'M'
                        ELSEIF i = 14
                                mcust_real := m_vlr[14]
                                mdocumento := STRZERO(mnum_ped,6)+'N'
                        ELSEIF i = 15
                                mcust_real := m_vlr[15]
                                mdocumento := STRZERO(mnum_ped,6)+'O'
                        ENDIF
                        */
                        IF m_indiv[1,7] = '4200'
                                imprt('M','N+')
                        ELSE
                                imprt('M','C')
                        ENDIF
                        @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                        @ PROW()+2,00 SAY ' '
                        IF m_set[1,22] = 'S'
                                IF mmult_emp = 'N'
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt('M','C')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   CNPJ: '+mcgc_firm)
                                ELSE
                                        cons_emp := {}
                                        sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(imppedido[1,1]),,.t.,@cons_emp)
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])),54))
                                        imprt('M','C')
                                        DEVPOS(PROW()+1,00);DEVOUT(cons_emp[1,10])
                                        DEVPOS(PROW()+1,00);DEVOUT(cons_emp[1,12])
                                        DEVPOS(PROW()+1,00);DEVOUT('Fone: '+cons_emp[1,15])
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+cons_emp[1,5]+'   CNPJ: '+cons_emp[1,6])
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                                @ PROW()+1,00 SAY ' '
                        ENDIF
                        IF ! EMPTY(cons_cli[1,2])
                                @ PROW(),00 SAY 'Cliente:'
                                @ PROW(),09 SAY cons_cli[1,2]
                                @ PROW(),15 SAY cons_cli[1,3]
                                @ PROW()+1,00 SAY 'End.: '+cons_cli[1,21]
                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- CEP:'+cons_cli[1,26]
                                @ PROW()+1,00 SAY 'Fone: '+cons_cli[1,29]
                                IF mcgc <> SPACE(14)
                                        @ PROW()+1,00 SAY 'CNPJ:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                                ELSEIF mcpf <> SPACE(11)
                                        @ PROW()+1,00 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                        imprt('M','N')
                        @ PROW()+1,00 SAY IF(ver_serie()='141447','NOTA PROMISSORIA:','DUPLICATA No.:')
                        @ PROW(),15 SAY mdocumento+'-'+STRZERO(i,2)+'/'+SUBSTR(mcond_veze,2,2)
                        imprt('M','C')
                        @ PROW()+1,00 SAY 'Emissao:'
                        @ PROW(),PCOL()+1 SAY mdata
                        @ PROW(),PCOL()+2 SAY 'Venc.:'
                        @ PROW(),PCOL()+1 SAY mdata + m_dia[i]
                        @ PROW(),PCOL()+2 SAY 'Cod.:'
                        @ PROW(),PCOL()+1 SAY imppedido[1,32]
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Fatura No.:               '
                        @ PROW(),30 SAY IF(ver_serie()='141447','NOTA PROMISSORIA:','DUPLICATA No.:')
                        @ PROW()+1,00 SAY mtraco
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(iat(m_vlr[i],2),'99,999,999.99'))+')',54))
                        mextenso:= '('+RTRIM(EXT(iat(m_vlr[i],2),10))+')'
                        mlinha := MLCOUNT(mextenso,54)
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,54,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),54))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        mextenso:= 'Reconheco(cemos) a exatidao desta '+IF(ver_serie()='141447','NOTA PROMISSORIA','DUPLICATA')+' DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,129]+', ou a sua ordem na praca e vencimento indicados.'
                        mlinha := 0
                        mlinha := MLCOUNT(mextenso,54)
                        lin := 0
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,54,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Emitente',54))
                        DEVPOS(PROW()+2,00);DEVOUT(PADC('Em         /        /        ',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',54))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Sacado',54))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Avalista',54))
                        @ PROW()+1,00 SAY mtraco
                        IF ! EMPTY(m_set[1,52])
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,52]),54)
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,53]),54)
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                NEXT
        NEXT
        SETPRC(00,00)
ENDIF
IF m_set[1,86] = 'S' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'     //.AND. ! EMPTY(mquantd)
        /*
        IF ver_serie() = '141410'
                mensagem('Imprimindo o COMPROVANTE DE ATENDIMENTO')
                mpag := imppedido[1,49]
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+3,00 SAY REPLI('-',54)
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                @ PROW()+1,00 SAY '*** COMPROVANTE DE ATENDIMENTO ***'
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+1,00 SAY ALLTRIM(m_set[1,23])+' '+STRZERO(mnum_ped,6)
                @ PROW()+1,00 SAY 'Representante: '+imppedido[1,32]+' - '+LEFT(imppedido[1,33],14)
                @ PROW()+1,00 SAY 'Emissao:'
                @ PROW(),10 SAY imppedido[1,4]
                @ PROW(),21 SAY 'Horas: '+imppedido[1,47]
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Cliente:'
                @ PROW(),09 SAY cons_cli[1,2]
                @ PROW(),15 SAY cons_cli[1,3]
                @ PROW()+1,00 SAY REPLI('=',54)
                @ PROW()+1,00 SAY ' Cod.         Codigo Barra              Referencia'
                @ PROW()+1,00 SAY 'Descricao'
                mcod_fab := imppedido[1,30]
                @ PROW()+1,00 SAY REPLI('-',54)
                IF ! EMPTY(imppedido[1,30])
                        @ PROW()+1,00 SAY '** '+ALLTRIM(imppedido[1,31])+' ** '+imppedido[1,92]        //+ALLTRIM(v_fornece(VAL(imppedido[1,30]),,,,'*'))
                ELSE
                        @ PROW()+1,00 SAY '** Fornecedor nao Identificado ** '+imppedido[1,92]
                ENDIF
                @ PROW()+1,00 SAY REPLI('-',54)
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                cont := 0
                FOR cont = 1 TO LEN(imppedido)
                        mcons_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(imppedido[cont,6]),,.t.,@mcons_merc)
                        @ PROW()+1,00 SAY imppedido[cont,6]+' - '+mcons_merc[1,2]+' - '+mcons_merc[1,6]
                        @ PROW()+1,00 SAY imppedido[cont,7]
                        @ PROW()+1,00 SAY 'Unidade: '+imppedido[cont,8]+'   Quantidade: '+TRANSFORM(imppedido[cont,14],'999,999')
                        @ PROW()+1,00 SAY REPLI('-',40)
                        IF mcod_fab <> imppedido[cont,30] .AND. STRZERO(mnum_ped,6) = imppedido[cont,2]
                                mcod_fab := imppedido[cont,30]
                                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                                @ PROW()+1,00 SAY mtraco
                                IF ! EMPTY(imppedido[cont,30])
                                        @ PROW()+1,00 SAY '** '+ALLTRIM(imppedido[cont,31])+' ** '+imppedido[cont,92] //+ALLTRIM(v_fornece(VAL(imppedido[cont,30]),,,,'*'))
                                ELSE
                                        @ PROW()+1,00 SAY '** Fornecedor nao Identificado ** '+imppedido[cont,92]
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                        ENDIF
                NEXT
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+1,00 SAY REPLI('-',54)
                @ PROW()+1,00 SAY 'Cliente:'
                @ PROW(),09 SAY cons_cli[1,2]
                @ PROW(),15 SAY cons_cli[1,3]
                @ PROW()+1,00 SAY REPLI('-',54)
                @ PROW()+1,00 SAY 'OBS.:' + imppedido[1,86]
                @ PROW()+1,00 SAY REPLI('-',54)
                @ PROW()+2,00 SAY 'Gerencia:..../..../.... ..........................'
                @ PROW()+2,00 SAY 'Caixa   :..../..../.... ..........................'
                @ PROW()+2,00 SAY 'Deposito:..../..../.... ..........................'
                @ PROW()+2,00 SAY 'Recebido:..../..../.... ..........................'
                @ PROW()+2,00 SAY 'SR. CLIENTE: CONFIRA SUA  MERCADORIA  NO  ATO  DA '
                @ PROW()+1,00 SAY 'ENTREGA, NAO ACEITAMOS RECLAMACOES POSTERIORES.'
                @ PROW()+1,00 SAY '         ** NAO TROCAMOS MERCADORIAS **'
                @ PROW()+1,00 SAY '           ** VENCIDAS OU AVARIADAS **'
                @ PROW()+2,00 SAY '                                   Ass. A GERENCIA'
                DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
                SETPRC(00,00)
        ELSE
        */
                IF mtp_venda = 'AV' .AND. ver_serie() = '141415'
                        DEVPOS(PROW(),00);DEVOUT('')
                ELSE
                        IF m_indiv[1,7] = '4200'
                                imprt('M','N+')
                        ELSE
                                imprt('M','C')
                        ENDIF
                        //GO mpoint
                        @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                        @ PROW()+1,00 SAY ' '
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'C A I X A'
                        @ PROW(),00 SAY PADL(mvia,48)
                        @ PROW()+1,00 SAY ' '
                        IF ! EMPTY(cons_cli[1,2])
                                @ PROW(),00 SAY 'Cliente:'
                                @ PROW(),09 SAY cons_cli[1,2]
                                @ PROW(),15 SAY cons_cli[1,3]
                                IF ! EMPTY(imppedido[1,26]) .OR. ! EMPTY(imppedido[1,27])
                                        @ PROW()+1,00 SAY 'Placa do Veiculo: '+imppedido[1,26]+'  Tipo Veiculo: '+imppedido[1,27]
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                                @ PROW()+1,00 SAY 'Emissao:'
                        ELSE
                                @ PROW(),00 SAY 'Emissao:'
                        ENDIF
                        @ PROW(),PCOL()+1 SAY imppedido[1,4]
                        @ PROW(),PCOL()+2 SAY imppedido[1,47]
                        @ PROW(),PCOL()+2 SAY 'Cod.:'
                        @ PROW(),PCOL()+1 SAY imppedido[1,32]
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6)

                        imprt('M','N')
                        DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
                        imprt('M','C')

                        IF mtp_venda = 'AV'
                                @ PROW()+1,00 SAY 'Pagamento AVISTA'
                                IF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                                ELSEIF SUBSTR(imppedido[1,44],1,2) = 'DN'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                                ENDIF
                        ELSE
                                @ PROW()+1,00 SAY 'Pag. APRAZO'
                                IF SUBSTR(imppedido[1,44],1,2) = 'DU'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pag.: DUPLICATA ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                                ELSEIF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                                ELSEIF SUBSTR(imppedido[1,44],1,2) = 'CT'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CARTAO')
                                ENDIF
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                SETPRC(00,00)
        //ENDIF
ENDIF
IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'P' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'    //.AND. ! EMPTY(mquantd)
        //IF ver_serie() = '141410' .OR. ver_serie() = '141425' .OR. ver_serie() = '141477'
        IF ver_serie() = '141425'
                SETPRC(00,00)
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                imp_emba(mnum_ped)
        ELSE
                mensagem('Imprimindo o TICKET DA EMBALAGEM na porta:'+mporta_imp)
                IF mporta_imp <> m_indiv[1,19]
                        mensagem('Imprimindo o TICKET DA EMBALAGEM na porta:'+m_indiv[1,19])
                        SETPRC(00,00)
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        SET DEVICE TO PRINT
                        SET PRINT TO (m_indiv[1,19])
                ENDIF
                @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                @ PROW()+1,00 SAY ' '
                imprt('M','C')
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'E M B A L A G E M'
                @ PROW(),00 SAY PADL(mvia,48)
                @ PROW()+1,00 SAY ' '
                IF ! EMPTY(cons_cli[1,2])
                        @ PROW(),00 SAY 'Cliente:'
                        @ PROW(),09 SAY cons_cli[1,2]
                        @ PROW(),15 SAY cons_cli[1,3]
                        IF ! EMPTY(imppedido[1,26]) .OR. ! EMPTY(imppedido[1,27])
                                @ PROW()+1,00 SAY 'Placa do Veiculo: '+imppedido[1,26]+'  Tipo Veiculo: '+imppedido[1,27]
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                ELSE
                        @ PROW(),00 SAY 'Emissao:'
                ENDIF
                @ PROW(),10 SAY imppedido[1,4]
                @ PROW(),21 SAY imppedido[1,47]
                @ PROW(),30 SAY 'Cod.:'
                @ PROW(),35 SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),39 SAY LEFT(imppedido[1,33],15)
                ENDIF
                imprt('M','C')
                @ PROW(),00 SAY mtraco
                imprt('M','N')
                @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6)
                DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
                IF mtp_venda = 'AV'
                        @ PROW()+1,00 SAY 'Pagamento AVISTA'
                        IF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                        ELSEIF SUBSTR(imppedido[1,44],1,2) = 'DN'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                        ENDIF
                ELSE
                        @ PROW()+1,00 SAY 'Pagamento APRAZO'
                        IF SUBSTR(imppedido[1,44],1,2) = 'DU'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pag.: DUPLICATA ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                        ELSEIF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                        ELSEIF SUBSTR(imppedido[1,44],1,2) = 'CT'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CARTAO')
                        ENDIF
                ENDIF
                imprt('M','C')
                @ PROW()+1,00 SAY mtraco
                SETPRC(00,00)
        ENDIF
ENDIF
//IF mop = 'S' .OR.  (mop_dup = 'S' .AND. m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*')
DEVPOS(PROW()+m_indiv[1,16],00)
imprt('M','N')
//ENDIF
SETPRC(00,00)
SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('PD'+STRZERO(mnum_ped,6)+'.REL',,,'*')
RETURN NIL
***************************** F I M ***********************************
