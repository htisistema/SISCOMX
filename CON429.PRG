MEMVAR getlist,mdata_sis,nivel_acess,mcgc_firm,memp_resa,mend_firm,mcid_firm,;
       mfone_firm,minsc_firm
*** CON429.PRG: EMISSAO DE FATURAMENTO (Receber)
***
**************************************************
FUNCTION con429(mtp_429)
***************
LOCAL MPRG:='CON429',;
      mtela,tela1,mtipo,lci,cci,lba,cba,mtraco,mdata1,mdata2,mtipo_doc,mcod_cli,;
      mtot_dup,msub_tot,mtipo_dup,mcartao,mflag,mcod_aux,mvenc,m_dup:={},i,opcao,;
      msele,morder,mtitulo

PRIVATE mcobra_fin,mtaxa_fin,mcliente,mcgc,mcpf,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

IF mtp_429 = NIL
        IF ! ver_nivel(mprg,'CONTA A RECEBER (EMISSAO DE FATURAS P/CLIENTES)','1345',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtitulo := 'CONTAS A RECEBER'
        malias := 'dupr'
ELSE
        IF ! ver_nivel(mprg+mtp_429,'CREDITO CLIENTE (EMISSAO DE FATURAS P/CLIENTES)','1345',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtitulo := 'CREDITO CLIENTE'
        malias := 'cred'
ENDIF
mtraco := REPLI('-',80)

lci := 02
cci := 00
lba := 25-2
cba := 79
*---------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
//
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('saccred','cred');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
CLEAR GETS
msele := SELE()
morder := INDEXORD()
**************
SELE(malias);ORDSETFOCUS(4)
***************
op_tela(00,00,07,62,mtitulo)

WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mtipo_dup := ' '
        mcod_cli := msub_tot := mtot_dup := mcartao := 0
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mtipo_doc := SPACE(2)
        mdata1 := mdata2 := mvenc  := CTOD('  /  /  ')
        mensagem('Digite o periodo que deseja consultar - <ESC> p/retornar')
        DEVPOS(00,00);DEVOUT('Cliente.....:')
        DEVPOS(01,00);DEVOUT('Data Inicial:')
        DEVPOS(02,00);DEVOUT('Data Final..:')
        DEVPOS(03,00);DEVOUT('Vencimento..:')
        DEVPOS(04,00);DEVOUT('[CH]Cheques [DU]Duplic. [CT]Cartao [FI]Financeira:')
        @ 00,14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,00,20)
        READ
        IF ! EMPTY(mcod_cli);ver_cli(mcod_cli,00,20);ENDIF
        @ 01,14 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 02,14 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ 03,14 GET mvenc VALID IF(mvenc < mdata1,.F.,.T.)
        @ 04,60 GET mtipo_doc PICT '@!' VALID ver_tipdc(mtipo_doc,'*')
*       @ 19,68 GET mtipo_doc PICT '@!' VALID mtipo_doc $ 'CH,DU,CT,FI,  '
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtipo_doc = 'CT'
                mcartao := 0
                op_tela(00,00,02,75," CARTAO Vencer/Vencidas ")
                @ 00,02 SAY "Codigo do Cartao.........:"
                @ 00,29 GET mcartao PICT '999' VALID ver_cartao(mcartao,00,32) .AND. lim_get() WHEN men_get(01,29,'Informe o codigo do cartao ou deixe em branco para todos')
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Cartao:')
                wvw_lclosewindow()
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        IF mtipo_doc = 'FI'
                mcartao := 0
                op_tela(00,00,02,75," FINANCIAMENTO Vencer/Vencidas ")
                @ 00,02 SAY "Codigo da Financeira.....:"
                @ 00,29 GET mcartao PICT '999' VALID IF(EMPTY(mcartao),.T.,ver_finan(mcartao,00,32)) .AND. lim_get() WHEN men_get(01,29,'Informe o codigo da Financeira ou deixe em branco para todos')
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Financeira:')
                wvw_lclosewindow()
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        **************
        SELE(malias);ORDSETFOCUS(6)
        GO TOP
        ***************
        IF ! EMPTY(mcod_cli)
                IF ! (malias)->(DBSEEK(mcod_cli))
                        atencao('Nao Existe Movimento deste Cliente')
                        LOOP
                ENDIF
        ENDIF
        IF ! imp_arq('FATURA.REL','R')
                LOOP
        ENDIF

        WHILE ! EOF()
                ASIZE(m_dup,0)
                mcod_aux := (malias)->fornec
                WHILE mcod_aux = (malias)->fornec .AND. ! EOF()
                        IF ((malias)->pago <> ' ');
                           .OR. ((malias)->venc > mdata2);
                           .OR. ((malias)->venc < mdata1);
                           .OR. (! EMPTY(mcod_cli) .AND. mcod_cli <> (malias)->fornec);
                           .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> (malias)->tipo);
                           .OR. (! EMPTY(mcartao) .AND. STRZERO(mcartao,3) <> (malias)->numero)
                                SKIP
                                LOOP
                        ENDIF
