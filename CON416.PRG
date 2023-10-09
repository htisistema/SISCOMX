MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON416.PRG: Relatorio -> CONTA CORRENTE
*********************************************************
FUNCTION con416
***************
LOCAL MPRG:='CON416',;
      t_ini,t_fim,i:=0,pag:=0,msaldo_ini:=0,mtot_rec:=0,mtot_pag:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        bank,mcod_for,mtipo_conta,mcodemp:=SPACE(3),mcodigo_ban := 0,mcons_banco := {}

IF ! ver_nivel(mprg,'CONTA CORRENTE (RELATORIO DOCUMENTO PAGOS)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(1,10,6,70," CONTA CORRENTE (RELATORIO DOCUMENTO PAGOS)",,1)
WHILE .T.
        mensagem('Preencha os campos que deseja...')
        DEVPOS(00,00);DEVOUT("Cod.Empresa.......:")
        DEVPOS(01,00);DEVOUT("Data Inicial......:")
        DEVPOS(02,00);DEVOUT("Data Final........:")
        DEVPOS(03,00);DEVOUT("Banco do PAGADOR..:")
        DEVPOS(04,00);DEVOUT("Saldo inicial R$..:")
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mcodigo_ban := msaldo_ini := mtot_rec:= mtot_pag :=0
        t_ini := mdata_sis - 30
        t_fim := mdata_sis
        mtit := "CONTA CORRENTE (RELATORIO DOCUMENTO PAGOS)"
        @ 00,20 GET mcodemp PICT '999' VALID ver_emp(mcodemp,00,24,,'*') WHEN mmult_emp = 'S'
        @ 01,20 GET t_ini
        @ 02,20 GET t_fim
        @ 03,20 GET mcodigo_ban PICT "999" VALID IF(EMPTY(mcodigo_ban),.T.,ver_banco(mcodigo_ban,,03,24))
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        @ 04,20 GET msaldo_ini PICT '999,999,999.99'
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF t_ini=CTOD("  /  /  ")
                t_ini := mdata_sis - 30
        ENDIF
        IF t_fim=CTOD("  /  /  ")
                t_fim := mdata_sis
        ENDIF
        td_mes:=tp_mes:=0
                //m_consulta := {}
                //sr_getconnection():exec("select cod_banco,num_banco,nome_banco,agencia,c_c from sacbanco b where b.cod_banco = "+sr_cdbvalue(mcodigo_ban),,.t.,@m_consulta)
                //sr_getconnection():exec('COMMIT',,.f.)
        mtit := 'CONTA CORRENTE Periodo: '+DTOC(t_ini)+' a '+DTOC(t_fim)
        mensagem('Aguarde coletando informacao para o Relatorio....')
        IF ! EMPTY(mcodigo_ban)
                mtipo := 'Banco: '+mcons_banco[1,1]+' - No:'+mcons_banco[1,2]+' '+ALLTRIM(mcons_banco[1,3])+' Ag.:'+ALLTRIM(mcons_banco[1,4])+' C/C: '+ALLTRIM(mcons_banco[1,5])
        ELSE
                mtipo := 'TODOS os Bancos'
        ENDIF
        cComm  := "SELECT 'D',d.datpag,d.hora_bx,d.tipo,d.duplicata,d.fornec,d.cliente,d.vlpago,d.obs_b,d.banco_bx"
        ccomm := ccomm + " FROM sacdupp d "
        ccomm := ccomm + " WHERE d.datpag BETWEEN "+sr_cdbvalue(t_ini)+" AND "+sr_cdbvalue(t_fim)+" AND d.pago = 'B'"
        IF ! EMPTY(mcons_banco)
                ccomm := ccomm + " AND d.banco_bx = "+sr_cdbvalue(mcodigo_ban)
        ENDIF
        ccomm := ccomm + " union all "
        cComm := ccomm + " SELECT 'C',r.datpag,r.hora_bx,r.tipo,r.duplicata,r.fornec,r.cliente,r.vlpago,r.obs1,r.banco_bx"
        ccomm := ccomm + " FROM sacdupr r "
        ccomm := ccomm + " WHERE r.datpag BETWEEN "+sr_cdbvalue(t_ini)+" AND "+sr_cdbvalue(t_fim)+" AND r.pago = 'B' AND r.banco_bx = "+sr_cdbvalue(mcodigo_ban)
        IF ! EMPTY(mcons_banco)
                ccomm := ccomm + " AND r.banco_bx = "+sr_cdbvalue(mcodigo_ban)
        ENDIF
        ccomm := ccomm + " ORDER BY 2,3 "
        mcons_banco := {}
        sr_getconnection():exec(ccomm,,.t.,@mcons_banco)
        sr_getconnection():exec('COMMIT',,.f.)
        //atencao( sr_ShowVector( mcons_banco ))
        IF LEN(mcons_banco) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        IF ! imp_arq('DOC_PAGO.REL','R',,,,,,'E')
                LOOP
        ENDIF
        //op_tela(10,10,11,70)
        //SETPOS(05,00);DISPOUT('Produto Processado:')
        IF mimp_tipo = 4

                        nxls := {}
                        f:=1
                        MYRUN('DEL '+marq)
                        nXls := xlsOpen(marq)
                        xlsWrite( nXls, f, 1,mtit)
                        f++
                        xlsWrite( nXls, f, 1,mtipo)
                        f++
                        xlsWrite( nXls, f, 1,'Dat.Pag.')
                        xlsWrite( nXls, f, 2, 'Documento')
                        xlsWrite( nXls, f, 3, 'Tp')
                        xlsWrite( nXls, f, 4, 'Recebimento')
                        xlsWrite( nXls, f, 5, 'Pagamento')
                        xlsWrite( nXls, f, 6, 'Saldo R$')
                        xlsWrite( nXls, f, 7, 'Observacao')
                        xlsWrite( nXls, f, 8, 'Bco.Pag')
                        xlsWrite( nXls, f, 9, 'Fornecedor/Cliente')
                        f++
                        xlsWrite( nXls, f, 1, 'SALDO INICIAL R$:')
                        xlsWrite( nXls, f, 6, TRANSFORM(msaldo_ini,"@E 999,999,999.99"))
                        i:=0
                        FOR i = 1 TO LEN(mcons_banco)
                                prog_imp(i,DTOC(mcons_banco[i,2]))
                                f++
                                xlsWrite( nXls, f, 1, DTOC(mcons_banco[i,2]))
                                xlsWrite( nXls, f, 2, mcons_banco[i,4]+mcons_banco[i,5])
                                xlsWrite( nXls, f, 3, mcons_banco[i,1])
                                IF mcons_banco[i,1] = 'D'
                                        msaldo_ini := msaldo_ini - mcons_banco[i,8]
                                        xlsWrite( nXls, f, 5, TRANSFORM(mcons_banco[i,8] * -1,"@E 999,999,999.99"))
                                        xlsWrite( nXls, f, 6, TRANSFORM(msaldo_ini,"@E 999,999,999.99"))
                                ELSE
                                        msaldo_ini := msaldo_ini + mcons_banco[i,8]
                                        xlsWrite( nXls, f, 4, TRANSFORM(mcons_banco[i,8] * -1,"@E 999,999,999.99"))
                                        xlsWrite( nXls, f, 6, TRANSFORM(msaldo_ini,"@E 999,999,999.99"))
                                ENDIF
                                xlsWrite( nXls, f, 7, mcons_banco[i,9])
                                xlsWrite( nXls, f, 8, mcons_banco[i,10])
                                xlsWrite( nXls, f, 9, mcons_banco[i,6]+' - '+mcons_banco[i,7])
                        NEXT
                        f++
                        xlsWrite( nXls, f,1,TIME())
                	xlsClose( nXls )
        ELSE

                pag := i := 0
                FOR i = 1 TO LEN(mcons_banco)
                        prog_imp(RECNO(),DTOC(mcons_banco[i,2]))
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Dat.Pag. Documento         Tp  Recebimento     Pagamento      Saldo R$  Observacao                                 ")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                DEVPOS(PROW()+1,00);DEVOUT(" SALDO INICIAL              ")
                                DEVPOS(PROW(),PCOL()+1);DEVOUT("            ")
                                DEVPOS(PROW(),PCOL()+1);DEVOUT("            ")
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(msaldo_ini,"@E 99,999,999.99"))
                        ENDIF

                                DEVPOS(PROW()+1,00);DEVOUT(mcons_banco[i,2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_banco[i,4]+mcons_banco[i,5])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_banco[i,1])
                                IF mcons_banco[i,1] = 'D'
                                        msaldo_ini := msaldo_ini - mcons_banco[i,8]
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT("            ")
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mcons_banco[i,8] * -1,"@E 99,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(msaldo_ini,"@E 99,999,999.99"))
                                        mtot_pag := mtot_pag + mcons_banco[i,8]
                                ELSE
                                        msaldo_ini := msaldo_ini + mcons_banco[i,8]
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mcons_banco[i,8],"@E 99,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT("            ")
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(msaldo_ini,"@E 99,999,999.99"))
                                        mtot_rec := mtot_rec + mcons_banco[i,8]
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mcons_banco[i,9])
                NEXT
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                DEVPOS(PROW()+1,00);DEVOUT('Total Recebido R$: '+TRANSFORM(mtot_rec,"@E 999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT('Total Pagos ...R$: '+TRANSFORM(mtot_pag,"@E 999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT('                   ------------')
                DEVPOS(PROW()+1,00);DEVOUT('Total Geral ...R$: '+TRANSFORM(mtot_rec - mtot_pag,"@E 999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                DEVPOS(PROW()+1,00);DEVOUT(time())
                imprt(mtipo_imp,'N')
                
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('DOC_PAGO.REL')
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

