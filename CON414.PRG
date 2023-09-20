MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON414.PRG: Relatorio -> Duplicatas PAGAS
***  CONTAS A PAGAR
*********************************************************
FUNCTION con414
***************
LOCAL MPRG:='CON414',;
      tela,t_ini,t_fim,tp_mes,td_mes,u_dat,pag,vencer,;
      vencidas,t_vencer,t_vencidas,l_mes,tot,tot_g,tot_din,tot_gin,mquantd,;
      mtit,mtipo,opcao,mtipo_doc,mt_dia,mdia,mtipo_rel,mt_pago:=0,mobs_doc:= ' ',;
      mtipo_con,mcliente,mtip_for,mcod_aux,mbanco:=SPACE(3),mbanco_pg:='   ',;
      mtp_pg:=' ',mmov_cx,mtot_juros:=0,mtip_data:='P',m_dupp := {},i:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        bank,mcod_for,mtipo_conta,mcodemp:=SPACE(3),mcodigo_ban := 0,mcons_banco:={}

IF ! ver_nivel(mprg,'CONTA APAGAR (RELATORIO DOCUMENTO PAGOS)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------------
******************
SELE('forn');ORDSETFOCUS(1)
******************
op_tela(10,10,23,90," Documentos Pagos (CONTAS A PAGAR)")
WHILE .T.
        limpa(10,10,23,90)
        DEVPOS(00,00);DEVOUT("Cod.Empresa.......:")
        DEVPOS(01,00);DEVOUT("Fornecedor........:")
        DEVPOS(02,00);DEVOUT("Data Inicial......:")
        DEVPOS(03,00);DEVOUT("Data Final........:")
        DEVPOS(04,00);DEVOUT("Tipo Documento....:")
        DEVPOS(05,00);DEVOUT('Tipo Conta........:')
        DEVPOS(06,00);DEVOUT("Resumo/Geral......:")
        DEVPOS(07,00);DEVOUT("Imprimir OBS[S/N].:")
        DEVPOS(08,00);DEVOUT("No.do Banco.......:")
        DEVPOS(09,00);DEVOUT("Banco do Pagamento:")
        DEVPOS(10,00);DEVOUT("Tipo de Pagamento.:")
        DEVPOS(11,00);DEVOUT("Local de Pagamento:")
        DEVPOS(12,00);DEVOUT("Banco do PAGADOR..:")
        DEVPOS(13,00);DEVOUT("Tipo de Pesquisa Data [P]agamento ou [O]peracao:")
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mtip_data := 'P'
        mbanco := SPACE(3)
        mtipo_conta := SPACE(4)
        mtipo_rel := 'G'
        mtipo_doc := SPACE(2)
        bank="   "
        mcod_for := mcodigo_ban := 0
        t_ini := t_fim := CTOD("  /  /  ")
        mobs_doc := 'S'
        mtit := "DOCUMENTOS PAGOS (Contas a Pagar)"
        @ 00,20 GET mcodemp PICT '999' VALID ver_emp(mcodemp,00,24,,'*') WHEN mmult_emp = 'S'
        @ 01,20 GET mcod_for PICT '9999' VALID v_fornece(mcod_for,01,25)
        @ 02,20 GET t_ini
        @ 03,20 GET t_fim
        @ 04,20 GET mtipo_doc PICT '@!'
        //@ 05,20 GET mtipo_conta PICT '@! X.XX' VALID verdesp(mtipo_conta,05,25,1)
        @ 05,20 GET mtipo_conta VALID verdesp(mtipo_conta,05,25,1)
        @ 06,20 GET mtipo_rel PICT '@!' VALID  mtipo_rel $ 'R,G'
        @ 07,20 GET mobs_doc PICT '@!' VALID mobs_doc $ 'S,N'
        @ 08,20 GET mbanco PICT '@!'
        @ 09,20 GET mbanco_pg PICT '@!'
        @ 10,20 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
        @ 11,20 GET mmov_cx PICT '@!' WHEN men_get(2,38,'Local de Pagamento [C]caixa e [M]ovimento')
        @ 12,20 GET mcodigo_ban PICT "999" VALID IF(EMPTY(mcodigo_ban),.T.,ver_banco(mcodigo_ban,,12,24))
        @ 13,48 GET mtip_data PICT '@!' VALID mtip_data $ 'P,O'         //WHEN men_get(2,38,'Local de Pagamento [C]caixa e [M]ovimento')
        READ
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_for) .AND. mtipo_rel = 'G'
                mtipo_con := mensagem1('Escolha o tipo de consulta [A]NALITICO [S]INTETICO [B]Sintetico Banco Pagador :','A','A,S,B')
        ELSE
                mtipo_con := 'A'
        ENDIF
        IF t_ini=CTOD("  /  /  ")
                t_ini=CTOD("01/01/90")
        ENDIF
        IF t_fim=CTOD("  /  /  ")
                t_fim=CTOD("31/12/09")
        ENDIF
        td_mes:=tp_mes:=0
        IF mtipo_con = 'A'
                mtit := mtit+' ANALITICO'
                mensagem('Aguarde coletando informacao para o Relatorio....')
                IF mtip_data = 'P'
                        mtipo := 'Data de Pagamento: '+DTOC(t_ini)+' a '+DTOC(t_fim)
                        cComm  := "SELECT datpag,tip_for,fornec,cliente,tipo,duplicata,venc,valor,vlpago,nbanco,cheque,tp_pg,obs_b,obs,banco_bx FROM sacdupp WHERE datpag >= "+sr_cdbvalue(t_ini)+" AND datpag <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"

                ELSE
                        mtipo := 'Data de Operacao: '+DTOC(t_ini)+' a '+DTOC(t_fim)
                        cComm  := "SELECT datpag,tip_for,fornec,cliente,tipo,duplicata,venc,valor,vlpago,nbanco,cheque,tp_pg,obs_b,obs,banco_bx FROM sacdupp WHERE data_so >= "+sr_cdbvalue(t_ini)+" AND data_so <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"
                ENDIF
                IF ! EMPTY(mbanco_pg)
                        ccomm := ccomm + " AND nbanco = "+sr_cdbvalue(mbanco_pg)
                ENDIF
                IF ! EMPTY(mcodigo_ban)
                        ccomm := ccomm + " AND banco_bx = "+sr_cdbvalue(mcodigo_ban)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mtipo_conta)
                        ccomm := ccomm + " AND tip_for = "+sr_cdbvalue(mtipo_conta)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_for,4))
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                ccomm := ccomm + " ORDER BY datpag,tipo,duplicata,fornec"
                m_dupp := {}
                sr_getconnection():exec(ccomm,,.t.,@m_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_dupp) = 0
                        atencao('Nao existe documento neste Periodo...')
                        LOOP
                ENDIF
                IF ! imp_arq('DOC_PAGO.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas := ;
                tot := tot_g := tot_din := tot_gin := mt_dia := mt_pago := ;
                mtot_juros := 0
                l_mes=SUBSTR(DTOC(m_dupp[1,1]),4,5)
                mdia := m_dupp[1,1]
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        prog_imp(RECNO(),DTOC(m_dupp[i,1]))
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                //DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago   Juros  Bco  Cheque ST Bco.Pag")
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                IF LEN(mcons_banco) > 0
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT('Codigo: '+mcons_banco[1,1]+' No.Banco: '+mcons_banco[1,3]+' Banco: '+mcons_banco[1,2]+' Conta: '+mcons_banco[1,5])
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",137))
                                ENDIF

                        ENDIF
                        IF mdia <> m_dupp[i,1]
                                IF mt_dia > 0
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        ELSE
                                                DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        ENDIF
                                        mt_dia := mt_pago := 0
                                ENDIF
                                mdia := m_dupp[i,1]
                        ENDIF

                        IF l_mes<>SUBSTR(DTOC(m_dupp[i,1]),4,5)
                                IF tot_din > 0
                                        DEVPOS(PROW()+2,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                                        tot_din=0
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                                l_mes=SUBSTR(DTOC(m_dupp[i,1]),4,5)
                                tot=0
                        ENDIF
                        /*
                        IF ! EMPTY(SUBSTR(mtipo_conta,1,1))
                                IF (SUBSTR(mtipo_conta,1,1) <> SUBSTR(m_dupp[i,2],1,1));
                                   .OR. (! EMPTY(SUBSTR(mtipo_conta,3)) .AND. SUBSTR(mtipo_conta,3) <> SUBSTR(m_dupp[i,2],3))
                                        LOOP
                                ENDIF
                        ENDIF
                        */
                        *&*
                        IF mdia <> m_dupp[i,1]
                                IF mt_dia > 0
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        ELSE
                                                DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        ENDIF
                                        mt_dia := mt_pago := 0
                                ENDIF
                                mdia := m_dupp[i,1]
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(m_dupp[i,1]),4,5) .AND. ! EOF()
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                                        tot_din=0
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        LOOP
                                ENDIF
                                l_mes=SUBSTR(DTOC(m_dupp[i,1]),4,5)
                                tot=0
                        ENDIF
                        IF mtipo_rel = 'G'
                                DEVPOS(PROW()+1,00);DEVOUT(m_dupp[i,3])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(m_dupp[i,4],1,35)+"  "+m_dupp[i,2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,5]+m_dupp[i,6])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,7]))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,1]))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,8],"@E 9,999,999.99"))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9],"@E 9,999,999.99"))
                                IF m_dupp[i,9] > m_dupp[i,8]
                                        //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9] - m_dupp[i,8],"@E 99,999.99"))
                                        mtot_juros := mtot_juros + (m_dupp[i,9] - m_dupp[i,8])
                                ENDIF
                                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,1] - m_dupp[i,7],"9999"))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,10])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,11])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,12])
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dupp[i,15])
                                IF mobs_doc = 'S'
                                        IF ! EMPTY(m_dupp[i,14])
                                                DEVPOS(PROW()+1,00);DEVOUT('OBS. INCLUSAO: '+m_dupp[i,14])
                                        ENDIF
                                        IF ! EMPTY(m_dupp[i,13])
                                                DEVPOS(PROW()+1,00);DEVOUT('OBS. BAIXA...: '+m_dupp[i,13])
                                        ENDIF
                                ENDIF
                        ENDIF
                        tot ++
                        tot_g ++
                        tot_din=tot_din+m_dupp[i,9]
                        tot_gin=tot_gin+m_dupp[i,9]
                        mt_dia := mt_dia + m_dupp[i,8]
                        mt_pago := mt_pago + m_dupp[i,9]
                NEXT
                //? "Total de Documentos: "+TRANSFORM(tot,"9999")+" - "+ltrim(TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                //IF mdia <> m_dupp[i,1] .AND. ! EOF()
                        IF mt_dia > 0
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                ELSE
                                        DEVPOS(PROW()+2,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT('Valor Pago...................:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                ENDIF
                                mt_dia := mt_pago := 0
                        ENDIF
                        //mdia := m_dupp[i,1]
                //ENDIF
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("***************** R E S U M O   F I N A L  ******************")
                DEVPOS(PROW()+1,00);DEVOUT("Quantidade de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999"))
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo.....: "+TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT("Total Juros Pagos no Periodo.............: "+TRANSFORM(mtot_juros,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ELSEIF mtipo_con = 'S'  //SINTETICO
                mtit := mtit+' SINTETICO'
                mensagem('Aguarde coletando informacao para o Relatorio....')
                cComm  := "SELECT datpag,tip_for,fornec,cliente,tipo,duplicata,venc,valor,vlpago,nbanco,cheque,tp_pg,obs_b,obs,banco_bx FROM sacdupp WHERE datpag >= "+sr_cdbvalue(t_ini)+" AND datpag <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"
                IF ! EMPTY(mbanco_pg)
                        ccomm := ccomm + " AND nbanco = "+sr_cdbvalue(mbanco_pg)
                ENDIF
                IF ! EMPTY(mcodigo_ban)
                        ccomm := ccomm + " AND banco_bx = "+sr_cdbvalue(mcodigo_ban)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mtipo_conta)
                        ccomm := ccomm + " AND tip_for = "+sr_cdbvalue(mtipo_conta)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_for,4))
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                ccomm := ccomm + " ORDER BY fornec,datpag,duplicata"
                m_dupp := {}
                sr_getconnection():exec(ccomm,,.t.,@m_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_dupp) = 0
                        atencao('Nao existe documento neste Periodo...')
                        LOOP
                ENDIF
                IF ! imp_arq('DOC_PAGO.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas := ;
                tot := tot_g := tot_din := tot_gin := mt_dia := mt_pago := ;
                mtot_juros := 0
                l_mes=SUBSTR(DTOC(m_dupp[1,1]),4,5)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
                mdia := m_dupp[1,1]
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        prog_imp(RECNO(),DTOC(m_dupp[i,1]))
                        mcod_aux := m_dupp[i,3]
                        mcliente := m_dupp[i,4]
                        mtip_for := m_dupp[i,2]
                        WHILE i <= LEN(m_dupp) .AND. mcod_aux = m_dupp[i,3]
                                prog_imp(RECNO(),DTOC(m_dupp[i,1]))
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                ENDIF
                                *&*
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,00);DEVOUT(m_dupp[i,3])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(m_dupp[i,4],1,35)+"  "+m_dupp[i,2])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,5]+m_dupp[i,6])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,7]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,1]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,8],"@E 9,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9],"@E 9,999,999.99"))
                                        IF m_dupp[i,9] > m_dupp[i,8]
                                                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9] - m_dupp[i,8],"@E 999,999.99"))
                                                mtot_juros := mtot_juros + (m_dupp[i,9] - m_dupp[i,8])
                                        ELSE
                                                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,"@E 999,999.99"))
                                        ENDIF
                                        //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,1] - m_dupp[i,7],"9999"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,10])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,11])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,12])
                                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dupp[i,15])
                                        IF mobs_doc = 'S'
                                                IF ! EMPTY(m_dupp[i,14])
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. INCLUSAO: '+m_dupp[i,14])
                                                ENDIF
                                                IF ! EMPTY(m_dupp[i,13])
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. BAIXA...: '+m_dupp[i,13])
                                                ENDIF
                                        ENDIF
                                ENDIF
                                tot ++
                                tot_g ++
                                tot_din=tot_din+m_dupp[i,9]
                                tot_gin=tot_gin+m_dupp[i,9]
                                mt_dia := mt_dia + m_dupp[i,8]
                                mt_pago := mt_pago + m_dupp[i,9]
                                i ++
                        ENDDO
                        IF PROW() > 53
                                EJECT
                                pag=pag+1
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                        ENDIF
                        IF mtipo_rel = 'G' .AND. ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                tot := tot_din := 0
                        ELSEIF ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(mcod_aux)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(mcliente+"  "+mtip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                tot := tot_din := 0
                        ENDIF
                        IF i <= LEN(m_dupp)
                                SETPOS(16,26);DISPOUT(m_dupp[i,3]+'-'+m_dupp[i,4])
                                i --
                        ENDIF
                NEXT
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("***************** R E S U M O   F I N A L  ******************")
                DEVPOS(PROW()+1,00);DEVOUT("Quantidade de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999"))
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo.....: "+TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT("Total Juros Pagos no Periodo.............: "+TRANSFORM(mtot_juros,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ELSEIF mtipo_con = 'B'  //SINTETICO BANCO PAGADOR
                mtit := mtit+' SINTETICO BANCO PAGADOR'
                mensagem('Aguarde coletando informacao para o Relatorio....')

                                        //    1          2        3        4        5      6          7        8       9       10       11       12     13     14      15           16           17       18
                cComm           := "SELECT d.datpag,d.tip_for,d.fornec,d.cliente,d.tipo,d.duplicata,d.venc,d.valor,d.vlpago,d.nbanco,d.cheque,d.tp_pg,d.obs_b,d.obs,d.banco_bx,b.num_banco,b.nome_banco,b.c_c"
                ccomm := cComm  +  " FROM sacdupp d "
                ccomm := cComm  +  " JOIN sacbanco b on b.cod_banco = d.banco_bx"
                ccomm := cComm  +  " WHERE d.datpag BETWEEN "+sr_cdbvalue(t_ini)+" AND "+sr_cdbvalue(t_fim)+" AND d.pago = 'B'"
                IF ! EMPTY(mbanco_pg)
                        ccomm := ccomm + " AND d.nbanco = "+sr_cdbvalue(mbanco_pg)
                ENDIF
                IF ! EMPTY(mcodigo_ban)
                        ccomm := ccomm + " AND d.banco_bx = "+sr_cdbvalue(mcodigo_ban)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND d.tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mtipo_conta)
                        ccomm := ccomm + " AND d.tip_for = "+sr_cdbvalue(mtipo_conta)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND d.fornec = "+sr_cdbvalue(STRZERO(mcod_for,4))
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND d.numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND d.tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND d.empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                ccomm := ccomm + " ORDER BY d.banco_bx,d.datpag,d.duplicata"
                m_dupp := {}
                sr_getconnection():exec(ccomm,,.t.,@m_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_dupp) = 0
                        atencao('Nao existe documento neste Periodo...')
                        LOOP
                ENDIF
                IF ! imp_arq('DOC_PAGO.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas := ;
                tot := tot_g := tot_din := tot_gin := mt_dia := mt_pago := ;
                mtot_juros := 0
                l_mes=SUBSTR(DTOC(m_dupp[1,1]),4,5)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
                mdia := m_dupp[1,1]
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        prog_imp(RECNO(),DTOC(m_dupp[i,1]))
                        mcod_aux := m_dupp[i,15]
                        mcliente := m_dupp[i,4]
                        mtip_for := m_dupp[i,2]
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo: '+m_dupp[i,15]+' No.Banco: '+m_dupp[i,16]+' Banco: '+m_dupp[i,17]+' Conta: '+m_dupp[i,18])
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",137))

                        ENDIF
                        WHILE i <= LEN(m_dupp) .AND. mcod_aux = m_dupp[i,15]
                                prog_imp(RECNO(),DTOC(m_dupp[i,1]))
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                ENDIF
                                *&*
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,00);DEVOUT(m_dupp[i,3])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(m_dupp[i,4],1,35)+"  "+m_dupp[i,2])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,5]+m_dupp[i,6])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,7]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(m_dupp[i,1]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,8],"@E 9,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9],"@E 9,999,999.99"))
                                        IF m_dupp[i,9] > m_dupp[i,8]
                                                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,9] - m_dupp[i,8],"@E 999,999.99"))
                                                mtot_juros := mtot_juros + (m_dupp[i,9] - m_dupp[i,8])
                                        ENDIF
                                        //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_dupp[i,1] - m_dupp[i,7],"9999"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,10])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,11])
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(m_dupp[i,12])
                                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_dupp[i,15])
                                        IF mobs_doc = 'S'
                                                IF ! EMPTY(m_dupp[i,14])
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. INCLUSAO: '+m_dupp[i,14])
                                                ENDIF
                                                IF ! EMPTY(m_dupp[i,13])
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. BAIXA...: '+m_dupp[i,13])
                                                ENDIF
                                        ENDIF
                                ENDIF
                                tot ++
                                tot_g ++
                                tot_din=tot_din+m_dupp[i,9]
                                tot_gin=tot_gin+m_dupp[i,9]
                                mt_dia := mt_dia + m_dupp[i,8]
                                mt_pago := mt_pago + m_dupp[i,9]
                                i ++
                        ENDDO
                        IF PROW() > 53
                                EJECT
                                pag=pag+1
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo Duplicata         Vencim.  Dt.pag.   Valor Dup.   Valor Pago  Bco  Cheque ST Bco.Pag")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                        ENDIF
                        IF mtipo_rel = 'G' .AND. ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                tot := tot_din := 0
                        ELSEIF ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(mcod_aux)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(mcliente+"  "+mtip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                tot := tot_din := 0
                        ENDIF
                        IF i <= LEN(m_dupp)
                                SETPOS(16,26);DISPOUT(m_dupp[i,3]+'-'+m_dupp[i,4])
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo: '+m_dupp[i,15]+' No.Banco: '+m_dupp[i,16]+' Banco: '+m_dupp[i,17]+' Conta: '+m_dupp[i,18])
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",137))
                                i --
                        ENDIF
                NEXT
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("***************** R E S U M O   F I N A L  ******************")
                DEVPOS(PROW()+1,00);DEVOUT("Quantidade de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999"))
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo.....: "+TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT("Total Juros Pagos no Periodo.............: "+TRANSFORM(mtot_juros,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_PAGO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

