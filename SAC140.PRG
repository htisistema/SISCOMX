*************************
* INCLUSAO DE FORNECEDOR / CONTA A PAGAR
*************************
FUNCTION sac140(mxml)
***************
LOCAL MPRG:='SAC140',;
      mcod_forn,mfabrica,mendereco,mbairro,mcidade,muf,mcep,mcpostal,mtel1,mtel2,;
      mfax,mcgc,minsc,mprazo_pag,mct_gerente,mct_vendedo,mct_fatura,;
      mct_cobran,mlimite,mobs,mbanco,mcarteira,opcao,li,ci,lb,cb,;
      mcodigo,tela,tela1,tela2,lba,cba,point,pode,memail,mobs1,mobs2,;
      mobs3,mobs4,mobs5,mcpf,mdata_cad,mct_cobranca,mpocket := ' ',mfantasia,aret:={}
MEMVAR nivel_acess,mdata_sis,getlist
PRIVATE mcodconta

IF ! ver_nivel(mprg,'INCLUSAO DE FORNECEDOR/CONTA APAGAR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 22
cba := 90
op_tela(02,10,33,100,' Inclusao de Fornecedor e OUTROS ',,1)
WHILE .T.
        opcao := mpocket := 'S'
        mlimite := 0
        mcarteira := mbanco := SPACE(1)
        muf := SPACE(2)
        mcodigo := mcod_forn := mcodconta := SPACE(4)
        mcpostal := SPACE(6)
        mprazo_pag := SPACE(8)
        mcep := SPACE(9)
        mcpf := SPACE(11)
        mtel1 := mtel2 := mfax := mcgc := minsc := SPACE(14)
        mct_gerente := mct_vendedo := mct_fatura := mct_cobranca := SPACE(15)
        mbairro := mcidade := SPACE(20)
        mendereco := SPACE(35)
        mfabrica := mfantasia := SPACE(40)
        memail := SPACE(120)
        mobs := mobs1:= mobs2:= mobs3:= mobs4:= mobs5:= SPACE(60)
        IF mxml # NIL
                mfabrica  := SUBSTR(mfornece,1,40)
                mfantasia := SUBSTR(mfant_forn,1,40)
                mcgc      := mcnpj_forn
                minsc     := mie_forn
                mendereco := SUBSTR(mend_forn+', '+mnum_forn,1,35)
                mbairro   := SUBSTR(mbairro_forn,1,20)
                mcidade   := SUBSTR(mcid_forn,1,20)
                muf       := muf_forn
                mcep      := mcep_forn
                mtel1     := mfone_forn
        ENDIF
        mensagem('Digite o Nome do Fabricante a ser Cadastrado - <ESC> p/Retornar')
        DEVPOS( 0,1);DEVOUT('Data Cadastro...:')
        DEVPOS( 1,1);DEVOUT('Codigo..........:')
        DEVPOS( 2,1);DEVOUT('Razao Social....:')
        DEVPOS( 3,1);DEVOUT('Nome Fantasia...:')
        DEVPOS( 4,1);DEVOUT('Tipo de Conta...:')
        DEVPOS( 5,1);DEVOUT('CNPJ............:')
        DEVPOS( 6,1);DEVOUT('Inscricao Est...:')

        @ 7,1 TO 7,cba-1
        janela(7,0,' INFORMACOES ','*','*')
        DEVPOS( 8,1);DEVOUT('Endereco........:')
        DEVPOS( 9,1);DEVOUT('Bairro..........:')
        DEVPOS(10,1);DEVOUT('Cidade..........:')
        DEVPOS(11,1);DEVOUT('UF..............:')
        DEVPOS(12,1);DEVOUT('CEP.............:')
        DEVPOS(13,1);DEVOUT('Local...........:')
        DEVPOS(14,1);DEVOUT('Email...........:')

        DEVPOS(15,1);DEVOUT('Fone............:')
        DEVPOS(16,1);DEVOUT('Fone............:')
        DEVPOS(17,1);DEVOUT('Celular.........:')

        DEVPOS(18,1);DEVOUT('Forma Pagamento.:')
        DEVPOS(19,1);DEVOUT('Prazo Pagamento.:')
        DEVPOS(20,1);DEVOUT('Limite R$.......:')

        DEVPOS(21,1);DEVOUT('Gerente.........:')
        DEVPOS(22,1);DEVOUT('Faturamento.....:')
        DEVPOS(23,1);DEVOUT('Vendedor........:')
        DEVPOS(24,1);DEVOUT('Enviar p/APP....:')

        DEVPOS(25,1);DEVOUT('Observacao......:')
        aret:={}
        sr_getconnection():exec( "SELECT MAX(cod_forn) FROM sacforn",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        mcod_forn := STRZERO(VAL(aret[1,1])+1,4)
        setcor(3)
        mdata_cad = mdata_sis
        //DEVPOS(0  ,13);DEVOUT(mcod_forn)
        DEVPOS(0  ,19);DEVOUT(mdata_cad)
        setcor(1)
        @ 1,19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,.T.)
        READ
        aret:={}
        sr_getconnection():exec("SELECT cod_forn FROM sacforn WHERE cod_forn = "+sr_cdbvalue(mcod_forn),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0
                atencao('Este CODIGO ja existe no nossos arquivos...')
                LOOP
        ENDIF
        @ 2,19 GET mfabrica PICT '@!' VALID IF(EMPTY(mfabrica),.F.,.T.)
        @ 3,19 GET mfantasia PICT '@!'
        //@ 3,16 GET mcodconta PICT '@@R 9.9.99' VALID IF(LEN(ALLTRIM(mcodconta))<3,.F.,verdesp(mcodconta,3,22))     //.AND. lim_get() WHEN men_get(4,22,'Informe o Tipo de Conta ou <F1>Ajuda')
        @ 4,19 GET mcodconta PICT '9999' VALID verdesp(mcodconta,4,22)     //.AND. lim_get() WHEN men_get(4,22,'Informe o Tipo de Conta ou <F1>Ajuda')
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(SUBSTR(mcodconta,3,2)) .AND. ! EMPTY(mcodconta)
                atencao('Tipo de Conta nao e valida...')
                LOOP
        ENDIF
        VerDesp(mcodconta,3,22)
        @ 5,19 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'forn','*','forn')
        @ 6,19 GET minsc PICT '@!'

        @ 8,19 GET mendereco PICT '@!'
        @ 9,19 GET mbairro PICT '@!'
        @ 10,19 GET mcidade PICT '@!'
        @ 11,19 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ 12,19 GET mcep PICT '99999-999'
        @ 13,19 GET mcpostal PICT '999999'
        @ 14,19 GET memail PICT '@S40' VALID lim_get() WHEN men_get(0,0,'Exemplo: sac@HTIsistemas.com.br;teste@hotmail.com (Separa os email por ponto e virgual ";" )')

        @ 15,19 GET mtel1 PICT '@!'
        @ 16,19 GET mtel2 PICT '@!'
        @ 17,19 GET mfax PICT '@!'

        //@ 11,8 GET mbanco PICT '@!'
        //@ 11,21 GET mcarteira PICT '@!'
        @ 18,19 GET mct_cobranca PICT '@!'
        @ 19,19 GET mprazo_pag PICT '@!'
        @ 20,19 GET mlimite PICT '9,999,999.99'

        @ 21,19 GET mct_gerente PICT '@!'
        @ 22,19 GET mct_fatura PICT '@!'
        @ 23,19 GET mct_vendedo PICT '@!'
        @ 24,19 GET mpocket PICT '@!' VALID mpocket $ 'S,N'

        @ 25,19 GET mobs
        @ 26,19 GET mobs1
        @ 27,19 GET mobs2
        @ 28,19 GET mobs3
        @ 29,19 GET mobs4
        @ 30,19 GET mobs5
        READ
        IF LASTKEY() = 27
                SELE('forn');ORDSETFOCUS(2)
                GO TOP
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do FORNECEDOR:')
        IF opcao = 'N'
                LOOP
        ENDIF
        sr_getconnection():exec('INSERT INTO sacforn ('+;
        'cod_forn  ,'+; //1
        'razao 	   ,'+; //2
        'fantasia  ,'+; //3
        'tipo 	   ,'+; //4
        'data_cad  ,'+; //5
        'endereco  ,'+; //6
        'bairro    ,'+; //7
        'cidade    ,'+; //8
        'uf 	   ,'+; //9
        'cep 	   ,'+; //10
        'cpostal   ,'+; //11
        'email 	   ,'+; //12
        'tel1 	   ,'+; //13
        'tel2 	   ,'+; //14
        'fax 	   ,'+; //15
        'cgc 	   ,'+; //16
        'insc 	   ,'+; //17
        'prazo_pag ,'+; //18
        'ct_gerente,'+; //19
        'ct_fatura ,'+; //20
        'ct_cobran ,'+; //21
        'ct_vendedo,'+; //22
        'limite    ,'+; //23
        'carteira  ,'+; //24
        'banco 	   ,'+; //25
        'obs       ,'+; //26
        'obs1	   ,'+; //27
        'obs2	   ,'+; //28
        'obs3	   ,'+; //20
        'obs4      ,'+;//30
        'obs5	   ,'+; //31
        'pocket   ,'+; //32
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(mcod_forn                   )+','+; //1
        sr_cdbvalue(mfabrica                    )+','+; //2
        sr_cdbvalue(mfantasia                   )+','+; //3
        sr_cdbvalue(mcodconta                   )+','+; //4
        sr_cdbvalue(mdata_cad                   )+','+; //5
        sr_cdbvalue(mendereco                   )+','+; //6
        sr_cdbvalue(mbairro                     )+','+; //7
        sr_cdbvalue(mcidade                     )+','+; //8
        sr_cdbvalue(muf                         )+','+; //9
        sr_cdbvalue(mcep                        )+','+; //10
        sr_cdbvalue(mcpostal                    )+','+; //11
        sr_cdbvalue(memail                      )+','+; //12
        sr_cdbvalue(mtel1                       )+','+; //13
        sr_cdbvalue(mtel2                       )+','+; //14
        sr_cdbvalue(mfax                        )+','+; //15
        sr_cdbvalue(mcgc                        )+','+; //16
        sr_cdbvalue(minsc                       )+','+; //17
        sr_cdbvalue(mprazo_pag                  )+','+; //18
        sr_cdbvalue(mct_gerente                 )+','+; //19
        sr_cdbvalue(mct_fatura                  )+','+; //20
        sr_cdbvalue(mct_cobranca                )+','+; //21
        sr_cdbvalue(mct_vendedo                 )+','+; //22
        sr_cdbvalue(mlimite     		)+','+; //23
        sr_cdbvalue(mcarteira                   )+','+; //24
        sr_cdbvalue(mbanco                      )+','+; //25
        sr_cdbvalue(mobs                        )+','+; //26
        sr_cdbvalue(mobs1                       )+','+; //27
        sr_cdbvalue(mobs2                       )+','+; //28
        sr_cdbvalue(mobs3                       )+','+; //29
        sr_cdbvalue(mobs4                       )+','+; //30
        sr_cdbvalue(mobs5                       )+','+; //31
        sr_cdbvalue(mpocket                     )+','+; //32
        sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        mcons_cam := {}
        sr_getconnection():exec("SELECT atu_forn FROM cam_dba",,.t.,@mcons_cam)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cam) > 0
                IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                        nulo := 'NULL'
                        sr_getconnection():exec('INSERT INTO sacforn ('+;
                        'cod_forn  ,'+; //1
                        'razao 	   ,'+; //2
                        'fantasia  ,'+; //3
                        'tipo 	   ,'+; //4
                        'data_cad  ,'+; //5
                        'endereco  ,'+; //6
                        'bairro    ,'+; //7
                        'cidade    ,'+; //8
                        'uf 	   ,'+; //9
                        'cep 	   ,'+; //10
                        'cpostal   ,'+; //11
                        'email 	   ,'+; //12
                        'tel1 	   ,'+; //13
                        'tel2 	   ,'+; //14
                        'fax 	   ,'+; //15
                        'cgc 	   ,'+; //16
                        'insc 	   ,'+; //17
                        'prazo_pag ,'+; //18
                        'ct_gerente,'+; //19
                        'ct_fatura ,'+; //20
                        'ct_cobran ,'+; //21
                        'ct_vendedo,'+; //22
                        'limite    ,'+; //23
                        'carteira  ,'+; //24
                        'banco 	   ,'+; //25
                        'obs       ,'+; //26
                        'obs1	   ,'+; //27
                        'obs2	   ,'+; //28
                        'obs3	   ,'+; //20
                        'obs4      ,'+;//30
                        'obs5	   ,'+; //31
                        'pocket	   ,'+; //32
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcod_forn                   )+','+; //1
                        sr_cdbvalue(mfabrica                    )+','+; //2
                        sr_cdbvalue(mfantasia                   )+','+; //3
                        sr_cdbvalue(mcodconta                   )+','+; //4
                        sr_cdbvalue(mdata_cad                   )+','+; //5
                        sr_cdbvalue(mendereco                   )+','+; //6
                        sr_cdbvalue(mbairro                     )+','+; //7
                        sr_cdbvalue(mcidade                     )+','+; //8
                        sr_cdbvalue(muf                         )+','+; //9
                        sr_cdbvalue(mcep                        )+','+; //10
                        sr_cdbvalue(mcpostal                    )+','+; //11
                        sr_cdbvalue(memail                      )+','+; //12
                        sr_cdbvalue(mtel1                       )+','+; //13
                        sr_cdbvalue(mtel2                       )+','+; //14
                        sr_cdbvalue(mfax                        )+','+; //15
                        sr_cdbvalue(mcgc                        )+','+; //16
                        sr_cdbvalue(minsc                       )+','+; //17
                        sr_cdbvalue(mprazo_pag                  )+','+; //18
                        sr_cdbvalue(mct_gerente                 )+','+; //19
                        sr_cdbvalue(mct_fatura                  )+','+; //20
                        sr_cdbvalue(mct_cobranca                )+','+; //21
                        sr_cdbvalue(mct_vendedo                 )+','+; //22
                        sr_cdbvalue(mlimite     		)+','+; //23
                        sr_cdbvalue(mcarteira                   )+','+; //24
                        sr_cdbvalue(mbanco                      )+','+; //25
                        sr_cdbvalue(mobs                        )+','+; //26
                        sr_cdbvalue(mobs1                       )+','+; //27
                        sr_cdbvalue(mobs2                       )+','+; //28
                        sr_cdbvalue(mobs3                       )+','+; //29
                        sr_cdbvalue(mobs4                       )+','+; //30
                        sr_cdbvalue(mobs5                       )+','+; //31
                        sr_cdbvalue(mpocket                     )+','+; //32
                        sr_cdbvalue(' ')+')',,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
                SR_SetActiveConnection(nCnn)
        ENDIF
        IF mxml # NIL
                wvw_lclosewindow()
                RETURN mcod_forn
        ENDIF

ENDDO
RETURN NIL
********************************** f i m *******************************
