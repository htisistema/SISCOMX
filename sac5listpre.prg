***************************************
* LISTAGEM MOVIMENTO LISTA DE PRESENTE
***************************************
FUNCTION sac5listpre
********************
LOCAL MPRG:='SAC5LISTPRE',;
      lci,cci,lba,cba,opcao,mdata1,mdata2,mcod_op,mcod_forn,mcod_cli,i:=0,y:=0,mcodemp:=SPACE(3),cons_mov:={},;
      cons_vendedor:={},mop_cab:='S'

PRIVATE mtraco,mtit,mtipo,mpag,mposicao,mcod_merc:=0,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mgrupo,msub_grupo

IF ! ver_nivel(mprg,'RELATORIO DE MOVIMENTO LISTA DE PRESENTE','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)

lci := cci := 00
lba := 21
cba := 70
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('SACCLI','CLI');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(10,10,17,80,'RELATORIO DE MOVIMENTO LISTA DE PRESENTE')
WHILE .T.
                
        limpa(00,00,30,80)
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_aux := '4'
        mcod_op := SPACE(2)
        mgrupo := mcod_forn := mcod_cli := ;
        msub_grupo := mcod_merc := mponto := 0
        mop_cab := 'S'
        mcodemp:=SPACE(3)
        mtot_qtd := mtot_vlr := mger_qtd := mger_vlr := 0

        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci  ,cci+2);DEVOUT('Codigo da Empresa:')
        DEVPOS(lci  ,cci+26);DEVOUT('Imprimir o Cabecalho:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo PRODUTO...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo GRUPO.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo SUB-GRUPO.:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo FORNECEDOR:')
        DEVPOS(lci+7,cci+2);DEVOUT('Cod.List.Presente:')
        @ lci,cci+21 GET mcodemp PICT "999" VALID ver_emp(mcodemp,lci,cci+25,,'*') WHEN mmult_emp ='S'
        @ lci,cci+48 GET mop_cab PICT "@!" VALID mop_cab $ 'S,N'
        @ lci+1,cci+21 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+21 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+21 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+3,cci+27,,0)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_cod(mcod_merc,lci+3,cci+27,,0)
        @ lci+4,cci+21 GET mgrupo PICT '999' WHEN EMPTY(mcod_merc) VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,lci+4,cci+26,.F.))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_gru(@mgrupo,lci+4,cci+26,.F.)
        @ lci+5,cci+21 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo) .AND. EMPTY(mcod_merc) VALID ver_sgru(mgrupo,msub_grupo,lci+5,cci+26)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_sgru(mgrupo,msub_grupo,lci+5,cci+26)
        @ lci+6,cci+21 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+6,cci+26))
        @ lci+7,cci+21 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+7,cci+27)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        cons_vendedor:={}
        sr_getconnection():exec("SELECT * FROM insopera ORDER BY scod_op",,.t.,@cons_vendedor)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_vendedor) = 0
                atencao('Nao existe Nenhum Vendedor Cadastrado...')
        ENDIF

        mcod_op = STRZERO(VAL(mcod_aux),2)
        mensagem('Aguarde um momento coletando dados p/o relatorio')
        mpag := 0
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        marq := 'RES_MOV.REL'
        IF ! imp_arq('RES_MOV.REL','R')
                LOOP
        ENDIF
        i := 0
        FOR i = 1 TO LEN(cons_vendedor)
                prog_imp(i,cons_vendedor[i,1])
                cons_mov := {}
                cComm  := "SELECT codigo,produto,quantd,vl_fatura,convidado,cod_presente,documento,data_s_e FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                cComm  := ccomm + " AND tipo = '02' AND cancel IS NULL AND ent_sai = 'S' AND devolucao IS NULL"
	        cComm  := ccomm +" AND vl_vend > 0 AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
                cComm  := ccomm +" AND cod_vend IS NOT NULL AND documento NOT LIKE 'TR%'"
                cComm  := ccomm + " AND vl_vend > "+sr_cdbvalue(0)
                IF ! EMPTY(mgrupo)
                        cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
                ENDIF
                IF ! EMPTY(msub_grupo)
                        cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
                ENDIF
                IF ! EMPTY(mcod_merc)
                        cComm  := ccomm + " AND codigo = "+sr_cdbvalue(mcod_merc)
                ENDIF
                IF ! EMPTY(mcod_forn)
                        cComm  := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mcod_cli)
                        //cComm  := ccomm + " AND cod_cli = "+sr_cdbvalue(mcod_cli)
                        cComm  := ccomm + " AND cod_presente = "+sr_cdbvalue(mcod_cli)
                ELSE
                        ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
                ENDIF
                IF ! EMPTY(mcodemp)
                        cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                //cComm  := ccomm + " AND cod_presente IS NOT NULL AND NOT cod_presente = '00000'"
                cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(cons_vendedor[i,1])
                //ccomm := ccomm + " GROUP BY codigo,codigo,produto,produto"
                ccomm := ccomm + " ORDER BY codigo"
                mtit = 'Listagem de Movimento Produto na Lista Presente'
                sr_getconnection():exec(ccomm,,.t.,@cons_mov)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_mov) = 0
                        LOOP
                ENDIF
                IF mpag = 0 .OR. PROW() >= 59
                	IF (mop_cab = 'N' .AND. mpag = 0) .OR. mop_cab = 'S'
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo  Produto')
                                DEVPOS(PROW(),48);DEVOUT('Qtd.Saidas')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Vlr.Vendas')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vnd')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Convidado                  ')
                                DEVPOS(PROW(),PCOL());DEVOUT('List.Pre.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Documen.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Data')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                IF ! EMPTY(mcod_forn)
                                        DEVPOS(PROW()+1,00);DEVOUT('FORNECEDOR: '+STRZERO(mcod_forn,4)+' - ')
                                        v_fornece(mcod_forn,PROW(),PCOL()+1)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                        ENDIF
                ENDIF
                y:=0
                FOR y = 1 TO LEN(cons_mov)
                        DEVPOS(PROW()+1,00);DEVOUT(cons_mov[y,1])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[y,2])
                        DEVPOS(PROW(),47);DEVOUT(TRANSFORM(cons_mov[y,3],'999,999.999'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_mov[y,4],'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_vendedor[i,1])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[y,5])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[y,6])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[y,7])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[y,8])
                        mtot_qtd := mtot_qtd + cons_mov[y,3]
                        mtot_vlr := mtot_vlr + cons_mov[y,4]
                        mger_qtd := mger_qtd + cons_mov[y,3]
                        mger_vlr := mger_vlr + cons_mov[y,4]
                NEXT
                DEVPOS(PROW()+1,47);DEVOUT('-----------')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('------------')
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DO VENDEDOR CODIGO: '+cons_vendedor[i,1])
                DEVPOS(PROW(),47);DEVOUT(TRANSFORM(mtot_qtd,'999,999.999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                mtot_qtd := mtot_vlr := 0
        NEXT
        IF PROW() > 53
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,47);DEVOUT('-----------')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('------------')
        DEVPOS(PROW()+1,00);DEVOUT('R E S U M O   G E R A L:')
        DEVPOS(PROW(),47);DEVOUT(TRANSFORM(mger_qtd,'999,999.999'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_vlr,'9,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(TIME())
        EJECT
	SETPRC(00,00)
	SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************

