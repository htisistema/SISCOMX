******************************************
* LISTAGEM MOVIMENTO DEVOLUCAO DE PRODUTO
******************************************
FUNCTION sac5devol
********************
LOCAL MPRG:='SAC5DEVOL',;
      lci,cci,lba,cba,opcao,mdata1,mdata2,mcod_op,mcod_forn,mcod_cli,i:=0,y:=0,mcodemp:=SPACE(3),cons_mov:={},;
      cons_vendedor:={},mop_cab:='S'

PRIVATE mtraco,mtit,mtipo,mpag,mposicao,mcod_merc:=0,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mgrupo,msub_grupo

IF ! ver_nivel(mprg,'RELATORIO DE MOVIMENTO DEVOLUCAO PRODUTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)

lci := cci := 00
lba := 21
cba := 70
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(10,10,17,80,'RELATORIO DE DEVOLUCAO PRODUTO')
WHILE .T.
        limpa(00,00,30,80)
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_aux := '4'
        mcod_op := SPACE(2)
        mgrupo := mcod_cli := mcod_ven:=mcod_ope:= msub_grupo := mcod_merc := mponto := mtot_qtd := mtot_vlr := mger_qtd := mger_vlr := 0
        mop_cab := 'S'
        mcodemp:=SPACE(3)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci  ,cci+2);DEVOUT('Codigo da Empresa:')
        DEVPOS(lci  ,cci+26);DEVOUT('Imprimir o Cabecalho:')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo PRODUTO...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo GRUPO.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo SUB-GRUPO.:')
        DEVPOS(lci+6,cci+2);DEVOUT('Codigo VENDEDOR..:')
        DEVPOS(lci+7,cci+2);DEVOUT('Codigo OPERADOR..:')
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
        @ lci+6,cci+21 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+6,cci+26))
        @ lci+7,cci+21 GET mcod_ope PICT '999' VALID IF(EMPTY(mcod_ope),.T.,ven(mcod_ope,lci+7,cci+26))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Aguarde um momento coletando dados p/o relatorio')
        mpag := 0
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        marq := 'DEV_MOV.REL'
        cons_mov := {}
        cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        //cComm  := ccomm + " AND cancel IS NULL AND ent_sai = 'E' AND devolucao IS NULL AND devolucao = ' '"
	ccomm  := ccomm + " AND documento like 'DV%'"
        IF ! EMPTY(mgrupo)
                cComm  := ccomm + " AND gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF ! EMPTY(msub_grupo)
                cComm  := ccomm + " AND gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                cComm  := ccomm + " AND codigo = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcod_ven)
                cComm  := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_ven,3))
        ENDIF
        IF ! EMPTY(mcod_ope)
                cComm  := ccomm + " AND cod_oper = "+sr_cdbvalue(STRZERO(mcod_ope,3))
        ENDIF
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        ccomm := ccomm + " ORDER BY produto"
        mtit = 'Listagem de Movimento Devolucao Produto'
        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe movimento neste Periodo....')
                LOOP
        ENDIF
        IF ! imp_arq('DEV_MOV.REL','R')
                LOOP
        ENDIF

        i := 0
        FOR i = 1 TO LEN(cons_mov)
                prog_imp(i)
                IF mpag = 0 .OR. PROW() >= 59
                	IF (mop_cab = 'N' .AND. mpag = 0) .OR. mop_cab = 'S'
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),48);DEVOUT('Quantidade')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.Vendas')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Vlr.Total')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vend')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Oper')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Data - Hora')
                                DEVPOS(PROW(),PCOL()+7);DEVOUT('Doc.Orig.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Doc.Devol')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cons_mov[i,10]+'-'+cons_mov[i,11])
                DEVPOS(PROW(),49);DEVOUT(TRANSFORM(cons_mov[i,19],'9,999.999'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cons_mov[i,24],'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(cons_mov[i,19] * cons_mov[i,24],'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(cons_mov[i,28])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(cons_mov[i,30])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(cons_mov[i,16])+'-'+cons_mov[i,95])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_mov[i,3])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(cons_mov[i,2])
                mtot_qtd := mtot_qtd + cons_mov[i,19]
                mtot_vlr := mtot_vlr + (cons_mov[i,19]*cons_mov[i,24])
                mger_qtd := mger_qtd + cons_mov[i,19]
                mger_vlr := mger_vlr + (cons_mov[i,19]*cons_mov[i,24])
        NEXT
        IF PROW() > 53
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,47);DEVOUT('-----------')
        DEVPOS(PROW(),PCOL()+12);DEVOUT('------------')
        DEVPOS(PROW()+1,00);DEVOUT('R E S U M O   G E R A L:')
        DEVPOS(PROW(),47);DEVOUT(TRANSFORM(mger_qtd,'999,999.999'))
        DEVPOS(PROW(),PCOL()+12);DEVOUT(TRANSFORM(mger_vlr,'9,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(TIME())
        EJECT
	SETPRC(00,00)
	SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************

