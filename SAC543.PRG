*********************************
* LISTAGEM MOVIMENTO GERAL RESUMO SAIDAS/LUCROS
*********************************

FUNCTION sac543
**************
LOCAL MPRG:='SAC543',mtitulo:='RELATORIO DE MOVIMENTO ENTRADA PRODUTO'

LOCAL lci,cci,lba,cba,opcao,mdata1,mdata2

PRIVATE mtraco,mtit,mtipo,mpag,mcod_for:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',137)

lci := cci := 00
lba := 05
cba := 70
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
mtipo_imp := m_indiv[1,18]
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_for := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo Fornecedor:')
        @ lci+1,cci+21 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+21 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+21 GET mcod_for PICT '9999' VALID IF(EMPTY(mcod_for),.T.,v_fornece(mcod_for,lci+7,cci+26))
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        ***************************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ***************************
        mov->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo')
                LOOP
        ENDIF
        mpag := 0
        mtit = 'Listagem de Entrada de Produto'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        marq := 'RES_MOV.REL'
        IF ! imp_arq('RES_MOV.REL','R')
                LOOP
        ENDIF
        WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                prog_imp(RECNO(),DTOC(mov->data_s_e))
                ver_cod(VAL(mov->codigo),,,,,'*')
                IF (SUBSTR(mov->documento,1,2) = 'BL');
                   .OR. mov->ent_sai = 'S';
                   .OR. (mov->cancel = 'C');
                   .OR. (mov->tipo = '03');
                   .OR. (! EMPTY(mcod_for) .AND. mov->cod_fab <> STRZERO(mcod_for,4));
                   .OR. mov->cancel = 'C'
                        SKIP
                        LOOP
                ENDIF
                IF mpag = 0 .OR. PROW() >= 59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Produto                                       ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Quantd.')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  Pr.Custo')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('  Pr.Venda')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Lucro [R$]')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Luc[%]')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                ver_cod(VAL(mov->codigo),,,,0,'*')
                DEVPOS(PROW()+1,00);DEVOUT(mov->data_s_e)
                DEVPOS(PROW(),PCOL()+1);DEVOUT(mov->codigo+'-'+mov->produto)
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mov->quantd,'999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mov->pr_unit,'999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(merc->pr_venda,'999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(merc->pr_venda-mov->pr_unit,'999,999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(((merc->pr_venda-mov->pr_unit)/merc->pr_venda)*100,'999.99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(mov->cod_forn+'-'+LEFT(mov->fornece,25))
                SKIP
        ENDDO
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

