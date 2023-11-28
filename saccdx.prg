* DESPROTEGER E VERIFICA O COMPUTADOR
***************************************
MEMVAR mcaminho
FUNCTION saccdx(indexar,mfile)
************
LOCAL mprg:='SACCDX'
PRIVATE lci:=0,lba:=25,cba:=120,;
        cor,matriz :={},i:=0,opcao:=' ',mcont:=0,mcont1:=0,malias,;
        mreindex,mqtd_ind:=0
RGB(240,249,144)
IF indexar = 'P'
        setcor(1)
        op_tela(09,05,13,110,'VERIFICANDO INTEGRIDADE DAS TABELAS','1','*')
        aret := {}
        AADD(aret,{02,01,03,80})
        i:=0
        FOR i = 1 TO 100
                DEVPOS(00,39);DEVOUT(TRANSFORM(i,'999')+' %')
                WVW_DrawProgressBar( ,02,05,03,85,aret,i,102,155,,.f.,0 )
                INKEY(.1)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
        NEXT
        wvw_lclosewindow()
        //apaga_HTI() //apaga o arquivo de controle "HTI.001"
        sr_getconnection():exec("UPDATE insopera SET terminal = '',data_acess = NULL,hora_acess = '' WHERE scod_op = "+sr_cdbvalue(cod_operado),,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        fecha_conexaoDB()
        QUIT
ELSE
        op_tela(10,01,13,80,' I N D E X A C A O    D O S    A R Q U I V O S ','1','*')
ENDIF
mqtd_ind := 0
DEVPOS(lci,1);DEVOUT('02> INSOPERA =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('insopera') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'insopera'
        IF ! AbriArq('insopera','sen','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON sen->snome TAG senha TO ('insopera')
        INDEX ON sen->scod_op TAG codop TO ('insopera')
        sen->(DBCLOSEAREA())
ENDIF

/*
DEVPOS(lci,1);DEVOUT('02> LOGPRODUTO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('LOGPRODUTO') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'logproduto'
        IF ! AbriArq('logproduto','logprod','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON logprod->data TAG datad TO ('logproduto') DESCEND
        INDEX ON logprod->data TAG dataa TO ('logproduto')
        INDEX ON logprod->cod_prod TAG cprod TO ('logproduto')
        logprod->(DBCLOSEAREA())
ENDIF
*/
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('03> SACMOV   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacmov')    //.OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacmov'
        //IF ! AbriArq('SACMOV','mov','E');RETURN NIL;wvw_lclosewindow();ENDIF
        USE 'sacmov' ALIAS 'mov' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        //prog(lci+1,17,00)
        INDEX ON DTOS(mov->data_s_e) + mov->ent_sai + mov->num_ped + mov->documento TAG data_es TO ('sacmov')
        //prog(lci+1,17,10)
        INDEX ON mov->codigo + DTOS(mov->data_s_e) TAG codigo TO ('sacmov')
        //prog(lci+1,17,20)
        INDEX ON DTOS(mov->data_s_e)+mov->cod_vend+mov->num_ped TAG data_ven TO ('sacmov')
        //prog(lci+1,17,30)
        INDEX ON mov->documento + mov->ent_sai + mov->cod_forn + mov->cod_nat + STR(mov->icm_aliq) TAG doc TO ('sacmov')
        //prog(lci+1,17,40)
        INDEX ON mov->num_ped + DTOS(mov->data_ped)+mov->ent_sai+mov->codigo TAG numped TO ('sacmov')
        //prog(lci+1,17,50)
        INDEX ON mov->cod_vend+mov->num_ped TAG venda TO ('sacmov')
        //prog(lci+1,17,60)
        INDEX ON mov->gru_sub+mov->codigo+DTOS(mov->data_s_e) TAG gru TO ('sacmov')
        //prog(lci+1,17,70)
        INDEX ON mov->cod_vend+mov->codigo+DTOS(mov->data_s_e) TAG ven_co TO ('sacmov')
        //prog(lci+1,17,80)
        INDEX ON DTOS(mov->data_s_e)+mov->codigo TAG dat_cod TO ('sacmov')
        //prog(lci+1,17,90)
        INDEX ON DTOS(mov->data_s_e)+mov->cod_cli TAG dat_cli TO ('sacmov')
        //prog(lci+1,17,100)
        INDEX ON DTOS(mov->data_s_e)+mov->cod_forn+mov->documento+mov->ent_sai TAG dat_for TO ('sacmov')
        //prog(lci+1,17,110)
        INDEX ON mov->codigo+mov->ent_sai+DTOS(mov->data_s_e) TAG cod_ent TO ('sacmov')
        //prog(lci+1,17,120)
        INDEX ON mov->cod_cli+mov->ent_sai+DTOS(mov->data_s_e) TAG cod_cli TO ('sacmov')
        //prog(lci+1,17,130)
        mov->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('04> SACPED_S =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacped_s') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacped_s'
        IF ! AbriArq('sacped_s','ped_s','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/15
        //prog(lci+1,17,00)
        INDEX ON ped_s->pnum_ped+ped_s->pcod_merc TAG numped TO ('sacped_s') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON DTOS(ped_s->pdat_ped)+ped_s->pnum_ped TAG data TO ('sacped_s') // EVAL dbprogress('DATA PEDIDO',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON ped_s->ppag+DTOS(ped_s->pdat_ped)+ped_s->pnum_ped TAG pag TO ('sacped_s') // EVAL dbprogress('PAG',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON ped_s->pcod_merc+DTOS(ped_s->pdat_ped) TAG codigo TO ('sacped_s') // EVAL dbprogress('CODIGO MERCADORIA',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON DTOS(ped_s->pdatapag)+ped_s->pnum_ped TAG dtpag TO ('sacped_s') // EVAL dbprogress('DATA PAGAMENTO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON ped_s->pnum_ped+ped_s->plocal+ped_s->pmerc TAG local TO ('sacped_s') // EVAL dbprogress('No.PEDIDO/LOCAL',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON ped_s->pplaca TAG placa TO ('sacped_s') // EVAL dbprogress('PLACA',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON ped_s->pcod_cli+ped_s->ppag+ped_s->pnum_ped TAG cliente TO ('sacped_s') // EVAL dbprogress('COD.CLIENTE',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON ped_s->pcod_vend+ped_s->phora+DTOS(ped_s->pdat_ped) TAG vend TO ('sacped_s') // EVAL dbprogress('COD.VENDEDOR',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON ped_s->penvelope+ped_s->pcod_cli TAG envelope TO ('sacped_s') // EVAL dbprogress('ENVELOPE',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        INDEX ON ped_s->ppag+ped_s->pcod_merc TAG pagmerc TO ('sacped_s') // EVAL dbprogress('PAG/COD.MERCADORIA',,lci,35,mqtd_ind*11,17,0)
        //prog(lci+1,17,110)
        INDEX ON ped_s->pcod_oper+ped_s->ppag+DTOS(ped_s->pexp_dat) TAG operpag TO ('sacped_s') // EVAL dbprogress('COD.OPERADOR',,lci,35,mqtd_ind*12,17,0)
        //prog(lci+1,17,120)
        INDEX ON ped_s->pnum_ped+ped_s->plocal+ped_s->pcod_fab+ped_s->pmerc TAG numfab TO ('sacped_s') // EVAL dbprogress('NUM_PED+COD.FABRICA',,lci,35,mqtd_ind*13,17,0)
        //prog(lci+1,17,130)
        INDEX ON ped_s->ppag+ped_s->pcod_cli TAG pagcli TO ('sacped_s') // EVAL dbprogress('PAG/COD.MERCADORIA',,lci,35,mqtd_ind*14,17,0)
        //prog(lci+1,17,140)
        INDEX ON ped_s->pnum_ped TAG orddig TO ('sacped_s') // EVAL dbprogress('NUMERO PEDIDO',,lci,35,mqtd_ind*15,17,0)
        //prog(lci+1,17,150)
        ped_s->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('05> SACORCAM =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacorcam") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacorcam'
        IF ! AbriArq('sacorcam','orcam','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00)
        ORDCREATE('sacorcam','numped','orcam->pnum_ped+orcam->pcod_merc')
        //prog(lci+1,17,10)
        ORDCREATE('sacorcam','data','DTOS(orcam->pdat_ped)+orcam->pnum_ped')
        //prog(lci+1,17,20)
        ORDCREATE('sacorcam','pag','orcam->ppag+DTOS(orcam->pdat_ped)+orcam->pnum_ped')
        //prog(lci+1,17,30)
        ORDCREATE('sacorcam','codigo','orcam->pcod_merc')
        //prog(lci+1,17,40)
        ORDCREATE('sacorcam','dtpag','DTOS(orcam->pdatapag)+orcam->pnum_ped')
        //prog(lci+1,17,50)
        ORDCREATE('sacorcam','local','orcam->pnum_ped+orcam->plocal+orcam->pmerc')
        //prog(lci+1,17,60)
        ORDCREATE('sacorcam','placa','orcam->pnum_ped')
        //prog(lci+1,17,70)
        ORDCREATE('sacorcam','cliente','orcam->pcod_cli+orcam->ppag+orcam->pnum_ped')
        //prog(lci+1,17,80)
        ORDCREATE('sacorcam','vend','orcam->pcod_vend+orcam->phora')
        //prog(lci+1,17,90)
        ORDCREATE('sacorcam','envelope','orcam->penvelope')
        //prog(lci+1,17,100,' OK')
        orcam->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('06> SACDUPR  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdupr") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacdupr'
        IF ! AbriArq('sacdupr','dupr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/15
        //prog(lci+1,17,00)
        INDEX ON dupr->tipo+dupr->numero+dupr->duplicata+dupr->pago+dupr->fornec+STR(dupr->valor) TAG tipo TO ('sacdupr') // EVAL dbprogress('TIPO/NUMEROATA',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON dupr->fornec+dupr->pago+dupr->duplicata TAG fornec TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON DTOS(dupr->datpag)+dupr->tipo+dupr->duplicata+dupr->fornec TAG datapg TO ('sacdupr') // EVAL dbprogress('DATA PAGAMENTO',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON DTOS(dupr->venc)+dupr->fornec+dupr->banco+dupr->duplicata TAG vend TO ('sacdupr') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON DTOS(dupr->emissao)+dupr->fornec+dupr->banco+dupr->duplicata TAG emi TO ('sacdupr') // EVAL dbprogress('DATA EMISSAO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON dupr->fornec+dupr->pago+DTOS(dupr->venc)+dupr->duplicata TAG fornpg TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE/PAGO',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON dupr->num_ped+dupr->pago+dupr->vendedor TAG numped TO ('sacdupr') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON dupr->cliente+dupr->pago+DTOS(dupr->venc) TAG forcli TO ('sacdupr') // EVAL dbprogress('NOME CLIENTE',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON dupr->fornec+dupr->pago+dupr->tipo+dupr->numero+dupr->agencia+dupr->c_c TAG fornch TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE/PAGO/TIPO',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON dupr->duplicata+dupr->tipo+dupr->fornec TAG dup TO ('sacdupr') // EVAL dbprogress('No.DOCUMENTO',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        INDEX ON DTOS(dupr->baix_parc)+DTOS(dupr->venc)+dupr->cod_forn TAG baix TO ('sacdupr') // EVAL dbprogress('DATA BAIXA P',,lci,35,mqtd_ind*11,17,0)
        //prog(lci+1,17,110)
        INDEX ON DTOS(dupr->dat_tran)+dupr->doc_tran+dupr->tipo+dupr->duplicata TAG tran TO ('sacdupr') // EVAL dbprogress('DATA TRANSFERENCA',,lci,35,mqtd_ind*12,17,0)
        //prog(lci+1,17,120)
        INDEX ON dupr->doc_tran+dupr->tipo+dupr->duplicata TAG doctran TO ('sacdupr') // EVAL dbprogress('No.DOC.TRANSFORM',,lci,35,mqtd_ind*13,17,0)
        //prog(lci+1,17,130)
        INDEX ON DTOS(dupr->datope)+dupr->cod_forn TAG datope TO ('sacdupr') // EVAL dbprogress('DATA OPERACAO',,lci,35,mqtd_ind*14,17,0)
        //prog(lci+1,17,140)
        INDEX ON DTOS(dupr->pg_comi)+dupr->vendedor+dupr->fornec+DTOS(dupr->venc) TAG pgcomi TO ('sacdupr') // EVAL dbprogress('DATA OPERACAO',,lci,35,mqtd_ind*15,17,0)
        //prog(lci+1,17,150)
        dupr->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('07> SACDUPP  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdupp") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacdupp'
        mqtd_ind := 100/10
        IF ! AbriArq('SACDUPP','dupp','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00)
        INDEX ON dupp->tipo+dupp->duplicata+dupp->pago+dupp->fornec+DTOS(dupp->venc) TAG dup TO ('sacdupp') // EVAL dbprogress('TIPO DUPLICATA',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON dupp->fornec+dupp->pago+dupp->duplicata TAG fornec TO ('sacdupp') // EVAL dbprogress('COD.FORNECEDOR',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON DTOS(dupp->datpag)+dupp->tipo+dupp->duplicata+dupp->fornec TAG datapg TO ('sacdupp') // EVAL dbprogress('DATA PAGAMENTO',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON DTOS(dupp->venc)+dupp->fornec+dupp->banco+dupp->duplicata TAG venc TO ('sacdupp') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON DTOS(dupp->emissao) TAG emissao TO ('sacdupp') // EVAL dbprogress('DATA EMISSAO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON dupp->cliente+dupp->fornec+dupp->pago+DTOS(dupp->venc) TAG cli TO ('sacdupp') // EVAL dbprogress('NOME FORNECEDOR',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON dupp->num_ped+dupp->fornec TAG ped TO ('sacdupp') // EVAL dbprogress('No. PEDIDO',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON dupp->duplicata+dupp->tipo TAG num TO ('sacdupp') // EVAL dbprogress('No. DOCUMENTO',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON dupp->fornec+dupp->pago+DTOS(dupp->venc)+dupp->duplicata TAG forven TO ('sacdupp') // EVAL dbprogress('COD.FORNECEDOR+PAG.',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON DTOS(dupp->venc)+dupp->cliente TAG venccli TO ('sacdupp') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        dupp->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('08> SACFORN  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacforn") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacforn'
        IF ! AbriArq('SACFORN','forn','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,0,'COD_FORN')
        ORDCREATE('sacforn','codigo','forn->cod_forn')
        //prog(lci+1,17,30,'RAZAO')
        ORDCREATE('sacforn','nome','forn->razao')
        //prog(lci+1,17,60,'CGC')
        ORDCREATE('sacforn','cgc','forn->cgc')
        //prog(lci+1,17,70,'LOCAL+RAZAO')
        ORDCREATE('sacforn','local','forn->local+forn->razao')
        //prog(lci+1,17,100,' OK')
        forn->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('09> SACCLI   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccli") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccli'
        IF ! AbriArq('SACCLI','cli','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //mqtd_ind := 100/13
        //prog(lci+1,17,00)
        INDEX ON cli->cod_cli TAG codigo TO ('saccli') // EVAL dbprogress('CODIGO CLIENTE',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON cli->razao TAG raz TO ('saccli') // EVAL dbprogress('RAZAO',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON cli->cgc TAG cgc TO ('saccli') // EVAL dbprogress('CNPJ',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON cli->cpf TAG cpf TO ('saccli') // EVAL dbprogress('CPF',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        //INDEX ON cli->cidade+cli->uf+cli->bairro+cli->nome TAG end TO ('saccli') // EVAL dbprogress('CIDADE+UF+BAIRRO+NOME',,lci,35,mqtd_ind*5,17,0)
        INDEX ON cli->cidade+cli->nome TAG end TO ('saccli') // EVAL dbprogress('CIDADE+UF+BAIRRO+NOME',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON cli->codvend+cli->uf+cli->cidade+cli->bairro+cli->nome TAG vende TO ('saccli') // EVAL dbprogress('CODIGO VENDEDOR',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON STR(cli->tot_comp)+STR(cli->cod_cli,5) TAG compra TO ('saccli') DESCEND // EVAL dbprogress('TOTAL COMPRAS',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON cli->nome+cli->razao TAG nome TO ('saccli') // EVAL dbprogress('NOME+RAZAO',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON DTOS(cli->ult_comp)+cli->razao TAG dt TO ('saccli') // EVAL dbprogress('ULT.COMPRA',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON cli->insc TAG insc TO ('saccli') // EVAL dbprogress('INSCRICAO',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        INDEX ON cli->uf TAG ufcli TO ('saccli') // EVAL dbprogress('UF',,lci,35,mqtd_ind*11,17,0)
        //prog(lci+1,17,110)
        INDEX ON DTOS(cli->data_cad)+cli->razao TAG data TO ('saccli') // EVAL dbprogress('DATA CADASTRO',,lci,35,mqtd_ind*12,17,0)
        //prog(lci+1,17,120)
        INDEX ON SUBSTR(DTOC(cli->data_cad),1,5)+SUBSTR(DTOC(cli->data_cad),7)+cli->razao TAG diames TO ('saccli') // EVAL dbprogress('DATA CAD.(DIA E MES)',,lci,35,mqtd_ind*13,17,0)
        //prog(lci+1,17,130)
        */
        cli->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
/*
DEVPOS(lci,1);DEVOUT('10> SACCLIMV =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacclimv") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacclimv'
        IF ! AbriArq('SACCLIMV','climv','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/2
        INDEX ON climv->cod_cli TAG codigo TO ('sacclimv') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*1,17,0)
        INDEX ON STR(climv->vlr_venda)+climv->razao TAG vlr TO ('sacclimv') DESCEND // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*2,17,0)
        climv->(DBCLOSEAREA())
ENDIF
*/
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('11> SACGRUPO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacgrupo') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacgrupo'
        IF ! AbriArq('SACGRUPO','grup','E');RETURN NIL;wvw_lclosewindow();ENDIF
        ORDCREATE('sacgrupo','grupo','grup->gru_sub')
        ORDCREATE('sacgrupo','desc','grup->merc')
        //prog(lci+1,17,100,' OK')
        grup->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('12> SACMERC  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacmerc') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacmerc'
        IF ! AbriArq('SACMERC','merc','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/8
        //prog(lci+1,17,00)
        INDEX ON merc->cod_merc TAG codigo TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON merc->gru_sub+merc->cod_merc TAG grupo TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON merc->merc TAG desc TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON merc->cod_fab+merc->merc TAG codfab TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON merc->gru_sub+merc->merc TAG grumerc TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON merc->cod_barr TAG codbarr TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON merc->especie+merc->merc TAG espemer TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON merc->ref+merc->merc TAG refmer TO ('sacmerc') // EVAL dbprogress('VALOR VENDA',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,100)
        merc->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('13> SACPED_E =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacped_e") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacped_e'
        IF ! AbriArq('SACPED_E','ped_e','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON ped_e->num_ped TAG numped TO ('sacped_e')
        INDEX ON ped_e->cod_merc + ped_e->num_ped TAG codigo TO ('sacped_e')
        //prog(lci+1,17,100,' OK')
        ped_e->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('14> SACMOVNT =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacmovnt') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacmovnt'
        IF ! AbriArq('SACMOVNT','movnt','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/10
        //prog(lci+1,17,00)
        INDEX ON DTOS(movnt->data_s_e)+movnt->conjunta+movnt->ent_sai+movnt->cod_nat+STR(movnt->icm)+movnt->cod_nota+movnt->isento TAG conj TO ('sacmovnt') // EVAL dbprogress('DATA ENT/SAI',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON DTOS(movnt->data_s_e)+movnt->cod_nota+movnt->cod_nat+movnt->documento TAG codnat TO ('sacmovnt') // EVAL dbprogress('DATA ENT/SAI+COD.NOTA',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON movnt->cod_nota+DTOS(movnt->data_s_e)+movnt->documento TAG codnota TO ('sacmovnt') // EVAL dbprogress('COD.NOTA',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON movnt->uf_cli+movnt->cid_cli+movnt->documento TAG coduf TO ('sacmovnt') // EVAL dbprogress('UF CLIENTE',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON movnt->num_ped+movnt->ent_sai+movnt->tipo+movnt->documento TAG numped TO ('sacmovnt') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON movnt->codigo+DTOS(movnt->data_s_e) TAG cod TO ('sacmovnt') // EVAL dbprogress('COD.MERCADORIA',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON movnt->documento + movnt->ent_sai + movnt->cod_cli TAG doc TO ('sacmovnt') // EVAL dbprogress('DOCUMENTO',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON DTOS(movnt->data_s_e)+movnt->documento + movnt->ent_sai TAG datdoc TO ('sacmovnt') // EVAL dbprogress('DATA/DOCUMENTO',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON DTOS(movnt->data_s_e)+movnt->documento + STR(movnt->icm) + movnt->ent_sai TAG daticm TO ('sacmovnt') // EVAL dbprogress('DATA/DOCUMENTO/ENT_SAI',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON movnt->conjunta + movnt->ent_sai + movnt->cod_cli TAG conj_es TO ('sacmovnt') // EVAL dbprogress('CONJUNTA',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        movnt->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('15> SACTOTNT =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sactotnt') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sactotnt'
        IF ! AbriArq('SACTOTNT','totnt','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/12
        //prog(lci+1,17,00)
        INDEX ON DTOS(totnt->emissao)+totnt->documento+totnt->cod_nota+totnt->cod_nat TAG conj TO ('sactotnt') // EVAL dbprogress('EMISSAO/DOCUMENTO',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON DTOS(totnt->emissao)+totnt->cod_nota+totnt->cod_nat+totnt->documento TAG codnat TO ('sactotnt') // EVAL dbprogress('EMISSAO/COD.NOTA',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON totnt->cod_nota+DTOS(totnt->emissao)+totnt->documento TAG codnota TO ('sactotnt') // EVAL dbprogress('COD.NOTA',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON totnt->uf_cli+totnt->cid_cli+totnt->documento TAG coduf TO ('sactotnt') // EVAL dbprogress('UF CLIENTE',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON totnt->num_ped+totnt->ent_sai+totnt->documento TAG numped TO ('sactotnt') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON totnt->documento+totnt->ent_sai+totnt->cod_cli TAG doc TO ('sactotnt') // EVAL dbprogress('DOCUMENTO',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON totnt->documento+DTOS(totnt->emissao)+totnt->cod_nota+totnt->cod_nat TAG docemi TO ('sactotnt') // EVAL dbprogress('DOCUMENTO/EMISSAO',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON totnt->cliente+totnt->documento TAG clidoc TO ('sactotnt') // EVAL dbprogress('CLIENTE',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON totnt->cgc_cli+totnt->cpf_cli+totnt->insc_cli TAG cgccpf TO ('sactotnt') // EVAL dbprogress('CNPJ',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON totnt->documento+totnt->cod_cli TAG doccod TO ('sactotnt') // EVAL dbprogress('DOCUMENTO/COD.CLI',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        INDEX ON totnt->tip_sef+totnt->documento+totnt->cod_cli TAG tipsef TO ('sactotnt') // EVAL dbprogress('TIPO SEF',,lci,35,mqtd_ind*11,17,0)
        //prog(lci+1,17,110)
        INDEX ON totnt->auxiliar+totnt->ent_sai+totnt->documento TAG auxsef TO ('sactotnt') // EVAL dbprogress('AUXILIAR+ENT_SAI',,lci,35,mqtd_ind*12,17,0)
        //prog(lci+1,17,120)
        totnt->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('16> SACCAIXA =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccaixa") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccaixa'
        IF ! AbriArq('SACCAIXA','caix','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/11
        //prog(lci+1,17,00)
        INDEX ON DTOS(caix->data) + caix->nota + caix->tipo + caix->documento + caix->descri1 TAG data TO ('saccaixa') // EVAL dbprogress('DATA',,lci,35,mqtd_ind*1,17,0)
        //prog(lci+1,17,10)
        INDEX ON caix->cod_cli TAG codcli TO ('saccaixa') // EVAL dbprogress('COD.CLIENTE',,lci,35,mqtd_ind*2,17,0)
        //prog(lci+1,17,20)
        INDEX ON caix->tipo + caix->documento + caix->cod_cli + caix->pg TAG tipo TO ('saccaixa') // EVAL dbprogress('TIPO/DOCUMENTO',,lci,35,mqtd_ind*3,17,0)
        //prog(lci+1,17,30)
        INDEX ON caix->descri1 + DTOS(caix->data) + caix->tipo TAG desc TO ('saccaixa') // EVAL dbprogress('DESCRICAO',,lci,35,mqtd_ind*4,17,0)
        //prog(lci+1,17,40)
        INDEX ON caix->num_ban + caix->documento + STR(caix->valor,10,2) TAG numban TO ('saccaixa') // EVAL dbprogress('No.BANCO',,lci,35,mqtd_ind*5,17,0)
        //prog(lci+1,17,50)
        INDEX ON caix->nota TAG nota TO ('saccaixa') // EVAL dbprogress('NOTA',,lci,35,mqtd_ind*6,17,0)
        //INDEX ON caix->nota+caix->tipo TAG nota TO ('saccaixa') // EVAL dbprogress('NOTA',,lci,35,mqtd_ind*6,17,0)
        //prog(lci+1,17,60)
        INDEX ON caix->coddesp +caix->tipo+ DTOS(caix->data) TAG desp TO ('saccaixa') // EVAL dbprogress('COD.DESPESA',,lci,35,mqtd_ind*7,17,0)
        //prog(lci+1,17,70)
        INDEX ON DTOS(caix->data) + caix->tipo + caix->nota + caix->documento TAG datip TO ('saccaixa') // EVAL dbprogress('DATA/TIPO',,lci,35,mqtd_ind*8,17,0)
        //prog(lci+1,17,80)
        INDEX ON caix->num_pdv + caix->num_cup + caix->documento TAG npdv TO ('saccaixa') // EVAL dbprogress('No.PDV',,lci,35,mqtd_ind*9,17,0)
        //prog(lci+1,17,90)
        INDEX ON DTOS(caix->data) + caix->cod_opera TAG datop TO ('saccaixa') // EVAL dbprogress('DATA/COD.OPERADOR',,lci,35,mqtd_ind*10,17,0)
        //prog(lci+1,17,100)
        INDEX ON DTOS(caix->data) + caix->fechado TAG datfec TO ('saccaixa') // EVAL dbprogress('DATA/FECHADO',,lci,35,mqtd_ind*11,17,0)
        //prog(lci+1,17,110)
        caix->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('17> SACNOTA  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacnota") .OR. indexar <> NIL
        IF ! AbriArq('SACNOTA','nota','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON nota->numero TAG num TO ('sacnota')
        //prog(lci+1,17,100,' OK')
        nota->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('18> SACNOTAE =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacnotae") .OR. indexar <> NIL
        IF ! AbriArq('SACNOTAE','notae','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON notae->numeroe TAG nume TO ('sacnotae')
        //prog(lci+1,17,100,' OK')
        notae->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
/*
DEVPOS(lci,1);DEVOUT('19> SACNOTAB =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacnotab") .OR. indexar <> NIL
        IF ! AbriArq('SACNOTAB','notab','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON notab->numerob TAG numb TO ('sacnotab')
        //prog(lci+1,17,100,' OK')
        notab->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('20> SACUF    =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacuf") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacuf'
        IF ! AbriArq('SACUF','tabuf','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON tabuf->uf TAG uf TO ('sacuf')
        //prog(lci+1,17,100,' OK')
        tabuf->(DBCLOSEAREA())
ENDIF
*/
DEVPOS(lci,1);DEVOUT('21> SACCARTA =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccarta") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccarta'
        IF ! AbriArq('SACCARTA','car','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON car->codigo TAG codigo TO ('saccarta')
        INDEX ON car->cartao TAG cart TO ('saccarta')
        //prog(lci+1,17,100,' OK')
        car->(DBCLOSEAREA())
ENDIF

limpa(lci,0,lba,cba)

DEVPOS(lci,1);DEVOUT('22> SACCHEQ  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccheq") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccheq'
        IF ! AbriArq('SACCHEQ','cheq','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/9
        INDEX ON cheq->cod_cli + DTOS(cheq->data_fund) TAG codcli TO ('saccheq') // EVAL dbprogress('CODIGO CLIENTE',,lci,35,mqtd_ind*1,17,0)
        INDEX ON cheq->num_ban + cheq->num_cheq + STR(cheq->valor_cheq,12,2) + cheq->cod_cli + cheq->ok TAG numban TO ('saccheq') // EVAL dbprogress('No.BANCO',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(cheq->data_cheq) + DTOS(cheq->data_fund) + cheq->cod_cli TAG data TO ('saccheq') // EVAL dbprogress('DATA DO CHEQUE',,lci,35,mqtd_ind*3,17,0)
        INDEX ON cheq->cod_vend + cheq->cod_cli TAG vend TO ('saccheq') // EVAL dbprogress('CODIGO VENDEDOR',,lci,35,mqtd_ind*4,17,0)
        INDEX ON cheq->num_cheq + cheq->cod_cli TAG num_chq TO ('saccheq') // EVAL dbprogress('No.CHEQUE',,lci,35,mqtd_ind*5,17,0)
        INDEX ON DTOS(cheq->data_ok) + cheq->cod_cli TAG dat_ok TO ('saccheq') // EVAL dbprogress('DATA OK',,lci,35,mqtd_ind*6,17,0)
        INDEX ON DTOS(cheq->data_fund) + cheq->cod_vend TAG fund_vend TO ('saccheq') // EVAL dbprogress('DATA INCLUSAO',,lci,35,mqtd_ind*7,17,0)
        INDEX ON cheq->cod_cli + cheq->ok TAG cli_ok TO ('saccheq') // EVAL dbprogress('COD.CLIENTE+OK',,lci,35,mqtd_ind*8,17,0)
        INDEX ON cheq->cpfcnpj TAG cpf TO ('saccheq') // EVAL dbprogress('CPF/CNPJ',,lci,35,mqtd_ind*9,17,0)
        cheq->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('23> SACADDE  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccadde") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacadde'
        IF ! AbriArq('SACCADDE','desp','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON desp->codigo TAG codigo TO ('saccadde')
        INDEX ON desp->desc1+desp->desc2 TAG desc TO ('saccadde')
        //prog(lci+1,17,100,' OK')
        CLOSE desp
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('24> SACDESP  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdesp") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacdesp'
        IF ! AbriArq('sacdesp','cdesp','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cdesp->codigo TAG codigo TO ('sacdesp')
        INDEX ON cdesp->desc1 TAG desc TO ('sacdesp')
        //prog(lci+1,17,100,' OK')
        CLOSE cdesp
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('25> SACTRAN  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sactran") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sactran'
        IF ! AbriArq('SACTRAN','tran','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON tran->cod_tran TAG codigo TO ('sactran')
        INDEX ON tran->razao TAG nome TO ('sactran')
        //prog(lci+1,17,100,' OK')
        CLOSE tran
ENDIF
****************************************************************************
DEVPOS(lci,1);DEVOUT('26> SACAV    =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacav") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacav'
        IF ! AbriArq('SACAV','av','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON av->numero+av->cod_merc TAG numero TO ('sacav')
        INDEX ON av->cod_cli TAG cli TO ('sacav')
        INDEX ON DTOS(av->data) TAG dat TO ('sacav')
        //prog(lci+1,17,100,' OK')
        CLOSE av
ENDIF
**********************************************************************************************
/*
DEVPOS(lci,1);DEVOUT('27> SACOP    =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacop") .OR. indexar <> NIL
        IF ! AbriArq('SACOP','op','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON op->operacao TAG cod_op TO ('sacop')
        //prog(lci+1,17,100,' OK')
        CLOSE op
ENDIF
*/
****************************************************************************
DEVPOS(lci,1);DEVOUT('28> SACBAL   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacbal") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacbal'
        IF ! AbriArq('SACBAL','bal','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON DTOS(bal->data_bal)+bal->codigo TAG dat TO ('sacbal')
        //prog(lci+1,17,100,' OK')
        CLOSE bal
ENDIF
****************************************************************************
DEVPOS(lci,1);DEVOUT('29> SACFIN   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacfin") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacfin'
        IF ! AbriArq('SACFIN','fin','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON fin->cod_fin+fin->tipo_fin TAG fin TO ('sacfin')
        //prog(lci+1,17,100,' OK')
        CLOSE fin
ENDIF
****************************************************************************
****************************************************************************
DEVPOS(lci,1);DEVOUT('30> SACSERIE =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacserie") .OR. indexar <> NIL
        IF ! AbriArq('SACSERIE','serie','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON serie->codigo+serie->serie TAG cod TO ('sacserie')
        INDEX ON serie->serie TAG serie TO ('sacserie')
        //prog(lci+1,17,100,' OK')
        CLOSE serie
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('31> SACESPE  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacespe") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacespe'
        IF ! AbriArq('SACESPE','espe','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON espe->cod_espe TAG doc TO ('sacespe')
        INDEX ON espe->descri TAG desc TO ('sacespe')
        //prog(lci+1,17,100,' OK')
        CLOSE espe
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('32> SACTABME =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sactabme") .OR. indexar <> NIL
        IF ! AbriArq('SACTABME','tabme','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON tabme->codigo+tabme->cod_cli TAG cod TO ('sactabme')
        INDEX ON tabme->cod_cli+tabme->codigo TAG cod_c TO ('sactabme')
        INDEX ON tabme->grupo+tabme->cod_cli TAG grup TO ('sactabme')
        //prog(lci+1,17,100,' OK')
        CLOSE tabme
ENDIF
**********************************************************************************************
/*
DEVPOS(lci,1);DEVOUT('33> SACDOLAR=>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdolar") .OR. indexar <> NIL
        IF ! AbriArq('SACDOLAR','dolar','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON DTOS(dolar->data_dolar) TAG datdol TO ('sacdolar')
        INDEX ON DESCEND(DTOS(dolar->data_dolar)) TAG datdesc TO ('sacdolar')
        //prog(lci+1,17,100,' OK')
        CLOSE dolar
ENDIF
*/
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('34> SACCONF  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacconf") .OR. indexar <> NIL
        IF ! AbriArq('SACCONF','conf','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON conf->descri TAG desc TO ('sacconf')
        INDEX ON conf->modulo TAG modu TO ('sacconf')
        //prog(lci+1,17,100,' OK')
        CLOSE conf
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('35> REGIAO   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('regiao') .OR. indexar <> NIL
        IF ! AbriArq('regiao','reg','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON reg->codigo TAG cod TO ('regiao')
        //prog(lci+1,17,100,' OK')
        reg->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('36> SACCEP   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccep") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccep'
        IF ! AbriArq('SACCEP','cep','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/1
        INDEX ON cep->nome+cep->local+cep->bairro1+cep->tipo TAG nome TO ('saccep') // EVAL dbprogress('NOME',,lci,35,mqtd_ind*1,17,0)
        CLOSE cep
ENDIF
****************************************************************************
DEVPOS(lci,1);DEVOUT('37> SACCEPLO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacceplo") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacceplo'
        IF ! AbriArq('SACCEPLO','ceplo','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/1
        INDEX ON ceplo->nome TAG nome TO ('sacceplo') // EVAL dbprogress('NOME',,lci,35,mqtd_ind*1,17,0)
        CLOSE ceplo
ENDIF
****************************************************************************
DEVPOS(lci,1);DEVOUT('38> MERC_DET =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("merc_det") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'merc_det'
        IF ! AbriArq('MERC_DET','deta','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00,'CODIGO')
        INDEX ON deta->codigo+deta->chassis+deta->venda TAG cod TO ('merc_det')
        //prog(lci+1,17,30,'CHASSIS')
        INDEX ON deta->chassis+deta->codigo+deta->venda TAG chass TO ('merc_det')
        //prog(lci+1,17,50,'DATA')
        INDEX ON DTOS(deta->data)+deta->codigo+deta->chassis+deta->venda TAG dat TO ('merc_det')
        //prog(lci+1,17,70,'DAT_VENDA')
        INDEX ON DTOS(deta->dat_venda)+deta->codigo+deta->chassis+deta->venda TAG datven TO ('merc_det')
        //prog(lci+1,17,100,' OK')
        CLOSE deta
ENDIF
/*
DEVPOS(lci,1);DEVOUT('39> SACVISI  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacvisi") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacvisi'
        IF ! AbriArq('sacvisi','visi','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //INDEX ON DTOS(visi->data)+SUBSTR(visi->horaini,1,5) TAG dathor TO ('sacvisi')
        //prog(lci+1,17,100,' OK')
        CLOSE visi
ENDIF
DEVPOS(lci,1);DEVOUT('40> SACCTVIS =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacctvis") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacctvis'
        IF ! AbriArq('sacctvis','ctvis','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON DTOS(ctvis->data_visi)+SUBSTR(ctvis->hora_ini,1,5)+ctvis->cod_cli TAG dathrcli TO ('sacctvis')
        INDEX ON ctvis->cod_tec+DTOS(ctvis->data_visi)+SUBSTR(ctvis->hora_ini,1,5)+ctvis->cod_cli TAG tecdathr TO ('sacctvis')
        //prog(lci+1,17,100,' OK')
        CLOSE ctvis
ENDIF
*/
DEVPOS(lci,1);DEVOUT('41> SACSOLI  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacsoli") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacsoli'
        IF ! AbriArq('sacsoli','soli','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON DTOS(soli->data) TAG dat TO ('sacsoli')
        //prog(lci+1,17,100,' OK')
        CLOSE soli
ENDIF
DEVPOS(lci,1);DEVOUT('42> SACTIPDC =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sactipdc") .OR. indexar <> NIL
        IF ! AbriArq('sactipdc','tipdc','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON tipdc->tipo_doc TAG tip TO ('sactipdc')
        //prog(lci+1,17,100,' OK')
        CLOSE tipdc
ENDIF
limpa(lci,0,lba,cba)
DEVPOS(lci,1);DEVOUT('43> SACMENSA =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacmensa") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacmensa'
        IF ! AbriArq('sacmensa','mensa','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON mensa->cod_rec TAG codmensa TO ('sacmensa')
        //prog(lci+1,17,100,' OK')
        CLOSE mensa
ENDIF
DEVPOS(lci,1);DEVOUT('44> SACOCORR =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacocorr") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacocorr'
        IF ! AbriArq('sacocorr','ocorr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/4
        INDEX ON ocorr->codigo+DTOS(ocorr->data_exe) TAG codmerc TO ('sacocorr') // EVAL dbprogress('CODIGO',,lci,35,mqtd_ind*1,17,0)
        INDEX ON DTOS(ocorr->data_exe)+ocorr->codigo TAG datexe TO ('sacocorr') // EVAL dbprogress('DATA EXE',,lci,35,mqtd_ind*2,17,0)
        INDEX ON ocorr->cod_vend+DTOS(ocorr->data_exe) TAG codvend TO ('sacocorr') // EVAL dbprogress('CODIGO VENDEDOR',,lci,35,mqtd_ind*3,17,0)
        INDEX ON ocorr->documento+ocorr->codigo TAG doc TO ('sacocorr') // EVAL dbprogress('DOCUMENTO',,lci,35,mqtd_ind*4,17,0)
        CLOSE ocorr
ENDIF
/*
DEVPOS(lci,1);DEVOUT('45> SACPDVPD =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacpdvpd") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacpdvpd'
        IF ! AbriArq('sacpdvpd','pdvpd','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON STRZERO(pdvpd->pedido,8) TAG pedprod TO ('sacpdvpd')
        //prog(lci+1,17,100,' OK')
        CLOSE pdvpd
ENDIF
DEVPOS(lci,1);DEVOUT('46> SACPDVPR =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacpdvpr") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacpdvpr'
        IF ! AbriArq('sacpdvpr','pdvpr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        GO TOP
        mqtd_ind := 100/1
        INDEX ON STRZERO(pdvpr->pedido,8)+pdvpr->codproduto TAG pedprod TO ('sacpdvpr') // EVAL dbprogress('PEDIDO',,lci,35,mqtd_ind*1,17,0)
        CLOSE pdvpr
ENDIF
*/
DEVPOS(lci,1);DEVOUT('47> SACROMA  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacroma") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacroma'
        IF ! AbriArq('sacroma','roma','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00,'NUM_ROMA+NUM_PED')
        INDEX ON roma->num_roma+roma->num_ped TAG numrom TO ('sacroma')
        //prog(lci+1,17,20,'NUM_PED+CANCEL')
        INDEX ON roma->num_ped+roma->cancel+roma->ped_orc TAG numped TO ('sacroma')
        //prog(lci+1,17,40,'DAT_ROMA+NUM_ROMA+NUM_PED')
        INDEX ON DTOS(roma->dat_roma)+roma->num_roma+roma->num_ped TAG datrom TO ('sacroma')
        //prog(lci+1,17,60,'ENTREGUE+NUM_ROMA+NUM_PED')
        INDEX ON DTOS(roma->entregue)+roma->num_roma+roma->num_ped TAG datent TO ('sacroma')
        //prog(lci+1,17,80,'COD_MOT+NUM_ROMA+NUM_PED')
        INDEX ON roma->cod_mot+roma->num_roma+roma->num_ped TAG codmot TO ('sacroma')
        //prog(lci+1,17,100,' OK')
        CLOSE roma
ENDIF
DEVPOS(lci,1);DEVOUT('48> SACPRODU =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacprodu") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacprodu'
        IF ! AbriArq('sacprodu','produ','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00,'NUM_ROMA+NUM_PED')
        INDEX ON produ->num_roma+produ->num_ped TAG numrom TO ('sacprodu')
        //prog(lci+1,17,20,'NUM_PED+CANCEL')
        INDEX ON produ->num_ped+produ->cancel+produ->ped_orc TAG numped TO ('sacprodu')
        //prog(lci+1,17,40,'DAT_ROMA+NUM_ROMA+NUM_PED')
        INDEX ON DTOS(produ->dat_roma)+produ->num_roma+produ->num_ped TAG datrom TO ('sacprodu')
        //prog(lci+1,17,60,'ENTREGUE+NUM_ROMA+NUM_PED')
        INDEX ON DTOS(produ->entregue)+produ->num_roma+produ->num_ped TAG datent TO ('sacprodu')
        //prog(lci+1,17,80,'COD_MOT+NUM_ROMA+NUM_PED')
        INDEX ON produ->cod_mot+produ->num_roma+produ->num_ped TAG codmot TO ('sacprodu')
        //prog(lci+1,17,100,' OK')
        CLOSE produ
ENDIF

DEVPOS(lci,1);DEVOUT('49> SACCID   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccid") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccid'
        IF ! AbriArq('saccid','cid','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cid->cidade+cid->uf TAG cida TO ('saccid')
        INDEX ON cid->cod_cid TAG codcida TO ('saccid')
        //prog(lci+1,17,100,' OK')
        CLOSE cid
ENDIF

DEVPOS(lci,1);DEVOUT('50> SACLOG   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saclog") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saclog'
        IF ! AbriArq('saclog','log','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100/6
        INDEX ON log->cod_oper+DTOS(log->data)+log->descri TAG cod TO ('saclog') // EVAL dbprogress('CODIGO OPERADOR',,lci,35,mqtd_ind*1,17,0)
        INDEX ON log->aut_oper+DTOS(log->data)+log->descri TAG aut TO ('saclog') // EVAL dbprogress('AUTORIZA OPERADOR',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(log->data)+hora+log->cod_oper+log->descri TAG dat TO ('saclog') // EVAL dbprogress('DATA',,lci,35,mqtd_ind*3,17,0)
        INDEX ON log->documento+log->descri TAG doc TO ('saclog') // EVAL dbprogress('DOCUMENTO',,lci,35,mqtd_ind*4,17,0)
        INDEX ON log->descri+log->aut_oper TAG desc TO ('saclog') // EVAL dbprogress('DESCRICAO',,lci,35,mqtd_ind*5,17,0)
        INDEX ON log->cod_prod+DTOS(log->data) TAG prod TO ('saclog') // EVAL dbprogress('COD.PRODUTO',,lci,35,mqtd_ind*6,17,0)
        CLOSE log
ENDIF
DEVPOS(lci,1);DEVOUT('51> SACBALAN =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacbalan") .OR. indexar <> NIL
        IF ! AbriArq('sacbalan','balan','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON balan->cod_merc+DTOS(balan->data) TAG codmerc TO ('sacbalan')
        INDEX ON DTOS(balan->data)+balan->cod_merc TAG datamerc TO ('sacbalan')
        //prog(lci+1,17,100,' OK')
        CLOSE balan
ENDIF
i := 0
FOR i = 1 TO 15
        malias := 'ban'+ALLTRIM(TRANSFORM(i,'99'))
        DEVPOS(lci,1);DEVOUT('52> SACBAN'+ALLTRIM(TRANSFORM(i,'99'))+'=>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
        IF ! SR_EXISTINDEX('sacban'+ALLTRIM(TRANSFORM(i,'99'))+'') .OR. indexar <> NIL
                IF ! AbriArq(('sacban'+ALLTRIM(TRANSFORM(i,'99'))),(malias),'E');RETURN NIL;wvw_lclosewindow();ENDIF
                INDEX ON documento+deb_cred TAG doc TO ('sacban'+ALLTRIM(TRANSFORM(i,'99')))
                INDEX ON DTOS(data) TAG dat TO ('sacban'+ALLTRIM(TRANSFORM(i,'99')))
                //prog(lci+1,17,100,' OK')
                CLOSE (malias)
        ENDIF
NEXT
DEVPOS(lci,1);DEVOUT('53> SACASS   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacass") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacass'
        IF ! AbriArq('sacass','ass','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00,'DATA+COD_CLI+COD_MERC')
        ORDCREATE('sacass','dat','DTOS(ass->data)+ass->cod_cli+ass->cod_pro')
        //prog(lci+1,17,20,'COD_CLI+COD_PRO')
        ORDCREATE('sacass','c_cli','ass->cod_cli+ass->cod_pro')
        //prog(lci+1,17,40,'COD_PRO+COD_CLI')
        ORDCREATE('sacass','c_merc','ass->cod_pro+ass->cod_cli')
        //prog(lci+1,17,60,'COD_CLI+DATA_BAIX')
        ORDCREATE('sacass','cli_b','ass->cod_cli+DTOS(ass->data_baix)')
        //prog(lci+1,17,80,'COD_PRO+DATA_BAIX')
        ORDCREATE('sacass','merc_b','ass->cod_pro+DTOS(ass->data_baix)')
        //prog(lci+1,17,90,'DATA_BAIX+COD_PROD')
        ORDCREATE('sacass','baix','DTOS(ass->data_baix)+ass->cod_pro')
        //prog(lci+1,17,100,' OK')
        ass->(DBCLOSEAREA())
ENDIF
/*
IF ! SR_EXISTINDEX("ecferro") .OR. indexar <> NIL
        IF ! AbriArq('ecferro','ecferr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        ORDCREATE('ecferro','tipo','ecferr->tipo+STRZERO(ecferr->codigo,2)')
        ecferr->(DBCLOSEAREA())
ENDIF
*/
DEVPOS(lci,1);DEVOUT('55> SACCRED  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccred") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccred'
        IF ! AbriArq('SACCRED','CRED','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cred->tipo+cred->numero+cred->duplicata+cred->pago+cred->fornec+STR(cred->valor) TAG tipo TO ('saccred')
        INDEX ON cred->fornec+cred->pago TAG fornec TO ('saccred')
        INDEX ON DTOS(cred->datpag)+cred->tipo+cred->duplicata+cred->fornec TAG datapg TO ('saccred')
        INDEX ON DTOS(cred->venc)+cred->fornec+cred->banco+cred->duplicata TAG vend TO ('saccred')
        INDEX ON DTOS(cred->emissao)+cred->fornec+cred->banco+cred->duplicata TAG emi TO ('saccred')
        INDEX ON cred->fornec+cred->pago+DTOS(cred->venc)+cred->duplicata TAG fornpg TO ('saccred')
        INDEX ON cred->num_ped+cred->pago+cred->vendedor TAG numped TO ('saccred')
        INDEX ON cred->cliente+cred->pago+DTOS(cred->venc) TAG forcli TO ('saccred')
        INDEX ON cred->fornec+cred->pago+cred->tipo+cred->numero+cred->agencia+cred->c_c TAG fornch TO ('saccred')
        INDEX ON cred->duplicata+cred->tipo+cred->fornec TAG dup TO ('saccred')
        INDEX ON DTOS(cred->datope)+cred->cod_forn TAG datope TO ('saccred')
        //prog(lci+1,17,100,' OK')
        cred->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('56> SACCLF   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacclf") .OR. indexar <> NIL       // DUPREC1
        IF ! AbriArq('SACCLF','CLF','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON clf->codigo TAG cod TO ('sacclf')
        //prog(lci+1,17,100,' OK')
        clf->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('57> SACOSAC  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacosac") .OR. indexar <> NIL
        IF ! AbriArq('SACOSAC','OSAC','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON osac->codigo TAG cod TO ('sacosac')
        //prog(lci+1,17,100,' OK')
        osac->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('58> SACOSS   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacoss") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacoss'
        IF ! AbriArq('SACOSS','OSS','E');RETURN NIL;wvw_lclosewindow();ENDIF
        //prog(lci+1,17,00,'CODIGO') //1
        INDEX ON oss->num_os TAG num TO ('sacoss')
        //prog(lci+1,17,30,'DATA') //1
        INDEX ON oss->data_ent TAG datent TO ('sacoss')
        //prog(lci+1,17,70,'DATA') //1
        INDEX ON oss->baixa TAG datbai TO ('sacoss')
        //prog(lci+1,17,80,'PAG') //1
        INDEX ON oss->pag+oss->num_os TAG pagnum TO ('sacoss')
        //prog(lci+1,17,100,' OK')
        oss->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('59> SACOSPRO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacospro") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacospro'
        IF ! AbriArq('SACOSPRO','OSPRO','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON ospro->num_os+ospro->cod_merc TAG num TO ('sacospro')
        //prog(lci+1,17,100,' OK')
        ospro->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('60> SACSOLPR =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacsolpr") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacsolpr'
        IF ! AbriArq('sacsolpr','solpr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        ORDCREATE('sacsolpr','dat','DTOS(solpr->data)+solpr->cod_cli+solpr->cod_pro')
        ORDCREATE('sacsolpr','c_cli','solpr->cod_cli+solpr->cod_pro')
        ORDCREATE('sacsolpr','c_merc','solpr->cod_pro+solpr->cod_cli')
        ORDCREATE('sacsolpr','cli_b','solpr->cod_cli+DTOS(solpr->data_baix)')
        ORDCREATE('sacsolpr','merc_b','solpr->cod_pro+DTOS(solpr->data_baix)')
        ORDCREATE('sacsolpr','baix','DTOS(solpr->data_baix)+solpr->cod_pro')
        //prog(lci+1,17,100,' OK')
        solpr->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('61> SACRL    =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacrl") .OR. indexar <> NIL
        IF ! AbriArq('sacrl','rl','E');RETURN NIL;wvw_lclosewindow();ENDIF
        ORDCREATE('sacrl','codoper','rl->cod_oper+DTOS(rl->data)+rl->hora')
        ORDCREATE('sacrl','dat','DTOS(rl->data)+rl->hora')
        //prog(lci+1,17,100,' OK')
        rl->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('62> SACPROTO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacproto") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacproto'
        IF ! AbriArq('sacproto','prot','E');RETURN NIL;wvw_lclosewindow();ENDIF
        ORDCREATE('sacproto','docfor','prot->doc+prot->fornece')
        ORDCREATE('sacproto','dathor','DTOS(prot->data)+prot->hora')
        //prog(lci+1,17,100,' OK')
        prot->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('63> SACPED_C =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacped_c") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacped_c'
        IF ! AbriArq('sacped_c','ped_c','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/12
        INDEX ON ped_c->num_ped TAG numped TO ('sacped_c') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*1,17,0)
        ped_c->(DBCLOSEAREA())
ENDIF
/*
DEVPOS(lci,1);DEVOUT('64> SACREPRO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacrepro") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacrepro'
        IF ! AbriArq('sacrepro','repro','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/6
        INDEX ON repro->cod_pro+repro->ope_ok TAG cod_ope TO ('sacrepro') // EVAL dbprogress('COD_PRO',,lci,35,mqtd_ind*1,17,0)
        INDEX ON repro->ope_ok+repro->cod_pro TAG ope_cod TO ('sacrepro') // EVAL dbprogress('OPE_COD+COD_PRO',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(repro->data_ok)+repro->cod_pro TAG datok_cod TO ('sacrepro') // EVAL dbprogress('DATA_OK+COD_PRO',,lci,35,mqtd_ind*3,17,0)
        INDEX ON DTOS(repro->data_ok)+repro->produto TAG datok_pro TO ('sacrepro') // EVAL dbprogress('DATA_OK+PRODUTO',,lci,35,mqtd_ind*4,17,0)
        INDEX ON DTOS(repro->data)+repro->cod_pro TAG dat_cod TO ('sacrepro') // EVAL dbprogress('DATA_OK+COD_PRO',,lci,35,mqtd_ind*5,17,0)
        INDEX ON DTOS(repro->data)+repro->produto TAG dat_pro TO ('sacrepro') // EVAL dbprogress('DATA_OK+PRODUTO',,lci,35,mqtd_ind*6,17,0)
        repro->(DBCLOSEAREA())
ENDIF
*/
DEVPOS(lci,1);DEVOUT('65> SACTABPG =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sactabpg") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sactabpg'
        IF ! AbriArq('sactabpg','tabpg','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/1
        INDEX ON tabpg->codigo TAG cod TO ('sactabpg') // EVAL dbprogress('COD_PRO',,lci,35,mqtd_ind*1,17,0)
        tabpg->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('66> SACCOTAC =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccotac") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccotac'
        IF ! AbriArq('saccotac','cotac','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/4
        INDEX ON cotac->codigo+DTOS(cotac->data) TAG coddat TO ('saccotac') // EVAL dbprogress('CODIGO+COD_FORN',,lci,35,mqtd_ind*1,17,0)
        INDEX ON cotac->codigo+cotac->cod_forn TAG codig TO ('saccotac') // EVAL dbprogress('CODIGO+COD_FORN',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(cotac->data)+cotac->codigo TAG datcod TO ('saccotac') // EVAL dbprogress('DATA+CODIGO',,lci,35,mqtd_ind*3,17,0)
        INDEX ON cotac->cod_forn+cotac->codigo TAG forncod TO ('saccotac') // EVAL dbprogress('COD_FORN+CODIGO',,lci,35,mqtd_ind*4,17,0)
        cotac->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
DEVPOS(lci,1);DEVOUT('67> SACPPED =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacpped") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacpped'
        IF ! AbriArq('sacpped','pped','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/2
        INDEX ON pped->processo+pped->cod_ped TAG proped TO ('sacpped') // EVAL dbprogress('PROCESSO+COD_PED',,lci,35,mqtd_ind*1,17,0)
        INDEX ON pped->cod_ped+pped->processo TAG codped TO ('sacpped') // EVAL dbprogress('COD_PED+PROCESSO',,lci,35,mqtd_ind*2,17,0)
        pped->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('68> SACPITE =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacpite") .OR. indexar <> NIL
        IF ! AbriArq('sacpite','pite','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100
        INDEX ON pite->codpedido TAG numped TO ('sacpite') // EVAL dbprogress('CODPEDIDO',,lci,35,mqtd_ind*1,17,0)
        pite->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('69> SACORC_C =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacorc_c") .OR. indexar <> NIL
        IF ! AbriArq('sacorc_c','orc_c','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100
        INDEX ON orc_c->num_ped TAG numped TO ('sacorc_c') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*1,17,0)
        orc_c->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('70> SACHIST  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sachist") .OR. indexar <> NIL
        IF ! AbriArq('sachist','hist','E');RETURN NIL;wvw_lclosewindow();ENDIF
        mqtd_ind := 100
        //INDEX ON hist->codcli+DTOS(hist->data)+hist->hora TAG hiscod TO sachist // EVAL dbprogress('CODCLI',,lci,35,mqtd_ind*1,17,0)
        INDEX ON hist->codcli+DTOS(hist->data) TAG hiscod TO sachist // EVAL dbprogress('CODCLI',,lci,35,mqtd_ind*1,17,0)
        hist->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('71> SACMOVTRA=>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacmovtra") .OR. indexar <> NIL
        IF ! AbriArq('sacmovtra','movtra','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        mqtd_ind := 100/4
        INDEX ON movtra->cod_forn+DTOS(movtra->data)+movtra->km TAG datkm TO ('sacmovtra')
        INDEX ON movtra->cod_forn+movtra->km TAG codkm TO ('sacmovtra')
        movtra->(DBCLOSEAREA())
ENDIF
IF ! SR_EXISTINDEX('texto') .OR. indexar <> NIL
        IF ! AbriArq('texto','tex','E');RETURN NIL;ENDIF
        ORDCREATE('texto','nom','tex->nome')
        CLOSE tex
ENDIF
IF ! SR_EXISTINDEX('sacpresen') .OR. indexar <> NIL
        IF ! AbriArq('sacpresen','presen','E');RETURN NIL;ENDIF
        ORDCREATE('sacpresen','ccli','presen->codcli')
        CLOSE presen
ENDIF
DEVPOS(lci,1);DEVOUT('72> SACPROFI   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacprofi") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacprofi'
        IF ! AbriArq('sacprofi','profi','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON profi->profi TAG prof TO ('sacprofi')
        INDEX ON profi->cod_profi TAG cod TO ('sacprofi')
        //prog(lci+1,17,100,' OK')
        CLOSE profi
ENDIF
/*
DEVPOS(lci,1);DEVOUT('73> SACNCM   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacncm") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacncm'
        IF ! AbriArq('sacncm','ncm','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON ncm->descri TAG descr TO ('sacncm')
        //prog(lci+1,17,50,' OK')
        INDEX ON ncm->codigo TAG codig TO ('sacncm')
        //prog(lci+1,17,100,' OK')
        CLOSE ncm
ENDIF
*/
/*
DEVPOS(lci,1);DEVOUT('73> SACCST   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("saccst") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccst'
        IF ! AbriArq('saccst','cst','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cst->cst TAG cod_cst TO ('saccst')
        //prog(lci+1,17,100,' OK')
        CLOSE cst
ENDIF
*/
**********************************************************************************************
/*
DEVPOS(24,18);DEVOUT('SACSLDD  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacsldd.dbf')
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
        RETURN .F.
ENDIF
IF ! SR_EXISTINDEX("sacsldd")
        IF ! AbriArq('SACSLDD','sldd','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON DTOS(data_sld)+codigo_sld TAG datasld TO ('sacsldd')
        //prog(24,30,50)
        INDEX ON codigo_sld+DTOS(data_sld) TAG codigosld TO ('sacsldd')
        CLOSE sldd
ENDIF
DEVPOS(24,18);DEVOUT('SACCXENT =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('saccxent.dbf')
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
        RETURN .F.
ENDIF
IF ! SR_EXISTINDEX("saccxent")
        IF ! AbriArq('SACCXENT','cxent','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cxent->nota TAG nota TO ('saccxent')

        CLOSE cxent
ENDIF
DEVPOS(24,18);DEVOUT('PDV_LOJ  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("pdv_loj.dbf")
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
ELSEIF ! SR_EXISTINDEX("pdv_loj")
        IF ! AbriArq('PDV_LOJ','loja','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON num_pdv+cod_usr TAG nome TO ('pdv_loj')

        CLOSE loja
ENDIF
DEVPOS(24,18);DEVOUT('PDV_OPE  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("pdv_ope.dbf")
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
ELSEIF ! SR_EXISTINDEX("pdv_ope")
        IF ! AbriArq('PDV_OPE','operador');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON num_pdv+cod_usr TAG nome TO ('pdv_ope')

        CLOSE operador
ENDIF
DEVPOS(24,18);DEVOUT('PDV_VND  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("pdv_vnd.dbf")
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
ELSEIF ! SR_EXISTINDEX("pdv_vnd")
        IF ! AbriArq('PDV_VND','vendedor');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON num_pdv+num_cup+cod_vnd TAG nome TO ('pdv_vnd')

        CLOSE vendedor
ENDIF
DEVPOS(24,18);DEVOUT('PDV_CUP  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("pdv_cup.dbf")
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
ELSEIF ! SR_EXISTINDEX("pdv_cup")
        IF ! AbriArq('PDV_CUP','cupons');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON num_pdv+num_cup TAG nome TO ('pdv_cup')

        CLOSE cupons
ENDIF
DEVPOS(24,18);DEVOUT('PDV_USR  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("pdv_usr.dbf")
        atencao('Este Arquivo nao existe no diretorio especificado, execute a SACDBF (Sacdbf.exe)')
ELSEIF ! SR_EXISTINDEX("pdv_usr")
        IF ! AbriArq('PDV_USR','users');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON cod_usr TAG codi TO ('pdv_usr')

        CLOSE users
ENDIF
*/
CLOSE ALL
wvw_lclosewindow()
RETURN .T.

