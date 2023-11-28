* FUNCAO P/IMPRIMIR PEDIDO FORMULARIO
*************************************
FUNCTION formula_1(mdup_2,m_ava,mtipo_pag,mtp_email)
***************************************************
LOCAL mpeso_liq:=0,mpeso_brut:=0,mtot_ipi:=0,m_montador:={},mpagina,;
      imppedido:={},cons_merc:={},cons_cli:={},mc_dup:=0,cons_finan:={},cons_emp := {}
PRIVATE mtraco,i,mtot_prazo:=0,mtot_itens:=0,opcao,mtot_volume:=0,mimppedido:={},mtipo_ped:=1

IF ali = 'orcam'
        mtraco := REPLI(CHR(223),132)
ELSE
        mtraco := REPLI(CHR(238),132)
        //mtraco := REPLI(CHR(210),132)
ENDIF
i := mpagina := 0
/*
IF ! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13])
        mquantd ++
ENDIF
*/
mdesconto := 0
IF mtp_email # NIL
        mquantd := 1
        mtipo_imp := 'M'
ENDIF
IF m_ava <> NIL
        mtipo_ped := m_ava
ENDIF
IF mquantd > 0
        IF mtp_email = NIL
                IF ! imp_arq('PD'+STRZERO(mnum_ped,6)+'.REL','T')
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
                                                mdesconto =  (imppedido[cont,14] * iat(imppedido[cont,18])) - (imppedido[cont,14] * iat(imppedido[cont,20]))
                                                mperc := iat((((imppedido[cont,14] * iat(imppedido[cont,20])) - (imppedido[cont,14] * iat(imppedido[cont,18]))) / (imppedido[cont,14] * iat(imppedido[cont,20]))),3) * 100
                                        ELSE
                                                mperc := imppedido[cont,39]
                                        ENDIF
                                ELSE
                                        mdesconto := 0
                                ENDIF
                                mcust_real = imppedido[cont,14] * iat(imppedido[cont,18])
                                mtot_desc := mtot_desc + mdesconto
                                mt_pedido := mt_pedido + (imppedido[cont,14]*iat(imppedido[cont,18]) - mdesconto)
                                mtot_quant = mtot_quant + imppedido[cont,14]
                                mtot_itens ++
                        NEXT
                        mcust_real = mt_pedido + mtot_desc
                        RETURN NIL
                ENDIF
        ELSE
                SET DEVI TO PRINT;SET PRINT ON
                imp_arq := ALLTRIM(m_indiv[1,5])+'HTI.REL'
                SET PRINT TO (imp_arq)
        ENDIF
        SETPRC(00,00)
        imppedido:={}
        IF ali = 'ped_s'        //.OR. ali = 'q_ped_s'
                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                IF m_set[1,174] = 'A'
                        cComm := cComm + ' ORDER BY pmerc'
                ELSEIF m_set[1,174] = 'C'
                        cComm := cComm + ' ORDER BY pcod_merc'
                ENDIF
        ELSE
                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                IF m_set[1,174] = 'A'
                        cComm := cComm + ' ORDER BY pmerc'
                ELSEIF m_set[1,174] = 'C'
                        cComm := cComm + ' ORDER BY pcod_merc'
                ENDIF
        ENDIF
        sr_getconnection():exec(ccomm,,.t.,@imppedido)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(imppedido) = 0
        	atencao('Nao foi encontrado este PEDIDO/ORCAMENTO No.:'+STRZERO(mnum_ped,6))
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                RETURN NIL
        ENDIF
        FOR i = 1 TO mquantd
                mtabela := ''
                /*
                IF i = mquantd .AND. (! EMPTY(m_indiv[1,8]) .OR. ! EMPTY(m_indiv[1,13])) .AND. mtp_email = NIL
                        mensagem('Imprimindo a '+STRZERO(i,2)+'a. Copia do PEDIDO de No:'+STRZERO(mnum_ped,6)+' na porta:'+mporta_imp)
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        opcao := op_simnao('S','Imprimir na 2a.porta de impressao [S/n]:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                        SET DEVICE TO PRINT
                        SET PRINT TO (IF(ali = 'orcam',m_indiv[1,13],m_indiv[1,8]))
                */
                IF i = mquantd .AND. i > 1
                        opcao := op_simnao('S','Imprimir a 2a.VIA de impressao [S/n]:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                ENDIF
                ASIZE(m_montador,0)
                mtot_prazo := mt_pedido := mtot_desc := mtot_quant := ;
                mperc := mdesconto := mtot_ipi := mtot_volume := 0
                IF mtipo_imp = 'M'
                        imprt(mtipo_imp,'P8')
                ENDIF
                imprt(mtipo_imp,'N')
                IF m_set[1,11] = 'I'
                        IF m_set[1,9] = 'S'
                                mpagina := 74
                        ELSE
                                mpagina := 77
                        ENDIF
                ELSE
                        IF m_set[1,9] = 'S'
                                mpagina := 24
                        ELSE
                                mpagina := 26
                        ENDIF
                ENDIF

                IF m_set[1,22] = 'S'
                        IF mmult_emp = 'N'
                                IF m_set[1,18] = 'J' .AND. FILE('hticabe.jpg')
                                        mpagina := 38
                                        DEVPOS(00,03);DEVOUT('"hticabe.jpg"')
                                ELSE
                                        imprt(mtipo_imp,'N+')
                                        imprt(mtipo_imp,'W1')
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'N-')
                                        imprt(mtipo_imp,'W0')
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(ALLTRIM(m_set[1,132])+', '+ALLTRIM(m_set[1,160])+'-'+ALLTRIM(m_set[1,161])+'-'+ALLTRIM(m_set[1,133])+'-'+ALLTRIM(m_set[1,134])+'-'+ALLTRIM(m_set[1,19])+' - Fone: '+m_set[1,136])
                                ENDIF
                        ELSE
                                cons_emp := {}
                                sr_getconnection():exec("SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(imppedido[1,1]),,.t.,@cons_emp)
                                sr_getconnection():exec('COMMIT',,.f.)
                                imprt(mtipo_imp,'E')
                                DEVPOS(PROW(),00);DEVOUT(ALLTRIM(IF(cons_emp[1,9] = 'F',cons_emp[1,8],cons_emp[1,7])))
                                IF SUBSTR(cons_emp[1,4],1,2) = '* '
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT(cons_emp[1,4])
                                ENDIF
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(ALLTRIM(cons_emp[1,10])+'-'+ALLTRIM(cons_emp[1,11])+'-'+ALLTRIM(cons_emp[1,12])+'-'+ALLTRIM(cons_emp[1,14])+' - Fone: '+cons_emp[1,15])
                        ENDIF
                        imprt(mtipo_imp,'C')
                        IF m_set[1,18] = 'J'
                                @ PROW()+8,00 SAY mtraco
                        ELSE
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                ENDIF
                cons_cli:={}
                sr_getconnection():exec("SELECT cod_cli,razao,cgc,insc,cpf,nome,comprado,endereco,bairro,cidade,uf,tel1,cep,rota,tel2,numero,complemento,rota1 FROM saccli WHERE cod_cli = "+sr_cdbvalue(imppedido[1,23]),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                @ PROW()+1,00 SAY STR(cons_cli[1,1],5)+' '+cons_cli[1,2] //CLIENTE
                @ PROW(),0 SAY PADL(IF(ali='orcam',ALLTRIM(m_set[1,24]),ALLTRIM(m_set[1,23]))+' '+STRZERO(mnum_ped,6),77)
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY 'Nome Fantasia: '+cons_cli[1,6]
                IF cons_cli[1,3] <> SPACE(14)
                       @ PROW(),PCOL()+3 SAY 'CNPJ:'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_cli[1,3],'@@R 99.999.999/9999-99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- IE: '+cons_cli[1,4])
                ELSEIF cons_cli[1,5] <> SPACE(11)
                        @ PROW(),PCOL()+3 SAY 'CPF: '+TRANSFORM(cons_cli[1,5],'@@R 999.999.999-99')
                ENDIF
                @ PROW(),0 SAY PADL('Emissao: '+DTOC(imppedido[1,4]),132)
                //@ PROW()+1,00 SAY 'End.: '+ALLTRIM(cons_cli[1,8])+', '+ALLTRIM(cons_cli[1,16])+' - '+ALLTRIM(cons_cli[1,17])+' - '+ALLTRIM(cons_cli[1,9])+' - '+ALLTRIM(cons_cli[1,10])+' - '+ALLTRIM(cons_cli[1,11])+' - Fone:'+ALLTRIM(cons_cli[1,12])+' - CEP.:'+cons_cli[1,13]
                @ PROW()+1,00 SAY 'End.: '+cons_cli[1,8]+', '+cons_cli[1,16]+' - '+cons_cli[1,17]+' - '+cons_cli[1,9]+' - '+cons_cli[1,10]
                @ PROW(),0 SAY PADL('Previsao: '+DTOC(imppedido[1,101]),132)
                @ PROW()+1,00 SAY 'Est.: '+cons_cli[1,11]+' - CEP.:'+cons_cli[1,13]+' - Fone:'+ALLTRIM(cons_cli[1,12])+'  - Fone:'+cons_cli[1,15]
                @ PROW(),0 SAY PADL('Ope.: '+imppedido[1,34],132)
                imprt(mtipo_imp,'N+')
                @ PROW()+1,00 SAY 'Rota: '+RTRIM(cons_cli[1,14])
                IF ! EMPTY(cons_cli[1,18])
                        @ PROW()+1,00 SAY '      '+RTRIM(cons_cli[1,18])
                ENDIF
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                @ PROW(),0 SAY PADL('Cod.: '+imppedido[1,32],132)
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N')
                IF SUBSTR(mvia,1,6) = '2a.via'
                        imprt(mtipo_imp,'C')
                        IF imppedido[1,49] = '*'
                                imprt(mtipo_imp,'N')
                                //imprt(mtipo_imp,'W1')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('PAGO')
                                imprt(mtipo_imp,'N-')
                                //imprt(mtipo_imp,'W0')
                                imprt(mtipo_imp,'C')
                        ELSEIF imppedido[1,49] = 'C'
                                @ PROW()+1,00 SAY 'CANCELADO - MOTIVO: '+imppedido[1,91]
                                @ PROW()+1,00 SAY 'Emissao da 2a.via:'
                                @ PROW(),PCOL()+1 SAY mdata_sis
                                @ PROW(),PCOL()+2 SAY 'Hora:'
                                @ PROW(),PCOL()+1 SAY TIME()
                                @ PROW(),PCOL()+2 SAY 'Operador:'
                                @ PROW(),PCOL()+1 SAY cod_operado
                        ELSEIF imppedido[1,49] = ' ' .OR. imppedido[1,49] = NIL
                                imprt(mtipo_imp,'N')
                                //imprt(mtipo_imp,'W1')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('ABERTO')
                                imprt(mtipo_imp,'N-')
                                //imprt(mtipo_imp,'W0')
                                imprt(mtipo_imp,'C')
                                @ PROW(),25 SAY 'Emissao da 2a.via:'
                                @ PROW(),PCOL()+1 SAY mdata_sis
                                @ PROW(),PCOL()+2 SAY 'Hora:'
                                @ PROW(),PCOL()+1 SAY TIME()
                                @ PROW(),PCOL()+2 SAY 'Operador:'
                                @ PROW(),PCOL()+1 SAY cod_operado
                        ENDIF
                ENDIF
                @ PROW(),0 SAY PADL('SEM VALOR FISCAL',132)
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Codigo'
                @ PROW(),PCOL()+2 SAY 'Descricao                              '
                @ PROW(),PCOL()+2 SAY '        Local'
                @ PROW(),PCOL()+2 SAY ' UN'
                @ PROW(),PCOL()+2 SAY '    Quantd.'
                IF m_set[1,36] = 'S' .AND. ! m_set[1,109] = 'S'
                        @ PROW(),PCOL()+2 SAY '  Vlr. Unit.'
                        //@ PROW(),PCOL()+2 SAY ' Desc.R$'
                        @ PROW(),PCOL()+2 SAY 'Desc.%'
                ENDIF
                @ PROW(),PCOL()+2 SAY ' Vlr. Venda'
                @ PROW(),PCOL()+2 SAY ' Vlr.Total'
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY mtraco
                mdesconto := mtot_volume := y:=0
                FOR y = 1 TO LEN(imppedido)
                        imprt(mtipo_imp,'C')
                        cons_merc:={}
                        sr_getconnection():exec("SELECT cod_barr,ref,cod_fab,fabrica,pr_venda,local FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(imppedido[y,6]),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('Nao foi possivel encontrar este PRODUTO: '+imppedido[y,6]+' no arquivo de mercadoria. (PODE TER SIDO EXCLUIDA)')
                                LOOP
                        ENDIF
                        //ver_cod(VAL(imppedido[y,6]),,,,0,'*')
                        IF m_set[1,147] = 'B' .AND. ! EMPTY(cons_merc[1,1])
                                @ PROW()+1,00 SAY LEFT(cons_merc[1,1],16)
                        ELSE
                                @ PROW()+1,00 SAY imppedido[y,6]
                        ENDIF
                        IF ! EMPTY(imppedido[y,10]) .AND. m_set[1,37] = 'N'
                                @ PROW(),PCOL()+2 SAY LEFT(imppedido[y,7],29)
                                @ PROW(),PCOL()+1 SAY imppedido[y,10]
                                @ PROW(),PCOL()+2 SAY imppedido[y,92]
                        ELSEIF ! EMPTY(imppedido[y,52])         //.AND. ver_serie() <> '141235' .AND. ver_serie() <> '141265'
                                @ PROW(),PCOL()+2 SAY imppedido[y,7]
                                @ PROW(),PCOL()+1 SAY 'Pro'
                        ELSE
                                @ PROW(),PCOL()+2 SAY imppedido[y,7]
                                @ PROW(),PCOL()+2 SAY imppedido[y,92]
                        ENDIF
                        @ PROW(),PCOL()+1 SAY cons_merc[1,6]
                        @ PROW(),PCOL()+3 SAY imppedido[y,8]
                        @ PROW(),PCOL()+1 SAY imppedido[y,14] PICT unidade(imppedido[y,8],'*')
                        IF m_set[1,109] = 'S'
	                        @ PROW(),PCOL()+2 SAY iat(imppedido[y,17],m_set[1,103]) PICT ALLTRIM(m_set[1,98])
        	                mcust_real = iat(imppedido[y,14]) * iat(imppedido[y,17])
	                        mt_pedido := mt_pedido + (imppedido[y,14]*iat(imppedido[y,17]))
                        ELSEIF m_set[1,36] = 'S'
                                IF imppedido[y,52] > 0
                                        @ PROW(),PCOL()+2 SAY imppedido[y,18] PICT ALLTRIM(m_set[1,98])
                                        mdesconto := mperc := 0
                                ELSEIF imppedido[y,17] > imppedido[y,18] .AND. imppedido[y,20] < imppedido[y,17]
                                        @ PROW(),PCOL()+2 SAY imppedido[y,17] PICT ALLTRIM(m_set[1,98])
                                        mdesconto =  iat((imppedido[y,14] * imppedido[y,18]) - (imppedido[y,14] * imppedido[y,17]),2)
                                        mperc := iat((((imppedido[y,14] * imppedido[y,17]) - (imppedido[y,14] * imppedido[y,18])) / (imppedido[y,14] * imppedido[y,17])),3) * 100
                                ELSEIF imppedido[y,20] > imppedido[y,18]
                                        @ PROW(),PCOL()+2 SAY imppedido[y,20] PICT ALLTRIM(m_set[1,98])
                                        mdesconto =  iat((imppedido[y,14] * imppedido[y,18]) - (imppedido[y,14] * imppedido[y,20]),2)
                                        mperc := iat((((imppedido[y,14] * imppedido[y,20]) - (imppedido[y,14] * imppedido[y,18])) / (imppedido[y,14] * imppedido[y,20])),3) * 100
                                ELSE
                                        @ PROW(),PCOL()+2 SAY imppedido[y,18] PICT ALLTRIM(m_set[1,98])
                                        mperc := mdesconto := 0
                                ENDIF
                                //@ PROW(),PCOL()+2 SAY mdesconto PICT '99,999.99'
                                @ PROW(),PCOL()+2 SAY mperc PICT '999.99'
	                        @ PROW(),PCOL()+2 SAY iat(imppedido[y,18],m_set[1,103]) PICT ALLTRIM(m_set[1,98])
        	                mcust_real = iat(imppedido[y,14]) * iat(imppedido[y,18])
	                        mt_pedido := mt_pedido + (imppedido[y,14]*iat(imppedido[y,18]) - mdesconto)
                        ELSE
	                        @ PROW(),PCOL()+2 SAY iat(imppedido[y,17],m_set[1,103]) PICT ALLTRIM(m_set[1,98])
        	                mcust_real = iat(imppedido[y,14]) * iat(imppedido[y,18])
	                        mt_pedido := mt_pedido + (imppedido[y,14]*iat(imppedido[y,18]))
                        ENDIF
                	IF ! EMPTY(imppedido[y,55])
                         	mtot_prazo := iat(mtot_prazo) + iat(mcust_real)
                        	mprazo_aux := iat(imppedido[y,55])
	                ENDIF
                        @ PROW(),PCOL()+2 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])
                        IF (! EMPTY(imppedido[y,15]) .OR. ! EMPTY(imppedido[y,16]))
                                @ PROW(),PCOL()+2 SAY TRANSFORM(imppedido[y,15],'9,999')+' Pac e '+TRANSFORM(imppedido[y,16],'999')+' Pc'
                                mtot_volume := mtot_volume + imppedido[y,15]
                                IF ! EMPTY(imppedido[y,16])
                                        mtot_volume := mtot_volume + 1
                                ENDIF
                        ELSE
                                mtot_volume := mtot_volume + imppedido[y,14]
                        ENDIF
                        IF ! EMPTY(imppedido[y,52]) .AND. (ver_serie() = '141225' .OR. ver_serie() = '141254')
                                DEVPOS(PROW()+1,07);DEVOUT('Promocao De: '+TRANSFORM(cons_merc[1,5],ALLTRIM(m_set[1,98]))+' -  Por: '+TRANSFORM(imppedido[y,18],ALLTRIM(m_set[1,98])))
			ENDIF
                        IF (ver_serie() = '141425' .OR. ver_serie() = '141477') .AND. ! EMPTY(imppedido[y,10])
                                imprt(mtipo_imp,'N')
                                imprt(mtipo_imp,'W1')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT(imppedido[y,10]+' - '+IF(! EMPTY(imppedido[y,58]),ALLTRIM(imppedido[y,58]),''))
                                imprt(mtipo_imp,'N-')
                                imprt(mtipo_imp,'W0')
                                imprt(mtipo_imp,'C')
                        ELSEIF ! EMPTY(imppedido[y,58])
                                imprt(mtipo_imp,'C')
                                @ PROW()+1,00 SAY '       '+imppedido[y,58]
                        ENDIF
                        IF ver_serie() = '141473' .AND. (! EMPTY(cons_merc[1,2]) .OR. ! EMPTY(cons_merc[1,3]))
                                DEVPOS(PROW()+1,10);DEVOUT(IF(! EMPTY(cons_merc[1,3]),'Fab.:'+cons_merc[1,3]+'-'+RTRIM(cons_merc[1,4]),''))
                                DEVPOS(PROW(),PCOL());DEVOUT(IF(! EMPTY(cons_merc[1,2]),' - Ref.: '+cons_merc[1,2],''))
                        ENDIF
                        IF ! EMPTY(imppedido[y,80])
                                @ PROW()+1,00 SAY imppedido[y,80]
                        ENDIF
                        imprt(mtipo_imp,'N')
                        IF ! EMPTY(imppedido[y,81])
                                DEVPOS(PROW()+1,00);DEVOUT(imppedido[y,81])
                        ENDIF
                        IF ! EMPTY(imppedido[y,82])
                                DEVPOS(PROW()+1,00);DEVOUT(imppedido[y,82])
                        ENDIF
                        IF ! EMPTY(imppedido[y,83])
                                DEVPOS(PROW()+1,00);DEVOUT(imppedido[y,83])
                        ENDIF
                        IF ! EMPTY(imppedido[y,84])
                                DEVPOS(PROW()+1,00);DEVOUT(imppedido[y,84])
                        ENDIF
                        imprt(mtipo_imp,'C')
                        mpeso_brut := mpeso_brut + (imppedido[y,11] * imppedido[y,14])
                        mpeso_liq := mpeso_liq + (imppedido[y,12] * imppedido[y,14])
                        mtot_desc := mtot_desc + mdesconto
