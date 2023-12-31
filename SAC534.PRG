*********************************
* LISTAGEM MOVIMENTO GERAL SINTETICO DE FORNECEDORES
*********************************
MEMVAR getlist,mdata_sis,nivel_acess,mcaminho

FUNCTION sac534
**************
LOCAL MPRG:='SAC534',mtitulo:='RELATORIO DE MOVIMENTO SINTETICO DE FORNECEDORES',;
      lci,cci,lba,cba,opcao,i,mtecla,mdata1,mdata2,mcod_op,;
      mtot_ent,mtot_sai,mvlr_ent,mvlr_sai,mcod_aux,mcodigo,point,msaldo,;
      mtotg_ent,mtotg_sai,mvlrg_ent,mvlrg_sai,mproduto:={},m_forn:={},;
      m_saldo:={},mcod_ven,mgrupo,mcod_forn,mcod_cli,mcod_ope,;
      mcont_cli:=0,mqtd_cli:=0,mtip_zero:='N',mimp_total:='S',ment_sai := ' ',;
      mordem:=' ',mtipo_custo:=' '

PRIVATE mtraco,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcep:='  ',cons_forn:={},;
        cons_mov:={},cons_cli:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',137)

lci := cci := 0
lba := 12
cba := 70
*----------------------------------------------------------------------------
/*
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
IF ! AbriArq('SACCLI','CLI');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*/
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        limpa(lci,cci,lba+2,cba)
        ************************
        //SELE('forn');ORDSETFOCUS(1)
        ************************
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_aux := mordem := SPACE(1)
        mcod_op := SPACE(2)
        ment_sai := 'S'
        mgrupo := mcod_ven := mcod_ope := mcod_forn := mcod_cli := mqtd_cli := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Grupo............:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Vendedor..:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Operador..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo Fornecedor:')
        DEVPOS(lci+7,cci+2);DEVOUT('Codigo Cliente...:')
        DEVPOS(lci+8,cci+2);DEVOUT('C/Valor ZERO [S/N]')
        DEVPOS(lci+9,cci+2);DEVOUT('Quantd.Fornecedor:')
        DEVPOS(lci+10,cci+2);DEVOUT('Imprimir Totalizadores em R$:')
        DEVPOS(lci+11,cci+2);DEVOUT('[E]ntradas ou [S]aidas......:')
        DEVPOS(lci+12,cci+2);DEVOUT('Forma da Ordem..............:')
        DEVPOS(lci+13,cci+2);DEVOUT('Vlr.p/Lucro [C]usto Merc. [R]Custo Real:')

        @ lci+1,cci+21 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+21 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+21 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,lci+3,cci+26,.F.))
        @ lci+4,cci+21 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+4,cci+26))
        @ lci+5,cci+21 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+5,cci+26))
        @ lci+6,cci+21 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+5,cci+26))
        @ lci+7,cci+21 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+6,cci+27)
        @ lci+8,cci+21 GET mtip_zero PICT '@!' VALID mtip_zero $ 'S,N'
        @ lci+9,cci+21 GET mqtd_cli PICT '9999'
        @ lci+10,cci+32 GET mimp_total PICT '@!' VALID mimp_total $ 'S,N'
        @ lci+11,cci+32 GET ment_sai PICT '@!' VALID ment_sai $ 'E,S'
        @ lci+12,cci+32 GET mordem PICT '@!' VALID mordem $ 'A,Q,V,L' .AND. lim_get() WHEN ment_sai = 'S' .AND. men_get(1,1,'Tipos de Ordem: [A]lfabetica [Q]uantidade [v]Total Venda [L]ucro')
        @ lci+13,cci+42 GET mtipo_custo PICT '@!' VALID mtipo_custo $ 'C,R'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        marq := 'RES_MOV.REL'
        IF ! imp_arq('RES_MOV.REL','R')
                LOOP
        ENDIF
        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************

        cComm  := "SELECT cod_forn,razao,0,0,0,0,0,0 FROM sacforn "
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        ccomm := ccomm + " ORDER BY razao"
        cons_forn:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_forn)
        sr_getconnection():exec('COMMIT',,.f.)
        i:=0
        FOR i = 1 TO LEN(cons_forn)
                prog_imp(i,cons_forn[i,1]+'-'+cons_forn[i,2])
                //                     1                2                   3                    4                     5
                IF mtipo_custo = 'C'
                        cComm  := "SELECT SUM(quantd),SUM(quantd*pr_unit),SUM(quantd*vl_vend),SUM(quantd*pr_venda),SUM(quantd*cust_mer)"
                ELSE
                        cComm  := "SELECT SUM(quantd),SUM(quantd*pr_unit),SUM(quantd*vl_vend),SUM(quantd*pr_venda),SUM(quantd*pr_unit)"
                ENDIF
                cComm  := ccomm + " FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+ " AND cancel IS NULL"
                ccomm := ccomm + " AND tipo = '02'"
                ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(cons_forn[i,1])
                IF ment_sai = 'E'
                        ccomm := ccomm + " AND ent_sai = 'E'"
                ENDIF
                IF ment_sai = 'S'
                        ccomm := ccomm + " AND ent_sai = 'S'"
                ENDIF
                IF ! EMPTY(mcod_cli)
                        ccomm := ccomm + " AND cod_cli = "+sr_cdbvalue(mcod_cli)
                ENDIF
                IF ! EMPTY(mcod_ven)
                        ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue( STRZERO(mcod_ven,3))
                ENDIF
                IF ! EMPTY(mcod_ope)
                        ccomm := ccomm + " AND cod_oper = "+sr_cdbvalue( STRZERO(mcod_ope,3))
                ENDIF
                IF ! EMPTY(mgrupo)
                        cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
                ENDIF
                cons_mov:={}
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) = 0
                        atencao('Nao existe nenhum Documento a ser baixado')
                        LOOP
                ENDIF
                cons_forn[i,3] := cons_mov[1,1] //quantd
                cons_forn[i,4] := cons_mov[1,2] //quantd*pr_unit
                cons_forn[i,5] := cons_mov[1,3] //quantd*vl_vend
                cons_forn[i,6] := cons_mov[1,4] //quantd*pr_venda
                cons_forn[i,7] := cons_mov[1,5] //quantd*cust_mer
                cons_forn[i,8] := cons_mov[1,3] - cons_mov[1,5] //Lucro
        NEXT
        IF mordem = 'Q'
                ASORT(cons_forn,,, {|x,y| x[3] > y[3]})
        ELSEIF mordem = 'V'
                ASORT(cons_forn,,, {|x,y| x[5] > y[5]})
        ELSEIF mordem = 'L'
                ASORT(cons_forn,,, {|x,y| x[8] > y[8]})
        ENDIF
        mpag := mtot_ent := mtot_sai := mvlr_ent := mvlr_sai := mtotg_ent := mtotg_sai := mvlrg_ent := ;
        mvlrg_sai := 0
        IF ! EMPTY(mcod_ven)
                mtit = 'Listagem de Movimento (RESUMO GERAL) do Vendedor Cod.: '+STRZERO(mcod_ven,3)
        ELSE
                mtit = 'Listagem de Movimento (RESUMO GERAL)'
        ENDIF
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        IF ment_sai = 'E'
                mtipo := mtipo + '  -  E N T R A D A S'
        ELSE
                mtipo := mtipo + '  -  S A I D A S'
        ENDIF
        mcont_cli := i := 0
        FOR i = 1 TO LEN(cons_forn)
                IF mpag = 0 .OR. PROW() >= 59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Codigo')
                        DEVPOS(PROW(),07);DEVOUT('Fornecedor')
                        IF ment_sai = 'E'
                                DEVPOS(PROW(),49);DEVOUT('Qtd.Entra.')
                        ELSE
                                DEVPOS(PROW(),49);DEVOUT(' Qtd.Saida')
                        ENDIF
                        DEVPOS(PROW(),64);DEVOUT('Tot.Pr.Custo')
                        DEVPOS(PROW(),82);DEVOUT('Tot.Pr.Venda')
                        DEVPOS(PROW(),98);DEVOUT('Tot.Lucro')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        IF ! EMPTY(mcod_forn)
                                DEVPOS(PROW()+1,02);DEVOUT('FORNECEDOR: '+cons_forn[1,1]+' - '+cons_forn[1,2])
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                ENDIF
                IF (mtip_zero = 'N' .AND. EMPTY(cons_forn[i,5]))
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_forn[i,1])
                DEVPOS(PROW(),07);DEVOUT(cons_forn[i,2])
                IF ment_sai = 'E'
                        DEVPOS(PROW(),49);DEVOUT(TRANSFORM(cons_forn[i,3],'999,999.99'))
                        DEVPOS(PROW(),63);DEVOUT(TRANSFORM(cons_forn[i,4],'99,999,999.99'))
                        DEVPOS(PROW(),81);DEVOUT(TRANSFORM(cons_forn[i,6],'99,999,999.99'))
                        DEVPOS(PROW(),94);DEVOUT(TRANSFORM(cons_forn[i,6]-cons_forn[i,4],'99,999,999.99'))
                        mvlrg_sai := mvlrg_sai + (cons_forn[i,3] * cons_forn[i,6])
                ELSE
                        DEVPOS(PROW(),49);DEVOUT(TRANSFORM(cons_forn[i,3],'999,999.99'))
                        DEVPOS(PROW(),63);DEVOUT(TRANSFORM(cons_forn[i,7],'99,999,999.99'))
                        DEVPOS(PROW(),81);DEVOUT(TRANSFORM(cons_forn[i,5],'99,999,999.99'))
                        DEVPOS(PROW(),94);DEVOUT(TRANSFORM(cons_forn[i,5]-cons_forn[i,7],'99,999,999.99'))
                        mvlrg_sai := mvlrg_sai + (cons_forn[i,3] * cons_forn[i,5])
                ENDIF

                mcont_cli ++
                mtotg_sai := mtotg_sai + cons_forn[i,3]
                IF ! EMPTY(mqtd_cli) .AND. mqtd_cli = mcont_cli
                        EXIT
                ENDIF
        NEXT
        IF PROW() > 53
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT('R E S U M O   G E R A L')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Fornecedores: '+TRANSFORM(mcont_cli,'9,999,999.99'))
        IF mimp_total = 'S'
                IF ment_sai = 'E'
                        DEVPOS(PROW()+1,00);DEVOUT('Total de ENTRADAS..: '+TRANSFORM(mtotg_sai,'9,999,999.99')+' - Valor: '+TRANSFORM(mvlrg_sai,'999,999,999,999.99'))
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT('Total de SAIDAS....: '+TRANSFORM(mtotg_sai,'9,999,999.99')+' - Valor: '+TRANSFORM(mvlrg_sai,'999,999,999,999.99'))
                ENDIF
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
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
*************************** F I M ************************

