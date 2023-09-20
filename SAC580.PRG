*******************
* LISTAGEM DE PRODUTO COM ESTOQUE A.V.
*******************
MEMVAR getlist

FUNCTION sac580
**************
LOCAL MPRG:='SAC580'

LOCAL lci,cci,lba,cba,mgrupo,msub_grupo,opcao,;
      i,mtecla

PRIVATE mtraco,mtot_item,telaprint,mtit,mtipo,mpag,mav:=1,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

mtraco := REPLI('=',80)

lci := cci := 0
lba := 2
cba := 75
*-------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
//
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*-------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Estoque Haver ')
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mgrupo := msub_grupo := mtot_item := 0
        mensagem('Preencha os Campos ou em Brnaco p/Imprimir todos - <ESC>p/Sair')
        DEVPOS(lci,cci);DEVOUT('Cod.Grupo......:')
        DEVPOS(lci+1,cci);DEVOUT('Cod.Sub-Grupo..:')

        @ lci,cci+17 GET mgrupo PICT '999' VALID ver_gru(mgrupo,lci,cci+23)
        @ lci+1,cci+17 GET msub_grupo PICT '99' WHEN ! EMPTY(mgrupo) VALID ver_sgru(mgrupo,msub_grupo,lci+1,cci+23)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        mtecla := mensagem1('[1] Ordem Alfabetica  -  [2] Ordem Codigo:','1','1,2')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mtecla = '1'
                *****************
                SELE('merc');ORDSETFOCUS(3)
                GO TOP
                *****************
                mensagem('Gerando Listagem de Produto A.V. p/ordem Alfabetica !!!')
        ELSE
                *****************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                *****************
                mensagem('Gerando Listagem de Produto A.V. p/ordem de Codigo !!!')
        ENDIF
        IF ! imp_arq('HAVER.REL','R')
                LOOP
        ENDIF
        mpag = 0
        mtit := 'Listagem de Produto A.V.'
        IF mtecla = '1'
                mtipo := 'por Ordem Alfabetica'
        ELSE
                mtipo := 'por Ordem de Codigo'
        ENDIF
        WHILE ! EOF()
                IF mpag = 0 .OR. PROW() >= 60
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo)

                        DEVPOS(PROW()+1,01);DEVOUT('Cod.')
                        DEVPOS(PROW(),06);DEVOUT('Descricao')
                        DEVPOS(PROW(),50);DEVOUT('Fisico')
                        DEVPOS(PROW(),61);DEVOUT('A.V.')
                        DEVPOS(PROW(),69);DEVOUT('Total')
                        DEVPOS(PROW(),75);DEVOUT('Obs.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF (merc->saldo_av = 0);
                   .OR. (! EMPTY(mgrupo) .AND. STRZERO(mgrupo,3) <> SUBSTR(merc->gru_sub,1,3));
                   .OR. (! EMPTY(msub_grupo) .AND. STRZERO(mgrupo,3)+STRZERO(msub_grupo,2) <> merc->gru_sub)
                        SKIP
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(merc->cod_merc)
                DEVPOS(PROW(),06);DEVOUT(merc->merc)
                DEVPOS(PROW(),48);DEVOUTPICT(merc->saldo_mer,'99999.99')
                DEVPOS(PROW(),57);DEVOUTPICT(merc->saldo_av,'99999.99')
                DEVPOS(PROW(),65);DEVOUTPICT(merc->saldo_av + merc->saldo_mer,'999999.99')
                DEVPOS(PROW(),75);DEVOUT('.....')
                mtot_item ++
                SKIP
        ENDDO
        IF PROW() >= 57
                EJECT
                mpag ++
                cabecalho(mpag,mtit,mtipo)
        ENDIF
        DEVPOS(PROW()+3,00);DEVOUT('Total de Item:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mtot_item,'999,999.99')))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HAVER.REL')
        /*
        IF mimp_tipo = 2
                lertexto('HAVER.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************** F I M **************************************