*                       mtot_quant = mtot_quant + imppedido[y,14]
                        mtot_itens ++
                        IF ASCAN(m_montador,imppedido[y,36])=0
                                AADD(m_montador,imppedido[y,36])
                        ENDIF

                        IF ASCAN(m_montador,imppedido[y,38])=0
                                AADD(m_montador,imppedido[y,38])
                        ENDIF
                NEXT
                imprt(mtipo_imp,'C')
                imprt(mtipo_imp,'N+')
                @ PROW()+(mpagina-PROW()),00 SAY 'Volumes:'
                @ PROW(),PCOL()+1 SAY STRZERO(mtot_volume,6)
                @ PROW(),PCOL()+2 SAY 'Qtd.Itens:'
                @ PROW(),PCOL()+1 SAY STRZERO(mtot_itens,6)
                IF m_set[1,109] = 'S'
                        mtot_desc := imppedido[1,76] * -1
                ENDIF
                @ PROW(),PCOL()+2 SAY 'Sub-total:'
                @ PROW(),PCOL()+1 SAY mt_pedido PICT '99,999,999.99'
                @ PROW(),PCOL()+2 SAY 'Desconto:'
                @ PROW(),PCOL()+1 SAY mtot_desc PICT ALLTRIM(m_set[1,98])
                @ PROW(),PCOL()+2 SAY '    '
                @ PROW(),PCOL()+1 SAY '          '
                imprt(mtipo_imp,'N')
                @ PROW(),55 SAY 'Total Nota:'
                mcust_real = (iat(mt_pedido) + iat(mtot_desc))
                @ PROW(),PCOL()+1 SAY ALLTRIM(TRANSFORM(iat(mcust_real + iat(mtot_ipi,2),2),'99,999,999.99'))
                imprt(mtipo_imp,'N-')
                /*
                IF ver_serie() = '141238' .OR. ver_serie() = '141235' .OR. ver_serie() = '141274' .OR.;
                   ver_serie() = '141237' .OR. ver_serie() = '141488'
                        imprt(mtipo_imp,'C')
                        @ PROW()+1,00 SAY 'Peso Liquido:'
                        @ PROW(),PCOL()+1 SAY mpeso_liq PICT '999,999.9999'
                        @ PROW(),PCOL()+5 SAY 'Peso Bruto:'
                        @ PROW(),PCOL()+1 SAY mpeso_brut PICT '999,999.9999'
                ENDIF
                */
                imprt(mtipo_imp,'C')
                IF ver_serie() = '141473'
                        @ PROW()+1,00 SAY mtraco
                        imprt(mtipo_imp,'N')
                        imprt(mtipo_imp,'W1')
                        imprt(mtipo_imp,'N+')
                        DEVPOS(PROW()+1,17);DEVOUT('(06 MESES DE GARANTIA)')
                        imprt(mtipo_imp,'N-')
                        imprt(mtipo_imp,'W0')
                        imprt(mtipo_imp,'C')
                ENDIF
                @ PROW()+1,00 SAY mtraco
                IF EMPTY(mtipo_pag)
                        IF VAL(SUBSTR(imppedido[1,43],2)) = 0
                        //IF imppedido[1,45] = 'AV'
                                @ PROW()+1,00 SAY 'Pagamento AVISTA'
                                @ PROW(),00 SAY '          AVISTA'
                                IF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('-  Modo de Pagamento: CHEQUE')
                                ELSEIF SUBSTR(imppedido[1,44],1,2) = 'DN'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('-  Modo de Pagamento: DINHEIRO')
                                ENDIF
                        ELSE
                                //IF mcartao = '*' .AND. ver_serie() = '141440'
                                //        @ PROW()+1,00 SAY 'Pagamento APRAZO'
                                //        DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo de Pagamento: CARTAO')
                                IF SUBSTR(imppedido[1,44],1,2) = 'CH' .OR. SUBSTR(imppedido[1,44],1,2) = 'DU' .OR. SUBSTR(imppedido[1,44],1,2) = 'CT'
                                        IF SUBSTR(imppedido[1,44],1,2) = 'CH'
                                                @ PROW()+1,00 SAY 'CHEQUES'
                                        ELSEIF SUBSTR(imppedido[1,44],1,2) = 'DU'
                                                @ PROW()+1,00 SAY 'DUPLICATAS'
                                        ELSE
                                                @ PROW()+1,00 SAY 'CARTAO'
                                        ENDIF
                                        @ PROW(),PCOL()+1 SAY ' APRAZO: '+SUBSTR(imppedido[1,43],1,1)+' + '+SUBSTR(imppedido[1,43],2,2)+' p/ '+IF(! EMPTY(m_dia[1]),STRZERO(m_dia[1],3),'')+IF(! EMPTY(m_dia[2]),' + '+STRZERO(m_dia[2],3),'')+IF(! EMPTY(m_dia[3]),' + '+STRZERO(m_dia[3],3),'')+IF(! EMPTY(m_dia[4]),' + '+STRZERO(m_dia[4],3),'')+IF(! EMPTY(m_dia[5]),' + '+STRZERO(m_dia[5],3),'')+IF(! EMPTY(m_dia[6]),' + '+STRZERO(m_dia[6],3),'')+IF(! EMPTY(m_dia[7]),' + '+STRZERO(m_dia[7],3),'')+;
                                                                              IF(! EMPTY(m_dia[8]),' + '+STRZERO(m_dia[8],3),'')+IF(! EMPTY(m_dia[9]),' + '+STRZERO(m_dia[9],3),'')+IF(! EMPTY(m_dia[10]),' + '+STRZERO(m_dia[10],3),'')+IF(! EMPTY(m_dia[11]),' + '+STRZERO(m_dia[11],3),'')+IF(! EMPTY(m_dia[12]),' + '+STRZERO(m_dia[12],3),'')+IF(! EMPTY(m_dia[13]),' + '+STRZERO(m_dia[13],3),'')+IF(! EMPTY(m_dia[14]),' + '+STRZERO(m_dia[14],3),'')+IF(! EMPTY(m_dia[15]),' + '+STRZERO(m_dia[15],3),'')+' Dias'
                                        IF VAL(SUBSTR(imppedido[1,43],1,1)) = 1
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor da Entrada R$:'+TRANSFORM(mvlr_ent,'99,999.99'))
                                        ENDIF
                                        IF ! EMPTY(mtot_prazo)
                                                DEVPOS(PROW()+1,00);DEVOUT('Venc. :'+DTOC(mdata+mprazo_aux))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM(mtot_prazo,'999,999.99'))
                                        ENDIF
                                        IF VAL(SUBSTR(imppedido[1,43],2)) >= 2
                                                mc_dup := f := 0
                                                FOR mc_dup = 1 TO VAL(SUBSTR(imppedido[1,43],2,2))
                                                        IF f = 0
                                                                DEVPOS(PROW()+1,00);DEVOUT('')
                                                        ENDIF
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.'+ALLTRIM(STR(mc_dup))+':'+DTOC(mdata+m_dia[mc_dup]))
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM((((mcust_real+mtot_ipi)-mvlr_ent-mtot_prazo)/VAL(SUBSTR(imppedido[1,43],2,2))),'999,999.99'))
                                                        f ++
                                                        IF f = 4
                                                                f = 0
                                                        ENDIF
                                                NEXT
                                        ELSE
                                                IF mcust_real-mvlr_ent-mtot_prazo > 0
                                                        @ PROW()+1,00 SAY 'Venc.1:'+DTOC(mdata+m_dia[1])
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM((mcust_real+mtot_ipi)-mvlr_ent-mtot_prazo,'999,999.99'))
                                                ENDIF
                                        ENDIF
                                ELSEIF SUBSTR(imppedido[1,44],1,2) = 'FI'
                                        cons_finan :={}
                                        sr_getconnection():exec("SELECT * FROM sacfin WHERE cod_fin = "+sr_cdbvalue(STRZERO(mcod_fin,3)),,.t.,@cons_finan)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        @ PROW()+1,00 SAY 'Pag. APRAZO'
                                        IF LEN(cons_finan) = 0
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo: FINANCIAMENTO - '+STRZERO(mcod_fin,3)+'-     - Condicao: ')
                                        ELSE
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo: FINANCIAMENTO - '+STRZERO(mcod_fin,3)+'-'+cons_finan[1,2]+' - Condicao: ')
                                        ENDIF
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtipo_fin,'@R 9+99')
                                        IF mvlr_ent > 0
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Entrada R$:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_ent,'99,999.99')
                                        ENDIF
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- Prestacao R$:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvalor_pres,'99,999.99')
                                ENDIF
                        ENDIF
                ELSE
                        cons_caixa := {}
                        sr_getconnection():exec("SELECT * FROM saccaixa WHERE nota = "+sr_cdbvalue('PD'+STRZERO(mnum_ped,6)),,.t.,@cons_caixa)
                        sr_getconnection():exec('COMMIT',,.f.)
                        i := 0
                        FOR i = 1 TO LEN(cons_caixa)
                                IF cons_caixa[i,2] = 'DN'
                                        DEVPOS(PROW()+1,00);DEVOUT('Dinheiro R$..: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                ELSEIF cons_caixa[i,2] = 'CR'
                                        DEVPOS(PROW()+1,00);DEVOUT('Credito R$...: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                ELSEIF cons_caixa[i,2] = 'CH'
                                        DEVPOS(PROW()+1,00);DEVOUT('Cheque R$....: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' Bco: '+cons_caixa[i,6]+' No.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
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
                ENDIF
                imprt(mtipo_imp,'C')
                @ PROW()+2,00 SAY 'OBS.: '+ALLTRIM(imppedido[1,86])+' '+imppedido[1,87]+' '+imppedido[1,88]
                @ PROW()+1,00 SAY '      '+ALLTRIM(imppedido[1,89])+' '+imppedido[1,113]+' '+imppedido[1,114]
                @ PROW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                IF ! EMPTY(RTRIM(m_set[1,25]));@ PROW()+1,00 SAY PADC(RTRIM(m_set[1,25]),80);ENDIF
                IF ! EMPTY(RTRIM(m_set[1,26]));@ PROW()+1,00 SAY PADC(RTRIM(m_set[1,26]),80);ENDIF
                IF ! EMPTY(RTRIM(m_set[1,27]));@ PROW()+1,00 SAY PADC(RTRIM(m_set[1,27]),80);ENDIF
                IF ! EMPTY(RTRIM(m_set[1,28]));@ PROW()+1,00 SAY PADC(RTRIM(m_set[1,28]),80);ENDIF
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY mtraco
                IF m_set[1,22] = 'S'
                        @ PROW()+1,00 SAY PADL('HTI Sistemas - f.:(81)'+mfone_HTI,132)
                ENDIF
                @ PRoW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                DEVPoS(PRoW()+2,00);DEVOUT('                                A GARANTIA:')
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                DEVPoS(PRoW()+1,0);DEVOUT('o fornecedor, fabricante de moveis, em atencao as melhores  regras de qualidade e seguranca, obediente a legislacao vigente  sobre a')
                DEVPoS(PRoW()+1,0);DEVOUT('materia ABNT  e  outros institutos reguladores, com fundamentos  nos  Art. 18, 24, 26 e 50, todos  da Lei No. 8.078/1990  (Codigo de')
                DEVPoS(PRoW()+1,0);DEVOUT('Defesa do Consumidor). 90 dias de garantia sao estabelecidos  em  defeitos de fabricacao  que  nao sejam decorrentes do  mau uso; se')
                DEVPoS(PRoW()+1,0);DEVOUT('comprovado o defeito na fabricacao do produto fornecido, a empresa tera um prazo de 30 dias uteis para cumprir a solicitacao da o.s.')
                DEVPoS(PRoW()+1,0);DEVOUT('(ordem de servico).')
                @ PRoW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                DEVPoS(PRoW()+1,00);DEVOUT('                               POS GARANTIA:')
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                DEVPoS(PRoW()+1,0);DEVOUT('ops! Tive um problema e minha garantia se esgotou, o que fazer? Calma  podemos  te ajudar! A Vila Belo Moveis  Design  prezando pela')
                DEVPoS(PRoW()+1,0);DEVOUT('comodidade, conforto e seguranca de seus clientes, adotou a medida do pos garantia  para  estabelecer  a  voce  um  suporte por data')
                DEVPoS(PRoW()+1,0);DEVOUT('interdeminada para efetuar servicos, trocas, reparos, substituicoes e mudancas  COM CUSTO  de  fabrica. assim acionado  o  nosso pos')
                DEVPoS(PRoW()+1,0);DEVOUT('garantia, a empresa tera 05 dias uteis para um retorno com o orcamento da o.S (ordem de Servico) e aguardando assim a confirmacao do')
                DEVPoS(PRoW()+1,0);DEVOUT('cliente para a execucao da o.S.')
                @ PRoW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                DEVPoS(PRoW()+1,00);DEVOUT('                              A NAO GARANTIA:')
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                DEVPoS(PRoW()+1,0);DEVOUT("Manchas, pintura, aranhoes, trinco, rachoes e etc.  TUDO QUE ENVOLVA ''VIDRO''  NAO  TERA  GARANTIA  EM  HIPOTESE  ALGUMA, pesos que")
                DEVPoS(PRoW()+1,0);DEVOUT('ultrapassem 200kg no assento, mudanca de cor no revestimento do estofado, agua  em excesso, exposicao ao sol  ou  uso  inadequado do')
                DEVPoS(PRoW()+1,0);DEVOUT('produto.')
                @ PRoW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                DEVPoS(PRoW()+1,00);DEVOUT('                               A DESISTENCIA:')
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                DEVPoS(PRoW()+1,0);DEVOUT('o cliente tera um prazo de 7 dias corridos para mudanca ou desistencia do pedido, produtos de fabricacao propria so  sera possível a')
                DEVPoS(PRoW()+1,0);DEVOUT('troca por outro de nossa fabricacao, claramente concordando que em caso de desistencia/Cancelamento, o mesmo tera um custo de 30% do')
                DEVPoS(PRoW()+1,0);DEVOUT('valor aportado no ato da compra, e a empresa tera um prazo de 30 dias corridos para devolucao do  valor restante, que  corresponde a')
                DEVPoS(PRoW()+1,0);DEVOUT('70% do que ja foi pago.')
                @ PRoW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'N+')
                DEVPoS(PRoW()+1,00);DEVOUT('                                 A ENTREGA:')
                imprt(mtipo_imp,'N-')
                imprt(mtipo_imp,'C')
                DEVPoS(PRoW()+1,0);DEVOUT('No ato da compra, o(a) cliente fica ciente e concorda que a empresa tem um  prazo de 30 dias  uteis  para  a  entrega  dos  itens no')
                DEVPoS(PRoW()+1,0);DEVOUT('endereco combinado em nota, em caso de mudanca de endereco, solicitar a fabrica uma avaliacao de acrescimo no  valor  da  logistica.')
                DEVPoS(PRoW()+1,0);DEVOUT('A empresa nao se responsabiliza por danos causados em percurso de responsabilidade do cliente.Nao nos responsabilizamos caso o  item')
                DEVPoS(PRoW()+1,0);DEVOUT('adquirido nao entre em sua residencia ou apto. (elevadores, escadas estreitas  e  percurso de dificil acesso)  Percurso  de  dificil')
                DEVPoS(PRoW()+1,0);DEVOUT('acesso ou andares que passem do 3o., Fica sob responsabilidade do cliente o acerto com o pessoal da logistica a questao  da  montagem')
                DEVPoS(PRoW()+1,0);DEVOUT('e subida ate o destino do seu agrado.')

                DEVPoS(PRoW()+2,0);DEVOUT('    OBSERVACAO: Antes de assinar o carimbo de recebimento e conferencia dos itens, examinar se todos estao de acordo com o combinado')
                DEVPoS(PRoW()+1,0);DEVOUT('                no ato da compra.')
                imprt(mtipo_imp,'N')
                DEVPoS(PRoW()+4,0);DEVOUT(REPLI(CHR(238),30))
                DEVPoS(PRoW(),40);DEVOUT(REPLI(CHR(238),30))
                DEVPoS(PRoW()+1,0);DEVOUT('        CLIENTE        ')
                DEVPoS(PRoW(),40);DEVOUT('         VENDEDOR       ')






                IF mquantd > 1
                        imprt(mtipo_imp,'N',1)
                ENDIF
                SETPRC(00,00)
                EJECT
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'P6')
        NEXT
        f = 0
        IF m_indiv[1,20] <> m_indiv[1,7]
               SET DEVICE To SCREEN;SET PRINT To;SET PRINT oFF
        ENDIF
        IF (m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. SUBSTR(imppedido[1,44],1,2) = 'DU' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via' .AND. ali <> 'orcam') .oR. mdup_2 <> NIL .AND. EMPTY(mtipo_pag) .AND. mtp_email = NIL
                IF m_indiv[1,20] <> m_indiv[1,7]
                        SET DEVICE To PRINT
                        SET PRINT To (m_indiv[1,20])
                ENDIF
                mcust_real := (mcust_real-mvlr_ent)/VAL(SUBSTR(imppedido[1,43],2,2))
                f := 0
                FoR f = 1 To m_indiv[1,22]
                        mensagem('Imprimindo DUPLICATA Copia de No.:'+STRZERo(f,2))
                        imprt(mtipo_imp,'N')
                        IF m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. SUBSTR(imppedido[1,44],1,2) = 'DU'
                                i := 0
                                FoR i = 1 To VAL(SUBSTR(imppedido[1,43],2,2))
                                        mensagem('Imprimindo a DUPLICATA de No.:'+STRZERo(mnum_ped,6)+'/'+STRZERo(i,2))
                                        mdocumento := STRZERo(mnum_ped,6)+'/'+STRZERo(i,2)
                                        IF i = 2
                                                mprazo := STRZERo(m_dia[2],3)
                                        ELSEIF i = 3
                                                mprazo := STRZERo(m_dia[3],3)
                                        ELSEIF i = 4
                                                mprazo := STRZERo(m_dia[4],3)
                                        ELSEIF i = 5
                                                mprazo := STRZERo(m_dia[5],3)
                                        ELSEIF i = 6
                                                mprazo := STRZERo(m_dia[6],3)
                                        ELSEIF i = 7
                                                mprazo := STRZERo(m_dia[7],3)
                                        ELSEIF i = 8
                                                mprazo := STRZERo(m_dia[8],3)
                                        ELSEIF i = 9
                                                mprazo := STRZERo(m_dia[9],3)
                                        ELSEIF i = 10
                                                mprazo := STRZERo(m_dia[10],3)
                                        ELSEIF i = 11
                                                mprazo := STRZERo(m_dia[11],3)
                                        ELSEIF i = 12
                                                mprazo := STRZERo(m_dia[12],3)
                                        ENDIF
		                        cons_cli:={}
					                            //     1     2    3    4   5   6       7       8       9      10   11  12   13  14   15    16     17          18      19      20      21        22         23      24
		                        sr_getconnection():exec("SELECT cod_cli,razao,cgc,insc,cpf,nome,comprado,endereco,bairro,cidade,uf,tel1,cep,rota,tel2,numero,complemento,end_cob,cep_cob,uf_cob,fone_cob,cidade_cob,bairro_cob,nome FRoM saccli WHERE cod_cli = "+sr_cdbvalue(imppedido[1,23]),,.t.,@cons_cli)
                                        sr_getconnection():exec('CoMMIT',,.f.)
                                        dup_sis(STR(imppedido[1,23],5),mnome_cli,ALLTRIM(cons_cli[1,8])+', '+cons_cli[1,16]+'  '+ALLTRIM(cons_cli[1,17]),cons_cli[1,9],cons_cli[1,10],cons_cli[1,11],cons_cli[1,13],cons_cli[1,12],;
                                                cons_cli[1,3],cons_cli[1,4],cons_cli[1,5],cons_cli[1,18],cons_cli[1,23],cons_cli[1,22],cons_cli[1,20],cons_cli[1,19],cons_cli[1,21],;
                                                'DU',mdocumento,mdata,mdata + VAL(mprazo),VAL(imppedido[1,32]),mcust_real,cons_cli[1,24])
                                NEXT
                        ENDIF
                NEXT
                SETPRC(00,00)
        ENDIF
        SET DEVICE To SCREEN;SET PRINT To;SET PRINT oFF
        IF mtp_email # NIL
                MYRUN('DoSPRINTER /SEL2 /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ELSE
                conf_impressao('PD'+STRZERo(mnum_ped,6)+'.REL',,,'T')
                IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'P' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'    //.AND. ! EMPTY(mquantd)
                        SET DEVICE To SCREEN;SET PRINT To;SET PRINT oFF
                        mensagem('Imprimindo as TICKET EMBALAGEM....')
                        imp_emba(mnum_ped)
                ENDIF
        ENDIF
ENDIF
RETURN NIL
**************************** F I M *************************************