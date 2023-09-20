* LISTAGEM CLASSIFICACAO DOS PRODUTO CURVA ABC
**************************************************
FUNCTION sacapprel
******************
LOCAL MPRG:='SACAPPREL',;
      opcao,i,mdata1,mdata2,;
      cons_app := {},cons_orcam := {},cons_ped := {},cons_produto:={},;
      mnum_ped,mdata_ped,mnum_orc,mdata_orc,mop_produto,mcod_vend := '   '

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mtipo_imp,mimp_tipo:=0

IF ! ver_nivel(mprg,'RELATORIO DOS PEDIDOS APP','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
op_tela(10,10,14,85,' RELATORIO DOS PEDIDOS APP')
WHILE .T.
        exibi_prg(mprg)
        mtit := 'RELATORIO DOS PEDIDOS APP'
        mtipo_imp := m_indiv[1,18]
        i := 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_vend := '   '
        mop_produto := 'N'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS( 1,2);DEVOUT('Data Inicial...........:')
        DEVPOS( 2,2);DEVOUT('Data Final.............:')
        DEVPOS( 3,2);DEVOUT('Imprimir Produtos [S/N]:')

        @ 1,27 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,27 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,27 GET mop_produto PICT '@!' VALID mop_produto $ 'S,N'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE ALL
                EXIT
        ENDIF
        cons_app := {}
        sr_getconnection():exec("SELECT codigo,data_pedido,cod_funcionario FROM cnnt_pedido WHERE data_pedido >= "+sr_cdbvalue(mdata1)+" AND data_pedido <= "+sr_cdbvalue(mdata2)+" ORDER BY codigo",,.t.,@cons_app)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_app) = 0
                atencao('Nao existe movimento neste periodo...')
                LOOP
        ENDIF
        marq := 'APP_REL.REL'
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        IF LASTKEY() = 27 .OR. ! imp_arq('MAIS_PRO.REL','R')
                LOOP
        ENDIF
        mpag = 1
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Numero APP')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data APP')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('No. Orcam.')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Dt.Orcam')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('No. Pedido')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data Ped')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vend')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Status')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        i:=0
        FOR i = 1 TO LEN(cons_app)
                mnum_ped := mnum_orc := SPACE(10)
                mdata_ped := mdata_orc := SPACE(8)
                mstatus := SPACE(9)
                cons_orcam := {}
                mcod_vend := STRZERO(cons_app[i,3],3)
                sr_getconnection():exec("SELECT pnum_ped,pdat_ped,pcod_merc,pmerc,pquantd,pvlr_fat,pcod_vend FROM sacorcam WHERE pos = "+sr_cdbvalue(cons_app[i,1]),,.t.,@cons_orcam)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_orcam) > 0
                        mnum_orc := cons_orcam[1,1]
                        mdata_orc := DTOC(cons_orcam[1,2])
                        mcod_vend := cons_orcam[1,7]
                        IF mop_produto = 'S'
                                cons_produto:={}
                                x:=0
                                FOR x = 1 TO LEN(cons_orcam)
                                        AADD(cons_produto,'Produto: '+cons_orcam[x,3]+' '+cons_orcam[x,4]+' '+TRANSFORM(cons_orcam[x,5],'999,999.99')+' X '+TRANSFORM(cons_orcam[x,6],'999,999.99')+' = '+TRANSFORM(cons_orcam[x,5] * cons_orcam[x,6],'999,999.99'))
                                NEXT
                        ENDIF
                ENDIF
                cons_ped := {}
                sr_getconnection():exec("SELECT pnum_ped,pdat_ped,ppag,pcod_merc,pmerc,pquantd,pvlr_fat,pcod_vend FROM sacped_s WHERE pos = "+sr_cdbvalue(cons_app[i,1]),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) > 0
                        mnum_ped := cons_ped[1,1]
                        mdata_ped := DTOC(cons_ped[1,2])
                        mcod_vend := cons_orcam[1,7]
                        IF cons_ped[1,3] = 'C'
                                mstatus := 'CANCELADO'
                        ELSEIF cons_ped[1,3] = '*'
                                mstatus := 'PAGO'
                        ELSE
                                mstatus := 'ABERTO'
                        ENDIF 
                        IF mop_produto = 'S'
                                cons_produto:={}
                                x:=0
                                FOR x = 1 TO LEN(cons_orcam)
                                        AADD(cons_produto,'Produto: '+cons_orcam[x,3]+' '+cons_orcam[x,4]+' '+TRANSFORM(cons_orcam[x,5],'999,999.99')+' X '+TRANSFORM(cons_orcam[x,6],'999,999.99')+' = '+TRANSFORM(cons_orcam[x,5] * cons_orcam[x,6],'999,999.99'))
                                NEXT
                        ENDIF
                ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(STRZERO(cons_app[i,1],10))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(cons_app[i,2]))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mnum_orc)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mdata_orc)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mnum_ped)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mdata_ped)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mcod_vend)
                DEVPOS(PROW(),PCOL()+3);DEVOUT(mstatus)
                IF mop_produto = 'S'
                        x:=0
                        FOR x = 1 TO LEN(cons_produto)
                                DEVPOS(PROW()+1,00);DEVOUT(cons_produto[x])
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('No.APP')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data APP')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('No.Orcam.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Dt.Orcam')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('No.Ped.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Data Ped')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vend')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Status')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt(mtipo_imp,'C')
                ENDIF
        NEXT
        IF PROW() >= 57
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        /*
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Total Geral dos Produtos R$:')
        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(cons_app[1,3],'99,999,999.99')
        DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'99,999.99')
        DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'99,999.99')
        DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
        DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
        DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        */
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************** F I M ****************************************************