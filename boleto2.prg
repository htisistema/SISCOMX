***************************************************
* PROGRAMA DE FUNCOES IMPRESSAO DE TIPOS DE PEDIDOS
***************************************************
* IMPRESSAO EM BOLETO
*****************************
FUNCTION boleto2(mtipo_form,mdup_2)
***********************************
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

//ver_cli(VAL((ali)->pcod_cli),,,'*')

mop := op_simnao('S','Deseja imprimir o Pedido [S/n]:')

mop_dup := 'S'
IF m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via'
        mop_dup := mensagem1('Deseja imprimir a(s) Duplicata(s) [S/n]:',' ','S,N')
        IF LASTKEY() = 27 .OR. mop_dup = 'N'
                mop_dup := 'N'
        ENDIF
ELSE
        mop_dup := 'S'
ENDIF
/*
IF m_set[1,13] = 'S' .AND. mop = 'S' .OR.  SUBSTR(mvia,1,6) = '2a.via'

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
ELSEIF mop = 'S' .AND. m_set[1,13] <> 'S'
        mensagem('Aguarde um momento imprimido pedido BOLETO na porta: '+mporta_imp)
        SET DEVICE TO PRINT
        SET PRINT TO (mporta_imp)
ENDIF
*/
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
IF mop = 'S'    //.OR. SUBSTR(mvia,1,1) = '2'
        IF m_set[1,86] = 'T' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'         //.AND. ! EMPTY(mquantd)
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+1,00 SAY ' '
                @ PROW(),00 SAY 'Emissao:'
                @ PROW(),PCOL()+1 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY imppedido[1,47]
                @ PROW(),PCOL()+2 SAY 'Cod.:'
                @ PROW(),PCOL()+1 SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),PCOL()+1 SAY imppedido[1,33]
                ENDIF
                @ PROW(),60 SAY 'Emissao:'
                @ PROW(),PCOL()+1 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY imppedido[1,47]
                @ PROW(),PCOL()+2 SAY 'Cod.:'
                @ PROW(),PCOL()+1 SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),PCOL()+1 SAY imppedido[1,33]
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW(),60 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                @ PROW(),00 SAY STRZERO(mnum_ped,6)
                @ PROW(),60 SAY STRZERO(mnum_ped,6)
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                DEVPOS(PROW()+1,00);DEVOUT('Valor R$: '+TRANSFORM(mt_pedido,'999,999.99'))
                DEVPOS(PROW(),54);DEVOUT('Valor R$: '+TRANSFORM(mt_pedido,'999,999.99'))
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+4,00 SAY '--------------------------- Corte aqui --------------------'
                @ PROW(),60 SAY '--------------------------- Corte aqui --------------------'
                imprt(mtipo_imp,'N',2)
        ENDIF
        i := 0
        FOR i = 1 TO mquantd

                //GO mpoint
                mtabela := ''
                IF ! EMPTY(imppedido[1,42])
                        ver_cond(VAL(imppedido[1,42]),PCOL()+1)
                        mtabela := imppedido[1,42]+' - '        //+tabpg->descri
                ENDIF
                IF i = mquantd .AND. (! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13]))
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        opcao := op_simnao('S','Imprimir na 2a. porta de impressao [S/n]:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                        mensagem('Imprimindo Pedido no BOLETO na 2a. porta:'+IF(! EMPTY(m_indiv[1,8]),m_indiv[1,8],m_indiv[1,13]))
                        SET DEVICE TO PRINT
                        SET PRINT TO (IF(! EMPTY(m_indiv[1,8]),m_indiv[1,8],m_indiv[1,13]))
                ENDIF
                mtot_itens := mt_pedido := mtot_desc := mtot_quant := mdesconto := 0
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                IF m_set[1,22] = 'S'
                        IF mmult_emp = 'N'
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(memp_resa),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(ALLTRIM(memp_resa),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mend_firm),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM(mend_firm),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcid_firm),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM(mcid_firm),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM('Fone: '+mfone_firm),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM('Fone: '+mfone_firm),54))
                                @ PROW()+1,00 SAY mtraco
                                @ PROW(),60 SAY mtraco
                        ELSE
                                ver_emp(imppedido[1,1])
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(IF(emp->nome_cab = 'F',emp->fantasia,emp->razao)),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(ALLTRIM(IF(emp->nome_cab = 'F',emp->fantasia,emp->razao)),54))
                                IF SUBSTR(emp->apre3,1,2) = '* '
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(LEFT(emp->apre3,35)),54))
                                        DEVPOS(PROW(),60);DEVOUT(PADC(ALLTRIM(LEFT(emp->apre3,35)),54))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(emp->endereco),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM(emp->endereco),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(emp->cidade)+'-'+RTRIM(emp->uf),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM(emp->cidade)+'-'+RTRIM(emp->uf),54))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM('Fone: '+emp->fone),54))
                                DEVPOS(PROW(),60);DEVOUT(PADC(RTRIM('Fone: '+emp->fone),54))
                                @ PROW()+1,00 SAY mtraco
                                @ PROW(),60 SAY mtraco
                        ENDIF
                ENDIF
