**************************************************
*** CON214.PRG: Consulta de Duplicatas (A pagar)
**************************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION con214(mfor,mdat1,mdat2,mtipo,mtip)
***************
LOCAL MPRG:='CON214',tela,tela1,lba,cba,m_dup:={},m_pos:={},point,tipo,mdata1,;
      mdata2,mteladata,mtot_dup,mvlr_dup,mtot_pag:=0,;       //,mtip_for
      mfo,mfv,mvv,mad,mtr,mfi,mdv,mtipo_doc,opcao,cons_dupp:={}

PRIVATE mfornece,muf,mcodconta,mcod_forn,mcliente,mcpf,mcgc,mcodemp:=SPACE(3)

IF ! ver_nivel(mprg,'CONTA APAGAR (CONSULTA DE DOCUMENTOS)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lba := 34
cba := 120
*------------------------------------------------------------------------------------
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
op_tela(03,00,38,120," CONSULTA CONTAS A PAGAR  ["+mprg+']',,'*')
WHILE .T.
	exibi_prg(mprg)
        limpa(00,00,30,120)
        IF mdat1 <> NIL
                mdata1 := mdat1
                mdata2 := mdat2
                mcodconta := mtipo
                tipo := mtip
        ELSE
                mdata1 := mdata_sis
                mdata2 := mdata_sis +30
                mcodconta := SPACE(4)
        ENDIF
        mtipo_doc := SPACE(2)
        mtot_dup := mvlr_dup := mtot_pag := 0
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mcodemp:=SPACE(3)
        ASIZE(m_dup,0)
        ASIZE(m_pos,0)
        @ 2,0 TO 2,cba
        DEVPOS(1,3);DEVOUT('Duplicata')
        DEVPOS(1,15);DEVOUT('Fornecedor')
        DEVPOS(1,42) ;DEVOUT(' Emissao')
        DEVPOS(1,COL()+1);DEVOUT(' Vencim.')
        DEVPOS(1,COL()+1);DEVOUT(' Vlr a pagar')
        DEVPOS(1,COL()+1);DEVOUT('Dat.Conf')
        DEVPOS(1,COL()+1);DEVOUT('Ope')
        DEVPOS(1,COL()+1);DEVOUT('Dat.Pag.')
        DEVPOS(1,COL()+1);DEVOUT('  Valor pago')
        DEVPOS(1,COL()+1);DEVOUT('Desc/Acres')
        *** RESUMO DA CONSULTA ***
        botao(lba-3,00,lba,120)
        DEVPOS(lba-2,02);DEVOUT('Quantidade de Duplicatas:')
        DEVPOS(lba-2,36);DEVOUT('Total a PAGAR...... R$:')
        DEVPOS(lba-1,36);DEVOUT('Total a PAGO....... R$:')
        DEVPOS(lba  ,36);DEVOUT('DESCONTO/ACRESCIMO. R$:')
        IF mdat1 = NIL
                op_tela(02,20,18,50,' FORMAS DE CONSULTAS',,'*')
                limpa(00,00,30,90)
                exibi_prg(mprg)
                setcor(10)
                botao1(01,02,01+2,02+26)
                botao1(01+4,02,01+6,02+26)
                botao1(01+8,02,01+10,02+26)
                botao1(01+12,02,01+14,02+26)
                @ 02,03 PROMPT  '        Recebidas       '
                @ 06,03 PROMPT  '          Pagas         '
                @ 10,03 PROMPT  '         A Pagar        '
                @ 14,03 PROMPT  '        Individual      '
                SET INTEN ON
                MENU TO mop_menu
                setcor(1)
                wvw_lclosewindow()
                IF mop_menu = 2
                        Wvw_SetTitle( ,' CONSULTA "Contas a Pagar" - Doc.PAGAS ')
                        tipo := 'P'
                        mdata1 := mdata_sis - 30
                        mdata2 := mdata_sis
                ELSEIF mop_menu = 4
                        cons_apag('*')
                        LOOP
                ELSEIF mop_menu = 3
                        Wvw_SetTitle( ,' CONSULTA "Contas a Pagar" - Doc.A PAGAR ')
                        tipo := 'A'
                        mdata1 := mdata_sis
                        mdata2 := mdata_sis +30
                ELSEIF mop_menu = 1
                        Wvw_SetTitle( ,' CONSULTA "Contas a Pagar" - Doc.RECEBIDOS ')
                        tipo := 'R'
                        mdata1        := CTOD('01/'+SUBSTR(DTOC(mdata_sis),4,5))
                        mdata2        := CTOD('30/'+SUBSTR(DTOC(mdata_sis),4,5))
                ELSEIF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        IF mfor # NIL
                mcod_forn := VAL(mfor)
        ELSE
                mcod_forn := 0
        ENDIF
        mensagem('Informe os dados abaixo - <F1>Ajuda - <ESC> p/retornar')
        mteladata := SAVESCREEN(00,00,24,79)
        botao(04,09,11,77)
        DEVPOS(05,10);DEVOUT('Cod.Empresa.:')
        DEVPOS(06,10);DEVOUT('Forn./Despe.:')
        DEVPOS(07,10);DEVOUT('Tipo Doc....:')
        DEVPOS(08,10);DEVOUT('Data Inicial:')
        DEVPOS(09,10);DEVOUT('Data Final..:')
        DEVPOS(10,10);DEVOUT('Tipo Conta..:')
        @ 05,24 GET mcodemp PICT '999' VALID ver_emp(mcodemp,05,28,,'*') WHEN mmult_emp = 'S' .AND. mfor = NIL
        @ 06,24 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,06,36) WHEN mfor = NIL
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,mteladata)
                LOOP
        ENDIF
        @ 07,24 GET mtipo_doc PICT '@!' VALID mtipo_doc $ 'PA,DU,CH,FR,  ' .AND. lim_get() WHEN  mdat1 = NIL .AND. mfor = NIL .AND. men_get(08,35,'Digite o tipo de documento que deseja <DU>plicatas, <CH>eques, <PA>gamentos e <FR>etes ou deixe em branco para TODOS')
        @ 08,24 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.) WHEN  mdat1 = NIL    //.AND. mfor = NIL
        @ 09,24 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.) WHEN  mdat1 = NIL  //.AND. mfor = NIL
        @ 10,24 GET mcodconta PICT '9999' VALID verdesp(mcodconta,10,29,1) .AND. lim_get() WHEN men_get(11,24,'Identifique o Grupo da Conta preenchendo so o primeiro digito da conta, ou preenchendo todo os espaco p/o tipo de conta <F1>Ajuda ou deixando em BRANCO p/TODOS') .AND.  mdat1 = NIL .AND. mfor = NIL
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mdat1 = NIL
                opcao := op_simnao('S','Confirma o periodo [S/n]:')
        ELSE
                opcao := 'S'
        ENDIF
        IF opcao = 'N';LOOP;ENDIF
        RESTSCREEN(00,00,24,79,mteladata)
        mensagem('Aguarde um momento processando a consulta')
        cons_dupp:={}
        IF tipo = 'A'
                cComm  := "SELECT * FROM sacdupp WHERE datpag IS NULL"
                IF mfor = NIL
                        ccomm := ccomm + " AND venc  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ENDIF
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ELSE
                        ccomm := ccomm + " AND fornec IS NOT NULL "
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                ccomm := ccomm + " ORDER BY venc"
                sr_getconnection():exec(ccomm,,.t.,@cons_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_dupp) = 0
                        atencao('Nao existe nenhum movimento neste periodo...')
                        LOOP
                ENDIF
        ELSEIF tipo = 'P'
                cComm  := "SELECT * FROM sacdupp WHERE datpag IS NOT NULL"
                IF mfor = NIL
                        cComm  := ccomm + " AND datpag BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ENDIF
                ccomm := ccomm + " AND pago = 'B'"
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ELSE
                        ccomm := ccomm + " AND fornec IS NOT NULL "
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                ccomm := ccomm + " ORDER BY datpag"
                sr_getconnection():exec(ccomm,,.t.,@cons_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_dupp) = 0
                        atencao('Nao existe nenhum movimento neste periodo...')
                        LOOP
                ENDIF
        ELSE
                cComm  := "SELECT * FROM sacdupp WHERE fornec IS NOT NULL"
                IF mfor = NIL
                        cComm  := ccomm + " AND emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
                ENDIF
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                ccomm := ccomm + " ORDER BY emissao"
                sr_getconnection():exec(ccomm,,.t.,@cons_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_dupp) = 0
                        atencao('Nao existe nenhum movimento neste periodo...')
                        LOOP
                ENDIF
        ENDIF
        i := 0
        FOR i = 1 TO LEN(cons_dupp)
                prog_imp(i,DTOC(cons_dupp[i,10]))
                IF ! EMPTY(SUBSTR(mcodconta,1,1))
                        IF SUBSTR(mcodconta,1,1) <> SUBSTR(cons_dupp[i,6],1,1)
                                LOOP
                        ENDIF
                        IF ! EMPTY(SUBSTR(mcodconta,3)) .AND. SUBSTR(mcodconta,3) <> SUBSTR(cons_dupp[i,6],3)
                                LOOP
                        ENDIF
                ENDIF

                AADD(m_pos,cons_dupp[i,36])
                AADD(m_dup,' '+cons_dupp[i,2]+cons_dupp[i,4]+cons_dupp[i,21]+' '+cons_dupp[i,7]+'-'+LEFT(cons_dupp[i,8],20);
                +'  '+DTOC(cons_dupp[i,9])+' '+DTOC(cons_dupp[i,10])+' '+TRANSFORM(cons_dupp[i,16],'9,999,999.99')+' '+DTOC(cons_dupp[i,32])+' '+cons_dupp[i,33]+' '+DTOC(cons_dupp[i,11])+' '+TRANSFORM(cons_dupp[i,17],'9,999,999.99')+' '+TRANSFORM(cons_dupp[i,16] - cons_dupp[i,17],'999,999.99'))
                mvlr_dup := mvlr_dup + cons_dupp[i,16]
                mtot_pag := mtot_pag + cons_dupp[i,17]
                mtot_dup ++
                setcor(3)
                DEVPOS(lba-2,28);DEVOUT(STRZERO(mtot_dup,6))
                DEVPOS(lba-2,60);DEVOUT(TRANSFORM(mvlr_dup,'999,999,999.99'))
                DEVPOS(lba-1,60);DEVOUT(TRANSFORM(mtot_pag,'999,999,999.99'))
                DEVPOS(lba,60);DEVOUT(TRANSFORM(mvlr_dup - mtot_pag,'999,999,999.99'))
        NEXT
        IF LASTKEY() = 27;LOOP;ENDIF
        DEVPOS(0,2);DEVOUT('Periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2))
        setcor(1)
        mensagem('Aguarde um momento processando a consulta')
        IF LEN(m_dup) = 0
                atencao('Nao existe movimento neste periodo !!!')
                IF mdat1 <> NIL
                        RESTSCREEN(00,00,24,79,mteladata)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                LOOP
        ENDIF
        WHILE .T.
                CLEAR TYPEAHEAD
                mensagem("<ESC> Retorna  -  <ENTER> p/Resumo" )
                setcor(10);point := ACHOICE(3,0,lba-5,cba,m_dup,,,point);setcor(1)
                DO CASE
                        CASE LASTKEY()=27
                                IF mdat1 <> NIL
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                EXIT
                        CASE LASTKEY() = 13
                                sr_getconnection():exec("SELECT * FROM sacdupp WHERE sr_recno = "+sr_cdbvalue(m_pos[point]),,.t.,@cons_dupp)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF tipo = 'P'
                                        op_tela(04,06,23,108,'Resumo da Duplicata',,1)
                                        //DEVPOS(05,08);DEVOUT('Codigo da Empresa...:')
                                        //setcor(3)
                                        //DEVPOS(05,COL()+1);DEVOUT(dupp->empresa)
                                        setcor(1)
                                        DEVPOS(01,01);DEVOUT('Cliente.............:')
                                        setcor(3)
                                        DEVPOS(01,COL()+1);DEVOUT(cons_dupp[1,7]+'-'+cons_dupp[1,8])
                                        setcor(1)
                                        DEVPOS(02,01);DEVOUT('Banco...............:')
                                        setcor(3)
                                        DEVPOS(02,COL()+1);DEVOUT(cons_dupp[1,3])
                                        setcor(1)
                                        DEVPOS(03,01);DEVOUT('No.da Duplicata ....:')
                                        setcor(3)
                                        DEVPOS(03,COL()+1);DEVOUT(cons_dupp[1,2]+cons_dupp[1,4])
                                        setcor(1)
                                        DEVPOS(04,01);DEVOUT('Tipo Conta..........:')
                                        setcor(3)
                                        DEVPOS(04,COL()+1);DEVOUT(cons_dupp[1,6])
                                        setcor(1)
                                        DEVPOS(05,01);DEVOUT('Vlr. Duplicata ...R$:')
                                        setcor(3)
                                        DEVPOS(05,COL()+1);DEVOUT(TRANSFORM(cons_dupp[1,16],'9,999,999.99'))
                                        setcor(1)
                                        DEVPOS(06,01);DEVOUT('Juros Pago .......R$:')
                                        setcor(3)
                                        DEVPOS(06,COL()+1);DEVOUT(TRANSFORM(cons_dupp[1,19],'9,999,999.99'))
                                        setcor(1)
                                        DEVPOS(07,01);DEVOUT('Desconto .........R$:')
                                        setcor(3)
                                        DEVPOS(07,COL()+1);DEVOUT(TRANSFORM(cons_dupp[1,18],'9,999,999.99'))
                                        setcor(1)
                                        DEVPOS(08,01);DEVOUT('Valor Pago .......R$:')
                                        setcor(3)
                                        DEVPOS(08,COL()+1);DEVOUT(TRANSFORM(cons_dupp[1,17],'9,999,999.99'))
                                        setcor(1)
                                        DEVPOS(09,01);DEVOUT('Data Emissao........:')
                                        setcor(3)
                                        DEVPOS(09,COL()+1);DEVOUT(DTOC(cons_dupp[1,9]))
                                        setcor(1)
                                        DEVPOS(10,01);DEVOUT('Data Vencimento.....:')
                                        setcor(3)
                                        DEVPOS(10,COL()+1);DEVOUT(DTOC(cons_dupp[1,10]))
                                        setcor(1)
                                        DEVPOS(11,01);DEVOUT('Data Pagamento .....:')
                                        setcor(3)
                                        DEVPOS(11,COL()+1);DEVOUT(DTOC(cons_dupp[1,11]))
                                        setcor(1)
                                        DEVPOS(12,01);DEVOUT('Pago efetuado Com...:')
                                        setcor(3)
                                        DEVPOS(12,COL()+1);DEVOUT(STRZERO(cons_dupp[1,11]-cons_dupp[1,10],3)+' Dias.')
                                        setcor(1)
                                        DEVPOS(13,01);DEVOUT('No.do Banco.........:')
                                        setcor(3)
                                        DEVPOS(13,COL()+1);DEVOUT(cons_dupp[1,24])
                                        setcor(1)
                                        DEVPOS(14,01);DEVOUT('No.do Cheque........:')
                                        setcor(3)
                                        DEVPOS(14,COL()+1);DEVOUT(cons_dupp[1,25])
                                        setcor(1)
                                        DEVPOS(15,01);DEVOUT('No.do Pedido........:')
                                        setcor(3)
                                        DEVPOS(15,COL()+1);DEVOUT(cons_dupp[1,28])
                                        setcor(1)
                                        DEVPOS(16,01);DEVOUT('Operador............:')
                                        setcor(3)
                                        DEVPOS(16,COL()+1);DEVOUT(cons_dupp[1,29])
                                        setcor(1)
                                        DEVPOS(17,01);DEVOUT('OBS.Inclusao........:')
                                        setcor(3)
                                        DEVPOS(17,COL()+1);DEVOUT(cons_dupp[1,22])
                                        setcor(1)
                                        DEVPOS(18,01);DEVOUT('OBS.BAIXA...........:')
                                        setcor(3)
                                        DEVPOS(18,COL()+1);DEVOUT(cons_dupp[1,23])
                                        setcor(1)
                                ELSE
                                        op_tela(08,06,21,108,'Resumo da Duplicata',,1)
                                        //DEVPOS(09,01);DEVOUT('Codigo da Empresa...:')
                                        //setcor(3)
                                        //DEVPOS(09,COL()+1);DEVOUT(dupp->empresa)
                                        setcor(1)
                                        DEVPOS(1,01);DEVOUT('Cliente.............:')
                                        setcor(3)
                                        DEVPOS(1,COL()+1);DEVOUT(cons_dupp[1,7]+'-'+cons_dupp[1,8])
                                        setcor(1)
                                        DEVPOS(2,01);DEVOUT('Banco...............:')
                                        setcor(3)
                                        DEVPOS(2,COL()+1);DEVOUT(cons_dupp[1,3])
                                        setcor(1)
                                        DEVPOS(03,01);DEVOUT('No.da Duplicata ....:')
                                        setcor(3)
                                        DEVPOS(03,COL()+1);DEVOUT(cons_dupp[1,2]+cons_dupp[1,4])
                                        setcor(1)
                                        DEVPOS(04,01);DEVOUT('Tipo Conta..........:')
                                        setcor(3)
                                        DEVPOS(04,COL()+1);DEVOUT(cons_dupp[1,6])
                                        setcor(1)
                                        DEVPOS(05,01);DEVOUT('Vlr. Duplicata ...R$:')
                                        setcor(3)
                                        DEVPOS(05,COL()+1);DEVOUT(TRANSFORM(cons_dupp[1,16],'9,999,999.99'))
                                        setcor(1)
                                        DEVPOS(06,01);DEVOUT('Data Emissao........:')
                                        setcor(3)
                                        DEVPOS(06,COL()+1);DEVOUT(DTOC(cons_dupp[1,9]))
                                        setcor(1)
                                        DEVPOS(07,01);DEVOUT('Data Vencimento.....:')
                                        setcor(3)
                                        DEVPOS(07,COL()+1);DEVOUT(DTOC(cons_dupp[1,10]))
                                        setcor(1)
                                        DEVPOS(08,01);DEVOUT('Prazo estipulado....:')
                                        setcor(3)
                                        DEVPOS(08,COL()+1);DEVOUT(STRZERO(cons_dupp[1,10]-cons_dupp[1,9],3)+' Dias.')
                                        setcor(1)
                                        IF mdata_sis<cons_dupp[1,10]
                                                DEVPOS(09,01);DEVOUT('Faltam p/ Vencimento:')
                                                setcor(3)
                                                DEVPOS(09,COL()+1);DEVOUT(STRZERO(cons_dupp[1,10]-mdata_sis,3)+' Dias.')
                                                setcor(1)
                                        ELSE
                                                DEVPOS(09,01);DEVOUT('Atrazo do vencimento:')
                                                setcor(3)
                                                DEVPOS(09,COL()+1);DEVOUT(STRZERO(mdata_sis-cons_dupp[1,10],3)+' Dias.')
                                                setcor(1)
                                        ENDIF
                                        setcor(1)
                                        DEVPOS(10,01);DEVOUT('No.do Pedido........:')
                                        setcor(3)
                                        DEVPOS(10,COL()+1);DEVOUT(cons_dupp[1,28])
                                        setcor(1)
                                        DEVPOS(11,01);DEVOUT('Operador............:')
                                        setcor(3)
                                        DEVPOS(11,COL()+1);DEVOUT(cons_dupp[1,29])
                                        setcor(1)
                                        DEVPOS(12,01);DEVOUT('OBS.................:')
                                        setcor(3)
                                        DEVPOS(12,COL()+1);DEVOUT(cons_dupp[1,22])
                                        setcor(1)
                                ENDIF
                                mensagem('Pressione qualquer tecla p/retornar')
                                INKEY(0)
                                wvw_lclosewindow()
                                LOOP
                ENDCASE
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* FIM *****************************************
