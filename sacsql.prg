*****************************
FUNCTION sacsql(mop,marquivo,mdbf)
*****************************
LOCAL mprg:='SACSQL',aret,mlinha:='',mcod_bc:='',matriz:={}
PRIVATE cor,f,mtcor:=NIL,tela_dbf,mcaminho,mtip_term,nmaxpsw:=8,mop_tip
mcaminho := SPACE(30)
mop_tip := mop
mtip_term := 'S'
IF marquivo = NIL
        op_tela(10,1,13,50,' Verificando Tabelas do BANCO DE DADOS, Aguarde um momento..... ',,1)
ENDIF
f := 0
matriz:= 'scod_op CHAR(3) NOT NULL '
matriz:= matriz + ',snome CHAR(30) '
matriz := matriz +',stipo CHAR(1) '
matriz := matriz +',stipo_sis CHAR(1) '
matriz := matriz +',ssenha CHAR(8) '
matriz := matriz +',sdata_cad DATE '
matriz := matriz +',scomissao DECIMAL(6,2) '
matriz := matriz +',scom_praz DECIMAL(6,2) '
matriz := matriz +',scom_oper DECIMAL(6,2) '
matriz := matriz +',scota DECIMAL(12,2) '
matriz := matriz +',sult_ent DATE '
matriz := matriz +',sult_fim DATE '
matriz := matriz +',snivel CHAR(2) '
matriz := matriz +',shora_ini CHAR(5) '
matriz := matriz +',shora_fim CHAR(5) '
matriz := matriz +',sult_e_c DATE '
matriz := matriz +',sh_i_c CHAR(5) '
matriz := matriz +',sexpira DECIMAL(3,0) '
matriz := matriz +',scod_aut CHAR(17) '
matriz := matriz +',sstatus CHAR(1) '
matriz := matriz +',sope CHAR(3) '
matriz := matriz +',scliente CHAR(5) '
matriz := matriz +',sproduto CHAR(5) '
matriz := matriz +',svalor DECIMAL(12,2) '
matriz := matriz +',sbloq CHAR(1) '
matriz := matriz +',smensagem CHAR(150) '
matriz := matriz +',sambiente CHAR(5) '
matriz := matriz +',doc_apagar CHAR(1) '
matriz := matriz +',estoq_min CHAR(1) '
matriz := matriz +',estoq_med DECIMAL(5,0) '
matriz := matriz +',terminal CHAR(15) '
matriz := matriz +',data_acess DATE '
matriz := matriz +',hora_acess CHAR(8) '
matriz := matriz +',email CHAR(60) '
matriz := matriz +',dat_aniv CHAR(1) '
matriz := matriz +',ver_POCKET CHAR(1) '
matriz := matriz +',endereco CHAR(40) '
matriz := matriz +',numero CHAR(6) '
matriz := matriz +',complemento CHAR(6) '
matriz := matriz +',bairro CHAR(20) '
matriz := matriz +',cidade CHAR(25) '
matriz := matriz +',uf CHAR(2) '
matriz := matriz +',fone CHAR(10) '
matriz := matriz +',cpf CHAR(11) '
matriz := matriz +',rg CHAR(15) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz +',plug CHAR(12) '
matriz := matriz +',preco_perc DECIMAL(15,2) '
matriz := matriz +',desc_max DECIMAL(15,2) '
matriz := matriz +',incl_app CHAR(1) '
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> INSOPERA')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('insopera')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> INSOPERA')
        IF mop = NIL
                sr_getconnection():exec("CREATE GENERATOR INSOPERA",,.f.)
                sr_getconnection():exec("CREATE TABLE INSOPERA ("+matriz+" )",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                sr_getconnection():exec("ALTER TABLE INSOPERA ADD UNIQUE (SR_RECNO)",,.f.)
                sr_getconnection():exec("ALTER TABLE INSOPERA ADD CONSTRAINT INSOPERA_PK PRIMARY KEY (scod_op)",,.f.)
                sr_getconnection():exec("CREATE TRIGGER INSOPERA_SR FOR INSOPERA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( INSOPERA, 1); end",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                //DBCREATE('insopera',matriz,'SQLRDD')
                IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                ADIREG()
                sen-> scod_op := '999'
                sen-> snome := 'HTI Sistemas'
                sen-> ssenha := CRIPTO('0725')
                sen-> sdata_cad := DATE()
                sen-> snivel := '1'
                ADIREG()
                sen-> scod_op := '111'
                sen-> snome := 'TROCA DE MERCADORIA'
                sen-> ssenha := CRIPTO('TROC')
                sen-> snivel := '2'
                DBCOMMITALL()
                DBUNLOCKALL()
                sen->(DBCLOSEAREA())
        ELSE
                RETURN matriz
        ENDIF
ENDIF

//IF ! FILE('INSOPERA.DBF')
//        DBCREATE('insopera',matriz,'DBFCDX')
//ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSETUP')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacsetup')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACSETUP')
        matriz:='ver         CHAR(10) '
        matriz := matriz + ',pis         DECIMAL(5,2) '
        matriz := matriz + ',confis      DECIMAL(5,2) '
        matriz := matriz + ',imposto     DECIMAL(5,2) '
        matriz := matriz + ',varejo      CHAR(1) '
        matriz := matriz + ',fatura      DECIMAL(6,2) '
        matriz := matriz + ',vlr_ent     DECIMAL(6,2) '
        matriz := matriz + ',SEF         CHAR(1) '
        matriz := matriz + ',ped_obs     CHAR(2) '
        matriz := matriz + ',ven_cli     CHAR(1) '
        matriz := matriz + ',pagina      CHAR(1) '
        matriz := matriz + ',percent     CHAR(1) '
        matriz := matriz + ',PEDIMPCX    CHAR(1) '
        matriz := matriz + ',nfe_ean     CHAR(1) '
        matriz := matriz + ',nota        CHAR(4) '
        matriz := matriz + ',saldonf     CHAR(1) '        //03.03.2002
        matriz := matriz + ',cli_fecha   CHAR(1) '         //03.03.2002
        matriz := matriz + ',tp_cabe     CHAR(1) '         // 14.09.2002
        matriz := matriz + ',uf          CHAR(2) '
        matriz := matriz + ',icm         DECIMAL(2,0) '
        matriz := matriz + ',tp_comi     CHAR(1) '
        matriz := matriz + ',cabecalho   CHAR(1) '
        matriz := matriz + ',cab_ped     CHAR(15) '
        matriz := matriz + ',cab_orc     CHAR(15) '
        matriz := matriz + ',rodap1      CHAR(60) '
        matriz := matriz + ',rodap2      CHAR(60) '
        matriz := matriz + ',rodap3      CHAR(60) '
        matriz := matriz + ',rodap4      CHAR(60) '
        matriz := matriz + ',acord1      CHAR(60) '
        matriz := matriz + ',acord2      CHAR(60) '
        matriz := matriz + ',acord3      CHAR(60) '
        matriz := matriz + ',acord4      CHAR(60) '
        matriz := matriz + ',desc_max    DECIMAL(6,2) '
        matriz := matriz + ',item_max    DECIMAL(5,0) '
        matriz := matriz + ',desc_apr    CHAR(1) '
        matriz := matriz + ',desc_ped    CHAR(1) '
        matriz := matriz + ',usa_carro   CHAR(1) '
        matriz := matriz + ',blo_vend    CHAR(1) '
        matriz := matriz + ',dado_cli    CHAR(1) '
        matriz := matriz + ',nome_fan    CHAR(1) '
        matriz := matriz + ',consulta    CHAR(1) '
        matriz := matriz + ',uti_os      CHAR(1) '
        matriz := matriz + ',desc_pdv    CHAR(1) '
        matriz := matriz + ',tp_mascara  CHAR(1) '
        matriz := matriz + ',duplicata   CHAR(1) '
        matriz := matriz + ',przantped   CHAR(1) '
        matriz := matriz + ',dup_imp     CHAR(1) '
        matriz := matriz + ',RECBXDUP    CHAR(1) '
        matriz := matriz + ',intervalo   DECIMAL(3,0) '
        matriz := matriz + ',multa_dup   DECIMAL(6,2) '
        matriz := matriz + ',juros_dup   DECIMAL(6,2) '
        matriz := matriz + ',roda_dup1   CHAR(60) '
        matriz := matriz + ',roda_dup2   CHAR(60) '
        matriz := matriz + ',ceden_bol   CHAR(1) '
        matriz := matriz + ',local_bol   CHAR(46) '
        matriz := matriz + ',mens_bol1   CHAR(60) '
        matriz := matriz + ',mens_bol2   CHAR(60) '
        matriz := matriz + ',mens_bol3   CHAR(60) '
        matriz := matriz + ',mens_bol4   CHAR(60) '
        matriz := matriz + ',mens_bol5   CHAR(60) '
        matriz := matriz + ',fecha_cx    CHAR(1) '
        matriz := matriz + ',carnes      CHAR(1) '
        matriz := matriz + ',despesa     CHAR(1) '
        matriz := matriz + ',via_desp    DECIMAL(2,0) '
        matriz := matriz + ',vales       CHAR(1) '
        matriz := matriz + ',via_vales   DECIMAL(2,0) '
        matriz := matriz + ',deposito    CHAR(1) '
        matriz := matriz + ',via_dep     DECIMAL(2,0) '
        matriz := matriz + ',UTI_TELE    CHAR(1) '
        matriz := matriz + ',PROMISSORIA CHAR(1) '
        matriz := matriz + ',obs_os1     CHAR(108) '
        matriz := matriz + ',obs_os2     CHAR(108) '
        matriz := matriz + ',obs_os3     CHAR(108) '
        matriz := matriz + ',obs_os4     CHAR(108) '
        matriz := matriz + ',obs_os5     CHAR(108) '
        matriz := matriz + ',ped_email   CHAR(1) '
        matriz := matriz + ',cx_email    CHAR(1) '
        matriz := matriz + ',rec_parc    CHAR(1) '
        matriz := matriz + ',tp_lucro    CHAR(1) '
        matriz := matriz + ',senha_pd    CHAR(1) '
        matriz := matriz + ',nome_ven    CHAR(1) '
        matriz := matriz + ',sysdatlm    CHAR(15) '
        matriz := matriz + ',receber     CHAR(1) '
        matriz := matriz + ',cli_def     INTEGER '
        matriz := matriz + ',qtdchcli    DECIMAL(5,0) '
        matriz := matriz + ',caixa       CHAR(1) '
        matriz := matriz + ',embalag     CHAR(1) '
        matriz := matriz + ',loc_emb     CHAR(1) '
        matriz := matriz + ',cam_pock    CHAR(50) '
        matriz := matriz + ',tipfrmemb   CHAR(1) '
        matriz := matriz + ',NFE_P_H     CHAR(1) '
        matriz := matriz + ',seculo      CHAR(1) '
        matriz := matriz + ',situacao    CHAR(1) '
        matriz := matriz + ',desc_cax    CHAR(1) '
        matriz := matriz + ',nfe_modo    CHAR(1) '
        matriz := matriz + ',unidade     CHAR(1) '
        matriz := matriz + ',masc_num    CHAR(12) '
        matriz := matriz + ',masc_numt   CHAR(11) '
        matriz := matriz + ',masc_qtd    CHAR(10) '
        matriz := matriz + ',cli_ped     CHAR(1) '
        matriz := matriz + ',rotina      CHAR(1) '
        matriz := matriz + ',usa_dolar   CHAR(1) '
        matriz := matriz + ',aredonda    CHAR(1) '
        matriz := matriz + ',dupl_prod   CHAR(1) '
        matriz := matriz + ',ecf         CHAR(1) '
        matriz := matriz + ',dia_venc    DECIMAL(2,0) '
        matriz := matriz + ',saldo_meno  CHAR(1) '     // 01.05.00
        matriz := matriz + ',inf_ven     CHAR(1) '        // 23.05.01
        matriz := matriz + ',PergImpPed  CHAR(1) '     // 24.10.01
        matriz := matriz + ',impslddev   CHAR(1) '      // 13.09.2002
        matriz := matriz + ',aut_ped     CHAR(1) '        // 13.02.2003
        matriz := matriz + ',altcodpr    CHAR(1) '       // 22.06.2003
        matriz := matriz + ',desc_com    DECIMAL(10,3) '      // 07.08.2003
        matriz := matriz + ',tole_com    DECIMAL(10,3) '      // 07.08.2003
        matriz := matriz + ',info_com    CHAR(1) '      // 07.08.2003
        matriz := matriz + ',d_comtele   DECIMAL(10,3) '     // 25.02.2004
        matriz := matriz + ',bloqnnf     CHAR(1) '        // 29.02.2004
        matriz := matriz + ',desc_dupr    DECIMAL(5,2) '      // 10.11.2004
        matriz := matriz + ',cli_cx      CHAR(1) '         // 12.09.2005
        matriz := matriz + ',nao_exp     DECIMAL(3,0) '        // 05.10.2005
        matriz := matriz + ',sim_exp     DECIMAL(3,0) '        // 05.10.2005
        matriz := matriz + ',prz_rec     DECIMAL(3,0) '        // 25.10.2005
        matriz := matriz + ',serie       CHAR(20) '
        matriz := matriz + ',codemp      CHAR(3) '
        matriz := matriz + ',desc_prod   CHAR(1) '
        matriz := matriz + ',simp_nac    CHAR(1) '
        matriz := matriz + ',md5_ini     CHAR(35) '
        matriz := matriz + ',insc        CHAR(14) '
        matriz := matriz + ',razao       CHAR(55) '
        matriz := matriz + ',fantasia    CHAR(35) '
        matriz := matriz + ',nome_cab    CHAR(1) '       // 17.07.01
        matriz := matriz + ',end_firma   CHAR(40) '
        matriz := matriz + ',bairro      CHAR(30) '
        matriz := matriz + ',cidade      CHAR(30) '
        matriz := matriz + ',cep         CHAR(8) '
        matriz := matriz + ',fone        CHAR(10) '
        matriz := matriz + ',email       CHAR(50) '
        matriz := matriz + ',dataini     DATE '
        matriz := matriz + ',logradouro  CHAR(34) '
        matriz := matriz + ',cont_numer  CHAR(5) '
        matriz := matriz + ',cont_compl  CHAR(22) '
        matriz := matriz + ',cont_bairr  CHAR(15) '
        matriz := matriz + ',cont_cep    CHAR(8) '
        matriz := matriz + ',contato     CHAR(28) '
        matriz := matriz + ',cont_tel    CHAR(12) '
        matriz := matriz + ',cont_cpf    CHAR(11) '
        matriz := matriz + ',imp_cod     CHAR(1) '         // 01.07.2003
        matriz := matriz + ',prodepe     CHAR(1) '         // 28.05.2004
        matriz := matriz + ',aut_dup     CHAR(1) '          // 28.05.2004
        matriz := matriz + ',lib_pd_or   CHAR(1) '       // 13.02.2007
        matriz := matriz + ',tip_ecf     CHAR(1) '         // 26.04.2007
        matriz := matriz + ',INF_REPR    CHAR(1) '         // 26.04.2007
        matriz := matriz + ',qtdmaxpr    DECIMAL(15,2) '        // 26.04.2007
        matriz := matriz + ',vlrmaxpr    DECIMAL(15,2) '        // 26.04.2007
        matriz := matriz + ',com_sem     CHAR(1) '         // 26.04.2007
        matriz := matriz + ',insc_mun     CHAR(14) '        // 23.02.2009
        matriz := matriz + ',cnae        CHAR(14) '        // 23.02.2009
        matriz := matriz + ',tipo_cli    CHAR(1) '         // 23.02.2009
        matriz := matriz + ',balanca     CHAR(1) '         // 09.03.2009
        matriz := matriz + ',numero      CHAR(6) '         // 25.08.2009
        matriz := matriz + ',complemento  CHAR(10) '       // 25.08.2009
        matriz := matriz + ',qtd_ped_exp  DECIMAL(5,0) '       // 30.01.2010
        matriz := matriz + ',qtd_item_exp  DECIMAL(5,0) '      // 30.01.2010
        matriz := matriz + ',qtd_peso_exp  DECIMAL(12,3) '      // 30.01.2010
        matriz := matriz + ',host_email  CHAR(60) '      // 28.05.2012
        matriz := matriz + ',porta_email  CHAR(5) '    // 28.05.2012
        matriz := matriz + ',login_email  CHAR(60) '    // 28.05.2012
        matriz := matriz + ',senha_email  CHAR(10) '    // 28.05.2012
        matriz := matriz + ',MINRETPALM  DECIMAL(6,0) '    // 28.05.2012
        matriz := matriz + ',DIAATUPALM  DECIMAL(6,0) '    // 28.05.2012
        matriz := matriz + ',TPCODSEF  CHAR(1) '    // 28.05.2012
        matriz := matriz + ',tip_bole  CHAR(1) '    // 28.05.2012
        matriz := matriz + ',tp_cod_sef  CHAR(1) '    // 28.05.2012
        matriz := matriz + ',ord_ped  CHAR(1) '    // 28.05.2012
        matriz := matriz + ',from_email  CHAR(60) '      // 28.05.2012
        matriz := matriz + ',qtd_trm  CHAR(6) '      // 07/10/14        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz +',sr_recno DECIMAL(15,0)'
        matriz := matriz +',TIPO_BALANCA CHAR(15) '
        matriz := matriz +',COD_ACESS CHAR(20) '
        matriz := matriz +',QTD_BALANCA DECIMAL(1,0) '
        //DBCREATE('sacsetup  matriz,'SQLRDD')
        //sr_getconnection():exec("CREATE GENERATOR SACSETUP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSETUP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        //sr_getconnection():exec("ALTER TABLE SACSETUP ADD UNIQUE (SR_RECNO)",,.f.)
        //sr_getconnection():exec("CREATE TRIGGER SACSETUP_SR FOR INSOPERA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSETUP, 1); end",,.f.)
        //sr_getconnection():exec("COMMIT",,.f.)

        IF mop = NIL .AND. marquivo = NIL
                /*
                //
                ADIREG()
                DBCOMMITALL()
                DBUNLOCKALL()
                sr_getconnection():exec("UPDATE sacsetup SET "+;
                " pis          = "+sr_cdbvalue(0)+;
                ",confis       = "+sr_cdbvalue(0)+;
                ",imposto      = "+sr_cdbvalue(0)+;
                ",varejo       = "+sr_cdbvalue('N')+;
                ",vlr_ent      = "+sr_cdbvalue(5)+;
                ",sef          = "+sr_cdbvalue('S')+;
                ",ped_obs      = "+sr_cdbvalue('S')+;
                ",ven_cli      = "+sr_cdbvalue('N')+;
                ",pagina       = "+sr_cdbvalue('M')+;
                ",percent      = "+sr_cdbvalue('P')+;
                ",nfe_ean      = "+sr_cdbvalue('N')+;
                ",saldonf      = "+sr_cdbvalue('N')+;
                ",cli_fecha    = "+sr_cdbvalue('N')+;
                ",nomenf       = "+sr_cdbvalue('')+;
                ",uf           = "+sr_cdbvalue('PE')+;
                ",icm          = "+sr_cdbvalue(17)+;
                ",tp_comi      = "+sr_cdbvalue('R')+;
                ",cabecalho    = "+sr_cdbvalue('S')+;
                ",cab_ped      = "+sr_cdbvalue('ORCAMENTO No.:')+;
                ",cab_orc      = "+sr_cdbvalue('COTACAO...No.:')+;
                ",rodap1       = "+sr_cdbvalue('**** Agradecemos sua preferencia, Volte sempre ****')+;
                ",rodap2       = "+sr_cdbvalue('')+;
                ",rodap3       = "+sr_cdbvalue('')+;
                ",rodap4       = "+sr_cdbvalue('')+;
                ",acord1       = "+sr_cdbvalue('')+;
                ",acord2       = "+sr_cdbvalue('')+;
                ",acord3       = "+sr_cdbvalue('')+;
                ",acord4       = "+sr_cdbvalue('')+;
                ",desc_max     = "+sr_cdbvalue(5)+;
                ",item_max     = "+sr_cdbvalue(1000)+;
                ",desc_apr     = "+sr_cdbvalue('N')+;
                ",desc_ped     = "+sr_cdbvalue('S')+;
                ",usa_carro    = "+sr_cdbvalue('N')+;
                ",blo_vend     = "+sr_cdbvalue('N')+;
                ",dado_cli     = "+sr_cdbvalue('S')+;
                ",nome_fan     = "+sr_cdbvalue('S')+;
                ",uti_os       = "+sr_cdbvalue('N')+;
                ",desc_pdv     = "+sr_cdbvalue('N')+;
                ",tp_mascara   = "+sr_cdbvalue('S')+;
                ",duplicata    = "+sr_cdbvalue('S')+;
                ",przantped    = "+sr_cdbvalue('S')+;
                ",dup_imp      = "+sr_cdbvalue('V')+;
                ",recbxdup     = "+sr_cdbvalue('S')+;
                ",intervalo    = "+sr_cdbvalue(30)+;
                ",multa_dup    = "+sr_cdbvalue(0)+;
                ",juros_dup    = "+sr_cdbvalue(.23)+;
                ",roda_dup1    = "+sr_cdbvalue('')+;
                ",roda_dup2    = "+sr_cdbvalue('')+;
                ",local_bol    = "+sr_cdbvalue(m_set[1,55])+;
                ",mens_bol1    = "+sr_cdbvalue(m_set[1,56])+;
                ",mens_bol2    = "+sr_cdbvalue(m_set[1,57])+;
                ",mens_bol3    = "+sr_cdbvalue(m_set[1,58])+;
                ",mens_bol4    = "+sr_cdbvalue(m_set[1,59])+;
                ",mens_bol5    = "+sr_cdbvalue(m_set[1,60])+;
                ",fecha_cx     = "+sr_cdbvalue(m_set[1,61])+;
                ",carnes       = "+sr_cdbvalue(m_set[1,62])+;
                ",uti_tele     = "+sr_cdbvalue(m_set[1,69])+;
                ",obs_os1      = "+sr_cdbvalue(m_set[1,71])+;
                ",obs_os2      = "+sr_cdbvalue(m_set[1,72])+;
                ",obs_os3      = "+sr_cdbvalue(m_set[1,73])+;
                ",obs_os4      = "+sr_cdbvalue(m_set[1,74])+;
                ",obs_os5      = "+sr_cdbvalue(m_set[1,75])+;
                ",ped_email    = "+sr_cdbvalue(m_set[1,76])+;
                ",cx_email     = "+sr_cdbvalue(m_set[1,77])+;
                ",rec_parc     = "+sr_cdbvalue(m_set[1,78])+;
                ",tp_lucro     = "+sr_cdbvalue(m_set[1,79])+;
                ",senha_pd     = "+sr_cdbvalue(m_set[1,80])+;
                ",nome_ven     = "+sr_cdbvalue(m_set[1,81])+;
                ",receber      = "+sr_cdbvalue(m_set[1,83])+;
                ",cli_def      = "+sr_cdbvalue(m_set[1,84])+;
                ",qtdchcli     = "+sr_cdbvalue(m_set[1,85])+;
                ",caixa        = "+sr_cdbvalue(m_set[1,86])+;
                ",embalag      = "+sr_cdbvalue(m_set[1,87])+;
                ",loc_emb      = "+sr_cdbvalue(m_set[1,88])+;
                ",nfe_p_h      = "+sr_cdbvalue(m_set[1,91])+;
                ",seculo       = "+sr_cdbvalue(m_set[1,92])+;
                ",situacao     = "+sr_cdbvalue(m_set[1,93])+;
                ",desc_cax     = "+sr_cdbvalue(m_set[1,94])+;
                ",nfe_modo     = "+sr_cdbvalue(m_set[1,95])+;
                ",masc_num     = "+sr_cdbvalue(m_set[1,97])+;
                ",masc_numt    = "+sr_cdbvalue(m_set[1,98])+;
                ",masc_qtd     = "+sr_cdbvalue(m_set[1,99])+;
                ",cli_ped      = "+sr_cdbvalue(m_set[1,100])+;
                ",usa_dolar    = "+sr_cdbvalue(m_set[1,102])+;
                ",aredonda     = "+sr_cdbvalue(m_set[1,103])+;
                ",DUPL_PROD    = "+sr_cdbvalue(m_set[1,104])+;
                ",ecf          = "+sr_cdbvalue(m_set[1,105])+;
                ",dia_venc     = "+sr_cdbvalue(m_set[1,106])+;
                ",SALDO_MENO   = "+sr_cdbvalue(m_set[1,107])+;
                ",inf_ven      = "+sr_cdbvalue(m_set[1,108])+;
                ",pergimpped   = "+sr_cdbvalue(m_set[1,109])+;
                ",impslddev    = "+sr_cdbvalue(m_set[1,110])+;
                ",aut_ped      = "+sr_cdbvalue(m_set[1,111])+;
                ",altcodpr     = "+sr_cdbvalue(m_set[1,112])+;
                ",desc_com     = "+sr_cdbvalue(m_set[1,113])+;
                ",tole_com     = "+sr_cdbvalue(m_set[1,114])+;
                ",info_com     = "+sr_cdbvalue(m_set[1,115])+;
                ",d_comtele    = "+sr_cdbvalue(m_set[1,116])+;
                ",bloqnnf      = "+sr_cdbvalue(m_set[1,117])+;
                ",desc_dupr    = "+sr_cdbvalue(m_set[1,118])+;
                ",cli_cx       = "+sr_cdbvalue(m_set[1,119])+;
                ",nao_exp      = "+sr_cdbvalue(m_set[1,120])+;
                ",sim_exp      = "+sr_cdbvalue(m_set[1,121])+;
                ",prz_rec      = "+sr_cdbvalue(m_set[1,122])+;
                ",DESC_PROD    = "+sr_cdbvalue(m_set[1,125])+;
                ",simp_nac     = "+sr_cdbvalue(m_set[1,126])+;
                ",imp_cod      = "+sr_cdbvalue(m_set[1,147])+;
                ",aut_dup      = "+sr_cdbvalue(m_set[1,149])+;
                ",lib_pd_or    = "+sr_cdbvalue(m_set[1,150])+;
                ",tip_ecf      = "+sr_cdbvalue(m_set[1,151])+;
                ",INF_REPR     = "+sr_cdbvalue(m_set[1,152])+;
                ",qtdmaxpr     = "+sr_cdbvalue(m_set[1,153])+;
                ",vlrmaxpr     = "+sr_cdbvalue(m_set[1,154])+;
                ",com_sem      = "+sr_cdbvalue(m_set[1,155])+;
                ",balanca      = "+sr_cdbvalue(m_set[1,159])+;
                ",qtd_ped_exp  = "+sr_cdbvalue(m_set[1,162])+;
                ",qtd_item_exp = "+sr_cdbvalue(m_set[1,163])+;
                ",qtd_peso_exp = "+sr_cdbvalue(m_set[1,164])+;
                ",minretpalm   = "+sr_cdbvalue(m_set[1,169])+;
                ",tip_bole     = "+sr_cdbvalue(m_set[1,172])+;
                ",tp_cod_sef   = "+sr_cdbvalue(m_set[1,173])+;
                ",ord_ped      = "+sr_cdbvalue(m_set[1,174]),,.f.)
                sr_getconnection():exec('COMMIT  ,.f.)
                set->(DBCLOSEAREA())
                */
        ELSE
                RETURN matriz
        ENDIF
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACEMP  ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacemp')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACEMP  ')
        matriz:='codemp  CHAR(3) '
        matriz := matriz + ',desc_prod  CHAR(1) '
        matriz := matriz + ',apre2  CHAR(11) '
        matriz := matriz + ',apre3  CHAR(50) '
        matriz := matriz + ',insc  CHAR(14) '
        matriz := matriz + ',cnpj  CHAR(14) '
        matriz := matriz + ',razao  CHAR(60) '
        matriz := matriz + ',fantasia  CHAR(35) '
        matriz := matriz + ',nome_cab  CHAR(1) '
        matriz := matriz + ',endereco  CHAR(40) '
        matriz := matriz + ',bairro  CHAR(30) '
        matriz := matriz + ',cidade  CHAR(30) '
        matriz := matriz + ',cep  CHAR(8) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',fone  CHAR(10) '
        matriz := matriz + ',email  CHAR(50) '
        matriz := matriz + ',dataini  DATE '
        matriz := matriz + ',cam_db  CHAR(30) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        IF mop = NIL
                //DBCREATE('sacemp  matriz,'SQLRDD')
                sr_getconnection():exec("CREATE GENERATOR SACEMP",,.f.)
                sr_getconnection():exec("CREATE TABLE SACEMP ("+matriz+" )",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                sr_getconnection():exec("ALTER TABLE SACEMP ADD UNIQUE (SR_RECNO)",,.f.)
                sr_getconnection():exec("CREATE TRIGGER SACEMP_SR FOR SACEMP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACEMP, 1); end",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                RETURN matriz
        ENDIF
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACGRUPO')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacgrupo')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACGRUPO ')
        matriz:='gru_sub  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacgrupo  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACGRUPO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACGRUPO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACGRUPO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACGRUPO_SR FOR SACGRUPO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACGRUPO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        sr_getconnection():exec("INSERT INTO sacgrupo (gru_sub,merc,data_cad,sr_deleted) VALUES ('001','GRUPO DIVERSO',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO sacgrupo (gru_sub,merc,data_cad,sr_deleted) VALUES ('00101','SUB-GRUPO DIVERSOS',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

ENDIF
**********************************************************************************************
matriz:='empresa  CHAR(3) '        // 08.03.2005
matriz := matriz + ',cod_barr  CHAR(14) '
matriz := matriz + ',cod_barr1  CHAR(14) '      // 09.09.2003
matriz := matriz + ',descri1  CHAR(50) '      // 09.09.2003
matriz := matriz + ',app_imagem  CHAR(100) '      // 09.09.2003
matriz := matriz + ',ref  CHAR(13) '           // 28.06.2003
matriz := matriz + ',gru_sub  CHAR(5) '
matriz := matriz + ',cod_merc  CHAR(5) NOT NULL '
matriz := matriz + ',merc  CHAR(40) '
matriz := matriz + ',tipo_merc  CHAR(1) '
matriz := matriz + ',balanca  CHAR(1) '
matriz := matriz + ',data_atu  DATE '       //04.02.2007
matriz := matriz + ',data_cad  DATE '
matriz := matriz + ',unidade  CHAR(3) '
matriz := matriz + ',especie  CHAR(4) '
matriz := matriz + ',peso_liq  DECIMAL(8,3) '
matriz := matriz + ',peso  DECIMAL(8,3) '
matriz := matriz + ',volume  DECIMAL(8,3) '
matriz := matriz + ',metragem  DECIMAL(8,3) '
matriz := matriz + ',pacote  DECIMAL(8,3) '
matriz := matriz + ',alimento  CHAR(1) '
matriz := matriz + ',p_lucro  DECIMAL(7,2) '
matriz := matriz + ',promocao  DECIMAL(7,2) '
matriz := matriz + ',disp  CHAR(1) '
matriz := matriz + ',livre_desc  CHAR(1) '
matriz := matriz + ',comissao  DECIMAL(6,2) '
matriz := matriz + ',com_mont  DECIMAL(6,2) '
matriz := matriz + ',est_min  DECIMAL(12,3) '
matriz := matriz + ',est_max  DECIMAL(12,3) '
matriz := matriz + ',cod_fab  CHAR(4) '
matriz := matriz + ',fabrica  CHAR(40) '
matriz := matriz + ',dat_ult_s  DATE '
matriz := matriz + ',dat_ult_e  DATE '
matriz := matriz + ',saldo_ant  DECIMAL(12,3) '
matriz := matriz + ',a_pr_unit  DECIMAL(12,4) '
matriz := matriz + ',a_vlr_merc  DECIMAL(12,4) '
matriz := matriz + ',a_cust_mer  DECIMAL(12,4) '
matriz := matriz + ',a_cust_rea  DECIMAL(12,4) '
matriz := matriz + ',a_pr_venda  DECIMAL(12,4) '
matriz := matriz + ',a_pr_medio  DECIMAL(12,4) '
matriz := matriz + ',pr_nota  DECIMAL(12,4) '
matriz := matriz + ',pr_unit  DECIMAL(12,4) '
matriz := matriz + ',vlr_merc  DECIMAL(12,4) '
matriz := matriz + ',cust_merc  DECIMAL(12,4) '
matriz := matriz + ',cust_real  DECIMAL(12,4) '
matriz := matriz + ',pr_venda  DECIMAL(12,4) '
matriz := matriz + ',pr_venda1  DECIMAL(12,4) '
matriz := matriz + ',pr_medio  DECIMAL(12,4) '
matriz := matriz + ',pr_fat  DECIMAL(12,4) '        //28.05.01
matriz := matriz + ',varejo  DECIMAL(10,2) '
matriz := matriz + ',ul_alt_pr  DATE '
matriz := matriz + ',opera_pr  CHAR(3) '
matriz := matriz + ',tipo_op  CHAR(2) '
matriz := matriz + ',hora  CHAR(8) '
matriz := matriz + ',saldo_fis  DECIMAL(12,3) '
matriz := matriz + ',saldo_mer  DECIMAL(12,3) '
matriz := matriz + ',saldo_av  DECIMAL(12,3) '
matriz := matriz + ',saldo_comp  DECIMAL(12,3) '
matriz := matriz + ',saldo_est  DECIMAL(12,3) '
matriz := matriz + ',icm  DECIMAL(10,2) '
matriz := matriz + ',isento  CHAR(1) '
matriz := matriz + ',bebida  DECIMAL(6,2) '
matriz := matriz + ',icm_sub  DECIMAL(12,4) '
matriz := matriz + ',icm_sub2  DECIMAL(12,4) '
matriz := matriz + ',ipi  DECIMAL(12,4) '
matriz := matriz + ',cod_clf  CHAR(2) '
matriz := matriz + ',cod_fis  CHAR(10) '
matriz := matriz + ',sittrib  CHAR(4) '       // 29.10.2002
matriz := matriz + ',prodepe  CHAR(2) '        // 28.05.2004
matriz := matriz + ',nbm  CHAR(8) '            // 24.11.2002
matriz := matriz + ',desc_icm  CHAR(1) '       // 06/02/2000
matriz := matriz + ',desc_icm1  DECIMAL(12,4) '     // 12.02.2002
matriz := matriz + ',local  CHAR(8) '
matriz := matriz + ',gramatura  DECIMAL(9,3) '
matriz := matriz + ',prazo  DECIMAL(3,0) '          // 11/05/2001
matriz := matriz + ',fatconv  DECIMAL(8,2) '
matriz := matriz + ',doc_ent_a  CHAR(12) '
matriz := matriz + ',doc_ent  CHAR(12) '
matriz := matriz + ',envelope  CHAR(10) '
matriz := matriz + ',desc_merc  DECIMAL(6,2) '
** CAMPOS FISCAIS
matriz := matriz + ',iat  CHAR(1) '
matriz := matriz + ',ind_icms  CHAR(2) '
matriz := matriz + ',sit_trib  CHAR(1) '
**
matriz := matriz + ',dolar  CHAR(1) '
matriz := matriz + ',aplic0  CHAR(60) '
matriz := matriz + ',aplic1  CHAR(60) '
matriz := matriz + ',aplic2  CHAR(60) '
matriz := matriz + ',aplic3  CHAR(60) '
matriz := matriz + ',aplic4  CHAR(60) '
matriz := matriz + ',atualiza  DATE '      // 22.12.2004
matriz := matriz + ',ippt  CHAR(1) '
matriz := matriz + ',cod2  CHAR(5) '
matriz := matriz + ',cod3  CHAR(5) '
matriz := matriz + ',cod4  CHAR(5) '
matriz := matriz + ',data_falta  DATE '
matriz := matriz + ',cod_falta  CHAR(3) '
matriz := matriz + ',qtd_falta  DECIMAL(12,3) '
matriz := matriz + ',pocket  CHAR(1) '
matriz := matriz + ',descri  CHAR(50) '
matriz := matriz + ',pr_venda2  DECIMAL(12,4) '
matriz := matriz + ',pr_venda3  DECIMAL(12,4) '
matriz := matriz + ',pr_venda4  DECIMAL(12,4) '
matriz := matriz + ',sld_neg  CHAR(1) '
matriz := matriz + ',descont  CHAR(1) '
matriz := matriz + ',cst_pis  CHAR(2) '
matriz := matriz + ',cst_conf  CHAR(2) '
matriz := matriz + ',chv_cript  CHAR(350) '
matriz := matriz + ',cfop_fora  CHAR(5) '
matriz := matriz + ',cfop_dent  CHAR(5) '
matriz := matriz + ',pis  DECIMAL(7,2) '
matriz := matriz + ',confis  DECIMAL(7,2) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz + ',cest  CHAR(7) '
matriz := matriz + ',codigo_smart  INTEGER '
matriz := matriz + ',desc_icm_sub DECIMAL(12,4) '
matriz := matriz + ',codigo_anp CHAR(10) '
matriz := matriz + ',unidade_trib CHAR(3) '
matriz := matriz + ',adRemICMS DECIMAL(12,4) '
IF marquivo = 'sacmerc'
        RETURN matriz
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMERC ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacmerc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACMERC   ')
        //DBCREATE('sacmerc  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMERC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMERC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMERC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMERC ADD CONSTRAINT SACMERC_PK PRIMARY KEY (cod_merc)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMERC_SR FOR SACMERC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMERC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACINVE   ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacinve')
        matriz:='empresa  CHAR(3) '        // 08.03.2005
        matriz := matriz + ',cod_barr  CHAR(14) '
        matriz := matriz + ',cod_barr1  CHAR(14) '      // 09.09.2003
        matriz := matriz + ',descri1  CHAR(50) '      // 09.09.2003
        matriz := matriz + ',cod_barr3  CHAR(14) '      // 09.09.2003
        matriz := matriz + ',ref  CHAR(13) '           // 28.06.2003
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',tipo_merc  CHAR(1) '
        matriz := matriz + ',balanca  CHAR(1) '
        matriz := matriz + ',data_atu  DATE '       //04.02.2007
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',especie  CHAR(4) '
        matriz := matriz + ',peso_liq  DECIMAL(8,3) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',volume  DECIMAL(8,3) '
        matriz := matriz + ',metragem  DECIMAL(8,3) '
        matriz := matriz + ',pacote  DECIMAL(8,3) '
        matriz := matriz + ',alimento  CHAR(1) '
        matriz := matriz + ',p_lucro  DECIMAL(7,2) '
        matriz := matriz + ',promocao  DECIMAL(7,2) '
        matriz := matriz + ',disp  CHAR(1) '
        matriz := matriz + ',livre_desc  CHAR(1) '
        matriz := matriz + ',comissao  DECIMAL(6,2) '
        matriz := matriz + ',com_mont  DECIMAL(6,2) '
        matriz := matriz + ',est_min  DECIMAL(12,3) '
        matriz := matriz + ',est_max  DECIMAL(12,3) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',fabrica  CHAR(40) '
        matriz := matriz + ',dat_ult_s  DATE '
        matriz := matriz + ',dat_ult_e  DATE '
        matriz := matriz + ',saldo_ant  DECIMAL(12,3) '
        matriz := matriz + ',a_pr_unit  DECIMAL(12,4) '
        matriz := matriz + ',a_vlr_merc  DECIMAL(12,4) '
        matriz := matriz + ',a_cust_mer  DECIMAL(12,4) '
        matriz := matriz + ',a_cust_rea  DECIMAL(12,4) '
        matriz := matriz + ',a_pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',a_pr_medio  DECIMAL(12,4) '
        matriz := matriz + ',pr_nota  DECIMAL(12,4) '
        matriz := matriz + ',pr_unit  DECIMAL(12,4) '
        matriz := matriz + ',vlr_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_real  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda1  DECIMAL(12,4) '
        matriz := matriz + ',pr_medio  DECIMAL(12,4) '
        matriz := matriz + ',pr_fat  DECIMAL(12,4) '        //28.05.01
        matriz := matriz + ',varejo  DECIMAL(10,2) '
        matriz := matriz + ',ul_alt_pr  DATE '
        matriz := matriz + ',opera_pr  CHAR(3) '
        matriz := matriz + ',tipo_op  CHAR(2) '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',saldo_fis  DECIMAL(12,3) '
        matriz := matriz + ',saldo_mer  DECIMAL(12,3) '
        matriz := matriz + ',saldo_av  DECIMAL(12,3) '
        matriz := matriz + ',saldo_comp  DECIMAL(12,3) '
        matriz := matriz + ',saldo_est  DECIMAL(12,3) '
        matriz := matriz + ',icm  DECIMAL(10,2) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',bebida  DECIMAL(6,2) '
        matriz := matriz + ',icm_sub  DECIMAL(12,4) '
        matriz := matriz + ',icm_sub2  DECIMAL(12,4) '
        matriz := matriz + ',ipi  DECIMAL(12,4) '
        matriz := matriz + ',cod_clf  CHAR(2) '
        matriz := matriz + ',cod_fis  CHAR(10) '
        matriz := matriz + ',sittrib  CHAR(4) '       // 29.10.2002
        matriz := matriz + ',prodepe  CHAR(2) '        // 28.05.2004
        matriz := matriz + ',nbm  CHAR(8) '            // 24.11.2002
        matriz := matriz + ',desc_icm  CHAR(1) '       // 06/02/2000
        matriz := matriz + ',desc_icm1  DECIMAL(12,4) '     // 12.02.2002
        matriz := matriz + ',local  CHAR(8) '
        matriz := matriz + ',gramatura  DECIMAL(9,3) '
        matriz := matriz + ',prazo  DECIMAL(3,0) '          // 11/05/2001
        matriz := matriz + ',fatconv  DECIMAL(8,2) '
        matriz := matriz + ',doc_ent_a  CHAR(12) '
        matriz := matriz + ',doc_ent  CHAR(12) '
        matriz := matriz + ',envelope  CHAR(10) '
        matriz := matriz + ',desc_merc  DECIMAL(6,2) '
        matriz := matriz + ',iat  CHAR(1) '
        matriz := matriz + ',ind_icms  CHAR(2) '
        matriz := matriz + ',sit_trib  CHAR(1) '
        matriz := matriz + ',dolar  CHAR(1) '
        matriz := matriz + ',aplic0  CHAR(60) '
        matriz := matriz + ',aplic1  CHAR(60) '
        matriz := matriz + ',aplic2  CHAR(60) '
        matriz := matriz + ',aplic3  CHAR(60) '
        matriz := matriz + ',aplic4  CHAR(60) '
        matriz := matriz + ',atualiza  DATE '      // 22.12.2004
        matriz := matriz + ',ippt  CHAR(1) '
        matriz := matriz + ',cod2  CHAR(5) '
        matriz := matriz + ',cod3  CHAR(5) '
        matriz := matriz + ',cod4  CHAR(5) '
        matriz := matriz + ',data_falta  DATE '
        matriz := matriz + ',cod_falta  CHAR(3) '
        matriz := matriz + ',qtd_falta  DECIMAL(12,3) '
        matriz := matriz + ',pocket  CHAR(1) '
        matriz := matriz + ',descri  CHAR(50) '
        matriz := matriz + ',pr_venda2  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda3  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda4  DECIMAL(12,4) '
        matriz := matriz + ',sld_neg  CHAR(1) '
        matriz := matriz + ',descont  CHAR(1) '
        matriz := matriz + ',cst_pis  CHAR(2) '
        matriz := matriz + ',cst_conf  CHAR(2) '
        matriz := matriz + ',chv_cript  CHAR(350) '
        matriz := matriz + ',cfop_fora  CHAR(5) '
        matriz := matriz + ',cfop_dent  CHAR(5) '
        matriz := matriz + ',pis  DECIMAL(7,2) '
        matriz := matriz + ',confis  DECIMAL(7,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacinve  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACINVE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACINVE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACINVE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACINVE_SR FOR SACINVE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACINVE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTBMER')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sactbmer')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACTBMER ')
        matriz:='cod_barr  CHAR(14) '
        matriz := matriz + ',ref  CHAR(13) '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',cust_merc  CHAR(12) '
        matriz := matriz + ',cust_real  CHAR(12) '
        matriz := matriz + ',pr_venda  CHAR(12) '
        matriz := matriz + ',pr_venda1  CHAR(12) '
        matriz := matriz + ',pr_fat  CHAR(12) '
        matriz := matriz + ',varejo  CHAR(10) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',bebida  CHAR(6) '
        matriz := matriz + ',ipi  CHAR(12) '
        matriz := matriz + ',ind_icms  CHAR(2) '
        matriz := matriz + ',sit_trib  CHAR(1) '
        matriz := matriz + ',cod_fis  CHAR(10) '
        matriz := matriz + ',sittrib  CHAR(4) '
        matriz := matriz + ',nbm  CHAR(8) '
        matriz := matriz + ',aplic0  CHAR(60) '
        matriz := matriz + ',aplic1  CHAR(60) '
        matriz := matriz + ',aplic2  CHAR(60) '
        matriz := matriz + ',aplic3  CHAR(60) '
        matriz := matriz + ',aplic4  CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactbmer  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTBMER",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTBMER ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTBMER ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTBMER_SR FOR SACTBMER ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTBMER, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACFORN ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacforn')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACFORN   ')
        matriz:='cod_forn  CHAR(4) NOT NULL '
        matriz := matriz + ',razao  CHAR(40) '
        matriz := matriz + ',tipo  CHAR(4) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',ult_comp  DATE '
        matriz := matriz + ',endereco  CHAR(35) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',cidade  CHAR(25) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz + ',cpostal  CHAR(6) '
        matriz := matriz + ',email  CHAR(120) '
        matriz := matriz + ',tel1  CHAR(14) '
        matriz := matriz + ',tel2  CHAR(14) '
        matriz := matriz + ',fax  CHAR(14) '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',insc  CHAR(14) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',carteira  CHAR(1) '
        matriz := matriz + ',banco  CHAR(1) '
        matriz := matriz + ',prazo_pag  CHAR(8) '
        matriz := matriz + ',ct_gerente  CHAR(15) '
        matriz := matriz + ',ct_vendedo  CHAR(15) '
        matriz := matriz + ',ct_fatura  CHAR(15) '
        matriz := matriz + ',ct_cobran  CHAR(15) '
        matriz := matriz + ',limite  DECIMAL(10,2) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',obs1  CHAR(60) '
        matriz := matriz + ',obs2  CHAR(60) '
        matriz := matriz + ',obs3  CHAR(60) '
        matriz := matriz + ',obs4  CHAR(60) '
        matriz := matriz + ',obs5  CHAR(60) '
        matriz := matriz + ',local  CHAR(3) '
        matriz := matriz + ',pocket  CHAR(1) '
        matriz := matriz + ',fantasia  CHAR(40) '
        matriz := matriz + ',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz + ',sr_deleted CHAR(1)'
        matriz := matriz + ',forn_desp CHAR(1) '
        //DBCREATE('sacforn  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACFORN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACFORN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACFORN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACFORN ADD CONSTRAINT SACFORN_PK PRIMARY KEY (cod_forn)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACFORN_SR FOR SACFORN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACFORN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCLI  ')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',cod_cli  INTEGER NOT NULL'
        matriz := matriz + ',razao  CHAR(40) '
        matriz := matriz + ',nome  CHAR(40) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',data_atu  DATE '       //04.02.2007
        matriz := matriz + ',cadastro  CHAR(1) '       //06.11.01
        matriz := matriz + ',tipo  CHAR(1) '
        matriz := matriz + ',nascimento  DATE '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',ult_comp  DATE '
        matriz := matriz + ',vlr_comp  DECIMAL(10,2) '
        matriz := matriz + ',ant_ped  CHAR(6) '
        matriz := matriz + ',dat_ant  DATE '
        matriz := matriz + ',vlr_ant  DECIMAL(10,2) '
        matriz := matriz + ',numped_m  CHAR(6) '
        matriz := matriz + ',ultcomp_m  DATE '
        matriz := matriz + ',vlrcomp_m  DECIMAL(10,2) '
        matriz := matriz + ',tot_comp  DECIMAL(10,2) '
        matriz := matriz + ',ult_orc  DATE '        //16.01.2003
        matriz := matriz + ',endereco  CHAR(35) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',codcid  CHAR(4) '
        matriz := matriz + ',cidade  CHAR(25) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz + ',email  CHAR(150) '
        matriz := matriz + ',rota  CHAR(70) '
        matriz := matriz + ',tel1  CHAR(14) '
        matriz := matriz + ',tel2  CHAR(14) '
        matriz := matriz + ',fax  CHAR(14) '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',insc  CHAR(19) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',rg  CHAR(14) '
        matriz := matriz + ',orgao  CHAR(10) '
        matriz := matriz + ',dat_emi  DATE '
        matriz := matriz + ',comprado  CHAR(15) '
        matriz := matriz + ',contato  CHAR(15) '
        matriz := matriz + ',prazo_pag  CHAR(9) '
        matriz := matriz + ',bloqueio  CHAR(1) '       //06.11.01
        matriz := matriz + ',spc  CHAR(1) '
        matriz := matriz + ',area  CHAR(15) '
        matriz := matriz + ',limite  DECIMAL(10,2) '
        matriz := matriz + ',atac_vare  CHAR(1) '      // 06.01.2004
        matriz := matriz + ',dia_atras  DECIMAL(10,2) '
        matriz := matriz + ',qtd_doc  DECIMAL(10,2) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',nome1  CHAR(40) '
        matriz := matriz + ',data_nas1  DATE '
        matriz := matriz + ',nome2  CHAR(40) '
        matriz := matriz + ',data_nas2  DATE '
        matriz := matriz + ',nome3  CHAR(40) '
        matriz := matriz + ',data_nas3  DATE '
        matriz := matriz + ',nome4  CHAR(40) '
        matriz := matriz + ',data_nas4  DATE '
        matriz := matriz + ',nome5  CHAR(40) '
        matriz := matriz + ',data_nas5  DATE '
        matriz := matriz + ',desconto  DECIMAL(7,2) '
        matriz := matriz + ',dia1_ini  CHAR(2) '
        matriz := matriz + ',dia1_fim  CHAR(2) '
        matriz := matriz + ',venc1_dup  CHAR(2) '
        matriz := matriz + ',dia2_ini  CHAR(2) '
        matriz := matriz + ',dia2_fim  CHAR(2) '
        matriz := matriz + ',venc2_dup  CHAR(2) '

        matriz := matriz + ',empre_c  CHAR(20) '
        matriz := matriz + ',cargo_c  CHAR(15) '
        matriz := matriz + ',salario_c  DECIMAL(10,2) '
        matriz := matriz + ',end_c  CHAR(35) '
        matriz := matriz + ',bairro_c  CHAR(20) '
        matriz := matriz + ',cidade_c  CHAR(25) '
        matriz := matriz + ',uf_c  CHAR(2) '
        matriz := matriz + ',cep_c  CHAR(9) '
        matriz := matriz + ',fone_c1  CHAR(14) '
        matriz := matriz + ',fone_c2  CHAR(14) '
        matriz := matriz + ',loja1  CHAR(25) '
        matriz := matriz + ',tel_loja1  CHAR(14) '
        matriz := matriz + ',desde1  DATE '
        matriz := matriz + ',loja2  CHAR(25) '
        matriz := matriz + ',tel_loja2  CHAR(14) '
        matriz := matriz + ',desde2  DATE '
        matriz := matriz + ',nome_r1  CHAR(25) '
        matriz := matriz + ',fone_r1  CHAR(14) '
        matriz := matriz + ',nome_r2  CHAR(25) '
        matriz := matriz + ',fone_r2  CHAR(14) '
        matriz := matriz + ',banco1  CHAR(10) '
        matriz := matriz + ',ag1  CHAR(10) '
        matriz := matriz + ',conta1  CHAR(10) '
        matriz := matriz + ',banco2  CHAR(10) '
        matriz := matriz + ',ag2  CHAR(10) '
        matriz := matriz + ',conta2  CHAR(10) '
        matriz := matriz + ',cartao1  CHAR(15) '
        matriz := matriz + ',no1  CHAR(17) '
        matriz := matriz + ',venc1  DATE '
        matriz := matriz + ',cartao2  CHAR(15) '
        matriz := matriz + ',no2  CHAR(17) '
        matriz := matriz + ',venc2  DATE '
        matriz := matriz + ',pai  CHAR(40) '
        matriz := matriz + ',mae  CHAR(40) '
        matriz := matriz + ',end_cob  CHAR(35) '
        matriz := matriz + ',bairro_cob  CHAR(20) '
        matriz := matriz + ',cidade_cob  CHAR(25) '
        matriz := matriz + ',uf_cob  CHAR(2) '
        matriz := matriz + ',cep_cob  CHAR(9) '
        matriz := matriz + ',fone_cob  CHAR(14) '
        matriz := matriz + ',codvend  CHAR(3) '
        matriz := matriz + ',codoper  CHAR(3) '
        matriz := matriz + ',codforn  CHAR(4) '
        matriz := matriz + ',regiao  CHAR(2) '         // ADM
        matriz := matriz + ',atividade  CHAR(2) '      // ADM
        matriz := matriz + ',qtdvis  DECIMAL(4,0) '      // ADM
        matriz := matriz + ',uvisita  DATE '      // ADM
        matriz := matriz + ',l_obs1  CHAR(77) '
        matriz := matriz + ',l_obs2  CHAR(77) '
        matriz := matriz + ',l_obs3  CHAR(77) '
        matriz := matriz + ',naturalidade  CHAR(25) '
        matriz := matriz + ',l_obs5  CHAR(77) '
        matriz := matriz + ',l_obs6  CHAR(77) '
        matriz := matriz + ',l_obs7  CHAR(77) '
        matriz := matriz + ',l_obs8  CHAR(77) '
        matriz := matriz + ',l_obs9  CHAR(77) '
        matriz := matriz + ',l_obs10  CHAR(77) '
        matriz := matriz + ',l_obs11  CHAR(77) '
        matriz := matriz + ',l_obs12  CHAR(77) '
        matriz := matriz + ',l_obs13  CHAR(77) '
        matriz := matriz + ',l_obs14  CHAR(77) '
        matriz := matriz + ',l_obs15  CHAR(77) '
        matriz := matriz + ',l_obs16  CHAR(77) '
        matriz := matriz + ',l_obs17  CHAR(77) '
        matriz := matriz + ',l_obs18  CHAR(77) '
        matriz := matriz + ',l_obs19  CHAR(77) '
        matriz := matriz + ',l_obs20  CHAR(77) '
        matriz := matriz + ',cod_cond  CHAR(3) '
        matriz := matriz + ',pocket  CHAR(1) '
        matriz := matriz + ',cod_profi  CHAR(5) '
        matriz := matriz + ',numero  CHAR(6) '
        matriz := matriz + ',complemento  CHAR(10) '
        matriz := matriz + ',data_bloq  DATE '
        matriz := matriz + ',obs_bloq  CHAR(60) '
        matriz := matriz + ',rota1  CHAR(70) '
        matriz := matriz + ',email1  CHAR(70) '
        matriz := matriz + ',email2  CHAR(70) '
        matriz := matriz + ',email3  CHAR(70) '
        matriz := matriz + ',lim_ant  DECIMAL(10,2) '
        matriz := matriz + ',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz + ',sr_deleted CHAR(1)'
        matriz := matriz + ',INDKEY_001 CHAR(180)'
        matriz := matriz + ',promotor CHAR(3)'
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('saccli')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCLI    ')
        //DBCREATE('saccli  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLI ("+matriz+" )",,.f.)
        //atencao('0')
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLI ADD UNIQUE (SR_RECNO)",,.f.)
        //sr_getconnection():exec("ALTER TABLE SACCLI ADD CONSTRAINT SACCLI_PK PRIMARY KEY (cod_cli)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLI_SR FOR SACCLI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