*               @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                @ PROW(),PCOL()+1 SAY STRZERO(mnum_ped,6)
                @ PROW(),PCOL()+3 SAY mvia+'  T:'+ALLTRIM(imppedido[1,3])
                IF mquantd > 1
                        @ PROW(),PCOL()+1 SAY 'C-'+STRZERO(i,2)
                ENDIF

                @ PROW(),60 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))
                @ PROW(),PCOL()+1 SAY STRZERO(mnum_ped,6)
                @ PROW(),PCOL()+3 SAY mvia+'  T:'+ALLTRIM(imppedido[1,3])
                IF mquantd > 1
                        @ PROW(),PCOL()+1 SAY 'C-'+STRZERO(i,2)
                ENDIF
                IF SUBSTR(mvia,1,6) = '2a.via'
                        IF imppedido[1,49] = '*'
                                @ PROW()+1,00 SAY 'Situacao: PAGO'
                                @ PROW(),60 SAY 'Situacao: PAGO'
                        ELSEIF imppedido[1,49] = 'C'
                                @ PROW()+1,00 SAY 'Situacao: CANCELADO - MOTIVO: '+imppedido[1,91]
                                @ PROW(),60 SAY 'Situacao: CANCELADO - MOTIVO: '+imppedido[1,91]
                        ELSE
                                @ PROW()+1,00 SAY 'Situacao: ABERTO'
                                @ PROW(),60 SAY 'Situacao: ABERTO'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao da 2a.via:'
                        @ PROW(),PCOL()+1 SAY mdata_sis
                        @ PROW(),PCOL()+2 SAY 'Hora:'
                        @ PROW(),PCOL()+1 SAY TIME()
                        @ PROW(),PCOL()+2 SAY 'Op.:'
                        @ PROW(),PCOL()+1 SAY cod_operado
                        @ PROW(),60 SAY 'Emissao da 2a.via:'
                        @ PROW(),PCOL()+1 SAY mdata_sis
                        @ PROW(),PCOL()+2 SAY 'Hora:'
                        @ PROW(),PCOL()+1 SAY TIME()
                        @ PROW(),PCOL()+2 SAY 'Op.:'
                        @ PROW(),PCOL()+1 SAY cod_operado
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                ENDIF
                IF ver_serie() <> '141237'
                        @ PROW()+1,00 SAY PADC('*** SEM VALOR FISCAL ***',54)
                        @ PROW(),60 SAY PADC('*** SEM VALOR FISCAL ***',54)
                ENDIF
                IF mcod_cli > 0
                        @ PROW()+1,00 SAY 'Cliente:'
                        @ PROW(),PCOL()+1 SAY cons_cli[1,2]
                        @ PROW(),PCOL()+1 SAY cons_cli[1,3]
                        @ PROW(),60 SAY 'Cliente:'
                        @ PROW(),PCOL()+1 SAY cons_cli[1,2]
                        @ PROW(),PCOL()+1 SAY cons_cli[1,3]
                        IF m_set[1,40] = 'S'
                                @ PROW()+1,00 SAY 'Fantasia:'
                                @ PROW(),PCOL()+1 SAY cons_cli[1,4]
                                @ PROW(),60 SAY 'Fantasia:'
                                @ PROW(),PCOL()+1 SAY cons_cli[1,4]
                        ENDIF
                        IF m_set[1,39] = 'S'
                                @ PROW()+1,00 SAY 'End.: '+cons_cli[1,21]
                                @ PROW(),60 SAY 'End.: '+cons_cli[1,21]
                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                                @ PROW(),60 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- Fone: '+cons_cli[1,29]
                                @ PROW(),60 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- Fone: '+cons_cli[1,29]
                                IF mcgc <> SPACE(14)
                                        @ PROW()+1,00 SAY 'CNPJ:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                                        @ PROW(),60 SAY 'CNPJ:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                                ELSEIF mcpf <> SPACE(11)
                                        @ PROW()+1,00 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                        @ PROW(),60 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                ENDIF
                                IF ! EMPTY(cons_cli[1,28])
                                        @ PROW()+1,00 SAY 'Rota: '+SUBSTR(cons_cli[1,28],1,48)
                                        @ PROW(),60 SAY 'Rota: '+SUBSTR(cons_cli[1,28],1,48)
                                ENDIF
                        ENDIF
                        IF ! EMPTY(imppedido[1,26]) .OR. ! EMPTY(imppedido[1,27])
                                @ PROW()+1,00 SAY 'Placa do Veiculo: '+imppedido[1,26]+'  Marca: '+imppedido[1,27]
                                @ PROW(),60 SAY 'Placa do Veiculo: '+imppedido[1,26]+'  Marca: '+imppedido[1,27]
                                @ PROW()+1,00 SAY 'Modelo..........: '+imppedido[1,28]+'  KM: '+imppedido[1,29]
                                @ PROW(),60 SAY 'Modelo..........: '+imppedido[1,28]+'  KM: '+imppedido[1,29]
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                ENDIF
                @ PROW()+1,00 SAY 'Emissao:'
                @ PROW(),PCOL()+1 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY SUBSTR(imppedido[1,47],1,5)
                @ PROW(),PCOL()+1 SAY 'Ope:'
                @ PROW(),PCOL() SAY imppedido[1,34]
                @ PROW(),PCOL()+1 SAY 'Cod.:'
                @ PROW(),PCOL() SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),PCOL()+1 SAY LEFT(imppedido[1,33],14)
                ENDIF

                // 2a. VIA

                @ PROW(),60 SAY 'Emissao:'
                @ PROW(),PCOL()+1 SAY imppedido[1,4]
                @ PROW(),PCOL()+1 SAY SUBSTR(imppedido[1,47],1,5)
                @ PROW(),PCOL()+1 SAY 'Ope:'
                @ PROW(),PCOL() SAY imppedido[1,34]
                @ PROW(),PCOL()+1 SAY 'Cod.:'
                @ PROW(),PCOL() SAY imppedido[1,32]
                IF m_set[1,81] = 'S'
                        @ PROW(),PCOL()+1 SAY LEFT(imppedido[1,33],14)
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW(),60 SAY mtraco
//TIPO DE FORMULARIO
                IF mtipo_form = NIL
                        @ PROW()+1,00 SAY 'Cod.'
                        @ PROW(),15 SAY 'Descricao'
                        @ PROW(),52 SAY 'UN'
                        @ PROW(),60 SAY 'Cod.'
                        @ PROW(),75 SAY 'Descricao'
                        @ PROW(),112 SAY 'UN'
                        IF m_set[1,36] = 'S'
                                @ PROW()+1,00 SAY '   Quantd.'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Unit.'
                                @ PROW(),PCOL()+1 SAY 'Dsc(%)'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                                @ PROW(),60 SAY '   Quantd.'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Unit.'
                                @ PROW(),PCOL()+1 SAY 'Dsc(%)'
                                @ PROW(),PCOL()+1 SAY ' Vlr. Venda'
                                @ PROW(),103 SAY ' Vlr. Total'
                        ELSE
                                @ PROW()+1,02 SAY 'Quantd.'
                                @ PROW(),32 SAY ' Vlr. Venda'
                                @ PROW(),43 SAY ' Vlr. Total'
                                @ PROW(),62 SAY 'Quantd.'
                                @ PROW(),92 SAY ' Vlr. Venda'
                                @ PROW(),103 SAY ' Vlr. Total'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        IF ! EMPTY(imppedido[1,92])
                                @ PROW()+1,00 SAY 'localizacao: '+imppedido[1,92]
                                @ PROW(),60 SAY 'localizacao: '+imppedido[1,92]
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
                                @ PROW(),51 SAY imppedido[cont,8]
                                @ PROW(),60 SAY imppedido[cont,6]
                                IF ! EMPTY(imppedido[cont,10]) .AND. m_set[1,37] = 'N'
                                        @ PROW(),66 SAY LEFT(imppedido[cont,7],27)
                                        @ PROW(),PCOL() SAY ' * '+imppedido[cont,10]
                                ELSE
                                        @ PROW(),66 SAY imppedido[cont,7]
                                ENDIF
                                @ PROW(),111 SAY imppedido[cont,8]
                                mdesconto := 0
                                @ PROW()+1,00 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                IF m_set[1,36] = 'S'
                                        IF imppedido[cont,52] > 0
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := mperc := 0
                                        ELSEIF imppedido[cont,20] > imppedido[cont,18]
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,20] PICT ALLTRIM(m_set[1,98])
                                                mdesconto =  (imppedido[cont,14] * imppedido[cont,18]) - (imppedido[cont,14] * imppedido[cont,20])
                                                mperc := iat((((imppedido[cont,14] * imppedido[cont,20]) - (imppedido[cont,14] * imppedido[cont,18])) / (imppedido[cont,14] * imppedido[cont,20])),3) * 100
                                        ELSE
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,17] PICT ALLTRIM(m_set[1,98])
                                                mdesconto := 0
                                                mperc := imppedido[cont,39]
                                        ENDIF
