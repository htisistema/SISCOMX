MEMVAR getlist,mdata_sis,cod_operado,memp_resa,mend_firm,mcid_firm,mfone_firm,;
       minsc_firm,mcgc_firm
***************************************************
* PROGRAMA DE FUNCOES IMPRESSAO DE TIPOS DE PEDIDOS
***************************************************
* IMPRESSAO EM BOLETO PROCOMP
*****************************
FUNCTION procomp()
*****************
RETURN NIL
/*
LOCAL mobs_caixa,opcao,mop,mtot_volume:=0,mtraco,i,mtipo_fin,mpoint,mtot_itens,;
      mt_pedido,mtot_desc,mtot_quant,mdesconto,mcust_real,f,;
      mvlr1 := 0,mvlr2 := 0,mvlr3 := 0,mvlr4 := 0,mvlr5 := 0,mvlr6 := 0,mvlr7 := 0,;
      mvlr8 := 0,mvlr9 := 0,mvlr10 := 0,mvlr11 := 0,mvlr12 := 0,mdocumento,mdt_aux,;
      mdif,mextenso,lin,mlinha,mlin

MEMVAR mquantd,ali,mnum_ped,mperc,mvia,mtipo_imp,mdata,m_dia,mnome,mcod_cli,;
       mcgc,mcpf,mobs1,mobs2,mobs3,mobs4,mcond_vezes,mcondicao,mprazo,mvlr_ent,;
       mvalor_ent,mcheque,mdinheiro,mdup,mcartao,mfin,mtot_limite,mtp_venda,;
       mdia1,mdia2,mdia3,mdia4,mdia5,mdia6,mdia7,mdia8,mdia9,mdia10,mdia11,mdia12,;
       mcod_vend,mcod_fin,mvalor_pres

mtraco := REPLI('=',47)
i := 0
IF ! EMPTY(m_indiv[1,8])
        mquantd ++
ENDIF
mtipo_fin := (ali)->pcond_veze
mop := 'S'
mpoint := RECNO()
IF EMPTY(mquantd) .OR. mop = 'N'
        mtot_itens := 0
        mt_pedido := 0
        mtot_desc := 0
        mtot_quant := 0
        mdesconto := 0
        WHILE STRZERO(mnum_ped,6) = (ali)->pnum_ped .AND. ! EOF()
                IF m_set[1,36] = 'S'
                        IF (ali)->ppromocao > 0
                                mdesconto := 0
                                mperc := 0
                        ELSEIF (ali)->ppre_venda > (ali)->pvlr_fat      //.AND. (ali)->ppre_dig <= (ali)->ppre_venda
                                mdesconto =  ((ali)->pquantd * (ali)->pvlr_fat) - ((ali)->pquantd * (ali)->ppre_venda)
                                mperc := iat(((((ali)->pquantd * (ali)->ppre_venda) - ((ali)->pquantd * (ali)->pvlr_fat)) / ((ali)->pquantd * (ali)->ppre_venda)),3) * 100
                        ELSE
                                mperc := (ali)->pdesc
                        ENDIF
                ELSE
                        mdesconto := 0
                ENDIF
                mcust_real = (ali)->pquantd * (ali)->pvlr_fat
                mtot_desc := mtot_desc + mdesconto
                mt_pedido := mt_pedido + ((ali)->pquantd*(ali)->pvlr_fat - mdesconto)
                mtot_quant = mtot_quant + (ali)->pquantd
                mtot_itens ++
                SKIP
        ENDDO
        mcust_real = mt_pedido + mtot_desc
        RETURN NIL
ENDIF
IF mop = 'S'    //.OR. SUBSTR(mvia,1,1) = '2'
        IF m_set[1,86] = 'T' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via'         //.AND. ! EMPTY(mquantd)
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY ' '
                @ PROW(),00 SAY 'Emissao:'
                @ PROW(),10 SAY (ali)->pdat_ped
                @ PROW(),21 SAY (ali)->phora
                @ PROW(),30 SAY 'Cod:'
                @ PROW(),35 SAY (ali)->pcod_vend
                IF m_set[1,81] = 'S'
                        @ PROW(),39 SAY (ali)->pvendedor
                ENDIF
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                @ PROW(),00 SAY STRZERO(mnum_ped,6)
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT('Valor R$: '+TRANSFORM(mt_pedido,'999,999.99'))
                imprt(mtipo_imp,'C')
                @ PROW()+4,00 SAY '--------------------------- Corte aqui --------------------'
                imprt(mtipo_imp,'N',2)
        ENDIF
        FOR i = 1 TO mquantd
                IF i = mquantd .AND. ! EMPTY(m_indiv[1,8])
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        opcao := op_simnao('S','Imprimir na 2¦ porta de impressao:')
                        IF opcao = 'N'
                                EXIT
                        ENDIF
                        SET DEVICE TO PRINT
                        SET PRINT TO (m_indiv[1,8])
                ENDIF
                mtot_itens := 0
                mt_pedido = 0
                mtot_desc = 0
                mtot_quant = 0
                mdesconto := 0
                imprt(mtipo_imp,'C')
                IF m_set[1,22] = 'S'
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(memp_resa),47))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mend_firm),47))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(mcid_firm),47))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM('Fone: '+mfone_firm),54))
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                @ PROW()+1,00 SAY 'ORCAMENTO No.:'
                @ PROW(),15 SAY STRZERO(mnum_ped,6)
                @ PROW(),PCOL()+2 SAY mvia+'  T:'+ALLTRIM((ali)->ptermina)
                IF SUBSTR(mvia,1,6) = '2a.via'
                        IF (ali)->ppag = '*'
                                @ PROW()+1,00 SAY 'Situacao: PAGO'
                        ELSEIF (ali)->ppag = 'C'
                                @ PROW()+1,00 SAY 'Situacao: CANCELADO - MOTIVO: '+(ali)->pmotivo
                        ELSE
                                @ PROW()+1,00 SAY 'Situacao: ABERTO'
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao da 2a.via:'
                        @ PROW(),PCOL()+1 SAY mdata_sis
                        @ PROW(),PCOL()+2 SAY 'Hr:'
                        @ PROW(),PCOL()+1 SAY TIME()
                        @ PROW(),PCOL()+2 SAY 'Op.:'
                        @ PROW(),PCOL()+1 SAY cod_operado
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                IF ver_serie() <> '141237'
                        @ PROW()+1,00 SAY PADC('*** SEM VALOR FISCAL ***',47)
                        @ PROW(),00 SAY PADC('*** SEM VALOR FISCAL ***',47)
                ENDIF
                IF mcod_cli > 0
                        @ PROW()+1,00 SAY 'Cliente:'
                        @ PROW()+1,00 SAY cli->cod_cli
                        @ PROW(),PCOL()+2 SAY cli->razao
                        IF m_set[1,40] = 'S'
                                @ PROW()+1,00 SAY 'Fantasia:'
                                @ PROW()+1,PCOL()+1 SAY cli->nome
                        ENDIF
                        IF m_set[1,39] = 'S'
                                @ PROW()+1,00 SAY 'End.: '+cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),'')
                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cli->bairro)
                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cli->cidade)+'-'+cli->uf
                                @ PROW()+1,00 SAY 'Fone: '+cli->tel1
                                IF mcgc <> SPACE(14)
                                        @ PROW()+1,00 SAY 'CGC:'
                                        DEVPOS(PROW(),PCOL());DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('-Insc.:'+cli->insc)
                                ELSEIF mcpf <> SPACE(11)
                                        @ PROW()+1,00 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                                ENDIF
                        ENDIF
                        IF ! EMPTY((ali)->pplaca) .OR. ! EMPTY((ali)->pcarro)
                                @ PROW()+1,00 SAY 'Placa do Veiculo: '+(ali)->pplaca+'  Marca: '+(ali)->pcarro
                                @ PROW()+1,00 SAY 'Modelo..........: '+(ali)->pmodelo+'  KM: '+(ali)->pkm
                        ENDIF
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                ELSEIF mnome <> SPACE(30)
                        @ PROW()+1,00 SAY 'Cliente:'
                        @ PROW(),09 SAY mnome
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                ELSE
                        @ PROW()+1,00 SAY 'Emissao:'
                ENDIF
                @ PROW(),08 SAY (ali)->pdat_ped
                @ PROW(),PCOL()+1 SAY SUBSTR((ali)->phora,1,5)
                @ PROW(),PCOL()+1 SAY 'Op:'
                @ PROW(),PCOL() SAY (ali)->pcod_oper
                @ PROW(),PCOL()+1 SAY 'Cod:'
                @ PROW(),PCOL() SAY (ali)->pcod_vend
                @ PROW()+1,00 SAY mtraco

                @ PROW()+1,00 SAY 'Cod.'
                @ PROW(),15 SAY 'Descricao'
                @ PROW()+1,00 SAY 'UN'
                @ PROW(),04 SAY 'Quantd.'
                @ PROW(),15 SAY ' Vlr. Venda'
                @ PROW(),35 SAY ' Vlr. Total'
                @ PROW()+1,00 SAY mtraco
                IF ! EMPTY((ali)->plocal)
                        @ PROW()+1,00 SAY 'localizacao: '+(ali)->plocal
                ENDIF
                mdesconto := 0
                WHILE STRZERO(mnum_ped,6) = (ali)->pnum_ped .AND. ! EOF()
                        @ PROW()+1,00 SAY (ali)->pcod_merc
                        IF ! EMPTY((ali)->penvelope) .AND. ver_serie() <> '141322'
                                @ PROW(),06 SAY LEFT((ali)->pmerc,27)
                                @ PROW(),PCOL() SAY ' * '+(ali)->penvelope
                        ELSE
                                @ PROW(),06 SAY (ali)->pmerc
                        ENDIF
                        mdesconto := 0
                        @ PROW()+1,00 SAY (ali)->punidade
                        @ PROW(),04 SAY (ali)->pquantd PICT '99,999.99'
                        @ PROW(),15 SAY (ali)->pvlr_fat PICT ALLTRIM(m_set[1,98])
                        mcust_real = (ali)->pquantd * (ali)->pvlr_fat
                        @ PROW(),35 SAY iat(mcust_real,2) PICT ALLTRIM(m_set[1,98])
                        mtot_desc := mtot_desc + mdesconto
                        mt_pedido := mt_pedido + ((ali)->pquantd*(ali)->pvlr_fat - mdesconto)
                        mtot_itens ++
                        IF ! EMPTY((ali)->pgramatura)
                                DEVPOS(PROW()+1,00);DEVOUT('Volume(s): '+TRANSFORM((ali)->pquantd * (ali)->pgramatura,'99,999.99'))
                                mtot_quant := mtot_quant + ((ali)->pquantd * (ali)->pgramatura)
                        ELSE
                                mtot_quant := mtot_quant + (ali)->pquantd
                        ENDIF
                        IF ! EMPTY((ali)->chassis)
                                @ PROW()+1,00 SAY (ali)->chassis
                        ENDIF
                        IF m_set[1,9] = 'P'
                                IF ! EMPTY((ali)->pobs1)
                                        DEVPOS(PROW()+1,00);DEVOUT((ali)->pobs1)
                                ENDIF
                                IF ! EMPTY((ali)->pobs2)
                                        DEVPOS(PROW()+1,00);DEVOUT((ali)->pobs2)
                                ENDIF
                                IF ! EMPTY((ali)->pobs3)
                                        DEVPOS(PROW()+1,00);DEVOUT((ali)->pobs3)
                                ENDIF
                                IF ! EMPTY((ali)->pobs4)
                                        DEVPOS(PROW()+1,00);DEVOUT((ali)->pobs4)
                                ENDIF
                        ENDIF
                        SKIP
                        IF STRZERO(mnum_ped,6) = (ali)->pnum_ped .AND. ! EOF()
                                IF ! EMPTY((ali)->plocal)
                                        @ PROW()+1,00 SAY 'localizacao: '+(ali)->plocal
                                        @ PROW(),PCOL()+1 SAY REPLI('-',44)
                                ENDIF
                        ENDIF
                ENDDO
                IF m_set[1,9] <> 'P' .AND. ! EMPTY(mobs1)
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'OBS.: '+mobs1+' '+mobs2
                        @ PROW()+1,00 SAY '      '+mobs3+' '+mobs4
                ENDIF
                mobs_caixa := mobs1+' '+mobs2
                @ PROW()+1,00 SAY mtraco
                IF m_set[1,110] = 'S'
                        @ PROW()+1,00 SAY 'Saldo Devedor R$:'
                        @ PROW(),PCOL()+2 SAY TRANSFORM(mtot_limite,'999,999.99')
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                @ PROW()+1,00 SAY 'Total Itens:'
                @ PROW(),PCOL()+1 SAY TRANSFORM(mtot_itens,'999999')
                @ PROW(),PCOL()+2 SAY 'Vol.Total:'
                @ PROW(),PCOL()+1 SAY TRANSFORM(mtot_quant,'999999')
                @ PROW()+1,00 SAY 'Sub-total....:'
                @ PROW(),PCOL()+1 SAY mt_pedido PICT '99,999,999.99'
                @ PROW()+1,00 SAY 'Desconto.....:'
                @ PROW(),PCOL()+1 SAY mtot_desc PICT '999,999.99'
                @ PROW()+1,00 SAY 'TOTAL DA NOTA:'
                mcust_real = mt_pedido + mtot_desc
                @ PROW(),PCOL()+1 SAY iat(mcust_real,2) PICT '99,999,999.99'
                @ PROW()+1,00 SAY mtraco
                IF mtp_venda = 'AV' .AND. ver_serie() <> '141279'
                        @ PROW()+1,00 SAY 'Pagamento AVISTA'
                        IF mcheque = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: CHEQUE')
                        ELSEIF mdinheiro = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: DINHEIRO')
                        ENDIF
                ELSEIF ver_serie() <> '141279'
                        IF mdup = '*'
                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 2
                                        @ PROW()+1,00 SAY 'Pag.APRAZO DUPLICATA: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+STRZERO(m_dia[1],3)+'+'+STRZERO(m_dia[2],3)+' Dias'
                                        IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor da Entrada R$:'+TRANSFORM(mvlr_ent,'99,999.99'))
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.1o.:'+DTOC(mdata+m_dia[1]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.2o.:'+DTOC(mdata+m_dia[2]))
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 3
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.3o.:'+DTOC(mdata+m_dia[3]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 4
                                                DEVPOS(PROW()+1,00);DEVOUT('Venc.4o.:'+DTOC(mdata+m_dia[4]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 5
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.5o.:'+DTOC(mdata+m_dia[5]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 6
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.6o.:'+DTOC(mdata+m_dia[6]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 7
                                                DEVPOS(PROW()+1,00);DEVOUT('Venc.7o.:'+DTOC(mdata+m_dia[7]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 8
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.8o.:'+DTOC(mdata+m_dia[8]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 9
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.9o.:'+DTOC(mdata+m_dia[9]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 10
                                                DEVPOS(PROW()+1,00);DEVOUT('Venc.10o:'+DTOC(mdata+m_dia[10]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 11
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.11o:'+DTOC(mdata+m_dia[11]))
                                        ENDIF
                                        IF VAL(SUBSTR(mcond_veze,2,2)) >= 12
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Venc.12o:'+DTOC(mdata+m_dia[12]))
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT('Modo de Pagamento: DUPLICATA DE No.')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                                        @ PROW()+1,00 SAY 'Cond.Pag.:'+SUBSTR(mcondicao,1,1)+' + '+SUBSTR(mcondicao,2,2)+' Prazo:'+mprazo+' Dias'
                                        IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor da Entrada R$:'+TRANSFORM(mvlr_ent,'99,999.99'))
                                        ENDIF
                                        @ PROW()+1,00 SAY 'Vencimento: '
                                        @ PROW(),PCOL()+1 SAY mdata+VAL(mprazo)
                                ENDIF
                        ELSEIF mcheque = '*'
                                DEVPOS(PROW()+1,00);DEVOUT('Modo Pag.: CHEQUE')
                                @ PROW()+1,00 SAY 'Pag. APRAZO  -  Cond. pag.: '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' Prazo: '+mprazo+' Dias'
                                @ PROW()+1,00 SAY 'Vencimento: '
                                @ PROW(),PCOL()+1 SAY mdata+VAL(mprazo)
                        ELSEIF mcartao = '*'
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo pag.: CARTAO')
                                @ PROW()+1,00 SAY 'Pagamento APRAZO'
                        ELSEIF mfin = '*'
                                        @ PROW()+1,00 SAY 'Pag. APRAZO'
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Modo: FINANCIAMENTO - '+STRZERO(mcod_fin,3)+'-'+fin->desc_fin)
                                        DEVPOS(PROW()+1,00);DEVOUT('Condicao: '+TRANSFORM(mtipo_fin,'@R 9+99'))
                                        IF mvalor_ent > 0
                                                DEVPOS(PROW()+1,00);DEVOUT('- Entrada R$:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvalor_ent,'99,999.99')
                                        ENDIF
                                        i := 0
                                        FOR i = 1 TO 12  //VAL(SUBSTR(mtipo_fin,2))
                                                mdt_aux := mdata + (30*i)
                                                IF i <= VAL(SUBSTR(mtipo_fin,2))
                                                        DEVPOS(PROW()+1,00);DEVOUT('Venc.'+STRZERO(i,2)+':'+DTOC(mdt_aux))
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- R$:'+TRANSFORM(mvalor_pres,'999,999.99'))
                                                ENDIF
                                        NEXT
                        ENDIF
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,25],47)),47)
                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,26],47)),47)
                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,27],47)),47)
                @ PROW()+1,00 SAY PADC(RTRIM(LEFT(m_set[1,28],47)),47)
                @ PROW()+1,00 SAY mtraco
                IF mquantd > 1
                        DEVPOS(PROW()+3,00);DEVOUT(CHR(18))
                ENDIF
                SETPRC(00,00)
                GO mpoint
        NEXT
ENDIF
IF m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*' .AND. ! EMPTY(mquantd) .AND. SUBSTR(mvia,1,6) <> '2a.via'
        f=0
        mvlr1 := 0
        mvlr2 := 0
        mvlr3 := 0
        mvlr4 := 0
        mvlr5 := 0
        mvlr6 := 0
        mvlr7 := 0
        mvlr8 := 0
        mvlr9 := 0
        mvlr10 := 0
        mvlr11 := 0
        mvlr12 := 0
        mdif := 0
        IF VAL(SUBSTR(mcond_veze,2,2)) >= 2
                mvlr1 := (mcust_real-mvlr_ent)/VAL(SUBSTR(mcond_veze,2,2))
                mvlr2 := (mcust_real-mvlr_ent)/VAL(SUBSTR(mcond_veze,2,2))
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 3
                        mvlr3 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 4
                        mvlr4 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 5
                        mvlr5 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 6
                        mvlr6 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 7
                        mvlr7 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 8
                        mvlr8 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 9
                        mvlr9 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 10
                        mvlr10 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 11
                        mvlr11 := mvlr1
                ENDIF
                IF VAL(SUBSTR(mcond_veze,2,2)) >= 12
                        mvlr12 := mvlr1
                ENDIF
        ELSE
                mvlr1 := (mcust_real-mvlr_ent)
        ENDIF
        FOR f = 1 TO m_indiv[1,22]
                mdif := (mcust_real-mvlr_ent)- (iat(mvlr1,2)+iat(mvlr2,2)+;
                        iat(mvlr3,2)+iat(mvlr4,2)+iat(mvlr5,2)+iat(mvlr6,2)+;
                        iat(mvlr7,2)+iat(mvlr8,2)+iat(mvlr9,2)+iat(mvlr10,2)+;
                        iat(mvlr11,2)+iat(mvlr12,2))
                mvlr1 := mvlr1 + mdif
                i := 0
                FOR i = 1 TO VAL(SUBSTR(mcond_veze,2,2))
                        IF i = 1
                                mcust_real := mvlr1
                                mdocumento := STRZERO(mnum_ped,6)
                        ELSEIF i = 2
                                mcust_real := mvlr2
                                mprazo := STRZERO(mdia2,2)
                                mdocumento := STRZERO(mnum_ped,6)+'A'
                        ELSEIF i = 3
                                mcust_real := mvlr3
                                mprazo := STRZERO(mdia3,2)
                                mdocumento := STRZERO(mnum_ped,6)+'B'
                        ELSEIF i = 4
                                mcust_real := mvlr4
                                mprazo := STRZERO(mdia4,2)
                                mdocumento := STRZERO(mnum_ped,6)+'C'
                        ELSEIF i = 5
                                mcust_real := mvlr5
                                mprazo := STRZERO(mdia5,2)
                                mdocumento := STRZERO(mnum_ped,6)+'D'
                        ELSEIF i = 6
                                mcust_real := mvlr6
                                mprazo := STRZERO(mdia6,2)
                                mdocumento := STRZERO(mnum_ped,6)+'E'
                        ELSEIF i = 7
                                mcust_real := mvlr7
                                mprazo := STRZERO(mdia7,2)
                                mdocumento := STRZERO(mnum_ped,6)+'F'
                        ELSEIF i = 8
                                mcust_real := mvlr8
                                mprazo := STRZERO(mdia8,2)
                                mdocumento := STRZERO(mnum_ped,6)+'G'
                        ELSEIF i = 9
                                mcust_real := mvlr9
                                mprazo := STRZERO(mdia9,2)
                                mdocumento := STRZERO(mnum_ped,6)+'H'
                        ELSEIF i = 10
                                mcust_real := mvlr10
                                mprazo := STRZERO(mdia10,2)
                                mdocumento := STRZERO(mnum_ped,6)+'I'
                        ELSEIF i = 11
                                mcust_real := mvlr11
                                mprazo := STRZERO(mdia11,2)
                                mdocumento := STRZERO(mnum_ped,6)+'J'
                        ELSEIF i = 12
                                mcust_real := mvlr12
                                mprazo := STRZERO(mdia12,2)
                                mdocumento := STRZERO(mnum_ped,6)+'L'
                        ENDIF
                        @ PROW()+2,00 SAY '---------------------- Corte aqui --------------------'
                        @ PROW()+2,00 SAY ' '
                        IF m_set[1,22] = 'S'
                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                                DEVPOS(PROW(),00);DEVOUT(mend_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Insc. '+minsc_firm+' - C.G.C.: '+mcgc_firm)
                                @ PROW()+1,00 SAY mtraco
                                @ PROW()+1,00 SAY ' '
                        ENDIF
                        IF mcod_cli > 0
                                @ PROW(),00 SAY 'Cliente:'
                                @ PROW()+1,00 SAY cli->cod_cli
                                @ PROW(),PCOL()+1 SAY cli->razao
                                @ PROW()+1,00 SAY 'End.: '+cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),'')
                                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cli->bairro)
                                @ PROW()+1,00 SAY 'Cidade: '+RTRIM(cli->cidade)+'-'+cli->uf+'- CEP:'+cli->cep
                                @ PROW()+1,00 SAY 'Fone: '+cli->tel1
                                IF mcgc <> SPACE(14)
                                        @ PROW()+1,00 SAY 'CGC:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cli->insc)
                                ELSEIF mcpf <> SPACE(11)
                                        @ PROW()+1,00 SAY 'CPF:'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                                ENDIF
                                @ PROW()+1,00 SAY mtraco
                        ELSEIF mnome <> SPACE(30)
                                @ PROW(),00 SAY 'Cliente:'
                                @ PROW(),PCOL()+1 SAY mnome
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                        @ PROW()+1,00 SAY CHR(18)
                        @ PROW(),00 SAY 'DUPLICATA No.:'
                        @ PROW(),15 SAY mdocumento
                        @ PROW()+1,00 SAY CHR(15)
                        @ PROW(),00 SAY 'Emissao:'
                        @ PROW(),PCOL()+1 SAY mdata
                        @ PROW(),PCOL()+2 SAY 'Venc.:'
                        @ PROW(),PCOL()+1 SAY mdata + VAL(mprazo)
                        @ PROW(),PCOL()+2 SAY 'Cod:'
                        @ PROW(),PCOL()+1 SAY mcod_vend
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Fatura No.:               '
                        @ PROW(),30 SAY 'No.Duplicata:'
                        @ PROW()+1,00 SAY mtraco
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(iat(mcust_real,2),'99,999,999.99'))+')',47))
                        mextenso:= '('+RTRIM(extenso(iat(mcust_real,2),.T.,'real','reais'))+')'
                        mlinha := MLCOUNT(mextenso,47)
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,47,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),47))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,129]+', ou a sua ordem na praca e vencimento indicados.'
                        mlinha := 0
                        mlinha := MLCOUNT(mextenso,47)
                        lin := 0
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,47,lin,,10)
                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                        NEXT
                        @ PROW()+1,00 SAY mtraco
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Emitente',54))
                        DEVPOS(PROW()+2,00);DEVOUT(PADC('Em         /        /        ',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',54))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Sacado',54))
                        @ PROW()+1,00 SAY mtraco
                        IF ! EMPTY(m_set[1,52])
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,52]),47)
                                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,53]),47)
                                @ PROW()+1,00 SAY mtraco
                        ENDIF
                NEXT
        NEXT
ENDIF
IF m_set[1,86] = 'S' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via';     //.AND. ! EMPTY(mquantd)
   .AND. ! EMPTY(mt_pedido)
        imprt(mtipo_imp,'C')
        @ PROW()+2,00 SAY '------------------ Corte aqui ----------------'
        @ PROW()+1,00 SAY ' '
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'C A I X A'
        @ PROW(),00 SAY PADL(mvia,47)
        @ PROW()+1,00 SAY ' '
        IF mcod_cli > 0
                @ PROW(),00 SAY 'Cliente:'
                @ PROW()+1,00 SAY cli->cod_cli
                @ PROW(),PCOL()+1 SAY cli->razao
                IF ! EMPTY((ali)->pplaca) .OR. ! EMPTY((ali)->pcarro)
                        @ PROW()+1,00 SAY 'Placa do Veiculo: '+(ali)->pplaca+'  Tipo Veiculo: '+(ali)->pcarro
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
        ELSEIF mnome <> SPACE(30)
                @ PROW(),00 SAY 'Cliente:'
                @ PROW(),09 SAY mnome
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
        ELSE
                @ PROW(),00 SAY 'Emissao:'
        ENDIF
        @ PROW(),PCOL()+1 SAY (ali)->pdat_ped
        @ PROW(),PCOL()+2 SAY (ali)->phora
        @ PROW(),PCOL()+2 SAY 'Cod.:'
        @ PROW(),PCOL()+1 SAY (ali)->pcod_vend
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'Orcamento No.: '+STRZERO(mnum_ped,6)
        DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
        IF ver_serie() = '141253'
                DEVPOS(PROW()+1,00);DEVOUT('OBS.:'+mobs_caixa)
        ENDIF
        IF mtp_venda = 'AV'
                @ PROW()+1,00 SAY 'Pagamento AVISTA'
                IF mcheque = '*'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                ELSEIF mdinheiro = '*'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                ENDIF
        ELSEIF mtp_venda = 'AP'
                @ PROW()+1,00 SAY 'Pag. APRAZO - '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+mprazo+' Dias'
                @ PROW()+1,00 SAY 'Data do Vencimento: '
                @ PROW(),20 SAY mdata+VAL(mprazo)
                IF mdup = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: DUPLICATA ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                ELSEIF mcheque = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: CHEQUE')
                ELSEIF mcartao = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: CARTAO')
                ENDIF
        ENDIF
        @ PROW()+1,00 SAY mtraco
ENDIF
IF m_set[1,87] = 'S' .AND. ali <> 'orcam' .AND. SUBSTR(mvia,1,6) <> '2a.via';    //.AND. ! EMPTY(mquantd)
   .AND. ! EMPTY(mt_pedido)
        @ PROW()+2,00 SAY '----------------- Corte aqui ---------------'
        @ PROW()+1,00 SAY ' '
        imprt(mtipo_imp,'C')
        @ PROW()+1,00 SAY mtraco
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY 'E M B A L A G E M'
        imprt(mtipo_imp,'C')
        @ PROW(),00 SAY PADL(mvia,47)
        @ PROW()+1,00 SAY ' '
        IF mcod_cli > 0
                @ PROW(),00 SAY 'Cliente:'
                @ PROW()+1,00 SAY cli->cod_cli
                @ PROW(),PCOL()+1 SAY cli->razao
                IF ! EMPTY((ali)->pplaca) .OR. ! EMPTY((ali)->pcarro)
                        @ PROW()+1,00 SAY 'Placa do Veiculo: '+(ali)->pplaca+'  Tipo Veiculo: '+(ali)->pcarro
                ENDIF
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
        ELSEIF mnome <> SPACE(30)
                @ PROW(),00 SAY 'Cliente:'
                @ PROW(),09 SAY mnome
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
        ELSE
                @ PROW(),00 SAY 'Emissao:'
        ENDIF
        @ PROW(),10 SAY (ali)->pdat_ped
        @ PROW(),21 SAY (ali)->phora
        @ PROW(),30 SAY 'Cod.:'
        @ PROW(),35 SAY (ali)->pcod_vend
        IF m_set[1,81] = 'S'
                @ PROW(),39 SAY (ali)->pvendedor
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        @ PROW(),00 SAY mtraco
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY 'Orcamento No.: '+STRZERO(mnum_ped,6)
        DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mt_pedido + mtot_desc,'99,999,999.99'))+')')
        IF ver_serie() = '141253'
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('OBS.:'+mobs_caixa)
        ENDIF
        imprt(mtipo_imp,'N')
        IF mtp_venda = 'AV'
                @ PROW()+1,00 SAY 'Pagamento AVISTA'
                IF mcheque = '*'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em CHEQUE')
                ELSEIF mdinheiro = '*'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' em DINHEIRO')
                ENDIF
        ELSE
                @ PROW()+1,00 SAY 'Pag. APRAZO - '+SUBSTR(mcondicao,1,1)+'+'+SUBSTR(mcondicao,2,2)+' p/'+mprazo+' Dias'
                @ PROW()+1,00 SAY 'Data do Vencimento: '
                @ PROW(),20 SAY mdata+VAL(mprazo)
                IF mdup = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: DUPLICATA ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
                ELSEIF mcheque = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: CHEQUE')
                ELSEIF mcartao = '*'
                        DEVPOS(PROW()+1,00);DEVOUT('Modo Pag: CARTAO')
                ENDIF
        ENDIF
        imprt(mtipo_imp,'C')
        @ PROW()+1,00 SAY mtraco
ENDIF
IF mop = 'S' .OR.  (m_set[1,45] = 'S' .AND. m_set[1,47] = 'V' .AND. mdup = '*')
        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
ENDIF
SETPRC(00,00)
SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
RETURN NIL
**************************** F I M ****************************************
*/