/*
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCLIMV')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacclimv')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCLIMV  ')
        matriz:='cod_cli  INTEGER '
        matriz := matriz + ',razao  CHAR(40) '
        matriz := matriz + ',nome  CHAR(40) '
        matriz := matriz + ',tipo  CHAR(1) '
        matriz := matriz + ',quantd  DECIMAL(12,2) '
        matriz := matriz + ',vlr_cust  DECIMAL(14,2) '
        matriz := matriz + ',vlr_venda  DECIMAL(14,2) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacclimv  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLIMV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLIMV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLIMV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLIMV_SR FOR SACCLIMV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLIMV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPED_E')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacped_e')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPED_E  ')
        matriz:='recebi  CHAR(1) '
        matriz := matriz + ',ped_forn  CHAR(6) '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',dat_ped  DATE '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',quantd  DECIMAL(12,3) '
        matriz := matriz + ',saldo  DECIMAL(12,2) '
        matriz := matriz + ',devolvido  DECIMAL(9,2) '
        matriz := matriz + ',vlr_fat  DECIMAL(12,4) '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',fornece  CHAR(40) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',fabrica  CHAR(40) '
        matriz := matriz + ',comprador  CHAR(15) '
        matriz := matriz + ',fob  CHAR(1) '
        matriz := matriz + ',cif  CHAR(1) '
        matriz := matriz + ',tp_desc  CHAR(1) '
        matriz := matriz + ',desc1  DECIMAL(14,6) '
        matriz := matriz + ',desc2  DECIMAL(14,6) '
        matriz := matriz + ',desc3  DECIMAL(14,6) '
        matriz := matriz + ',dia1  CHAR(3) '
        matriz := matriz + ',dia2  CHAR(3) '
        matriz := matriz + ',dia3  CHAR(3) '
        matriz := matriz + ',dia4  CHAR(3) '
        matriz := matriz + ',dia5  CHAR(3) '
        matriz := matriz + ',frete  DECIMAL(10,2) '
        matriz := matriz + ',transp  CHAR(15) '
        matriz := matriz + ',encargo_f  DECIMAL(12,4) '
        matriz := matriz + ',disp_asse  DECIMAL(12,4) '
        matriz := matriz + ',tp_ipi  CHAR(1) '
        matriz := matriz + ',ipi  DECIMAL(14,6) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',tel_transp  CHAR(14) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',ref  CHAR(13) '
        matriz := matriz + ',data_chega  DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',obs2  CHAR(60) '
        matriz := matriz + ',obs3  CHAR(60) '
        matriz := matriz + ',obs4  CHAR(60) '
        matriz := matriz + ',obs5  CHAR(60) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',cond_pag  CHAR(8) '
        matriz := matriz + ',forma_pag  CHAR(15) '
        //DBCREATE('sacped_e  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPED_E",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPED_E ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPED_E ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPED_E_SR FOR SACPED_E ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPED_E, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
matriz:='pempresa  CHAR(3) '
matriz := matriz + ',pnum_ped  CHAR(10) '
matriz := matriz + ',ptermina  CHAR(10) '
matriz := matriz + ',pdat_ped  DATE '
matriz := matriz + ',pgru_sub  CHAR(5) '
matriz := matriz + ',pcod_merc  CHAR(5) '
matriz := matriz + ',pmerc  CHAR(40) '
matriz := matriz + ',punidade  CHAR(3) '
matriz := matriz + ',pespecie  CHAR(4) '
matriz := matriz + ',penvelope  CHAR(10) '     //placa do carro
matriz := matriz + ',ppeso  DECIMAL(8,3) '
matriz := matriz + ',ppeso_liq  DECIMAL(8,3) '
matriz := matriz + ',pgramatura  DECIMAL(9,3) '     //VOLUME
matriz := matriz + ',pquantd  DECIMAL(12,3) '
matriz := matriz + ',ppacote  DECIMAL(12,3) '
matriz := matriz + ',ppecas  DECIMAL(12,3) '
matriz := matriz + ',ppre_dig  DECIMAL(12,4) '
matriz := matriz + ',pvlr_fat  DECIMAL(12,4) '
matriz := matriz + ',ppr_venda1  DECIMAL(12,4) '
matriz := matriz + ',ppre_venda  DECIMAL(12,4) '
matriz := matriz + ',pcust_real  DECIMAL(12,4) '
matriz := matriz + ',pcust_merc  DECIMAL(12,4) '
matriz := matriz + ',pcod_cli  INTEGER '
matriz := matriz + ',pcgc  CHAR(14) '
matriz := matriz + ',pcpf  CHAR(11) '
matriz := matriz + ',pplaca  CHAR(8) '
matriz := matriz + ',pcarro  CHAR(20) '
matriz := matriz + ',pmodelo  CHAR(20) '       // 30.07.2002
matriz := matriz + ',pkm  CHAR(10) '           // 30.07.2002
matriz := matriz + ',pcod_fab  CHAR(4) '
matriz := matriz + ',pfabrica  CHAR(40) '
matriz := matriz + ',pcod_vend  CHAR(3) '
matriz := matriz + ',pvendedor  CHAR(30) '
matriz := matriz + ',pcod_oper  CHAR(3) '
matriz := matriz + ',pcomi_oper  DECIMAL(6,2) '
matriz := matriz + ',pmontador  CHAR(3) '
matriz := matriz + ',pcom_mont  DECIMAL(6,2) '
matriz := matriz + ',pmontador1  CHAR(3) '
matriz := matriz + ',pdesc  DECIMAL(7,2) '          //09.08.2002
matriz := matriz + ',pvlr_pres  DECIMAL(12,2) '     //30.07.2001
matriz := matriz + ',pcod_fin  CHAR(3) '       //30.07.2001
matriz := matriz + ',pcod_tab  CHAR(3) '       //25.07.2007
matriz := matriz + ',pcond_veze  CHAR(3) '
matriz := matriz + ',pcond_inte  CHAR(74) '
matriz := matriz + ',ptp_vend  CHAR(2) '
matriz := matriz + ',pvlr_ent  DECIMAL(12,2) '      //29.07.2005
matriz := matriz + ',phora  CHAR(8) '
matriz := matriz + ',palimento  CHAR(1) '
matriz := matriz + ',ppag  CHAR(1) '
matriz := matriz + ',pdatapag  DATE '
matriz := matriz + ',pisento  CHAR(1) '
matriz := matriz + ',ppromocao  DECIMAL(7,2) '
matriz := matriz + ',pcomissao  DECIMAL(6,2) '
matriz := matriz + ',pcomi_mot  DECIMAL(6,2) '
matriz := matriz + ',pprazo  DECIMAL(3,0) '
matriz := matriz + ',pbebida  DECIMAL(6,2) '
matriz := matriz + ',pipi  DECIMAL(6,2) '
matriz := matriz + ',pobs_prod  CHAR(40) '
matriz := matriz + ',phora_pg  CHAR(8) '
matriz := matriz + ',pautoriz  CHAR(3) '
matriz := matriz + ',palt_ope  CHAR(3) '
matriz := matriz + ',pentreg  CHAR(1) '
matriz := matriz + ',pent_por  CHAR(3) '
matriz := matriz + ',pent_dat  DATE '
matriz := matriz + ',plib_por  CHAR(3) '
matriz := matriz + ',plib_dat  DATE '

matriz := matriz + ',pexpedi  CHAR(1) '
matriz := matriz + ',pexp_por  CHAR(3) '
matriz := matriz + ',pexp_dat  DATE '
matriz := matriz + ',pexp_tran  CHAR(4) '      //04.02.2007
matriz := matriz + ',pexp_mot  CHAR(10) '      //04.02.2007

matriz := matriz + ',pdat_ped2a  DATE '     //28.02.2002
matriz := matriz + ',phora2a  CHAR(8) '        //28.02.2002
matriz := matriz + ',pqtd2a  DECIMAL(2,0) '         //28.02.2002
matriz := matriz + ',poper2a  CHAR(8) '        //28.02.2002

matriz := matriz + ',pdesc_merc  DECIMAL(6,2) '
matriz := matriz + ',pstat_item  CHAR(1) '
matriz := matriz + ',pind_icms  CHAR(2) '
matriz := matriz + ',psit_trib  CHAR(1) '

matriz := matriz + ',chassis  CHAR(20) '
matriz := matriz + ',descri1  CHAR(60) '
matriz := matriz + ',descri2  CHAR(60) '
matriz := matriz + ',descri3  CHAR(60) '
matriz := matriz + ',descri4  CHAR(60) '
matriz := matriz + ',descri5  CHAR(60) '
matriz := matriz + ',pobs1  CHAR(40) '
matriz := matriz + ',pobs2  CHAR(40) '
matriz := matriz + ',pobs3  CHAR(40) '
matriz := matriz + ',pobs4  CHAR(40) '
matriz := matriz + ',pcod_tran  CHAR(4) '      //04.02.2002
matriz := matriz + ',pmotivo  CHAR(40) '
matriz := matriz + ',plocal  CHAR(4) '
matriz := matriz + ',pproducao  CHAR(6) '       //27.04.2000
matriz := matriz + ',pos  CHAR(8) '             //09.08.2002
matriz := matriz + ',pnum_pdv  CHAR(4) '
matriz := matriz + ',pnum_cup  CHAR(6) '
matriz := matriz + ',pboleto  CHAR(2) '
matriz := matriz + ',pvenc_fre  DATE '
matriz := matriz + ',cod_pres  CHAR(5) '
matriz := matriz + ',pfecha  CHAR(1) '
matriz := matriz + ',pd_entrega  DATE '
matriz := matriz + ',data_so  DATE '
matriz := matriz + ',pnum_nf  CHAR(10) '
matriz := matriz + ',comprador  CHAR(30) '
matriz := matriz + ',convidado  CHAR(30) '
matriz := matriz + ',tipo_ped  DECIMAL(1,0) '
matriz := matriz + ',qtd_orig  DECIMAL(12,3) '
matriz := matriz + ',numped_orig  CHAR(6) '
matriz := matriz + ',qtd_via  CHAR(2) '
matriz := matriz + ',obs_visita  CHAR(200) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz + ',pobs5  CHAR(40) '
matriz := matriz + ',pobs6  CHAR(40) '
matriz := matriz + ',pobs7  CHAR(40) '
matriz := matriz + ',pobs8  CHAR(40) '
matriz := matriz + ',tipo_venda  CHAR(1) '
matriz := matriz + ',promotor  CHAR(3) '
matriz := matriz + ',data_app DATE '

IF marquivo = 'sacped_s'
        RETURN matriz
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPED_S')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacped_s')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPED_S  ')
        //DBCREATE('sacped_s  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPED_S",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPED_S ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPED_S ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPED_S_SR FOR SACPED_S ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPED_S, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACORCAM')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacorcam')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACORCAM  ')
        IF mop = NIL
                sr_getconnection():exec("CREATE GENERATOR SACORCAM",,.f.)
                sr_getconnection():exec("CREATE TABLE SACORCAM ("+matriz+" )",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                sr_getconnection():exec("ALTER TABLE SACORCAM ADD UNIQUE (SR_RECNO)",,.f.)
                sr_getconnection():exec("CREATE TRIGGER SACORCAM_SR FOR SACORCAM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACORCAM, 1); end",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                RETURN matriz
        ENDIF
ENDIF
/*
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPV')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacpv')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPV  ')
        //DBCREATE('sacpv  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPV_SR FOR SACPV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDAV')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacdav')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDAV  ')
        //DBCREATE('sacdav  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDAV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDAV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDAV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDAV_SR FOR SACDAV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDAV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
**********************************************************************************************
matriz:='empresa  CHAR(3) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',vlr_ped  DECIMAL(12,2) '
matriz := matriz + ',termina  CHAR(10) '
matriz := matriz + ',dat_ped  DATE '
matriz := matriz + ',cod_cli  INTEGER '
matriz := matriz + ',cgc  CHAR(14) '
matriz := matriz + ',cpf  CHAR(11) '
matriz := matriz + ',placa  CHAR(8) '
matriz := matriz + ',carro  CHAR(20) '
matriz := matriz + ',modelo  CHAR(20) '       // 30.07.2002
matriz := matriz + ',km  CHAR(10) '           // 30.07.2002
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',vendedor  CHAR(30) '
matriz := matriz + ',cod_oper  CHAR(3) '
matriz := matriz + ',comi_oper  DECIMAL(6,2) '
matriz := matriz + ',hora  CHAR(8) '
matriz := matriz + ',pag  CHAR(1) '
matriz := matriz + ',datapag  DATE '
matriz := matriz + ',lib_por  CHAR(3) '
matriz := matriz + ',lib_dat  DATE '
matriz := matriz + ',lib_vlr  DECIMAL(12,2) '
matriz := matriz + ',expedi  CHAR(1) '
matriz := matriz + ',exp_por  CHAR(3) '
matriz := matriz + ',exp_dat  DATE '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPED_C')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacped_c')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPED_C  ')
        //DBCREATE('sacped_c  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPED_C",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPED_C ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPED_C ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPED_C_SR FOR SACPED_C ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPED_C, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACORC_C')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacorc_c')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACORC_C  ')
        //DBCREATE('sacorc_c  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACORC_C",,.f.)
        sr_getconnection():exec("CREATE TABLE SACORC_C ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACORC_C ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACORC_C_SR FOR SACORC_C ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACORC_C, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOTA ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacnota')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOTA   ')
        matriz:='data_nt  DATE '
        matriz := matriz + ',numero  CHAR(6) NOT NULL '
        matriz := matriz + ',serie  CHAR(3) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacnota  matriz,'SQLRDD')
        //SR_GETCONNECTION():EXEC("INSERT INTO sacnota (sr_deleted,sr_recno) VALUES ('   1)",,.f.)
        sr_getconnection():exec("CREATE GENERATOR SACNOTA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOTA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTA ADD CONSTRAINT SACNOTA_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOTA_SR FOR SACNOTA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOTA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNONFC ')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('SACNONFC')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNONFC   ')
        matriz:='data_ped  DATE '
        matriz := matriz + ',numero  CHAR(6) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz +',num_cx CHAR(3)'
        sr_getconnection():exec("CREATE GENERATOR SACNONFC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNONFC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNONFC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNONFC ADD CONSTRAINT SACNONFC_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNONFC_SR FOR SACNONFC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNONFC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOTAE')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnotae')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOTAE  ')
        matriz:='data_nte  DATE '
        matriz := matriz + ',numeroe  CHAR(6) NOT NULL'
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacnotae  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOTAE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOTAE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTAE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTAE ADD CONSTRAINT SACNOTAE_PK PRIMARY KEY (numeroe)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOTAE_SR FOR SACNOTAE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOTAE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnotae (numeroe,sr_deleted,sr_recno)   VALUES ('000000',' ', 1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
/*
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOTAB')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnotab')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOTAB  ')
        matriz:='data_ntb  DATE '
        matriz := matriz + ',numerob  CHAR(6) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacnotab  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOTAB",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOTAB ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTAB ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTAB ADD CONSTRAINT SACNOTAB_PK PRIMARY KEY (numerob)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOTAB_SR FOR SACNOTAB ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOTAB, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnotab (numerob,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
**********************************************************************************************
matriz:='data_ped  DATE '
matriz := matriz + ',numero  CHAR(6) NOT NULL '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz +',num_cx CHAR(3)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOPED')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnoped')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOPED  ')
        //DBCREATE('sacnoped  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOPED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOPED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPED ADD CONSTRAINT SACNOPED_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOPED_SR FOR SACNOPED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOPED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnoped (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
matriz:='data_ped  DATE '
matriz := matriz + ',numero  CHAR(6) NOT NULL '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOPDCOM')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACNOPDCOM')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOPDCOM  ')
        //DBCREATE('sacnoped  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOPDCOM",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOPDCOM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPDCOM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPDCOM ADD CONSTRAINT SACNOPDCOM_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOPDCOM_SR FOR SACNOPDCOM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOPDCOM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO SACNOPDCOM (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNODEV')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnodev')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNODEV  ')
        //DBCREATE('sacnodev  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNODEV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNODEV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNODEV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNODEV ADD CONSTRAINT SACNODEV_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNODEV_SR FOR SACNODEV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNODEV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnodev (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOORC')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacnoorc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOORC  ')
        sr_getconnection():exec("CREATE GENERATOR SACNOORC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOORC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOORC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOORC ADD CONSTRAINT SACNOORC_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOORC_SR FOR SACNOORC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOORC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnoorc (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOROM')
IF mdbf = NIL .AND.  ! SR_EXISTTABLE('sacnorom')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOROM  ')
        //DBCREATE('sacnorom  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOROM",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOROM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOROM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOROM ADD CONSTRAINT SACNOROM_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOROM_SR FOR SACNOROM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOROM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnorom (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
/*
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOPRO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnopro')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOPRO  ')
        //DBCREATE('sacnopro  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOPRO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOPRO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPRO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPRO ADD CONSTRAINT SACNOPRO_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOPRO_SR FOR SACNOPRO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOPRO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnopro (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOPV')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnopv')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOPV  ')
        //DBCREATE('sacnopv  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOPV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOPV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOPV ADD CONSTRAINT SACNOPV_PK PRIMARY KEY (numero)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOPV_SR FOR SACNOPV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOPV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnopv (numero,sr_deleted,sr_recno)   VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/

DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNONFC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnonfc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNONFC  ')
        //DBCREATE('sacnopv  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNONFC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNONFC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNONFC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNONFC_SR FOR SACNONFC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNONFC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnonfc (numero,sr_deleted,sr_recno) VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOCTE')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnocte')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOCTE  ')
        sr_getconnection():exec("CREATE GENERATOR SACNOCTE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOCTE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOCTE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOCTE_SR FOR SACNOCTE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOCTE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnocte (numero,sr_deleted,sr_recno) VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOCCE')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnocce')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNOCCE  ')
        sr_getconnection():exec("CREATE GENERATOR SACNOCCE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOCCE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOCCE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOCCE_SR FOR SACNOCCE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOCCE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        SR_GETCONNECTION():EXEC("INSERT INTO sacnocce (numero,sr_deleted,sr_recno) VALUES ('000000',' ',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOV  ')
matriz:='empresa  CHAR(3) '
matriz := matriz + ',documento  CHAR(12) '
matriz := matriz + ',conjunta  CHAR(10) '
matriz := matriz + ',serie  CHAR(4) '
matriz := matriz + ',modelo  CHAR(2) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',ped_forn  CHAR(6) '
matriz := matriz + ',data_ped  DATE '
matriz := matriz + ',gru_sub  CHAR(5) '
matriz := matriz + ',codigo  CHAR(5) '
matriz := matriz + ',produto  CHAR(40) '
matriz := matriz + ',especie  CHAR(4) '
matriz := matriz + ',cod_fab  CHAR(4) '
matriz := matriz + ',fabrica  CHAR(40) '
matriz := matriz + ',unidade  CHAR(3) '
matriz := matriz + ',data_s_e  DATE '
matriz := matriz + ',ent_sai  CHAR(1) '
matriz := matriz + ',saldo_ant  DECIMAL(12,3) '
matriz := matriz + ',quantd  DECIMAL(12,3) '
matriz := matriz + ',quantd_aux  DECIMAL(12,3) '
matriz := matriz + ',pr_venda1  DECIMAL(12,4) '
matriz := matriz + ',pr_venda  DECIMAL(12,4) '
matriz := matriz + ',vl_vend  DECIMAL(12,4) '
matriz := matriz + ',vl_fatura  DECIMAL(12,4) '
matriz := matriz + ',pr_unit  DECIMAL(12,4) '
matriz := matriz + ',cust_mer  DECIMAL(12,4) '
matriz := matriz + ',vl_merc  DECIMAL(12,4) '
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',comissao  DECIMAL(6,2) '
matriz := matriz + ',cod_oper  CHAR(3) '
matriz := matriz + ',com_oper  DECIMAL(6,2) '
matriz := matriz + ',montador  CHAR(3) '
matriz := matriz + ',com_monta  DECIMAL(6,2) '
matriz := matriz + ',montador1  CHAR(3) '
matriz := matriz + ',com_monta1  DECIMAL(6,2) '
matriz := matriz + ',cod_cli  INTEGER '
matriz := matriz + ',cliente  CHAR(40) '
matriz := matriz + ',cid_cli  CHAR(25) '
matriz := matriz + ',uf_cli  CHAR(2) '
matriz := matriz + ',cod_forn  CHAR(4) '
matriz := matriz + ',fornece  CHAR(40) '
matriz := matriz + ',icm_aliq  DECIMAL(8,2) '
matriz := matriz + ',icm  DECIMAL(12,4) '
matriz := matriz + ',icm_f  DECIMAL(12,5) '
matriz := matriz + ',icm_sub  DECIMAL(12,5) '
matriz := matriz + ',fob  CHAR(1) '
matriz := matriz + ',cif  CHAR(1) '
matriz := matriz + ',dia1  CHAR(2) '
matriz := matriz + ',dia2  CHAR(2) '
matriz := matriz + ',dia3  CHAR(2) '
matriz := matriz + ',embarque  DATE '
matriz := matriz + ',emissao  DATE '
matriz := matriz + ',saida  DATE '
matriz := matriz + ',chegada  DATE '
matriz := matriz + ',frete  DECIMAL(12,4) '
matriz := matriz + ',encargo_f  DECIMAL(12,4) '
matriz := matriz + ',disp_asse  DECIMAL(12,4) '
matriz := matriz + ',desc1  DECIMAL(12,4) '
matriz := matriz + ',desc2  DECIMAL(12,4) '
matriz := matriz + ',desc3  DECIMAL(12,4) '
matriz := matriz + ',ipi_aliq  DECIMAL(8,2) '
matriz := matriz + ',ipi  DECIMAL(12,4) '
matriz := matriz + ',peso  DECIMAL(8,3) '
matriz := matriz + ',peso_liq  DECIMAL(8,3) '
matriz := matriz + ',alimento  CHAR(1) '
matriz := matriz + ',bebida  DECIMAL(6,2) '
matriz := matriz + ',tipo  CHAR(2) '
matriz := matriz + ',isento  CHAR(1) '
matriz := matriz + ',sittrib  CHAR(4) '
matriz := matriz + ',tp_venda  CHAR(2) '
matriz := matriz + ',cond_vezes  CHAR(3) '
matriz := matriz + ',cond_intev  CHAR(2) '
matriz := matriz + ',cod_nat  CHAR(5) '
matriz := matriz + ',chassis  CHAR(20) '
matriz := matriz + ',descri1  CHAR(60) '
matriz := matriz + ',descri2  CHAR(60) '
matriz := matriz + ',descri3  CHAR(60) '
matriz := matriz + ',descri4  CHAR(60) '
matriz := matriz + ',descri5  CHAR(60) '
matriz := matriz + ',cancel  CHAR(1) '
matriz := matriz + ',obs1  CHAR(60) '
matriz := matriz + ',obs2  CHAR(60) '
matriz := matriz + ',obs3  CHAR(60) '
matriz := matriz + ',obs4  CHAR(60) '
matriz := matriz + ',obs5  CHAR(60) '
matriz := matriz + ',obs6  CHAR(60) '
matriz := matriz + ',cod_nota  CHAR(1) '
matriz := matriz + ',producao  CHAR(6) '       //27.04.2000
matriz := matriz + ',vlr_icm  DECIMAL(15,2) '
matriz := matriz + ',base_icm  DECIMAL(15,2) '
matriz := matriz + ',devolucao  CHAR(1) '
matriz := matriz + ',cod_presente  CHAR(5) '
matriz := matriz + ',norm_ele  CHAR(1) '
matriz := matriz + ',convidado  CHAR(30) '
matriz := matriz + ',hora_mov  CHAR(8) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz + ',promotor  CHAR(3) '
IF marquivo = 'sacmov'
        RETURN matriz
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmov')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACMOV    ')
        sr_getconnection():exec("CREATE GENERATOR SACMOV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOV_SR FOR SACMOV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
matriz:='empresa  CHAR(3) '
matriz := matriz + ',tip_sef  CHAR(2) '
matriz := matriz + ',tipo_nota  CHAR(1) '
matriz := matriz + ',cod_nota  CHAR(1) '
matriz := matriz + ',documento  CHAR(12) '
matriz := matriz + ',serie  CHAR(4) '
matriz := matriz + ',modelo  CHAR(2) '
matriz := matriz + ',auxiliar  CHAR(10) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',emissao  DATE '
matriz := matriz + ',ent_sai  CHAR(1) '
matriz := matriz + ',cod_cli INTEGER '
matriz := matriz + ',cliente  CHAR(40) '
matriz := matriz + ',cid_cli  CHAR(25) '
matriz := matriz + ',uf_cli  CHAR(2) '
matriz := matriz + ',insc_cli  CHAR(14) '
matriz := matriz + ',cgc_cli  CHAR(14) '
matriz := matriz + ',cpf_cli  CHAR(14) '
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',vl_base  DECIMAL(10,2) '
matriz := matriz + ',vl_icm  DECIMAL(10,2) '
matriz := matriz + ',vl_icmsu  DECIMAL(10,2) '
matriz := matriz + ',vlr_icmsub  DECIMAL(12,5) '
matriz := matriz + ',base_icmsu  DECIMAL(12,5) '
matriz := matriz + ',desc_icm  DECIMAL(12,5) '
matriz := matriz + ',aliq_icm  DECIMAL(12,2) '
matriz := matriz + ',vl_nota  DECIMAL(10,2) '
matriz := matriz + ',vl_prod  DECIMAL(10,2) '
matriz := matriz + ',peso  DECIMAL(10,2) '
matriz := matriz + ',peso_liq  DECIMAL(10,2) '
matriz := matriz + ',tip_frete  CHAR(1) '
matriz := matriz + ',frete  DECIMAL(10,2) '
matriz := matriz + ',encargo_f  DECIMAL(10,2) '
matriz := matriz + ',disp_asse  DECIMAL(10,2) '
matriz := matriz + ',ipi  DECIMAL(10,2) '
matriz := matriz + ',cod_nat  CHAR(5) '
matriz := matriz + ',cancel  CHAR(1) '
matriz := matriz + ',obs1  CHAR(60) '
matriz := matriz + ',obs2  CHAR(60) '
matriz := matriz + ',obs3  CHAR(60) '
matriz := matriz + ',obs4  CHAR(60) '
matriz := matriz + ',obs5  CHAR(60) '
matriz := matriz + ',obs6  CHAR(60) '
matriz := matriz + ',num_cont  CHAR(12) '
matriz := matriz + ',chnfe  CHAR(55) '
matriz := matriz + ',camnfe  CHAR(90) '
matriz := matriz + ',obs7  CHAR(60) '
matriz := matriz + ',obs8  CHAR(60) '
matriz := matriz + ',obs9  CHAR(60) '
matriz := matriz + ',obs10  CHAR(60) '
matriz := matriz + ',obs11  CHAR(60) '
matriz := matriz + ',obs12  CHAR(60) '
matriz := matriz + ',obs13  CHAR(60) '
matriz := matriz + ',obs14  CHAR(60) '
matriz := matriz + ',obs15  CHAR(60) '
matriz := matriz + ',obs16  CHAR(60) '
matriz := matriz + ',obs17  CHAR(60) '
matriz := matriz + ',obs18  CHAR(60) '
matriz := matriz + ',obs19  CHAR(60) '
matriz := matriz + ',obs20  CHAR(60) '
matriz := matriz + ',norm_ele  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
//matriz := matriz + ',modelo  CHAR(2) '
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTOTNT')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactotnt')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACTOTNT  ')
        //DBCREATE('sactotnt  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTOTNT",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTOTNT ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTOTNT ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTOTNT_SR FOR SACTOTNT ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTOTNT, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCAIXA')
matriz:='empresa  CHAR(3) '
matriz := matriz + ',tipo  CHAR(2) '
matriz := matriz + ',data  DATE '
matriz := matriz + ',nota  CHAR(8) '
matriz := matriz + ',num_dup  CHAR(12) '
matriz := matriz + ',num_ban  CHAR(3) '
matriz := matriz + ',cod_ct  CHAR(3) '
matriz := matriz + ',documento  CHAR(12) '
matriz := matriz + ',venci  DATE '
matriz := matriz + ',valor  DECIMAL(10,2) '
matriz := matriz + ',tipo_comp  CHAR(2) '
matriz := matriz + ',coddesp  CHAR(3) '
matriz := matriz + ',descri1  CHAR(40) '
matriz := matriz + ',descri2  CHAR(40) '
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',cod_cli INTEGER '
matriz := matriz + ',cod_opera  CHAR(3) '
matriz := matriz + ',sangria  CHAR(1) '
matriz := matriz + ',op_pg  CHAR(3) '
matriz := matriz + ',pg  CHAR(1) '
matriz := matriz + ',hora  CHAR(8) '
matriz := matriz + ',autoriz  CHAR(3) '
matriz := matriz + ',valor_com  DECIMAL(10,2) '
matriz := matriz + ',comissao  DECIMAL(12,6) '
matriz := matriz + ',tp_desp  CHAR(1) '
matriz := matriz + ',num_pdv  CHAR(4) '
matriz := matriz + ',num_cup  CHAR(6) '
matriz := matriz + ',fechado  CHAR(2) '
matriz := matriz + ',tp_mov  CHAR(1) '
matriz := matriz + ',termina  CHAR(10) '
matriz := matriz + ',c_s  CHAR(1) '
matriz := matriz + ',obs  CHAR(40) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccaixa')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCAIXA  ')
        //DBCREATE('saccaixa  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCAIXA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCAIXA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCAIXA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCAIXA_SR FOR SACCAIXA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCAIXA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACUF   ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacuf')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACUF     ')
        matriz:='estado  CHAR(20) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',percent  DECIMAL(5,2) '
        sr_getconnection():exec("CREATE TABLE SACUF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCARTA')
matriz:='codigo  CHAR(3) '
matriz := matriz + ',cartao  CHAR(20) '
matriz := matriz + ',sigla  CHAR(2) '
matriz := matriz + ',prazo  DECIMAL(3,0) '
matriz := matriz + ',desconto  DECIMAL(5,2) '
matriz := matriz + ',cod_forn  CHAR(4) '
matriz := matriz + ',tipo_conta  CHAR(4) '
matriz := matriz + ',tipo_venda  CHAR(1) '
matriz := matriz + ',tef  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccarta')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCARTA  ')
        //DBCREATE('saccarta  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCARTA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCARTA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCARTA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCARTA_SR FOR SACCARTA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCARTA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCHEQ ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccheq')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCHEQ   ')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',data_fund  DATE '
        matriz := matriz + ',nota  CHAR(8) '
        matriz := matriz + ',data_cheq  DATE '
        matriz := matriz + ',data_venc  DATE '
        matriz := matriz + ',num_ban  CHAR(3) '
        matriz := matriz + ',num_cheq  CHAR(10) '
        matriz := matriz + ',cheq_vlr  DECIMAL(12,2) '
        matriz := matriz + ',valor_cheq  DECIMAL(12,2) '
        matriz := matriz + ',motivo  CHAR(30) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',correntist  CHAR(35) '
        matriz := matriz + ',cpfcnpj  CHAR(14) '
        matriz := matriz + ',cod_opera  CHAR(3) '
        matriz := matriz + ',cod_incl  CHAR(3) '
        matriz := matriz + ',ok  CHAR(1) '
        matriz := matriz + ',data_ok  DATE '
        matriz := matriz + ',vlr_pago  DECIMAL(12,2) '
        matriz := matriz + ',conta  CHAR(1) '
        matriz := matriz + ',obs  CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccheq  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCHEQ",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCHEQ ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCHEQ ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCHEQ_SR FOR SACCHEQ ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCHEQ, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
matriz:='empresa CHAR(3) '
matriz := matriz + ',tipo     CHAR(2) '
matriz := matriz + ',numero   CHAR(3) '
matriz := matriz + ',duplicata  CHAR(15) '
matriz := matriz + ',valor_dup  DECIMAL(10,2) '
matriz := matriz + ',tip_cli  CHAR(1) '
matriz := matriz + ',fornec  INTEGER '
matriz := matriz + ',cliente CHAR(40) '
matriz := matriz + ',c_cpfcnpj  CHAR(14) '
matriz := matriz + ',emissao DATE '
matriz := matriz + ',venc DATE '
matriz := matriz + ',venc1 DATE '
matriz := matriz + ',datpag     DATE '
matriz := matriz + ',dattra   DATE '
matriz := matriz + ',datope   DATE '
matriz := matriz + ',banco    CHAR(1) '
matriz := matriz + ',agencia  CHAR(8) '
matriz := matriz + ',c_c      CHAR(13) '
matriz := matriz + ',valor    DECIMAL(10,2) '
matriz := matriz + ',vlpago   DECIMAL(10,2) '
matriz := matriz + ',vl_ipi   DECIMAL(10,2) '
matriz := matriz + ',desconto DECIMAL(10,2) '
matriz := matriz + ',juros    DECIMAL(10,2) '
matriz := matriz + ',juros_d  DECIMAL(10,2) '
matriz := matriz + ',pago     CHAR(1) '
matriz := matriz + ',tip_pg   CHAR(2) '
matriz := matriz + ',mov_cx   CHAR(1) '
matriz := matriz + ',conta    CHAR(1) '
matriz := matriz + ',cheque   CHAR(8) '
matriz := matriz + ',vendedor CHAR(3) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',comissao DECIMAL(12,6) '
matriz := matriz + ',comissao1 DECIMAL(12,6) '    // 01/08/2006
matriz := matriz + ',vlr_tab  DECIMAL(12,2) '      // 01/08/2006
matriz := matriz + ',operador CHAR(3) '
matriz := matriz + ',alt_oper CHAR(3) '
matriz := matriz + ',doc_tran CHAR(14) '
matriz := matriz + ',dat_tran DATE '     //12.06.2002
matriz := matriz + ',cod_forn CHAR(4) '     //27.05.2002
matriz := matriz + ',forn_desp  CHAR(40) '   //11.07.2003
matriz := matriz + ',baix_parc  DATE '    //27.05.2002
matriz := matriz + ',oper_parc  CHAR(3) '    //11.07.2003
matriz := matriz + ',data_fund  DATE '     //09.05.2005
matriz := matriz + ',motivo    CHAR(30) '       //09.05.2005
matriz := matriz + ',cod_incl CHAR(3) '      //09.05.2005
matriz := matriz + ',obs      CHAR(60) '
matriz := matriz + ',obs1     CHAR(60) '
matriz := matriz + ',corrente CHAR(35) '
matriz := matriz + ',cpfcnpj  CHAR(14) '
matriz := matriz + ',datcobra DATE '
matriz := matriz + ',datprev  DATE '
matriz := matriz + ',datproc  DATE '        //03.06.2002
matriz := matriz + ',opeproc  CHAR(3) '        //03.06.2002
matriz := matriz + ',ope_venda  CHAR(3) '        //31.07.2006
matriz := matriz + ',ope_comi DECIMAL(12,6) '        //31.07.2006
matriz := matriz + ',pg_comi  DATE '        //31.07.2006
matriz := matriz + ',ope_pgcom  CHAR(3) '        //31.07.2006
matriz := matriz + ',lin1     CHAR(60) '
matriz := matriz + ',lin2     CHAR(60) '
matriz := matriz + ',lin3     CHAR(60) '
matriz := matriz + ',lin4     CHAR(60) '
matriz := matriz + ',lin5     CHAR(60) '
matriz := matriz + ',hora_bx  CHAR(8) '
matriz := matriz + ',com_sem  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
matriz := matriz +',tipo_pg CHAR(20)'
matriz := matriz +',parcela_pg DECIMAL(3,0)'
matriz := matriz +',cod_pg CHAR(3)'
matriz := matriz +',tip_conta  CHAR(4) '
matriz := matriz +',banco_bx  CHAR(3) '
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDUPR ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacdupr')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDUPR   ')
        //DBCREATE('sacdupr  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDUPR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDUPR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDUPR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDUPR_SR FOR SACDUPR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDUPR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCRED ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccred')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCRED   ')
        //DBCREATE('saccred  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCRED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCRED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCRED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCRED_SR FOR SACCRED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCRED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDUPP ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacdupp')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDUPP   ')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',tipo  CHAR(2) '
        matriz := matriz + ',numero  CHAR(3) '
        matriz := matriz + ',duplicata  CHAR(15) '
        matriz := matriz + ',valor_dup  DECIMAL(10,2) '
        matriz := matriz + ',tip_for  CHAR(4) '
        matriz := matriz + ',fornec  CHAR(4) '
        matriz := matriz + ',cliente  CHAR(40) '
        matriz := matriz + ',emissao  DATE '
        matriz := matriz + ',venc  DATE '
        matriz := matriz + ',datpag  DATE '
        matriz := matriz + ',tp_pg  CHAR(1) '
        matriz := matriz + ',banco  CHAR(3) '
        matriz := matriz + ',agencia  CHAR(8) '
        matriz := matriz + ',c_c  CHAR(13) '
        matriz := matriz + ',valor  DECIMAL(10,2) '
        matriz := matriz + ',vlpago  DECIMAL(10,2) '
        matriz := matriz + ',desconto  DECIMAL(10,2) '
        matriz := matriz + ',juros  DECIMAL(10,2) '
        matriz := matriz + ',pago  CHAR(1) '
        matriz := matriz + ',conta  CHAR(1) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',obs_b  CHAR(60) '
        matriz := matriz + ',nbanco  CHAR(3) '
        matriz := matriz + ',cheque  CHAR(6) '
        matriz := matriz + ',conta_c  CHAR(13) '
        matriz := matriz + ',vendedor  CHAR(3) '
        matriz := matriz + ',num_ped  CHAR(10) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz + ',dataceite  DATE '
        matriz := matriz + ',data_so  DATE '
        matriz := matriz + ',dat_receb  DATE '
        matriz := matriz + ',ope_receb  CHAR(3) '
        matriz := matriz + ',doc_tran  CHAR(14) '
        matriz := matriz + ',dat_tran  DATE '     //12.06.2002
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz +',banco_bx  CHAR(3) '
        matriz := matriz +',hora_bx  CHAR(8) '
        //DBCREATE('sacdupp  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDUPP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDUPP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDUPP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDUPP_SR FOR SACDUPP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDUPP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCADDE')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccadde')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCADDE  ')
        matriz:='codigo  CHAR(3) NOT NULL '
        matriz := matriz + ',desc1  CHAR(40) '
        matriz := matriz + ',desc2  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACCADDE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCADDE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCADDE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCADDE ADD CONSTRAINT SACCADDE_PK PRIMARY KEY (codigo)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCADDE_SR FOR SACCADDE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCADDE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDESP ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacdesp')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDESP   ')
        matriz:='codigo  CHAR(4) NOT NULL '
        matriz := matriz + ',desc1  CHAR(25) '
        matriz := matriz + ',tipo  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACDESP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDESP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDESP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDESP ADD CONSTRAINT SACDESP_PK PRIMARY KEY (codigo)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDESP_SR FOR SACDESP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDESP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        IF mop = NIL
                IF ! AbriArq('sacdesp','cdesp','E');RETURN NIL;ENDIF
                ADIREG()
                cdesp->codigo := '1.  '
                cdesp->desc1 := 'FORNECEDORES'
                cdesp->tipo  := 'V'
                DBUNLOCK()
                ADIREG()
                cdesp->codigo := '1.01'
                cdesp->desc1 := 'FORNECEDORES'
                cdesp->tipo  := 'V'
                DBUNLOCK()
                CLOSE cdesp
        ENDIF
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTRAN ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactran')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACTRAN   ')
        matriz:='cod_tran  CHAR(4) NOT NULL'
        matriz := matriz + ',razao  CHAR(30) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',endereco  CHAR(35) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',cidade  CHAR(20) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz + ',cpostal  CHAR(6) '
        matriz := matriz + ',placa  CHAR(8) '
        matriz := matriz + ',tel1  CHAR(14) '
        matriz := matriz + ',tel2  CHAR(14) '
        matriz := matriz + ',fax  CHAR(14) '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',insc  CHAR(14) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',carteira  CHAR(1) '
        matriz := matriz + ',banco  CHAR(1) '
        matriz := matriz + ',prazo_pag  CHAR(8) '
        matriz := matriz + ',ct_gerente  CHAR(15) '
        matriz := matriz + ',ct_vendedo  CHAR(15) '
        matriz := matriz + ',ct_fatura  CHAR(15) '
        matriz := matriz + ',ct_cobran  CHAR(15) '
        matriz := matriz + ',obs  CHAR(30) '
        matriz := matriz + ',antt  CHAR(12) '
        matriz := matriz + ',apolice  CHAR(12) '
        matriz := matriz + ',uf_placa  CHAR(2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactran  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTRAN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTRAN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTRAN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTRAN ADD CONSTRAINT SACTRAN_PK PRIMARY KEY (cod_tran)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTRAN_SR FOR SACTRAN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTRAN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACAV   ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacav')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACAV     ')
        matriz:='numero  CHAR(6) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',quantd  DECIMAL(7,2) '
        matriz := matriz + ',preco  DECIMAL(10,2) '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',data_bai  DATE '
        matriz := matriz + ',baixa  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACAV",,.f.)
        sr_getconnection():exec("CREATE TABLE SACAV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACAV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACAV_SR FOR SACAV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACAV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOP   ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacop')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOP     ')
        matriz:='operacao  CHAR(5) '
        matriz := matriz + ',descr_op  CHAR(40) '
        matriz := matriz + ',credito  CHAR(1) '
        matriz := matriz + ',sai_ent  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',tipo  CHAR(1) '
        //DBCREATE('sacop  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOP_SR FOR SACOP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACESPE ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacespe')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACESPE   ')
        matriz:='cod_espe  CHAR(4) NOT NULL '
        matriz := matriz + ',descri  CHAR(20) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACESPE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACESPE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACESPE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACESPE ADD CONSTRAINT SACESPE_PK PRIMARY KEY (cod_espe)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACESPE_SR FOR SACESPE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACESPE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOVNT')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',tipo_nota  CHAR(1) '
        matriz := matriz + ',documento  CHAR(10) '
        matriz := matriz + ',conjunta  CHAR(8) '
        matriz := matriz + ',serie  CHAR(4) '
        matriz := matriz + ',modelo  CHAR(2) '
        matriz := matriz + ',num_ecf  CHAR(10) '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',emissao  DATE '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',produto  CHAR(40) '
        matriz := matriz + ',especie  CHAR(4) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',fabrica  CHAR(40) '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',data_s_e  DATE '
        matriz := matriz + ',ent_sai  CHAR(1) '
        matriz := matriz + ',quantd  DECIMAL(12,3) '
        matriz := matriz + ',pr_venda  DECIMAL(10,4) '
        matriz := matriz + ',vl_vend  DECIMAL(10,4) '
        matriz := matriz + ',vl_fatura  DECIMAL(10,4) '
        matriz := matriz + ',pr_unit  DECIMAL(10,4) '
        matriz := matriz + ',cust_mer  DECIMAL(10,4) '
        matriz := matriz + ',vl_merc  DECIMAL(10,4) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',comissao  DECIMAL(6,2) '
        matriz := matriz + ',montador  CHAR(3) '
        matriz := matriz + ',montador1  CHAR(3) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',cliente  CHAR(40) '
        matriz := matriz + ',cid_cli  CHAR(20) '
        matriz := matriz + ',uf_cli  CHAR(2) '
        matriz := matriz + ',insc_cli  CHAR(14) '
        matriz := matriz + ',cgc_cli  CHAR(14) '
        matriz := matriz + ',cpf_cli  CHAR(14) '
        matriz := matriz + ',icm  DECIMAL(10,2) '
        matriz := matriz + ',icm_f  DECIMAL(10,5) '
        matriz := matriz + ',icm_sub  DECIMAL(10,5) '
        matriz := matriz + ',vlr_icmsub  DECIMAL(12,5) '
        matriz := matriz + ',base_icmsu  DECIMAL(12,5) '
        matriz := matriz + ',desc_icm  DECIMAL(12,5) '
        matriz := matriz + ',dia1  CHAR(2) '
        matriz := matriz + ',dia2  CHAR(2) '
        matriz := matriz + ',dia3  CHAR(2) '
        matriz := matriz + ',frete  DECIMAL(10,2) '
        matriz := matriz + ',encargo_f  DECIMAL(10,2) '
        matriz := matriz + ',disp_asse  DECIMAL(10,2) '
        matriz := matriz + ',desc1  DECIMAL(10,2) '
        matriz := matriz + ',desc2  DECIMAL(10,2) '
        matriz := matriz + ',desc3  DECIMAL(10,2) '
        matriz := matriz + ',ipi_aliq  DECIMAL(10,2) '
        matriz := matriz + ',ipi  DECIMAL(10,2) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',peso_liq  DECIMAL(8,3) '
        matriz := matriz + ',alimento  CHAR(1) '
        matriz := matriz + ',bebida  DECIMAL(6,2) '
        matriz := matriz + ',tipo  CHAR(2) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',sittrib  CHAR(4) '
        matriz := matriz + ',tp_venda  CHAR(2) '
        matriz := matriz + ',cond_vezes  CHAR(3) '
        matriz := matriz + ',cond_intev  CHAR(2) '
        matriz := matriz + ',cod_nat  CHAR(5) '
        matriz := matriz + ',chassis  CHAR(20) '
        matriz := matriz + ',descri1  CHAR(60) '
        matriz := matriz + ',descri2  CHAR(60) '
        matriz := matriz + ',descri3  CHAR(60) '
        matriz := matriz + ',descri4  CHAR(60) '
        matriz := matriz + ',descri5  CHAR(60) '
        matriz := matriz + ',cancel  CHAR(1) '
        matriz := matriz + ',obs1  CHAR(60) '
        matriz := matriz + ',obs2  CHAR(60) '
        matriz := matriz + ',obs3  CHAR(60) '
        matriz := matriz + ',obs4  CHAR(60) '
        matriz := matriz + ',obs5  CHAR(60) '
        matriz := matriz + ',obs6  CHAR(60) '
        matriz := matriz + ',cod_nota  CHAR(1) '
        matriz := matriz + ',vlr_icm  DECIMAL(15,2) '
        matriz := matriz + ',base_icm  DECIMAL(15,2) '
        matriz := matriz + ',norm_ele  CHAR(1) '
        matriz := matriz + ',hora_mov  CHAR(8) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',camnfe  CHAR(90) '
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmovnt')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACMOVNT   ')
        //DBCREATE('sacmovnt  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOVNT",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOVNT ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOVNT ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOVNT_SR FOR SACMOVNT ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOVNT, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDOLAR')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacdolar')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDOLAR   ')
        matriz:='data_dolar  DATE '
        matriz := matriz + ',hora_dolar  CHAR(5) '
        matriz := matriz + ',hora_dola1  CHAR(5) '
        matriz := matriz + ',hora_dola2  CHAR(5) '
        matriz := matriz + ',hora_dola3  CHAR(5) '
        matriz := matriz + ',hora_dola4  CHAR(5) '
        matriz := matriz + ',vlr_dolar  DECIMAL(12,4) '
        matriz := matriz + ',vlr_dola1  DECIMAL(12,4) '
        matriz := matriz + ',vlr_dola2  DECIMAL(12,4) '
        matriz := matriz + ',vlr_dola3  DECIMAL(12,4) '
        matriz := matriz + ',vlr_dola4  DECIMAL(12,4) '
        matriz := matriz + ',ope_dolar  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacdolar  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDOLAR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDOLAR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDOLAR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDOLAR_SR FOR SACDOLAR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDOLAR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACBAL1 ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacbal')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACBAL    ')
        matriz:='data_bal  DATE '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',descricao  CHAR(40) '
        matriz := matriz + ',contagem  DECIMAL(9,2) '
        matriz := matriz + ',saldo  DECIMAL(9,2) '
        matriz := matriz + ',diferenca  DECIMAL(9,2) '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacbal  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACBAL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACBAL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACBAL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACBAL_SR FOR SACBAL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACBAL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSELNF')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacselnf')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACSELNF  ')
        matriz := 'num_sel  CHAR(10) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacselnf  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSELNF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSELNF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSELNF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSELNF_SR FOR SACSELNF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSELNF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        IF mop_tip = NIL
                IF ! AbriArq('sacselnf','sel','E');RETURN NIL;ENDIF
                ADIREG()
                sel->num_sel := '000000000'
                DBUNLOCK()
                DBCOMMIT()
        ENDIF
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACFIN  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacfin')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACFIN    ')
        matriz:='cod_fin  CHAR(3) '
        matriz := matriz + ',desc_fin  CHAR(25) '
        matriz := matriz + ',cobra_fin  CHAR(1) '
        matriz := matriz + ',taxa_fin  DECIMAL(8,2) '
        matriz := matriz + ',taxa_adm  DECIMAL(8,2) '
        matriz := matriz + ',tipo_fin  CHAR(3) '
        matriz := matriz + ',aliq_fin  DECIMAL(10,6) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACFIN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACFIN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACFIN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACFIN_SR FOR SACFIN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACFIN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACBAN  ')
i := 0
matriz:='data  DATE '
matriz := matriz + ',cod_banc  CHAR(3) NOT NULL '
matriz := matriz + ',banco  CHAR(20) '
matriz := matriz + ',n_banco  CHAR(4) '
matriz := matriz + ',agencia  CHAR(8) '
matriz := matriz + ',c_c  CHAR(13) '
matriz := matriz + ',documento  CHAR(10) '
matriz := matriz + ',deb_cred  CHAR(1) '
matriz := matriz + ',valor  DECIMAL(13,2) '
matriz := matriz + ',descricao  CHAR(40) '
matriz := matriz + ',saldo  DECIMAL(13,2) '
matriz := matriz + ',operador  CHAR(3) '
matriz := matriz + ',alt  CHAR(1) '
matriz := matriz + ',nosso_num  CHAR(15) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF marquivo = 'sacban'
        RETURN matriz
ENDIF

FOR i = 1 TO 15
        IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacban'+ALLTRIM(TRANSFORM(i,'99'))+'')
                DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->sacban'+ALLTRIM(TRANSFORM(i,'99'))+'')
                //DBCREATE('sacban'+ALLTRIM(TRANSFORM(i,'99'))+'  matriz,'SQLRDD')
                sr_getconnection():exec("CREATE GENERATOR SACBAN"+ALLTRIM(TRANSFORM(i,'99')),,.f.)
                sr_getconnection():exec("CREATE TABLE SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+" ("+matriz+" )",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                sr_getconnection():exec("ALTER TABLE SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+" ADD UNIQUE (SR_RECNO)",,.f.)
                sr_getconnection():exec("ALTER TABLE SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+" ADD CONSTRAINT SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+"_PK PRIMARY KEY (cod_banc)",,.f.)
                sr_getconnection():exec("CREATE TRIGGER SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+"_SR FOR SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+" ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACBAN"+ALLTRIM(TRANSFORM(i,'99'))+", 1); end",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
NEXT
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSERIE')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacserie')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACSERIE  ')
        matriz:='codigo  CHAR(5) '
        matriz := matriz + ',serie  CHAR(13) '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',data_ent  DATE '
        matriz := matriz + ',opera_ent  CHAR(3) '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',cod_cli  INTEGER '
        matriz := matriz + ',data_sai  DATE '
        matriz := matriz + ',garantia  DECIMAL(4,0) '
        matriz := matriz + ',data_fim  DATE '
        matriz := matriz + ',opera_sai  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacserie  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSERIE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSERIE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSERIE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSERIE_SR FOR SACSERIE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSERIE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTABME')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactabme')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACTABME  ')
        matriz:='data  DATE '
        matriz := matriz + ',grupo  CHAR(6) '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',cod_cli  INTEGER '
        matriz := matriz + ',desconto  DECIMAL(12,2) '
        matriz := matriz + ',operado  DECIMAL(12,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactabme  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTABME",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTABME ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTABME ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTABME_SR FOR SACTABME ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTABME, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCONF ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacconf')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCONF   ')
        matriz:='modulo  CHAR(20) '
        matriz := matriz + ',descri  CHAR(60) '
        matriz := matriz + ',nivel  CHAR(9) '
        matriz := matriz + ',data_alt  DATE '
        matriz := matriz + ',oper_alt  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacconf  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCONF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCONF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCONF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCONF_SR FOR SACCONF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCONF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCONF ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnivel')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACNIVEL   ')
        matriz:='modulo  CHAR(20) '
        matriz := matriz + ',descri  CHAR(60) '
        matriz := matriz + ',nivel  CHAR(9) '
        matriz := matriz + ',data_alt  DATE '
        matriz := matriz + ',oper_alt  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacconf  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNIVEL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNIVEL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNIVEL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNIVEL_SR FOR SACNIVEL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNIVEL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> MERC_DET')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('merc_det')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> MERC_DET   ')
        matriz:='data  DATE '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',chassis  CHAR(20) '
        matriz := matriz + ',descri1  CHAR(60) '
        matriz := matriz + ',descri2  CHAR(60) '
        matriz := matriz + ',descri3  CHAR(60) '
        matriz := matriz + ',descri4  CHAR(60) '
        matriz := matriz + ',descri5  CHAR(60) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',venda  CHAR(1) '
        matriz := matriz + ',n_ped  CHAR(6) '
        matriz := matriz + ',vlr_venda  DECIMAL(12,2) '
        matriz := matriz + ',vlr_custo  DECIMAL(12,2) '
        matriz := matriz + ',dat_venda  DATE '
        matriz := matriz + ',vl_vendido  DECIMAL(12,2) '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',fornece  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('merc_det  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR MERC_DET",,.f.)
        sr_getconnection():exec("CREATE TABLE MERC_DET ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE MERC_DET ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER MERC_DET_SR FOR MERC_DET ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( MERC_DET, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCEP  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE("saccep")
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCEP    ')
        matriz:='nome  CHAR(60) '
        matriz := matriz + ',local  CHAR(60) '
        matriz := matriz + ',bairro1  CHAR(30) '
        matriz := matriz + ',cep8  CHAR(8) '
        matriz := matriz + ',tipo  CHAR(4) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccep  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCEP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCEP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCEP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCEP_SR FOR SACCEP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCEP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        limpa(24,00,21,79)
        USE SACCEP ALIAS CEP  NEW VIA 'SQLRDD'
        INDEX ON nome+local+bairro1+tipo TAG nome TO ('saccep')
        CLOSE cep
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCEPLO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE("sacceplo")
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCEPLO  ')
        matriz:='nome  CHAR(40) '
        matriz := matriz + ',cep8  CHAR(8) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',tipo  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacceplo  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCEPLO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCEPLO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCEPLO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCEPLO_SR FOR SACCEPLO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCEPLO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        limpa(24,00,21,79)

        USE SACCEPLO ALIAS CEPLO NEW VIA 'SQLRDD'
        INDEX ON nome TAG nome TO ('sacceplo')
        CLOSE ceplo
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACVISI ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacvisi')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACVISI   ')
        matriz:='nome  CHAR(30) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',horaini  CHAR(8) '
        matriz := matriz + ',horafim  CHAR(8) '
        matriz := matriz + ',operador  CHAR(20) '
        matriz := matriz + ',prob1  CHAR(70) '
        matriz := matriz + ',prob2  CHAR(70) '
        matriz := matriz + ',prob3  CHAR(70) '
        matriz := matriz + ',prob4  CHAR(70) '
        matriz := matriz + ',prob5  CHAR(70) '
        matriz := matriz + ',prob6  CHAR(70) '
        matriz := matriz + ',prob7  CHAR(70) '
        matriz := matriz + ',prob8  CHAR(70) '
        matriz := matriz + ',prob9  CHAR(70) '
        matriz := matriz + ',prob10  CHAR(70) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacvisi  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACVISI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACVISI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACVISI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACVISI_SR FOR SACVISI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACVISI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        //USE SACVISI ALIAS visi EXCLUSIVE NEW VIA 'SQLRDD'
        //INDEX ON DTOS(visi->data)+SUBSTR(visi->horaini,1,5) TAG dathor TO ('sacvisi')
        //CLOSE visi
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSOLI ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacsoli')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACSOLI   ')
        matriz:='nome  CHAR(30) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',operador  CHAR(20) '
        matriz := matriz + ',prob1  CHAR(70) '
        matriz := matriz + ',prob2  CHAR(70) '
        matriz := matriz + ',prob3  CHAR(70) '
        matriz := matriz + ',prob4  CHAR(70) '
        matriz := matriz + ',prob5  CHAR(70) '
        matriz := matriz + ',prob6  CHAR(70) '
        matriz := matriz + ',prob7  CHAR(70) '
        matriz := matriz + ',prob8  CHAR(70) '
        matriz := matriz + ',prob9  CHAR(70) '
        matriz := matriz + ',prob10  CHAR(70) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacsoli  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSOLI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSOLI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSOLI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSOLI_SR FOR SACSOLI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSOLI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        USE SACSOLI ALIAS soli EXCLUSIVE NEW VIA 'SQLRDD'
        INDEX ON DTOS(soli->data) TAG dat TO ('sacsoli')
        CLOSE soli
ENDIF

****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> REGIAO  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('regiao')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> REGIAO   ')
        matriz:='codigo  CHAR(2) '
        matriz := matriz + ',regiao  CHAR(30) '
        matriz := matriz + ',codvend  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('regiao  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR REGIAO",,.f.)
        sr_getconnection():exec("CREATE TABLE REGIAO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE REGIAO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER REGIAO_SR FOR REGIAO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( REGIAO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTIPDC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactipdc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACTIPDC  ')
        matriz:='tipo_doc  CHAR(2) NOT NULL '
        matriz := matriz + ',descri  CHAR(15) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactipdc  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTIPDC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTIPDC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTIPDC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTIPDC ADD CONSTRAINT SACTIPDC_PK PRIMARY KEY (tipo_doc)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTIPDC_SR FOR SACTIPDC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTIPDC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        IF ! AbriArq('sactipdc','tipdc');RETURN NIL;ENDIF
        ADIREG()
        tipdc->tipo_doc := 'DU'
        tipdc->descri   := 'DUPLICATA'
        ADIREG()
        tipdc->tipo_doc := 'CT'
        tipdc->descri   := 'CARTAO'
        ADIREG()
        tipdc->tipo_doc := 'DN'
        tipdc->descri   := 'DINHEIRO'
        ADIREG()
        tipdc->tipo_doc := 'CH'
        tipdc->descri   := 'CHEQUE'
        ADIREG()
        tipdc->tipo_doc := 'FI'
        tipdc->descri   := 'FINANCIAMENTO'
        ADIREG()
        tipdc->tipo_doc := 'RE'
        tipdc->descri   := 'RECEBIMENTO'
        DBCOMMITALL()
        DBUNLOCKALL()
        tipdc->(DBCLOSEAREA())

ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACREME ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacreme')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACREME  ')
        matriz:='num_ped  CHAR(6) '
        matriz := matriz + ',termina  CHAR(10) '
        matriz := matriz + ',dat_ped  CHAR(8) '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',unidade  CHAR(2) '
        matriz := matriz + ',especie  CHAR(4) '
        matriz := matriz + ',envelope  CHAR(10) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',peso_liq  DECIMAL(8,3) '
        matriz := matriz + ',quantd  DECIMAL(12,3) '
        matriz := matriz + ',pre_dig  DECIMAL(12,4) '
        matriz := matriz + ',vlr_fat  DECIMAL(12,4) '
        matriz := matriz + ',pre_venda  DECIMAL(12,4) '
        matriz := matriz + ',cust_real  DECIMAL(12,4) '
        matriz := matriz + ',cust_merc  DECIMAL(12,4) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',fabrica  CHAR(40) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',vendedor  CHAR(30) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',cond_vezes  CHAR(3) '
        matriz := matriz + ',cond_intev  CHAR(40) '
        matriz := matriz + ',tp_vend  CHAR(2) '
        matriz := matriz + ',alimento  CHAR(1) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',comissao  DECIMAL(6,2) '
        matriz := matriz + ',prazo  DECIMAL(3,0) '
        matriz := matriz + ',bebida  DECIMAL(6,2) '

        matriz := matriz + ',ind_icms  CHAR(2) '
        matriz := matriz + ',sit_trib  CHAR(1) '
        matriz := matriz + ',obs1  CHAR(40) '
        matriz := matriz + ',obs2  CHAR(40) '
        matriz := matriz + ',obs3  CHAR(40) '
        matriz := matriz + ',obs4  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacreme  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACREME",,.f.)
        sr_getconnection():exec("CREATE TABLE SACREME ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACREME ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACREME_SR FOR SACREME ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACREME, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

/*DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACIMPDU')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacimpdu')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACIMPDU  ')
        matriz:='tipo  CHAR(2) '
        matriz := matriz + ',numero  CHAR(3) '
        matriz := matriz + ',duplicata  CHAR(10) '
        matriz := matriz + ',valor_dup  DECIMAL(10,2) '
        matriz := matriz + ',tip_cli  CHAR(1) '
        matriz := matriz + ',fornec  CHAR(5) '
        matriz := matriz + ',cliente  CHAR(40) '
        matriz := matriz + ',emissao  CHAR(8) '
        matriz := matriz + ',venc  CHAR(8) '
        matriz := matriz + ',datpag  CHAR(8) '
        matriz := matriz + ',dattra  CHAR(8) '
        matriz := matriz + ',banco  CHAR(3) '
        matriz := matriz + ',agencia  CHAR(8) '
        matriz := matriz + ',c_c  CHAR(13) '
        matriz := matriz + ',valor  DECIMAL(10,2) '
        matriz := matriz + ',vlpago  DECIMAL(10,2) '
        matriz := matriz + ',desc  DECIMAL(10,2) '
        matriz := matriz + ',juros  DECIMAL(10,2) '
        matriz := matriz + ',pago  CHAR(1) '
        matriz := matriz + ',tip_pg  CHAR(2) '
        matriz := matriz + ',mov_cx  CHAR(1) '
        matriz := matriz + ',conta  CHAR(1) '
        matriz := matriz + ',cheque  CHAR(8) '
        matriz := matriz + ',vendedor  CHAR(3) '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',comissao  DECIMAL(12,6) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz + ',alt_oper  CHAR(3) '
        matriz := matriz + ',doc_tran  CHAR(12) '
        matriz := matriz + ',cod_forn  CHAR(4) '     //27.05.2002
        matriz := matriz + ',baix_parc  CHAR(8) '    //27.05.2002
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',corrente  CHAR(35) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacimpdu  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE SACIMPDU ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACIMPDU ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACIMPDU_SR FOR SACIMPDU ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACIMPDU, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMENSA')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmensa')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACMENSA  ')
        matriz:='data_men  DATE '
        matriz := matriz + ',hora_men  CHAR(8) '
        matriz := matriz + ',cod_emi  CHAR(3) '
        matriz := matriz + ',cod_rec  CHAR(3) '
        matriz := matriz + ',assunto  CHAR(40) '
        matriz := matriz + ',lin1  CHAR(70) '
        matriz := matriz + ',lin2  CHAR(70) '
        matriz := matriz + ',lin3  CHAR(70) '
        matriz := matriz + ',lin4  CHAR(70) '
        matriz := matriz + ',lin5  CHAR(70) '
        matriz := matriz + ',lin6  CHAR(70) '
        matriz := matriz + ',lin7  CHAR(70) '
        matriz := matriz + ',lin8  CHAR(70) '
        matriz := matriz + ',lin9  CHAR(70) '
        matriz := matriz + ',lin10  CHAR(70) '
        matriz := matriz + ',lin11  CHAR(70) '
        matriz := matriz + ',lin12  CHAR(70) '
        matriz := matriz + ',lin13  CHAR(70) '
        matriz := matriz + ',lin14  CHAR(70) '
        matriz := matriz + ',lin15  CHAR(70) '
        matriz := matriz + ',lin16  CHAR(70) '
        matriz := matriz + ',lin17  CHAR(70) '
        matriz := matriz + ',lin18  CHAR(70) '
        matriz := matriz + ',lin19  CHAR(70) '
        matriz := matriz + ',lin20  CHAR(70) '
        matriz := matriz + ',ler  CHAR(1) '
        matriz := matriz + ',data_ler  DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacmensa  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMENSA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMENSA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMENSA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMENSA_SR FOR SACMENSA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMENSA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOCORR')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacocorr')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOCORR  ')
        matriz:='tipo  CHAR(3) '
        matriz := matriz + ',documento CHAR(6) '
        matriz := matriz + ',data_exe  DATE '
        matriz := matriz + ',hora_exe  CHAR(8) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',data_oco  DATE '
        matriz := matriz + ',hora_oco  CHAR(8) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',quantd  DECIMAL(12,3) '
        matriz := matriz + ',saldo_atu  DECIMAL(12,3) '
        matriz := matriz + ',saldo_exe  DECIMAL(12,3) '
        matriz := matriz + ',pedido  CHAR(1) '
        matriz := matriz + ',obs  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacocorr  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOCORR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOCORR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOCORR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOCORR_SR FOR SACOCORR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOCORR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCTVIS')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacctvis')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCTVIS  ')
        matriz:='cod_cli  INTEGER '
        matriz := matriz + ',cliente CHAR(40) '
        matriz := matriz + ',data_proc  DATE '
        matriz := matriz + ',data_visi  DATE '
        matriz := matriz + ',hora_ini  CHAR(8) '
        matriz := matriz + ',hora_fim  CHAR(8) '
        matriz := matriz + ',cod_tec  CHAR(3) '
        matriz := matriz + ',obs1  CHAR(70) '
        matriz := matriz + ',obs2  CHAR(70) '
        matriz := matriz + ',obs3  CHAR(70) '
        matriz := matriz + ',obs4  CHAR(70) '
        matriz := matriz + ',obs5  CHAR(70) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacctvis  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCTVIS",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCTVIS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCTVIS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCTVIS_SR FOR SACCTVIS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCTVIS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='empresa  CHAR(3) '
matriz := matriz + ',num_roma  CHAR(6) '
matriz := matriz + ',dat_roma  DATE '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',cod_mot  CHAR(4) '
matriz := matriz + ',placa_mot  CHAR(8) '
matriz := matriz + ',cod_ope  CHAR(3) '
matriz := matriz + ',entregue  DATE '
matriz := matriz + ',cancel  CHAR(1) '
matriz := matriz + ',ped_orc  CHAR(1) '
matriz := matriz + ',obs1  CHAR(60) '
matriz := matriz + ',obs2  CHAR(60) '
matriz := matriz + ',obs3  CHAR(60) '
matriz := matriz + ',obs4  CHAR(60) '
matriz := matriz + ',obs5  CHAR(60) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACROMA ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacroma')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACROMA  ')
        //DBCREATE('sacroma  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACROMA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACROMA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACROMA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACROMA_SR FOR SACROMA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACROMA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPRODU')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacprodu')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPRODU ')
        //DBCREATE('sacprodu  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPRODU",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPRODU ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPRODU ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPRODU_SR FOR SACPRODU ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPRODU, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCID  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccid')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCID   ')
        matriz:='cod_cid  CHAR(7) NOT NULL'
        matriz := matriz + ',cidade CHAR(25) '
        matriz := matriz + ',cep CHAR(8) '
        matriz := matriz + ',uf CHAR(2) '
        matriz := matriz + ',cod_ope  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACCID",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCID ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCID ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCID_SR FOR SACCID ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCID, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACLOG  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saclog')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACLOG   ')
        matriz:='data_sis  DATE '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',tipo  CHAR(10) '
        matriz := matriz + ',aut_oper  CHAR(3) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_cli  INTEGER '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',cod_prod  CHAR(5) '
        matriz := matriz + ',documento  CHAR(15) '
        matriz := matriz + ',quantd1  DECIMAL(14,3) '
        matriz := matriz + ',quantd2  DECIMAL(14,3) '
        matriz := matriz + ',valor1  DECIMAL(14,3) '
        matriz := matriz + ',valor2  DECIMAL(14,3) '
        matriz := matriz + ',venc1  DATE '
        matriz := matriz + ',venc2  DATE '
        matriz := matriz + ',modulo  CHAR(20) '
        matriz := matriz + ',descri  CHAR(60) '
        matriz := matriz + ',cod_aut  CHAR(17) '
        matriz := matriz + ',terminal  CHAR(15) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saclog  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACLOG",,.f.)
        sr_getconnection():exec("CREATE TABLE SACLOG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACLOG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACLOG_SR FOR SACLOG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACLOG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSEF  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacsef')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACSEF   ')
        matriz:='nome  CHAR(50) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',crc  CHAR(10) '
        matriz := matriz + ',tel1  CHAR(12) '
        matriz := matriz + ',tel2  CHAR(12) '
        matriz := matriz + ',fax  CHAR(12) '
        matriz := matriz + ',caixa_p  CHAR(6) '
        matriz := matriz + ',email  CHAR(50) '
        matriz := matriz + ',endereco  CHAR(45) '
        matriz := matriz + ',numero  CHAR(10) '
        matriz := matriz + ',complemento  CHAR(20) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',cidade  CHAR(25) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacsef  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSEF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSEF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSEF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSEF_SR FOR SACSEF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSEF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOVSC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmovsc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACMOVSC  ')
        matriz:='linha  CHAR(160) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',operacao  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacmovsc  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOVSC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOVSC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOVSC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOVSC_SR FOR SACMOVSC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOVSC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACBALAN')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacbalan')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACBALAN  ')
        matriz:='data  DATE '
        matriz := matriz + ',doc  CHAR(10) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',descricao  CHAR(40) '
        matriz := matriz + ',saldo  DECIMAL(13,3) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacbalan  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACBALAN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACBALAN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACBALAN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACBALAN_SR FOR SACBALAN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACBALAN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOSS  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacoss')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOSS  ')
        matriz:='empresa  CHAR(3) '         // No. OS
        matriz := matriz + ',num_os  CHAR(6) '         // No. OS
        matriz := matriz + ',operador  CHAR(3) '       // COD. OPERADOR
        matriz := matriz + ',data_ent  DATE '       // DATA DA ENTRADA
        matriz := matriz + ',hora_ent  CHAR(8) '       // HORA DA ENTRADA
        matriz := matriz + ',marca  CHAR(15) '
        matriz := matriz + ',modelo  CHAR(15) '
        matriz := matriz + ',serie  CHAR(15) '
        matriz := matriz + ',numero  CHAR(12) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',diag1  CHAR(60) '         // DIAGNOSTICO DO CLIENTE
        matriz := matriz + ',diag2  CHAR(60) '
        matriz := matriz + ',diag3  CHAR(60) '
        matriz := matriz + ',diag4  CHAR(60) '
        matriz := matriz + ',diag5  CHAR(60) '
        matriz := matriz + ',diag6  CHAR(60) '
        matriz := matriz + ',diag7  CHAR(60) '
        matriz := matriz + ',diag8  CHAR(60) '
        matriz := matriz + ',diag9  CHAR(60) '
        matriz := matriz + ',diag10  CHAR(60) '
        matriz := matriz + ',vlr_esti  DECIMAL(13,3) '      // VALOR ESTIPULADO
        matriz := matriz + ',prev_ent  DATE '       // PREVISAO DA ENTREGA

        matriz := matriz + ',garantia  CHAR(1) '
        matriz := matriz + ',ngarantia  CHAR(1) '
        matriz := matriz + ',gconserto  CHAR(1) '

        matriz := matriz + ',cod_tec  CHAR(3) '        // COD. DO TECNICO
        matriz := matriz + ',diag_tec1  CHAR(60) '     // DIAGNOSTICO DO TECNICO
        matriz := matriz + ',diag_tec2  CHAR(60) '
        matriz := matriz + ',diag_tec3  CHAR(60) '
        matriz := matriz + ',diag_tec4  CHAR(60) '
        matriz := matriz + ',diag_tec5  CHAR(60) '
        matriz := matriz + ',autorizo  CHAR(15) '      // AUTORIZADO POR
        matriz := matriz + ',dat_ini  DATE '        // DATA DO INICIO DO CONSERTO
        matriz := matriz + ',hora_ini  CHAR(8) '       // HORA
        matriz := matriz + ',dat_fim  DATE '        // DATA DO FIM DO CONSERTO
        matriz := matriz + ',hora_fim  CHAR(8) '       // HORA
        matriz := matriz + ',acesso1  CHAR(3) '        // COD.ACESSORIOS DO APARELHO
        matriz := matriz + ',acesso2  CHAR(3) '
        matriz := matriz + ',acesso3  CHAR(3) '
        matriz := matriz + ',acesso4  CHAR(3) '
        matriz := matriz + ',acesso5  CHAR(3) '
        matriz := matriz + ',acesso6  CHAR(3) '
        matriz := matriz + ',acesso7  CHAR(3) '
        matriz := matriz + ',acesso8  CHAR(3) '
        matriz := matriz + ',acesso9  CHAR(3) '
        matriz := matriz + ',acesso10  CHAR(3) '
        matriz := matriz + ',pag  CHAR(1) '            // DATA DA BAIXA
        matriz := matriz + ',baixa  DATE '          // DATA DA BAIXA
        matriz := matriz + ',num_ped  CHAR(6) '        // NO.PEDIDO
        matriz := matriz + ',tipo_os  CHAR(1) '
        matriz := matriz + ',oper_bx  CHAR(3) '
        matriz := matriz + ',conclu1  CHAR(60) '
        matriz := matriz + ',conclu2  CHAR(60) '
        matriz := matriz + ',conclu3  CHAR(60) '
        matriz := matriz + ',hist1  CHAR(60) '
        matriz := matriz + ',hist2  CHAR(60) '
        matriz := matriz + ',hist3  CHAR(60) '
        matriz := matriz + ',hist4  CHAR(60) '
        matriz := matriz + ',hist5  CHAR(60) '
        matriz := matriz + ',hist6  CHAR(60) '
        matriz := matriz + ',hist7  CHAR(60) '
        matriz := matriz + ',hist8  CHAR(60) '
        matriz := matriz + ',hist9  CHAR(60) '
        matriz := matriz + ',hist10  CHAR(60) '
        matriz := matriz + ',hist11  CHAR(60) '
        matriz := matriz + ',hist12  CHAR(60) '
        matriz := matriz + ',hist13  CHAR(60) '
        matriz := matriz + ',hist14  CHAR(60) '
        matriz := matriz + ',hist15  CHAR(60) '
        matriz := matriz + ',hist16  CHAR(60) '
        matriz := matriz + ',hist17  CHAR(60) '
        matriz := matriz + ',hist18  CHAR(60) '
        matriz := matriz + ',hist19  CHAR(60) '
        matriz := matriz + ',hist20  CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacoss  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOSS",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOSS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOSS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOSS_SR FOR SACOSS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOSS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOSPRO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacospro')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOSPRO  ')
        matriz:='num_os  CHAR(6) '         // No.OS
        matriz := matriz + ',dat_ent  DATE '        // DATA ENTRADA
        matriz := matriz + ',operador  CHAR(3) '       // COD.OPERADOR
        matriz := matriz + ',cod_merc  CHAR(5) '       // COD. MERCADORIA
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',quantd  DECIMAL(13,3) '
        matriz := matriz + ',vlr_fat  DECIMAL(13,3) '
        matriz := matriz + ',obs_prod  CHAR(40) '
        matriz := matriz + ',montador  CHAR(3) '
        matriz := matriz + ',montador1  CHAR(3) '
        matriz := matriz + ',cod_tec  CHAR(3) '        // COD.TECNICO
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacospro  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOSPRO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOSPRO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOSPRO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOSPRO_SR FOR SACOSPRO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOSPRO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOSNO ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacosno')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOSNO  ')
        matriz := 'num_os  CHAR(6) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacosno  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOSNO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOSNO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOSNO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOSNO ADD CONSTRAINT SACOSNO_PK PRIMARY KEY (num_os)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOSNO_SR FOR SACOSNO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOSNO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOSAC ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacosac')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOSAC  ')
        matriz:='codigo  CHAR(3) '
        matriz := matriz + ',descri  CHAR(20) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacosac  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOSAC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOSAC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOSAC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOSAC_SR FOR SACOSAC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOSAC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='empresa  CHAR(3) '
matriz := matriz + ',data  DATE '
matriz := matriz + ',cod_cli INTEGER '
matriz := matriz + ',cliente  CHAR(40) '
matriz := matriz + ',uf_cli  CHAR(2) '
matriz := matriz + ',cod_pro  CHAR(5) '
matriz := matriz + ',produto  CHAR(40) '
matriz := matriz + ',cod_forn  CHAR(4) '
matriz := matriz + ',fornece  CHAR(40) '
matriz := matriz + ',quantd  DECIMAL(13,3) '
matriz := matriz + ',motivo  CHAR(50) '
matriz := matriz + ',motivo1  CHAR(50) '
matriz := matriz + ',motivo2  CHAR(50) '
matriz := matriz + ',vendedor  CHAR(3) '
matriz := matriz + ',oper_incl  CHAR(3) '
matriz := matriz + ',data_baix  DATE '
matriz := matriz + ',oper_baix  CHAR(3) '
matriz := matriz + ',tipo_ass  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACASS  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacass')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACASS  ')
        //DBCREATE('sacass  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACASS",,.f.)
        sr_getconnection():exec("CREATE TABLE SACASS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACASS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACASS_SR FOR SACASS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACASS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSOLPR')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacsolpr')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACSOLPR  ')
        //DBCREATE('sacsolpr  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSOLPR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSOLPR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSOLPR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSOLPR_SR FOR SACSOLPR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSOLPR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCLF ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacclf')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCLF  ')
        matriz:='codigo  CHAR(2) '
        matriz := matriz + ',numero  CHAR(10) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacclf  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLF_SR FOR SACCLF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACRL  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacrl')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACRL   ')
        matriz:='cod_oper  CHAR(3) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacrl  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACRL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACRL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACRL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACRL_SR FOR SACRL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACRL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPROTO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacproto')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPROTO')
        matriz:='cod_oper  CHAR(3) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',doc  CHAR(6) '
        matriz := matriz + ',transp  CHAR(20) '
        matriz := matriz + ',fornece  CHAR(4) '
        matriz := matriz + ',cfop  CHAR(5) '
        matriz := matriz + ',dat_age  DATE '
        matriz := matriz + ',dat_Emi  DATE '
        matriz := matriz + ',dat_sai  DATE '
        matriz := matriz + ',item  DECIMAL(6,0) '
        matriz := matriz + ',volume  DECIMAL(10,3) '
        matriz := matriz + ',valor  DECIMAL(13,2) '
        matriz := matriz + ',dupli1  CHAR(6) '
        matriz := matriz + ',venc1  DATE '
        matriz := matriz + ',ok1  DATE '
        matriz := matriz + ',vlr_dup1  DECIMAL(13,2) '
        matriz := matriz + ',dupli2  CHAR(6) '
        matriz := matriz + ',venc2  DATE '
        matriz := matriz + ',ok2  DATE '
        matriz := matriz + ',vlr_dup2  DECIMAL(13,2) '
        matriz := matriz + ',dupli3  CHAR(6) '
        matriz := matriz + ',venc3  DATE '
        matriz := matriz + ',ok3  DATE '
        matriz := matriz + ',vlr_dup3  DECIMAL(13,2) '
        matriz := matriz + ',dupli4  CHAR(6) '
        matriz := matriz + ',venc4  DATE '
        matriz := matriz + ',ok4  DATE '
        matriz := matriz + ',vlr_dup4  DECIMAL(13,2) '
        matriz := matriz + ',dupli5  CHAR(6) '
        matriz := matriz + ',venc5  DATE '
        matriz := matriz + ',ok5  DATE '
        matriz := matriz + ',vlr_dup5  DECIMAL(13,2) '
        matriz := matriz + ',dupli6  CHAR(6) '
        matriz := matriz + ',venc6  DATE '
        matriz := matriz + ',ok6  DATE '
        matriz := matriz + ',vlr_dup6  DECIMAL(13,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacproto  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPROTO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPROTO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPROTO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPROTO_SR FOR SACPROTO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPROTO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
/*
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACREPRC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacrepro')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACREPRO')
        matriz:='data  DATE '
        matriz := matriz + ',ope  CHAR(3) '
        matriz := matriz + ',cod_pro  CHAR(5) '
        matriz := matriz + ',produto  CHAR(40) '
        matriz := matriz + ',valor  DECIMAL(13,2) '
        matriz := matriz + ',qtd  DECIMAL(13,3) '
        matriz := matriz + ',data_ok  DATE '
        matriz := matriz + ',ope_ok  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacrepro  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACREPRO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACREPRO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACREPRO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACREPRO_SR FOR SACREPRO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACREPRO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTABPG')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactabpg')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACTABPG')
        matriz:='data  DATE '
        matriz := matriz + ',ope  CHAR(3) '
        matriz := matriz + ',codigo  CHAR(3) '
        matriz := matriz + ',Descri  CHAR(20) '
        matriz := matriz + ',percent  DECIMAL(10,2) '
        matriz := matriz + ',cond  CHAR(3) '
        matriz := matriz + ',dia1  DECIMAL(3,0) '
        matriz := matriz + ',dia2  DECIMAL(3,0) '
        matriz := matriz + ',dia3  DECIMAL(3,0) '
        matriz := matriz + ',dia4  DECIMAL(3,0) '
        matriz := matriz + ',dia5  DECIMAL(3,0) '
        matriz := matriz + ',dia6  DECIMAL(3,0) '
        matriz := matriz + ',dia7  DECIMAL(3,0) '
        matriz := matriz + ',dia8  DECIMAL(3,0) '
        matriz := matriz + ',dia9  DECIMAL(3,0) '
        matriz := matriz + ',dia10  DECIMAL(3,0) '
        matriz := matriz + ',dia11  DECIMAL(3,0) '
        matriz := matriz + ',dia12  DECIMAL(3,0) '
        matriz := matriz + ',dia13  DECIMAL(3,0) '
        matriz := matriz + ',dia14  DECIMAL(3,0) '
        matriz := matriz + ',dia15  DECIMAL(3,0) '
        matriz := matriz + ',comi_tab  DECIMAL(6,2) '
        matriz := matriz + ',pocket  CHAR(1) '
        matriz := matriz + ',preco  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactabpg  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTABPG",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTABPG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTABPG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTABPG_SR FOR SACTABPG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTABPG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("INSERT INTO sactabpg (codigo,descri,percent,cond,pocket,sr_deleted) VALUES ('001','A VISTA',0,'000','S',' ')",,.f.)
        sr_getconnection():exec("INSERT INTO sactabpg (codigo,descri,percent,cond,pocket,sr_deleted) VALUES ('002','A PRAZO',0,'001','S',' ')",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCOTAC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccotac')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCOTAC')
        matriz:='data  DATE '
        matriz := matriz + ',ope  CHAR(3) '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',fornece  CHAR(40) '
        matriz := matriz + ',codigo  CHAR(5) '
        matriz := matriz + ',produto  CHAR(40) '
        matriz := matriz + ',valor1  DECIMAL(12,2) '
        matriz := matriz + ',cond1  CHAR(30) '
        matriz := matriz + ',valor2  DECIMAL(12,2) '
        matriz := matriz + ',cond2  CHAR(30) '
        matriz := matriz + ',valor3  DECIMAL(12,2) '
        matriz := matriz + ',cond3  CHAR(30) '
        matriz := matriz + ',valor4  DECIMAL(12,2) '
        matriz := matriz + ',cond4  CHAR(30) '
        matriz := matriz + ',valor5  DECIMAL(12,2) '
        matriz := matriz + ',cond5  CHAR(30) '
        matriz := matriz + ',obs  CHAR(50) '
        matriz := matriz + ',obs1  CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccotac  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCOTAC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCOTAC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCOTAC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCOTAC_SR FOR SACCOTAC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCOTAC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPPED ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpped')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPPED')
        matriz:='iden  CHAR(3) '
        matriz := matriz + ',flag  CHAR(1) '
        matriz := matriz + ',cod_ped  CHAR(10) '
        matriz := matriz + ',ped_pock  CHAR(10) '
        matriz := matriz + ',num_cli  CHAR(10) '
        matriz := matriz + ',tipoop  CHAR(15) '
        matriz := matriz + ',dataped  CHAR(10) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',tipo_fre  CHAR(10) '
        matriz := matriz + ',frete  CHAR(14) '
        matriz := matriz + ',vlr_fre  CHAR(14) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_tran  CHAR(4) '
        matriz := matriz + ',tip_tran  CHAR(4) '
        matriz := matriz + ',cod_dest  CHAR(4) '
        matriz := matriz + ',tab_preco  CHAR(5) '
        matriz := matriz + ',cond_v  CHAR(10) '
        matriz := matriz + ',datapg  CHAR(10) '
        matriz := matriz + ',form_cob  CHAR(15) '
        matriz := matriz + ',tip_cob  CHAR(20) '
        matriz := matriz + ',fatura  CHAR(10) '
        matriz := matriz + ',dataprev  CHAR(10) '
        matriz := matriz + ',datacheq  CHAR(10) '
        matriz := matriz + ',vlr_ped  CHAR(14) '
        matriz := matriz + ',sld_ped  CHAR(14) '
        matriz := matriz + ',sld_can  CHAR(14) '
        matriz := matriz + ',obs1  CHAR(40) '
        matriz := matriz + ',obs2  CHAR(40) '
        matriz := matriz + ',obs3  CHAR(40) '
        matriz := matriz + ',obs4  CHAR(40) '
        matriz := matriz + ',status  CHAR(1) '
        matriz := matriz + ',obsnf  CHAR(60) '
        matriz := matriz + ',condpg  CHAR(5) '
        matriz := matriz + ',modopg  CHAR(74) '
        matriz := matriz + ',avaliado  CHAR(1) '
        matriz := matriz + ',dat_proc  DATE '
        matriz := matriz + ',processo  CHAR(1) '
        matriz := matriz + ',documento  CHAR(6) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacpped  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPPED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPPED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPPED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPPED_SR FOR SACPPED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPPED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPITE ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpite')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPITE')
        matriz:='iden  CHAR(3) '
        matriz := matriz + ',flag  CHAR(1) '
        matriz := matriz + ',coditem  CHAR(10) '
        matriz := matriz + ',codpedido  CHAR(10) '
        matriz := matriz + ',itempock  CHAR(10) '
        matriz := matriz + ',codprod  CHAR(13) '
        matriz := matriz + ',qtdped  DECIMAL(14,4) '
        matriz := matriz + ',qtdsld  DECIMAL(14,4) '
        matriz := matriz + ',qtdemb  DECIMAL(14,4) '
        matriz := matriz + ',qtdcan  DECIMAL(14,4) '
        matriz := matriz + ',vlrunit  DECIMAL(14,4) '
        matriz := matriz + ',ipi  DECIMAL(14,4) '
        matriz := matriz + ',desconto  DECIMAL(14,4) '
        matriz := matriz + ',formpg  CHAR(10) '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',dat_proc  DATE '
        matriz := matriz + ',processo  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacpite  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPITE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPITE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPITE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPITE_SR FOR SACPITE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPITE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='campo  CHAR(200) '
matriz := matriz + ',data_proc  DATE '
matriz := matriz + ',oper  CHAR(3) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPALM ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpalm')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPALM')
        //DBCREATE('sacpalm  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPALM",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPALM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPALM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPALM_SR FOR SACPALM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPALM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPALM1')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpalm1')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPALM1')
        //DBCREATE('sacpalm1  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPALM1",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPALM1 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPALM1 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPALM1_SR FOR SACPALM1 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPALM1, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='id_usuario  CHAR(60) '
matriz := matriz + ',id_cliente CHAR(60) '
matriz := matriz + ',data  DATE '
matriz := matriz + ',obs  CHAR(70) '
matriz := matriz + ',tipo_operacao   CHAR(70) '
matriz := matriz + ',id_pagamento    CHAR(70) '
matriz := matriz + ',valor_desconto  DECIMAL(15,2) '
matriz := matriz + ',total_pedido   DECIMAL(15,2) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCBPED')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccbped')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCBPED')
        //DBCREATE('saccbped  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCBPED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCBPED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCBPED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCBPED_SR FOR SACCBPED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCBPED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCBORC')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccborc')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCBORC')
        //DBCREATE('saccborc  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCBORC",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCBORC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCBORC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCBORC_SR FOR SACCBORC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCBORC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPCLI ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpcli')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACPCLI   ')
        matriz:='iden  CHAR(3) '
        matriz := matriz + ',flag  CHAR(1) '
        matriz := matriz + ',cod_cli INTEGER '
        matriz := matriz + ',cod_pock  CHAR(5) '
        matriz := matriz + ',razao  CHAR(40) '
        matriz := matriz + ',nome  CHAR(40) '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',insc  CHAR(19) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz + ',endereco  CHAR(35) '
        matriz := matriz + ',compl  CHAR(35) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',codcid  CHAR(4) '
        matriz := matriz + ',rota  CHAR(50) '
        matriz := matriz + ',ddd  CHAR(5) '
        matriz := matriz + ',tel1  CHAR(14) '
        matriz := matriz + ',tel2  CHAR(14) '
        matriz := matriz + ',fax  CHAR(14) '
        matriz := matriz + ',email  CHAR(40) '
        matriz := matriz + ',email2  CHAR(40) '
        matriz := matriz + ',ramo  CHAR(15) '
        matriz := matriz + ',situacao  CHAR(1) '
        matriz := matriz + ',prazo_pag  CHAR(9) '
        matriz := matriz + ',limite  CHAR(14) '
        matriz := matriz + ',media  CHAR(1) '      // 06.01.2004
        matriz := matriz + ',pri_comp  CHAR(8) '
        matriz := matriz + ',ult_comp  CHAR(8) '
        matriz := matriz + ',modo  CHAR(10) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacpcli  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPCLI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPCLI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPCLI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPCLI_SR FOR SACPCLI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPCLI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACHIST ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sachist')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACHIST   ')
        matriz:='data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',codcli  CHAR(5) '
        matriz := matriz + ',descricao  CHAR(60) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sachist  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACHIST",,.f.)
        sr_getconnection():exec("CREATE TABLE SACHIST ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACHIST ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACHIST_SR FOR SACHIST ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACHIST, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACOBS  ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacobs')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACOBS    ')
        matriz:='obs  CHAR(60) '
        matriz := matriz + ',cod_obs  CHAR(2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacobs  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACOBS",,.f.)
        sr_getconnection():exec("CREATE TABLE SACOBS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACOBS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACOBS_SR FOR SACOBS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACOBS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> TEXTO   ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('texto')
        matriz:='data  DATE '
        matriz := matriz + ',nome  CHAR(10) '
        matriz := matriz + ',texto  BLOB SUB_TYPE 1 SEGMENT SIZE 80 '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('texto  matsen,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR TEXTO",,.f.)
        sr_getconnection():exec("CREATE TABLE TEXTO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE TEXTO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER TEXTO_SR FOR TEXTO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( TEXTO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        IF ! AbriArq('texto','tex');RETURN NIL;ENDIF
        IF LASTREC() = 0
                IF ! ADIREG()
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        CLOSE sen
                        RETURN .T.
                ENDIF
                tex-> nome := '<DEFAULT>'
                tex-> data := mdata_sis
                COMMIT
                UNLOCK
        ENDIF
        CLOSE tex
ENDIF
matriz:='empresa  CHAR(3) '
matriz := matriz + ',tipo_nota  CHAR(1) '
matriz := matriz + ',documento  CHAR(10) '
matriz := matriz + ',conjunta  CHAR(8) '
matriz := matriz + ',serie  CHAR(4) '
matriz := matriz + ',modelo  CHAR(2) '
matriz := matriz + ',num_ecf  CHAR(10) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',emissao  DATE '
matriz := matriz + ',gru_sub  CHAR(5) '
matriz := matriz + ',codigo  CHAR(5) '
matriz := matriz + ',produto  CHAR(40) '
matriz := matriz + ',especie  CHAR(4) '
matriz := matriz + ',cod_fab  CHAR(4) '
matriz := matriz + ',fabrica  CHAR(40) '
matriz := matriz + ',unidade  CHAR(2) '
matriz := matriz + ',data_s_e  DATE '
matriz := matriz + ',ent_sai  CHAR(1) '
matriz := matriz + ',quantd  DECIMAL(12,3) '
matriz := matriz + ',pr_venda  DECIMAL(10,4) '
matriz := matriz + ',vl_vend  DECIMAL(10,4) '
matriz := matriz + ',vl_fatura  DECIMAL(10,4) '
matriz := matriz + ',pr_unit  DECIMAL(10,4) '
matriz := matriz + ',cust_mer  DECIMAL(10,4) '
matriz := matriz + ',vl_merc  DECIMAL(10,4) '
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',cod_oper  CHAR(3) '
matriz := matriz + ',comissao  DECIMAL(6,2) '
matriz := matriz + ',montador  CHAR(3) '
matriz := matriz + ',montador1  CHAR(3) '
matriz := matriz + ',cod_cli INTEGER '
matriz := matriz + ',cliente  CHAR(40) '
matriz := matriz + ',cid_cli  CHAR(20) '
matriz := matriz + ',uf_cli  CHAR(2) '
matriz := matriz + ',insc_cli  CHAR(14) '
matriz := matriz + ',cgc_cli  CHAR(14) '
matriz := matriz + ',cpf_cli  CHAR(14) '
matriz := matriz + ',icm  DECIMAL(10,2) '
matriz := matriz + ',icm_f  DECIMAL(10,5) '
matriz := matriz + ',icm_sub  DECIMAL(10,5) '
matriz := matriz + ',vlr_icmsub  DECIMAL(12,5) '
matriz := matriz + ',base_icmsu  DECIMAL(12,5) '
matriz := matriz + ',desc_icm  DECIMAL(12,5) '
matriz := matriz + ',dia1  CHAR(2) '
matriz := matriz + ',dia2  CHAR(2) '
matriz := matriz + ',dia3  CHAR(2) '
matriz := matriz + ',frete  DECIMAL(10,2) '
matriz := matriz + ',encargo_f  DECIMAL(10,2) '
matriz := matriz + ',disp_asse  DECIMAL(10,2) '
matriz := matriz + ',desc1  DECIMAL(10,2) '
matriz := matriz + ',desc2  DECIMAL(10,2) '
matriz := matriz + ',desc3  DECIMAL(10,2) '
matriz := matriz + ',ipi_aliq  DECIMAL(10,2) '
matriz := matriz + ',ipi  DECIMAL(10,2) '
matriz := matriz + ',peso  DECIMAL(8,3) '
matriz := matriz + ',peso_liq  DECIMAL(8,3) '
matriz := matriz + ',alimento  CHAR(1) '
matriz := matriz + ',bebida  DECIMAL(6,2) '
matriz := matriz + ',tipo  CHAR(2) '
matriz := matriz + ',isento  CHAR(1) '
matriz := matriz + ',sittrib  CHAR(4) '
matriz := matriz + ',tp_venda  CHAR(2) '
matriz := matriz + ',cond_vezes  CHAR(2) '
matriz := matriz + ',cond_intev  CHAR(2) '
matriz := matriz + ',cod_nat  CHAR(5) '
matriz := matriz + ',chassis  CHAR(20) '
matriz := matriz + ',descri1  CHAR(60) '
matriz := matriz + ',descri2  CHAR(60) '
matriz := matriz + ',descri3  CHAR(60) '
matriz := matriz + ',descri4  CHAR(60) '
matriz := matriz + ',descri5  CHAR(60) '
matriz := matriz + ',cancel  CHAR(1) '
matriz := matriz + ',obs1  CHAR(60) '
matriz := matriz + ',obs2  CHAR(60) '
matriz := matriz + ',obs3  CHAR(60) '
matriz := matriz + ',obs4  CHAR(60) '
matriz := matriz + ',obs5  CHAR(60) '
matriz := matriz + ',obs6  CHAR(60) '
matriz := matriz + ',cod_nota  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
//IF mdbf = NIL .AND. ! SR_EXISTTABLE(m_indiv[1,3]+'sacmovnt.dbf')
//        DBCREATE(mcaminho+'sacmovnt.dbf  matriz)
//ENDIF

//ERASE (ALLTRIM(m_indiv[1,6])+'sacmovcn')
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOVCN')

IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmovcn')
        //DBCREATE('sacmovcn  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOVCN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOVCN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOVCN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOVCN_SR FOR SACMOVCN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOVCN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOVB ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmovb')
        //DBCREATE('sacmovb  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOVB",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOVB ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOVB ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOVB_SR FOR SACMOVB ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOVB, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
****************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCOMI ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccomi ')
        matriz:='Documento  CHAR(10) '
        matriz := matriz + ',Cliente  CHAR(46) '
        matriz := matriz + ',c_ipi  DECIMAL(14,2) '
        matriz := matriz + ',s_ipi  DECIMAL(14,2) '
        matriz := matriz + ',ipi  DECIMAL(14,2) '
        matriz := matriz + ',Valor  DECIMAL(14,2) '
        matriz := matriz + ',Venc  DATE '
        matriz := matriz + ',Data_pag  DATE '
        matriz := matriz + ',Com  DECIMAL(14,2) '
        matriz := matriz + ',Sit  CHAR(4) '
        matriz := matriz + ',Perc_com  DECIMAL(14,2) '
        matriz := matriz + ',Vlr_Com  DECIMAL(14,2) '
        matriz := matriz + ',Represent  CHAR(30) '
        matriz := matriz + ',N_pedido  CHAR(6) '
        matriz := matriz + ',periodo  CHAR(25) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccomi  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCOMI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCOMI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCOMI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCOMI_SR FOR SACCOMI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCOMI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPERF ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacperf ')
        matriz:='fornecedor  CHAR(40) '
        matriz := matriz + ',cnpj  CHAR(14) '
        matriz := matriz + ',mat_prima  CHAR(40) '
        matriz := matriz + ',c_fiscal  CHAR(10) '
        matriz := matriz + ',quantd  DECIMAL(12,2) '
        matriz := matriz + ',vl_unit  DECIMAL(12,2) '
        matriz := matriz + ',ipi  DECIMAL(12,2) '
        matriz := matriz + ',vl_total  DECIMAL(12,2) '
        matriz := matriz + ',data  DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacperf  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPERF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPERF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPERF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPERF_SR FOR SACPERF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPERF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSINCL')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacsincl ')
        DEVPOS(24,18);DEVOUT('SACSINCL  =>')
        matriz:='codigo  CHAR(5) '
        matriz := matriz + ',cliente  CHAR(40) '
        matriz := matriz + ',cnpj_cpf  CHAR(14) '
        matriz := matriz + ',inscricao  CHAR(19) '
        matriz := matriz + ',quantidade  DECIMAL(12,2) '
        matriz := matriz + ',total  DECIMAL(12,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacsincl  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSINCL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSINCL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSINCL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSINCL_SR FOR SACSINCL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSINCL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACNOTP ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacnotp ')
        matriz:='data_ped  DATE '
        matriz := matriz + ',numero  CHAR(6) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacnotp  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNOTP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNOTP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNOTP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNOTP_SR FOR SACNOTP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNOTP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTPED ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sactped')
        matriz:='pempresa  CHAR(3) '
        matriz := matriz + ',pnum_ped  CHAR(6) '
        matriz := matriz + ',ptermina  CHAR(10) '
        matriz := matriz + ',pdat_ped  DATE '
        matriz := matriz + ',pgru_sub  CHAR(5) '
        matriz := matriz + ',pcod_merc  CHAR(5) '
        matriz := matriz + ',pmerc  CHAR(40) '
        matriz := matriz + ',punidade  CHAR(2) '
        matriz := matriz + ',pespecie  CHAR(4) '
        matriz := matriz + ',penvelope  CHAR(10) '     //placa do carro
        matriz := matriz + ',ppeso  DECIMAL(8,3) '
        matriz := matriz + ',ppeso_liq  DECIMAL(8,3) '
        matriz := matriz + ',pgramatura  DECIMAL(9,3) '     //VOLUME
        matriz := matriz + ',pquantd  DECIMAL(12,3) '
        matriz := matriz + ',ppre_dig  DECIMAL(12,4) '
        matriz := matriz + ',pvlr_fat  DECIMAL(12,4) '
        matriz := matriz + ',ppr_venda1  DECIMAL(12,4) '
        matriz := matriz + ',ppre_venda  DECIMAL(12,4) '
        matriz := matriz + ',pcust_real  DECIMAL(12,4) '
        matriz := matriz + ',pcust_merc  DECIMAL(12,4) '
        matriz := matriz + ',pcod_cli INTEGER '
        matriz := matriz + ',pcgc  CHAR(14) '
        matriz := matriz + ',pcpf  CHAR(11) '
        matriz := matriz + ',pplaca  CHAR(8) '
        matriz := matriz + ',pcarro  CHAR(20) '
        matriz := matriz + ',pmodelo  CHAR(20) '       // 30.07.2002
        matriz := matriz + ',pkm  CHAR(10) '           // 30.07.2002
        matriz := matriz + ',pcod_fab  CHAR(4) '
        matriz := matriz + ',pfabrica  CHAR(40) '
        matriz := matriz + ',pcod_vend  CHAR(3) '
        matriz := matriz + ',pvendedor  CHAR(30) '
        matriz := matriz + ',pcod_oper  CHAR(3) '
        matriz := matriz + ',pcomi_oper  DECIMAL(6,2) '
        matriz := matriz + ',pmontador  CHAR(3) '
        matriz := matriz + ',pcom_mont  DECIMAL(6,2) '
        matriz := matriz + ',pmontador1  CHAR(3) '
        matriz := matriz + ',pdesc  DECIMAL(7,2) '          //09.08.2002
        matriz := matriz + ',pvlr_pres  DECIMAL(12,2) '      //30.07.2001
        matriz := matriz + ',pcod_fin  CHAR(3) '       //30.07.2001
        matriz := matriz + ',pcond_veze  CHAR(3) '
        matriz := matriz + ',pcond_intev  CHAR(74) '
        matriz := matriz + ',ptp_vend  CHAR(2) '
        matriz := matriz + ',pvlr_ent  DECIMAL(12,2) '      //29.07.2005
        matriz := matriz + ',phora  CHAR(8) '
        matriz := matriz + ',palimento  CHAR(1) '
        matriz := matriz + ',ppag  CHAR(1) '
        matriz := matriz + ',pdatapag  DATE '
        matriz := matriz + ',pisento  CHAR(1) '
        matriz := matriz + ',ppromocao  DECIMAL(7,2) '
        matriz := matriz + ',pcomissao  DECIMAL(6,2) '
        matriz := matriz + ',pcomi_mot  DECIMAL(6,2) '
        matriz := matriz + ',pprazo  DECIMAL(3,0) '
        matriz := matriz + ',pbebida  DECIMAL(6,2) '
        matriz := matriz + ',pipi  DECIMAL(6,2) '
        matriz := matriz + ',pobs_prod  CHAR(40) '
        matriz := matriz + ',phora_pg  CHAR(8) '
        matriz := matriz + ',pautoriz  CHAR(3) '
        matriz := matriz + ',palt_ope  CHAR(3) '
        matriz := matriz + ',pentreg  CHAR(1) '
        matriz := matriz + ',pent_por  CHAR(3) '
        matriz := matriz + ',pent_dat  DATE '
        matriz := matriz + ',pexpedi  CHAR(1) '
        matriz := matriz + ',pexp_por  CHAR(3) '
        matriz := matriz + ',pexp_dat  DATE '

        matriz := matriz + ',pdesc_merc  DECIMAL(6,2) '
        matriz := matriz + ',pstat_item  CHAR(1) '
        matriz := matriz + ',pind_icms  CHAR(2) '
        matriz := matriz + ',psit_trib  CHAR(1) '

        matriz := matriz + ',chassis  CHAR(20) '
        matriz := matriz + ',descri1  CHAR(60) '
        matriz := matriz + ',descri2  CHAR(60) '
        matriz := matriz + ',descri3  CHAR(60) '
        matriz := matriz + ',descri4  CHAR(60) '
        matriz := matriz + ',descri5  CHAR(60) '
        matriz := matriz + ',pobs1  CHAR(40) '
        matriz := matriz + ',pobs2  CHAR(40) '
        matriz := matriz + ',pobs3  CHAR(40) '
        matriz := matriz + ',pobs4  CHAR(40) '
        matriz := matriz + ',pcod_tran  CHAR(4) '      //04.02.2002
        matriz := matriz + ',pmotivo  CHAR(40) '
        matriz := matriz + ',plocal  CHAR(2) '
        matriz := matriz + ',pproducao  CHAR(1) '       //27.04.2000
        matriz := matriz + ',pos  CHAR(6) '             //09.08.2002
        matriz := matriz + ',pnum_pdv  CHAR(4) '
        matriz := matriz + ',pnum_cup  CHAR(6) '
        matriz := matriz + ',pboleto  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sactped  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTPED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTPED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTPED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTPED_SR FOR SACTPED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTPED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACTPED ')
IF mdbf = NIL .AND. ! SR_EXISTINDEX("sactped")
        IF ! AbriArq('sactped','tped','E');RETURN NIL;ENDIF
        ORDCREATE('sactped','numped','tped->pnum_ped+tped->pcod_merc')
        ORDCREATE('sactped','data','DTOS(tped->pdat_ped)+tped->pnum_ped')
        ORDCREATE('sactped','pag','tped->ppag+DTOS(tped->pdat_ped)+tped->pnum_ped')
        ORDCREATE('sactped','codigo','tped->pcod_merc+DTOS(tped->pdat_ped)')
        ORDCREATE('sactped','dtpag','DTOS(tped->pdatapag)+tped->pnum_ped')
        ORDCREATE('sactped','vend','tped->pcod_vend+tped->phora+DTOS(tped->pdat_ped)')
        ORDCREATE('sactped','pagmerc','tped->ppag+tped->pcod_merc')
        tped->(DBCLOSEAREA())
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCONS ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccons')
        matriz:='cod_barr  CHAR(13) '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',unidade  CHAR(2) '
        matriz := matriz + ',especie  CHAR(4) '
        matriz := matriz + ',peso_liq  DECIMAL(8,3) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',alimento  CHAR(1) '
        matriz := matriz + ',p_lucro  DECIMAL(7,2) '
        matriz := matriz + ',promocao  DECIMAL(7,2) '
        matriz := matriz + ',disp  CHAR(1) '
        matriz := matriz + ',livre_desc  CHAR(1) '
        matriz := matriz + ',comissao  DECIMAL(6,2) '
        matriz := matriz + ',est_min  DECIMAL(12,2) '
        matriz := matriz + ',est_max  DECIMAL(12,2) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',fabrica  CHAR(40) '
        matriz := matriz + ',dat_ult_s  DATE '
        matriz := matriz + ',dat_ult_e  DATE '
        matriz := matriz + ',a_pr_unit  DECIMAL(12,4) '
        matriz := matriz + ',a_vlr_merc  DECIMAL(12,4) '
        matriz := matriz + ',a_cust_mer  DECIMAL(12,4) '
        matriz := matriz + ',a_cust_rea  DECIMAL(12,4) '
        matriz := matriz + ',a_pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',a_pr_medio  DECIMAL(12,4) '
        matriz := matriz + ',pr_unit  DECIMAL(12,4) '
        matriz := matriz + ',vlr_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_real  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',pr_medio  DECIMAL(12,4) '
        matriz := matriz + ',varejo  DECIMAL(10,2) '
        matriz := matriz + ',ul_alt_pr  DATE '
        matriz := matriz + ',opera_pr  CHAR(3) '
        matriz := matriz + ',tipo_op  CHAR(2) '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',saldo_fis  DECIMAL(12,2) '
        matriz := matriz + ',saldo_mer  DECIMAL(12,2) '
        matriz := matriz + ',saldo_av  DECIMAL(12,2) '
        matriz := matriz + ',saldo_comp  DECIMAL(12,2) '
        matriz := matriz + ',icm  DECIMAL(10,2) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',bebida  DECIMAL(6,2) '
        matriz := matriz + ',icm_sub  DECIMAL(12,4) '
        matriz := matriz + ',ipi  DECIMAL(12,4) '
        matriz := matriz + ',cod_fis  CHAR(10) '
        matriz := matriz + ',local  CHAR(4) '
        matriz := matriz + ',gramatura  DECIMAL(8,2) '
        matriz := matriz + ',fatconv  DECIMAL(8,2) '
        matriz := matriz + ',doc_ent_a  CHAR(10) '
        matriz := matriz + ',doc_ent  CHAR(10) '
        matriz := matriz + ',envelope  CHAR(10) '
        matriz := matriz + ',desc_merc  DECIMAL(6,2) '
** CAMPOS FISCAIS
        matriz := matriz + ',iat  CHAR(1) '
        matriz := matriz + ',ind_icms  CHAR(2) '
        matriz := matriz + ',sit_trib  CHAR(1) '
**
        matriz := matriz + ',dolar  CHAR(1) '
        matriz := matriz + ',aplic0  CHAR(60) '
        matriz := matriz + ',aplic1  CHAR(60) '
        matriz := matriz + ',aplic2  CHAR(60) '
        matriz := matriz + ',aplic3  CHAR(60) '
        matriz := matriz + ',aplic4  CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccons  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCONS",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCONS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCONS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCONS_SR FOR SACCONS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCONS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACMOVTRA')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmovtra')
        matriz:='data  DATE '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',forn  CHAR(40) '
        matriz := matriz + ',km  DECIMAL(12,0) '
        matriz := matriz + ',quantd  DECIMAL(12,2) '
        matriz := matriz + ',valor  DECIMAL(12,2) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',motorista  CHAR(30) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacmovtra  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOVTRA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOVTRA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOVTRA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOVTRA_SR FOR SACMOVTRA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOVTRA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCONTAG')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccontag')
        matriz:='data  DATE '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',descri  CHAR(40) '
        matriz := matriz + ',contag1  DECIMAL(15,2) '
        matriz := matriz + ',ope_cont1  CHAR(3) '
        matriz := matriz + ',data_cont1  DATE '
        matriz := matriz + ',contag2  DECIMAL(15,2) '
        matriz := matriz + ',ope_cont2  CHAR(3) '
        matriz := matriz + ',data_cont2  DATE '
        matriz := matriz + ',data_atu  DATE '
        matriz := matriz + ',ope_atu  CHAR(3) '
        matriz := matriz + ',hora_atu  CHAR(8) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('saccontag  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCONTAG",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCONTAG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCONTAG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCONTAG_SR FOR SACCONTAG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCONTAG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPRESEN')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacpresen')
        matriz:='data  DATE '
        matriz := matriz + ',codcli  CHAR(5) '
        matriz := matriz + ',cod_pres  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',descri  CHAR(40) '
        matriz := matriz + ',qtd  DECIMAL(15,2) '
        matriz := matriz + ',data_comp  DATE '
        matriz := matriz + ',num_ped  CHAR(6) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',valor  DECIMAL(15,3) '
        matriz := matriz + ',data_cas  DATE '
        matriz := matriz + ',excluido  DATE '
        matriz := matriz + ',prioridade  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacpresen  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPRESEN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPRESEN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPRESEN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPRESEN_SR FOR SACPRESEN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPRESEN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACPROFI')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacprofi')
        matriz:='cod_profi  CHAR(5) '
        matriz := matriz + ',profi  CHAR(30) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacprofi  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACPROFI",,.f.)
        sr_getconnection():exec("CREATE TABLE SACPROFI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACPROFI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACPROFI_SR FOR SACPROFI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACPROFI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACENTPROD')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacentprod')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',n_pedido  CHAR(6) '
        matriz := matriz + ',cod_cli  INTEGER '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',quantd  DECIMAL(15,3) '
        matriz := matriz + ',flag  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacentprod  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACENTPROD",,.f.)
        sr_getconnection():exec("CREATE TABLE SACENTPROD ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACENTPROD ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACENTPROD_SR FOR SACENTPROD ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACENTPROD, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='cod_cli INTEGER '
matriz := matriz + ',conjuge  CHAR(40) '
matriz := matriz + ',conj_nasc  DATE '
matriz := matriz + ',conj_cpf  CHAR(11) '
matriz := matriz + ',conj_rg  CHAR(11) '
matriz := matriz + ',conj_empre  CHAR(20) '
matriz := matriz + ',conj_cargo  CHAR(15) '
matriz := matriz + ',conj_salario  DECIMAL(10,2) '
matriz := matriz + ',conj_end  CHAR(35) '
matriz := matriz + ',conj_bairro  CHAR(20) '
matriz := matriz + ',conj_cidade  CHAR(20) '
matriz := matriz + ',conj_uf  CHAR(2) '
matriz := matriz + ',conj_cep  CHAR(9) '
matriz := matriz + ',conj_fone  CHAR(14) '
matriz := matriz + ',conj_obs  CHAR(50) '

matriz := matriz + ',avalista  CHAR(40) '
matriz := matriz + ',aval_sexo  CHAR(1) '
matriz := matriz + ',aval_civil  CHAR(1) '
matriz := matriz + ',aval_nasc  DATE '
matriz := matriz + ',aval_cpf  CHAR(11) '
matriz := matriz + ',aval_rg  CHAR(11) '
matriz := matriz + ',aval_empre  CHAR(20) '
matriz := matriz + ',aval_cargo  CHAR(15) '
matriz := matriz + ',aval_salario  DECIMAL(10,2) '
matriz := matriz + ',aval_end  CHAR(35) '
matriz := matriz + ',aval_bairro  CHAR(20) '
matriz := matriz + ',aval_cidade  CHAR(20) '
matriz := matriz + ',aval_uf  CHAR(2) '
matriz := matriz + ',aval_cep  CHAR(9) '
matriz := matriz + ',aval_fone  CHAR(14) '
matriz := matriz + ',aval_obs  CHAR(50) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccliaux')
        DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCLIAUX')
        //DBCREATE('saccliaux  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLIAUX",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLIAUX ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLIAUX ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLIAUX_SR FOR SACCLIAUX ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLIAUX, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSERIAL')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacserial')
        matriz:='cod_prod  CHAR(5) '
        matriz := matriz + ',serial  CHAR(20) '
        matriz := matriz + ',data_incl  DATE '
        matriz := matriz + ',hora_incl  CHAR(8) '
        matriz := matriz + ',oper_incl  CHAR(3) '
        matriz := matriz + ',n_pedido  CHAR(6) '
        matriz := matriz + ',data_baix  DATE '
        matriz := matriz + ',hora_baix  CHAR(8) '
        matriz := matriz + ',oper_baix  CHAR(3) '
        matriz := matriz + ',obs_incl  CHAR(60) '
        matriz := matriz + ',obs_baix  CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacserial  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACSERIAL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSERIAL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSERIAL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSERIAL_SR FOR SACSERIAL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSERIAL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> LOGPRODUTO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('logproduto')
        matriz:='data_sis  DATE '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',cod_prod  CHAR(5) '
        matriz := matriz + ',quantd  DECIMAL(12,2) '
        matriz := matriz + ',saldo_ant  DECIMAL(12,2) '
        matriz := matriz + ',saldo_pos  DECIMAL(12,2) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',prog  CHAR(15) '
        matriz := matriz + ',terminal  CHAR(15) '
        matriz := matriz + ',processo  CHAR(30) '
        matriz := matriz + ',ent_sai  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0)'
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',preco_v  DECIMAL(12,2) '
        matriz := matriz + ',preco_c  DECIMAL(12,2) '
        sr_getconnection():exec("CREATE TABLE LOGPRODUTO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> LOGPROD_FIS')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('LOGPROD_FIS')
        matriz:='data_sis  DATE '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',cod_prod  CHAR(5) '
        matriz := matriz + ',quantd  DECIMAL(12,2) '
        matriz := matriz + ',saldo_ant  DECIMAL(12,2) '
        matriz := matriz + ',saldo_pos  DECIMAL(12,2) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',prog  CHAR(15) '
        matriz := matriz + ',terminal  CHAR(15) '
        matriz := matriz + ',processo  CHAR(30) '
        matriz := matriz + ',ent_sai  CHAR(1) '
        matriz := matriz + ',preco_v  DECIMAL(12,2) '
        matriz := matriz + ',preco_c  DECIMAL(12,2) '
        sr_getconnection():exec("CREATE TABLE LOGPROD_FIS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACBANCO')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacbanco')
        matriz:='cod_banco  CHAR(3) '
        matriz := matriz + ',nome_banco  CHAR(30) '
        matriz := matriz + ',num_banco  CHAR(3) '
        matriz := matriz + ',agencia  CHAR(15) '
        matriz := matriz + ',c_c  CHAR(15) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',cod_trans CHAR(8) '
        matriz := matriz + ',acess_escr  CHAR(20) '
        matriz := matriz + ',dv_cc  CHAR(1) '
        matriz := matriz + ',dv_ag  CHAR(1) '
        matriz := matriz + ',cod_cedente  CHAR(10) '
        matriz := matriz + ',diasprot  DECIMAL(3,0) '
        matriz := matriz + ',local_pg  CHAR(120) '
        matriz := matriz + ',despesa  DECIMAL(12,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',carteira  CHAR(3) '
        matriz := matriz + ',n_conv    CHAR(12) '
        matriz := matriz + ',dig_ag_cc  CHAR(8) '
        matriz := matriz + ',modalidade  CHAR(8) '
        //DBCREATE('sacbanco  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACBANCO",,.f.)
        sr_getconnection():exec("CREATE TABLE SACBANCO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACBANCO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACBANCO_SR FOR SACBANCO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACBANCO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCLIPROCE ')
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACCLIPROCE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCLIPROCE   ')
        matriz:='data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',codcli  CHAR(5) '
        matriz := matriz + ',tipo  CHAR(2) '
        matriz := matriz + ',documento  CHAR(12) '
        matriz := matriz + ',descricao  CHAR(60) '
        matriz := matriz + ',portador  CHAR(20) '
        matriz := matriz + ',previsao  DATE '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('SACCLIPROCE  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLIPROCE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLIPROCE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLIPROCE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLIPROCE_SR FOR SACCLIPROCE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLIPROCE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACCLIDEPE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCLIDEPE   ')
        matriz:='cod_cli INTEGER '
        matriz := matriz + ',dt_ob_cli  DATE '
        matriz := matriz + ',dependente  CHAR(40) '
        matriz := matriz + ',data_nasc  DATE '
        matriz := matriz + ',parentesco  CHAR(10) '
        matriz := matriz + ',data_ob  DATE '
        matriz := matriz + ',oper_mov  CHAR(3) '
        matriz := matriz + ',data_mov  DATE '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz + ',cod_dep  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('SACCLIDEPE  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCLIDEPE",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCLIDEPE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCLIDEPE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCLIDEPE_SR FOR SACCLIDEPE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCLIDEPE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('INVENTARIO')
        DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> INVENTARIO ')
        matriz:='mes_ano  CHAR(5) '
        matriz := matriz + ',data_atu  DATE '
        matriz := matriz + ',empresa  CHAR(3) '
        matriz := matriz + ',cod_barr  CHAR(14) '
        matriz := matriz + ',ref  CHAR(13) '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',tipo_merc  CHAR(1) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',peso_liq  DECIMAL(8,3) '
        matriz := matriz + ',peso  DECIMAL(8,3) '
        matriz := matriz + ',est_min  DECIMAL(12,3) '
        matriz := matriz + ',est_max  DECIMAL(12,3) '
        matriz := matriz + ',cod_fab  CHAR(4) '
        matriz := matriz + ',pr_unit  DECIMAL(12,4) '
        matriz := matriz + ',vlr_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_merc  DECIMAL(12,4) '
        matriz := matriz + ',cust_real  DECIMAL(12,4) '
        matriz := matriz + ',pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',saldo_fis  DECIMAL(12,3) '
        matriz := matriz + ',saldo_mer  DECIMAL(12,3) '
        matriz := matriz + ',saldo_est  DECIMAL(12,3) '
        matriz := matriz + ',icm  DECIMAL(10,2) '
        matriz := matriz + ',isento  CHAR(1) '
        matriz := matriz + ',bebida  DECIMAL(6,2) '
        matriz := matriz + ',icm_sub  DECIMAL(12,4) '
        matriz := matriz + ',icm_sub2  DECIMAL(12,4) '
        matriz := matriz + ',ipi  DECIMAL(12,4) '
        matriz := matriz + ',cod_clf  CHAR(2) '
        matriz := matriz + ',cod_fis  CHAR(10) '
        matriz := matriz + ',sittrib  CHAR(4) '
        matriz := matriz + ',prodepe  CHAR(2) '
        matriz := matriz + ',nbm  CHAR(8) '
        matriz := matriz + ',desc_icm  CHAR(1) '
        matriz := matriz + ',desc_icm1  DECIMAL(12,4) '
        matriz := matriz + ',local  CHAR(4) '
        matriz := matriz + ',gramatura  DECIMAL(9,3) '
        matriz := matriz + ',prazo  DECIMAL(3,0) '
        matriz := matriz + ',fatconv  DECIMAL(8,2) '
        matriz := matriz + ',envelope  CHAR(10) '
        matriz := matriz + ',dolar  CHAR(1) '
        matriz := matriz + ',aplic0  CHAR(60) '
        matriz := matriz + ',aplic1  CHAR(60) '
        matriz := matriz + ',aplic2  CHAR(60) '
        matriz := matriz + ',aplic3  CHAR(60) '
        matriz := matriz + ',aplic4  CHAR(60) '
        matriz := matriz + ',descri  CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('inventario  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR INVENTARIO",,.f.)
        sr_getconnection():exec("CREATE TABLE INVENTARIO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE INVENTARIO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER INVENTARIO_SR FOR INVENTARIO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( INVENTARIO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('FORMULA')
        DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> FORMULA ')
        matriz:='cod_merc  CHAR(5) '
        matriz := matriz + ',cod_merc1  CHAR(5) '
        matriz := matriz + ',quantidade  DECIMAL(14,3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('formula  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR FORMULA",,.f.)
        sr_getconnection():exec("CREATE TABLE FORMULA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE FORMULA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER FORMULA_SR FOR FORMULA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( FORMULA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('CAM_DBA')
        matriz:='caminho  CHAR(60) '
        matriz := matriz + ',nome  CHAR(40) '
        matriz := matriz + ',atu_cli  CHAR(1) '
        matriz := matriz + ',atu_prod  CHAR(1) '
        matriz := matriz + ',atu_forn  CHAR(1) '
        matriz := matriz + ',atu_sen  CHAR(1) '
        matriz := matriz + ',cam_bm  CHAR(40) '
        matriz := matriz + ',cons_dupr  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',num_nota  CHAR(1) '
        matriz := matriz + ',cad_cli  CHAR(1) '
        //DBCREATE('cam_dba  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR CAM_DBA",,.f.)
        sr_getconnection():exec("CREATE TABLE CAM_DBA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE CAM_DBA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER CAM_DBA_SR FOR CAM_DBA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( CAM_DBA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('TABLOIDE')
        matriz:='codigo      CHAR(5) '
        matriz := matriz + ',nome        CHAR(30) '
        matriz := matriz + ',data_cad    DATE '
        matriz := matriz + ',data_ini    DATE '
        matriz := matriz + ',data_final  DATE '
        matriz := matriz + ',cod_merc    CHAR(5) '
        matriz := matriz + ',merc        CHAR(40) '
        matriz := matriz + ',cod_fab     CHAR(4) '
        matriz := matriz + ',fabrica     CHAR(40) '
        matriz := matriz + ',pr_ant      DECIMAL(15,4) '
        matriz := matriz + ',pr_tab      DECIMAL(15,4)  '
        matriz := matriz + ',desc_tab    DECIMAL(15,4)  '
        matriz := matriz + ',cod_oper    CHAR(3) '
        matriz := matriz + ',inicio      DATE '
        matriz := matriz + ',final       DATE '
        matriz := matriz + ',cod_barr    CHAR(14) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE("TABLOIDE",matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR TABLOIDE",,.f.)
        sr_getconnection():exec("CREATE TABLE TABLOIDE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE TABLOIDE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER TABLOIDE_SR FOR TABLOIDE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( TABLOIDE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACNO_BOLCX')
        matriz:='data  DATE '
	matriz := matriz + ',numero  CHAR(6) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE("SACNO_BOLCX",matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNO_BOLCX",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNO_BOLCX ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNO_BOLCX ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNO_BOLCX_SR FOR SACNO_BOLCX ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNO_BOLCX, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACREC_NF')
        matriz:='num_nf      CHAR(6) '
        matriz := matriz + ',cod_forn    CHAR(4) '
        matriz := matriz + ',cod_barra   CHAR(14) '
        matriz := matriz + ',cod_merc    CHAR(5) '
        matriz := matriz + ',descricao   CHAR(40) '
        matriz := matriz + ',quantd      DECIMAL(15,3)  '
        matriz := matriz + ',avaria      DECIMAL(15,3)  '
        matriz := matriz + ',operador    CHAR(3) '
        matriz := matriz + ',data_rec    DATE '
        matriz := matriz + ',hora_rec    CHAR(8) '
        matriz := matriz + ',oper_cad    CHAR(3) '
        matriz := matriz + ',data_cad    DATE '
        matriz := matriz + ',hora_cad    CHAR(8) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE("SACREC_NF",matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACREC_NF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACREC_NF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACREC_NF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACREC_NF_SR FOR SACREC_NF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACREC_NF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACNO_DUPR')
	matriz := 'numero  CHAR(6) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE("SACNO_DUPR",matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACNO_DUPR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNO_DUPR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACNO_DUPR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACNO_DUPR_SR FOR SACNO_DUPR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNO_DUPR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACNCM')
        matriz:='codigo  CHAR(8) '
	matriz := matriz + ',descri  CHAR(512) '
	matriz := matriz + ',perc1  DECIMAL(7,2) '
	matriz := matriz + ',perc2  DECIMAL(7,2) '
	matriz := matriz + ',perc3  DECIMAL(7,2) '
	matriz := matriz + ',ex  CHAR(2) '
	matriz := matriz + ',tabela  CHAR(2) '
	matriz := matriz + ',aliqnac  DECIMAL(7,2) '
	matriz := matriz + ',aliqimp  DECIMAL(7,2) '
	matriz := matriz + ',cest  CHAR(7) '
        //matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        //matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE("SACNCM",matriz,'SQLRDD')
        //sr_getconnection():exec("CREATE GENERATOR SACNCM",,.f.)
        sr_getconnection():exec("CREATE TABLE SACNCM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        //sr_getconnection():exec("ALTER TABLE SACNCM ADD UNIQUE (SR_RECNO)",,.f.)
        //sr_getconnection():exec("CREATE TRIGGER SACNCM_SR FOR SACNCM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACNCM, 1); end",,.f.)
        //sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('ESTOQUE')
        matriz:='data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',cod_barr  CHAR(14) '
        matriz := matriz + ',gru_sub  CHAR(5) '
        matriz := matriz + ',cod_merc  CHAR(5) '
        matriz := matriz + ',merc  CHAR(40) '
        matriz := matriz + ',unidade  CHAR(3) '
        matriz := matriz + ',pr_venda  DECIMAL(12,4) '
        matriz := matriz + ',saldo  DECIMAL(12,3) '
        matriz := matriz + ',CHV_CRIPT  CHAR(256) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('ESTOQUE  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR ESTOQUE",,.f.)
        sr_getconnection():exec("CREATE TABLE ESTOQUE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE ESTOQUE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER ESTOQUE_SR FOR ESTOQUE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( ESTOQUE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('PRODUTO')
        matriz:='COD_BARR  CHAR(14) '
        matriz := matriz + ',GRU_SUB  CHAR(5) '
        matriz := matriz + ',COD_MERC  CHAR(5) NOT NULL'
        matriz := matriz + ',MERC  CHAR(40) '
        matriz := matriz + ',UNIDADE  CHAR(3) '
        matriz := matriz + ',PR_VENDA  DECIMAL(14,2) '
        matriz := matriz + ',SALDO  DECIMAL(13,3) '
        matriz := matriz + ',IAT  CHAR(1) '
        matriz := matriz + ',IPPT  CHAR(1) '
        matriz := matriz + ',CST  CHAR(4) '
        matriz := matriz + ',ISENTO  CHAR(1) '
        matriz := matriz + ',NCM  CHAR(8) '
        matriz := matriz + ',ALIQ  DECIMAL(9,2) '
        matriz := matriz + ',CHV_CRIPT  CHAR(256) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('PRODUTO  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR PRODUTO",,.f.)
        sr_getconnection():exec("CREATE TABLE PRODUTO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE PRODUTO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE PRODUTO ADD CONSTRAINT PRODUTO_PK PRIMARY KEY (COD_MERC)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER PRODUTO_SR FOR PRODUTO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( PRODUTO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
/*
********************************************************************
matriz:='NUMERO_FAB    CHAR(20) '
matriz := matriz + ',MF_ADICIONAL  CHAR(1) '
matriz := matriz + ',TIPO_ECF      CHAR(7) '
matriz := matriz + ',MARCA_ECF     CHAR(20) '
matriz := matriz + ',MODELO_ECF    CHAR(20) '
matriz := matriz + ',VERSAO_SB     CHAR(10) '
matriz := matriz + ',DATA_INSTSB   CHAR(8) '
matriz := matriz + ',HORA_INSTSB   CHAR(8) '
matriz := matriz + ',NUM_SEQ_ECF   CHAR(3) '
matriz := matriz + ',CNPJ_USU  CHAR(14) '
matriz := matriz + ',INSC_USU  CHAR(14) '
matriz := matriz + ',CNPJ_DESENV  CHAR(14) '
matriz := matriz + ',INSC_MUNDESEN  CHAR(14) '
matriz := matriz + ',DENOMI_DESEN  CHAR(40) '
matriz := matriz + ',NOME_PAF  CHAR(40) '
matriz := matriz + ',VERSAO_PAF  CHAR(10) '
matriz := matriz + ',COD_MD5_PAF  CHAR(32) '
matriz := matriz + ',DATA_INI  CHAR(8) '
matriz := matriz + ',DATA_FINAL  CHAR(8) '
matriz := matriz + ',VERSAO_ER_PAF  CHAR(4) '
matriz := matriz + ',CHV_CRIPT  CHAR(1000) '
matriz := matriz + ',INSC_ESTDESEN  CHAR(14) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R1')
        //DBCREATE('R1  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR PRODUTO",,.f.)
        sr_getconnection():exec("CREATE TABLE R1 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R1 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R1_SR FOR R1 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R1, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB  CHAR(20) '
matriz := matriz + ',MF_ADICIONAL  CHAR(1) '
matriz := matriz + ',MODELO_ECF    CHAR(20) '
matriz := matriz + ',NUMERO_USU  CHAR(2) '
matriz := matriz + ',CRZ         CHAR(6) '
matriz := matriz + ',COO         CHAR(6) '
matriz := matriz + ',CRO         CHAR(6) '
matriz := matriz + ',DATA_EMI    CHAR(8) '
matriz := matriz + ',HORA_EMI    CHAR(8) '
matriz := matriz + ',VENDA_BRUTA CHAR(14) '
matriz := matriz + ',PARAMETRO   CHAR(1) '
matriz := matriz + ',COO_INI     CHAR(6) '
matriz := matriz + ',COO_FIM     CHAR(6) '
matriz := matriz + ',DATA_MOV    DATE '
matriz := matriz + ',CHV_CRIPT   CHAR(350) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R2')
        //DBCREATE('R2  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R2 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R2 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R2_SR FOR R2 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R2, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB  CHAR(20) '
matriz := matriz + ',MF_ADICIONAL CHAR(1) '
matriz := matriz + ',MODELO_ECF   CHAR(20) '
matriz := matriz + ',NUMERO_USU   CHAR(2) '
matriz := matriz + ',CRZ          CHAR(6) '
matriz := matriz + ',TOTAL_PARCIAL CHAR(7) '
matriz := matriz + ',VALOR_ACU    CHAR(13) '
matriz := matriz + ',DATA_MOV     DATE '
matriz := matriz + ',CHV_CRIPT    CHAR(350) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R3')
        //DBCREATE('R3  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R3 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R3 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R3_SR FOR R3 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R3, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB          CHAR(20) '
matriz := matriz + ',MF_ADICIONAL        CHAR(1) '
matriz := matriz + ',MODELO_ECF          CHAR(20) '
matriz := matriz + ',NUMERO_USU          CHAR(2) '
matriz := matriz + ',CCF_CVC_CBP         CHAR(6) '
matriz := matriz + ',COO                 CHAR(6) '
matriz := matriz + ',DATA_INI            CHAR(8) '
matriz := matriz + ',SUB_TOTAL           CHAR(14) '
matriz := matriz + ',DESCONT             CHAR(13) '
matriz := matriz + ',IND_DESCONT         CHAR(1) '
matriz := matriz + ',ACRES_SUB           CHAR(13) '
matriz := matriz + ',IND_ACRESC          CHAR(1) '
matriz := matriz + ',VLR_LIQ             CHAR(14) '
matriz := matriz + ',IND_CANCEL          CHAR(1) '
matriz := matriz + ',CANCEL_ACRESC       CHAR(13) '
matriz := matriz + ',ORD_DESC_ACRE       CHAR(1) '
matriz := matriz + ',NOME_CLIENTE        CHAR(40) '
matriz := matriz + ',CNPJ_CPF            CHAR(14) '
matriz := matriz + ',DATA_MOV            DATE '
matriz := matriz + ',CHV_CRIPT           CHAR(600) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R4')
        //DBCREATE('R4  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R4 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R4 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R4_SR FOR R4 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R4, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB     CHAR(20) '
matriz := matriz + ',MF_ADICIONAL   CHAR(1) '
matriz := matriz + ',MODELO_ECF     CHAR(20) '
matriz := matriz + ',NUMERO_USU     CHAR(2) '
matriz := matriz + ',COO            CHAR(6) '
matriz := matriz + ',CCF_CVC_CBP    CHAR(6) '
matriz := matriz + ',NUM_ITEM       CHAR(3) '
matriz := matriz + ',COD_PROD       CHAR(14) '
matriz := matriz + ',DESCRICAO      CHAR(100) '
matriz := matriz + ',QUANTIDADE     CHAR(7) '
matriz := matriz + ',UNIDADE        CHAR(3) '
matriz := matriz + ',VLR_UNIT       CHAR(8) '
matriz := matriz + ',DESCON_ITEM    CHAR(8) '
matriz := matriz + ',ACRESC_ITEM    CHAR(8) '
matriz := matriz + ',VLR_LIQ        CHAR(14) '
matriz := matriz + ',TOTAL_PARCIAL  CHAR(7) '
matriz := matriz + ',IND_CANCEL     CHAR(1) '
matriz := matriz + ',QUANT_CANCEL   CHAR(7) '
matriz := matriz + ',VLR_CANCEL     CHAR(13) '
matriz := matriz + ',CANCEL_ACRES   CHAR(13) '
matriz := matriz + ',IAT            CHAR(1) '
matriz := matriz + ',IPPT           CHAR(1) '
matriz := matriz + ',CASASDECQTD  CHAR(1) '
matriz := matriz + ',CASASDECUNI  CHAR(1) '
matriz := matriz + ',DATA_MOV     DATE '
matriz := matriz + ',CHV_CRIPT      CHAR(900) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R5')
        //DBCREATE('R5  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R5 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R5 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R5_SR FOR R5 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R5, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB    CHAR(20) '
matriz := matriz + ',MF_ADICIONAL  CHAR(1) '
matriz := matriz + ',MODELO_ECF    CHAR(20) '
matriz := matriz + ',NUMERO_USU    CHAR(2) '
matriz := matriz + ',COO           CHAR(6) '
matriz := matriz + ',GNF           CHAR(6) '
matriz := matriz + ',GRG           CHAR(6) '
matriz := matriz + ',CDC           CHAR(4) '
matriz := matriz + ',DENOMICAO     CHAR(2) '
matriz := matriz + ',DATA_FINAL    CHAR(8) '
matriz := matriz + ',HORA_FINAL    CHAR(8) '
matriz := matriz + ',DATA_MOV      DATE '
matriz := matriz + ',CHV_CRIPT     CHAR(350) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R6')
        //DBCREATE('R6  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R6 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R6 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R6_SR FOR R6 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R6, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
matriz:='NUMERO_FAB    CHAR(20) '
matriz := matriz + ',MF_ADICIONAL  CHAR(1) '
matriz := matriz + ',MODELO_ECF    CHAR(20) '
matriz := matriz + ',NUMERO_USU    CHAR(2) '
matriz := matriz + ',COO           CHAR(6) '
matriz := matriz + ',CCF           CHAR(6) '
matriz := matriz + ',GNF           CHAR(6) '
matriz := matriz + ',MEIO_PAG      CHAR(15) '
matriz := matriz + ',VLR_PAGO      CHAR(13) '
matriz := matriz + ',IND_ESTORNO   CHAR(1) '
matriz := matriz + ',VLR_ESTORNO   CHAR(13) '
matriz := matriz + ',DATA_MOV      DATE '
matriz := matriz + ',CHV_CRIPT     CHAR(350) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1)'
IF mdbf = NIL .AND. ! SR_EXISTTABLE('R7')
        //DBCREATE('R7  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE R7 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE R7 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER R7_SR FOR R7 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( R7, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
********************************************************************
IF mdbf = NIL .AND. ! SR_EXISTTABLE('D1')
        matriz:='data_doc    DATE '
        matriz := matriz + ',serie       CHAR(2) '
        matriz := matriz + ',sub_serie   CHAR(2) '
        matriz := matriz + ',num_doc     CHAR(10) '
        matriz := matriz + ',cnpj_cpf    CHAR(14) '
        matriz := matriz + ',num_item     CHAR(6) '
        matriz := matriz + ',cod_item     CHAR(10) '
        matriz := matriz + ',qtd          DECIMAL(12,3) '
        matriz := matriz + ',unidade      CHAR(3) '
        matriz := matriz + ',vl_unit      DECIMAL(14,2) '
        matriz := matriz + ',vl_desc      DECIMAL(12,2) '
        matriz := matriz + ',vl_fat       DECIMAL(14,2) '
        matriz := matriz + ',tot_merc     DECIMAL(14,2) '
        matriz := matriz + ',tot_doc      DECIMAL(14,2) '
        matriz := matriz + ',tot_desc     DECIMAL(14,2) '
        matriz := matriz + ',tot_pis      DECIMAL(14,2) '
        matriz := matriz + ',tot_confis   DECIMAL(14,2) '
        matriz := matriz + ',cst          CHAR(4) '
        matriz := matriz + ',cfop         CHAR(5) '
        matriz := matriz + ',aliq_icm     DECIMAL(12,2) '
        matriz := matriz + ',CHV_CRIPT     CHAR(256) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('D1  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE TABLE D1 ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE D1 ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("CREATE TRIGGER D1_SR FOR D1 ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( D1, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
*/
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACTRM')
        matriz:='nome_trm    CHAR(30) '
        matriz := matriz + ',ip_trm      CHAR(20) '
        matriz := matriz + ',data        DATE '
        matriz := matriz + ',hora        CHAR(8) '
        matriz := matriz + ',oper        CHAR(3) '
        matriz := matriz + ',inicio      DATE '
        matriz := matriz + ',versao      CHAR(12) '
        matriz := matriz + ',hd_serial   CHAR(10) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('SACTRM  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACTRM",,.f.)
        sr_getconnection():exec("CREATE TABLE SACTRM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACTRM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACTRM_SR FOR SACTRM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACTRM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('CONTRATO')
        matriz:='CODCONT       CHAR(6) '
        matriz := matriz + ',CODCLI        CHAR(5) '
        matriz := matriz + ',ATIVO         CHAR(1) '
        matriz := matriz + ',VLRMENS       DECIMAL(12,2) '
        matriz := matriz + ',DIA_VENC      CHAR(3) '
        matriz := matriz + ',BANDA_UP      CHAR(5) '
        matriz := matriz + ',BANDA_DN      CHAR(5) '
        matriz := matriz + ',END_IP        CHAR(20) '
        matriz := matriz + ',END_MASC      CHAR(20) '
        matriz := matriz + ',END_GAT       CHAR(20) '
        matriz := matriz + ',VLRINST       DECIMAL(12,2) '
        matriz := matriz + ',PZ_INI        DATE '
        matriz := matriz + ',PZ_FIM        DATE '
        matriz := matriz + ',DATA_INST     DATE '
        matriz := matriz + ',VENDEDOR      CHAR(3) '
        matriz := matriz + ',OPERADOR      CHAR(3) '
        matriz := matriz + ',DATA_INCL     DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('CONTRATO  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR CONTRATO",,.f.)
        sr_getconnection():exec("CREATE TABLE CONTRATO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE CONTRATO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER CONTRATO_SR FOR CONTRATO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( CONTRATO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**************************** F I M  **********************************************************
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacmod')
        matriz:='tipo  CHAR(2) '
        matriz := matriz + ',modulo  CHAR(20) '
        matriz := matriz + ',descricao  CHAR(70) '
        matriz := matriz + ',e_d  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        //DBCREATE('sacmod  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACMOD",,.f.)
        sr_getconnection():exec("CREATE TABLE SACMOD ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACMOD ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACMOD_SR FOR SACMOD ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACMOD, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACMOD')
ENDIF
**************************** F I M  **********************************************************
IF mdbf = NIL .AND. ! SR_EXISTTABLE('saccst')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACCST')
        matriz:='cst  CHAR(4) '
        matriz := matriz + ',descri  CHAR(120) '
        matriz := matriz + ',sittrib  CHAR(1) '
        matriz := matriz + ',datacad  DATE '
        matriz := matriz + ',oper  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        SR_BEGINTRANSACTION()
                sr_getconnection():exec("CREATE GENERATOR SACCST",,.f.)
                sr_getconnection():exec("CREATE TABLE SACCST ("+matriz+" )",,.f.)
                sr_getconnection():exec("ALTER TABLE SACCST ADD UNIQUE (SR_RECNO)",,.f.)
                sr_getconnection():exec("CREATE TRIGGER SACCST_SR FOR SACCST ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCST, 1); end",,.f.)
                sr_committransaction()
        SR_ENDTRANSACTION()

        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('000','Tributada Integralmente','T',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('010','Tributada e com cobran?a do ICMS por substituicao tributaria','F',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('020','Com reducao de base de calculo','T',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('030','Isenta ou nao tributada e com cobran?a do ICMS por substituicao tributaria','I',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('040','Isenta','I',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('041','Nao Tributada','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('050','Suspensao','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('051','Diferimento','T',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('060','ICMS cobrado anteriormente por substituicao tributaria','F',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('070','Com reducao base de calculo e cobran?a do ICMS por substituicao tributaria','F',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('090','Outras','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('101','Tributada pelo Simples Nacional com permiss?o de cr?dito                                                            ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('102','Tributada pelo Simples Nacional sem permiss?o de cr?dito                                                            ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('103','Isen??o do ICMS no Simples Nacional para faixa de receita bruta                                                     ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('201','Tributada pelo Simples Nacional com permiss?o de cr?dito e com cobran?a do ICMS por substitui??o tribut?ria         ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('202','Tributada pelo Simples Nacional sem permiss?o de cr?dito e com cobran?a do ICMS por substitui??o tribut?ria         ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('203','Isen??o do ICMS no Simples Nacional para faixa de receita bruta e com cobran?a do ICMS por substitui??o tribut?ria  ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('300','Imune                                                                                                               ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('400','N?o tributada pelo Simples Nacional                                                                                 ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('500','ICMS cobrado anteriormente por substitui??o tribut?ria (substitu?do) ou por antecipa??o                             ','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("INSERT INTO saccst (cst,descri,sittrib,datacad,sr_deleted) VALUES ('900','OUTROS','N',"+sr_cdbvalue(DATE())+",' ')",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("UPDATE sacmerc SET isento = 'X' WHERE isento = 'N'",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("UPDATE sacmerc SET isento = 'I' WHERE isento = 'S'",,.f.)
        sr_getconnection():exec("UPDATE sacmerc SET isento = 'N' WHERE isento = 'T'",,.f.)
        sr_getconnection():exec("UPDATE sacmerc SET isento = 'T' WHERE isento = 'X'",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

ENDIF
**************************** F I M  **********************************************************
IF mdbf = NIL .AND. ! SR_EXISTTABLE('sacindiv')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACINDIV')
        matriz:='terminal    CHAR(20) '
        matriz := matriz + ',md5         CHAR(35)  '
        matriz := matriz + ',cam_geral   CHAR(60) '
        matriz := matriz + ',cam_pocket  CHAR(60) '
        matriz := matriz + ',cam_dosprt  CHAR(60) '
        matriz := matriz + ',cam_cfg     CHAR(60) '
        matriz := matriz + ',prt_ped1    CHAR(40) '
        matriz := matriz + ',prt_ped2    CHAR(40) '
        matriz := matriz + ',form_ped    CHAR(1) '
        matriz := matriz + ',tp_impped   CHAR(1) '
        matriz := matriz + ',qtd_cop_pd  DECIMAL(1,0) '
        matriz := matriz + ',prt_orc1    CHAR(40) '
        matriz := matriz + ',prt_orc2    CHAR(40) '
        matriz := matriz + ',form_orc    CHAR(1) '
        matriz := matriz + ',qtd_cop_or  DECIMAL(1,0) '
        matriz := matriz + ',qtd_lin_av  DECIMAL(2,0) '
        matriz := matriz + ',prt_rel     CHAR(40) '
        matriz := matriz + ',tp_imprel   CHAR(1) '
        matriz := matriz + ',NFE_N_C     CHAR(1) '
        matriz := matriz + ',prt_dup     CHAR(40) '
        matriz := matriz + ',tp_impdup   CHAR(1) '
        matriz := matriz + ',qtd_cp_dup  DECIMAL(1,0) '
        matriz := matriz + ',prt_nf      CHAR(40) '
        matriz := matriz + ',prt_bole    CHAR(40) '
        matriz := matriz + ',tp_impbol   CHAR(1) '
        matriz := matriz + ',autocaixa   CHAR(1) '
        matriz := matriz + ',form_os     CHAR(1) '
        matriz := matriz + ',cam_ft_cli  CHAR(60) '
        matriz := matriz + ',cam_ft_pro  CHAR(60) '
        matriz := matriz + ',cam_ft_ani  CHAR(60) '
        matriz := matriz + ',cam_ft_usu  CHAR(60) '
        matriz := matriz + ',cam_ft_rac  CHAR(60) '
        matriz := matriz + ',hiper_req   CHAR(60) '
        matriz := matriz + ',hiper_resp  CHAR(60) '
        matriz := matriz + ',dial_req    CHAR(60) '
        matriz := matriz + ',dial_resp   CHAR(60) '
        matriz := matriz + ',cam_acbr    CHAR(60) '
        matriz := matriz + ',cam_reme    CHAR(60) '
        matriz := matriz + ',cam_boleto  CHAR(60) '
        matriz := matriz + ',cam_nfe     CHAR(60) '
        matriz := matriz + ',gerenciado  CHAR(20) '
        matriz := matriz + ',ip_acbr     CHAR(40) '
        matriz := matriz + ',ip_acbrnfe  CHAR(40) '
        matriz := matriz + ',cod_ecf     CHAR(6) '
        matriz := matriz + ',marca_imp   CHAR(12) '     //matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0)'
        matriz := matriz +',sr_deleted CHAR(1)'
        matriz := matriz + ',tam_pagina  CHAR(2) '
        matriz := matriz + ',gaveta      CHAR(1) '
        matriz := matriz + ',cam_xml     CHAR(60) '
        matriz := matriz + ',tp_carne    CHAR(1) '
        matriz := matriz + ',ger_app     CHAR(1) '
        sr_getconnection():exec("CREATE TABLE SACINDIV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        //sr_getconnection():exec("ALTER TABLE SACINDIV ADD UNIQUE (SR_RECNO)",,.f.)
        //sr_getconnection():exec("CREATE TRIGGER SACINDIV_SR FOR SACINDIV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACINDIV, 1); end",,.f.)
        //sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('cnnt_pedido')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> CNNT_PEDIDO')
        matriz:='CODIGO    DECIMAL(10,0)'
        matriz := matriz + ',COD_FUNCIONARIO  DECIMAL(10,0) '
        matriz := matriz + ',COD_FRM_PAGAMENTO  CHAR(4) '
        matriz := matriz + ',COD_ESTOQUE  DECIMAL(10,0) '
        matriz := matriz + ',COD_TIPO_PRECO  DECIMAL(10,0) '
        matriz := matriz + ',COD_VISITA  DECIMAL(10,0) '
        matriz := matriz + ',DATA_ENTREGA  DATE '
        matriz := matriz + ',DATA_VENCIMENTO  DATE '
        matriz := matriz + ',DATA_PEDIDO  DATE '
        matriz := matriz + ',HORA_PEDIDO  CHAR(8) '
        matriz := matriz + ',DESCONTO  DECIMAL(10,2) '
        matriz := matriz + ',SITUACAO  DECIMAL(10,0) '
        matriz := matriz + ',COD_TIPO_PEDIDO  DECIMAL(10,0) '
        matriz := matriz + ',COD_FRM_ENTREGA  DECIMAL(10,0) '
        matriz := matriz + ',COD_CONDICAO  DECIMAL(10,0) '
        matriz := matriz + ',OBS_PEDIDO  CHAR(200) '
        matriz := matriz + ',OBS_NOTA  CHAR(200) '
        matriz := matriz + ',COD_CLIENTE  DECIMAL(10,0) '
        matriz := matriz + ',IMPORTADO  DECIMAL(10,0) '
        matriz := matriz + ',OBS_PC  CHAR(100) '
        matriz := matriz + ',OBS_VISITA  CHAR(200) '
        matriz := matriz + ',TOTAL_PEDIDO DECIMAL(15,2) '
        matriz := matriz + ',TIPO_OPERACAO CHAR(12) '
        matriz := matriz + ',STATUS_PED CHAR(12) '
        sr_getconnection():exec("CREATE TABLE CNNT_PEDIDO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("INSERT INTO cnnt_pedido (CODIGO, COD_FUNCIONARIO,TOTAL_PEDIDO,COD_FRM_PAGAMENTO,COD_CONDICAO) VALUES (0,0,0,'1',1)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('CNNT_ITENS_PEDIDO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> CNNT_ITENS_PEDIDO')
        matriz:='COD_PEDIDO  DECIMAL(10,0) '
        matriz := matriz + ',COD_FUNCIONARIO  DECIMAL(10,0) '
        matriz := matriz + ',COD_PRODUTO  DECIMAL(10,0) '
        matriz := matriz + ',UNIDADE  CHAR(2) '
        matriz := matriz + ',NOME_PRODUTO  CHAR(50) '
        matriz := matriz + ',QUANTIDADE  DECIMAL(10,2) '
        matriz := matriz + ',PRECO_UNITARIO  DECIMAL(10,2) '
        matriz := matriz + ',PRECO_TABELA  DECIMAL(10,2) '
        matriz := matriz + ',PRECO_ORIGINAL  DECIMAL(10,2) '
        matriz := matriz + ',qtde_faturada  DECIMAL(10,2) '
        matriz := matriz + ',obs_importacao  CHAR(500) '
        matriz := matriz + ',valor_pedido  DECIMAL(15,2) '
        matriz := matriz + ',DESCONTO  DECIMAL(12,2) '
        sr_getconnection():exec("CREATE TABLE CNNT_ITENS_PEDIDO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("INSERT INTO cnnt_itens_pedido (COD_PEDIDO, COD_FUNCIONARIO,VALOR_PEDIDO) VALUES (0,0,0)",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('C_C_FORN')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> C_C_FORN')
        matriz:='COD_FORN  CHAR(4) '
        matriz := matriz + ',COD_OPER  CHAR(3) '
        matriz := matriz + ',DATA  DATE '
        matriz := matriz + ',HORA  CHAR(8) '
        matriz := matriz + ',COD_PROD  CHAR(5) '
        matriz := matriz + ',QUANTIDADE  DECIMAL(12,2) '
        matriz := matriz + ',VALOR  DECIMAL(12,2) '
        matriz := matriz + ',DEB_CRED  CHAR(1) '
        matriz := matriz + ',SALDO  DECIMAL(12,2) '
        matriz := matriz + ',OBS  CHAR(80) '    //matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE TABLE C_C_FORN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        //sr_getconnection():exec("ALTER TABLE C_C_FORN ADD UNIQUE (SR_RECNO)",,.f.)
        //sr_getconnection():exec("CREATE TRIGGER C_C_FORN_SR FOR C_C_FORN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( C_C_FORN, 1); end",,.f.)
        //sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACEMAIL')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACEMAIL')
        matriz:='COPIA_EMAIL  CHAR(60) '
        matriz := matriz + ',CONF_LEITU  CHAR(1) '
        matriz := matriz + ',ASSINA1  CHAR(40) '
        matriz := matriz + ',ASSINA2  CHAR(40) '
        matriz := matriz + ',ASSINA3  CHAR(40) '
        matriz := matriz + ',ASSINA4  CHAR(40) '
        matriz := matriz + ',ASSINA5  CHAR(40) '
        matriz := matriz + ',ASSINA6  CHAR(40) '
        matriz := matriz + ',ASSINA7  CHAR(40) '        //matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)'
        sr_getconnection():exec("CREATE GENERATOR SACEMAIL",,.f.)
        sr_getconnection():exec("CREATE TABLE SACEMAIL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACEMAIL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACEMAIL_SR FOR SACEMAIL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACEMAIL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACENTRADA')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACENTRADA')
        sr_begintransaction()
                matriz:='TIPO  CHAR(6) '
                matriz := matriz +',CAMPO1  CHAR(60) '
                matriz := matriz +',CAMPO2  CHAR(254) '
                matriz := matriz +',CAMPO3  CHAR(60) '
                matriz := matriz +',CAMPO4  CHAR(60) '
                matriz := matriz +',CAMPO5  CHAR(60) '
                matriz := matriz +',CAMPO6  CHAR(60) '
                matriz := matriz +',CAMPO7  CHAR(60) '
                matriz := matriz +',CAMPO8  CHAR(60) '
                matriz := matriz +',CAMPO9  CHAR(60) '
                matriz := matriz +',CAMPO10 CHAR(60) '
                matriz := matriz +',CAMPO11 CHAR(60) '
                matriz := matriz +',CAMPO12 CHAR(60) '
                matriz := matriz +',CAMPO13 CHAR(60) '
                matriz := matriz +',CAMPO14 CHAR(60) '
                matriz := matriz +',CAMPO15 CHAR(60) '
                matriz := matriz +',CAMPO16 CHAR(60) '
                matriz := matriz +',CAMPO17 CHAR(60) '
                matriz := matriz +',CAMPO18 CHAR(60) '
                matriz := matriz +',CAMPO19 CHAR(60) '
                matriz := matriz +',CAMPO20 CHAR(60) '
                matriz := matriz +',CAMPO21 CHAR(60) '
                matriz := matriz +',CAMPO22 CHAR(60) '
                matriz := matriz +',CAMPO23 CHAR(60) '
                matriz := matriz +',CAMPO24 CHAR(60) '
                matriz := matriz +',CAMPO25 CHAR(60) '
                matriz := matriz +',CAMPO26 CHAR(60) '
                matriz := matriz +',CAMPO27 CHAR(60) '
                matriz := matriz +',CAMPO28 CHAR(60) '
                matriz := matriz +',CAMPO29 CHAR(60) '
                matriz := matriz +',CAMPO30 CHAR(60) '
                matriz := matriz +',CAMPO31 CHAR(60) '
                matriz := matriz +',CAMPO32 CHAR(60) '
                matriz := matriz +',CAMPO33 CHAR(60) '
                matriz := matriz +',CAMPO34 CHAR(60) '
                matriz := matriz +',CAMPO35 CHAR(60) '
                TRY
                        sr_getconnection():exec("CREATE TABLE SACENTRADA ("+matriz+" )",,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                END
                sr_committransaction()
        sr_endtransaction()
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACVERSAO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACVERSAO')
        sr_begintransaction()
                matriz:='data  DATE '
                matriz := matriz +',versao  CHAR(20) '
                TRY
                        sr_getconnection():exec("CREATE TABLE SACVERSAO ("+matriz+" )",,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                END
                sr_committransaction()
        sr_endtransaction()
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACTESTE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACTESTE')
        sr_begintransaction()
                matriz:='CODIGO  INTEGER '
                matriz := matriz +',DESCRICAO CHAR(60) '
                matriz := matriz +',UNIDADE CHAR(3) '
                matriz := matriz +',SALDO DECIMAL(15,3) '
                TRY
                        sr_getconnection():exec("CREATE TABLE SACTESTE ("+matriz+" )",,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                END
                sr_committransaction()
        sr_endtransaction()
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACNOMDF')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACNOMDF')
        sr_begintransaction()
                matriz:='data_ped  DATE '
                matriz := matriz +',numero CHAR(6) '
                TRY
                        sr_getconnection():exec("CREATE TABLE SACNOMDF ("+matriz+" )",,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                END
                sr_committransaction()
        sr_endtransaction()
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('SACMDFE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACMDFE')
        sr_begintransaction()
                matriz:=          ' CUF           CHAR(2)'
                matriz := matriz +',MODELO        CHAR(2)'
                matriz := matriz +',SERIE         CHAR(2)'
                matriz := matriz +',PROCEMI       CHAR(1)'
                matriz := matriz +',DHEMI         DATE'
                matriz := matriz +',TPEMIT        CHAR(1)'
                matriz := matriz +',MODAL         CHAR(1)'
                matriz := matriz +',UFINI         CHAR(2)'
                matriz := matriz +',UFFIM         CHAR(2)'
                matriz := matriz +',CMDF          CHAR(8)'
                matriz := matriz +',NMDF          CHAR(9)'
                matriz := matriz +',CMUNCARREGA   CHAR(7)'
                matriz := matriz +',XMUNCARREGA   CHAR(40)'
                matriz := matriz +',RNTRC         CHAR(8)'
                matriz := matriz +',PLACA         CHAR(7)'
                matriz := matriz +',CAPKG         CHAR(6)'
                matriz := matriz +',CAPM3         CHAR(6)'
                matriz := matriz +',TARA          CHAR(6)'
                matriz := matriz +',TPROD         CHAR(2)'
                matriz := matriz +',TPCAR         CHAR(2)'
                matriz := matriz +',UF_CAR        CHAR(2)'
                matriz := matriz +',RENAVAM       CHAR(11)'
                matriz := matriz +',TPPROP        CHAR(1)'
                matriz := matriz +',IE            CHAR(11)'
                matriz := matriz +',XNOME         CHAR(40)'
                matriz := matriz +',CPF           CHAR(11)'
                matriz := matriz +',CHNFE         CHAR(100)'
                matriz := matriz +',CMUNDESCARGA  CHAR(7)'
                matriz := matriz +',XMUNDESCARGA  CHAR(40)'
                matriz := matriz +',CAMMDFE       CHAR(100)'
                TRY
                        sr_getconnection():exec("CREATE TABLE SACMDFE ("+matriz+" )",,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_COMMITtransaction()
                END
                sr_committransaction()
        sr_endtransaction()
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('mastmesas')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> MASTMESAS   ')
        matriz:={}
        matriz := 'tipo CHAR(1)'
        matriz := matriz +',numero CHAR(4)'
        matriz := matriz +',descri CHAR(50)'
        matriz := matriz +',data DATE'
        matriz := matriz +',preco DECIMAL(12,2)'
        matriz := matriz +',oper CHAR(3)'
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        sr_getconnection():exec("CREATE GENERATOR MASTMESAS",,.f.)
        sr_getconnection():exec("CREATE TABLE MASTMESAS ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE MASTMESAS ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER MASTMESAS_SR FOR MASTMESAS ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( MASTMESAS, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('MASTNUMMOV')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->MASTNUMMOV    ')
        matriz:={}
        matriz := 'num_doc CHAR(6)'
        matriz := matriz +',data DATE'
        matriz := matriz +',hora CHAR(8)'
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        sr_getconnection():exec("CREATE GENERATOR MASTNUMMOV",,.f.)
        sr_getconnection():exec("CREATE TABLE MASTNUMMOV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE MASTNUMMOV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER MASTNUMMOV_SR FOR MASTNUMMOV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( MASTNUMMOV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('MASTMOV')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->MASTMOV    ')
        matriz:={}
        matriz := 'num_doc CHAR(6)'
        matriz := matriz +',num_local CHAR(5)'
        matriz := matriz +',data DATE'
        matriz := matriz +',hora CHAR(8)'
        matriz := matriz +',cod_prod INTEGER'
        matriz := matriz +',descri CHAR(50)'
        matriz := matriz +',qtd DECIMAL(12,3)'
        matriz := matriz +',preco DECIMAL(12,2)'
        matriz := matriz +',cod_cli CHAR(5)'
        matriz := matriz +',cod_garco CHAR(3)'
        matriz := matriz +',oper CHAR(3)'
        matriz := matriz +',obs CHAR(30)'
        matriz := matriz +',dat_pag DATE'
        matriz := matriz +',porta CHAR(4)'
        matriz := matriz +',entregue CHAR(1)'
        matriz := matriz +',imprimir CHAR(1)'
        matriz := matriz +',qtd_p DECIMAL(3)'
        matriz := matriz +',unidade CHAR(3)'
        matriz := matriz +',dez_perc CHAR(1)'
        matriz := matriz +',custo DECIMAL(12,2)'
        matriz := matriz +',tipo CHAR(1)'
        matriz := matriz +',excecao CHAR(60)'
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        sr_getconnection():exec("CREATE GENERATOR MASTMOV",,.f.)
        sr_getconnection():exec("CREATE TABLE MASTMOV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE MASTMOV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER MASTMOV_SR FOR MASTMOV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( MASTMOV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF mdbf = NIL .AND. ! SR_EXISTTABLE('MASTRESERVA')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->MASTRESERVA  ')
        matriz :=        + 'quarto  CHAR(4) '
        matriz := matriz + ',data_inclusao DATE '
        matriz := matriz + ',hora_inclusao CHAR(8) '
        matriz := matriz + ',oper_inclusao CHAR(3) '
        matriz := matriz + ',obs_inclusao CHAR(60) '
        matriz := matriz + ',Cliente  CHAR(5) '
        matriz := matriz + ',data_reserva  DATE '
        matriz := matriz + ',reserva  CHAR(10) '
        matriz := matriz + ',data_inicial  DATE '
        matriz := matriz + ',data_final  DATE '
        matriz := matriz + ',Fornecedor  CHAR(5) '
        matriz := matriz + ',reserva_forn  CHAR(15) '
        matriz := matriz + ',valor DECIMAL(12,2) '
        matriz := matriz + ',Status  CHAR(1) '
        matriz := matriz + ',data_checkin  DATE '
        matriz := matriz + ',hora_checkin CHAR(8) '
        matriz := matriz + ',obs_checkin CHAR(60) '
        matriz := matriz + ',oper_checkin CHAR(3) '
        matriz := matriz + ',data_checkout  DATE '
        matriz := matriz + ',hora_checkout CHAR(8) '
        matriz := matriz + ',obs_checkout CHAR(60) '
        matriz := matriz + ',oper_checkout CHAR(3) '
        matriz := matriz + ',qtd_pessoas INTEGER NOT NULL '
        matriz := matriz + ',qtd_dias INTEGER'
        matriz := matriz + ',vencimento DATE '
        matriz := matriz + ',form_pag CHAR(3) '

        sr_getconnection():exec("CREATE TABLE MASTRESERVA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

sacdbf()

/*
sr_getconnection():exec("CREATE TABLE CARTA (sr_recno decimal(15,0) NOT NULL, CODE DATE(8), NAME char(50), sr_deleted char(1) NOT NULL )",,.f.)
sr_getconnection():exec("COMMIT",,.f.)
sr_getconnection():exec("ALTER TABLE CARTA ADD UNIQUE (SR_RECNO)",,.f.)
sr_getconnection():exec("COMMIT",,.f.)
sr_getconnection():exec("CREATE TRIGGER CARTA_SR FOR CARTA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( carta, 1); end",,.f.)
sr_getconnection():exec("COMMIT",,.f.)
*/

wvw_lclosewindow()
RETURN NIL
**************************** F I M  **********************************************************