*                                        @ PROW(),12 SAY mdesconto PICT ALLTRIM(m_set[1,98])
                                        @ PROW(),PCOL()+1 SAY mperc PICT '99.99'
                                        @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ELSE
                                        mdesconto := 0
                                        @ PROW(),32 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ENDIF
                                mcust_real = imppedido[cont,14] * imppedido[cont,18]
                                @ PROW(),43 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])



                                @ PROW(),60 SAY imppedido[cont,14] PICT unidade(imppedido[cont,8],'*')
                                IF m_set[1,36] = 'S'
                                        IF imppedido[cont,52] > 0
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                        ELSEIF imppedido[cont,20] > imppedido[cont,18]
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,20] PICT ALLTRIM(m_set[1,98])
                                        ELSE
                                                @ PROW(),PCOL()+1 SAY imppedido[cont,17] PICT ALLTRIM(m_set[1,98])
                                        ENDIF
                                        @ PROW(),PCOL()+1 SAY mperc PICT '99.99'
                                        @ PROW(),PCOL()+1 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ELSE
                                        @ PROW(),92 SAY imppedido[cont,18] PICT ALLTRIM(m_set[1,98])
                                ENDIF
                                @ PROW(),103 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])




                                mtot_desc := mtot_desc + mdesconto
                                mt_pedido := mt_pedido + (imppedido[cont,14]*imppedido[cont,18] - mdesconto)
                                mtot_itens ++
                                IF ! EMPTY(imppedido[cont,13])
                                        DEVPOS(PROW()+1,00);DEVOUT('Volume(s): '+TRANSFORM(imppedido[cont,14] * imppedido[cont,13],'99,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Volume(s): '+TRANSFORM(imppedido[cont,14] * imppedido[cont,13],'99,999.99'))
                                        mtot_quant := mtot_quant + (imppedido[cont,14] * imppedido[cont,13])
                                ELSE
                                        mtot_quant := mtot_quant + imppedido[cont,14]
                                ENDIF
                                IF ! EMPTY(imppedido[cont,80])
                                        @ PROW()+1,00 SAY imppedido[cont,80]
                                        @ PROW(),60 SAY imppedido[cont,80]
                                ENDIF
                                IF (ver_serie() = '141425' .OR. ver_serie() = '141477') .AND. ! EMPTY(imppedido[cont,10])
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT('')
                                        imprt(mtipo_imp,'E')
                                        DEVPOS(PROW(),00);DEVOUT(imppedido[cont,10])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,10])
                                        imprt(mtipo_imp,'N')
                                        imprt(mtipo_imp,'C')
                                ENDIF
                                IF ! EMPTY(imppedido[cont,58])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,58])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,58])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,81])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,81])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,81])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,82])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,82])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,82])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,83])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,83])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,83])
                                ENDIF
                                IF ! EMPTY(imppedido[cont,84])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,84])
                                        DEVPOS(PROW(),60);DEVOUT(imppedido[cont,84])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,36])=0
                                        AADD(m_montador,imppedido[cont,36])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,38])=0
                                        AADD(m_montador,imppedido[cont,38])
                                ENDIF
                                IF STRZERO(mnum_ped,6) = imppedido[cont,2] .AND. ! EOF()
                                        IF ! EMPTY(imppedido[cont,92])
                                                @ PROW()+1,00 SAY 'localizacao: '+imppedido[cont,92]
                                                @ PROW(),PCOL()+1 SAY REPLI('-',44)
                                                @ PROW(),60 SAY 'localizacao: '+imppedido[cont,92]
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
                                DEVPOS(PROW(),00);DEVOUT(CHR(15))
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
                                IF (ver_serie() = '141425' .OR. ver_serie() = '141477') .AND. ! EMPTY(imppedido[cont,10])
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT('')
                                        imprt(mtipo_imp,'E')
                                        DEVPOS(PROW(),00);DEVOUT(imppedido[cont,10])
                                        imprt(mtipo_imp,'N')
                                        imprt(mtipo_imp,'C')
                                ENDIF
                                IF ! EMPTY(imppedido[cont,58])
                                        DEVPOS(PROW()+1,00);DEVOUT(imppedido[cont,58])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,36])=0
                                        AADD(m_montador,imppedido[cont,36])
                                ENDIF
                                IF ASCAN(m_montador,imppedido[cont,38])=0
                                        AADD(m_montador,imppedido[cont,38])
                                ENDIF
                                IF STRZERO(mnum_ped,6) = imppedido[cont,2] .AND. ! EOF()
                                        IF ! EMPTY(imppedido[cont,92])
                                                @ PROW()+1,00 SAY 'localizacao: '+imppedido[cont,92]
                                                @ PROW(),PCOL()+1 SAY REPLI('-',44)
                                        ENDIF
                                ENDIF
                        NEXT
                ENDIF
                IF (SUBSTR(m_set[1,9],1,1) = 'S'.OR. SUBSTR(m_set[1,9],2,1) = 'S') .AND. ! EMPTY(mobs1)
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        @ PROW()+1,00 SAY 'OBS.: '+mobs1
                        @ PROW(),60 SAY 'OBS.: '+mobs1
                        IF ! EMPTY(mobs2)
                                @ PROW()+1,00 SAY '      '+mobs2
                                @ PROW(),60 SAY '      '+mobs2
                        ENDIF
                        IF ! EMPTY(mobs3)
                                @ PROW()+1,00 SAY '      '+mobs3
                                @ PROW(),60 SAY '      '+mobs3
                        ENDIF
                        IF ! EMPTY(mobs4)
                                @ PROW()+1,00 SAY '      '+mobs4
                                @ PROW(),60 SAY '      '+mobs4
                        ENDIF
                ENDIF
                mobs_caixa := mobs1+' '+mobs2
                @ PROW()+1,00 SAY mtraco
                @ PROW(),60 SAY mtraco
                IF m_set[1,37] = 'S'
                        h := 0
                        @ PROW()+1,00 SAY 'Montadores:'
                        @ PROW(),60 SAY 'Montadores:'
                        FOR h = 1 TO LEN(m_montador)
                                @ PROW()+1,00 SAY 'Cod.:'+m_montador[h]
                                @ PROW(),60 SAY 'Cod.:'+m_montador[h]
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                ENDIF
                IF m_set[1,110] = 'S'
                        @ PROW()+1,00 SAY 'Documentos Vencidos R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mlim_venc,'9,999,999.99')
                        @ PROW(),60 SAY 'Documentos Vencidos R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mlim_venc,'9,999,999.99')

                        @ PROW()+1,00 SAY 'Documentos A vencer R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mlim_avenc,'9,999,999.99')
                        @ PROW(),60 SAY 'Documentos A vencer R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mlim_avenc,'9,999,999.99')

                        @ PROW()+1,00 SAY 'Total...............R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mtot_limite,'9,999,999.99')
                        @ PROW(),60 SAY 'Total...............R$:'
                        @ PROW(),PCOL()+1 SAY TRANSFORM(mtot_limite,'9,999,999.99')

                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                ENDIF
                @ PROW()+1,00 SAY 'Total de Itens:'
                @ PROW(),16 SAY TRANSFORM(mtot_itens,'999999')
                @ PROW(),26 SAY 'Volume Total:'
                @ PROW(),40 SAY TRANSFORM(mtot_quant,'999999')

                @ PROW(),60 SAY 'Total de Itens:'
                @ PROW(),76 SAY TRANSFORM(mtot_itens,'999999')
                @ PROW(),86 SAY 'Volume Total:'
                @ PROW(),100 SAY TRANSFORM(mtot_quant,'999999')

                @ PROW()+1,00 SAY 'Sub-total:'
                @ PROW(),11 SAY mt_pedido PICT '99,999,999.99'
                @ PROW(),26 SAY 'Desconto:'
                @ PROW(),35 SAY mtot_desc PICT '99,999,999.99'
                @ PROW(),60 SAY 'Sub-total:'
                @ PROW(),71 SAY mt_pedido PICT '99,999,999.99'
                @ PROW(),86 SAY 'Desconto:'
                @ PROW(),95 SAY mtot_desc PICT '99,999,999.99'

                mcust_real = mt_pedido + mtot_desc
                @ PROW()+1,00 SAY 'TOTAL DA NOTA:'
                @ PROW(),15 SAY iat(mcust_real,2) PICT '99,999,999.99'
                @ PROW(),60 SAY 'TOTAL DA NOTA:'
                @ PROW(),75 SAY iat(mcust_real,2) PICT '99,999,999.99'
                @ PROW()+1,00 SAY mtraco
                @ PROW(),60 SAY mtraco
                IF VAL(mtabela) > 0
                        @ PROW()+1,00 SAY 'Tabela:'+mtabela
                        @ PROW(),60 SAY 'Tabela:'+mtabela
                ENDIF
                IF mtp_venda = 'AV'
                        @ PROW()+1,00 SAY 'Pagamento AVISTA'
                        @ PROW(),60 SAY 'Pagamento AVISTA'
                        IF mcheque = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                                DEVPOS(PROW(),60);DEVOUT('Modo de Pagamento: CHEQUE')
                        ELSEIF mdinheiro = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: DINHEIRO')
                                DEVPOS(PROW(),60);DEVOUT('Modo de Pagamento: DINHEIRO')
                        ENDIF
                ELSEIF mdup = '*' .OR. mcheque = '*'
                        m_vlr[1] := (mcust_real-mvlr_ent)/VAL(SUBSTR(mcond_veze,2,2))
                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                IF mdup = '*'
                                        IF ! EMPTY(mcart_ban)
                                                DEVPOS(PROW()+1,0);DEVOUT('Tipo Duplicata: << '+IF(mcart_ban='B','BANCO >>','CARTEIRA >>'))
                                                DEVPOS(PROW(),60);DEVOUT('Tipo Duplicata: << '+IF(mcart_ban='B','BANCO >>','CARTEIRA >>'))
                                        ENDIF
                                        @ PROW()+1,00 SAY 'Pag.APRAZO DUPLICATA: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+STRZERO(m_dia[1],3)+'+'+STRZERO(m_dia[2],3)+' Dias'
                                        @ PROW(),60 SAY 'Pag.APRAZO DUPLICATA: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+STRZERO(m_dia[1],3)+'+'+STRZERO(m_dia[2],3)+' Dias'
                                ELSE
                                        @ PROW()+1,00 SAY 'Pag.APRAZO CHEQUE: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+STRZERO(m_dia[1],3)+'+'+STRZERO(m_dia[2],3)+' Dias'
                                        @ PROW(),60 SAY 'Pag.APRAZO CHEQUE: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+STRZERO(m_dia[1],3)+'+'+STRZERO(m_dia[2],3)+' Dias'
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                        DEVPOS(PROW()+1,00);DEVOUT('Valor da Entrada R$:'+TRANSFORM(mvlr_ent,'99,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Valor da Entrada R$:'+TRANSFORM(mvlr_ent,'99,999.99'))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT('Venc.1o.:'+DTOC(mdata+m_dia[1]))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                DEVPOS(PROW(),60);DEVOUT('Venc.1o.:'+DTOC(mdata+m_dia[1]))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 2
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.2o.:'+DTOC(mdata+m_dia[2]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.2o.:'+DTOC(mdata+m_dia[2]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 3
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.3o.:'+DTOC(mdata+m_dia[3]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.3o.:'+DTOC(mdata+m_dia[3]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 4
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.4o.:'+DTOC(mdata+m_dia[4]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.4o.:'+DTOC(mdata+m_dia[4]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 5
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.5o.:'+DTOC(mdata+m_dia[5]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.5o.:'+DTOC(mdata+m_dia[5]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 6
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.6o.:'+DTOC(mdata+m_dia[6]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.6o.:'+DTOC(mdata+m_dia[6]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 7
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.7o.:'+DTOC(mdata+m_dia[7]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.7o.:'+DTOC(mdata+m_dia[7]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 8
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.8o.:'+DTOC(mdata+m_dia[8]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.8o.:'+DTOC(mdata+m_dia[8]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 9
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.9o.:'+DTOC(mdata+m_dia[9]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.9o.:'+DTOC(mdata+m_dia[9]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 10
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.10o:'+DTOC(mdata+m_dia[10]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.10o:'+DTOC(mdata+m_dia[10]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 11
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.11o:'+DTOC(mdata+m_dia[11]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.11o:'+DTOC(mdata+m_dia[11]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 12
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.12o:'+DTOC(mdata+m_dia[12]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.12o:'+DTOC(mdata+m_dia[12]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 13
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.13o:'+DTOC(mdata+m_dia[13]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.13o:'+DTOC(mdata+m_dia[13]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 14
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.14o:'+DTOC(mdata+m_dia[14]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.14o:'+DTOC(mdata+m_dia[14]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 15
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.15o:'+DTOC(mdata+m_dia[15]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT('Venc.15o:'+DTOC(mdata+m_dia[15]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr.R$:'+TRANSFORM(m_vlr[1],'999,999.99'))
                                ENDIF
                        ENDIF
                ELSEIF mcartao = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CARTAO')
                        DEVPOS(PROW(),60);DEVOUT('Modo de Pagamento: CARTAO')
                        @ PROW()+1,00 SAY 'Pagamento APRAZO'
                        @ PROW(),60 SAY 'Pagamento APRAZO'
                ELSEIF mfin = '*'
                                @ PROW()+1,00 SAY 'Pag. APRAZO'
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo: FINANCIAMENTO - '+STRZERO(mcod_fin,3)+'-'+fin->desc_fin)
                                @ PROW(),60 SAY 'Pag. APRAZO'
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo: FINANCIAMENTO - '+STRZERO(mcod_fin,3)+'-'+fin->desc_fin)
                                DEVPOS(PROW()+1,00);DEVOUT('Condicao: '+TRANSFORM(mtipo_fin,'@R 9+99'))
                                DEVPOS(PROW(),60);DEVOUT('Condicao: '+TRANSFORM(mtipo_fin,'@R 9+99'))
                                IF mvalor_ent > 0
                                        DEVPOS(PROW()+1,00);DEVOUT('- Entrada R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvalor_ent,'99,999.99')
                                        DEVPOS(PROW(),60);DEVOUT('- Entrada R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvalor_ent,'99,999.99')
                                ENDIF
                                i := 0
                                FOR i = 1 TO 12  //VAL(SUBSTR(mtipo_fin,2))
                                        mdt_aux := mdata + (30*i)
                                        IF i <= VAL(SUBSTR(mtipo_fin,2))
                                                DEVPOS(PROW()+1,00);DEVOUT('Venc.'+STRZERO(i,2)+':'+DTOC(mdt_aux))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM(mvalor_pres,'999,999.99'))
                                                DEVPOS(PROW(),60);DEVOUT('Venc.'+STRZERO(i,2)+':'+DTOC(mdt_aux))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM(mvalor_pres,'999,999.99'))
                                        ENDIF
                                NEXT
                ELSE
                        @ PROW()+1,00 SAY 'OK'
                        @ PROW(),60 SAY 'OK'

                ENDIF
                IF ! EMPTY(m_set[1,25])
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,25],54)),54)
                        @ PROW(),60 SAY PADC(RTRIM(LEFT(m_set[1,25],54)),54)
                        IF ! EMPTY(m_set[1,26])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,26],54)),54)
                                @ PROW(),60 SAY PADC(RTRIM(LEFT(m_set[1,26],54)),54)
                        ENDIF
                        IF ! EMPTY(m_set[1,27])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,27],54)),54)
                                @ PROW(),60 SAY PADC(RTRIM(LEFT(m_set[1,27],54)),54)
                        ENDIF
                        IF ! EMPTY(m_set[1,28])
                                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,28],54)),54)
                                @ PROW(),60 SAY PADC(RTRIM(LEFT(m_set[1,28],54)),54)
                        ENDIF
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW(),60 SAY mtraco
                IF m_set[1,22] = 'S'
                        @ PROW()+1,00 SAY PADL('HTI Sistemas - (81)'+mfone_HTI,54)
                ENDIF
                IF mquantd > 1
                        DEVPOS(PROW()+3,00);DEVOUT(CHR(18))
                ENDIF
                SETPRC(00,00)
        NEXT
