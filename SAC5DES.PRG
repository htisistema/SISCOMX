********************
* MENU DE RELATORIOS DE DESEPESAS
********************
MEMVAR getlist,mdata_sis

FUNCTION sac5des
***************
LOCAL MPRG:='SAC5DES',;
      mopcao,lba := 05,cba := 34

op_tela(10,10,15,44,'Relatorios de Despesas')
WHILE .T.
        exibi_prg(mprg)
        mensagem('Escolha a Opcao ou <ESC>p/ Retornar')
        mopcao := 0
        setcor(10)
        @ 0,0 PROMPT ' 0-> Extrato das Despesas p/DATA   '
        @ 1,0 PROMPT ' 1-> Extrato das Despesas p/CODIGO '
        @ 2,0 PROMPT ' 2-> Resumo  das Despesas          '
        @ 3,0 PROMPT ' 3-> Extrato dos Vales             '
        @ 4,0 PROMPT ' 4-> Listagem Recebimento Diversos '
        @ 5,0 PROMPT ' 5-> Relatorio Retirada p/Deposito '
        MENU TO mopcao
        setcor(1)

        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE mopcao = 1
                *          GERAL POR DATA
                         sac5des1()
                CASE mopcao = 2
                *          GERAL POR CODIGO
                         sac5des3()
                CASE mopcao = 3
                *          RESUMO
                         sac5des2()
                CASE mopcao = 4
                *          RESUMO
                         sac5vale()
                CASE mopcao = 5
                *        RECEBIMENTOS DIVERSOS
                         sac5rec()
                CASE mopcao = 6
                *        RETIRADA PARA DEPOSITO
                         sac5ret()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************
* RELATORIO DE DESPESAS GERAL POR DATA
**************************************
FUNCTION sac5des1
*****************
LOCAL lba := 08,cba := 77,tela,opcao,mdata1,mdata2,m_desp:={},mtotdesp,mtotparc,;
      mdia_de,mdia_df,mtot_df,mtot_de,mdia,mpag,mdesp:={},i,;
      mnum_desp,mtotal,mtotal_g:=0,mprg:='SAC5DES1',mtipo,mtp_desp,mtit,mdia_tot:=' '

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcoddesp,mcodemp:=SPACE(3),cons_caix:={}

