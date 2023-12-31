********************
* LISTAGEM MOVIMENTO GERAL P/ DOCUMENTOS
********************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac542
**************
LOCAL mprg:='SAC542',mtitulo:='RELATORIO DE MOVIMENTO PRODUTOS GERAL P/DOCUMENTO',;
      lci,cci,lba,cba,opcao,mdata1,mdata2,mcod_op,mcod_aux,;
      mtot_ent,mtot_sai,muf,mdocumento,mvlr_doc:=0

PRIVATE mtraco,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lci := cci := 00
lba := 05
cba := 65
*----------------------------------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        mop := 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_aux := SPACE(1)
        mcod_op := SPACE(2)
        muf := SPACE(2)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Sigla do Estado:')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET muf PICT '@!' VALID  v_uf(muf)               //WHEN men_get(lci+5,cci+19,'Digite a Sigla do Estado que desja ou deixe em BRANCO para imprimir todos')
        @ 25,00 GET mcod_aux PICT '9' VALID mcod_aux $ '1,2,3,4'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                EXIT
        ENDIF
        mcod_op = STRZERO(VAL(mcod_aux),2)
        setcor(10)
        @ lci+04,cci+1 PROMPT ' Geral '
        @ lci+04,cci+09 PROMPT ' Entradas '
        @ lci+04,cci+20 PROMPT ' Saidas '
        SET INTEN ON
        MENU TO mop
        setcor(1)
        IF LASTKEY() = 27
                LOOP
        ENDIF

        ****************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ****************
        mov->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        marq := 'MOVIMENTO.REL'
        IF ! imp_arq('MOVIMENTO.REL','R')
                LOOP
        ELSE
                mtot_ent = 0
                mtot_sai = 0
                mpag = 1
                mtit = 'Listagem de Movimento'
                IF ! EMPTY(muf)
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' do Estado: '+muf
                ELSE
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                ENDIF
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT('Cli./Forn.')
                DEVPOS(PROW(),38);DEVOUT('  Data  ')
                DEVPOS(PROW(),48);DEVOUT(' Documento')
                DEVPOS(PROW(),60);DEVOUT('Ent/Sai')
                DEVPOS(PROW(),69);DEVOUT(' Valor Total')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                        prog_imp(RECNO())
                        IF ! EMPTY(muf)
                                IF (! ver_cli(VAL(mov->cod_cli),,,1));
                                   .OR. (muf <> cons_cli[1,25])
                                        SKIP
                                        LOOP
                                ENDIF
                        ENDIF
                        IF (mop = 2 .AND. mov->ent_sai = 'S');
                           .OR. (mop = 3 .AND. mov->ent_sai = 'E');
                           .OR. (mcod_op = '01' .AND. (mov->tipo = '02' .OR. SUBSTR(mov->documento,1,2) = 'BL'));
                           .OR. (mcod_op = '03' .AND. (mov->tipo = '01' .OR. mov->tipo = '02'));
                           .OR. (mcod_op = '04' .AND. mov->tipo = '03');
                           .OR. (mov->cancel = 'C');
                           .OR. SUBSTR(mov->documento,1,2) = 'BL'
                                SKIP
                                LOOP
                        ENDIF
                        mvlr_doc := 0
                        mdocumento := mov->documento
                        IF mov->ent_sai = 'E'
                                DEVPOS(PROW()+1,00);DEVOUT(mov->cod_forn+'-'+mov->fornece)
                        ELSEIF mov->ent_sai = 'S'
                                DEVPOS(PROW()+1,00);DEVOUT(mov->cod_cli+'-'+mov->cliente)
                        ENDIF
                        DEVPOS(PROW(),38);DEVOUT(mov->data_s_e)
                        DEVPOS(PROW(),48);DEVOUT(mov->documento)
                        DEVPOS(PROW(),63);DEVOUT(mov->ent_sai)
                        WHILE mdocumento = mov->documento
                                IF mov->ent_sai = 'E'
                                        mvlr_doc = mvlr_doc + mov->pr_unit * mov->quantd
                                        mtot_ent = mtot_ent + mov->pr_unit * mov->quantd

                                ELSEIF mov->ent_sai = 'S'
                                        IF mcod_op = '04' .OR. mcod_op = '02'
                                                mvlr_doc = mvlr_doc + (mov->vl_vend * mov->quantd)
                                                mtot_sai = mtot_sai + mov->pr_unit * mov->quantd
                                        ELSE
                                                mvlr_doc = mvlr_doc + (mov->vl_fatura * mov->quantd)
                                                mtot_sai = mtot_sai + mov->vl_fatura * mov->quantd
                                        ENDIF
                                ENDIF
                                SKIP
                        ENDDO
                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mvlr_doc,'9,999,999.99'))
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo')
                                DEVPOS(PROW(),47);DEVOUT('Doc.(NF)')
                                DEVPOS(PROW(),57);DEVOUT('Entrada')
                                DEVPOS(PROW(),68);DEVOUT('Saida')
                                DEVPOS(PROW(),78);DEVOUT('Valor')
                                DEVPOS(PROW(),86);DEVOUT('Tot/Ent.')
                                DEVPOS(PROW(),95);DEVOUT('Tot/Saida')
                                DEVPOS(PROW(),106);DEVOUT('Vlr. Menor')
                                DEVPOS(PROW(),118);DEVOUT('Dif(%)')
                                DEVPOS(PROW(),125);DEVOUT('Cli./Forn.')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                LOOP
                        ENDIF
                ENDDO
                IF PROW() >= 55
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Codigo')
                        DEVPOS(PROW(),47);DEVOUT('Doc.(NF)')
                        DEVPOS(PROW(),57);DEVOUT('Entrada')
                        DEVPOS(PROW(),68);DEVOUT('Saida')
                        DEVPOS(PROW(),78);DEVOUT('Valor')
                        DEVPOS(PROW(),86);DEVOUT('Tot/Ent.')
                        DEVPOS(PROW(),95);DEVOUT('Tot/Saida')
                        DEVPOS(PROW(),106);DEVOUT('Vlr. Menor')
                        DEVPOS(PROW(),118);DEVOUT('Dif(%)')
                        DEVPOS(PROW(),125);DEVOUT('Cli./Forn.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('**************************** TOTAL GERAL *******************************')
                DEVPOS(PROW()+1,00);DEVOUT('Total de ENTRADAS..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ent,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Total de SAIDAS....:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_sai,'999,999,999.99')
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
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