ENDIF
IF (mop_dup = 'S' .AND. m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via') .OR. mdup_2 <> NIL
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
                        @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                        @ PROW(),60 SAY '---------------------- Corte aqui --------------------'
                        @ PROW()+2,00 SAY ' '
                        IF m_set[1,22] = 'S'
                                IF mmult_emp = 'N'
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        DEVPOS(PROW(),60);DEVOUT(memp_resa)
                                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                                        DEVPOS(PROW(),00);DEVOUT(mend_firm)
                                        DEVPOS(PROW(),60);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                                        DEVPOS(PROW(),60);DEVOUT(mcid_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                                        DEVPOS(PROW(),60);DEVOUT('Fone: '+mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   CNPJ: '+mcgc_firm)
                                        DEVPOS(PROW(),60);DEVOUT('Inscr. '+minsc_firm+'   CNPJ: '+mcgc_firm)
                                ELSE
                                        DEVPOS(PROW(),00);DEVOUT(PADC(ALLTRIM(IF(emp->nome_cab = 'F',emp->fantasia,emp->razao)),54))
                                        DEVPOS(PROW(),60);DEVOUT(PADC(ALLTRIM(IF(emp->nome_cab = 'F',emp->fantasia,emp->razao)),54))
                                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                                        DEVPOS(PROW(),00);DEVOUT(emp->endereco)
                                        DEVPOS(PROW(),60);DEVOUT(emp->endereco)
                                        DEVPOS(PROW()+1,00);DEVOUT(emp->cidade)
                                        DEVPOS(PROW(),60);DEVOUT(emp->cidade)
                                        DEVPOS(PROW()+1,00);DEVOUT('Fone: '+emp->fone)
                                        DEVPOS(PROW(),60);DEVOUT('Fone: '+emp->fone)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+emp->insc+'   CNPJ: '+emp->cnpj)
                                        DEVPOS(PROW(),60);DEVOUT('Inscr. '+emp->insc+'   CNPJ: '+emp->cnpj)
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                                @ PROW(),60 SAY mtraco
                                @ PROW()+1,00 SAY ' '
                        ENDIF
                        IF mcod_cli > 0
                                @ PROW(),00 SAY 'Cliente:'
                                @ PROW(),09 SAY cons_cli[1,2]
                                @ PROW(),15 SAY cons_cli[1,3]
                                @ PROW(),60 SAY 'Cliente:'
                                @ PROW(),69 SAY cons_cli[1,2]
                                @ PROW(),75 SAY cons_cli[1,3]
                                @ PROW()+1,00 SAY 'End.: '+cons_cli[1,21]
                                @ PROW(),60 SAY 'End.: '+cons_cli[1,21]
                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                                @ PROW(),60 SAY 'Bairro: '+RTRIM(cons_cli[1,22])
                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- CEP:'+cons_cli[1,26]
                                @ PROW(),60 SAY 'Cidade: '+RTRIM(cons_cli[1,24])+'-'+cons_cli[1,25]+'- CEP:'+cons_cli[1,26]
                                @ PROW()+1,00 SAY 'Fone: '+cons_cli[1,29]
                                @ PROW(),60 SAY 'Fone: '+cons_cli[1,29]
                                IF mcgc <> SPACE(14)
                                        @ PROW()+1,00 SAY 'CNPJ:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                                        @ PROW(),60 SAY 'CNPJ:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cons_cli[1,33])
                                ELSEIF mcpf <> SPACE(11)
                                        @ PROW()+1,00 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                        @ PROW(),60 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                                @ PROW(),60 SAY mtraco
                        ENDIF
                        @ PROW()+1,00 SAY CHR(18)
                        @ PROW(),00 SAY 'DUPLICATA No.:'
                        @ PROW(),15 SAY mdocumento+'-'+STRZERO(i,2)+'/'+SUBSTR(mcond_veze,2,2)
                        @ PROW(),60 SAY 'DUPLICATA No.:'
                        @ PROW(),75 SAY mdocumento+'-'+STRZERO(i,2)+'/'+SUBSTR(mcond_veze,2,2)
                        @ PROW()+1,00 SAY CHR(15)
                        @ PROW(),00 SAY 'Emissao:'
                        @ PROW(),PCOL()+1 SAY mdata
                        @ PROW(),PCOL()+2 SAY 'Venc.:'
                        @ PROW(),PCOL()+1 SAY mdata + m_dia[i]

                        @ PROW(),PCOL()+2 SAY 'Cod.:'
                        @ PROW(),PCOL()+1 SAY mcod_vend
                        @ PROW(),60 SAY 'Emissao:'
                        @ PROW(),PCOL()+1 SAY mdata
                        @ PROW(),PCOL()+2 SAY 'Venc.:'
                        @ PROW(),PCOL()+1 SAY mdata + m_dia[i]

                        @ PROW(),PCOL()+2 SAY 'Cod.:'
                        @ PROW(),PCOL()+1 SAY mcod_vend
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        @ PROW()+1,00 SAY 'Fatura No.:               '
                        @ PROW(),30 SAY 'No.Duplicata:'
                        @ PROW(),60 SAY 'Fatura No.:               '
                        @ PROW(),90 SAY 'No.Duplicata:'
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(iat(m_vlr[i],2),'99,999,999.99'))+')',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(iat(m_vlr[i],2),'99,999,999.99'))+')',54))
                        mextenso:= '('+RTRIM(EXT(iat(m_vlr[i],2),10))+')'
                        mlinha := MLCOUNT(mextenso,54)
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,54,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),54))
                                DEVPOS(PROW(),60);DEVOUT(PADR(RTRIM(mlin),54))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,129]+', ou a sua ordem na praca e vencimento indicados.'
                        mlinha := 0
                        mlinha := MLCOUNT(mextenso,54)
                        lin := 0
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,54,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                                DEVPOS(PROW(),60);DEVOUT(RTRIM(mlin))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Emitente',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Assinatura do Emitente',54))
                        DEVPOS(PROW()+2,00);DEVOUT(PADC('Em         /        /        ',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Em         /        /        ',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Data do Aceite',54))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Sacado',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Assinatura do Sacado',54))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Avalista',54))
                        DEVPOS(PROW(),60);DEVOUT(PADC('Assinatura do Avalista',54))
                        @ PROW()+1,00 SAY mtraco
                        @ PROW(),60 SAY mtraco
                        IF ! EMPTY(m_set[1,52])
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,52]),54)
                                @ PROW(),60 SAY PADC(RTRIM(m_set[1,52]),54)
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,53]),54)
                                @ PROW(),60 SAY PADC(RTRIM(m_set[1,53]),54)
                                @ PROW()+1,00 SAY mtraco
                                @ PROW(),60 SAY mtraco
                        ENDIF
                NEXT
        NEXT
        SETPRC(00,00)