mtraco := REPLI('=',80)
*------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
//
*------------------------------------------------------------
op_tela(10,02,18,79,' Despesas GERAL ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mtp_desp := SPACE(1)
        mdia_tot := 'S'
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        mcodemp := SPACE(3)
        mtotal_g := 0
        ASIZE(m_desp,0)
        @ 3,0 TO 3,cba
        @ 6,0 TO 6,cba
        mensagem('Digite cod.despesa ou <ENTER>p/todas - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Cod.Despesa.........:')
        DEVPOS(2,2);DEVOUT('Totaliza o Dia [S/N]:')
        DEVPOS(4,2);DEVOUT('Data Inicial........:')
        DEVPOS(5,2);DEVOUT('Data Final..........:')
        DEVPOS(7,2);DEVOUT('Tipo Despesa........:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,24 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp,1,28)
        @ 2,24 GET mdia_tot PICT '@!' VALID mdia_tot $ 'S,N'
        @ 4,24 GET mdata1
        @ 5,24 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ 7,24 GET mtp_desp PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        mdesp := {}
        mpag = 1
        mdia_de := mdia_df := mtot_de := mtot_df := 0
        mtit = 'Relatorio de Despesas GERAL'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        cons_caix := {}
        cComm  := "SELECT * FROM saccaixa WHERE data  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND tipo = 'DE'"
        IF ! EMPTY(mtp_desp)
                cComm  := ccomm + " AND tp_desp = "+sr_cdbvalue(mtp_desp)
        ENDIF
        IF ! EMPTY(mcoddesp)
                cComm  := ccomm + " AND coddesp = "+sr_cdbvalue(STRZERO(mcoddesp,3))
        ENDIF
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        ccomm := ccomm + " ORDER BY data,tipo,nota,documento"
        sr_getconnection():exec(ccomm,,.t.,@cons_caix)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_caix) = 0
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF

        IF ! imp_arq('REL_DESP.REL','R')
                LOOP
        ENDIF

        cabec(mpag,mtit,mtipo,mprg)
        mdia := cons_caix[1,3]
        imprt(mtipo_imp,'N')
        i:=0
        FOR i = 1 TO LEN(cons_caix)
                AADD(mdesp,{cons_caix[i,12],cons_caix[i,13],cons_caix[i,14],cons_caix[i,10]})
                IF mdia <> cons_caix[i,3] .AND. mdia_tot = 'S'
                        IF mdia_df+mdia_de <> 0
                                IF PROW() >=55;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('*********** RESUMO DO DIA: '+DTOC(mdia)+' **********')
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS DIARIAS R$........:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS ADMINISTRATIVAS R$:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('                                          --------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total do DIA......................... R$:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df + mdia_de,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        mdia := cons_caix[i,3]
                        mdia_de := mdia_df := 0
                        imprt(mtipo_imp,'N')
                ENDIF
                IF PROW() >=59;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(cons_caix[i,3])
                DEVPOS(PROW(),10);DEVOUT(cons_caix[i,12])
                DEVPOS(PROW(),15);DEVOUT(cons_caix[i,13]+cons_caix[i,14])
                DEVPOS(PROW(),97);DEVOUT(TRANSFORM(cons_caix[i,10],'999,999,999.99'))
                DEVPOS(PROW(),112);DEVOUT(cons_caix[i,17])
                DEVPOS(PROW(),121);DEVOUT(cons_caix[i,2])
                DEVPOS(PROW(),126);DEVOUT(cons_caix[i,25])
                IF caix->tipo = 'DE'
                        mdia_de := mdia_de + cons_caix[i,10]
                        mtot_de := mtot_de + cons_caix[i,10]
                ELSE
                        mdia_df := mdia_df + cons_caix[i,10]
                        mtot_df := mtot_df + cons_caix[i,10]
                ENDIF
                mtotal_g := mtotal_g + cons_caix[i,10]
                IF PROW() >=59;EJECT;mpag ++;cabec(mpag,mtit,mtipo);ENDIF
        NEXT
        IF PROW() >=55;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
        IF mdia_tot = 'S'
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT('*********** RESUMO DO DIA: '+DTOC(mdia)+' **********')
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS DIARIAS R$........:')
                DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('                                          --------------')
                DEVPOS(PROW()+1,00);DEVOUT('Total do DIA......................... R$:')
                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df + mdia_de,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                imprt(mtipo_imp,'N')
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        mdia := cons_caix[1,3]
        mdia_de := 0
        mdia_df := 0
        IF PROW() >=54;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('R E S U M O   G E R A L')
        DEVPOS(PROW()+1,00);DEVOUT('Total das despesas DIARIAS.......:')
        DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_de,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))

        EJECT;mpag ++;cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT(PADC('RESUMO DAS DESPESAS',80))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        mnum_desp := SPACE(2)
        mtotal := 0
        IF LEN(mdesp) = 0
                EJECT
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('REL_DESP.REL')
                EXIT
        ENDIF
        ASORT(mdesp,,, {|x,y| x[1] < y[1]})
        mnum_desp := mdesp[1,1]
        imprt(mtipo_imp,'C')
        IF EMPTY(mdesp[1,1]) .OR. mdesp[1,1] = '000'
                DEVPOS(PROW()+1,00);DEVOUT('000 - D E S P E S A S   D I V E R S A S                                                R$:')
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT(mdesp[1,1]+' - '+mdesp[1,2]+mdesp[1,3]+' R$:')
        ENDIF
        i := 0
        FOR i = 1 TO LEN(mdesp)
                IF mnum_desp = mdesp[i,1]
                        mtotal := mtotal + mdesp[i,4]
                        //mtotal_g := mtotal_g + mdesp[i,4]
                        LOOP
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99')+'  -  ( '+TRANSFORM((mtotal/mtotal_g)*100,'9,999.999')+' %)')
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                ENDIF
                mtotal := 0
                mnum_desp := mdesp[i,1]
                DEVPOS(PROW()+1,00);DEVOUT(mdesp[i,1]+' - '+mdesp[i,2]+mdesp[i,3]+' R$:')
                mtotal := mtotal + mdesp[i,4]
                //mtotal_g := mtotal_g + mdesp[i,4]
        NEXT
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99')+'  -  ( '+TRANSFORM((mtotal/mtotal_g)*100,'9,999.999')+' %)')
        //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
        DEVPOS(PROW()+1,61);DEVOUT('TOTAL GERAL DAS DESPESAS  R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_g,'999,999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(CHR(18))
        DEVPOS(PROW(),00);DEVOUT(TIME())
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REL_DESP.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************
* RELATORIO DE DESPESAS GERAL POR CODIGO
****************************************
FUNCTION sac5des3
*****************
LOCAL lba := 08,cba := 65,tela,opcao,mdata1,mdata2,m_desp:={},mtotdesp,mtotparc,;
      mtpdesp,mdia_de,mdia_df,mtot_df,mtot_de,mdia,mpag,mdesp:={},i,;
      mnum_desp,mtotal,mtotal_g,mprg:='SAC5DES3',mtipo,mtit

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcoddesp,mcodemp:=SPACE(3),cons_caix:={}

mtraco := REPLI('=',80)
*------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
//
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------
op_tela(10,05,19,70,' Despesas GERAL por CODIGO ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mtipo := SPACE(1)
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        mcodemp := SPACE(3)
        ASIZE(m_desp,0)
        mensagem('Digite data inicial e data final ou <ENTER>p/todas - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Data Inicial:')
        DEVPOS(2,2);DEVOUT('Data Final..:')
*        DEVPOS(3,2);DEVOUT('[1]Diarias [2]ADM [3]Geral:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,16 GET mdata1
        @ 2,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
*        @ 3,30 GET mtipo PICT '9' VALID mtipo $ '1,2,3' WHEN mcoddesp = 0
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mdata1) .AND. EMPTY(mdata2)
                mdata1 := CTOD('11/11/11')
                mdata2 := CTOD('31/12/99')
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        cons_caix := {}
        cComm  := "SELECT * FROM saccaixa WHERE data  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND (tipo = 'DE' OR tipo = 'DF')"
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        ccomm := ccomm + " ORDER BY coddesp,tipo"
        sr_getconnection():exec(ccomm,,.t.,@cons_caix)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_caix) = 0
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mdesp := {}
        mpag = 1
        mdia_de := mdia_df := mtot_de := mtot_df := 0
        mtpdesp := SPACE(2)
        mtit = 'Relatorio de Despesas GERAL'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('REL_DESP.REL','R')
                LOOP
        ENDIF
        cabec(mpag,mtit,mtipo,mprg)
        mcoddesp := caix->coddesp
        imprt(mtipo_imp,'N')
        mtpdesp := cons_caix[1,2]
        i := 0
        FOR i = 1 TO LEN(cons_caix)
                IF mcoddesp <> cons_caix[i,12]
                        IF PROW() >=55;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',40))
                        DEVPOS(PROW()+1,00);DEVOUT('*********** RESUMO DA DESPESA **********')
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Total do DESPESAS R$........:')
                        DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        mcoddesp := cons_caix[i,12]
                        mdia_de := 0
                        imprt(mtipo_imp,'N')
                ENDIF
                IF PROW() >=59;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(cons_caix[i,3])
                DEVPOS(PROW(),10);DEVOUT(cons_caix[i,12])
                DEVPOS(PROW(),15);DEVOUT(cons_caix[i,13]+cons_caix[i,14])
                DEVPOS(PROW(),97);DEVOUT(TRANSFORM(cons_caix[i,10],'999,999,999.99'))
                DEVPOS(PROW(),111);DEVOUT(cons_caix[i,17])
                DEVPOS(PROW(),121);DEVOUT(cons_caix[i,2])
                mdia_de := mdia_de + cons_caix[i,10]
                mtot_de := mtot_de + cons_caix[i,10]
                IF PROW() >=59;EJECT;mpag ++;cabec(mpag,mtit,mtipo);ENDIF
        NEXT
        IF PROW() >=55;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',40))
        DEVPOS(PROW()+1,00);DEVOUT('*********** RESUMO DA DESPESA **********')
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Total do DESPESAS R$........:')
        DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT(' ')
        IF PROW() >=54;EJECT;mpag ++;cabec(mpag,mtit,mtipo,mprg);ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('R E S U M O   G E R A L')
        DEVPOS(PROW()+1,00);DEVOUT('Total das DESPESAS.......:')
        DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_de,'999,999,999.99'))
        DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_de,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REL_DESP.REL')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