//                                      1               2          3           4               5           6
                        AADD(m_dup,{(malias)->fornec,(malias)->cliente,(malias)->tipo,(malias)->duplicata,(malias)->valor,(malias)->emissao})
                        SKIP
                ENDDO
                IF EMPTY(m_dup)
                        LOOP
                ENDIF
                mflag := 0
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                imprt(mtipo_imp,'C',1)
                DEVPOS(PROW(),00);DEVOUT(mend_firm+'-'+mcid_firm+  +'Fone: '+mfone_firm)
                DEVPOS(PROW()+1,00);DEVOUT('C.G.C.: '+mcgc_firm+'  -  Inscricao Est.: '+minsc_firm)
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(mtitulo,80))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+m_dup[1,1]+' - '+m_dup[1,2])
                DEVPOS(PROW()+1,00);DEVOUT('Emissao: '+DTOC(mdata_sis)+'  -  Vencimento: '+DTOC(mvenc))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Documento         Valor  Emissao | Documento         Valor  Emissao | Documento         Valor  Emissao | Documento         Valor  Emissao ')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                i := 0
                FOR i = 1 TO LEN(m_dup)
                        imprt(mtipo_imp,'C')
                        IF mflag = 0
                                DEVPOS(PROW()+1,00);DEVOUT(m_dup[i,3]+m_dup[i,4]+' '+TRANSFORM(m_dup[i,5],'99,999.99')+' '+DTOC(m_dup[i,6]))
                                mflag := 1
                        ELSEIF mflag = 1
                                DEVPOS(PROW(),34);DEVOUT('|'+m_dup[i,3]+m_dup[i,4]+' '+TRANSFORM(m_dup[i,5],'99,999.99')+' '+DTOC(m_dup[i,6]))
*                                DEVPOS(PROW(),34);DEVOUT('|'+(malias)->tipo+(malias)->duplicata+' '+TRANSFORM((malias)->valor,'99,999.99')+' '+DTOC((malias)->emissao))
                                mflag := 2
                        ELSEIF mflag = 2
                                DEVPOS(PROW(),69);DEVOUT('|'+m_dup[i,3]+m_dup[i,4]+' '+TRANSFORM(m_dup[i,5],'99,999.99')+' '+DTOC(m_dup[i,6]))
*                               DEVPOS(PROW(),69);DEVOUT('|'+(malias)->tipo+(malias)->duplicata+' '+TRANSFORM((malias)->valor,'99,999.99')+' '+DTOC((malias)->emissao))
                                mflag := 3
                        ELSEIF mflag = 3
                                DEVPOS(PROW(),104);DEVOUT('|'+m_dup[i,3]+m_dup[i,4]+' '+TRANSFORM(m_dup[i,5],'99,999.99')+' '+DTOC(m_dup[i,6]))
*                               DEVPOS(PROW(),104);DEVOUT('|'+(malias)->tipo+(malias)->duplicata+' '+TRANSFORM((malias)->valor,'99,999.99')+' '+DTOC((malias)->emissao))
                                mflag := 0
                        ENDIF
                        msub_tot := msub_tot + m_dup[i,5]
                        mtot_dup ++
                        IF PROW() >= 26 .AND. mcod_aux = m_dup[i,1]
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Continuacao',80))
                                EJECT
                                imprt(mtipo_imp,'E')
                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm+'-'+mcid_firm+  +'Fone: '+mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('C.G.C.: '+mcgc_firm+'  -  Inscricao Est.: '+minsc_firm)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+m_dup[i,1]+' - '+m_dup[i,2])
                                DEVPOS(PROW()+1,00);DEVOUT('Emissao: '+DTOC(mdata_sis)+'  -  Vencimento: '+DTOC(mvenc))
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Documento       Valor     Emissao | Documento       Valor     Emissao | Documento       Valor     Emissao')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                NEXT
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+2,00);DEVOUT('Qtd.Documento: '+TRANSFORM(mtot_dup,'99999'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total Valor: '+TRANSFORM(msub_tot,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Reconhce(emos) a exatidao desta FATURA de prestacao de servicos na importancia acima que pagarei(emos) a '+m_set[1,129]+'.')
                DEVPOS(PROW()+2,00);DEVOUT(PADC('Data: ......../......../........         Ass.: ......................................',130))
                imprt(mtipo_imp,'N')
                @ PROW()+2,00 SAY PADC(RTRIM(m_set[1,52]),80)
                @ PROW()+1,00 SAY PADC(RTRIM(m_set[1,53]),80)
                EJECT
                msub_tot := mtot_dup := 0
                IF ! EMPTY(mcod_cli)
                        EXIT
                ENDIF
        ENDDO
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('FATURA.REL')
        /*
        IF mimp_tipo = 2
                lertexto('FATURA.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* FIM **************************************8