ENDIF
/*
IF m_set[1,86] = 'S' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'     //.AND. ! EMPTY(mquantd)
                IF mtp_venda = 'AV' .AND. ver_serie() = '141415'
                        DEVPOS(PROW(),00);DEVOUT('')
                ELSE
                        GO mpoint
                        DEVPOS(PROW(),00);DEVOUT(CHR(15))
                        @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                        @ PROW()+1,00 SAY ' '
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'C A I X A'
                        @ PROW(),00 SAY PADL(mvia,54)
                        @ PROW()+1,00 SAY ' '
                        IF mcod_cli > 0
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
                        DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
*                       IF ver_serie() = '141253'
*                               DEVPOS(PROW()+1,00);DEVOUT('OBS.:'+mobs_caixa)
*                       ENDIF
                        IF mtp_venda = 'AV'
                                @ PROW()+1,00 SAY 'Pagamento AVISTA'
                                IF mcheque = '*'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                                ELSEIF mdinheiro = '*'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                                ENDIF
                        ELSE
                                @ PROW()+1,00 SAY 'Pag. APRAZO - '+SUBSTR(mcondicao,1,1)+' + '+SUBSTR(mcondicao,2,2)+' p/'+mprazo+' Dias'
                                @ PROW()+1,00 SAY 'Data do Vencimento: '
                                @ PROW(),20 SAY mdata+VAL(mprazo)
                                IF mdup = '*'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pag.: DUPLICATA ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                                ELSEIF mcheque = '*'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                                ELSEIF mcartao = '*'
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CARTAO')
                                ENDIF
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                SETPRC(00,00)
ENDIF
IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'P' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'    //.AND. ! EMPTY(mquantd)
        IF ver_serie() = '141410' .OR. ver_serie() = '141425'
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
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                @ PROW()+1,00 SAY 'E M B A L A G E M'
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW(),00 SAY PADL(mvia,54)
                @ PROW()+1,00 SAY ' '
                IF mcod_cli > 0
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
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                @ PROW(),00 SAY mtraco
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                @ PROW()+1,00 SAY IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6)
                DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
*               IF ver_serie() = '141253'
*                       DEVPOS(PROW(),00);DEVOUT(CHR(15))
*                       DEVPOS(PROW()+1,00);DEVOUT('OBS.:'+mobs_caixa)
*               ENDIF
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                IF mtp_venda = 'AV'
                        @ PROW()+1,00 SAY 'Pagamento AVISTA'
                        IF mcheque = '*'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                        ELSEIF mdinheiro = '*'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                        ENDIF
                ELSE
                        @ PROW()+1,00 SAY 'Pag. APRAZO - '+SUBSTR(mcondicao,1,1)+' + '+SUBSTR(mcondicao,2,2)+' p/'+mprazo+' Dias'
                        @ PROW()+1,00 SAY 'Data do Vencimento: '
                        @ PROW(),20 SAY mdata+VAL(mprazo)
                        IF mdup = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pag.: DUPLICATA ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                        ELSEIF mcheque = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                        ELSEIF mcartao = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CARTAO')
                        ENDIF
                ENDIF
                DEVPOS(PROW(),00);DEVOUT(CHR(15))
                @ PROW()+1,00 SAY mtraco
                SETPRC(00,00)
        ENDIF
ENDIF
*/
IF mop = 'S' .OR.  (mop_dup = 'S' .AND. m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*')
        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
ENDIF
SETPRC(00,00)
SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('PD'+STRZERO(mnum_ped,6)+'.REL')
RETURN NIL
***************************** F I M ***********************************
