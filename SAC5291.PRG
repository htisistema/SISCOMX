*********************************
* LISTAGEM MOVIMENTO GRUPO
*********************************
MEMVAR getlist,nivel_acess,m_compra

FUNCTION sac5291()
**************
LOCAL MPRG:='SAC5291',mtitulo,mtraco,lci,cci,lba,cba,mdata1,mdata2,;
      mcons_grupo,mcons_mov,mgrupo,msubgrupo,mcod_ven,mcod_forn,mimp_lucro,;
      mtot_custo:=0,mtot_venda:=0,mtot_grupo:=0,mtot_geral:={}


PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtit,mtipo,mpag

mtitulo := 'RELATORIO DE MOVIMENTO PRODUTO P/MESES'
IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := cci := 00
lba := 22
cba := 70
mtipo_imp := m_indiv[1,18]
op_tela(10,10,19,80,mtitulo)
WHILE .T.
        limpa(lci,cci,lba,cba)
        mgrupo := mcod_ven := mcod_forn := msubgrupo := mtot_custo := ;
        mtot_venda := mtot_grupo := 0
        mimp_lucro := 'N'
        mcons_grupo := {}
        mcons_mov   := {}
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Incial......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Grupo............:')
        DEVPOS(lci+4,cci+2);DEVOUT('Sub-Grupo........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Vendedor..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo Fornecedor:')
        DEVPOS(lci+7,cci+2);DEVOUT('Imprimir Lucro...:')

        @ lci+1,cci+21 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+21 GET mdata2 VALID IF(mdata1 > mdata2,.F.,.T.)
        @ lci+3,cci+21 GET mgrupo     PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,lci+3,cci+26,.F.))
        @ lci+4,cci+21 GET msubgrupo  PICT '99' WHEN ! EMPTY(mgrupo) VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,lci+4,cci+26))
        @ lci+5,cci+21 GET mcod_ven   PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+5,cci+26))
        @ lci+6,cci+21 GET mcod_forn  PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+6,cci+26))
        @ lci+7,cci+21 GET mimp_lucro PICT '@!' VALID mimp_lucro $ 'S,N'
        READ
        v_fornece(mcod_forn,lci+6,cci+26)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        marq := 'EST_GRUPO.REL'
        IF ! imp_arq('EST_GRUPO.REL','R',,,,,,'E')
                LOOP
        ENDIF
        cons_mov := {}
        cComm  := "SELECT SUM(vl_vend * quantd),SUM(pr_unit * quantd) "
        cComm  := ccomm +"FROM sacmov "
        cComm  := ccomm +"WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        cComm  := ccomm +" AND cancel is NULL AND tipo = '02' AND vl_vend > 0"
        cComm  := ccomm +" AND ent_sai='S' AND NOT num_ped = 'CUPOME' AND (documento like 'PD%' OR documento like 'CP%')"
        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe movimento neste PERIODO...')
                LOOP
        ENDIF
        mtot_venda := cons_mov[1,1]
        mtot_custo := cons_mov[1,2]
        cons_grupo := {}
        ccomm := "SELECT gru_sub,merc,0,0 FROM sacgrupo"
        IF ! EMPTY(mgrupo) .AND. ! EMPTY(msubgrupo)
                ccomm := ccomm + " WHERE (gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
                ccomm := ccomm + " OR gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+'  ')+')'
        ELSEIF  ! EMPTY(mgrupo)
                ccomm := ccomm + " WHERE gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        ccomm := ccomm + " ORDER BY gru_sub"
        sr_getconnection():exec(ccomm,,.t.,@cons_grupo)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_grupo) = 0
                atencao('Nao existe nenhum GRUPO...')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_grupo)
                prog_imp(i,cons_grupo[i,1])
                IF EMPTY(SUBSTR(cons_grupo[i,1],4))
                        cons_mov := {}
                        cComm  := "SELECT SUM(vl_vend * quantd),SUM(pr_unit * quantd) "
                        cComm  := ccomm +"FROM sacmov "
                        cComm  := ccomm +"WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                        cComm  := ccomm +" AND cancel is NULL AND tipo = '02' AND vl_vend > 0"
                        cComm  := ccomm +" AND ent_sai='S' AND NOT num_ped = 'CUPOME' AND (documento like 'PD%' OR documento like 'CP%')"
                        cComm := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(SUBSTR(cons_grupo[i,1],1,3)+'%')
                        //ccomm  := ccomm +"  AND gru_sub LIKE "+sr_cdbvalue(cons_grupo[i,1])
