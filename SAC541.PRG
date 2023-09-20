**************************
* RELATORIO DE ESTATISTICA VLR.VENDIDO
**************************
MEMVAR getlist,nivel_acess

FUNCTION sac541
**************
LOCAL MPRG:='SAC541',mtitulo:='RELATORIO DE ESTATISTICA VLR.VENDIDO / PRECO DE TABELA',;
      lci,cci,lba,cba,opcao,i,mdata1,mdata2,;
      mtot_prc,mtot_ven,mtipo_pr:='1'

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,point,mnome_ven,mcod_ven

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',132)

lci := cci := 0
lba := 05
cba := 53
*----------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*----------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mtipo_pr := '1'
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_ven := mtot_prc := mtot_ven := 0
        mnome_ven := SPACE(30)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod.Vendedor...:')
        DEVPOS(lci+4,cci+2);DEVOUT('Preco: [1]->Venda ou [2]->Venda1:')

        @ lci+1,cci+19 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET mcod_ven PICT '999' VALID IF(EMPTY(mcod_ven),.T.,ven(mcod_ven,lci+3,cci+23))
        @ lci+4,cci+36 GET mtipo_pr PICT '@!' VALID mtipo_pr $ '1,2'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(lci+3,cci+23);DEVOUT(sen->snome)
        setcor(1)
        ****************
        SELE('mov');ORDSETFOCUS(1)
        GO TOP
        ****************
        mov->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        IF ! imp_arq('EST_VENDA.REL','R')
                LOOP
        ENDIF
        WHILE .T.
                mtot_prc = 0
                mtot_ven = 0
                mpag = 1
                mtit = 'Listagem de Estatistica Vlr.Venda/Preco de Tabela'
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                IF ! EMPTY(mcod_ven)
                        mtipo := mtipo + ' - Vendedor: '+STRZERO(mcod_ven,3)
                ENDIF
                cabecalho(mpag,mtit,mtipo,mprg)
                WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                        point = RECNO()

                        IF mov->ent_sai = 'E';
                           .OR. (! EMPTY(mcod_ven) .AND. mov->cod_vend <> STRZERO(mcod_ven,3))
                                SKIP
                                LOOP
                        ENDIF
                        IF ! ver_ven(mov->cod_vend,'*')
                                mnome_ven := SPACE(20)
                        ELSE
                                mnome_ven := sen->snome
                        ENDIF
                        mtot_ven = mtot_ven + mov->vl_vend * mov->quantd
                        IF mtipo_pr = '1'
                                mtot_prc = mtot_prc + mov->pr_venda * mov->quantd
                        ELSE
                                mtot_prc = mtot_prc + mov->pr_venda1 * mov->quantd
                        ENDIF
                        SKIP
                ENDDO
                DEVPOS(PROW()+2,00);DEVOUT('Total a Preco Vendido..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ven,'999,999,999.99')
                IF mtipo_pr = '1'
                        DEVPOS(PROW()+1,00);DEVOUT('Total a Preco de Venda.:')
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT('Total a Preco de Venda1:')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_prc,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('                         --------------')
                DEVPOS(PROW()+1,00);DEVOUT('Total de Diferenca (R$):')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ven - mtot_prc,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Diferenca na Media (%).:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mtot_prc / mtot_ven) * 100,'999.99')
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('EST_VENDA.REL')
                /*
                IF mimp_tipo = 2
                        lertexto('EST_VENDA.REL')
                ELSEIF mtipo_imp = 'D'
                        
                ELSE
                        MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
                ENDIF
                */
                EXIT
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **************************************
