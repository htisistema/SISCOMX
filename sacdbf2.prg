REQUEST DBFCDX
REQUEST DBFFPT

FUNCTION sacdbf(mop)              
************
LOCAL mprg:='SACDBF'
PRIVATE cor,f,mtcor:=NIL,matriz :={},tela_dbf,mcaminho,mtip_term,nmaxpsw:=8,mop_tip

IF tipo_rdd = 2         //SQLRDD
        IF m_cfg[2] = 'S'
                sacdbf1()
        ENDIF
        RETURN NIL
ENDIF


mcaminho := SPACE(30)
mop_tip := mop
//arqcfg()
IF EMPTY(mcaminho);mcaminho := ALLTRIM(m_indiv[1,3]);ENDIF
mtip_term := 'S'
IF mop = NIL
        limpa(00,00,24,79)
ENDIF
setcor(1)
op_tela(00,00,20,70,' Aguarde um momento, Gerando Arquivos de dados ','*')
f := 0
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'insopera'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> INSOPERA')
        matriz:={ }
        AADD(matriz,{'scod_op','C',3,0})
        AADD(matriz,{'snome','C',30,0})
        AADD(matriz,{'stipo','C',1,0})
        AADD(matriz,{'ssenha','C',8,0})
        AADD(matriz,{'sdata_cad','D',8,0})
        AADD(matriz,{'scomissao','N',6,2})
        AADD(matriz,{'scom_praz','N',6,2})
        AADD(matriz,{'scom_oper','N',6,2})
        AADD(matriz,{'scota','N',12,2})
        AADD(matriz,{'sult_ent','D',8,0})
        AADD(matriz,{'sult_fim','D',8,0})
        AADD(matriz,{'snivel','C',2,0})
        AADD(matriz,{'shora_ini','C',5,2})
        AADD(matriz,{'shora_fim','C',5,2})
        AADD(matriz,{'sult_e_c','D',8,0})
        AADD(matriz,{'sh_i_c','C',5,2})
        AADD(matriz,{'sexpira','N',3,0})
        AADD(matriz,{'scod_aut','C',17,0})
        AADD(matriz,{'sstatus','C',1,0})
        AADD(matriz,{'sope','C',3,0})
        AADD(matriz,{'scliente','C',5,0})
        AADD(matriz,{'sproduto','C',5,0})
        AADD(matriz,{'svalor','N',12,2})
        AADD(matriz,{'sbloq','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'insopera'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        IF mop = NIL
                IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                ADIREG()
                sen-> scod_op := '999'
                sen-> snome := 'HTI Sistemas de Informatica'
                sen-> ssenha := CRIPTO('HRB21')
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
        ENDIF
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsetup'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> SACSETUP')
        matriz:={ }
        AADD(matriz,{'ver','C',10,0})
        AADD(matriz,{'pis','N',5,2})
        AADD(matriz,{'confis','N',5,2})
        AADD(matriz,{'imposto','N',5,2})
        AADD(matriz,{'varejo','C',1,0})
        AADD(matriz,{'fatura','N',6,2})
        AADD(matriz,{'vlr_ent','N',6,2})
        AADD(matriz,{'impress','C',1,0})
        AADD(matriz,{'ped_obs','C',2,0})
        AADD(matriz,{'ven_cli','C',1,0})
        AADD(matriz,{'pagina','C',1,0})
        AADD(matriz,{'percent','C',1,0})
        AADD(matriz,{'prt_term','C',1,0})
        AADD(matriz,{'relatorio','C',4,0})
        AADD(matriz,{'nota','C',4,0})
        AADD(matriz,{'saldonf','C',1,0})        //03.03.2002
        AADD(matriz,{'confnf','C',1,0})         //03.03.2002
        AADD(matriz,{'nomenf','C',8,0})         // 14.09.2002
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'icm','N',2,0})
        AADD(matriz,{'tp_comi','C',1,0})
        AADD(matriz,{'cabecalho','C',1,0})
        AADD(matriz,{'cab_ped','C',15,0})
        AADD(matriz,{'cab_orc','C',15,0})
        AADD(matriz,{'rodap1','C',60,0})
        AADD(matriz,{'rodap2','C',60,0})
        AADD(matriz,{'rodap3','C',60,0})
        AADD(matriz,{'rodap4','C',60,0})
        AADD(matriz,{'acord1','C',60,0})
        AADD(matriz,{'acord2','C',60,0})
        AADD(matriz,{'acord3','C',60,0})
        AADD(matriz,{'acord4','C',60,0})
        AADD(matriz,{'desc_max','N',6,2})
        AADD(matriz,{'item_max','N',5,0})
        AADD(matriz,{'desc_apr','C',1,0})
        AADD(matriz,{'desc_ped','C',1,0})
        AADD(matriz,{'usa_carro','C',1,0})
        AADD(matriz,{'blo_vend','C',1,0})
        AADD(matriz,{'dado_cli','C',1,0})
        AADD(matriz,{'nome_fan','C',1,0})
        AADD(matriz,{'perc1','N',6,2})
        AADD(matriz,{'perc2','N',6,2})
        AADD(matriz,{'perc3','N',6,2})
        AADD(matriz,{'perc4','N',6,2})
        AADD(matriz,{'duplicata','C',1,0})
        AADD(matriz,{'copia_dup','N',1,0})
        AADD(matriz,{'dup_imp','C',1,0})
        AADD(matriz,{'dup_port','C',4,0})
        AADD(matriz,{'intervalo','N',3,0})
        AADD(matriz,{'multa_dup','N',6,2})
        AADD(matriz,{'juros_dup','N',6,2})
        AADD(matriz,{'roda_dup1','C',60,0})
        AADD(matriz,{'roda_dup2','C',60,0})
        AADD(matriz,{'ceden_bol','C',1,0})
        AADD(matriz,{'local_bol','C',46,0})
        AADD(matriz,{'mens_bol1','C',46,0})
        AADD(matriz,{'mens_bol2','C',46,0})
        AADD(matriz,{'mens_bol3','C',46,0})
        AADD(matriz,{'mens_bol4','C',46,0})
        AADD(matriz,{'mens_bol5','C',46,0})
        AADD(matriz,{'fecha_cx','C',1,0})
        AADD(matriz,{'carnes','C',1,0})
        AADD(matriz,{'despesa','C',1,0})
        AADD(matriz,{'via_desp','N',2,0})
        AADD(matriz,{'vales','C',1,0})
        AADD(matriz,{'via_vales','N',2,0})
        AADD(matriz,{'deposito','C',1,0})
        AADD(matriz,{'via_dep','N',2,0})
        AADD(matriz,{'haver','C',1,0})
        AADD(matriz,{'via_hv','N',2,0})
        AADD(matriz,{'prazo1','N',3,0})
        AADD(matriz,{'pz_perc1','N',5,2})
        AADD(matriz,{'prazo2','N',3,0})
        AADD(matriz,{'pz_perc2','N',5,2})
        AADD(matriz,{'prazo3','N',3,0})
        AADD(matriz,{'pz_perc3','N',5,2})
        AADD(matriz,{'prazo4','N',3,0})
        AADD(matriz,{'pz_perc4','N',5,2})
        AADD(matriz,{'tp_lucro','C',1,0})
        AADD(matriz,{'senha_pd','C',1,0})
        AADD(matriz,{'nome_ven','C',1,0})
        AADD(matriz,{'sysdatlm','C',12,0})
        AADD(matriz,{'receber','C',1,0})
        AADD(matriz,{'cli_def','C',5,0})
        AADD(matriz,{'qtdchcli','N',5,0})
        AADD(matriz,{'caixa','C',1,0})
        AADD(matriz,{'embalag','C',1,0})
        AADD(matriz,{'loc_emb','C',1,0})
        AADD(matriz,{'port_emb','C',4,0})
        AADD(matriz,{'tipfrmemb','C',1,0})
        AADD(matriz,{'ped_ind','C',1,0})
        AADD(matriz,{'seculo','C',1,0})
        AADD(matriz,{'situacao','C',1,0})
        AADD(matriz,{'DtaAtu','D',8,0})
        AADD(matriz,{'DtaAnt','D',8,0})
        AADD(matriz,{'arq_cli','C',20,0})
        AADD(matriz,{'masc_num','C',12,0})
        AADD(matriz,{'masc_numt','C',11,0})
        AADD(matriz,{'masc_qtd','C',10,0})
        AADD(matriz,{'cli_ped','C',1,0})
        AADD(matriz,{'rotina','C',1,0})
        AADD(matriz,{'usa_dolar','C',1,0})
        AADD(matriz,{'aredonda','N',1,0})
        AADD(matriz,{'dupl_prod','C',1,0})
        AADD(matriz,{'ecf','C',1,0})
        AADD(matriz,{'dia_venc','N',2,0})
        AADD(matriz,{'saldo_meno','C',1,0})     // 01.05.00
        AADD(matriz,{'inf_ven','C',1,0})        // 23.05.01
        AADD(matriz,{'PergImpPed','C',1,0})     // 24.10.01
        AADD(matriz,{'impslddev','C',1,0})      // 13.09.2002
        AADD(matriz,{'aut_ped','C',1,0})        // 13.02.2003
        AADD(matriz,{'altcodpr','C',1,0})       // 22.06.2003
        AADD(matriz,{'desc_com','N',10,3})      // 07.08.2003
        AADD(matriz,{'tole_com','N',10,3})      // 07.08.2003
        AADD(matriz,{'info_com','C',1,0})      // 07.08.2003
        AADD(matriz,{'d_comtele','N',10,3})     // 25.02.2004
        AADD(matriz,{'bloqnnf','C',1,0})        // 29.02.2004
        AADD(matriz,{'set_data','C',2,0})      // 10.11.2004
        AADD(matriz,{'cli_cx','C',1,0})         // 12.09.2005
        AADD(matriz,{'nao_exp','N',3,0})        // 05.10.2005
        AADD(matriz,{'sim_exp','N',3,0})        // 05.10.2005
        AADD(matriz,{'prz_rec','N',3,0})        // 25.10.2005

        AADD(matriz,{'serie','C',20,0})
        AADD(matriz,{'codemp','C',3,0})
        AADD(matriz,{'apre1','C',11,0})
        AADD(matriz,{'apre2','C',11,0})
        AADD(matriz,{'apre3','C',50,0})
        AADD(matriz,{'insc','C',14,0})
        AADD(matriz,{'razao','C',35,0})
        AADD(matriz,{'fantasia','C',35,0})
        AADD(matriz,{'nome_cab','C',1,0})       // 17.07.01
        AADD(matriz,{'end','C',40,0})
        AADD(matriz,{'bairro','C',30,0})
        AADD(matriz,{'cidade','C',30,0})
        AADD(matriz,{'cep','C',8,0})
        AADD(matriz,{'fone','C',10,0})
        AADD(matriz,{'email','C',50,0})
        AADD(matriz,{'dataini','D',8,0})

        AADD(matriz,{'logradouro','C',34,0})
        AADD(matriz,{'cont_numer','C',5,0})
        AADD(matriz,{'cont_compl','C',22,0})
        AADD(matriz,{'cont_bairr','C',15,0})
        AADD(matriz,{'cont_cep','C',8,0})
        AADD(matriz,{'contato','C',28,0})
        AADD(matriz,{'cont_tel','C',12,0})
        AADD(matriz,{'cont_cpf','C',11,0})
        AADD(matriz,{'imp_cod','C',1,0})         // 01.07.2003
        AADD(matriz,{'prodepe','C',1,0})         // 28.05.2004
        AADD(matriz,{'cod_sc','C',1,0})          // 28.05.2004
        AADD(matriz,{'lib_pd_or','C',1,0})       // 13.02.2007
        AADD(matriz,{'tip_ecf','C',1,0})         // 26.04.2007
        AADD(matriz,{'atu_ecf','C',1,0})         // 26.04.2007
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsetup'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacemp'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> SACEMP  ')
        matriz:={ }
        AADD(matriz,{'codemp','C',3,0})
        AADD(matriz,{'apre1','C',11,0})
        AADD(matriz,{'apre2','C',11,0})
        AADD(matriz,{'apre3','C',50,0})
        AADD(matriz,{'insc','C',14,0})
        AADD(matriz,{'cnpj','C',14,0})
        AADD(matriz,{'razao','C',35,0})
        AADD(matriz,{'fantasia','C',35,0})
        AADD(matriz,{'nome_cab','C',1,0})
        AADD(matriz,{'end','C',40,0})
        AADD(matriz,{'bairro','C',30,0})
        AADD(matriz,{'cidade','C',30,0})
        AADD(matriz,{'cep','C',8,0})
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'fone','C',10,0})
        AADD(matriz,{'email','C',50,0})
        AADD(matriz,{'dataini','D',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacemp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacgrupo'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> SACGRUPO ')
        matriz:={ }
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'data_cad','D',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacgrupo'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmerc'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> SACMERC  ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})        // 08.03.2005
        AADD(matriz,{'cod_barr','C',14,0})
        AADD(matriz,{'cod_barr1','C',14,0})      // 09.09.2003
        AADD(matriz,{'cod_barr2','C',14,0})      // 09.09.2003
        AADD(matriz,{'cod_barr3','C',14,0})      // 09.09.2003
        AADD(matriz,{'ref','C',13,0})           // 28.06.2003
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'tipo_merc','C',1,0})
        AADD(matriz,{'balanca','C',1,0})
        AADD(matriz,{'data_atu','D',8,0})       //04.02.2007
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'volume','N',8,3})
        AADD(matriz,{'metragem','N',8,3})
        AADD(matriz,{'pacote','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'p_lucro','N',7,2})
        AADD(matriz,{'promocao','N',7,2})
        AADD(matriz,{'disp','C',1,0})
        AADD(matriz,{'livre_desc','C',1,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'com_mont','N',6,2})
        AADD(matriz,{'est_min','N',12,3})
        AADD(matriz,{'est_max','N',12,3})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',40,0})
        AADD(matriz,{'dat_ult_s','D',8,0})
        AADD(matriz,{'dat_ult_e','D',8,0})
        AADD(matriz,{'saldo_ant','N',12,3})
        AADD(matriz,{'a_pr_unit','N',12,4})
        AADD(matriz,{'a_vlr_merc','N',12,4})
        AADD(matriz,{'a_cust_mer','N',12,4})
        AADD(matriz,{'a_cust_rea','N',12,4})
        AADD(matriz,{'a_pr_venda','N',12,4})
        AADD(matriz,{'a_pr_medio','N',12,4})
        AADD(matriz,{'pr_nota','N',12,4})
        AADD(matriz,{'pr_unit','N',12,4})
        AADD(matriz,{'vlr_merc','N',12,4})
        AADD(matriz,{'cust_merc','N',12,4})
        AADD(matriz,{'cust_real','N',12,4})
        AADD(matriz,{'pr_venda','N',12,4})
        AADD(matriz,{'pr_venda1','N',12,4})
        AADD(matriz,{'pr_medio','N',12,4})
        AADD(matriz,{'pr_fat','N',12,4})        //28.05.01
        AADD(matriz,{'varejo','N',10,2})
        AADD(matriz,{'ul_alt_pr','D',8,0})
        AADD(matriz,{'opera_pr','C',3,0})
        AADD(matriz,{'tipo_op','C',2,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'saldo_fis','N',12,3})
        AADD(matriz,{'saldo_mer','N',12,3})
        AADD(matriz,{'saldo_av','N',12,3})
        AADD(matriz,{'saldo_comp','N',12,3})
        AADD(matriz,{'saldo_est','N',12,3})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'icm_sub','N',12,4})
        AADD(matriz,{'icm_sub2','N',12,4})
        AADD(matriz,{'ipi','N',12,4})
        AADD(matriz,{'cod_clf','C',2,0})
        AADD(matriz,{'cod_fis','C',10,0})
        AADD(matriz,{'sittrib','C',3,0})       // 29.10.2002
        AADD(matriz,{'prodepe','C',2,0})        // 28.05.2004
        AADD(matriz,{'nbm','C',8,0})            // 24.11.2002
        AADD(matriz,{'desc_icm','C',1,0})       // 06/02/2000
        AADD(matriz,{'desc_icm1','N',12,4})     // 12.02.2002
        AADD(matriz,{'local','C',4,0})
        AADD(matriz,{'gramatura','N',9,3})
        AADD(matriz,{'prazo','N',3,0})          // 11/05/2001
        AADD(matriz,{'fatconv','N',8,2})
        AADD(matriz,{'doc_ent_a','C',10,0})
        AADD(matriz,{'doc_ent','C',10,0})
        AADD(matriz,{'envelope','C',10,0})
        AADD(matriz,{'desc_merc','N',6,2})
