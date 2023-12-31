**************************
* LISTAGEM VENDAS A MENOR
**************************
MEMVAR getlist,nivel_acess

FUNCTION sac54
**************
LOCAL MPRG:='SAC54',;
      lci,cci,lba,cba,opcao,mpercent,i,mtecla,mdata1,mdata2,;
      mtot_qua,mtot_prc,mtot_dif,mtot_ven,mvlr_dif,mcodemp:='   ',;
      aret:={},c_vend:={},mpt,m_vend:={},m_resumo:={},m_ven:={},mresumo:=' ',so_resumo:='N'

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,point,mnome_ven,mcod_ven

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO DE VENDAS A MENOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := cci := 0
lba := 05
cba := 43
*----------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*----------------------------------------------------------------------
op_tela(lci,cci,lba+3,cba,'RELATORIO DE VENDAS A MENOR')
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_ven := mpercent := mtot_prc := mtot_dif := mtot_ven := ;
        mtot_qua := mvlr_dif := 0
        mnome_ven := SPACE(30)
        mcodemp := SPACE(3)
        m_vend:=m_resumo:={}
        mresumo := 'S'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        //DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Inicial.........:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final...........:')
        DEVPOS(lci+4,cci+2);DEVOUT('% de tolerancia......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo do Vendedor...:')
        DEVPOS(lci+6,cci+2);DEVOUT('Resumo dos Vendedores:')
        DEVPOS(lci+7,cci+2);DEVOUT('So Resumo Vendedores:')

        //@ lci+1,cci+25 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci+1,cci+29,,'*') WHEN mmult_emp ='S'
        @ lci+2,cci+25 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+25 GET mdata2 VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+25 GET mpercent PICT '999.99'
        @ lci+5,cci+25 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+5,cci+29))
        @ lci+6,cci+25 GET mresumo PICT '@!' VALID mresumo $ 'S,N' WHEN EMPTY(mcod_ven)
        @ lci+7,cci+25 GET so_resumo PICT '@!' VALID so_resumo $ 'S,N' WHEN EMPTY(mcod_ven)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF

        setcor(3)
        DEVPOS(lci+5,cci+23);DEVOUT(IF(mcod_ven=0,' ',sen->snome))
        setcor(1)
/*
        ****************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ****************
        mov->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
*/
        mensagem('Aguarde um momento coletando dados para o Relatorio....')
        IF ! imp_arq('VEN_MENOR.REL','R')
                LOOP
        ENDIF
        mpag := 1
        mtot_prc := mtot_dif := mtot_ven := mtot_qua := mvlr_dif := 0
        mtit = 'Listagem de Vendas a Menor com tolerancia de '+TRANSFORM(mpercent,'999.99')+' %'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        IF ! EMPTY(mcod_ven)
                mtipo := mtipo + ' - Vendedor: '+STRZERO(mcod_ven,3)
        ENDIF

        IF so_resumo = 'N'

        m_ven:={}
        m_vend:={}
        sr_getconnection():exec("SELECT snome,scod_op FROM insopera",,.t.,@m_ven)
        sr_getconnection():exec('COMMIT',,.f.)
        i:=0
        FOR i = 1 TO LEN(m_ven)
                AADD(m_vend,m_ven[i,2])
                AADD(m_resumo,{m_ven[i,1],0,0,0,0,0})
        NEXT