************************ F I M ***************************************
* RELATORIO DE DESPESAS RESUMO
*****************************
FUNCTION sac5des2
*****************
LOCAL lba := 06,cba := 65,tela,opcao,mdata1,mdata2,m_desp:={},mtpdesp,mdia,mpag,;
      mdesp:={},i,mnum_desp,mtotal,mtotal_g,mprg:='SAC5DES2',mtit,mtipo

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcoddesp,mdescri1,mdescri2,mcodemp:=SPACE(3),;
        cons_caix:={}

mtraco := REPLI('=',80)
*------------------------------------------------------------
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
//
*------------------------------------------------------------
op_tela(10,05,17,70,' Despesas RESUMO ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
*       mdia := CTOD('  /  /  ')
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        mcodemp := SPACE(3)
        ASIZE(m_desp,0)
        @ 3,0 TO 3,cba
        mensagem('Digite cod.despesa ou <ENTER>p/todas - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Cod.Despesa.:')
        DEVPOS(4,2);DEVOUT('Data Inicial:')
        DEVPOS(5,2);DEVOUT('Data Final..:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,16 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp,1,20)
        @ 4,16 GET mdata1
        @ 5,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        cons_caix := {}
        cComm  := "SELECT * FROM saccaixa WHERE data  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND (tipo = 'DE' OR tipo = 'DF')"
        IF ! EMPTY(mcodemp)
                cComm  := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mcoddesp)
                cComm  := ccomm + " AND coddesp = "+sr_cdbvalue(STRZERO(mcoddesp,3))
        ENDIF
        ccomm := ccomm + " ORDER BY data,nota,tipo,documento,descri1"
        sr_getconnection():exec(ccomm,,.t.,@cons_caix)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_caix) = 0
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mdesp := {}
        mpag = 1
        mtit = 'Relatorio de Despesas RESUMO'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('REL_DESP.REL','R')
                LOOP
        ENDIF
        cabecalho(mpag,mtit,mtipo,mprg)
        mdia := cons_caix[1,3]
        imprt(mtipo_imp,'N')
        mtpdesp := cons_caix[1,2]
        mtotal := mtotal_g := i := 0
        FOR i = 1 TO LEN(cons_caix)
                ver_desp(VAL(cons_caix[i,12]),,,1)
                AADD(mdesp,{cons_caix[i,12],mdescri1,mdescri2,cons_caix[i,10]})
                mtotal_g := mtotal_g + cons_caix[i,10]
        NEXT
        IF PROW() >=59;EJECT;mpag ++;cabecalho(mpag,mtit,mtipo,mprg);ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(PADC('RESUMO DAS DESPESAS',80))
        DEVPOS(PROW(),00);DEVOUT(PADC('RESUMO DAS DESPESAS',80))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
        mnum_desp := SPACE(2)
        mtotal := 0
        IF LEN(mdesp) = 0
                EJECT
                SET DEVI TO SCREEN
                SET PRINT TO
                EXIT
        ENDIF
        ASORT(mdesp,,, {|x,y| x[1] < y[1]})
        mnum_desp := mdesp[1,1]
        imprt(mtipo_imp,'C')
        IF EMPTY(mdesp[1,1]) .OR. mdesp[1,1] = '000'
                DEVPOS(PROW()+1,00);DEVOUT('000 - D E S P E S A S   D I V E R S A S                                                R$:')
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT(mdesp[1,1]+' - '+mdesp[1,2]+mdesp[1,3]+' R$:')
        ENDIF
        i := 0
        FOR i = 1 TO LEN(mdesp)
                IF mnum_desp = mdesp[i,1]
                        mtotal := mtotal + mdesp[i,4]
                        LOOP
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99')+'  ( '+TRANSFORM((mtotal/mtotal_g)*100,'999.999')+' % )')
                IF PROW() >=59;EJECT;mpag ++;cabecalho(mpag,mtit,mtipo,mprg);imprt(mtipo_imp,'C');ENDIF
                mtotal := 0
                mnum_desp := mdesp[i,1]
                DEVPOS(PROW()+1,00);DEVOUT(mdesp[i,1]+' - '+mdesp[i,2]+mdesp[i,3]+' R$:')
                mtotal := mtotal + mdesp[i,4]
                //mtotal_g := mtotal_g + mdesp[i,4]
        NEXT
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99')+'  ( '+TRANSFORM((mtotal/mtotal_g)*100,'999.999')+' % )')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
        DEVPOS(PROW()+1,61);DEVOUT('TOTAL GERAL DAS DESPESAS  R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_g,'999,999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(CHR(18))
        DEVPOS(PROW(),00);DEVOUT(TIME())
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REL_DESP.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************ F I M ***************************************
* RELATORIO DOS VALES
*****************************
FUNCTION sac5vale
*****************
LOCAL lba := 03,cba := 45,tela,opcao,mdata1,mdata2,mpag,;
      mtotal_g,mtotal_pg,mtotal_ap,mprg:='SAC5VALE',mcoddesp,mtit,mtipo

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcodemp:=SPACE(3)
mtraco := REPLI('=',80)
*------------------------------------------------------------
//
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------
op_tela(10,10,14,55,' VALES ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
*       mdia := CTOD('  /  /  ')
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        mensagem('Digite data inicial e data final ou <ENTER>p/todas - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Data Inicial:')
        DEVPOS(2,2);DEVOUT('Data Final..:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,16 GET mdata1
        @ 2,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        ****************
        SELE('caix');ORDSETFOCUS(1)
        GO TOP
        ****************
        caix->(DBSEEK(DTOS(mdata1),.T.))

        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mpag = 1
        mtit = 'Relatorio dos VALES'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('REL_DESP.REL','R')
                LOOP
        ENDIF
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,02);DEVOUT('Data')
        DEVPOS(PROW(),09);DEVOUT('Descricao')
        DEVPOS(PROW(),51);DEVOUT('Valor')
        DEVPOS(PROW(),63);DEVOUT('Oper.')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mtotal_g := 0
        mtotal_pg := 0
        mtotal_ap := 0
        WHILE caix->data <= mdata2 .AND. ! EOF()
                IF (! EMPTY(mcodemp) .AND. mcodemp <> caix->empresa);
                   .OR. caix->tipo <> 'VL'
                        SKIP;LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(caix->data)
                IF caix->pg = '*'
                        DEVPOS(PROW(),09);DEVOUT(RTRIM(caix->descri1))
                        DEVPOS(PROW(),51);DEVOUT(TRANSFORM(caix->Valor,'999,999.99'))
                        DEVPOS(PROW(),63);DEVOUT(caix->cod_opera)
                        DEVPOS(PROW(),70);DEVOUT('PAGO')
                        mtotal_pg := mtotal_pg + caix->valor
                ELSE
                        DEVPOS(PROW(),09);DEVOUT(RTRIM(caix->descri1))
                        DEVPOS(PROW(),51);DEVOUT(TRANSFORM(caix->Valor,'999,999.99'))
                        DEVPOS(PROW(),63);DEVOUT(caix->cod_opera)
                        mtotal_ap := mtotal_ap + caix->valor
                ENDIF
                mtotal_g := mtotal_g + caix->valor
                SKIP
        ENDDO
        IF PROW() >=59;EJECT;mpag ++;cabecalho(mpag,mtit,mtipo,mprg);ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Total Geral de VALES.....R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_g,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Total de Vales PAGOS.....R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_pg,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Total de Vales a RECEBER R$:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_ap,'999,999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REL_DESP.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************
* RELATORIO DE RECEBIMENTOS DIVERSOS
*****************************
FUNCTION sac5rec
****************
LOCAL lba := 03,cba := 40,tela,opcao,mdata1,mdata2,mprg:='SAC5REC',mtipo,mtit,mtot_rec,;
      mpag

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcodemp:=SPACE(3)
mtraco := REPLI('=',80)
*------------------------------------------------------------
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
//
*------------------------------------------------------------
op_tela(10,10,14,50,' Despesas GERAL ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mensagem('Digite cod.despesa ou <ENTER>p/todas - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Data Inicial:')
        DEVPOS(2,2);DEVOUT('Data Final..:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,16 GET mdata1
        @ 2,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        ****************
        SELE('caix');ORDSETFOCUS(1)
        GO TOP
        ****************
        caix->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mtot_rec := 0
        mpag = 0
        mtit = 'Relatorio de Recebimento Diversos GERAL'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('REC_DIV.REL','R')
                LOOP
        ENDIF
        imprt(mtipo_imp,'N')
        WHILE caix->data <= mdata2 .AND. ! EOF()
                IF mpag=0 .OR. PROW()>=59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C',1)
                        DEVPOS(PROW(),00);DEVOUT('  Data')
                        DEVPOS(PROW(),12);DEVOUT('Tipo')
                        DEVPOS(PROW(),18);DEVOUT('Descricao')
                        DEVPOS(PROW(),100);DEVOUT('       Valor')
                        DEVPOS(PROW(),114);DEVOUT('Cod.Oper.')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt(mtipo_imp,'C')
                ENDIF
                IF (! EMPTY(mcodemp) .AND. mcodemp <> caix->empresa);
                   .OR. caix->tipo <> 'RE'
                        SKIP;LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(caix->data)
                DEVPOS(PROW(),12);DEVOUT(caix->tipo)
                DEVPOS(PROW(),18);DEVOUT(caix->descri1+caix->descri2)
                DEVPOS(PROW(),100);DEVOUTPICT(caix->valor,'9,999,999.99')
                DEVPOS(PROW(),114);DEVOUT(caix->Cod_Opera)
                mtot_rec := mtot_rec + caix->valor
                SKIP
        ENDDO
        IF PROW()>=57
                mpag ++
                IF mpag > 1
                        EJECT
                ENDIF
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C',1)
                DEVPOS(PROW(),00);DEVOUT('  Data')
                DEVPOS(PROW(),12);DEVOUT('Tipo')
                DEVPOS(PROW(),18);DEVOUT('Descricao')
                DEVPOS(PROW(),100);DEVOUT('       Valor')
                DEVPOS(PROW(),114);DEVOUT('Cod.Oper.')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C',1)
        ENDIF
        imprt(mtipo_imp,'N',1)
        DEVPOS(PROW(),00);DEVOUT(REPLI('*',80))
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL GERAL DE RECEBIMENTOS DIVERSOS:')
        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mtot_rec,'99,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('*',80))
        DEVPOS(PROW()+1,00);DEVOUT(TIME())
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REC_DIV.REL')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
************************ F I M ***************************************
* RELATORIO DE RETIRADA PARA DEPOSITO
*****************************
FUNCTION sac5ret
*****************
LOCAL lba := 03,cba := 40,tela,opcao,mdata1,mdata2,mprg:='SAC5RET',mtipo,mtit,mtot_rec,;
      mpag

PRIVATE mtraco,mtipo_imp,mimp_tipo:=0,mcodemp:=SPACE(3)
mtraco := REPLI('=',132)
*------------------------------------------------------------
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
//
*------------------------------------------------------------
op_tela(10,10,14,50,' Retirada p/Deposito GERAL ')
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mensagem('Digite as Data  - <ESC>Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa...:')
        DEVPOS(1,2);DEVOUT('Data Inicial:')
        DEVPOS(2,2);DEVOUT('Data Final..:')
        @ 0,24 GET mcodemp PICT "999" VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp ='S'
        @ 1,16 GET mdata1
        @ 2,16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
        ****************
        SELE('caix');ORDSETFOCUS(1)
        GO TOP
        ****************
        caix->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mtot_rec := 0
        mpag = 0
        mtit = 'Relatorio de Retirada p/Deposito GERAL'
        mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! imp_arq('REC_DIV.REL','R')
                LOOP
        ENDIF
        imprt(mtipo_imp,'N')
        WHILE caix->data <= mdata2 .AND. ! EOF()
                IF mpag=0 .OR. PROW()>=59
                        mpag ++
                        IF mpag > 1
                                EJECT
                        ENDIF
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data')
                        DEVPOS(PROW(),12);DEVOUT('Tipo')
                        DEVPOS(PROW(),18);DEVOUT('Descricao')
                        DEVPOS(PROW(),100);DEVOUT('       Valor')
                        DEVPOS(PROW(),114);DEVOUT('Cod.Oper.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF (! EMPTY(mcodemp) .AND. mcodemp <> caix->empresa);
                   .OR. caix->tipo <> 'DP'
                        SKIP;LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(caix->data)
                DEVPOS(PROW(),12);DEVOUT(caix->tipo)
                DEVPOS(PROW(),18);DEVOUT(caix->descri1+caix->descri2)
                DEVPOS(PROW(),100);DEVOUTPICT(caix->valor,'9,999,999.99')
                DEVPOS(PROW(),114);DEVOUT(caix->Cod_Opera)
                mtot_rec := mtot_rec + caix->valor
                SKIP
        ENDDO
        IF PROW()>=57
                mpag ++
                IF mpag > 1
                        EJECT
                ENDIF
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('  Data')
                DEVPOS(PROW(),12);DEVOUT('Tipo')
                DEVPOS(PROW(),18);DEVOUT('Descricao')
                DEVPOS(PROW(),100);DEVOUT('       Valor')
                DEVPOS(PROW(),114);DEVOUT('Cod.Oper.')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT(REPLI('*',80))
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL GERAL DE RETIRADA P/DEPOSITO..:')
        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mtot_rec,'99,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('*',80))
        DEVPOS(PROW()+1,00);DEVOUT(TIME())
        EJECT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REC_DIV.REL')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
************************ F I M ***************************************
* CABECALHO DAS DESPESAS
**************************
FUNCTION cabec(pag,tit,tip,cprg)
***************************
MEMVAR mtipo_imp,mtraco
cabecalho(pag,tit,tip,cprg)
imprt(mtipo_imp,'C')
DEVPOS(PROW()+1,02);DEVOUT('Data')
DEVPOS(PROW(),09);DEVOUT('Cod.')
DEVPOS(PROW(),15);DEVOUT('Descricao')
DEVPOS(PROW(),97);DEVOUT('Valor')
DEVPOS(PROW(),112);DEVOUT('Oper')
DEVPOS(PROW(),118);DEVOUT('Tp.Doc')
DEVPOS(PROW(),125);DEVOUT('Tp.Desp')
imprt(mtipo_imp,'N')
DEVPOS(PROW()+1,00);DEVOUT(mtraco)
imprt(mtipo_imp,'C')
RETURN .T.

