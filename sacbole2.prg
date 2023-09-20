MEMVAR getlist,mdata_sis,cod_operado
#xtranslate Default( <x>, <y> ) => IIF( <x> == NIL, <y>, <x> )
**************************************
* MENU DOS BOLETOS
**************************************
FUNCTION sacbole2(mcli,mdoc,mvlr,mtp,mnum_p)
********************************************
LOCAL mprg:='SACBOLE2',;
      tela,lba:=16,cba:=79,mtipo_end,mflag_imp:=' ',mfound,i:=0,meject:=' ',;
      oIni,mmulta,mjuros,mdia_prot,mcod_banco,;
      mnbanco,mtipo_cob:=' ',mcarteira:=' ',mDiasProt:=0,mnum_remessa:=0,mnum:=0,m_boleto:={},mdespesa:=0,msld_dev := 'N',;
      m_dupr := {},aret:={},point := 0,m_email:={},mdias_atras := 0

PRIVATE mdata,mvenc,n_documento,especie,aceite,mvalor,bol_obs1,;
        bol_obs2,bol_obs3,bol_obs4,bol_obs5,mcod_cli,mendereco,mcliente,mreg:=0,mtipo,;
        mvalor_ped:=0,mparc:=0,macrecimo:=0,marq_html:='HTIBOLETO                     ',;
        cons_cli:={},minstrucao1,minstrucao2,minstrucao3,minstrucao4,minstrucao6,mprev,dir_reme,mconta_c,;
        magencia,mcpf,mcgc,mnum_ped:=0,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),q_ban := {},;
        mcnpj:='',cFileName:=' ',mcompetencia:='     ',impri_bol,bol_cli:= {},q_dup := {},;
        sem_acento:=' '

mtipo := mtp
IF mdoc = NIL
        n_documento := SPACE(10)
        mvalor := mcod_cli := 0
ELSE
        n_documento := ALLTRIM(mdoc)
        mvalor := mvlr
        mcod_cli := mcli
ENDIF
op_tela(05,05,40,95,' Emissao de Boleto Bancario',,'*')
******************
set_key('cliente')
******************
mtipo_end := 'P'
mdata := mdata_sis
mvenc := mdata_sis + 30
IF mtipo = 'DUPLICATA' .OR. mtipo = 'DUPLICATA JW'
        especie := 'C   '
ELSE
        especie := 'DM  '
ENDIF
m_indiv[1,38]:=ALLTRIM(m_indiv[1,38])
aceite := SPACE(2)
mcliente := SPACE(40)
mendereco := SPACE(70)
mcgc := SPACE(18)
macrecimo := mdia_prot := mcod_banco := mdespesa := 0
mmulta   :=m_set[1,50]
mjuros   :=m_set[1,51]
mcnpj := TRANSFORM(SUBSTR(m_set[1,123],1,14),'@R XX.XXX.XXX/XXXX-XX')
mtipo_bol := '3'
mcompetencia:=SPACE(5)
IF mnum_p # NIL
        mnum_ped := mnum_p
ENDIF
WHILE .T.
        exibi_prg(mprg)
        dir_reme := m_indiv[1,38]
        mprev := 'S'
        marq_html:='HTIBOLETO                     '
        mtipo_imp := m_indiv[1,25]
        mfound:=' '
        mvalor := 0
        mensagem('Preencha os campos que desejar - <ESC> p/Sair')
        limpa(00,00,30,100)
        DEVPOS(0, 1);DEVOUT('Codigo Banco....:')
        DEVPOS(1, 1);DEVOUT('No.do Banco.....:')
        DEVPOS(2, 1);DEVOUT('Num.Agencia.....:')
        DEVPOS(2, 35);DEVOUT('DV:')
        DEVPOS(3, 1);DEVOUT('Conta Corrente..:')
        DEVPOS(3, 35);DEVOUT('DV:')
        DEVPOS(4, 1);DEVOUT('Codigo Cedente..:')
        DEVPOS(5, 1);DEVOUT('Tipo Cobranca...:')
        DEVPOS(6, 1);DEVOUT('Carteira........:')
        DEVPOS(7, 1);DEVOUT('Tipo de Boleto...:')
        @ 8,0 TO 8,90
        DEVPOS(9, 1);DEVOUT('No.Pedido........:')
        DEVPOS(10,1);DEVOUT('Cod.Cliente......:')
        DEVPOS(11,1);DEVOUT('CGC/CPF..........:')
        DEVPOS(12,1);DEVOUT('Tipo Endereco....:')
        DEVPOS(13,1);DEVOUT('Email............:')
        @ 14,0 TO 14,90
        DEVPOS(15,1);DEVOUT('Saldo Devedor....:')
        DEVPOS(16,1);DEVOUT('Data.............:')
        DEVPOS(17,1);DEVOUT('Competencia 99/99:')
        DEVPOS(18,1);DEVOUT('Vencimento.......:')
        DEVPOS(19,1);DEVOUT('No.Documento.....:')
        DEVPOS(20,1);DEVOUT('Especie..........:')
        DEVPOS(21,1);DEVOUT('Entrada R$.......:')
        DEVPOS(22,1);DEVOUT('Valor............:')
        DEVPOS(23,1);DEVOUT('Multa............:')
        DEVPOS(24,1);DEVOUT('Juros............:')
        DEVPOS(25,1);DEVOUT('Despesa R$.......:')
        DEVPOS(26,1);DEVOUT('Dias Protesto....:')
        DEVPOS(27,1);DEVOUT('Instrucao........:')
        mcod_banco := 1
        /*
        @ 0,20 GET mcod_banco PICT "999"
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        */
        q_ban := {}
        sr_getconnection():exec("SELECT * FROM sacbanco WHERE cod_banco = "+sr_cdbvalue(mcod_banco),,.t.,@q_ban)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(q_ban) = 0
                atencao('Este Banco nao esta Cadastrado')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
	
        mDiasProt := q_ban[1,12]
	mnbanco := STRZERO(VAL(q_ban[1,3]),3)
        //mconta_c := ALLTRIM(q_ban[1,11])+ALLTRIM(q_ban[1,5])+'-'+q_ban[1,9]
        mconta_c := ALLTRIM(q_ban[1,5])+'-'+q_ban[1,9]
        magencia := ALLTRIM(q_ban[1,4])+'-'+q_ban[1,10]
        mdespesa := q_ban[1,14]
        //IF ! EMPTY(q_ban[1,7])
                mtipo_cob := ALLTRIM(q_ban[1,7])
                mcarteira := ALLTRIM(q_ban[1,17])
        //ELSE
        //        mtipo_cob := mcarteira := '  '
        //ENDIF
        //macess_escr := ALLTRIM(q_ban[1,8])
        IF EMPTY(q_ban[1,11])
                q_ban[1,11] := ALLTRIM(q_ban[1,5])+'-'+q_ban[1,9]
        ENDIF
        setcor(3)
        DEVPOS(0,24);DEVOUT(q_ban[1,2])
        DEVPOS(1,20);DEVOUT(STRZERO(VAL(q_ban[1,3]),3))
        DEVPOS(2,20);DEVOUT(magencia)
        DEVPOS(2,39);DEVOUT(q_ban[1,10])
        DEVPOS(3,20);DEVOUT(mconta_c)
        DEVPOS(3,39);DEVOUT(q_ban[1,9])
        DEVPOS(4,20);DEVOUT(q_ban[1,11])
        DEVPOS(5,20);DEVOUT(mtipo_cob)
        DEVPOS(6,20);DEVOUT(mcarteira)
        setcor(1)
        //@ 5,20 GET mtipo_cob PICT '999' VALID IF(EMPTY(mtipo_cob),.F.,.T.)
        //@ 6,20 GET mcarteira PICT '9' VALID IF(EMPTY(mcarteira),.F.,.T.)
        //@ 7,20 GET mtipo_bol PICT '@!' VALID mtipo_bol $ '0,1,2,3,4' .AND. lim_get() WHEN men_get(0,0,'Informe o tipo do Boleto: 0-Padr�o, 1-Carn�, 2-Fatura, 3-Padr�o Entrega')
