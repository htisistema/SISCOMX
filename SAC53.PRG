********************
* LISTAGEM ICM NA FONTE
********************
MEMVAR getlist

FUNCTION sac53
**************
LOCAL MPRG:='SAC53',;
      lci,cci,lba,cba,opcao,mquantd,marq,i,mdata1,mdata2,mtot_icm

PRIVATE mtraco,telaprint,mtit,mtipo,mpag


mtraco := REPLI('=',80)

lci := 00
cci := 00
lba := 06
cba := 33
*---------------------------------------------------------------------------
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*---------------------------------------------------------------------------

op_tela(10,10,20,43,'RELATORIO ICM NA FONTE')

WHILE .T.
        mdata1 := mdata2 := CTOD('  /  /  ')
        mquantd := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ lci+2,cci TO lci+2,cba
        @ lci+4,cci TO lci+4,cba DOUBLE
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial___:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final_____:')
        DEVPOS(lci+5,cci+2);DEVOUT('Quantd.Copias__:')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+5,cci+19 GET mquantd PICT '99999'
        READ
        IF LASTKEY() = 27
                EXIT
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
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'S'
                WHILE .T.
                        mtot_icm = 0
                        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                        mpag = 1
                        mtit = 'Listagem de ICM na fonte a Pagar'
                        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                        SET DEVI TO PRINT
                        SET PRINT TO (m_indiv[1,17])
                        cabecalho(mpag,mtit,mtipo)
                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                        DEVPOS(PROW(),11);DEVOUT('Codigo')
                        DEVPOS(PROW(),20);DEVOUT('Doc.(NF)')
                        DEVPOS(PROW(),30);DEVOUT('ICM Recolhido')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        WHILE mov->data_s_e <= mdata2 .AND. ! EOF()
                                IF mov->icm_f = 0
                                        SKIP
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(mov->data_s_e)
                                DEVPOS(PROW(),11);DEVOUT(mov->codigo)
                                DEVPOS(PROW(),20);DEVOUT(mov->documento)
                                DEVPOS(PROW(),30);DEVOUTPICT(mov->icm_f * (mov->quantd * mov->vl_fatura),'9,999,999.99')
                                mtot_icm = mtot_icm + mov->icm_f * (mov->quantd * mov->vl_fatura)
                                SKIP
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo)
                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                        DEVPOS(PROW(),11);DEVOUT('Codigo')
                                        DEVPOS(PROW(),20);DEVOUT('Doc.(NF)')
                                        DEVPOS(PROW(),30);DEVOUT('ICM Recolhido')
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        LOOP
                                ENDIF
                        ENDDO
                        IF PROW() >= 57
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo)
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),11);DEVOUT('Codigo')
                                DEVPOS(PROW(),20);DEVOUT('Doc.(NF)')
                                DEVPOS(PROW(),30);DEVOUT('ICM Recolhido')
                                DEVPOS(PROW(),00);DEVOUT(mtraco)
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT('Total de ICM Recolhido no Perido R$:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_icm,'99,999,999.99')
                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                        EJECT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        EXIT
                ENDDO
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