/*
                        cComm := "SELECT SUM(vl_fatura * quantd),SUM(pr_unit * quantd)"
                        cComm := ccomm + " FROM sacmov
                        cComm := ccomm + " WHERE gru_sub LIKE "+sr_cdbvalue(SUBSTR(cons_grupo[i,1],1,3)+'%')
                        ccomm := ccomm + " AND cancel IS NULL AND NOT tipo = '02' AND ent_sai = 'S' AND documento NOT LIKE 'BL%'"
                        ccomm := ccomm + " AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
*/
                        IF ! EMPTY(mcod_ven)
                                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                        ENDIF
                        IF ! EMPTY(mcod_forn)
                                ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                        ENDIF
                        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_mov) = 0
                                LOOP
                        ENDIF
                        cons_grupo[i,3] := cons_mov[1,1]
                        cons_grupo[i,4] := cons_mov[1,2]
                ELSE
                        cons_mov := {}
                        cComm  := "SELECT SUM(vl_vend * quantd),SUM(pr_unit * quantd) "
                        cComm  := ccomm +"FROM sacmov "
                        cComm  := ccomm +"WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                        cComm  := ccomm +" AND cancel is NULL AND tipo = '02' AND vl_vend > 0"
                        cComm  := ccomm +"  AND ent_sai='S' AND NOT num_ped = 'CUPOME' AND (documento like 'PD%' OR documento like 'CP%')"
                        ccomm  := ccomm +"  AND gru_sub = "+sr_cdbvalue(cons_grupo[i,1])
                        //cComm  := "SELECT SUM(vl_fatura * quantd),SUM(pr_unit * quantd) FROM sacmov WHERE gru_sub LIKE "+sr_cdbvalue(cons_grupo[i,1])
                        //ccomm := ccomm + " AND cancel IS NULL AND NOT tipo = '02' AND ent_sai = 'S' AND documento NOT LIKE 'BL%'"
                        //ccomm := ccomm + " AND data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                        IF ! EMPTY(mcod_ven)
                                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                        ENDIF
                        IF ! EMPTY(mcod_forn)
                                ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                        ENDIF
                        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_mov) = 0
                                LOOP
                        ENDIF
                        cons_grupo[i,3] := cons_mov[1,1]
                        cons_grupo[i,4] := cons_mov[1,2]
                ENDIF
        NEXT

        mtit = 'Listagem de Estatistica de Grupos'
        mtipo := 'Periodo de : '+DTOC(mdata1)+' a '+DTOC(mdata2)
        mpag := i:=0
        FOR i = 1 TO LEN(cons_grupo)
                IF mpag = 0 .OR. PROW() >= 59
                        mpag ++
                        IF mpag > 1 ;EJECT;ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'C')
                IF ! EMPTY(cons_grupo[i,3])
                        IF EMPTY(SUBSTR(cons_grupo[i,1],4))
                                mtot_grupo := cons_grupo[i,3]
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT('GRUPO: '+cons_grupo[i,1])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - '+cons_grupo[i,2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Prc.Venda: '+TRANSFORM(cons_grupo[i,3],'99,999,999.999'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Part.no Geral %: '+TRANSFORM((cons_grupo[i,3] / mtot_venda)*100,'999.999'))
                                IF mimp_lucro = 'S'
                                        DEVPOS(PROW()+1,60);DEVOUT('Prc.Custo: '+TRANSFORM(cons_grupo[i,4],'99,999,999.999'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro R$: '+TRANSFORM(cons_grupo[i,3]-cons_grupo[i,4],'9,999,999.999'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro %: '+TRANSFORM(((cons_grupo[i,3]-cons_grupo[i,4]) / cons_grupo[i,3])*100,'999.999'))
                                ENDIF
                        ELSE
                                //DEVPOS(PROW()+1,00);DEVOUT('SUB-GRUPO: '+SUBSTR(cons_grupo[i,1],1,3)+'-'+SUBSTR(cons_grupo[i,1],4))
                                        DEVPOS(PROW()+1,00);DEVOUT('SUB-GRUPO: '+SUBSTR(cons_grupo[i,1],4))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - '+cons_grupo[i,2])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Prc.Venda: '+TRANSFORM(cons_grupo[i,3],'9,999,999.999'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Part.no Grupo: '+TRANSFORM((cons_grupo[i,3] / mtot_grupo)*100,'999.999')+' %')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Part.no Geral: '+TRANSFORM((cons_grupo[i,3] / mtot_venda)*100,'999.999')+' %')
                                IF mimp_lucro = 'S'
                                        DEVPOS(PROW()+1,60);DEVOUT('Prc.Custo: '+TRANSFORM(cons_grupo[i,4],'9,999,999.999'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro R$: '+TRANSFORM(cons_grupo[i,3]-cons_grupo[i,4],'9,999,999.999'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro: '+TRANSFORM(((cons_grupo[i,3]-cons_grupo[i,4]) / cons_grupo[i,3])*100,'999.999')+' %')
                                ENDIF
                        ENDIF
                ENDIF
        NEXT

        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('RESUMO GERAL')
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL A PRECO DE CUSTO: '+TRANSFORM(mtot_custo,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL A PRECO DE VENDA: '+TRANSFORM(mtot_venda,'999,999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        /*
        IF mimp_tipo = 2
                lertexto(marq)
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