/*
        m_vend:={}
        sr_getconnection():exec("SELECT scod_op FROM insopera",,.t.,@m_vend)
        i:=0
        FOR i = 1 TO LEN(m_vend)
                atencao(m_vend[i])
        NEXT
*/
        aret:={}
        cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND pr_venda > vl_vend"
        IF ! EMPTY(mcod_ven)
                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        ccomm := ccomm + " ORDER BY data_s_e,ent_sai,num_ped,documento"
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,02);DEVOUT('Data')
        DEVPOS(PROW(),09);DEVOUT('Cod.')
        DEVPOS(PROW(),15);DEVOUT('Produto')
        DEVPOS(PROW(),46);DEVOUT('Doc.(NF)')
        DEVPOS(PROW(),57);DEVOUT('Cod')
        DEVPOS(PROW(),61);DEVOUT('Nome Vendedor')
        DEVPOS(PROW(),83);DEVOUT('Quantd.')
        DEVPOS(PROW(),95);DEVOUT('Pr.Venda')
        DEVPOS(PROW(),106);DEVOUT('Pr.Vendido')
        DEVPOS(PROW(),120);DEVOUT('Dif.R$')
        DEVPOS(PROW(),129);DEVOUT('(%)')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        imprt(mtipo_imp,'C')
        i:=0
        FOR i = 1 TO LEN(aret)
                prog_imp(i,DTOC(aret[i,16]))
                c_vend := {}
                sr_getconnection():exec("SELECT snome FROM insopera WHERE scod_op = "+sr_cdbvalue(aret[i,28]),,.t.,@c_vend)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(c_vend) = 0
                        mnome_ven := SPACE(20)
                ELSE
                        mnome_ven := c_vend[1,1]
                ENDIF

                IF mpercent > 0
                        IF (aret[i,19] * aret[i,22] - aret[i,19] * aret[i,23]) * 100;
                           / (aret[i,19] * aret[i,22]) <= mpercent
                                LOOP
                        ENDIF
                ENDIF
                mvlr_dif := 0
                mvlr_dif := (aret[i,19] * aret[i,22]) - (aret[i,19] * aret[i,23])
                /*
                IF mresumo = 'S'
                        mpt:=0
                        mpt := ASCAN(m_vend,aret[i,28])
                        IF mpt > 0
                                m_resumo[mpt,2] := m_resumo[mpt,2] + aret[i,19]
                                m_resumo[mpt,3] := m_resumo[mpt,3] + (aret[i,23] * aret[i,19])
                                m_resumo[mpt,4] := m_resumo[mpt,4] + (aret[i,22] * aret[i,19])
                                m_resumo[mpt,5] := m_resumo[mpt,5] + mvlr_dif
                                m_resumo[mpt,6] := (m_resumo[mpt,2] * m_resumo[mpt,4] - m_resumo[mpt,2] * m_resumo[mpt,3]) * 100 / (m_resumo[mpt,2] * m_resumo[mpt,4])
                        ENDIF
                ENDIF
                */
                DEVPOS(PROW()+1,00);DEVOUT(aret[i,16])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(aret[i,10])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(aret[i,11],30))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(aret[i,2])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(aret[i,28])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(mnome_ven,20))
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(aret[i,19],'99999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(aret[i,22] * aret[i,19],'9,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(aret[i,23] * aret[i,19],'9,999,999.99')
                IF mvlr_dif > 0
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_dif,'99,999.99')
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(0.00,'99,999.99')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((aret[i,19] * aret[i,22] - aret[i,19] * aret[i,23]) * 100 / (aret[i,19] * aret[i,22]),'99.99')
                mtot_qua = mtot_qua + aret[i,19]
                mtot_dif = mtot_dif + mvlr_dif
                mtot_ven = mtot_ven + aret[i,23] * aret[i,19]
                mtot_prc = mtot_prc + aret[i,22] * aret[i,19]
                SKIP
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        DEVPOS(PROW(),00);DEVOUT(CHR(18))
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                        DEVPOS(PROW(),09);DEVOUT('Cod.')
                        DEVPOS(PROW(),15);DEVOUT('Produto')
                        DEVPOS(PROW(),46);DEVOUT('Doc.(NF)')
                        DEVPOS(PROW(),54);DEVOUT('Cod.')
                        DEVPOS(PROW(),59);DEVOUT('Nome Vendedor')
                        DEVPOS(PROW(),81);DEVOUT('Quantd.')
                        DEVPOS(PROW(),94);DEVOUT('Pr.Venda')
                        DEVPOS(PROW(),106);DEVOUT('Pr.Vendido')
                        DEVPOS(PROW(),118);DEVOUT('Diferenca R$')
                        DEVPOS(PROW(),130);DEVOUT('Dif.(%)')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt(mtipo_imp,'C')
                        LOOP
                ENDIF
        NEXT
        //ENDDO
        IF PROW() >= 55
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,02);DEVOUT('Data')
                DEVPOS(PROW(),09);DEVOUT('Cod.')
                DEVPOS(PROW(),15);DEVOUT('Produto')
                DEVPOS(PROW(),46);DEVOUT('Doc.(NF)')
                DEVPOS(PROW(),54);DEVOUT('Cod.')
                DEVPOS(PROW(),59);DEVOUT('Nome Vendedor')
                DEVPOS(PROW(),81);DEVOUT('Quantd.')
                DEVPOS(PROW(),94);DEVOUT('Pr.Venda')
                DEVPOS(PROW(),106);DEVOUT('Pr.Vendido')
                DEVPOS(PROW(),118);DEVOUT('Diferenca R$')
                DEVPOS(PROW(),130);DEVOUT('Dif.(%)')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Total a Preco de Venda.:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_prc,'999,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total a Preco Vendido..:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ven,'999,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Diferenca (R$):')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dif,'999,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Diferenca na Media (%).:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mtot_qua * mtot_prc - mtot_qua * mtot_ven) * 100 / (mtot_qua * mtot_prc),'999.99')
        ENDIF
        IF mresumo = 'S'
                m_resumo:={}
                //cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND pr_venda > vl_vend"
                cComm  := "SELECT cod_vend,sum(quantd),sum(quantd*pr_venda),sum(quantd*vl_vend),sum(quantd*pr_venda - quantd*vl_vend) FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND pr_venda > vl_vend"
                IF ! EMPTY(mcod_ven)
                        ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                ccomm := ccomm + " GROUP BY cod_vend,cod_vend"
                sr_getconnection():exec(ccomm,,.t.,@m_resumo)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_resumo) = 0
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        atencao('Nao existe documento neste Periodo...')
                        LOOP
                ENDIF

                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                DEVPOS(PROW(),06);DEVOUT('Nome Vendedor')
                DEVPOS(PROW(),40);DEVOUT('Quantidade')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('  Preco Venda')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Preco Vendido')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Diferenca R$')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Dif.(%)')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
                ASORT(m_resumo,,, {|x,y| x[5] < y[5]})
                i:=0
                FOR i = 1 TO LEN(m_resumo)
                        c_vend := {}
                        sr_getconnection():exec("SELECT snome FROM insopera WHERE scod_op = "+sr_cdbvalue(m_resumo[i,1]),,.t.,@c_vend)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_vend) = 0
                                mnome_ven := SPACE(20)
                        ELSE
                                mnome_ven := c_vend[1,1]
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(m_resumo[i,1])
                        DEVPOS(PROW(),06);DEVOUT(mnome_ven)
                        DEVPOS(PROW(),40);DEVOUT(TRANSFORM(m_resumo[i,2],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_resumo[i,3],'99,999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_resumo[i,4],'99,999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_resumo[i,3] - m_resumo[i,4],'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(((m_resumo[i,3] - m_resumo[i,4]) / m_resumo[i,3]) * 100,'9999.99')
                NEXT
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('VEN_MENOR.REL')
        /*
        IF mimp_tipo = 2
                lertexto('VEN_MENOR.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **************************************