** CAMPOS FISCAIS
        AADD(matriz,{'stat_item','C',1,0})
        AADD(matriz,{'ind_icms','C',2,0})
        AADD(matriz,{'sit_trib','C',1,0})
**
        AADD(matriz,{'dolar','C',1,0})
        AADD(matriz,{'aplic0','C',60,0})
        AADD(matriz,{'aplic1','C',60,0})
        AADD(matriz,{'aplic2','C',60,0})
        AADD(matriz,{'aplic3','C',60,0})
        AADD(matriz,{'aplic4','C',60,0})
        AADD(matriz,{'atualiza','D',8,0})      // 22.12.2004
        AADD(matriz,{'cod1','C',5,0})
        AADD(matriz,{'cod2','C',5,0})
        AADD(matriz,{'cod3','C',5,0})
        AADD(matriz,{'cod4','C',5,0})
        AADD(matriz,{'data_falta','D',8,0})
        AADD(matriz,{'cod_falta','C',3,0})
        AADD(matriz,{'qtd_falta','N',12,3})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmerc'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactbmer'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> SACTBMER ')
        matriz:={ }
        AADD(matriz,{'cod_barr','C',14,0})
        AADD(matriz,{'ref','C',13,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'cust_merc','C',12,0})
        AADD(matriz,{'cust_real','C',12,0})
        AADD(matriz,{'pr_venda','C',12,0})
        AADD(matriz,{'pr_venda1','C',12,0})
        AADD(matriz,{'pr_fat','C',12,0})
        AADD(matriz,{'varejo','C',10,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'bebida','C',6,0})
        AADD(matriz,{'ipi','C',12,0})
        AADD(matriz,{'ind_icms','C',2,0})
        AADD(matriz,{'sit_trib','C',1,0})
        AADD(matriz,{'cod_fis','C',10,0})
        AADD(matriz,{'sittrib','C',3,0})
        AADD(matriz,{'nbm','C',8,0})
        AADD(matriz,{'aplic0','C',60,0})
        AADD(matriz,{'aplic1','C',60,0})
        AADD(matriz,{'aplic2','C',60,0})
        AADD(matriz,{'aplic3','C',60,0})
        AADD(matriz,{'aplic4','C',60,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactbmer'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacforn'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACFORN   ')
        matriz:={ }
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'razao','C',40,0})
        AADD(matriz,{'tipo','C',4,0})
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'ult_comp','D',8,0})
        AADD(matriz,{'endereco','C',35,0})
        AADD(matriz,{'bairro','C',20,0})
        AADD(matriz,{'cidade','C',20,0})
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'cep','C',9,0})
        AADD(matriz,{'cpostal','C',6,0})
        AADD(matriz,{'email','C',40,0})
        AADD(matriz,{'tel1','C',14,0})
        AADD(matriz,{'tel2','C',14,0})
        AADD(matriz,{'fax','C',14,0})
        AADD(matriz,{'cgc','C',14,0})
        AADD(matriz,{'insc','C',14,0})
        AADD(matriz,{'cpf','C',11,0})
        AADD(matriz,{'carteira','C',1,0})
        AADD(matriz,{'banco','C',1,0})
        AADD(matriz,{'prazo_pag','C',8,0})
        AADD(matriz,{'ct_gerente','C',15,0})
        AADD(matriz,{'ct_vendedo','C',15,0})
        AADD(matriz,{'ct_fatura','C',15,0})
        AADD(matriz,{'ct_cobran','C',15,0})
        AADD(matriz,{'limite','N',10,2})
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'obs1','C',60,0})
        AADD(matriz,{'obs2','C',60,0})
        AADD(matriz,{'obs3','C',60,0})
        AADD(matriz,{'obs4','C',60,0})
        AADD(matriz,{'obs5','C',60,0})
        AADD(matriz,{'local','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacforn'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccli'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCLI    ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'razao','C',40,0})
        AADD(matriz,{'nome','C',40,0})
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'data_atu','D',8,0})       //04.02.2007
        AADD(matriz,{'cadastro','C',1,0})       //06.11.01
        AADD(matriz,{'tipo','C',1,0})
        AADD(matriz,{'nascimento','D',8,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'ult_comp','D',8,0})
        AADD(matriz,{'vlr_comp','N',10,2})
        AADD(matriz,{'ant_ped','C',6,0})
        AADD(matriz,{'dat_ant','D',8,0})
        AADD(matriz,{'vlr_ant','N',10,2})
        AADD(matriz,{'numped_m','C',6,0})
        AADD(matriz,{'ultcomp_m','D',8,0})
        AADD(matriz,{'vlrcomp_m','N',10,2})
        AADD(matriz,{'tot_comp','N',10,2})
        AADD(matriz,{'ult_orc','D',8,0})        //16.01.2003
        AADD(matriz,{'endereco','C',35,0})
        AADD(matriz,{'bairro','C',20,0})
        AADD(matriz,{'codcid','C',4,0})
        AADD(matriz,{'cidade','C',20,0})
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'cep','C',9,0})
        AADD(matriz,{'email','C',40,0})
        AADD(matriz,{'rota','C',70,0})
        AADD(matriz,{'tel1','C',14,0})
        AADD(matriz,{'tel2','C',14,0})
        AADD(matriz,{'fax','C',14,0})
        AADD(matriz,{'cgc','C',14,0})
        AADD(matriz,{'insc','C',19,0})
        AADD(matriz,{'cpf','C',11,0})
        AADD(matriz,{'rg','C',14,0})
        AADD(matriz,{'orgao','C',10,0})
        AADD(matriz,{'dat_emi','D',8,0})
        AADD(matriz,{'comprado','C',15,0})
        AADD(matriz,{'contato','C',15,0})
        AADD(matriz,{'prazo_pag','C',9,0})
        AADD(matriz,{'bloqueio','C',1,0})       //06.11.01
        AADD(matriz,{'spc','C',1,0})
        AADD(matriz,{'area','C',15,0})
        AADD(matriz,{'limite','N',10,2})
        AADD(matriz,{'atac_vare','C',1,0})      // 06.01.2004
        AADD(matriz,{'dia_atras','N',10,2})
        AADD(matriz,{'qtd_doc','N',10,2})
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'nome1','C',40,0})
        AADD(matriz,{'data_nas1','D',8,0})
        AADD(matriz,{'nome2','C',40,0})
        AADD(matriz,{'data_nas2','D',8,0})
        AADD(matriz,{'nome3','C',40,0})
        AADD(matriz,{'data_nas3','D',8,0})
        AADD(matriz,{'nome4','C',40,0})
        AADD(matriz,{'data_nas4','D',8,0})
        AADD(matriz,{'nome5','C',40,0})
        AADD(matriz,{'data_nas5','D',8,0})
        AADD(matriz,{'desconto','N',7,2})
        AADD(matriz,{'dia1_ini','C',2,0})
        AADD(matriz,{'dia1_fim','C',2,0})
        AADD(matriz,{'venc1_dup','C',2,0})
        AADD(matriz,{'dia2_ini','C',2,0})
        AADD(matriz,{'dia2_fim','C',2,0})
        AADD(matriz,{'venc2_dup','C',2,0})

        AADD(matriz,{'empre_c','C',20,0})
        AADD(matriz,{'cargo_c','C',15,0})
        AADD(matriz,{'salario_c','N',10,2})
        AADD(matriz,{'end_c','C',35,0})
        AADD(matriz,{'bairro_c','C',20,0})
        AADD(matriz,{'cidade_c','C',20,0})
        AADD(matriz,{'uf_c','C',2,0})
        AADD(matriz,{'cep_c','C',9,0})
        AADD(matriz,{'fone_c1','C',14,0})
        AADD(matriz,{'fone_c2','C',14,0})
        AADD(matriz,{'loja1','C',25,0})
        AADD(matriz,{'tel_loja1','C',14,0})
        AADD(matriz,{'desde1','D',8,0})
        AADD(matriz,{'loja2','C',25,0})
        AADD(matriz,{'tel_loja2','C',14,0})
        AADD(matriz,{'desde2','D',8,0})
        AADD(matriz,{'nome_r1','C',25,0})
        AADD(matriz,{'fone_r1','C',14,0})
        AADD(matriz,{'nome_r2','C',25,0})
        AADD(matriz,{'fone_r2','C',14,0})
        AADD(matriz,{'banco1','C',10,0})
        AADD(matriz,{'ag1','C',10,0})
        AADD(matriz,{'conta1','C',10,0})
        AADD(matriz,{'banco2','C',10,0})
        AADD(matriz,{'ag2','C',10,0})
        AADD(matriz,{'conta2','C',10,0})
        AADD(matriz,{'cartao1','C',15,0})
        AADD(matriz,{'no1','C',17,0})
        AADD(matriz,{'venc1','D',8,0})
        AADD(matriz,{'cartao2','C',15,0})
        AADD(matriz,{'no2','C',17,0})
        AADD(matriz,{'venc2','D',8,0})
        AADD(matriz,{'pai','C',25,0})
        AADD(matriz,{'mae','C',25,0})
        AADD(matriz,{'end_cob','C',35,0})
        AADD(matriz,{'bairro_cob','C',20,0})
        AADD(matriz,{'cidade_cob','C',20,0})
        AADD(matriz,{'uf_cob','C',2,0})
        AADD(matriz,{'cep_cob','C',9,0})
        AADD(matriz,{'fone_cob','C',14,0})
        AADD(matriz,{'codvend','C',3,0})
        AADD(matriz,{'codoper','C',3,0})
        AADD(matriz,{'codforn','C',4,0})
        AADD(matriz,{'regiao','C',2,0})         // ADM
        AADD(matriz,{'atividade','C',2,0})      // ADM
        AADD(matriz,{'qtdvis','N',4,0})      // ADM
        AADD(matriz,{'uvisita','D',8,0})      // ADM
        AADD(matriz,{'l_obs1','C',77,0})
        AADD(matriz,{'l_obs2','C',77,0})
        AADD(matriz,{'l_obs3','C',77,0})
        AADD(matriz,{'l_obs4','C',77,0})
        AADD(matriz,{'l_obs5','C',77,0})
        AADD(matriz,{'l_obs6','C',77,0})
        AADD(matriz,{'l_obs7','C',77,0})
        AADD(matriz,{'l_obs8','C',77,0})
        AADD(matriz,{'l_obs9','C',77,0})
        AADD(matriz,{'l_obs10','C',77,0})
        AADD(matriz,{'l_obs11','C',77,0})
        AADD(matriz,{'l_obs12','C',77,0})
        AADD(matriz,{'l_obs13','C',77,0})
        AADD(matriz,{'l_obs14','C',77,0})
        AADD(matriz,{'l_obs15','C',77,0})
        AADD(matriz,{'l_obs16','C',77,0})
        AADD(matriz,{'l_obs17','C',77,0})
        AADD(matriz,{'l_obs18','C',77,0})
        AADD(matriz,{'l_obs19','C',77,0})
        AADD(matriz,{'l_obs20','C',77,0})
        AADD(matriz,{'cod_cond','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccli'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacclimv'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCLIMV  ')
        matriz:={ }
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'razao','C',40,0})
        AADD(matriz,{'nome','C',40,0})
        AADD(matriz,{'tipo','C',1,0})
        AADD(matriz,{'quantd','N',12,2})
        AADD(matriz,{'vlr_cust','N',14,2})
        AADD(matriz,{'vlr_venda','N',14,2})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacclimv'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_e'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPED_E  ')
        matriz:={ }
        AADD(matriz,{'recebi','C',1,0})
        AADD(matriz,{'ped_forn','C',6,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'dat_ped','D',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'gramatura','N',12,2})
        AADD(matriz,{'saldo','N',12,2})
        AADD(matriz,{'devolvido','N',9,2})
        AADD(matriz,{'vlr_fat','N',12,4})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'fornece','C',30,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',30,0})
        AADD(matriz,{'comprador','C',15,0})
        AADD(matriz,{'fob','C',1,0})
        AADD(matriz,{'cif','C',1,0})
        AADD(matriz,{'tp_desc','C',1,0})
        AADD(matriz,{'desc1','N',14,6})
        AADD(matriz,{'desc2','N',14,6})
        AADD(matriz,{'desc3','N',14,6})
        AADD(matriz,{'dia1','C',3,0})
        AADD(matriz,{'dia2','C',3,0})
        AADD(matriz,{'dia3','C',3,0})
        AADD(matriz,{'dia4','C',3,0})
        AADD(matriz,{'dia5','C',3,0})
        AADD(matriz,{'frete','N',10,2})
        AADD(matriz,{'transp','C',15,0})
        AADD(matriz,{'encargo_f','N',12,4})
        AADD(matriz,{'disp_asse','N',12,4})
        AADD(matriz,{'tp_ipi','C',1,0})
        AADD(matriz,{'ipi','N',14,6})
        AADD(matriz,{'isento','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_e'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
matriz:={ }
AADD(matriz,{'pempresa','C',3,0})
AADD(matriz,{'pnum_ped','C',6,0})
AADD(matriz,{'ptermina','C',10,0})
AADD(matriz,{'pdat_ped','D',8,0})
AADD(matriz,{'pgru_sub','C',5,0})
AADD(matriz,{'pcod_merc','C',5,0})
AADD(matriz,{'pmerc','C',40,0})
AADD(matriz,{'punidade','C',3,0})
AADD(matriz,{'pespecie','C',4,0})
AADD(matriz,{'penvelope','C',10,0})     //placa do carro
AADD(matriz,{'ppeso','N',8,3})
AADD(matriz,{'ppeso_liq','N',8,3})
AADD(matriz,{'pgramatura','N',9,3})     //VOLUME
AADD(matriz,{'pquantd','N',12,3})
AADD(matriz,{'ppacote','N',12,3})
AADD(matriz,{'ppecas','N',12,3})
AADD(matriz,{'ppre_dig','N',12,4})
AADD(matriz,{'pvlr_fat','N',12,4})
AADD(matriz,{'ppr_venda1','N',12,4})
AADD(matriz,{'ppre_venda','N',12,4})
AADD(matriz,{'pcust_real','N',12,4})
AADD(matriz,{'pcust_merc','N',12,4})
AADD(matriz,{'pcod_cli','C',5,0})
AADD(matriz,{'pcgc','C',14,0})
AADD(matriz,{'pcpf','C',11,0})
AADD(matriz,{'pplaca','C',8,0})
AADD(matriz,{'pcarro','C',20,0})
AADD(matriz,{'pmodelo','C',20,0})       // 30.07.2002
AADD(matriz,{'pkm','C',10,0})           // 30.07.2002
AADD(matriz,{'pcod_fab','C',4,0})
AADD(matriz,{'pfabrica','C',30,0})
AADD(matriz,{'pcod_vend','C',3,0})
AADD(matriz,{'pvendedor','C',30,0})
AADD(matriz,{'pcod_oper','C',3,0})
AADD(matriz,{'pcomi_oper','N',6,2})
AADD(matriz,{'pmontador','C',3,0})
AADD(matriz,{'pcom_mont','N',6,2})
AADD(matriz,{'pmontador1','C',3,0})
AADD(matriz,{'pdesc','N',7,2})          //09.08.2002
AADD(matriz,{'pvlr_pres','N',12,2})     //30.07.2001
AADD(matriz,{'pcod_fin','C',3,0})       //30.07.2001
AADD(matriz,{'pcod_tab','C',3,0})       //25.07.2007
AADD(matriz,{'pcond_veze','C',3,0})
AADD(matriz,{'pcond_inte','C',74,0})
AADD(matriz,{'ptp_vend','C',2,0})
AADD(matriz,{'pvlr_ent','N',12,2})      //29.07.2005
AADD(matriz,{'phora','C',8,0})
AADD(matriz,{'palimento','C',1,0})
AADD(matriz,{'ppag','C',1,0})
AADD(matriz,{'pdatapag','D',8,0})
AADD(matriz,{'pisento','C',1,0})
AADD(matriz,{'ppromocao','N',7,2})
AADD(matriz,{'pcomissao','N',6,2})
AADD(matriz,{'pcomi_mot','N',6,2})
AADD(matriz,{'pprazo','N',3,0})
AADD(matriz,{'pbebida','N',6,2})
AADD(matriz,{'pipi','N',6,2})
AADD(matriz,{'pobs_prod','C',40,0})
AADD(matriz,{'phora_pg','C',8,0})
AADD(matriz,{'pautoriz','C',3,0})
AADD(matriz,{'palt_ope','C',3,0})
AADD(matriz,{'pentreg','C',1,0})
AADD(matriz,{'pent_por','C',3,0})
AADD(matriz,{'pent_dat','D',8,0})
AADD(matriz,{'plib_por','C',3,0})
AADD(matriz,{'plib_dat','D',8,0})

AADD(matriz,{'pexpedi','C',1,0})
AADD(matriz,{'pexp_por','C',3,0})
AADD(matriz,{'pexp_dat','D',8,0})
AADD(matriz,{'pexp_tran','C',4,0})      //04.02.2007
AADD(matriz,{'pexp_mot','C',10,0})      //04.02.2007

AADD(matriz,{'pdat_ped2a','D',8,0})     //28.02.2002
AADD(matriz,{'phora2a','C',8,0})        //28.02.2002
AADD(matriz,{'pqtd2a','N',2,0})         //28.02.2002
AADD(matriz,{'poper2a','C',8,0})        //28.02.2002

*AADD(matriz,{'pterminaex','C',10,0})
*AADD(matriz,{'pnum_pedex','C',6,0})
*AADD(matriz,{'pdat_pedex','D',8,0})
*AADD(matriz,{'pcod_vendex','C',3,0})
*AADD(matriz,{'pcod_operex','C',3,0})

AADD(matriz,{'pdesc_merc','N',6,2})
AADD(matriz,{'pstat_item','C',1,0})
AADD(matriz,{'pind_icms','C',2,0})
AADD(matriz,{'psit_trib','C',1,0})

AADD(matriz,{'chassis','C',20,0})
AADD(matriz,{'descri1','C',60,0})
AADD(matriz,{'descri2','C',60,0})
AADD(matriz,{'descri3','C',60,0})
AADD(matriz,{'descri4','C',60,0})
AADD(matriz,{'descri5','C',60,0})
AADD(matriz,{'pobs1','C',40,0})
AADD(matriz,{'pobs2','C',40,0})
AADD(matriz,{'pobs3','C',40,0})
AADD(matriz,{'pobs4','C',40,0})
AADD(matriz,{'pcod_tran','C',4,0})      //04.02.2002
AADD(matriz,{'pmotivo','C',40,0})
AADD(matriz,{'plocal','C',2,0})
AADD(matriz,{'pproducao','C',1,0})       //27.04.2000
AADD(matriz,{'pos','C',6,0})             //09.08.2002
AADD(matriz,{'pnum_pdv','C',4,0})
AADD(matriz,{'pnum_cup','C',6,0})
AADD(matriz,{'pboleto','C',1,0})
AADD(matriz,{'pvenc_fre','D',8,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_s'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPED_S  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_s'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacorcam'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACORCAM  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacorcam'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'num_ped','C',6,0})
AADD(matriz,{'vlr_ped','N',12,2})
AADD(matriz,{'termina','C',10,0})
AADD(matriz,{'dat_ped','D',8,0})
AADD(matriz,{'cod_cli','C',5,0})
AADD(matriz,{'cgc','C',14,0})
AADD(matriz,{'cpf','C',11,0})
AADD(matriz,{'placa','C',8,0})
AADD(matriz,{'carro','C',20,0})
AADD(matriz,{'modelo','C',20,0})       // 30.07.2002
AADD(matriz,{'km','C',10,0})           // 30.07.2002
AADD(matriz,{'cod_vend','C',3,0})
AADD(matriz,{'vendedor','C',30,0})
AADD(matriz,{'cod_oper','C',3,0})
AADD(matriz,{'comi_oper','N',6,2})
AADD(matriz,{'hora','C',8,0})
AADD(matriz,{'pag','C',1,0})
AADD(matriz,{'datapag','D',8,0})
AADD(matriz,{'lib_por','C',3,0})
AADD(matriz,{'lib_dat','D',8,0})
AADD(matriz,{'lib_vlr','N',12,2})

AADD(matriz,{'expedi','C',1,0})
AADD(matriz,{'exp_por','C',3,0})
AADD(matriz,{'exp_dat','D',8,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_c'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPED_C  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacped_c'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacorc_c'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACORC_C  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacorc_c'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
matriz:={ }
AADD(matriz,{'data_ped','D',8,0})
AADD(matriz,{'numero','C',6,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnoped'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOPED  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnoped'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnoorc'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOORC  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnoorc'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnorom'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOROM  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnorom'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnopro'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOPRO  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnopro'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmov'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACMOV    ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'conjunta','C',8,0})
        AADD(matriz,{'serie','C',4,0})
        AADD(matriz,{'modelo','C',2,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'ped_forn','C',6,0})
        AADD(matriz,{'data_ped','D',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',30,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'data_s_e','D',8,0})
        AADD(matriz,{'ent_sai','C',1,0})
        AADD(matriz,{'saldo_ant','N',12,3})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'quantd_aux','N',12,3})
        AADD(matriz,{'pr_venda1','N',12,4})
        AADD(matriz,{'pr_venda','N',12,4})
        AADD(matriz,{'vl_vend','N',12,4})
        AADD(matriz,{'vl_fatura','N',12,4})
        AADD(matriz,{'pr_unit','N',12,4})
        AADD(matriz,{'cust_mer','N',12,4})
        AADD(matriz,{'vl_merc','N',12,4})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'com_oper','N',6,2})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'com_monta','N',6,2})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'com_monta1','N',6,2})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cliente','C',30,0})
        AADD(matriz,{'cid_cli','C',20,0})
        AADD(matriz,{'uf_cli','C',2,0})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'fornece','C',30,0})
        AADD(matriz,{'icm_aliq','N',8,2})
        AADD(matriz,{'icm','N',12,4})
        AADD(matriz,{'icm_f','N',12,5})
        AADD(matriz,{'icm_sub','N',12,5})
        AADD(matriz,{'fob','C',1,0})
        AADD(matriz,{'cif','C',1,0})
        AADD(matriz,{'dia1','C',2,0})
        AADD(matriz,{'dia2','C',2,0})
        AADD(matriz,{'dia3','C',2,0})
        AADD(matriz,{'embarque','D',8,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'saida','D',8,0})
        AADD(matriz,{'chegada','D',8,0})
        AADD(matriz,{'frete','N',12,4})
        AADD(matriz,{'encargo_f','N',12,4})
        AADD(matriz,{'disp_asse','N',12,4})
        AADD(matriz,{'desc1','N',12,4})
        AADD(matriz,{'desc2','N',12,4})
        AADD(matriz,{'desc3','N',12,4})
        AADD(matriz,{'ipi_aliq','N',8,2})
        AADD(matriz,{'ipi','N',12,4})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'sittrib','C',3,0})
        AADD(matriz,{'tp_venda','C',2,0})
        AADD(matriz,{'cond_vezes','C',3,0})
        AADD(matriz,{'cond_intev','C',2,0})
        AADD(matriz,{'cod_nat','C',5,0})
        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'cancel','C',1,0})
        AADD(matriz,{'obs1','C',55,0})
        AADD(matriz,{'obs2','C',55,0})
        AADD(matriz,{'obs3','C',55,0})
        AADD(matriz,{'obs4','C',55,0})
        AADD(matriz,{'obs5','C',55,0})
        AADD(matriz,{'obs6','C',55,0})
        AADD(matriz,{'cod_nota','C',1,0})
        AADD(matriz,{'producao','C',1,0})       //27.04.2000
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmov'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'tip_sef','C',2,0})
AADD(matriz,{'tipo_nota','C',1,0})
AADD(matriz,{'cod_nota','C',1,0})
AADD(matriz,{'documento','C',8,0})
AADD(matriz,{'serie','C',4,0})
AADD(matriz,{'modelo','C',2,0})
AADD(matriz,{'auxiliar','C',10,0})
AADD(matriz,{'num_ped','C',6,0})
AADD(matriz,{'emissao','D',8,0})
AADD(matriz,{'ent_sai','C',1,0})
AADD(matriz,{'cod_cli','C',5,0})
AADD(matriz,{'cliente','C',30,0})
AADD(matriz,{'cid_cli','C',20,0})
AADD(matriz,{'uf_cli','C',2,0})
AADD(matriz,{'insc_cli','C',14,0})
AADD(matriz,{'cgc_cli','C',14,0})
AADD(matriz,{'cpf_cli','C',14,0})
AADD(matriz,{'cod_vend','C',3,0})
AADD(matriz,{'vl_base','N',10,2})
AADD(matriz,{'vl_icm','N',10,2})
AADD(matriz,{'vl_icmsu','N',10,2})
AADD(matriz,{'vlr_icmsub','N',12,5})
AADD(matriz,{'base_icmsub','N',12,5})
AADD(matriz,{'desc_icm','N',12,5})
AADD(matriz,{'aliq_icm','N',12,2})
AADD(matriz,{'vl_nota','N',10,2})
AADD(matriz,{'vl_prod','N',10,2})
AADD(matriz,{'peso','N',10,2})
AADD(matriz,{'peso_liq','N',10,2})
AADD(matriz,{'tip_frete','C',1,0})
AADD(matriz,{'frete','N',10,2})
AADD(matriz,{'encargo_f','N',10,2})
AADD(matriz,{'disp_asse','N',10,2})
AADD(matriz,{'ipi','N',10,2})
AADD(matriz,{'cod_nat','C',5,0})
AADD(matriz,{'cancel','C',1,0})
AADD(matriz,{'obs1','C',55,0})
AADD(matriz,{'obs2','C',55,0})
AADD(matriz,{'obs3','C',55,0})
AADD(matriz,{'obs4','C',55,0})
AADD(matriz,{'obs5','C',55,0})
AADD(matriz,{'obs6','C',55,0})
AADD(matriz,{'num_cont','C',12,0})
//AADD(matriz,{'modelo','C',2,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactotnt'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTOTNT  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactotnt'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactotb'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTOTB  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactotb'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccaixa'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCAIXA  ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'nota','C',8,0})
        AADD(matriz,{'num_dup','C',12,0})
        AADD(matriz,{'num_ban','C',3,0})
        AADD(matriz,{'cod_ct','C',3,0})
        AADD(matriz,{'documento','C',12,0})
        AADD(matriz,{'venci','D',8,0})
        AADD(matriz,{'valor','N',10,2})
        AADD(matriz,{'tipo_comp','C',2,0})
        AADD(matriz,{'coddesp','C',3,0})
        AADD(matriz,{'descri1','C',40,0})
        AADD(matriz,{'descri2','C',40,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_opera','C',3,0})
        AADD(matriz,{'sangria','C',1,0})
        AADD(matriz,{'op_pg','C',3,0})
        AADD(matriz,{'pg','C',1,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'autoriz','C',3,0})
        AADD(matriz,{'valor_com','N',10,2})
        AADD(matriz,{'comissao','N',12,6})
        AADD(matriz,{'tp_desp','C',1,0})
        AADD(matriz,{'num_pdv','C',4,0})
        AADD(matriz,{'num_cup','C',6,0})
        AADD(matriz,{'fechado','C',2,0})
        AADD(matriz,{'tp_mov','C',1,0})
        AADD(matriz,{'termina','C',10,0})
        AADD(matriz,{'c_s','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccaixa'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacicm'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACICM    ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'documento','C',8,0})
        AADD(matriz,{'deb_cred','N',12,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacicm'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
       // IF mop = NIL
       //         IF ! AbriArq('sacicm','icm','E');RETURN NIL;ENDIF
       //         ADIREG()
       //         ADIREG()
       //        DBUNLOCKALL()
       //         DBCOMMITALL()
       // ENDIF
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnota'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOTA   ')
        matriz:={ }
        AADD(matriz,{'data_nt','D',8,0})
        AADD(matriz,{'numero','C',6,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnota'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnotae'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOTAE  ')
        matriz:={ }
        AADD(matriz,{'data_nte','D',8,0})
        AADD(matriz,{'numeroe','C',6,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnotae'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnotab'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACNOTAB  ')
        matriz:={ }
        AADD(matriz,{'data_ntb','D',8,0})
        AADD(matriz,{'numerob','C',6,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacnotab'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacuf'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACUF     ')
        matriz:={ }
        AADD(matriz,{'estado','C',20,0})
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'percent','N',5,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacuf'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccarta'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCARTA  ')
        matriz:={ }
        AADD(matriz,{'codigo','C',3,0})
        AADD(matriz,{'cartao','C',20,0})
        AADD(matriz,{'sigla','C',2,0})
        AADD(matriz,{'prazo','N',3,0})
        AADD(matriz,{'desconto','N',5,2})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'tipo_conta','C',4,0})
        AADD(matriz,{'tipo_venda','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccarta'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        IF mop = NIL
                IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
                ADIREG()
                car-> codigo := '000'
                car-> cartao := 'CREDCARD'
                ADIREG()
                car-> codigo := '001'
                car-> cartao := 'VISA'
                ADIREG()
                car-> codigo := '002'
                car-> cartao := 'AMEX'
                ADIREG()
                car-> codigo := '003'
                car-> cartao := 'DINERS'
                ADIREG()
                car-> codigo := '004'
                car-> cartao := 'SOLLO'
                ADIREG()
                car-> codigo := '005'
                car-> cartao := 'PRESTA'
                ADIREG()
                car-> codigo := '006'
                car-> cartao := 'HIPERCARD'
                ADIREG()
                car-> codigo := '007'
                car-> cartao := 'FININVEST'
                DBCOMMITALL()
                DBUNLOCKALL()
        ENDIF
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccheq'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCHEQ   ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'data_fund','D',8,0})
        AADD(matriz,{'nota','C',8,0})
        AADD(matriz,{'data_cheq','D',8,0})
        AADD(matriz,{'data_venc','D',8,0})
        AADD(matriz,{'num_ban','C',3,0})
        AADD(matriz,{'num_cheq','C',10,0})
        AADD(matriz,{'cheq_vlr','N',12,2})
        AADD(matriz,{'valor_cheq','N',12,2})
        AADD(matriz,{'motivo','C',30,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'correntist','C',35,0})
        AADD(matriz,{'cpfcnpj','C',14,0})
        AADD(matriz,{'cod_opera','C',3,0})
        AADD(matriz,{'cod_incl','C',3,0})
        AADD(matriz,{'ok','C',1,0})
        AADD(matriz,{'data_ok','D',8,0})
        AADD(matriz,{'vlr_pago','N',12,2})
        AADD(matriz,{'conta','C',1,0})
        AADD(matriz,{'obs','C',50,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccheq'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'tipo','C',2,0})
AADD(matriz,{'numero','C',3,0})
AADD(matriz,{'duplicata','C',12,0})
AADD(matriz,{'valor_dup','N',10,2})
AADD(matriz,{'tip_cli','C',1,0})
AADD(matriz,{'fornec','C',5,0})
AADD(matriz,{'cliente','C',40,0})
AADD(matriz,{'c_cpfcnpj','C',14,0})
AADD(matriz,{'emissao','D',8,0})
AADD(matriz,{'venc','D',8,0})
AADD(matriz,{'venc1','D',8,0})
AADD(matriz,{'datpag','D',8,0})
AADD(matriz,{'dattra','D',8,0})
AADD(matriz,{'datope','D',8,0})
AADD(matriz,{'banco','C',1,0})
AADD(matriz,{'agencia','C',8,0})
AADD(matriz,{'c_c','C',13,0})
AADD(matriz,{'valor','N',10,2})
AADD(matriz,{'vlpago','N',10,2})
AADD(matriz,{'vl_ipi','N',10,2})
AADD(matriz,{'desc','N',10,2})
AADD(matriz,{'juros','N',10,2})
AADD(matriz,{'juros_d','N',10,2})
AADD(matriz,{'pago','C',1,0})
AADD(matriz,{'tip_pg','C',2,0})
AADD(matriz,{'mov_cx','C',1,0})
AADD(matriz,{'conta','C',1,0})
AADD(matriz,{'cheque','C',8,0})
AADD(matriz,{'vendedor','C',3,0})
AADD(matriz,{'num_ped','C',6,0})
AADD(matriz,{'comissao','N',12,6})
AADD(matriz,{'comissao1','N',12,6})    // 01/08/2006
AADD(matriz,{'vlr_tab','N',12,2})      // 01/08/2006
AADD(matriz,{'operador','C',3,0})
AADD(matriz,{'alt_oper','C',3,0})
AADD(matriz,{'doc_tran','C',14,0})
AADD(matriz,{'dat_tran','D',8,0})     //12.06.2002
AADD(matriz,{'cod_forn','C',4,0})     //27.05.2002
AADD(matriz,{'forn_desp','C',40,0})   //11.07.2003
AADD(matriz,{'baix_parc','D',8,0})    //27.05.2002
AADD(matriz,{'oper_parc','C',3,0})    //11.07.2003
AADD(matriz,{'data_fund','D',8,0})     //09.05.2005
AADD(matriz,{'motivo','C',30,0})       //09.05.2005
AADD(matriz,{'cod_incl','C',3,0})      //09.05.2005
AADD(matriz,{'obs','C',60,0})
AADD(matriz,{'obs1','C',60,0})
AADD(matriz,{'corrente','C',35,0})
AADD(matriz,{'cpfcnpj','C',14,0})
AADD(matriz,{'datcobra','D',8,0})
AADD(matriz,{'datprev','D',8,0})
AADD(matriz,{'datproc','D',8,0})        //03.06.2002
AADD(matriz,{'opeproc','C',3,0})        //03.06.2002
AADD(matriz,{'ope_venda','C',3,0})        //31.07.2006
AADD(matriz,{'ope_comi','N',12,6})        //31.07.2006
AADD(matriz,{'pg_comi','D',8,0})        //31.07.2006
AADD(matriz,{'ope_pgcom','C',3,0})        //31.07.2006
AADD(matriz,{'lin1','C',60,0})
AADD(matriz,{'lin2','C',60,0})
AADD(matriz,{'lin3','C',60,0})
AADD(matriz,{'lin4','C',60,0})
AADD(matriz,{'lin5','C',60,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdupr'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACDUPR   ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdupr'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccred'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCRED   ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccred'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdupp'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACDUPP   ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'numero','C',3,0})
        AADD(matriz,{'duplicata','C',10,0})
        AADD(matriz,{'valor_dup','N',10,2})
        AADD(matriz,{'tip_for','C',4,0})
        AADD(matriz,{'fornec','C',4,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'venc','D',8,0})
        AADD(matriz,{'datpag','D',8,0})
        AADD(matriz,{'tp_pg','C',1,0})
        AADD(matriz,{'banco','C',3,0})
        AADD(matriz,{'agencia','C',8,0})
        AADD(matriz,{'c_c','C',13,0})
        AADD(matriz,{'valor','N',10,2})
        AADD(matriz,{'vlpago','N',10,2})
        AADD(matriz,{'desc','N',10,2})
        AADD(matriz,{'juros','N',10,2})
        AADD(matriz,{'pago','C',1,0})
        AADD(matriz,{'conta','C',1,0})
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'obs_b','C',60,0})
        AADD(matriz,{'nbanco','C',3,0})
        AADD(matriz,{'cheque','C',6,0})
        AADD(matriz,{'conta_c','C',13,0})
        AADD(matriz,{'vendedor','C',3,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'operador','C',3,0})
        AADD(matriz,{'dataceite','D',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdupp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccadde'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCADDE  ')
        matriz:={ }
        AADD(matriz,{'codigo','C',3,0})
        AADD(matriz,{'desc1','C',40,0})
        AADD(matriz,{'desc2','C',40,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccadde'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdesp'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACDESP   ')
        matriz:={ }
        AADD(matriz,{'codigo','C',4,0})
        AADD(matriz,{'desc1','C',25,0})
        AADD(matriz,{'tipo','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdesp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
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
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactran'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTRAN   ')
        matriz:={ }
        AADD(matriz,{'cod_tran','C',4,0})
        AADD(matriz,{'razao','C',30,0})
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'endereco','C',35,0})
        AADD(matriz,{'bairro','C',20,0})
        AADD(matriz,{'cidade','C',20,0})
        AADD(matriz,{'uf','C',2,0})
        AADD(matriz,{'cep','C',9,0})
        AADD(matriz,{'cpostal','C',6,0})
        AADD(matriz,{'placa','C',8,0})
        AADD(matriz,{'tel1','C',14,0})
        AADD(matriz,{'tel2','C',14,0})
        AADD(matriz,{'fax','C',14,0})
        AADD(matriz,{'cgc','C',14,0})
        AADD(matriz,{'insc','C',14,0})
        AADD(matriz,{'cpf','C',11,0})
        AADD(matriz,{'carteira','C',1,0})
        AADD(matriz,{'banco','C',1,0})
        AADD(matriz,{'prazo_pag','C',8,0})
        AADD(matriz,{'ct_gerente','C',15,0})
        AADD(matriz,{'ct_vendedo','C',15,0})
        AADD(matriz,{'ct_fatura','C',15,0})
        AADD(matriz,{'ct_cobran','C',15,0})
        AADD(matriz,{'obs','C',30,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactran'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacav'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACAV     ')
        matriz:={ }
        AADD(matriz,{'numero','C',6,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'quantd','N',7,2})
        AADD(matriz,{'preco','N',10,2})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'data_bai','D',8,0})
        AADD(matriz,{'baixa','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacav'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacop'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOP     ')
        matriz:={ }
        AADD(matriz,{'operacao','C',5,0})
        AADD(matriz,{'descr_op','C',40,0})
        AADD(matriz,{'credito','C',1,0})
        AADD(matriz,{'sai_ent','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacop'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        IF ! AbriArq('sacop','op','E');RETURN NIL;ENDIF
        CLOSE op
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacecfcd'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACECFCD ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'nome','C',10,0})
        AADD(matriz,{'caminho','C',60,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacecfcd'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacprn'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPRN    ')
        matriz:={ }
        AADD(matriz,{'impressora','C',20,0})
        AADD(matriz,{'tampag','N',3,0})
        AADD(matriz,{'a_comp17','C',20,0})
        AADD(matriz,{'d_comp17','C',20,0})
        AADD(matriz,{'a_comp20','C',20,0})
        AADD(matriz,{'d_comp20','C',20,0})
        AADD(matriz,{'a_elite','C',20,0})
        AADD(matriz,{'d_elite','C',20,0})
        AADD(matriz,{'a_negrito','C',20,0})
        AADD(matriz,{'d_negrito','C',20,0})
        AADD(matriz,{'a_expande','C',20,0})
        AADD(matriz,{'d_expande','C',20,0})
        AADD(matriz,{'a_8linpol','C',20,0})
        AADD(matriz,{'a_6linpol','C',20,0})
        AADD(matriz,{'a_italico','C',20,0})
        AADD(matriz,{'d_italico','C',20,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacprn'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
****************************************************************************
/*
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsldd'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSLDD  ')
        matriz:={ }
        AADD(matriz,{'data_sld','D',8,0})
        AADD(matriz,{'hora_sld','C',8,0})
        AADD(matriz,{'codigo_sld','C',5,0})
        AADD(matriz,{'saldo_sld','N',10,2})
        AADD(matriz,{'operador','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsldd'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
*/
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacespe'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACESPE   ')
        matriz:={ }
        AADD(matriz,{'cod_espe','C',4,0})
        AADD(matriz,{'descri','C',20,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacespe'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,3]),'')+'sacmovnt'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACMOVNT   ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})
        AADD(matriz,{'tipo_nota','C',1,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'conjunta','C',8,0})
        AADD(matriz,{'serie','C',4,0})
        AADD(matriz,{'modelo','C',2,0})
        AADD(matriz,{'num_ecf','C',10,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'emissao','D',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',30,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'data_s_e','D',8,0})
        AADD(matriz,{'ent_sai','C',1,0})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'pr_venda','N',10,4})
        AADD(matriz,{'vl_vend','N',10,4})
        AADD(matriz,{'vl_fatura','N',10,4})
        AADD(matriz,{'pr_unit','N',10,4})
        AADD(matriz,{'cust_mer','N',10,4})
        AADD(matriz,{'vl_merc','N',10,4})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cliente','C',30,0})
        AADD(matriz,{'cid_cli','C',20,0})
        AADD(matriz,{'uf_cli','C',2,0})
        AADD(matriz,{'insc_cli','C',14,0})
        AADD(matriz,{'cgc_cli','C',14,0})
        AADD(matriz,{'cpf_cli','C',14,0})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'icm_f','N',10,5})
        AADD(matriz,{'icm_sub','N',10,5})
        AADD(matriz,{'vlr_icmsub','N',12,5})
        AADD(matriz,{'base_icmsub','N',12,5})
        AADD(matriz,{'desc_icm','N',12,5})
        AADD(matriz,{'dia1','C',2,0})
        AADD(matriz,{'dia2','C',2,0})
        AADD(matriz,{'dia3','C',2,0})
        AADD(matriz,{'frete','N',10,2})
        AADD(matriz,{'encargo_f','N',10,2})
        AADD(matriz,{'disp_asse','N',10,2})
        AADD(matriz,{'desc1','N',10,2})
        AADD(matriz,{'desc2','N',10,2})
        AADD(matriz,{'desc3','N',10,2})
        AADD(matriz,{'ipi_aliq','N',10,2})
        AADD(matriz,{'ipi','N',10,2})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'sittrib','C',3,0})
        AADD(matriz,{'tp_venda','C',2,0})
        AADD(matriz,{'cond_vezes','C',2,0})
        AADD(matriz,{'cond_intev','C',2,0})
        AADD(matriz,{'cod_nat','C',5,0})
        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'cancel','C',1,0})
        AADD(matriz,{'obs1','C',55,0})
        AADD(matriz,{'obs2','C',55,0})
        AADD(matriz,{'obs3','C',55,0})
        AADD(matriz,{'obs4','C',55,0})
        AADD(matriz,{'obs5','C',55,0})
        AADD(matriz,{'obs6','C',55,0})
        AADD(matriz,{'cod_nota','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,3]),'')+'sacmovnt'+IF(tipo_rdd=1,'.DBF',''),matriz)
ENDIF

IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdolar'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACDOLAR   ')
        matriz:={ }
        AADD(matriz,{'data_dolar','D',8,0})
        AADD(matriz,{'hora_dolar','C',5,0})
        AADD(matriz,{'hora_dola1','C',5,0})
        AADD(matriz,{'hora_dola2','C',5,0})
        AADD(matriz,{'hora_dola3','C',5,0})
        AADD(matriz,{'hora_dola4','C',5,0})
        AADD(matriz,{'vlr_dolar','N',12,4})
        AADD(matriz,{'vlr_dola1','N',12,4})
        AADD(matriz,{'vlr_dola2','N',12,4})
        AADD(matriz,{'vlr_dola3','N',12,4})
        AADD(matriz,{'vlr_dola4','N',12,4})
        AADD(matriz,{'ope_dolar','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacdolar'+IF(tipo_rdd=1,'.DBF',''),matriz)
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacbal'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACBAL    ')
        matriz:={ }
        AADD(matriz,{'data_bal','D',8,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'descricao','C',40,0})
        AADD(matriz,{'contagem','N',9,2})
        AADD(matriz,{'saldo','N',9,2})
        AADD(matriz,{'diferenca','N',9,2})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'operador','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacbal'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacselnf'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSELNF  ')
        matriz:={ }
        AADD(matriz,{'num_sel','C',10,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacselnf'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        IF mop_tip = NIL
                IF ! AbriArq('sacselnf','sel','E');RETURN NIL;ENDIF
                ADIREG()
                sel->num_sel := '000000000'
                DBUNLOCK()
                DBCOMMIT()
        ENDIF
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacfin'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACFIN    ')
        matriz:={ }
        AADD(matriz,{'cod_fin','C',3,0})
        AADD(matriz,{'desc_fin','C',25,0})
        AADD(matriz,{'cobra_fin','C',1,0})
        AADD(matriz,{'taxa_fin','N',8,2})
        AADD(matriz,{'taxa_adm','N',8,2})
        AADD(matriz,{'tipo_fin','C',3,0})
        AADD(matriz,{'aliq_fin','N',10,6})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacfin'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
****************************************************************************
i := 0
FOR i = 1 TO 15
        IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacban'+ALLTRIM(TRANSFORM(i,'99'))+''+IF(tipo_rdd=1,'.DBF',''))
                setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>sacban'+ALLTRIM(TRANSFORM(i,'99'))+'')
                matriz:={ }
                AADD(matriz,{'data','D',8,0})
                AADD(matriz,{'cod_banc','C',3,0})
                AADD(matriz,{'banco','C',20,0})
                AADD(matriz,{'n_banco','C',4,0})
                AADD(matriz,{'agencia','C',8,0})
                AADD(matriz,{'c_c','C',13,0})
                AADD(matriz,{'documento','C',10,0})
                AADD(matriz,{'deb_cred','C',1,0})
                AADD(matriz,{'valor','N',13,2})
                AADD(matriz,{'descricao','C',40,0})
                AADD(matriz,{'saldo','N',13,2})
                AADD(matriz,{'operador','C',3,0})
                AADD(matriz,{'alt','C',1,0})
                DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacban'+ALLTRIM(TRANSFORM(i,'99'))+''+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        ENDIF
NEXT
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacserie'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSERIE  ')
        matriz:={ }
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'serie','C',13,0})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'data_ent','D',8,0})
        AADD(matriz,{'opera_ent','C',3,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'data_sai','D',8,0})
        AADD(matriz,{'garantia','N',4,0})
        AADD(matriz,{'data_fim','D',8,0})
        AADD(matriz,{'opera_sai','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacserie'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactabme'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTABME  ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'grupo','C',6,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'desconto','N',12,2})
        AADD(matriz,{'operado','N',12,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactabme'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacconf'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCONF   ')
        matriz:={ }
        AADD(matriz,{'modulo','C',20,0})
        AADD(matriz,{'descri','C',60,0})
        AADD(matriz,{'nivel','C',9,0})
        AADD(matriz,{'data_alt','D',8,0})
        AADD(matriz,{'oper_alt','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacconf'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'merc_det'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> MERC_DET   ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'venda','C',1,0})
        AADD(matriz,{'n_ped','C',6,0})
        AADD(matriz,{'vlr_venda','N',12,2})
        AADD(matriz,{'vlr_custo','N',12,2})
        AADD(matriz,{'dat_venda','D',8,0})
        AADD(matriz,{'vl_vendido','N',12,2})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'fornece','C',40,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'merc_det'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+"saccep.dbf")
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCEP    ')
        matriz:={ }
        AADD(matriz,{'nome','C',30,0})
        AADD(matriz,{'local','C',8,0})
        AADD(matriz,{'bairro1','C',8,0})
        AADD(matriz,{'tipo','C',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccep'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        limpa(24,00,21,79)

        USE SACCEP ALIAS CEP EXCLUSIVE NEW VIA IF(tipo_rdd=1,'DBFCDX','SQLRDD')
        INDEX ON nome+local+bairro1+tipo TAG nome TO ('saccep')
        CLOSE cep
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+"sacceplo.dbf")
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCEPLO  ')
        AADD(matriz,{'nome','C',30,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacceplo'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
        limpa(24,00,21,79)

        USE SACCEPLO ALIAS CEPLO EXCLUSIVE NEW VIA IF(tipo_rdd=1,'DBFCDX','SQLRDD')
        INDEX ON nome TAG nome TO ('sacceplo')
        CLOSE ceplo
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacvisi'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACVISI   ')
        matriz:={ }
        AADD(matriz,{'nome','C',30,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'horaini','C',8,0})
        AADD(matriz,{'horafim','C',8,0})
        AADD(matriz,{'operador','C',20,0})
        AADD(matriz,{'prob1','C',70,0})
        AADD(matriz,{'prob2','C',70,0})
        AADD(matriz,{'prob3','C',70,0})
        AADD(matriz,{'prob4','C',70,0})
        AADD(matriz,{'prob5','C',70,0})
        AADD(matriz,{'prob6','C',70,0})
        AADD(matriz,{'prob7','C',70,0})
        AADD(matriz,{'prob8','C',70,0})
        AADD(matriz,{'prob9','C',70,0})
        AADD(matriz,{'prob10','C',70,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacvisi'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))

        USE SACVISI ALIAS visi EXCLUSIVE NEW VIA IF(tipo_rdd=1,'DBFCDX','SQLRDD')
        INDEX ON DTOS(visi->data)+SUBSTR(visi->horaini,1,5) TAG dathor TO ('sacvisi')
        CLOSE visi
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsoli'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSOLI   ')
        matriz:={ }
        AADD(matriz,{'nome','C',30,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'operador','C',20,0})
        AADD(matriz,{'prob1','C',70,0})
        AADD(matriz,{'prob2','C',70,0})
        AADD(matriz,{'prob3','C',70,0})
        AADD(matriz,{'prob4','C',70,0})
        AADD(matriz,{'prob5','C',70,0})
        AADD(matriz,{'prob6','C',70,0})
        AADD(matriz,{'prob7','C',70,0})
        AADD(matriz,{'prob8','C',70,0})
        AADD(matriz,{'prob9','C',70,0})
        AADD(matriz,{'prob10','C',70,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsoli'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))

        USE SACSOLI ALIAS soli EXCLUSIVE NEW VIA IF(tipo_rdd=1,'DBFCDX','SQLRDD')
        INDEX ON DTOS(soli->data) TAG dat TO ('sacsoli')
        CLOSE soli
ENDIF

// ARQUIVOS DO PDV *************************
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'regiao'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'> REGIAO   ')
        matriz:={ }
        AADD(matriz,{'codigo','C',2,0})
        AADD(matriz,{'regiao','C',30,0})
        AADD(matriz,{'codvend','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'regiao'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+"PDV_CFG.DBF")
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>PDV_CFG   ')
        aEstrut := {}
        AADD(aEstrut,{"PA_ICMS01","N",5,2})
        AADD(aEstrut,{"PA_ICMS02","N",5,2})
        AADD(aEstrut,{"PA_ICMS03","N",5,2})
        AADD(aEstrut,{"PA_ICMS04","N",5,2})
        AADD(aEstrut,{"PA_ICMS05","N",5,2})
        AADD(aEstrut,{"PA_ICMS06","N",5,2})
        AADD(aEstrut,{"PA_ICMS07","N",5,2})
        AADD(aEstrut,{"PA_ICMS08","N",5,2})
        AADD(aEstrut,{"PA_ICMS09","N",5,2})
        AADD(aEstrut,{"PA_ICMS10","N",5,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+"PDV_CFG",aEstrut)
        IF mop_tip = NIL
                IF ! AbriArq('pdv_cfg','config','E');RETURN NIL;ENDIF
                ADIREG()
                config-> PA_ICMS01  := 17.00
                config-> PA_ICMS02  := 12.00
                config-> PA_ICMS03  := 7.00
                config-> PA_ICMS04  := 0.00
                config-> PA_ICMS05  := 0.00
                config-> PA_ICMS06  := 0.00
                config-> PA_ICMS07  := 0.00
                config-> PA_ICMS08  := 0.00
                config-> PA_ICMS09  := 0.00
                config-> PA_ICMS10  := 0.00
                UNLOCK
        ENDIF
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpdvpd'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPDVPD  ')
        matriz:={ }
        AADD(matriz,{'pedido','N',8,0})
        AADD(matriz,{'data','C',8,0})
        AADD(matriz,{'numpdv','N',3,0})
        AADD(matriz,{'operador','C',8,0})
        AADD(matriz,{'totitens','N',3,0})
        AADD(matriz,{'itemcancel','N',3,0})
        AADD(matriz,{'valpedido','N',9,2})
        AADD(matriz,{'valdescont','N',9,2})
        AADD(matriz,{'valcancel','N',9,2})
        AADD(matriz,{'codvend','N',5,0})
        AADD(matriz,{'status','N',1,0})
        AADD(matriz,{'numcup','N',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpdvpd'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpdvpr'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPDVPR  ')
        matriz:={ }
        AADD(matriz,{'pedido','N',8,0})
        AADD(matriz,{'codproduto','C',20,0})
        AADD(matriz,{'quantidade','N',12,4})
        AADD(matriz,{'valor','N',9,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpdvpr'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactipdc'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTIPDC  ')
        matriz:={ }
        AADD(matriz,{'tipo_doc','C',2,0})
        AADD(matriz,{'descri','C',15,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactipdc'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacreme'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACREME  ')
        matriz:={ }
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'termina','C',10,0})
        AADD(matriz,{'dat_ped','C',8,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'envelope','C',10,0})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'pre_dig','N',12,4})
        AADD(matriz,{'vlr_fat','N',12,4})
        AADD(matriz,{'pre_venda','N',12,4})
        AADD(matriz,{'cust_real','N',12,4})
        AADD(matriz,{'cust_merc','N',12,4})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cgc','C',14,0})
        AADD(matriz,{'cpf','C',11,0})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',30,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'vendedor','C',30,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'cond_vezes','C',3,0})
        AADD(matriz,{'cond_intev','C',40,0})
        AADD(matriz,{'tp_vend','C',2,0})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'prazo','N',3,0})
        AADD(matriz,{'bebida','N',6,2})

        AADD(matriz,{'ind_icms','C',2,0})
        AADD(matriz,{'sit_trib','C',1,0})
        AADD(matriz,{'obs1','C',40,0})
        AADD(matriz,{'obs2','C',40,0})
        AADD(matriz,{'obs3','C',40,0})
        AADD(matriz,{'obs4','C',40,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacreme'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacimpdu'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACIMPDU  ')
        matriz:={ }
        AADD(matriz,{'tipo','C',2,0})
        AADD(matriz,{'numero','C',3,0})
        AADD(matriz,{'duplicata','C',10,0})
        AADD(matriz,{'valor_dup','N',10,2})
        AADD(matriz,{'tip_cli','C',1,0})
        AADD(matriz,{'fornec','C',5,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'emissao','C',8,0})
        AADD(matriz,{'venc','C',8,0})
        AADD(matriz,{'datpag','C',8,0})
        AADD(matriz,{'dattra','C',8,0})
        AADD(matriz,{'banco','C',3,0})
        AADD(matriz,{'agencia','C',8,0})
        AADD(matriz,{'c_c','C',13,0})
        AADD(matriz,{'valor','N',10,2})
        AADD(matriz,{'vlpago','N',10,2})
        AADD(matriz,{'desc','N',10,2})
        AADD(matriz,{'juros','N',10,2})
        AADD(matriz,{'pago','C',1,0})
        AADD(matriz,{'tip_pg','C',2,0})
        AADD(matriz,{'mov_cx','C',1,0})
        AADD(matriz,{'conta','C',1,0})
        AADD(matriz,{'cheque','C',8,0})
        AADD(matriz,{'vendedor','C',3,0})
        AADD(matriz,{'num_ped','C',6,0})
        AADD(matriz,{'comissao','N',12,6})
        AADD(matriz,{'operador','C',3,0})
        AADD(matriz,{'alt_oper','C',3,0})
        AADD(matriz,{'doc_tran','C',12,0})
        AADD(matriz,{'cod_forn','C',4,0})     //27.05.2002
        AADD(matriz,{'baix_parc','C',8,0})    //27.05.2002
        AADD(matriz,{'obs','C',60,0})
        AADD(matriz,{'corrente','C',35,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacimpdu'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmensa'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACMENSA  ')
        matriz:={ }
        AADD(matriz,{'data_men','D',8,0})
        AADD(matriz,{'hora_men','C',8,0})
        AADD(matriz,{'cod_emi','C',3,0})
        AADD(matriz,{'cod_rec','C',3,0})
        AADD(matriz,{'assunto','C',40,0})
        AADD(matriz,{'lin1','C',70,0})
        AADD(matriz,{'lin2','C',70,0})
        AADD(matriz,{'lin3','C',70,0})
        AADD(matriz,{'lin4','C',70,0})
        AADD(matriz,{'lin5','C',70,0})
        AADD(matriz,{'lin6','C',70,0})
        AADD(matriz,{'lin7','C',70,0})
        AADD(matriz,{'lin8','C',70,0})
        AADD(matriz,{'lin9','C',70,0})
        AADD(matriz,{'lin10','C',70,0})
        AADD(matriz,{'lin11','C',70,0})
        AADD(matriz,{'lin12','C',70,0})
        AADD(matriz,{'lin13','C',70,0})
        AADD(matriz,{'lin14','C',70,0})
        AADD(matriz,{'lin15','C',70,0})
        AADD(matriz,{'lin16','C',70,0})
        AADD(matriz,{'lin17','C',70,0})
        AADD(matriz,{'lin18','C',70,0})
        AADD(matriz,{'lin19','C',70,0})
        AADD(matriz,{'lin20','C',70,0})
        AADD(matriz,{'ler','C',1,0})
        AADD(matriz,{'data_ler','D',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmensa'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacocorr'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOCORR  ')
        matriz:={ }
        AADD(matriz,{'tipo','C',3,0})
        AADD(matriz,{'documento' ,'C',6,0})
        AADD(matriz,{'data_exe','D',8,0})
        AADD(matriz,{'hora_exe','C',8,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'data_oco','D',8,0})
        AADD(matriz,{'hora_oco','C',8,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'quantd','N',12,3})
        AADD(matriz,{'saldo_atu','N',12,3})
        AADD(matriz,{'saldo_exe','N',12,3})
        AADD(matriz,{'pedido','C',1,0})
        AADD(matriz,{'obs','C',40,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacocorr'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacctvis'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCTVIS  ')
        matriz:={ }
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cliente' ,'C',40,0})
        AADD(matriz,{'data_proc','D',8,0})
        AADD(matriz,{'data_visi','D',8,0})
        AADD(matriz,{'hora_ini','C',8,0})
        AADD(matriz,{'hora_fim','C',8,0})
        AADD(matriz,{'cod_tec','C',3,0})
        AADD(matriz,{'obs1','C',70,0})
        AADD(matriz,{'obs2','C',70,0})
        AADD(matriz,{'obs3','C',70,0})
        AADD(matriz,{'obs4','C',70,0})
        AADD(matriz,{'obs5','C',70,0})
        AADD(matriz,{'cod_oper','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacctvis'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'num_roma','C',6,0})
AADD(matriz,{'dat_roma' ,'D',8,0})
AADD(matriz,{'num_ped','C',6,0})
AADD(matriz,{'cod_mot','C',4,0})
AADD(matriz,{'placa_mot','C',8,0})
AADD(matriz,{'cod_ope','C',3,0})
AADD(matriz,{'entregue','D',8,0})
AADD(matriz,{'cancel','C',1,0})
AADD(matriz,{'ped_orc','C',1,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacroma'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACROMA  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacroma'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacprodu'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPRODU ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacprodu'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccid'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCID   ')
        matriz:={ }
        AADD(matriz,{'cod_cid','C',4,0})
        AADD(matriz,{'cidade' ,'C',20,0})
        AADD(matriz,{'cep' ,'C',8,0})
        AADD(matriz,{'uf' ,'C',2,0})
        AADD(matriz,{'cod_ope','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccid'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saclog'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACLOG   ')
        matriz:={ }
        AADD(matriz,{'data_sis','D',8,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'tipo','C',10,0})
        AADD(matriz,{'aut_oper','C',3,0})
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'cod_prod','C',5,0})
        AADD(matriz,{'documento','C',10,0})
        AADD(matriz,{'quantd1','N',14,3})
        AADD(matriz,{'quantd2','N',14,3})
        AADD(matriz,{'valor1','N',14,3})
        AADD(matriz,{'valor2','N',14,3})
        AADD(matriz,{'venc1','D',8,0})
        AADD(matriz,{'venc2','D',8,0})
        AADD(matriz,{'modulo','C',20,0})
        AADD(matriz,{'descri','C',60,0})
        AADD(matriz,{'cod_aut','C',17,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saclog'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsef'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSEF   ')
        matriz:={ }
        AADD(matriz,{'nome','C',50,0})
        AADD(matriz,{'cpf','C',11,0})
        AADD(matriz,{'crc','C',10,0})
        AADD(matriz,{'tel1','C',12,0})
        AADD(matriz,{'tel2','C',12,0})
        AADD(matriz,{'fax','C',12,0})
        AADD(matriz,{'caixa_p','C',6,0})
        AADD(matriz,{'email','C',50,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsef'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
/*
IF ! FILE('sacprint'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPRINT ')
        matriz:={ }
        AADD(matriz,{'nome_imp','C',30,0})
        AADD(matriz,{'porta','C',5,0})
        AADD(matriz,{'tipo','C',02,0})
        DBCREATE('sacprint'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
*/
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacinve'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACINVE  ')
        matriz:={ }
        AADD(matriz,{'cod_barr','C',13,0})
        AADD(matriz,{'cod_barr1','C',29,0})      // 09.09.2003
        AADD(matriz,{'cod_barr2','C',29,0})      // 09.09.2003
        AADD(matriz,{'cod_barr3','C',29,0})      // 09.09.2003
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'p_lucro','N',7,2})
        AADD(matriz,{'promocao','N',7,2})
        AADD(matriz,{'disp','C',1,0})
        AADD(matriz,{'livre_desc','C',1,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'est_min','N',12,2})
        AADD(matriz,{'est_max','N',12,2})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',40,0})
        AADD(matriz,{'dat_ult_s','D',8,0})
        AADD(matriz,{'dat_ult_e','D',8,0})
        AADD(matriz,{'a_pr_unit','N',12,4})
        AADD(matriz,{'a_vlr_merc','N',12,4})
        AADD(matriz,{'a_cust_mer','N',12,4})
        AADD(matriz,{'a_cust_rea','N',12,4})
        AADD(matriz,{'a_pr_venda','N',12,4})
        AADD(matriz,{'a_pr_medio','N',12,4})
        AADD(matriz,{'pr_unit','N',12,4})
        AADD(matriz,{'vlr_merc','N',12,4})
        AADD(matriz,{'cust_merc','N',12,4})
        AADD(matriz,{'cust_real','N',12,4})
        AADD(matriz,{'pr_venda','N',12,4})
        AADD(matriz,{'pr_medio','N',12,4})
        AADD(matriz,{'varejo','N',10,2})
        AADD(matriz,{'ul_alt_pr','D',8,0})
        AADD(matriz,{'opera_pr','C',3,0})
        AADD(matriz,{'tipo_op','C',2,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'saldo_fis','N',12,2})
        AADD(matriz,{'saldo_mer','N',12,2})
        AADD(matriz,{'saldo_av','N',12,2})
        AADD(matriz,{'saldo_comp','N',12,2})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'icm_sub','N',12,4})
        AADD(matriz,{'ipi','N',12,4})
        AADD(matriz,{'cod_fis','C',10,0})
        AADD(matriz,{'local','C',4,0})
        AADD(matriz,{'gramatura','N',8,2})
        AADD(matriz,{'fatconv','N',8,2})
        AADD(matriz,{'doc_ent_a','C',10,0})
        AADD(matriz,{'doc_ent','C',10,0})
        AADD(matriz,{'envelope','C',10,0})
        AADD(matriz,{'desc_merc','N',6,2})
** CAMPOS FISCAIS
        AADD(matriz,{'stat_item','C',1,0})
        AADD(matriz,{'ind_icms','C',2,0})
        AADD(matriz,{'sit_trib','C',1,0})
**
        AADD(matriz,{'dolar','C',1,0})
        AADD(matriz,{'aplic0','C',60,0})
        AADD(matriz,{'aplic1','C',60,0})
        AADD(matriz,{'aplic2','C',60,0})
        AADD(matriz,{'aplic3','C',60,0})
        AADD(matriz,{'aplic4','C',60,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacinve'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmovsc'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACMOVSC  ')
        matriz:={ }
        AADD(matriz,{'linha','C',160,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'operacao','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacmovsc'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacbalan'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACBALAN  ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'doc','C',10,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'descricao','C',40,0})
        AADD(matriz,{'saldo','N',13,3})
        AADD(matriz,{'operador','C',3,0})
        AADD(matriz,{'obs','C',55,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacbalan'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacoss'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOSS  ')
        matriz:={ }
        AADD(matriz,{'empresa','C',3,0})         // No. OS
        AADD(matriz,{'num_os','C',6,0})         // No. OS
        AADD(matriz,{'operador','C',3,0})       // COD. OPERADOR
        AADD(matriz,{'data_ent','D',8,0})       // DATA DA ENTRADA
        AADD(matriz,{'hora_ent','C',8,0})       // HORA DA ENTRADA
        AADD(matriz,{'marca','C',15,0})
        AADD(matriz,{'modelo','C',15,0})
        AADD(matriz,{'serie','C',15,0})
        AADD(matriz,{'numero','C',12,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'diag1','C',60,0})         // DIAGNOSTICO DO CLIENTE
        AADD(matriz,{'diag2','C',60,0})
        AADD(matriz,{'diag3','C',60,0})
        AADD(matriz,{'diag4','C',60,0})
        AADD(matriz,{'diag5','C',60,0})
        AADD(matriz,{'diag6','C',60,0})
        AADD(matriz,{'diag7','C',60,0})
        AADD(matriz,{'diag8','C',60,0})
        AADD(matriz,{'diag9','C',60,0})
        AADD(matriz,{'diag10','C',60,0})
        AADD(matriz,{'vlr_esti','N',13,3})      // VALOR ESTIPULADO
        AADD(matriz,{'prev_ent','D',8,0})       // PREVISAO DA ENTREGA

        AADD(matriz,{'garantia','C',1,0})
        AADD(matriz,{'ngarantia','C',1,0})
        AADD(matriz,{'gconserto','C',1,0})

        AADD(matriz,{'cod_tec','C',3,0})        // COD. DO TECNICO
        AADD(matriz,{'diag_tec1','C',60,0})     // DIAGNOSTICO DO TECNICO
        AADD(matriz,{'diag_tec2','C',60,0})
        AADD(matriz,{'diag_tec3','C',60,0})
        AADD(matriz,{'diag_tec4','C',60,0})
        AADD(matriz,{'diag_tec5','C',60,0})
        AADD(matriz,{'autorizo','C',15,0})      // AUTORIZADO POR
        AADD(matriz,{'dat_ini','D',8,0})        // DATA DO INICIO DO CONSERTO
        AADD(matriz,{'hora_ini','C',8,0})       // HORA
        AADD(matriz,{'dat_fim','D',8,0})        // DATA DO FIM DO CONSERTO
        AADD(matriz,{'hora_fim','C',8,0})       // HORA
        AADD(matriz,{'acesso1','C',3,0})        // COD.ACESSORIOS DO APARELHO
        AADD(matriz,{'acesso2','C',3,0})
        AADD(matriz,{'acesso3','C',3,0})
        AADD(matriz,{'acesso4','C',3,0})
        AADD(matriz,{'acesso5','C',3,0})
        AADD(matriz,{'acesso6','C',3,0})
        AADD(matriz,{'acesso7','C',3,0})
        AADD(matriz,{'acesso8','C',3,0})
        AADD(matriz,{'acesso9','C',3,0})
        AADD(matriz,{'acesso10','C',3,0})
        AADD(matriz,{'pag','C',1,0})            // DATA DA BAIXA
        AADD(matriz,{'baixa','D',8,0})          // DATA DA BAIXA
        AADD(matriz,{'num_ped','C',6,0})        // NO.PEDIDO
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacoss'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
//sacdbf2()
//RETURN  NIL

************************************* F I M **************************************
//FUNCTION sacdbf2

IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacospro'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOSPRO  ')
        matriz:={ }
        AADD(matriz,{'num_os','C',6,0})         // No.OS
        AADD(matriz,{'dat_ent','D',8,0})        // DATA ENTRADA
        AADD(matriz,{'operador','C',3,0})       // COD.OPERADOR
        AADD(matriz,{'cod_merc','C',5,0})       // COD. MERCADORIA
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'quantd','N',13,3})
        AADD(matriz,{'vlr_fat','N',13,3})
        AADD(matriz,{'obs_prod','C',40,0})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'cod_tec','C',3,0})        // COD.TECNICO
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacospro'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacosno'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOSNO  ')
        matriz:={ }
        AADD(matriz,{'num_os','C',6,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacosno'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacosac'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOSAC  ')
        matriz:={ }
        AADD(matriz,{'codigo','C',3,0})
        AADD(matriz,{'descri','C',20,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacosac'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'data','D',8,0})
AADD(matriz,{'cod_cli','C',5,0})
AADD(matriz,{'cliente','C',40,0})
AADD(matriz,{'uf_cli','C',2,0})
AADD(matriz,{'cod_pro','C',5,0})
AADD(matriz,{'produto','C',40,0})
AADD(matriz,{'cod_forn','C',4,0})
AADD(matriz,{'fornece','C',40,0})
AADD(matriz,{'quantd','N',13,3})
AADD(matriz,{'motivo','C',50,0})
AADD(matriz,{'motivo1','C',50,0})
AADD(matriz,{'motivo2','C',50,0})
AADD(matriz,{'vendedor','C',3,0})
AADD(matriz,{'oper_incl','C',3,0})
AADD(matriz,{'data_baix','D',8,0})
AADD(matriz,{'oper_baix','C',3,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacass'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACASS  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacass'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsolpr'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACSOLPR  ')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacsolpr'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
matriz:={ }
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'ecferro'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>ECFERRO ')
        matriz:={ }
        AADD(matriz,{'tipo','C',1,0})
        AADD(matriz,{'codigo','N',2,0})
        AADD(matriz,{'descricao','C',70,0})
        AADD(matriz,{'avisa','L',1,0})
        AADD(matriz,{'repete','L',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'ecferro'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacclf'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCLF  ')
        matriz:={ }
        AADD(matriz,{'codigo','C',2,0})
        AADD(matriz,{'numero','C',10,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacclf'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacrl'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACRL   ')
        matriz:={ }
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacrl'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacproto'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPROTO')
        matriz:={ }
        AADD(matriz,{'cod_oper','C',3,0})
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'doc','C',6,0})
        AADD(matriz,{'transp','C',20,0})
        AADD(matriz,{'fornece','C',4,0})
        AADD(matriz,{'cfop','C',5,0})
        AADD(matriz,{'dat_age','D',8,0})
        AADD(matriz,{'dat_Emi','D',8,0})
        AADD(matriz,{'dat_sai','D',8,0})
        AADD(matriz,{'item','N',6,0})
        AADD(matriz,{'volume','N',10,3})
        AADD(matriz,{'valor','N',13,2})
        AADD(matriz,{'dupli1','C',6,0})
        AADD(matriz,{'venc1','D',8,0})
        AADD(matriz,{'ok1','D',8,0})
        AADD(matriz,{'vlr_dup1','N',13,2})
        AADD(matriz,{'dupli2','C',6,0})
        AADD(matriz,{'venc2','D',8,0})
        AADD(matriz,{'ok2','D',8,0})
        AADD(matriz,{'vlr_dup2','N',13,2})
        AADD(matriz,{'dupli3','C',6,0})
        AADD(matriz,{'venc3','D',8,0})
        AADD(matriz,{'ok3','D',8,0})
        AADD(matriz,{'vlr_dup3','N',13,2})
        AADD(matriz,{'dupli4','C',6,0})
        AADD(matriz,{'venc4','D',8,0})
        AADD(matriz,{'ok4','D',8,0})
        AADD(matriz,{'vlr_dup4','N',13,2})
        AADD(matriz,{'dupli5','C',6,0})
        AADD(matriz,{'venc5','D',8,0})
        AADD(matriz,{'ok5','D',8,0})
        AADD(matriz,{'vlr_dup5','N',13,2})
        AADD(matriz,{'dupli6','C',6,0})
        AADD(matriz,{'venc6','D',8,0})
        AADD(matriz,{'ok6','D',8,0})
        AADD(matriz,{'vlr_dup6','N',13,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacproto'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacrepro'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACREPRO')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'ope','C',3,0})
        AADD(matriz,{'cod_pro','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'valor','N',13,2})
        AADD(matriz,{'qtd','N',13,3})
        AADD(matriz,{'data_ok','D',8,0})
        AADD(matriz,{'ope_ok','C',3,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacrepro'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactabpg'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACTABPG')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'ope','C',3,0})
        AADD(matriz,{'codigo','C',3,0})
        AADD(matriz,{'Descri','C',20,0})
        AADD(matriz,{'percent','N',10,2})
        AADD(matriz,{'cond','C',3,0})
        AADD(matriz,{'dia1','N',3,0})
        AADD(matriz,{'dia2','N',3,0})
        AADD(matriz,{'dia3','N',3,0})
        AADD(matriz,{'dia4','N',3,0})
        AADD(matriz,{'dia5','N',3,0})
        AADD(matriz,{'dia6','N',3,0})
        AADD(matriz,{'dia7','N',3,0})
        AADD(matriz,{'dia8','N',3,0})
        AADD(matriz,{'dia9','N',3,0})
        AADD(matriz,{'dia10','N',3,0})
        AADD(matriz,{'dia11','N',3,0})
        AADD(matriz,{'dia12','N',3,0})
        AADD(matriz,{'dia13','N',3,0})
        AADD(matriz,{'dia14','N',3,0})
        AADD(matriz,{'dia15','N',3,0})
        AADD(matriz,{'comi_tab','N',6,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sactabpg'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccotac'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCOTAC')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'ope','C',3,0})
        AADD(matriz,{'cod_forn','C',4,0})
        AADD(matriz,{'fornece','C',40,0})
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'produto','C',40,0})
        AADD(matriz,{'valor1','N',12,2})
        AADD(matriz,{'cond1','C',30,0})
        AADD(matriz,{'valor2','N',12,2})
        AADD(matriz,{'cond2','C',30,0})
        AADD(matriz,{'valor3','N',12,2})
        AADD(matriz,{'cond3','C',30,0})
        AADD(matriz,{'valor4','N',12,2})
        AADD(matriz,{'cond4','C',30,0})
        AADD(matriz,{'valor5','N',12,2})
        AADD(matriz,{'cond5','C',30,0})
        AADD(matriz,{'obs','C',50,0})
        AADD(matriz,{'obs1','C',50,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccotac'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpped'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPPED')
        matriz:={ }
        AADD(matriz,{'iden','C',3,0})
        AADD(matriz,{'flag','C',1,0})
        AADD(matriz,{'cod_ped','C',10,0})
        AADD(matriz,{'ped_pock','C',10,0})
        AADD(matriz,{'num_cli','C',10,0})
        AADD(matriz,{'tipoop','C',15,0})
        AADD(matriz,{'dataped','C',10,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'tipo_fre','C',10,0})
        AADD(matriz,{'frete','C',14,0})
        AADD(matriz,{'vlr_fre','C',14,0})
        AADD(matriz,{'cod_vend','C',3,0})
        AADD(matriz,{'cod_tran','C',4,0})
        AADD(matriz,{'tip_tran','C',4,0})
        AADD(matriz,{'cod_dest','C',4,0})
        AADD(matriz,{'tab_preco','C',5,0})
        AADD(matriz,{'cond_v','C',5,0})
        AADD(matriz,{'datapg','C',10,0})
        AADD(matriz,{'form_cob','C',10,0})
        AADD(matriz,{'tip_cob','C',20,0})
        AADD(matriz,{'fatura','C',10,0})
        AADD(matriz,{'dataprev','C',10,0})
        AADD(matriz,{'datacheq','C',10,0})
        AADD(matriz,{'vlr_ped','C',14,0})
        AADD(matriz,{'sld_ped','C',14,0})
        AADD(matriz,{'sld_can','C',14,0})
        AADD(matriz,{'obs1','C',40,0})
        AADD(matriz,{'obs2','C',40,0})
        AADD(matriz,{'obs3','C',40,0})
        AADD(matriz,{'obs4','C',40,0})
        AADD(matriz,{'status','C',1,0})
        AADD(matriz,{'obsnf','C',60,0})
        AADD(matriz,{'condpg','C',5,0})
        AADD(matriz,{'modopg','C',5,0})
        AADD(matriz,{'avaliado','C',1,0})
        AADD(matriz,{'dat_proc','D',8,0})
        AADD(matriz,{'processo','C',1,0})
        AADD(matriz,{'documento','C',6,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpped'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpite'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPITE')
        matriz:={ }
        AADD(matriz,{'iden','C',3,0})
        AADD(matriz,{'flag','C',1,0})
        AADD(matriz,{'coditem','C',10,0})
        AADD(matriz,{'codpedido','C',10,0})
        AADD(matriz,{'itempock','C',10,0})
        AADD(matriz,{'codprod','C',13,0})
        AADD(matriz,{'qtdped','C',14,0})
        AADD(matriz,{'qtdsld','C',14,0})
        AADD(matriz,{'qtdemb','C',14,0})
        AADD(matriz,{'qtdcan','C',14,0})
        AADD(matriz,{'vlrunit','C',14,0})
        AADD(matriz,{'ipi','C',14,0})
        AADD(matriz,{'desc','C',14,0})
        AADD(matriz,{'formpg','C',10,0})
        AADD(matriz,{'unidade','C',3,0})
        AADD(matriz,{'dat_proc','D',8,0})
        AADD(matriz,{'processo','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpite'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
matriz:={ }
AADD(matriz,{'campo','C',200,0})
AADD(matriz,{'data_proc','D',8,0})
AADD(matriz,{'oper','C',3,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpalm'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPALM')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpalm'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpalm1'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPALM1')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpalm1'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
matriz:={ }
AADD(matriz,{'numero','C',6,0})
AADD(matriz,{'numero1','C',6,0})
AADD(matriz,{'data','D',8,0})
AADD(matriz,{'no_pocke','C',6,0})
AADD(matriz,{'codtabpr','C',3,0})
AADD(matriz,{'cod_cli','C',6,0})
AADD(matriz,{'oper','C',3,0})
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccbped'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCBPED')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccbped'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccborc'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACCBORC')
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'saccborc'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpcli'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACPCLI   ')
        matriz:={ }
        AADD(matriz,{'iden','C',3,0})
        AADD(matriz,{'flag','C',1,0})
        AADD(matriz,{'cod_cli','C',5,0})
        AADD(matriz,{'cod_pock','C',5,0})
        AADD(matriz,{'razao','C',40,0})
        AADD(matriz,{'nome','C',40,0})
        AADD(matriz,{'cgc','C',14,0})
        AADD(matriz,{'insc','C',19,0})
        AADD(matriz,{'cep','C',9,0})
        AADD(matriz,{'endereco','C',35,0})
        AADD(matriz,{'compl','C',35,0})
        AADD(matriz,{'bairro','C',20,0})
        AADD(matriz,{'codcid','C',4,0})
        AADD(matriz,{'rota','C',50,0})
        AADD(matriz,{'ddd','C',5,0})
        AADD(matriz,{'tel1','C',14,0})
        AADD(matriz,{'tel2','C',14,0})
        AADD(matriz,{'fax','C',14,0})
        AADD(matriz,{'email','C',40,0})
        AADD(matriz,{'email2','C',40,0})
        AADD(matriz,{'ramo','C',15,0})
        AADD(matriz,{'situacao','C',1,0})
        AADD(matriz,{'prazo_pag','C',9,0})
        AADD(matriz,{'limite','C',14,0})
        AADD(matriz,{'media','C',1,0})      // 06.01.2004
        AADD(matriz,{'pri_comp','C',8,0})
        AADD(matriz,{'ult_comp','C',8,0})
        AADD(matriz,{'modo','C',10,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacpcli'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sachist'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACHIST   ')
        matriz:={ }
        AADD(matriz,{'data','D',8,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'codcli','C',5,0})
        AADD(matriz,{'descricao','C',60,0})
        AADD(matriz,{'operador','C',3,0})
        DBCREATE('sachist'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(mcaminho),'')+'sacobs'+IF(tipo_rdd=1,'.DBF',''))
        setcor(3);DEVPOS(00,00);DEVOUT(STRZERO(f++,3)+'>SACOBS    ')
        matriz:={ }
        AADD(matriz,{'obs','C',60,0})
        DBCREATE('sacobs'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(mcaminho+'texto.dbf')
        matsen:={ }
        AADD(matsen,{'data','D',8,0})
        AADD(matsen,{'nome','C',10,0})
        AADD(matsen,{'texto','M',10,0})
        DBCREATE(mcaminho+'texto.dbf',matsen)
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
matriz:={ }
AADD(matriz,{'empresa','C',3,0})
AADD(matriz,{'tipo_nota','C',1,0})
AADD(matriz,{'documento','C',10,0})
AADD(matriz,{'conjunta','C',8,0})
AADD(matriz,{'serie','C',4,0})
AADD(matriz,{'modelo','C',2,0})
AADD(matriz,{'num_ecf','C',10,0})
AADD(matriz,{'num_ped','C',6,0})
AADD(matriz,{'emissao','D',8,0})
AADD(matriz,{'gru_sub','C',5,0})
AADD(matriz,{'codigo','C',5,0})
AADD(matriz,{'produto','C',40,0})
AADD(matriz,{'especie','C',4,0})
AADD(matriz,{'cod_fab','C',4,0})
AADD(matriz,{'fabrica','C',30,0})
AADD(matriz,{'unidade','C',2,0})
AADD(matriz,{'data_s_e','D',8,0})
AADD(matriz,{'ent_sai','C',1,0})
AADD(matriz,{'quantd','N',12,3})
AADD(matriz,{'pr_venda','N',10,4})
AADD(matriz,{'vl_vend','N',10,4})
AADD(matriz,{'vl_fatura','N',10,4})
AADD(matriz,{'pr_unit','N',10,4})
AADD(matriz,{'cust_mer','N',10,4})
AADD(matriz,{'vl_merc','N',10,4})
AADD(matriz,{'cod_vend','C',3,0})
AADD(matriz,{'cod_oper','C',3,0})
AADD(matriz,{'comissao','N',6,2})
AADD(matriz,{'montador','C',3,0})
AADD(matriz,{'montador1','C',3,0})
AADD(matriz,{'cod_cli','C',5,0})
AADD(matriz,{'cliente','C',30,0})
AADD(matriz,{'cid_cli','C',20,0})
AADD(matriz,{'uf_cli','C',2,0})
AADD(matriz,{'insc_cli','C',14,0})
AADD(matriz,{'cgc_cli','C',14,0})
AADD(matriz,{'cpf_cli','C',14,0})
AADD(matriz,{'icm','N',10,2})
AADD(matriz,{'icm_f','N',10,5})
AADD(matriz,{'icm_sub','N',10,5})
AADD(matriz,{'vlr_icmsub','N',12,5})
AADD(matriz,{'base_icmsub','N',12,5})
AADD(matriz,{'desc_icm','N',12,5})
AADD(matriz,{'dia1','C',2,0})
AADD(matriz,{'dia2','C',2,0})
AADD(matriz,{'dia3','C',2,0})
AADD(matriz,{'frete','N',10,2})
AADD(matriz,{'encargo_f','N',10,2})
AADD(matriz,{'disp_asse','N',10,2})
AADD(matriz,{'desc1','N',10,2})
AADD(matriz,{'desc2','N',10,2})
AADD(matriz,{'desc3','N',10,2})
AADD(matriz,{'ipi_aliq','N',10,2})
AADD(matriz,{'ipi','N',10,2})
AADD(matriz,{'peso','N',8,3})
AADD(matriz,{'peso_liq','N',8,3})
AADD(matriz,{'alimento','C',1,0})
AADD(matriz,{'bebida','N',6,2})
AADD(matriz,{'tipo','C',2,0})
AADD(matriz,{'isento','C',1,0})
AADD(matriz,{'sittrib','C',3,0})
AADD(matriz,{'tp_venda','C',2,0})
AADD(matriz,{'cond_vezes','C',2,0})
AADD(matriz,{'cond_intev','C',2,0})
AADD(matriz,{'cod_nat','C',5,0})
AADD(matriz,{'chassis','C',20,0})
AADD(matriz,{'descri1','C',60,0})
AADD(matriz,{'descri2','C',60,0})
AADD(matriz,{'descri3','C',60,0})
AADD(matriz,{'descri4','C',60,0})
AADD(matriz,{'descri5','C',60,0})
AADD(matriz,{'cancel','C',1,0})
AADD(matriz,{'obs1','C',55,0})
AADD(matriz,{'obs2','C',55,0})
AADD(matriz,{'obs3','C',55,0})
AADD(matriz,{'obs4','C',55,0})
AADD(matriz,{'obs5','C',55,0})
AADD(matriz,{'obs6','C',55,0})
AADD(matriz,{'cod_nota','C',1,0})
//IF ! FILE(m_indiv[1,3]+'sacmovnt.dbf')
//        DBCREATE(mcaminho+'sacmovnt.dbf',matriz)
//ENDIF
ERASE (ALLTRIM(m_indiv[1,6])+'sacmovcn'+IF(tipo_rdd=1,'.DBF',''))
IF ! FILE(ALLTRIM(m_indiv[1,6])+'sacmovcn.dbf')
        IF tipo_rdd=1
                DBCREATE(ALLTRIM(m_indiv[1,6])+'sacmovcn.DBF',matriz,'DBFCDX')
        ELSE
                DBCREATE('sacmovcn',matriz,'SQLRDD')
        ENDIF
ENDIF
IF ! FILE(ALLTRIM(m_indiv[1,3])+'sacmovb.dbf')
        IF tipo_rdd=1
                DBCREATE(ALLTRIM(m_indiv[1,3])+'sacmovb.DBF',matriz,'DBFCDX')
        ELSE
                DBCREATE('sacmovb',matriz,'SQLRDD')
        ENDIF
ENDIF
****************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'saccomi.dbf')
        matriz:={ }
        AADD(matriz,{'Documento','C',10,0})
        AADD(matriz,{'Cliente','C',46,0})
        AADD(matriz,{'c_ipi','N',14,2})
        AADD(matriz,{'s_ipi','N',14,2})
        AADD(matriz,{'ipi','N',14,2})
        AADD(matriz,{'Valor','N',14,2})
        AADD(matriz,{'Venc','D',8,0})
        AADD(matriz,{'Data_pag','D',8,0})
        AADD(matriz,{'Com','N',14,2})
        AADD(matriz,{'Sit','C',4,0})
        AADD(matriz,{'Perc_com','N',14,2})
        AADD(matriz,{'Vlr_Com','N',14,2})
        AADD(matriz,{'Represent','C',30,0})
        AADD(matriz,{'N_pedido','C',6,0})
        AADD(matriz,{'periodo','C',25,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'saccomi'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
/*
IF ! FILE('sacprint.dbf')
        matriz:={ }
        AADD(matriz,{'nome_imp','C',30,0})
        AADD(matriz,{'porta','C',4,0})
        AADD(matriz,{'tipo','C',02,0})
        DBCREATE('sacprint.dbf',matriz)
ENDIF
IF ! FILE('sacprint.cdx')
        IF ! AbriArq('sacprint','prin','E');RETURN NIL;ENDIF
        INDEX ON prin->porta+prin->nome_imp TAG port TO sacprint
        CLOSE prin
ENDIF
*/
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacperf.dbf')
        matriz:={ }
        AADD(matriz,{'fornecedor','C',40,0})
        AADD(matriz,{'cnpj','C',14,0})
        AADD(matriz,{'mat_prima','C',40,0})
        AADD(matriz,{'c_fiscal','C',10,0})
        AADD(matriz,{'quantd','N',12,2})
        AADD(matriz,{'vl_unit','N',12,2})
        AADD(matriz,{'ipi','N',12,2})
        AADD(matriz,{'vl_total','N',12,2})
        AADD(matriz,{'data','D',8,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacperf'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacsincl.dbf')
        DEVPOS(24,18);DEVOUT('SACSINCL  =>')
        matriz:={ }
        AADD(matriz,{'codigo','C',5,0})
        AADD(matriz,{'cliente','C',40,0})
        AADD(matriz,{'cnpj_cpf','C',14,0})
        AADD(matriz,{'inscricao','C',19,0})
        AADD(matriz,{'quantidade','N',12,2})
        AADD(matriz,{'total','N',12,2})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacsincl'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
*IF ! FILE('saclinha.dbf')
*        matriz:={ }
*        AADD(matriz,{'linha','C',80,0})
*        DBCREATE('saclinha.dbf',matriz)
*ENDIF
**********************************************************************************************
IF ! FILE('sacnotp.dbf')
        matriz:={ }
        AADD(matriz,{'data_ped','D',8,0})
        AADD(matriz,{'numero','C',6,0})
        DBCREATE('sacnotp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
**********************************************************************************************
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped.dbf')
        matriz:={ }
        AADD(matriz,{'pempresa','C',3,0})
        AADD(matriz,{'pnum_ped','C',6,0})
        AADD(matriz,{'ptermina','C',10,0})
        AADD(matriz,{'pdat_ped','D',8,0})
        AADD(matriz,{'pgru_sub','C',5,0})
        AADD(matriz,{'pcod_merc','C',5,0})
        AADD(matriz,{'pmerc','C',40,0})
        AADD(matriz,{'punidade','C',2,0})
        AADD(matriz,{'pespecie','C',4,0})
        AADD(matriz,{'penvelope','C',10,0})     //placa do carro
        AADD(matriz,{'ppeso','N',8,3})
        AADD(matriz,{'ppeso_liq','N',8,3})
        AADD(matriz,{'pgramatura','N',9,3})     //VOLUME
        AADD(matriz,{'pquantd','N',12,3})
        AADD(matriz,{'ppre_dig','N',12,4})
        AADD(matriz,{'pvlr_fat','N',12,4})
        AADD(matriz,{'ppr_venda1','N',12,4})
        AADD(matriz,{'ppre_venda','N',12,4})
        AADD(matriz,{'pcust_real','N',12,4})
        AADD(matriz,{'pcust_merc','N',12,4})
        AADD(matriz,{'pcod_cli','C',5,0})
        AADD(matriz,{'pcgc','C',14,0})
        AADD(matriz,{'pcpf','C',11,0})
        AADD(matriz,{'pplaca','C',8,0})
        AADD(matriz,{'pcarro','C',20,0})
        AADD(matriz,{'pmodelo','C',20,0})       // 30.07.2002
        AADD(matriz,{'pkm','C',10,0})           // 30.07.2002
        AADD(matriz,{'pcod_fab','C',4,0})
        AADD(matriz,{'pfabrica','C',30,0})
        AADD(matriz,{'pcod_vend','C',3,0})
        AADD(matriz,{'pvendedor','C',30,0})
        AADD(matriz,{'pcod_oper','C',3,0})
        AADD(matriz,{'pcomi_oper','N',6,2})
        AADD(matriz,{'pmontador','C',3,0})
        AADD(matriz,{'pcom_mont','N',6,2})
        AADD(matriz,{'pmontador1','C',3,0})
        AADD(matriz,{'pdesc','N',7,2})          //09.08.2002
        AADD(matriz,{'pvlr_pres','N',12,2})      //30.07.2001
        AADD(matriz,{'pcod_fin','C',3,0})       //30.07.2001
        AADD(matriz,{'pcond_veze','C',3,0})
        AADD(matriz,{'pcond_intev','C',74,0})
        AADD(matriz,{'ptp_vend','C',2,0})
        AADD(matriz,{'pvlr_ent','N',12,2})      //29.07.2005
        AADD(matriz,{'phora','C',8,0})
        AADD(matriz,{'palimento','C',1,0})
        AADD(matriz,{'ppag','C',1,0})
        AADD(matriz,{'pdatapag','D',8,0})
        AADD(matriz,{'pisento','C',1,0})
        AADD(matriz,{'ppromocao','N',7,2})
        AADD(matriz,{'pcomissao','N',6,2})
        AADD(matriz,{'pcomi_mot','N',6,2})
        AADD(matriz,{'pprazo','N',3,0})
        AADD(matriz,{'pbebida','N',6,2})
        AADD(matriz,{'pipi','N',6,2})
        AADD(matriz,{'pobs_prod','C',40,0})
        AADD(matriz,{'phora_pg','C',8,0})
        AADD(matriz,{'pautoriz','C',3,0})
        AADD(matriz,{'palt_ope','C',3,0})
        AADD(matriz,{'pentreg','C',1,0})
        AADD(matriz,{'pent_por','C',3,0})
        AADD(matriz,{'pent_dat','D',8,0})
        AADD(matriz,{'pexpedi','C',1,0})
        AADD(matriz,{'pexp_por','C',3,0})
        AADD(matriz,{'pexp_dat','D',8,0})

        AADD(matriz,{'pdesc_merc','N',6,2})
        AADD(matriz,{'pstat_item','C',1,0})
        AADD(matriz,{'pind_icms','C',2,0})
        AADD(matriz,{'psit_trib','C',1,0})

        AADD(matriz,{'chassis','C',20,0})
        AADD(matriz,{'descri1','C',60,0})
        AADD(matriz,{'descri2','C',60,0})
        AADD(matriz,{'descri3','C',60,0})
        AADD(matriz,{'descri4','C',60,0})
        AADD(matriz,{'descri5','C',60,0})
        AADD(matriz,{'pobs1','C',40,0})
        AADD(matriz,{'pobs2','C',40,0})
        AADD(matriz,{'pobs3','C',40,0})
        AADD(matriz,{'pobs4','C',40,0})
        AADD(matriz,{'pcod_tran','C',4,0})      //04.02.2002
        AADD(matriz,{'pmotivo','C',40,0})
        AADD(matriz,{'plocal','C',2,0})
        AADD(matriz,{'pproducao','C',1,0})       //27.04.2000
        AADD(matriz,{'pos','C',6,0})             //09.08.2002
        AADD(matriz,{'pnum_pdv','C',4,0})
        AADD(matriz,{'pnum_cup','C',6,0})
        AADD(matriz,{'pboleto','C',1,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+"sactped.cdx")
        IF ! AbriArq('sactped','tped','E');RETURN NIL;ENDIF
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','numped','tped->pnum_ped+tped->pcod_merc')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','data','DTOS(tped->pdat_ped)+tped->pnum_ped')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','pag','tped->ppag+DTOS(tped->pdat_ped)+tped->pnum_ped')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','codigo','tped->pcod_merc+DTOS(tped->pdat_ped)')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','dtpag','DTOS(tped->pdatapag)+tped->pnum_ped')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','vend','tped->pcod_vend+tped->phora+DTOS(tped->pdat_ped)')
        ORDCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactped','pagmerc','tped->ppag+tped->pcod_merc')
        tped->(DBCLOSEAREA())
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'saccons.dbf')
        matriz:={ }
        AADD(matriz,{'cod_barr','C',13,0})
        AADD(matriz,{'gru_sub','C',5,0})
        AADD(matriz,{'cod_merc','C',5,0})
        AADD(matriz,{'merc','C',40,0})
        AADD(matriz,{'data_cad','D',8,0})
        AADD(matriz,{'unidade','C',2,0})
        AADD(matriz,{'especie','C',4,0})
        AADD(matriz,{'peso_liq','N',8,3})
        AADD(matriz,{'peso','N',8,3})
        AADD(matriz,{'alimento','C',1,0})
        AADD(matriz,{'p_lucro','N',7,2})
        AADD(matriz,{'promocao','N',7,2})
        AADD(matriz,{'disp','C',1,0})
        AADD(matriz,{'livre_desc','C',1,0})
        AADD(matriz,{'comissao','N',6,2})
        AADD(matriz,{'est_min','N',12,2})
        AADD(matriz,{'est_max','N',12,2})
        AADD(matriz,{'cod_fab','C',4,0})
        AADD(matriz,{'fabrica','C',40,0})
        AADD(matriz,{'dat_ult_s','D',8,0})
        AADD(matriz,{'dat_ult_e','D',8,0})
        AADD(matriz,{'a_pr_unit','N',12,4})
        AADD(matriz,{'a_vlr_merc','N',12,4})
        AADD(matriz,{'a_cust_mer','N',12,4})
        AADD(matriz,{'a_cust_rea','N',12,4})
        AADD(matriz,{'a_pr_venda','N',12,4})
        AADD(matriz,{'a_pr_medio','N',12,4})
        AADD(matriz,{'pr_unit','N',12,4})
        AADD(matriz,{'vlr_merc','N',12,4})
        AADD(matriz,{'cust_merc','N',12,4})
        AADD(matriz,{'cust_real','N',12,4})
        AADD(matriz,{'pr_venda','N',12,4})
        AADD(matriz,{'pr_medio','N',12,4})
        AADD(matriz,{'varejo','N',10,2})
        AADD(matriz,{'ul_alt_pr','D',8,0})
        AADD(matriz,{'opera_pr','C',3,0})
        AADD(matriz,{'tipo_op','C',2,0})
        AADD(matriz,{'hora','C',8,0})
        AADD(matriz,{'saldo_fis','N',12,2})
        AADD(matriz,{'saldo_mer','N',12,2})
        AADD(matriz,{'saldo_av','N',12,2})
        AADD(matriz,{'saldo_comp','N',12,2})
        AADD(matriz,{'icm','N',10,2})
        AADD(matriz,{'isento','C',1,0})
        AADD(matriz,{'bebida','N',6,2})
        AADD(matriz,{'icm_sub','N',12,4})
        AADD(matriz,{'ipi','N',12,4})
        AADD(matriz,{'cod_fis','C',10,0})
        AADD(matriz,{'local','C',4,0})
        AADD(matriz,{'gramatura','N',8,2})
        AADD(matriz,{'fatconv','N',8,2})
        AADD(matriz,{'doc_ent_a','C',10,0})
        AADD(matriz,{'doc_ent','C',10,0})
        AADD(matriz,{'envelope','C',10,0})
        AADD(matriz,{'desc_merc','N',6,2})
** CAMPOS FISCAIS
        AADD(matriz,{'stat_item','C',1,0})
        AADD(matriz,{'ind_icms','C',2,0})
        AADD(matriz,{'sit_trib','C',1,0})
**
        AADD(matriz,{'dolar','C',1,0})
        AADD(matriz,{'aplic0','C',60,0})
        AADD(matriz,{'aplic1','C',60,0})
        AADD(matriz,{'aplic2','C',60,0})
        AADD(matriz,{'aplic3','C',60,0})
        AADD(matriz,{'aplic4','C',60,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'saccons'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacbkp.dbf')
        matriz:={ }
        AADD(matriz,{'local','C',10,0})
        AADD(matriz,{'linha','C',60,0})
        AADD(matriz,{'local1','C',10,0})
        AADD(matriz,{'linha1','C',60,0})
        AADD(matriz,{'local2','C',10,0})
        AADD(matriz,{'linha2','C',60,0})
        AADD(matriz,{'local3','C',10,0})
        AADD(matriz,{'linha3','C',60,0})
        AADD(matriz,{'local4','C',10,0})
        AADD(matriz,{'linha4','C',60,0})
        AADD(matriz,{'local5','C',10,0})
        AADD(matriz,{'linha5','C',60,0})
        AADD(matriz,{'local6','C',10,0})
        AADD(matriz,{'linha6','C',60,0})
        AADD(matriz,{'local7','C',10,0})
        AADD(matriz,{'linha7','C',60,0})
        AADD(matriz,{'local8','C',10,0})
        AADD(matriz,{'linha8','C',60,0})
        AADD(matriz,{'local9','C',10,0})
        AADD(matriz,{'linha9','C',60,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacbkp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacamprn.dbf')
        matriz:={ }
        AADD(matriz,{'porta','C',4,0})
        AADD(matriz,{'comp','C',10,0})
        AADD(matriz,{'nome','C',10,0})
        AADD(matriz,{'porta1','C',4,0})
        AADD(matriz,{'comp1','C',10,0})
        AADD(matriz,{'nome1','C',10,0})
        AADD(matriz,{'porta2','C',4,0})
        AADD(matriz,{'comp2','C',10,0})
        AADD(matriz,{'nome2','C',10,0})
        AADD(matriz,{'porta3','C',4,0})
        AADD(matriz,{'comp3','C',10,0})
        AADD(matriz,{'nome3','C',10,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sacamprn'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactemp.dbf')
        matriz:={ }
        AADD(matriz,{'vend','C',3,0})
        AADD(matriz,{'oper','C',3,0})
        AADD(matriz,{'codcli','C',5,0})
        AADD(matriz,{'cod_prod','C',5,0})
        AADD(matriz,{'quantd','C',12,0})
        AADD(matriz,{'valor','C',12,0})
        AADD(matriz,{'desconto','C',12,0})
        AADD(matriz,{'p_venda','C',12,0})
        AADD(matriz,{'comissao','C',12,0})
        AADD(matriz,{'obs1','C',39,0})
        AADD(matriz,{'obs2','C',39,0})
        AADD(matriz,{'envelope','C',10,0})
        AADD(matriz,{'horas','C',8,0})
        AADD(matriz,{'chass','C',20,0})
        AADD(matriz,{'descri1','C',54,0})
        AADD(matriz,{'descri2','C',54,0})
        AADD(matriz,{'descri3','C',54,0})
        AADD(matriz,{'descri4','C',54,0})
        AADD(matriz,{'descri5','C',54,0})
        AADD(matriz,{'obs_prod','C',40,0})
        AADD(matriz,{'montador','C',3,0})
        AADD(matriz,{'montador1','C',3,0})
        AADD(matriz,{'pacote','C',12,0})
        AADD(matriz,{'pecas','C',12,0})
        DBCREATE(IF(tipo_rdd=1,ALLTRIM(m_indiv[1,6]),'')+'sactemp'+IF(tipo_rdd=1,'.DBF',''),matriz,IF(tipo_rdd=1,'DBFCDX','SQLRDD'))
ENDIF
IF ! FILE('flag_ped')
        matriz:={ }
        AADD(matriz,{'flag','C',1,0})
        DBCREATE('flag_ped.dbf',matriz,'DBFCDX')
ENDIF

wvw_lclosewindow()
RETURN NIL
**************************** F I M  **********************************************************


FUNCTION CRIPT(cPsw)    // criptografa pdv
*******************
LOCAL cKey := "", nCont, nCrc := 0, nLenPsw := LEN(ALLTRIM(cPsw))

IF ! EMPTY(nLenPsw)
   FOR nCont = 1 TO nLenPsw
      cKey  += CHR( ASC( SUBS( cPsw, nCont, 1 ) ) + nLenPsw * nCont )
      nCrc  += ASC( RIGHT( cKey, 1 ) )
   NEXT nCont

   cKey = CHR(40+nLenPsw)+CHR( VAL( RIGHT(DIGITO(STRZERO( nCrc*LEN(cPsw),6 )), 1 ) )+ 40)+cKey

   nCont := 1
   DO WHILE LEN(cKey) < nMAXPSW
      cKey += CHR( ASC( SUBS( cKey, nCont++, 1 ) )+nMAXPSW )
   ENDDO
ENDIF
RETURN cKey


FUNCTION UNCRIPT(cKey)  // descriptografar pdv
***********************
LOCAL nCont, cPsw := "", nLenPsw := ASC(cKey)-40

FOR nCont = 1 TO nLenPsw
   cPsw += CHR( ASC( SUBS( cKey, nCont+2, 1 ) ) - nLenPsw * nCont )
NEXT nCont
RETURN cPsw


FUNCTION DIGITO(cVar, nModulo)
LOCAL nDigito := 0, nPeso := LEN(cVar)+1

* --- Checa os parametros Passados
IF nModulo == NIL      // Se nao passou Modulo ...
   nModulo := 11       // ... assume Modulo 11
ENDIF

* --- Se tipo do Modulo nao for NUMERICO ...
IF VALTYPE(nModulo) # "N"
   RETURN NIL          // Retorno NIL
ENDIF

* --- So aceita Modulos de 5 a 11
IF nModulo < 5 .OR. nModulo > 11
   RETURN NIL
ENDIF

* --- Calcula o digito verificador
FOR i = 1 TO LEN(cVar)
    nDigito += VAL(SUBST(cVar,i,1)) * nPeso--
NEXT

* --- Divide pelo Modulo e Obtem o Resto
nDigito %= nModulo

* --- Trata o resto ...
nDigito := IF(nDigito > 1, nModulo - nDigito,0)

* --- Retorna o Digito
RETURN ALLTRIM(STR(nDigito,2))

************************************* F I M **************************************