*/
        @ 9,20 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cli := 0
        IF ! EMPTY(mnum_ped)
                q_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@q_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(q_ped) = 0
                        atencao('Nao foi encontrado este PEDIDO')
                        LOOP
                ENDIF
                IF ! EMPTY(q_ped[1,97])
                        atencao('Este Pedido ja foi emitido *** BOLETO ***')
                ENDIF
                q_dup := {}
                sr_getconnection():exec("SELECT * FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@q_dup)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(q_dup) > 0
                        mfound := '*'
                        mcod_cli := q_dup[1,7]
                        mcliente := q_dup[1,8]
                        ver_cli(mcod_cli,4,24)
                        mdata := q_dup[1,10]
                        mvenc := q_dup[1,11]
                        mvalor := q_dup[1,19]
                        n_documento := ALLTRIM(q_dup[1,4])
                ELSE
                        mcod_cli := q_ped[1,23]
                        ver_cli(mcod_cli,1,20)
                        mdata := q_ped[1,4]
                        mvenc := q_ped[1,4] + VAL(SUBSTR(q_ped[1,44],3,3))
                        mparc := VAL(SUBSTR(q_ped[1,43],2))
                        n_documento := ALLTRIM(q_ped[1,2])+'/01'
                        mvalor_ped := i := 0
                        FOR i = 1 TO LEN(q_ped)
                                mvalor_ped := mvalor_ped + (q_ped[i,14] * q_ped[i,18])
                        NEXT
                        mvalor := mvalor_ped    /// mparc
                        mvalor := mvalor - q_ped[1,46]
                        DEVPOS(21,20);DEVOUT(TRANSFORM(q_ped[1,46],'999,999.99'))
                ENDIF
        ENDIF
        @ 10,20 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,10,26) WHEN EMPTY(mnum_ped)
        @ 10,26 GET mcliente PICT '@!' WHEN EMPTY(mcod_cli) .AND. EMPTY(mnum_ped)
        @ 11,20 GET mcgc WHEN EMPTY(mnum_ped) .AND. EMPTY(mcod_cli)
        @ 12,20 GET mtipo_end PICT '@!' VALID mtipo_end $ 'P,C' .AND. lim_get() WHEN men_get(4,7,'Informe o tipo do Endereco: [P]rincipal ou [C]obranca')
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        ver_cli(mcod_cli,10,26)
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF ! EMPTY(mcod_cli)
                mcliente := cons_cli[1,3]+IF(! EMPTY(cons_cli[1,4]),' - ('+SUBSTR(cons_cli[1,4],1,15)+')','')
                IF mtipo_end = 'P'
                        mendereco := RTRIM(cons_cli[1,21])+'-'+RTRIM(cons_cli[1,22])+'-'+RTRIM(cons_cli[1,24])+'-'+RTRIM(cons_cli[1,25])+'- CEP.:'+cons_cli[1,26]
                ELSE
                        mendereco := RTRIM(cons_cli[1,100])+'-'+RTRIM(cons_cli[1,101])+'-'+RTRIM(cons_cli[1,102])+'-'+RTRIM(cons_cli[1,103])+'- CEP.:'+cons_cli[1,104]
                ENDIF
        ENDIF
        mjuros := m_set[1,51]
        SETCOR(3)
        DEVPOS(11,20);DEVOUT(IF(! EMPTY(cons_cli[1,32]),cons_cli[1,32],cons_cli[1,34]))
        DEVPOS(13,20);DEVOUT(cons_cli[1,27])
        SETCOR(1)

        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************
        m_dupr := {}
        aret:={}
        sr_getconnection():exec("SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND datpag IS NULL ORDER BY venc,duplicata",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0 .AND. EMPTY(mnum_ped)
                i := point := 0
                FOR i = 1 TO LEN(aret)
                                     //  tipo        duplicata       tip_pg         numero             venc                      valor                             conta                    data_fund                     emp.
                        AADD(m_dupr,' '+aret[i,2]+' '+aret[i,4]+' '+aret[i,26]+'  '+aret[i,3]+'   '+DTOC(aret[i,11])+'   '+TRANSFORM(aret[i,19],'999,999.99')+' '+aret[i,28]+' '+IF(! EMPTY(aret[i,43]),'S/F','   ')+' '+aret[i,1])
                NEXT
                op_tela(05,10,28,70,'Documentos do Cliente: '+STR(mcod_cli,5)+' - '+aret[1,8])
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                setcor(3)
                DEVPOS(1,01);DEVOUT('Documento')
                DEVPOS(1,18);DEVOUT('Op')
                DEVPOS(1,21);DEVOUT(' No.')
                DEVPOS(1,27);DEVOUT('Vencimento')
                DEVPOS(1,44);DEVOUT('Valor')
                DEVPOS(1,56);DEVOUT('Emp')
                @ 2,1 TO 2,70
                setcor(10);point := ACHOICE(3,1,23,59,m_dupr,,,point);setcor(1)
                wvw_lclosewindow()
                DO CASE
                        CASE LASTKEY()=27
                                LOOP
                        CASE LASTKEY() = 13
                                //mcompetencia := SUBSTR(DTOC(aret[point,11]),4,2)+'/'+SUBSTR(DTOC(aret[point,11]),7,2)
                                mvenc := aret[point,11]
                                mvalor := aret[point,19]
                                mcompetencia := SUBSTR(DTOC(mvenc),4,2)+'/'+SUBSTR(DTOC(mvenc),7,2)
                                IF ver_serie() = '682110' .OR. ver_serie() = '975976'
                        	        n_documento := STR(mcod_cli,5)+SUBSTR(mcompetencia,2,1)+SUBSTR(mcompetencia,5,1)+'  '
                                ELSE
                                        n_documento := aret[point,4]
                                        /*
                                        n_documento := STRTRAN(aret[point,4],'-','')
                                        n_documento := STRTRAN(n_documento,'/','')
                                        n_documento := STRTRAN(n_documento,' ','')
                                        */
                                ENDIF
                END
        ELSE
                mcompetencia := SUBSTR(DTOC(mvenc),4,2)+'/'+SUBSTR(DTOC(mvenc),7,2)
                IF ! EMPTY(mnum_ped)
	               //n_documento := STRZERO(mnum_ped,7)
        	        n_documento := STRZERO(mnum_ped,9)
	       ELSE
	                //n_documento := mcod_cli+SUBSTR(DTOC(mvenc),5,1)+SUBSTR(DTOC(mvenc),8,1)+'  '
        	        n_documento := '  '+STR(mcod_cli,5)+SUBSTR(mcompetencia,2,1)+SUBSTR(mcompetencia,5,1)
	       ENDIF
        ENDIF
        setcor(1)
        limpa(12,1,12,cba-1)
        DEVPOS(12,1);DEVOUT('Endereco........:')
        @ 12,20 GET mendereco PICT '@S70!' WHEN EMPTY(mnum_ped)
        @ 15,20 GET msld_dev PICT '@!' VALID msld_dev $ 'S,N'
        @ 16,20 GET mdata WHEN msld_dev = 'N'
        @ 17,20 GET mcompetencia PICT '99/99' WHEN msld_dev = 'N'
	IF ver_serie() = '141542'
        	@ 18,20 GET mvenc VALID IF(mvenc<mdata,.F.,.T.)      //WHEN EMPTY(mnum_ped)
        ELSE
        	@ 18,20 GET mvenc VALID IF(mvenc<mdata,.F.,.T.) WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        ENDIF
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF LEN(aret) > 0 .AND. EMPTY(mnum_ped)
                IF aret[point,28] = '*'
                        mdias_atras := mvenc - aret[point,11]
                ELSE
                        mdias_atras := mvenc - (aret[point,11]+m_set[1,106])
                ENDIF
                IF mdias_atras > 0
                        mdias_atras := mvenc - aret[point,11]
                        mmulta := iat(aret[point,19] * ((m_set[1,50])/100),2)
                        mjuros := iat((aret[point,19] * ((mdias_atras*m_set[1,51])/100)),2)
                ELSE
                        mjuros := mmulta := 0
                ENDIF
                IF mjuros+mmulta > 0
                        DEVPOS(21,32);DEVOUT('Valor Principal.: '+TRANSFORM(iat(aret[point,19],2),'999,999.99'))
                ENDIF
                mvalor=iat(aret[point,19]+mjuros+mmulta,2)
                mmulta   :=m_set[1,50]
                mjuros   :=m_set[1,51]
        ENDIF
        IF ver_serie() = '682110' .OR. ver_serie()= '975976'
                //ATENCAO(ver_serie())
                //minstrucao1 := ALLTRIM(m_set[1,56])+' '+SUBSTR(DTOC(mvenc),4,2)+'/'+SUBSTR(DTOC(mvenc)+SPACE(65 - LEN(ALLTRIM(m_set[1,52]))),7,2)
                minstrucao1 := ALLTRIM(m_set[1,56])+' '+mcompetencia+SPACE(65 - LEN(ALLTRIM(m_set[1,56])))
                minstrucao2 := m_set[1,57]
                minstrucao3 := m_set[1,58]
                minstrucao4 := m_set[1,59]
        ELSE
                minstrucao1 := m_set[1,56]
                minstrucao2 := m_set[1,57]
                minstrucao3 := m_set[1,58]
                minstrucao4 := m_set[1,59]
        ENDIF

        @ 19,20 GET n_documento PICT '@!' VALID IF(EMPTY(n_documento),.F.,.T.) WHEN msld_dev = 'N'
        @ 20,20 GET especie PICT '@!' WHEN msld_dev = 'N'
        @ 22,20 GET mvalor PICT '999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.) WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        @ 23,20 GET mmulta PICT '999.99' WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        @ 24,20 GET mjuros PICT '999.99' WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        @ 25,20 GET mdespesa PICT '99,999.99' WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        @ 26,20 GET mDiasProt PICT '999' WHEN EMPTY(mnum_ped) .AND. msld_dev = 'N'
        @ 27,20 GET minstrucao1
        @ 28,20 GET minstrucao2
        @ 29,20 GET minstrucao3
        @ 30,20 GET minstrucao4
        READ
        n_documento := ALLTRIM(n_documento)
        mnosso_num := n_documento
        IF mtipo_cob = '12' .AND. STRZERO(VAL(q_ban[1,3]),3) = '104'
		mnosso_num := '9'+STRZERO(VAL(mnosso_num),9)
        ENDIF

        IF '@$juros' $ minstrucao1 .OR. '@$juros' $ minstrucao2 .OR. '@$juros' $ minstrucao3 .OR. '@$juros' $ minstrucao4 ;
           .OR. '@%juros' $ minstrucao1 .OR. '@%juros' $ minstrucao2 .OR. '@%juros' $ minstrucao3 .OR. '@%juros' $ minstrucao4
                mjuros := mmulta := 0
        ENDIF

        minstrucao1 := STRTRAN(minstrucao1,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        minstrucao2 := STRTRAN(minstrucao2,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        minstrucao3 := STRTRAN(minstrucao3,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))
        minstrucao4 := STRTRAN(minstrucao4,'@$juros',ALLTRIM(TRANSFORM((m_set[1,51]/100)*mvalor,'999,999.99')))

        minstrucao1 := STRTRAN(minstrucao1,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        minstrucao2 := STRTRAN(minstrucao2,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        minstrucao3 := STRTRAN(minstrucao3,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))
        minstrucao4 := STRTRAN(minstrucao4,'@%juros',ALLTRIM(TRANSFORM(m_set[1,51],'999.99')))

        minstrucao1 := STRTRAN(minstrucao1,'@$multa',ALLTRIM(TRANSFORM((m_set[1,50]/100)*mvalor,'999,999.99')))
        minstrucao2 := STRTRAN(minstrucao2,'@$multa',ALLTRIM(TRANSFORM((m_set[1,50]/100)*mvalor,'999,999.99')))
        minstrucao3 := STRTRAN(minstrucao3,'@$multa',ALLTRIM(TRANSFORM((m_set[1,50]/100)*mvalor,'999,999.99')))
        minstrucao4 := STRTRAN(minstrucao4,'@$multa',ALLTRIM(TRANSFORM((m_set[1,50]/100)*mvalor,'999,999.99')))

        minstrucao1 := STRTRAN(minstrucao1,'@%multa',ALLTRIM(TRANSFORM(m_set[1,50],'999.99')))
        minstrucao2 := STRTRAN(minstrucao2,'@%multa',ALLTRIM(TRANSFORM(m_set[1,50],'999.99')))
        minstrucao3 := STRTRAN(minstrucao3,'@%multa',ALLTRIM(TRANSFORM(m_set[1,50],'999.99')))
        minstrucao4 := STRTRAN(minstrucao4,'@%multa',ALLTRIM(TRANSFORM(m_set[1,50],'999.99')))

        opcao := op_simnao('S','Confirma os dados para Impressao do Boleto:')
        cfilename:='bol.ini'
        IF opcao = 'S'
                ***INICIA O ACBRMONITOR***

                IF ! inicia_acbr()
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

                IBR_COMANDO('BOLETO.LimparLista', ,10)
                IF ! EMPTY(mnum_ped) .OR. msld_dev = 'S'
                        IF ! EMPTY(mnum_ped)
                                q_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@q_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(q_ped) = 0
                                        atencao('Nao foi encontrado este PEDIDO')
                                        LOOP
                                ENDIF
                                IF ! EMPTY(q_ped[1,97])
                                        atencao('Este Pedido ja foi emitido *** BOLETO ***')
                                ENDIF
                                m_boleto := {}
                                q_dup := {}
                                sr_getconnection():exec("SELECT * FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@q_dup)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(q_dup) > 0
                                        mfound := '*'
                                        i:=0
                                        FOR i = 1 TO LEN(q_dup) // doc        venc         vlr
                                                //q_dup[i,4] := STRTRAN(q_dup[i,4], '/', '' )
                                                //q_dup[i,4] := STRTRAN(q_dup[i,4], '-', '' )
                                                AADD(m_boleto,{q_dup[i,4],q_dup[i,11],q_dup[i,19]+mdespesa})
                                        NEXT
                                        mcod_cli := q_dup[1,7]
                                        mcliente := q_dup[1,8]
                                        ver_cli(mcod_cli,4,24)
                                        mdata := q_dup[1,10]
                                        mvenc := q_dup[1,11]
                                        mvalor := q_dup[1,19]
                                        n_documento := q_dup[1,4]
                                ELSE
                                        mcod_cli := q_ped[1,23]
                                        ver_cli(mcod_cli,1,20)
                                        mdata := q_ped[1,4]
                                        mvenc := q_ped[1,4] + VAL(SUBSTR(q_ped[1,44],3,3))
                                        mparc := VAL(SUBSTR(q_ped[1,43],2))
                                        n_documento := q_ped[1,2]       //+'/01'
                                        mvalor_ped := i := 0
                                        mvalor := mvalor / mparc
                                        i:=0
                                        FOR i = 1 TO mparc
                                                n_documento := ALLTRIM(STR(VAL(q_ped[1,2])))+'-'+ALLTRIM(STR(i))+'/'+ALLTRIM(STR(mparc))       //+'/01'
                                                //AADD(m_boleto,{q_ped[1,2]+STRZERO(i,2),q_ped[1,4] + VAL(SUBSTR(q_ped[1,44],i*3,3)),mvalor+mdespesa})
                                                //AADD(m_boleto,{ALLTRIM(q_ped[1,2])+STRZERO(i,2),q_ped[1,4] + VAL(SUBSTR(q_ped[1,44],i*3,3)),mvalor+mdespesa})
                                                AADD(m_boleto,{ALLTRIM(n_documento),q_ped[1,4] + VAL(SUBSTR(q_ped[1,44],i*3,3)),mvalor+mdespesa})
                                        NEXT
                                ENDIF
                        ELSEIF msld_dev = 'S'
                                q_dup := {}
                                sr_getconnection():exec("SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND tipo = 'ME'",,.t.,@q_dup)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(q_dup) > 0
                                        mfound := '*'
                                        i:=0
                                        FOR i = 1 TO LEN(q_dup) // doc        venc         vlr
                                                //q_dup[i,4] := STRTRAN(q_dup[i,4], '/', '' )
                                                //q_dup[i,4] := STRTRAN(q_dup[i,4], '-', '' )
                                                AADD(m_boleto,{q_dup[i,4],q_dup[i,11],q_dup[i,19]+mdespesa})
                                        NEXT
                                        mcod_cli := q_dup[1,7]
                                        mcliente := q_dup[1,8]
                                        ver_cli(mcod_cli,4,24)
                                        mdata := q_dup[1,10]
                                        mvenc := q_dup[1,11]
                                        mvalor := q_dup[1,19]
                                        n_documento := q_dup[1,4]
                                ELSE
                                        atencao('Nao existe MENSALIDADE para ser impressar...')
                                        LOOP
                                ENDIF
                        ENDIF
                        i:=0
                        FOR i = 1 TO LEN(m_boleto)
                                //atencao(str(i))
                                mnosso_num := m_boleto[i,1]
                                n_documento := m_boleto[i,1]
                                impri_bol := {}
                                              //     1           2         3          4                 5               6
                                              //     7           8         9          10                11              12
                                              //     13          14        15         16                17              18
                                              //     19          20        21         22                23              24
                                              //     25          26        27
                                AADD(impri_bol,{q_ban[1,11] ,q_ban[1,5] ,q_ban[1,9],q_ban[1,4]   ,q_ban[1,10]       ,q_ban[1,3],;
                                                m_boleto[i,1],mnosso_num ,mcarteira ,m_boleto[i,3],m_boleto[i,2]     ,mjuros    ,;
                                                mDiasProt    ,mdespesa   ,mmulta    ,q_ban[1,13]  ,cons_cli[1,2],minstrucao1,;
                                                minstrucao2  ,n_documento,mnbanco   ,especie      ,mtipo_cob         ,mtipo_end,;
                                                minstrucao3  ,minstrucao4})

                                sem_acento := STRTRAN(m_boleto[i,1],'-','')
                                sem_acento := STRTRAN(sem_acento,'/','')
                                sem_acento := STRTRAN(sem_acento,' ','')
                                imprimi_bol(impri_bol)

                                marquivo := ALLTRIM(m_indiv[1,38])+sem_acento+'.rem'
                        NEXT
                ELSE
                        impri_bol := {}
                                //     1           2         3          4                 5               6
                                //     7           8         9          10                11              12
                                //     13          14        15         16                17              18
                                //     19          20        21         22                23              24
                        //AADD(impri_bol,{q_ban[1,5] ,q_ban[1,5] ,q_ban[1,9],q_ban[1,4]   ,q_ban[1,10]       ,q_ban[1,3],;
                        AADD(impri_bol,{q_ban[1,11] ,q_ban[1,5] ,q_ban[1,9],q_ban[1,4]   ,q_ban[1,10]       ,q_ban[1,3],;
                                   n_documento  ,mnosso_num ,mcarteira ,mvalor       ,mvenc             ,mjuros    ,;
                                   mDiasProt    ,mdespesa   ,mmulta    ,q_ban[1,13]  ,cons_cli[1,2],minstrucao1,;
                                   minstrucao2  ,n_documento,mnbanco   ,especie      ,mtipo_cob         ,mtipo_end,;
                                   minstrucao3  ,minstrucao4})

                                sem_acento := STRTRAN(n_documento,'-','')
                                sem_acento := STRTRAN(sem_acento,'/','')
                                sem_acento := STRTRAN(sem_acento,' ','')
                        imprimi_bol(impri_bol)
                        marquivo := ALLTRIM(m_indiv[1,38])+sem_acento+'.rem'
                ENDIF
                //IBR_COMANDO('BOLETO.GerarRemessa',{m_indiv[1,38]})
                mensagem('Imprimindo o BOLETO aguarde...')
                IBR_COMANDO('BOLETO.Imprimir')
                IF ! EMPTY(cons_cli[1,27])
                        mensagem('Enviando EMAIL para: '+cons_cli[1,27])
                        IBR_COMANDO('BOLETO.EnviarEmail',{LOWER(ALLTRIM(cons_cli[1,27]))},10)
                ENDIF
                MYRUN('DEL '+ALLTRIM(m_indiv[1,39])+STRZERO(cons_cli[1,2],5)+ALLTRIM(sem_acento)+'.PDF')
                FRENAME(ALLTRIM(m_indiv[1,39])+'0.PDF',ALLTRIM(m_indiv[1,39])+STRZERO(cons_cli[1,2],5)+ALLTRIM(sem_acento)+'.PDF')
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************************** f i m **********************************************************
FUNCTION imprimi_bol()
*********************************************************
LOCAL slinhas :='',c_arq:=''

sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(impri_bol[1,17],5)),,.t.,@bol_cli)
sr_getconnection():exec('COMMIT',,.f.)
SET CENTURY ON
m_indiv[1,37] := ALLTRIM(m_indiv[1,37])
FCLOSE(m_indiv[1,37]+'cedente.ini')
IF FILE(m_indiv[1,37]+'cedente.ini') .OR. FILE(m_indiv[1,37]+'titulo.ini')
        MYRUN('DEL '+m_indiv[1,37]+'cedente.ini')
        MYRUN('DEL '+m_indiv[1,37]+'titulo.ini')
ENDIF
IF impri_bol[1,6] = '001'
        impri_bol[1,6] := 'IndiceACBr=1'         //BB
ELSEIF impri_bol[1,6] = '033'
        impri_bol[1,6] := 'IndiceACBr=2'         //SANTANDER
ELSEIF impri_bol[1,6] = '104'
        impri_bol[1,6] := 'IndiceACBr=3'         //CAIXA ECONOMICA
ELSEIF impri_bol[1,6] = '237'
        impri_bol[1,6] := 'IndiceACBr=5'         //BRADESCO
ELSEIF impri_bol[1,6] = '341'
        impri_bol[1,6] := 'IndiceACBr=6'         //ITAU
ELSEIF impri_bol[1,6] = '748'
        impri_bol[1,6] := 'IndiceACBr=8'         //SICRED
ELSEIF impri_bol[1,6] = '041'
        impri_bol[1,6] := 'IndiceACBr=10'        //HSBC
ELSEIF impri_bol[1,6] = '399'
        impri_bol[1,6] := 'IndiceACBr=11'        //HSBC
ELSEIF impri_bol[1,6] = '021'
        impri_bol[1,6] := 'IndiceACBr=12'        //BANESTES
ELSEIF impri_bol[1,6] = '004'
        impri_bol[1,6] := 'IndiceACBr=13'        //BANCO DO NORDESTE
ELSEIF impri_bol[1,6] = '070'
        impri_bol[1,6] := 'IndiceACBr=14'        //BANCO BRB
ELSE
        impri_bol[1,6] := 'Numero='+impri_bol[1,6]
ENDIF

/*
mArq    := fcreate(m_indiv[1,37]+'cedente.ini')
sLinhas := '[Cedente]'+m_qp+ ;
        'Nome='+RTRIM(m_set[1,129])             +m_qp+ ;
        'CNPJCPF='+RTRIM(mcnpj)               +m_qp+ ;
        'Logradouro='+RTRIM(m_set[1,132])       +m_qp+ ;
        'Numero='+RTRIM(m_set[1,160])           +m_qp+ ;
        'Bairro='+RTRIM(m_set[1,133])           +m_qp+ ;
        'Cidade='+RTRIM(m_set[1,134])           +m_qp+ ;
        'CEP='+RTRIM(m_set[1,135])              +m_qp+ ;
        'Complemento='+RTRIM(m_set[1,161])      +m_qp+ ;
        'UF='+RTRIM(m_set[1,19])                +m_qp+ ;
        'RespEmis=0'                            +m_qp+ ;
        'TipoPessoa=1'                          +m_qp+ ;        //
        'Modalidade='+ALLTRIM(q_ban[1,20])    +m_qp+ ;
        'CodigoCedente='+ALLTRIM(q_ban[1,11]) +m_qp+ ;
        'convenio='+ALLTRIM(q_ban[1,18]) +m_qp+ ;
        'DigitoAgenciaConta='+ALLTRIM(q_ban[1,19]) +m_qp+ ;
        'SoftwareHouse=HTI Sistemas Ltda.(81)'+mfone_HTI+m_qp+ ;
        'Setup=1'                               +m_qp+ ;        //'Copias=1'  +m_qp+ ;'Preview=1'  +m_qp+ ; 'Filtro=1' +m_qp+ ; 'Layoutbol='+mtipo_bol                  +m_qp+ ;   //'DirArquivoBoleto='+mcam_bol            +m_qp+ ;    //            'DirArquivoRemessa='+mcam_rem           +m_qp+ ;                'DirArquivoRetorno='+mcam_ret           +m_qp+ ;
        'CodTransmissao='+ALLTRIM(q_ban[1,7])   +m_qp+ ;  //'TipoCarteira='+ALLTRIM(q_ban[1,19])   +m_qp+ ;'CaracTitulo='+ALLTRIM(q_ban[1,20])   +m_qp+ ;'EmailAssuntoBoleto= '                  +m_qp+ ;'EmailMensagemBoleto='                  +m_qp+ ;
        'Banco='+ALLTRIM(q_ban[1,3])         +m_qp+ ;
        'CSP=000'                            +m_qp+ ;
        'CNAB=0'                             +m_qp+ ;
        '[Conta]'                            +m_qp+ ;
        'Conta='+ALLTRIM(q_ban[1,5])         +m_qp+ ;
        'DigitoConta='+ALLTRIM(q_ban[1,9])   +m_qp+ ;
        'Agencia='+ALLTRIM(q_ban[1,4])       +m_qp+ ;
        'DigitoAgencia='+ALLTRIM(q_ban[1,10]) +m_qp+ ;
        '[Banco]'                               +m_qp+ ;
        impri_bol[1,6]

fwrite( mArq, @sLinhas, len( sLinhas ) )
FCLOSE(mArq)
*/
//atencao(IF(! EMPTY(impri_bol[1,13]),DTOC(impri_bol[1,11]+impri_bol[1,13]),''))
FCLOSE(m_indiv[1,37]+'titulo.ini')
mArq    := fcreate(m_indiv[1,37]+'titulo.ini')
sLinhas := '[titulo1]'                  +m_qp+ ;
'NumeroDocumento='+impri_bol[1,7]        +m_qp+ ;
'NossoNumero='+tira_pontos(ALLTRIM(impri_bol[1,8]))+m_qp+ ;
'Carteira='+ALLTRIM(q_ban[1,17])         +m_qp+ ;
'ValorDocumento='+ALLTRIM(TRANSFORM(impri_bol[1,10],'@E 99999999.99'))    +m_qp+ ;
'Vencimento='+DTOC(impri_bol[1,11])      +m_qp+ ;
'ValorMoraJuros='+ALLTRIM(TRANSFORM(impri_bol[1,10] * (impri_bol[1,12] / 100),'@E 99999999.99'))   +m_qp+ ;
'DataDocumento='+DTOC(mdata_sis)        +m_qp+ ;
'DataProcessamento='+DTOC(mdata_sis)    +m_qp+ ;
'DataAbatimento='                       +m_qp+ ;
'DataDesconto='                         +m_qp+ ;
'DataMoraJuros='+DTOC(impri_bol[1,11]+1)  +m_qp+ ;
'DataProtesto='+IF(! EMPTY(impri_bol[1,13]),DTOC(impri_bol[1,11]+impri_bol[1,13]),'')         +m_qp+ ;
'ValorAbatimento='                      +m_qp+ ;
'ValorDesconto='                        +m_qp+ ;
'ValorMoraJuros='+ALLTRIM(TRANSFORM(impri_bol[1,10] * (impri_bol[1,12] / 100),'@E 99999999.99'))   +m_qp+ ;
'ValorIOF='                             +m_qp+ ;
'ValorOutrasDespesas='+ALLTRIM(TRANSFORM(impri_bol[1,14],'@E 99999999.99'))    +m_qp+ ;
'PercentualMulta='+ALLTRIM(TRANSFORM(impri_bol[1,15],'@E 99999999.99'))          +m_qp+ ;
'LocalPagamento='+ALLTRIM(impri_bol[1,16])  +m_qp+ ;
'EspecieDoc=DM'                         +m_qp+ ;
'EspecieMod=R$'                         +m_qp+ ;
'Sacado.NomeSacado='+STR(bol_cli[1,2],5)+'-'+bol_cli[1,3]+IF(! EMPTY(bol_cli[1,4]),' - ('+ALLTRIM(SUBSTR(bol_cli[1,4],1,15))+')','')+m_qp+ ;
'Sacado.CNPJCPF='+IF(! EMPTY(bol_cli[1,32]),RTRIM(bol_cli[1,32]),RTRIM(bol_cli[1,34]))     +m_qp+ ;
'Sacado.Pessoa='+IF(! EMPTY(bol_cli[1,32]),'1','0')                            +m_qp+ ;
'Sacado.Logradouro='+IF(impri_bol[1,24] = 'P',bol_cli[1,21],bol_cli[1,100])         +m_qp+ ;
'Sacado.Numero='+IF(impri_bol[1,24] = 'P',bol_cli[1,136],'')                         +m_qp+ ;
'Sacado.Bairro='+IF(impri_bol[1,24] = 'P',bol_cli[1,22],bol_cli[1,101])             +m_qp+ ;
'Sacado.Complemento='+IF(impri_bol[1,24] = 'P',bol_cli[1,137],'')                    +m_qp+ ;
'Sacado.Cidade='+IF(impri_bol[1,24] = 'P',bol_cli[1,24],bol_cli[1,102])             +m_qp+ ;
'Sacado.UF='+IF(impri_bol[1,24] = 'P',bol_cli[1,25],bol_cli[1,103])                 +m_qp+ ;
'Sacado.CEP='+IF(impri_bol[1,24] = 'P',bol_cli[1,26],bol_cli[1,104])                +m_qp+ ;
'Sacado.Email='+ALLTRIM(cons_cli[1,27])                                         +m_qp+ ;
'Mensagem='+IF(EMPTY(impri_bol[1,18]),'',impri_bol[1,18])+'|'+IF(EMPTY(impri_bol[1,19]),'',impri_bol[1,19])+'|'+IF(EMPTY(impri_bol[1,25]),'',impri_bol[1,25])+'|'+IF(EMPTY(impri_bol[1,26]),'',impri_bol[1,26])+m_qp+ ;
'Aceite=1'                                                                      +m_qp+ ;
'OcorrenciaOriginal=0'                                                          +m_qp+ ;
'Parcela=1'                                                                     +m_qp+ ;
'TotalParcelas=1'                                                               +m_qp+ ;
'SeuNumero='+tira_pontos(impri_bol[1,20])
/*
'Instrucao1='+impri_bol[1,18]                                                    +m_qp+ ;
'Instrucao2='+impri_bol[1,19]                                                    +m_qp+ ;
'Instrucao3='+impri_bol[1,25]                                                    +m_qp+ ;
'Instrucao4='+impri_bol[1,26]                                                    +m_qp+ ;
*/
fwrite( mArq, @sLinhas, len( sLinhas ) )
FCLOSE(mArq)
SET CENTURY OFF
IBR_CONF_BOLETO()
RETURN NIL
*/
************************************************************************
FUNCTION IBR_CONF_BOLETO()
**************************
//mensagem('Configurando o BOLETO aguarde... Enviando CEDENTE: '+ALLTRIM(m_indiv[1,37])+"cedente.ini")
//IBR_COMANDO('BOLETO.ConfigurarDados',{ALLTRIM(m_indiv[1,37])+"cedente.ini"},10)
mensagem('Configurando o BOLETO aguarde... Enviando TITULO: '+ALLTRIM(m_indiv[1,37])+"titulo.ini")
IBR_COMANDO('BOLETO.ConfigurarDados',{ALLTRIM(m_indiv[1,37])+"titulo.ini"},10)
//mensagem('Imprimindo o BOLETO aguarde...')
//IBR_COMANDO('BOLETO.Imprimir')
mensagem('Gerando arquivo REMESSA do BOLETO aguarde... Enviando CEDENTE: '+ALLTRIM(m_indiv[1,37])+"cedente.ini")
//IBR_COMANDO('BOLETO.GerarRemessa',{m_indiv[1,38]})
IBR_COMANDO('BOLETO.GerarRemessa',{ALLTRIM(m_indiv[1,38]),,STRZERO(cons_cli[1,2],5)+ALLTRIM(sem_acento)+'.REM'})
IBR_COMANDO('BOLETO.GerarPDF')
/*
IF ! EMPTY(cons_cli[1,27])
        mensagem('Enviando EMAIL para: '+cons_cli[1,27])
        IBR_COMANDO('BOLETO.EnviarEmail',{LOWER(ALLTRIM(cons_cli[1,27]))},10)
ENDIF
*/
RETURN NIL
************************************* f i m *******************************************
/* -------------------------------------------------------------------------- */
// Retorna Digito de Controle Modulo 11 (p/ Banco)                            //
// bradesco -> DC_Mod11("237", 7, .F., carteira+agencia+nossonumero)
*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*+    Function DC_Mod11()
*+    Called from ( oboleto.prg  )  13 - function acentohtml()
*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
FUNCTION DC_Mod11(mCDBC,mBSDG,mFGCB,mNMOG,lMult10)
*************************************************
LOCAL mSMMD
LOCAL mCTDG
LOCAL mSQMP
LOCAL mRSDV
LOCAL mDCMD
//LOCAL mFGCB := .F.,lMult10 := .F.
mSMMD := 0
mSQMP := 2

FOR mCTDG := 1 TO LEN(mNMOG)
        mSMMD += VAL(SUBSTR(mNMOG,LEN(mNMOG) - mCTDG+1,1)) * (mSQMP)
        mSQMP := IF(mSQMP == mBSDG,2,mSQMP+1)
NEXT
IF lMult10
        mSMMD *= 10
ENDIF
mRSDV := MOD(mSMMD,11)
IF mFGCB
        mDCMD := IF(mRSDV > 9 .OR. mRSDV < 2,"1",STR(11 - mRSDV,1))
ELSE
        IF mCDBC == "001"                 // Brasil
                mDCMD := IF(mRSDV == 0,"0",IF(mRSDV == 1,"X",STR(11 - mRSDV,1)))
        ELSEIF mCDBC LIKE "(008|033|353)"                     //Santander Banespa
                mDCMD := IF(mRSDV < 2,"0",IF(mRSDV == 10,"1",STR(11 - mRSDV,1)))
      //         mDCMD := IF(mRSDV == 0, "0", IF(mRSDV == 1, "X", STR(11 - mRSDV, 1)))
        ELSEIF mCDBC == "104"             // Caixa
                mRSDV := 11 - mRSDV
                mDCMD := IF(mRSDV > 9,"0",STR(mRSDV,1))
        ELSEIF mCDBC == "237"             // Bradesco
                mDCMD := IF(mRSDV == 0,"0",IF(mRSDV == 1,"P",STR(11 - mRSDV,1)))
        ELSEIF mCDBC == "341"             // Itau
                mDCMD := IF(mRSDV == 11,"1",STR(11 - mRSDV,1))
        ELSEIF mCDBC == "409"             // Unibanco
                mDCMD := IF(mRSDV == 0 .OR. mRSDV == 10,"0",STR(mRSDV,1))
        ELSEIF mCDBC == "422"             // Safra
                mDCMD := IF(mRSDV == 0,"1",IF(mRSDV == 1,"0",STR(11 - mRSDV,1)))
        ENDIF
ENDIF
RETURN mDCMD
/* -------------------------------------------------------------------------- */
FUNCTION RetiraAcento( cStr,  lAll, lAnsi )

   LOCAL nI
   LOCAL nLen := LEN(cStr)
   LOCAL cChar
//   LOCAL Ret := ""

   //LOCAL lAll := .T., lAnsi := .F.

   IF __ANSI $ cStr
      cStr := STRTRAN(cStr, __ANSI, "")
      lAnsi := .T.
   ENDIF

   IF lAnsi
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "E")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "i")
      cStr := STRTRAN(cStr, "�", "I")
      cStr := STRTRAN(cStr, "�", "i")
      cStr := STRTRAN(cStr, "�", "I")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "E")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "c")
      cStr := STRTRAN(cStr, "�", "C")
      cStr := STRTRAN(cStr, "�", "y")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "n")
      cStr := STRTRAN(cStr, "�", "N")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "o.")
      cStr := STRTRAN(cStr, "�", "o.")
      cStr := STRTRAN(cStr, "�", "a.")
   ELSE
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "E")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "E")
      cStr := STRTRAN(cStr, "�", "i")
      cStr := STRTRAN(cStr, "�", "I")
      cStr := STRTRAN(cStr, "�", "i")
      cStr := STRTRAN(cStr, "�", "I")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "e")
      cStr := STRTRAN(cStr, "�", "E")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "a")
      cStr := STRTRAN(cStr, "�", "A")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "c")
      cStr := STRTRAN(cStr, "�", "C")
      cStr := STRTRAN(cStr, "�", "y")
      cStr := STRTRAN(cStr, "�", "o")
      cStr := STRTRAN(cStr, "�", "O")
      cStr := STRTRAN(cStr, "�", "n")
      cStr := STRTRAN(cStr, "�", "N")
      cStr := STRTRAN(cStr, "�", "u")
      cStr := STRTRAN(cStr, "�", "U")
      cStr := STRTRAN(cStr, "�", "o.")
      cStr := STRTRAN(cStr, "�", "o.")
      cStr := STRTRAN(cStr, "�", "a.")
   ENDIF

RETURN cStr
************************************************************************

*/
