FUNCTION sacnull(mop)
************
LOCAL mprg:='SACNULL',nErr, nPos,vEmp := {},nCnn,oSql,cComm, apCode
op_tela(10,10,12,70,' Aguarde um momento, Atualizand Arquivos de dados ','*')
DEVPOS(01,00);DEVOUT('Atualizando o Campo: EMPRESA          ')
aret:={}
cComm  := "UPDATE sacmerc SET empresa = '001' WHERE  sacmerc.empresa IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_BARR          ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_barr = ' ' WHERE  sacmerc.cod_barr IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_BARR1          ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_barr1 = ' ' WHERE  sacmerc.cod_barr1 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_BARR2          ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_barr2 = ' ' WHERE  sacmerc.cod_barr2 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_BARR3          ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_barr3 = ' ' WHERE  sacmerc.cod_barr3 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: REF          ')
aret:={}
cComm  := "UPDATE sacmerc SET ref = ' ' WHERE  sacmerc.ref IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: GRUPO          ')
aret:={}
cComm  := "UPDATE sacmerc SET gru_sub = ' ' WHERE  sacmerc.gru_sub IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: CODIGO          ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_merc = ' ' WHERE  sacmerc.cod_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: MERC          ')
aret:={}
cComm  := "UPDATE sacmerc SET merc = ' ' WHERE  sacmerc.merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: TIPO_MERC         ')
aret:={}
cComm  := "UPDATE sacmerc SET tipo_merc = '1' WHERE  sacmerc.tipo_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: BALANCA          ')
aret:={}
cComm  := "UPDATE sacmerc SET balanca = ' ' WHERE  sacmerc.balanca IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DATA_ATU          ')
aret:={}
cComm  := "UPDATE sacmerc SET data_atu = '2000/01/01' WHERE  sacmerc.data_atu IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DATA_CAD          ')
aret:={}
cComm  := "UPDATE sacmerc SET data_cad = '2000/01/01' WHERE  sacmerc.data_cad IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: UNIDADE          ')
aret:={}
cComm  := "UPDATE sacmerc SET unidade = 'UN ' WHERE  sacmerc.unidade IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: ESPECIE          ')
aret:={}
cComm  := "UPDATE sacmerc SET especie = ' ' WHERE  sacmerc.especie IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: PESO_LIQ         ')
aret:={}
cComm  := "UPDATE sacmerc SET peso_liq = 0 WHERE  sacmerc.peso_liq IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: PESO         ')
aret:={}
cComm  := "UPDATE sacmerc SET peso = 0 WHERE  sacmerc.peso IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: VOLUME         ')
aret:={}
cComm  := "UPDATE sacmerc SET volume = 0 WHERE  sacmerc.volume IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: METRAGEM          ')
aret:={}
cComm  := "UPDATE sacmerc SET metragem = 0 WHERE  sacmerc.metragem IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PACOTE          ')
aret:={}
cComm  := "UPDATE sacmerc SET pacote = 0 WHERE  sacmerc.pacote IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: ALIMENTO          ')
aret:={}
cComm  := "UPDATE sacmerc SET alimento = ' ' WHERE  sacmerc.alimento IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: p_lucro         ')
aret:={}
cComm  := "UPDATE sacmerc SET p_lucro = 0 WHERE  sacmerc.p_lucro IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PROMOCAO         ')
aret:={}
cComm  := "UPDATE sacmerc SET promocao = 0 WHERE  sacmerc.promocao IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: DISP         ')
aret:={}
cComm  := "UPDATE sacmerc SET disp = 'S' WHERE  sacmerc.disp IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: LIVRE_DESC         ')
aret:={}
cComm  := "UPDATE sacmerc SET livre_desc = 'N' WHERE  sacmerc.livre_desc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: COMISSAO         ')
aret:={}
cComm  := "UPDATE sacmerc SET comissao = 0 WHERE  sacmerc.comissao IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: COM_MONT         ')
aret:={}
cComm  := "UPDATE sacmerc SET com_mont = 0 WHERE  sacmerc.com_mont IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: EST_MIN         ')
aret:={}
cComm  := "UPDATE sacmerc SET est_min = 0 WHERE  sacmerc.est_min IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: EST_MAX         ')
aret:={}
cComm  := "UPDATE sacmerc SET est_max = 0 WHERE  sacmerc.est_max IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_FAB         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_fab = ' ' WHERE  sacmerc.cod_fab IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: FABRICA         ')
aret:={}
cComm  := "UPDATE sacmerc SET fabrica = ' ' WHERE  sacmerc.fabrica IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: DAT_ULT_S         ')
aret:={}
cComm  := "UPDATE sacmerc SET dat_ult_s = '2000/01/01' WHERE  sacmerc.dat_ult_s IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: DAT_ULT_E         ')
aret:={}
cComm  := "UPDATE sacmerc SET dat_ult_e = '2000/01/01' WHERE  sacmerc.dat_ult_e IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_ANT         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_ant = 0 WHERE  sacmerc.saldo_ant IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: A_PR_UNIT         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_pr_unit = 0 WHERE sacmerc.a_pr_unit IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: A_VLR_MERC         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_vlr_merc = 0 WHERE sacmerc.a_vlr_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: a_cust_mer         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_cust_mer = 0 WHERE sacmerc.a_cust_mer IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: a_cust_rea         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_cust_rea = 0 WHERE sacmerc.a_cust_rea IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: A_PR_VENDA         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_pr_venda = 0 WHERE  sacmerc.a_pr_venda IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: A_PR_MEDIO         ')
aret:={}
cComm  := "UPDATE sacmerc SET a_pr_medio = 0 WHERE  sacmerc.a_pr_medio IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_NOTA         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_nota = 0 WHERE  sacmerc.pr_nota IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_UNIT         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_unit = 0 WHERE  sacmerc.pr_unit IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: VLR_MERC         ')
aret:={}
cComm  := "UPDATE sacmerc SET vlr_merc = 0 WHERE  sacmerc.vlr_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: CUST_MERC         ')
aret:={}
cComm  := "UPDATE sacmerc SET cust_merc = 0 WHERE  sacmerc.cust_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: CUST_REAL         ')
aret:={}
cComm  := "UPDATE sacmerc SET cust_real = 0 WHERE  sacmerc.cust_real IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_VENDA         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_venda = 0 WHERE  sacmerc.pr_venda IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_VENDA1         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_venda1 = 0 WHERE  sacmerc.pr_venda1 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_MEDIO         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_medio = 0 WHERE  sacmerc.pr_medio IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: PR_FAT         ')
aret:={}
cComm  := "UPDATE sacmerc SET pr_fat = 0 WHERE  sacmerc.pr_fat IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: VAREJO         ')
aret:={}
cComm  := "UPDATE sacmerc SET varejo = 0 WHERE  sacmerc.varejo IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: UL_ALT_PR         ')
aret:={}
cComm  := "UPDATE sacmerc SET ul_alt_pr = '2000/01/01' WHERE  sacmerc.ul_alt_pr IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: OPERA_PR         ')
aret:={}
cComm  := "UPDATE sacmerc SET opera_pr = ' ' WHERE  sacmerc.opera_pr IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: TIPO_OP         ')
aret:={}
cComm  := "UPDATE sacmerc SET tipo_op = ' ' WHERE  sacmerc.tipo_op IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: HORA         ')
aret:={}
cComm  := "UPDATE sacmerc SET hora = ' ' WHERE  sacmerc.hora IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_FIS         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_fis = 0 WHERE  sacmerc.saldo_fis IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_MER         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_mer = 0 WHERE  sacmerc.saldo_mer IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_AV         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_av = 0 WHERE  sacmerc.saldo_av IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_COMP         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_comp = 0 WHERE  sacmerc.saldo_comp IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SALDO_EST         ')
aret:={}
cComm  := "UPDATE sacmerc SET saldo_est = 0 WHERE  sacmerc.saldo_est IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: ICM         ')
aret:={}
cComm  := "UPDATE sacmerc SET icm = 0 WHERE  sacmerc.icm IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: ISENTO         ')
aret:={}
cComm  := "UPDATE sacmerc SET isento = 'N' WHERE  sacmerc.isento IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: BEBIDA         ')
aret:={}
cComm  := "UPDATE sacmerc SET bebida = 0 WHERE  sacmerc.bebida IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: ICM_SUB         ')
aret:={}
cComm  := "UPDATE sacmerc SET icm_sub = 0 WHERE  sacmerc.icm_sub IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: ICM_SUB2         ')
aret:={}
cComm  := "UPDATE sacmerc SET icm_sub2 = 0 WHERE  sacmerc.icm_sub2 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: IPI         ')
aret:={}
cComm  := "UPDATE sacmerc SET ipi = 0 WHERE  sacmerc.ipi IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_CLF         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_clf = ' ' WHERE  sacmerc.cod_clf IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_FIS         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_fis = ' ' WHERE  sacmerc.cod_fis IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: SITTRIB         ')
aret:={}
cComm  := "UPDATE sacmerc SET sittrib = ' ' WHERE  sacmerc.sittrib IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: PRODEPE         ')
aret:={}
cComm  := "UPDATE sacmerc SET prodepe = 'N' WHERE  sacmerc.prodepe IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: NBM         ')
aret:={}
cComm  := "UPDATE sacmerc SET nbm = ' ' WHERE  sacmerc.nbm IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DESC_ICM         ')
aret:={}
cComm  := "UPDATE sacmerc SET desc_icm = ' ' WHERE  sacmerc.desc_icm IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DESC_ICM1         ')
aret:={}
cComm  := "UPDATE sacmerc SET desc_icm1 = 0 WHERE  sacmerc.desc_icm1 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: LOCAL         ')
aret:={}
cComm  := "UPDATE sacmerc SET local = ' ' WHERE  sacmerc.local IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: GRAMATURA         ')
aret:={}
cComm  := "UPDATE sacmerc SET gramatura = 0 WHERE  sacmerc.gramatura IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: PRAZO         ')
aret:={}
cComm  := "UPDATE sacmerc SET prazo = 0 WHERE  sacmerc.prazo IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: FATCONV         ')
aret:={}
cComm  := "UPDATE sacmerc SET fatconv = 0 WHERE  sacmerc.fatconv IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DOC_ENT_A         ')
aret:={}
cComm  := "UPDATE sacmerc SET doc_ent_a = ' ' WHERE  sacmerc.doc_ent_a IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DOC_ENT         ')
aret:={}
cComm  := "UPDATE sacmerc SET doc_ent = ' ' WHERE  sacmerc.doc_ent IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: ENVELOPE         ')
aret:={}
cComm  := "UPDATE sacmerc SET envelope = ' ' WHERE  sacmerc.envelope IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DESC_MERC         ')
aret:={}
cComm  := "UPDATE sacmerc SET desc_merc = 0 WHERE  sacmerc.desc_merc IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: IAT              ')
aret:={}
cComm  := "UPDATE sacmerc SET iat = ' ' WHERE  sacmerc.iat IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: IND_ICMS         ')
aret:={}
cComm  := "UPDATE sacmerc SET ind_icms = ' ' WHERE  sacmerc.ind_icms IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: SIT_TRIB         ')
aret:={}
cComm  := "UPDATE sacmerc SET sit_trib = ' ' WHERE  sacmerc.sit_trib IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: DOLAR         ')
aret:={}
cComm  := "UPDATE sacmerc SET dolar = ' ' WHERE  sacmerc.dolar IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC0         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic0 = ' ' WHERE  sacmerc.aplic0 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)

DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC0         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic0 = ' ' WHERE  sacmerc.aplic0 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC0         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic0 = ' ' WHERE  sacmerc.aplic0 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC1         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic1 = ' ' WHERE  sacmerc.aplic1 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC2         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic2 = ' ' WHERE  sacmerc.aplic2 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC3         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic3 = ' ' WHERE  sacmerc.aplic3 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: APLIC4         ')
aret:={}
cComm  := "UPDATE sacmerc SET aplic4 = ' ' WHERE  sacmerc.aplic4 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: ATUALIZA         ')
aret:={}
cComm  := "UPDATE sacmerc SET atualiza = '2000/01/01' WHERE  sacmerc.atualiza IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: IPPT         ')
aret:={}
cComm  := "UPDATE sacmerc SET ippt = ' ' WHERE  sacmerc.ippt IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD2         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod2 = ' ' WHERE  sacmerc.cod2 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD3         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod3 = ' ' WHERE  sacmerc.cod3 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD4         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod4 = ' ' WHERE  sacmerc.cod4 IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: DATA_FALTA         ')
aret:={}
cComm  := "UPDATE sacmerc SET data_falta = '2000/01/01' WHERE  sacmerc.data_falta IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: COD_FALTA         ')
aret:={}
cComm  := "UPDATE sacmerc SET cod_falta = ' ' WHERE  sacmerc.cod_falta IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DEVPOS(01,00);DEVOUT('Atualizando o Campo: QTD_FALTA         ')
aret:={}
cComm  := "UPDATE sacmerc SET qtd_falta = 0 WHERE  sacmerc.qtd_falta IS NULL"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen(apCode,,sr_getconnection():nsystemid)
sr_getconnection():exec(ccomm,,.f.)
tracelog(cComm)
DBCOMMITALL()
wvw_lclosewindow()
RETURN NIL
