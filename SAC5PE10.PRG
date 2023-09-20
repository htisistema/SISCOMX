**************************
* LISTAGEM VENDAS A MENOR
**************************
MEMVAR getlist,nivel_acess

FUNCTION sac5pe10
*****************
LOCAL MPRG:='SAC5PE10',;
      tela,lci,cci,lba,cba,opcao,mpercent,i,mtecla,mdata1,mdata2,;
      mtot_qua,mtot_prc,mtot_dif,mtot_ven,mvlr_dif,cons_peds := {}

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,point,mnome_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_op

IF ! ver_nivel(mprg,'RELATORIO DE VENDAS A MENOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
lci := cci := 0
lba := 14
cba := 33
op_tela(08,05,14,63,' Vendas a Menor ')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,80)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_op := SPACE(2)
        mpercent := mtot_prc := mtot_dif := mtot_ven := mtot_qua := mvlr_dif := 0
        mnome_ven := SPACE(30)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('% de tolerancia:')
        @ lci+1,cci+19 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+19 GET mdata2 VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+5,cci+19 GET mpercent PICT '999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        cons_peds := {}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2) + " AND  (ppag = ' ' OR ppag IS NULL OR ppag = '*')",,.t.,@cons_peds)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_peds) = 0
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('VEN_MENOR.REL','R')
                LOOP
        ENDIF
        mtot_prc := mtot_dif := mtot_ven := mtot_qua := mvlr_dif := 0
        mpag = 1
        mtit = 'Listagem de Vendas Menor com tolerancia de '+TRANSFORM(mpercent,'999.99')+' %'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+'   Movimento PEDIDO'
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
        i := 0
        FOR i = 1 TO LEN(cons_peds)
                prog_imp(i,DTOC(cons_peds[i,4]))
                IF (cons_peds[i,20] <= cons_peds[i,18]);
                   .OR. ((cons_peds[i,14] * cons_peds[i,20] - cons_peds[i,14] * cons_peds[i,18]) * 100 / (cons_peds[i,14] * cons_peds[i,20]) <= mpercent)
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_peds[i,4])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_peds[i,6])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(cons_peds[i,7],30))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_peds[i,2])
                DEVPOS(PROW(),PCOL()+5);DEVOUT(cons_peds[i,32])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(cons_peds[i,33],20))
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_peds[i,14],'99999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_peds[i,20] * cons_peds[i,14],'9,999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_peds[i,18] * cons_peds[i,14],'9,999,999.99')
                mvlr_dif = (cons_peds[i,14] * cons_peds[i,20] - cons_peds[i,14] * cons_peds[i,18])
                IF mvlr_dif > 0
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_dif,'99,999.99')
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(0.00,'99,999.99')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((cons_peds[i,14] * cons_peds[i,20] - cons_peds[i,14] * cons_peds[i,18]) * 100 / (cons_peds[i,14] * cons_peds[i,20]),'99.99')
                mtot_qua = mtot_qua + cons_peds[i,14]
                mtot_dif = mtot_dif + mvlr_dif
                mtot_ven = mtot_ven + cons_peds[i,18] * cons_peds[i,14]
                mtot_prc = mtot_prc + cons_peds[i,20] * cons_peds[i,14]
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
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('VEN_MENOR.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **************************************
