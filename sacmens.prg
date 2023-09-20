*******************************************
* GERAR PARCELA DE PAGAMENTO DE MANUTENCAO
*******************************************
FUNCTION sacmens()
*******************
LOCAL mprg := 'SACMENS',lci,cci,opcao,mmes,mdocumento,mquantd,mvalor,;
      cComm,cons_contr:={},cons_dupr,mobs:=SPACE(60),m_mes,m_ano,mvenc,mcpf_cnpj:='',mperc_reaj:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtip_term:='O',mcod_cli:=0,cons_cli := {}

IF ! ver_nivel(mprg,'GERAR MENSALIDADES DOS CLIENTE','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 00
opcao := ' '
mquantd := mvalor := 0
op_tela(10,05,19,85,' GERAR MENSALIDADES')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mcod_cli := mperc_reaj := 0
        mmes := '  '
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do Cliente..........................:')
        DEVPOS(lci+2,cci+1);DEVOUT('Quantidade de MESES p/Gerar Mensalidade....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Observacao.................................:')
        DEVPOS(lci+4,cci+1);DEVOUT('Percentual de Reajuste (%).................:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade de parcelas A SER GERADA........:')
        DEVPOS(lci+6,cci+1);DEVOUT('Quantidade de parcelas GERADAS.............:')
        DEVPOS(lci+7,cci+1);DEVOUT('Quantidade de parcelas QUE FALTA...........:')
        DEVPOS(lci+8,cci+1);DEVOUT('Valor das parcelas geradas.................:')
        DEVPOS(lci+7,cci+46);DEVOUT(STRZERO(mquantd,9))
        DEVPOS(lci+8,cci+46);DEVOUT(TRANSFORM(mvalor,'9,999,999.99'))
        @ lci+1,cci+46 GET mcod_cli pict "99999" VALID lim_get() .AND. IF(EMPTY(mcod_cli),.T.,ver_cli(mcod_cli,lci+1,cci+52)) WHEN men_get(0,0,'Informe o cliente que deseja ou nao informe p/imprimir todos')
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! EMPTY(mcod_cli)
                ver_cli(mcod_cli,lci+1,cci+52)
        ENDIF
        @ lci+2,cci+46 GET mmes PICT '99' VALID mmes $ '1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24'
        @ lci+3,cci+46 GET mobs PICT '@S30'
        @ lci+4,cci+46 GET mperc_reaj PICT '9999.999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma o processamento [S/n]:')
        IF opcao = 'N';LOOP;ENDIF
        cons_contr:={}
        ccomm := "SELECT * FROM contrato WHERE ativo = 'S' AND vlrmens > 0"
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + ' AND codcli = '+sr_cdbvalue(mcod_cli)
        ENDIF
        sr_getconnection():exec(ccomm,,.t.,@cons_contr)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_contr) = 0
                atencao('Nao existe contrato para gerar...')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+5,cci+46);DEVOUT(TRANSFORM(LEN(cons_contr),'999,999,999'))
        setcor(1)
        mquantd := mvalor := i := 0
        FOR i = 1 TO LEN(cons_contr)
                prog_imp(i,cons_contr[i,2])
                m_mes := VAL(SUBSTR(DTOC(mdata_sis),4,2))
                m_ano := VAL(SUBSTR(DTOC(mdata_sis),7))
                mquantd ++

                cons_cli:={}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_contr[i,2]),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_cli) = 0
                        LOOP
                ENDIF
                IF ! EMPTY(mperc_reaj)
                        cons_contr[i,4] := ROUND(cons_contr[i,4] * ((mperc_reaj / 100) + 1),2)
                ENDIF
                y := 0
                FOR y = 1 TO VAL(mmes)
                        IF ! EMPTY(cons_cli[1,32])
                                mcpf_cnpj := cons_cli[1,32]
                        ELSE
                                mcpf_cnpj := cons_cli[1,34]
                        ENDIF

                        m_mes ++
                        IF m_mes > 12
                                m_mes := m_mes - 12
                                m_ano := m_ano + 1
                        ENDIF


                        mdocumento := cons_contr[i,1]+'-'+STRZERO(m_mes,2)+'/'+STRZERO(m_ano,2)
                        mvenc := CTOD(STRZERO(VAL(IF(m_mes = 2 .AND. cons_contr[i,5] = '30','28',cons_contr[i,5])),2)+'/'+STRZERO(m_mes,2)+'/'+STRZERO(m_ano,2))
                        cons_dupr:={}
                	sr_getconnection():exec("SELECT * FROM sacdupr WHERE tipo = "+sr_cdbvalue('ME')+" AND duplicata = "+sr_cdbvalue(mdocumento)+" AND fornec = "+sr_cdbvalue(cons_contr[i,2])+' AND venc = '+sr_cdbvalue(mvenc),,.t.,@cons_dupr)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_dupr) = 0
	                        sr_getconnection():exec('INSERT INTO sacdupr ('+;
		      			'tipo       	,'+;
		      			'duplicata  	,'+;
		      			'valor_dup  	,'+;
		      			'tip_cli    	,'+;
		      			'fornec     	,'+;
		      			'cliente    	,'+;
		      			'emissao    	,'+;
		      			'venc       	,'+;
		      			'valor      	,'+;
		      			'vendedor   	,'+;
		      			'operador   	,'+;
		      			'num_ped   	,'+;
		      			'c_cpfcnpj   	,'+;
		      			'obs        	,'+;
		      			'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue('ME'                )+','+; //1
                                        sr_cdbvalue(ALLTRIM(mdocumento) )+','+; //2
                                        sr_cdbvalue(cons_contr[i,4]     )+','+; //3
                                        sr_cdbvalue(cons_cli[1,8]       )+','+; //4
                                        sr_cdbvalue(cons_contr[i,2]     )+','+; //5
                                        sr_cdbvalue(cons_cli[1,3]       )+','+; //6
                                        sr_cdbvalue(mdata_sis           )+','+; //7
                                        sr_cdbvalue(mvenc               )+','+; //8
                                        sr_cdbvalue(cons_contr[i,4]     )+','+; //9
                                        sr_cdbvalue(cod_operado         )+','+; //12
                                        sr_cdbvalue(cod_operado         )+','+; //11
                                        sr_cdbvalue(cons_contr[i,1]     )+','+; //11
                                        sr_cdbvalue(mcpf_cnpj           )+','+; //11
                                        sr_cdbvalue(mobs                )+','+; //11
                                        sr_cdbvalue(' ')+')',,.f.)
                                mvalor := mvalor + cons_contr[i,4]
                                setcor(3)
                                DEVPOS(lci+6,cci+46);DEVOUT(TRANSFORM(mquantd,'999,999,999'))
                                DEVPOS(lci+7,cci+46);DEVOUT(TRANSFORM(LEN(cons_contr) - mquantd,'999,999,999'))
                                DEVPOS(lci+8,cci+46);DEVOUT(TRANSFORM(mvalor,'9,999,999.99'))
                                setcor(1)
                        ENDIF
                NEXT
        NEXT
        IF ! EMPTY(mperc_reaj)
                mensagem('Reajustando os contratos....')
                cons_cli:={}
                sr_getconnection():exec("SELECT * FROM contrato ",,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                i := 0
                FOR i = 1 TO LEN(cons_cli)
                        sr_getconnection():exec("UPDATE contrato SET vlrmens = "+sr_cdbvalue(ROUND(cons_cli[i,4] * ((mperc_reaj / 100)+1),2))+" WHERE codcli = "+sr_cdbvalue(cons_cli[i,2]) ,,.f.)
                NEXT
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        atencao('Foi gerada todas as mensalidades...')
        CLEAR GETS
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL

