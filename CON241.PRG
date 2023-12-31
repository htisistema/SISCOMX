************************************************
*** CON241.PRG: Inclusao de Duplicatas (Receber)
************************************************
MEMVAR lba,cba,getlist,nivel_acess,mdata_sis,cod_operado,mmens,;
       memp_resa,mcgc_firm,mend_firm,mcid_firm,muf_firm,mfone_firm,minsc_firm

FUNCTION con241(mtp_241,cx)
***************************
LOCAL MPRG:='CON241',;
      mduplicata,mcod_ven,mtraco,opcao,mnum_ped,tela,mcomissao,mvalor,;
      magencia,mc_c,mcorrente,mobs,mextenso,mlinha,mlin,lin,con_cli :={},con_doc :={}

PRIVATE mcod_cli,mvenc,memissao,mnome_vend,mcom_ven,mnome_cli,mend,mbairro,mcidade,;
        muf,mcgc,mcpf,minsc,mbanco,mcod_cart,mtipo_imp,mdesc_cart,mprazo_cart,;
        mcartao,mtipo_doc,;
        mtipo_imp,mimp_tipo:=0,mcodemp:=SPACE(3),malias,;
        lba := 15,cba := 79,mcom_sem:=' ',mcod_cart:=0

*------------------------------------------------------------------------------------
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccred','cred');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sactipdc','tipdc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
IF mtp_241 = NIL
        IF ! ver_nivel(mprg,'CONTA A RECEBER (INCLUSAO DE DOCUMENTO)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtabela := "SELECT * FROM sacdupr"
        malias := 'dupr'
        op_tela(10,10,27,79," CONTAS A RECEBER - Inclusao de Duplicatas ",'*')
ELSEIF mtp_241 <> NIL .AND. cx = NIL
        IF ! ver_nivel(mprg+mtp_241,'CREDITO CLIENTE (INCLUSAO DE DOCUMENTO)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtabela := "SELECT * FROM saccred"
        malias := 'cred'
        op_tela(10,10,27,79," CREDITO DE CLIENTE - Inclusao de CREDITO ",'*')
ELSEIF mtp_241 <> NIL .AND. cx <> NIL
        IF ! ver_nivel(mprg+mtp_241+cx,'CREDITO CLIENTE (INCLUSAO DE DOCUMENTO) P/O CAIXA','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtabela := "SELECT * FROM saccred"
        malias := 'cred'
        op_tela(10,10,27,79," CREDITO DE CLIENTE - Inclusao de CREDITO P/CAIXA ",'*')
ENDIF

mtraco := REPLI('-',80)
WHILE .T.
        exibi_prg(mprg)
        limpa(0,0,27,79)
        setcor(1)
        DEVPOS(1,2);DEVOUT('Cod.Empresa............:')
        DEVPOS(2,2);DEVOUT('Tipo Documentos........:     <F1> p/Listar os Tipos de Documentos')
        DEVPOS(3,2);DEVOUT('No.Bco/Cod.Cartao/Finan:')
        DEVPOS(4,2);DEVOUT('Numero Documentos......:')
        DEVPOS(5,2);DEVOUT('Codigo do Cliente......:')
        DEVPOS(6,2);DEVOUT('Data de Emissao........:')
        DEVPOS(7,2);DEVOUT('Data de Vencimento.....:')
        DEVPOS(8,2);DEVOUT('Valor Documento R$.....:')
        DEVPOS(9,2);DEVOUT('Pag. [C]arteria [B]anco:')
        DEVPOS(10,2);DEVOUT('Codigo do Vendedor.....:')
        DEVPOS(11,2);DEVOUT('Numero do Pedido/NF....:')
        DEVPOS(12,2);DEVOUT('% de Comissao .........:')
        DEVPOS(13,2);DEVOUT('Nome do Correntista....:')
        DEVPOS(14,2);DEVOUT('OBS.:')
        mtipo_imp := m_indiv[1,18]
        mcodemp := mcodempresa
        mnome_cli := SPACE(40)
        mend := mcorrente := SPACE(35)
        mbairro := mcidade := mcartao := SPACE(20)
        IF mtp_241 = NIL
                mtipo_doc := SPACE(2)
        ELSE
                mtipo_doc := 'DN'
        ENDIF
        muf := SPACE(2)
        mcgc := minsc := SPACE(14)
        mcpf := SPACE(11)
        mcod_ven := mcom_ven := mcod_cli := mvalor := mnum_ped := mcod_cart :=;
        mcomissao := mdesc_cart := mprazo_cart:= 0
        IF mtp_241 <> NIL
                mprazo_cart:= 1
        ENDIF
        mnome_vend := SPACE(30)
        mduplicata := SPACE(12)
        memissao := mdata_sis
        mvenc=CTOD("  /  /  ")
        mbanco := 'C'
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mobs := SPACE(60)
        Mensagem('Digite o Numero da Duplicata. - <F1> Ajuda - [ESC] Abandona.')
*        @ 2,27 GET mtipo PICT '@!' VALID IF(mtipo='CT',lim_get() .AND. limpa(3,32,3,cba-1),mtipo $ 'CH,DU,CT,FI,RE' .AND. lim_get()) WHEN men_get(3,25,'Informe o tipo de documento <DU>duplicata <CH>cheques <CT>cartao <FI>financiamento e <RE>recebimento')
*       @ 2,27 GET mtipo PICT '@!' VALID IF(mtipo='CT',lim_get() .AND. limpa(3,32,3,cba-1),ver_tipdc(mtipo,'*') .AND. lim_get()) WHEN IF(mtp_241=NIL,men_get(3,25,mmens),'')
        @ 1,27 GET mcodemp PICT '999' VALID ver_emp(mcodemp,1,31) WHEN mmult_emp = 'S'
        @ 2,27 GET mtipo_doc PICT '@!' VALID IF(EMPTY(mtipo_doc),.F.,ver_tipdc(mtipo_doc,'*'))
        @ 3,27 GET mcod_cart PICT '999' VALID IF((mtipo_doc='CT' .OR. mtipo_doc = 'FI') .AND. EMPTY(mcod_cart),.F.,.T.)
        //@ 3,27 GET mcod_cart PICT '999'        //VALID IF(mtipo='CT',ver_cartao(mcod_cart,3,31,'*'),.T.) .AND. lim_get() WHEN mtipo <> 'DU' .AND. men_get(4,25,'Informe o No.do banco ou se tipo de documento for [CT] informe o codigo do cartao')
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtipo_doc = 'FI'
                ver_finan(mcod_cart,3,31)
        ELSEIF mtipo_doc = 'CT'
                ver_cartao(mcod_cart,3,31)
        ELSE
                DEVPOS(3,32);DEVOUT('Agencia:')
                DEVPOS(3,51);DEVOUT('C/C:')
                @ 3,41 GET magencia PICT '@!' VALID lim_get() WHEN mtipo_doc = 'CH' .AND. men_get(4,41,'Informe a AGENCIA BANCARIA')
                @ 3,56 GET mc_c PICT '@!' VALID lim_get()  WHEN mtipo_doc = 'CH' .AND. men_get(4,56,'Informe a C/C BANCARIA')
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
        ENDIF
        @ 4,27 GET mduplicata PICT '@!'
        READ
        IF LASTKEY()=27 .OR. EMPTY(mduplicata) .OR. EMPTY(mtipo_doc)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        Mensagem('Complete os Dados. [ESC] Abandona.')
        @ 5,27 GET mcod_cli PICT "99999"                //VALID lim_get() WHEN men_get(6,25,'Informe o Cod. do Cliente ou <ENTER>p/pesquisar p/NOME - <F1>Ajuda')
        @ 5,33 GET mnome_cli PICT "@!" WHEN EMPTY(mcod_cli)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! EMPTY(mcod_cli)
                con_cli :={}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@con_cli)
                IF LEN(con_cli) = 0
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ENDIF
        ELSEIF ! EMPTY(mnome_cli)
                con_cli :={}
                sr_getconnection():exec("SELECT * FROM saccli WHERE razao = "+sr_cdbvalue(RTRIM(mnome_cli)),,.t.,@con_cli)
                IF LEN(con_cli) = 0
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ELSE
                        mcod_cli:=f7_cli()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF ! mcli(mcod_cli,5,27)
                LOOP
        ENDIF
*       qtd_chq(mcod_cli,STRZERO(mcod_cart,3),magencia,mc_c)
        con_doc :={}
        IF mcod_cart = 0
                sr_getconnection():exec(mtabela + " WHERE tipo = "+sr_cdbvalue(mtipo_doc)+" AND duplicata = "+sr_cdbvalue(mduplicata)+" AND (pago IS NULL OR pago = '') AND fornec = "+sr_cdbvalue(mcod_cli),,.t.,@con_doc)
        ELSE
                sr_getconnection():exec(mtabela + " WHERE tipo = "+sr_cdbvalue(mtipo_doc)+" AND numero = "+sr_cdbvalue(STRZERO(mcod_cart,3))+" AND duplicata = "+sr_cdbvalue(mduplicata)+" AND (pago IS NULL OR pago = '') AND fornec = "+sr_cdbvalue(mcod_cli),,.t.,@con_doc)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(con_doc) > 0
        //IF FOUND()
                IF mtipo_doc = 'CH'
                        atencao('Este Cheque ja existe esta em ABERTO !')
                ELSEIF mtipo_doc = 'DU'
                        atencao('Esta Duplicata ja existe esta em ABERTO !')
                ELSEIF mtipo_doc = 'FI'
                        atencao('Este Financiamento ja existe esta em ABERTO!')
                ELSE
                        atencao('Este Cartao ja existe esta em ABERTO !')
                ENDIF
                opcao := op_simnao('N','Deseja Incluir mesmo assim ? [S/n]:')
                IF LASTKEY() = 27 .OR. opcao = "N"
                        LOOP
                ENDIF
        ENDIF
        IF mcod_cart = 0
                sr_getconnection():exec(mtabela + " WHERE tipo = "+sr_cdbvalue(mtipo_doc)+" AND duplicata = "+sr_cdbvalue(mduplicata)+" AND pago = 'B' AND fornec = "+sr_cdbvalue(mcod_cli),,.t.,@con_doc)
        ELSE
                sr_getconnection():exec(mtabela + " WHERE tipo = "+sr_cdbvalue(mtipo_doc)+" AND numero = "+sr_cdbvalue(STRZERO(mcod_cart,3))+" AND duplicata = "+sr_cdbvalue(mduplicata)+" AND pago = 'B' AND fornec = "+sr_cdbvalue(mcod_cli),,.t.,@con_doc)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(con_doc) > 0
        //IF FOUND()
                IF mtipo_doc = 'CH'
                        atencao('Este Cheque ja existe e ja foi PAGO !')
                ELSEIF mtipo_doc = 'DU'
                        atencao('Esta Duplicata ja existe e ja foi PAGA !')
                ELSEIF mtipo_doc = 'FI'
                        atencao('Este Financiamento ja existe e ja foi PAGO !')
                ELSE
                        atencao('Este Cartao ja existe e ja foi PAGO !')
                ENDIF
                opcao := op_simnao('N','Deseja Incluir mesmo assim ?:')
                IF LASTKEY() = 27 .OR. opcao = "N"
                        LOOP
                ENDIF
        ENDIF
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF RTRIM(mnome_cli) = 'DIVERSOS'
                @ 5,32 GET mnome_cli PICT '@!'
        ENDIF
        IF mtipo_doc = 'CH' .OR. mtipo_doc = 'FI' .OR. mtipo_doc = 'CT'
                mbanco := 'B'
        ENDIF
        IF mtp_241 <> NIL
                IF mtipo_doc = 'DN'
                        mvenc := memissao
                ELSEIF mtipo_doc = 'CT'
                        mvenc := mdata_sis + mprazo_cart
                ELSE
                        mvenc := CTOD('  /  /  ')
                ENDIF
        ELSE
                mvenc := mdata_sis + mprazo_cart
        ENDIF
        @ 6,27 GET memissao WHEN mtp_241 = NIL
        @ 7,27 GET mvenc VALID vencim(mvenc) WHEN mtipo_doc <> 'DN'
        @ 8,27 GET mvalor PICT "9,999,999.99" VALID mvalor>0
        @ 9,27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN men_get(10,23,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
        @ 10,27 GET mcod_ven PICT "999" VALID ven(mcod_ven,10,31)
        @ 11,27 GET mnum_ped PICT "999999" VALID IF(mtp_241 <> NIL .AND. EMPTY(mnum_ped),.F.,.T.)
        @ 12,27 GET mcomissao PICT "999.9999" VALID lim_get() WHEN mtp_241 = NIL .AND. men_get(13,23,'Informe a comissao do vendedor em relacao a este documento')
        @ 13,27 GET mcorrente PICT "@!"
        @ 14,07 GET mobs
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        //IF mtp_241 <> NIL .AND. cx <> NIL
                IF m_set[1,155] = 'S'
                        mcom_sem := mensagem1('Tipo de Recebimento:','D',' ,D,C,A,X,T',,,,'A - Z ou 0 - 9')
                ENDIF
                //IF ver_serie() = '141235'       // PERFILPLAST
                        //mcom_sem := mensagem1('Tipo de Despesa:',' ','X, ')
                //ENDIF
        //ENDIF
        opcao := op_simnao('S','Confirma os Dados ?:')
        IF opcao = "N"
                LOOP
        ENDIF
        IF cx = NIL
                *****************
                SELE(malias);ORDSETFOCUS(1)
                ****************
                IF ADIREG()
                        (malias)-> empresa := mcodemp
                        (malias)-> tipo := mtipo_doc
                        IF EMPTY(mcod_cart)
                                (malias)-> numero := SPACE(3)
                        ELSE
                                (malias)-> numero := STRZERO(mcod_cart,3)
                        ENDIF
                        (malias)-> agencia := magencia
                        (malias)-> c_c := mc_c
                        (malias)-> duplicata := mduplicata
                        (malias)-> valor_dup := mvalor
                        (malias)-> tip_cli := con_cli[1,8]
                        (malias)-> fornec := mcod_cli
                        (malias)-> cliente := mnome_cli
                        (malias)-> emissao := memissao
                        (malias)-> venc := mvenc
                        (malias)-> venc1:= mvenc
                        IF mtipo_doc = 'CT' .AND. mtp_241 = NIL
                                (malias)-> valor := mvalor - (mvalor * (mdesc_cart/100))
                        ELSE
                                (malias)-> valor := mvalor
                        ENDIF
                        (malias)-> pago := " "
                        (malias)-> vendedor := STRZERO(mcod_ven,3)
                        (malias)-> num_ped := STRZERO(mnum_ped,6)
                        (malias)-> banco := mbanco
                        (malias)-> comissao := mcomissao
                        (malias)-> corrente := mcorrente
                        (malias)-> obs      := mobs
                        (malias)-> operador := cod_operado
                        (malias)-> mov_cx := 'M'
                        (malias)-> com_sem := mcom_sem
                        IF memissao = mvenc .AND. mtp_241 = NIL
                                botao(10,10,12,30,'Deseja fazer a BAIXA deste documento agora [S/n]:',,,,0)
                                opcao := ' '
                                @ 11,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N' WHEN mtipo_doc <> 'DN'
                                READ
                                IF opcao = 'S'
                                        (malias)->datpag := mvenc
                                        (malias)->vlpago := mvalor
                                        (malias)->pago := "B"
                                        (malias)->banco := 'C'
                                ENDIF
                        ENDIF
                        DBCOMMIT()
                        DBUNLOCK()
                ENDIF
        ELSE
                *****************
                SELE(malias);ORDSETFOCUS(1)
                ****************
                IF ADIREG()
                        (malias)-> empresa := mcodemp
                        (malias)-> tipo    := mtipo_doc
                        IF EMPTY(mcod_cart)
                                (malias)-> numero := SPACE(3)
                        ELSE
                                (malias)-> numero := STRZERO(mcod_cart,3)
                        ENDIF
                        (malias)-> agencia   := magencia
                        (malias)-> c_c       := mc_c
                        (malias)-> duplicata := mduplicata
                        (malias)-> valor_dup := mvalor
                        (malias)-> tip_cli   := con_cli[1,8]
                        (malias)-> fornec    := mcod_cli
                        (malias)-> cliente   := mnome_cli
                        (malias)-> emissao   := memissao
                        (malias)-> venc      := mvenc
                        (malias)-> venc1     := mvenc
                        IF mtipo_doc = 'CT' .AND. mtp_241 = NIL
                                (malias)-> valor := mvalor - (mvalor * (mdesc_cart/100))
                        ELSE
                                (malias)-> valor := mvalor
                        ENDIF
                        (malias)-> pago     := " "
                        (malias)-> vendedor := STRZERO(mcod_ven,3)
                        (malias)-> num_ped  := STRZERO(mnum_ped,6)
                        (malias)-> banco    := mbanco
                        (malias)-> comissao := mcomissao
                        (malias)-> corrente := mcorrente
                        (malias)-> obs      := mobs
                        (malias)-> operador := cod_operado
                        (malias)-> mov_cx   := 'C'
                        (malias)-> com_sem := mcom_sem
                        IF memissao = mvenc .AND. mtp_241 = NIL
                                botao(10,10,12,30,'Deseja fazer a BAIXA deste documento agora [S/n]:',,,,0)
                                opcao := ' '
                                @ 11,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N' WHEN mtipo_doc <> 'DN'
                                READ
                                IF opcao = 'S'
                                        (malias)->datpag := mvenc
                                        (malias)->vlpago := mvalor
                                        (malias)->pago   := "B"
                                        (malias)->banco  := 'C'
                                ENDIF
                        ENDIF
                        DBCOMMIT()
                        DBUNLOCK()
                ENDIF
                *************
                SELE('caix');ORDSETFOCUS(1)
                *************
                IF ADIREG()
                        caix-> empresa := mcodempresa
                        caix-> data := mdata_sis
                        caix-> tipo := mtipo_doc
                        caix-> tipo_comp := 'AV'
                        caix-> nota := mduplicata
                        caix-> cod_cli := mcod_cli
                        caix-> cod_vend := STRZERO(mcod_ven,3)
                        caix-> cod_opera := cod_operado
                        caix-> hora := TIME()
                        caix-> valor_com := mvalor
                        caix-> venci := mvenc
                        caix-> valor := mvalor
                	caix-> c_s   := mcom_sem
		        IF mtipo_doc = 'CH'
                                caix-> num_ban := STRZERO(mcod_cart,3)
                        ELSE
                                caix-> cod_ct := STRZERO(mcod_cart,3)
                        ENDIF
                        caix-> num_dup := mduplicata
                        caix-> documento := mduplicata
                        IF mtipo_doc = 'CH' .AND. memissao = mvenc
                                caix-> descri1 := '*** CREDITO ***  Cheque Avista'
                                caix-> descri2 := '     No.: '+mduplicata+'  - O.S. No.:'+STRZERO(mnum_ped,6)
                        ELSEIF mtipo_doc = 'CH' .AND. memissao < mvenc
                                caix-> descri1 := '*** CREDITO ***  Cheque Aprazo'
                                caix-> descri2 := '     No.: '+mduplicata+'  - O.S. No.:'+STRZERO(mnum_ped,6)
                        ELSEIF mtipo_doc = 'CT'
                                caix-> descri1 := '*** CREDITO ***  Cartao Credito'
                                caix-> descri2 := '    No.: '+mduplicata+'  - O.S. No.:'+STRZERO(mnum_ped,6)
                        ELSEIF mtipo_doc = 'DN'
                                caix-> descri1 := '*** CREDITO ***  Dinheiro'
                                caix-> descri2 := '          No.: '+mduplicata+'  - O.S. No.:'+STRZERO(mnum_ped,6)
                        ENDIF
                ENDIF
                DBCOMMIT()
                DBUNLOCK()
        ENDIF
        **************
        SELE(malias);ORDSETFOCUS(1)
        **************
        DBUNLOCKALL()
        DBCOMMITALL()
        IF ver_serie() = '975976'
                opcao := op_simnao('S','Deseja Imprimir o RECIBO:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                sac63(mnome_cli,mvalor,mvenc)
                LOOP
        ELSE
                IF ! imp_arq('DUPLICATA.REL','D','N')
                        LOOP
                ENDIF
        ENDIF
        IF mtp_241 = NIL
                imprt(mtipo_imp,'E')
                pitalico(.T.)
                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                pitalico(.F.)
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT(mend_firm)
                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY ' '
                @ PROW(),00 SAY 'Cliente:'
                @ PROW(),PCOL()+1 SAY STR(mcod_cli,5)
                @ PROW(),PCOL()+1 SAY mnome_cli
                @ PROW()+1,00 SAY 'End.: '+mend
                @ PROW()+1,00 SAY 'Bairro: '+RTRIM(mbairro)+'-Cidade: '+RTRIM(mcidade)+'-'+muf+'- Cep:'+con_cli[1,26]
                @ PROW()+1,00 SAY 'Fone..: '+con_cli[1,29]
                IF mcgc <> SPACE(14)
                @ PROW()+1,00 SAY 'CGC:'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+minsc)
                ELSEIF mcpf <> SPACE(11)
                        @ PROW()+1,00 SAY 'CPF:'
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
                ENDIF
                @ PROW()+1,00 SAY mtraco
                imprt(mtipo_imp,'E',1)
                pitalico(.T.)
                @ PROW(),00 SAY 'DUPLICATA No.: '+mtipo_doc+mduplicata
                pitalico(.F.)
                imprt(mtipo_imp,'N')
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
                @ PROW(),09 SAY memissao
                @ PROW(),38 SAY 'Vencimento:'
                @ PROW(),50 SAY mvenc
                @ PROW(),50 SAY mvenc
                @ PROW()+1,00 SAY 'Fatura No.:...............'
                @ PROW(),49 SAY 'Cod.:'
                @ PROW(),55 SAY STRZERO(mcod_ven,3)
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(mvalor,'99,999,999.99'))+')',60))
                DEVPOS(PROW(),00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(mvalor,'99,999,999.99'))+')',60))
                mextenso:= '('+extenso(mvalor,.T.,'real','reais')+')'
*                mextenso:= '('+RTRIM(extenso(iat(mvalor,2)))+')'
                mlinha := MLCOUNT(mextenso,80)
                FOR lin = 1 TO mlinha
                        mlin := MEMOLINE(mextenso,80,lin,,10)
                        DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),80))
                NEXT
                @ PROW()+1,00 SAY mtraco
                mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,129]+', ou a sua ordem na praca e vencimento indicados.'
                mlinha := 0
                mlinha := MLCOUNT(mextenso,80)
                lin := 0
                FOR lin = 1 TO mlinha
                        mlin := MEMOLINE(mextenso,80,lin,,10)
                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                NEXT
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+2,00);DEVOUT(PADC('Em ......../......../........',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',80))
                DEVPOS(PROW()+2,00);DEVOUT(PADC('.................................           ...............................',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('     Assinatura do Emitente                      Assinatura do Sacado',80))
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(PADC(m_set[1,52],80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(m_set[1,53],80))
                @ PROW()+1,00 SAY mtraco
                EJECT
                SETPRC(00,00)
        ELSE
                IF m_set[1,65] = 'F'
                        FOR i = 1 TO m_set[1,66]
                                DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                IF mtp_241 = NIL
                                        DEVPOS(PROW()+2,25);DEVOUT('V A L E S')
                                ELSE
                                        DEVPOS(PROW()+2,25);DEVOUT('C R E D I T O')
                                ENDIF

                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                DEVPOS(PROW(),16);DEVOUT(memissao)

                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mnome_cli)
                                DEVPOS(PROW()+1,16);DEVOUT(mobs)

                                DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        NEXT
                ELSEIF m_set[1,65] = 'B'
                        IF m_indiv[1,7] = '4200'
                                imprt('M','N+')
                        ELSE
                                imprt(mtipo_imp,'C')
                        ENDIF
                        mtraco := REPLI('=',60)
                        FOR i = 1 TO m_set[1,66]
                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                IF mtp_241 = NIL
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('V A L E S',35))
                                ELSE
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O',35))
                                ENDIF

                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(memissao)
                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))
                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mnome_cli)
                                DEVPOS(PROW()+1,16);DEVOUT(mobs)

                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        NEXT
                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                ENDIF
                SETPRC(00,00)
        ENDIF
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DUPLICATA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m *************************************




