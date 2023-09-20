MEMVAR getlist
*******************
* SOLICITAR PEDIDO
*******************
FUNCTION sac23pd1(orc,venda,m2ped)
***************
MEMVAR cod_operado,nivel_acess,mdata_sis

LOCAL mp_venda,msele,morde,f,mvar,mtelap,mtot_ipi,telaobs,;
      mdocum,mchass:=SPACE(20),mdescri1:=SPACE(54),mreg,telapro,;
      mdescri2:=SPACE(54),mdescri3:=SPACE(54),mdescri4:=SPACE(54),mdescri5:=SPACE(54),;
      mquantd_aux:=0,v:=0,linhas,linha,lin,nPos,cComm,mitem:=0,mcampo_ped:=' ',c_ped:={},;
      mcod_tab,mcont,mtipo_preco:=' ',mpre:=' ',c_orcam,m_ped,m_pos,point:=0,cons_orcam := {},mdesc_prod:=0

PRIVATE MPRG:='SAC23PD1',;
        m_matriz:={},m_codigo:={},m_Cbarra:={},m_alt:={},i,opcao,;
        mcod_merc:=0,mquantd:=1,mdesconto,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li:=0,ci:=0,lb:=0,cb:=0,mnome_ven:=' ',lci:=0,cci:=0,lba:=0,cba:=0,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item:=0,orcamento,sovenda,mvarejo:=1,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto:=0,mflag,ali,no,mcod_ven,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mcomissao:=0,mcust_real,mvendido:=0,;
        mobs_prod:=SPACE(40),mlib_spc:=' ',msit_tip:=' ',;
        mqtd_dias:=0,mqtd_prz:=0,mcond_veze:=SPACE(3),mpromocao,mperc,mcom_oper:=0,;
        mtp_venda:='  ',mhoras,m_dia[15],m_vlr[15],;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mmontador:=0,mmontador1:=0,mtel_carro,mcodemp,;
        mmasc_qtd:=SPACE(10),mnum_os:=0,mobs1,mobs2,mobs3,mobs4,;
        mplaca,mcarro,mmodelo,mkm,mpt_os:=0,mcomi_tab:=0,mcod_cond:=0,mpacote:=0,;
        mpecas:=0,mlimite:=0,mcompras:=0,malterou:=' ',cons_tabpg := {},mcons_tabpg:=' ',;
        mtot_desc:=0,mloop:=0,mcod_pres:=0,merroped:=0,mdesc_aux:=0,mcgc,mcpf,minsc,;
        mdata_pedido,m_produto:={},mnum_orc:=0,mconvidado:='',mavaria:=1,cons_cli:={}


//lci:=8
lci:=10
cci:=0
cba:=100
lba:=35

SET KEY -1 TO IBR_ABRE_GAVETA()                 // ABRIR GAVETA F4
SET KEY -9 TO
SET KEY -7 TO F8_PROD()
SET KEY 286 TO
SET KEY 294 TO
SET KEY -4 TO
set_key('cliente',,,'*')
SET KEY 303 TO alt_prod2()               // Alteracao de Produtos <ALT+V>
SET KEY 294 TO cons_luc()               // Consulta Lucro  <ALT+L)
SET KEY -4 TO f5_qtd()                  // Imforma a quantidade no AUTOCAIXA no PRG SACROT
********************
CLEAR GETS
mcod_cli:=m_set[1,84]
mplaca:= SPACE(10)
mcarro:=mmodelo:=mkm := SPACE(15)
mobs1:=mobs2:=mobs3:=mobs4:=SPACE(39)
setcor(1)                    && cor para os SAY
op_tela(00,00,35,100,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS'+SPACE(40)+'Terminal: '+m_indiv[1,1])
ali := 'ped_s'                                                                          
no  := 'noped'
orcamento = 1
IF ! ver_nivel(mprg,'EMISSAO DE PEDIDO VENDA','1245',nivel_acess,,'AMBIE')
        RELEASE ALL
        wvw_lclosewindow()
        RETURN NIL
ENDIF

// ABERTURA DA TELA DE PEDIDO

setcor(1)
IF venda = NIL
        sovenda = 1
ELSE
        sovenda = 2
ENDIF
WHILE .T.
        mtipo_preco := mproducao := ' '
        msubtotal := mtot_ipi  := 0
        mnome_ven := SPACE(30)
        SET KEY 287 TO
        mautoriz := SPACE(3)
        mflag := mtot_custo := 0
        mcod_ven := SPACE(3)
        IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
        WHILE .T.
                mavaria := 1
                mdata_pedido := mdata_sis
                ver_emp(mcodempresa)
                setcor(1)
                mcond_veze := '00 '
                FOR i = 1 TO 15
                        m_dia[i]:=m_vlr[i]:=0
                NEXT
                minsc := mcgc := SPACE(14)
                mcpf = SPACE(11)
                mhoras := TIME()
                mperc := mcomi_tab := mcod_cond := mnum_ped := mtot_custo := 0
                m_matriz := {}
                m_codigo := {}
                m_Cbarra := {}
                m_alt    := {}
                IF m_indiv[1,26] = 'T'
                        mcod_cli := IF(EMPTY(m_set[1,84]),1,m_set[1,84])
                        mnome_cli := SPACE(40)
                        mcod_ven := cod_operado
                        mflag := 1
                        op_tela(00,01,31,99,' A B E R T U R A   D O   P E D I D O                      Informacoes para o PEDIDO ** 1 ** ')
                        botao(0,0,5,99)
                        SUB_BANNER(01,02,'TERMINAL LIVRE')
                        IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                                botao(08,21,18,73)
                        	WVW_DrawImage( ,08,21,18,73,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                        ENDIF
                        botao(24,0,30,97)
                        DEVPOS(25,01);DEVOUT('Codigo do Cliente....:')
                        DEVPOS(26,01);DEVOUT('Nome Fantasia........:')
                        DEVPOS(27,01);DEVOUT('Observacao...........:')
                        WHILE .T.
                                SET KEY -8 TO sac130()           // inclusao de clientes
                                IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                                @ 25,24 GET mcod_cli PICT '99999'
                                @ 25,30 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN
                                ENDIF
                                IF ! EMPTY(mcod_cli)
                                        *****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        *****************
                                        IF ! cli->(DBSEEK(mcod_cli))
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome_cli)
                                        *****************
                                        //SELE('cli');IF(ver_serie() = '141253',ORDSETFOCUS(8),ORDSETFOCUS(2))
                                        SELE('cli');ORDSETFOCUS(2)
                                        *****************
                                        IF ! cli->(DBSEEK(RTRIM(mnome_cli)))
                                                atencao('Cliente nao cadastrado !!!')
                                                LOOP
                                        ELSE
                                                f7_cli()
                                                mcod_cli := cli->cod_cli
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli)
                                        DEVPOS(25,24);DEVOUT(STR(cli->cod_cli,5))
                                        DEVPOS(25,30);DEVOUT(cli->razao)
                                        DEVPOS(26,24);DEVOUT(cli->nome)
                                        botao(27,24,30,97)
                                        WVW_DrawLabel(,27,24,cli->obs,,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,28,24,cli->l_obs1,,,240,, 'arial',15,10,,,,,)
                                        WVW_DrawLabel(,29,24,cli->l_obs2,,,240,, 'arial',15,10,,,,,)
                                        setcor(1)
                                        IF mnum_os = 0 .AND. ! spc(mcod_cli,0,'*')
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                        IF mnum_os = 0
                                                mlib_spc := '*'
                                        ENDIF
                                        mdocum := cli_dup(mcod_cli)
                                        IF ! EMPTY(mdocum)
                                                atencao('Existe estes documentos deste cliente: '+mdocum,0,,,10)
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF cli->bloqueio = 'S'
                                        atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cli->data_bloq))
                                        LOOP
                                ENDIF
                                ver_aniv(mcod_cli)
                                opcao := op_simnao('S','Confirma o CLIENTE:')
                                SET KEY -8 TO                    // inclusao de clientes
                                IF opcao = 'S'
                                        setcor(1)
                                        mcod_aux  := cli->codvend
                                        mcod_ven := cli->codvend
                                        mcod_cond := VAL(cli->cod_cond)
                                        IF cli->atac_vare = 'A'
                                                mvarejo := 2
                                        ELSE
                                                mvarejo := 1
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(1)
                                IF m_set[1,10] <> 'S'
                                        mcod_aux  := cli->codvend
                                        mcod_ven := cod_operado
                                ENDIF
                                mcgc := cli->cgc
                                mcpf := cli->cpf
                                minsc:= cli->insc
                                wvw_lclosewindow()
                                EXIT
                        ENDDO
                        EXIT
                ENDIF
                IF m_indiv[1,9] <> 'V'
                        IF orc # NIL
                                cons_orcam := {}
                                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(orc),,.t.,@cons_orcam)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_orcam) = 0
                                        atencao('Nao foi possivel encontrar este ORCAMENTO...')
                                ELSE
                                        mcod_cli := VAL(cons_orcam[1,23])
                                ENDIF
                        
                        ENDIF
                        op_tela(00,01,31,99,' A B E R T U R A   D O   P E D I D O                      Informacoes para o PEDIDO ** 1 ** ')
                        IF ver_serie() = '141237'
                                op_tela(10,10,12,50,'DATA DO PEDIDO')
                                DEVPOS(01,00);DEVOUT('Digite a Data do Pedido:')
                                @ 01,COL()+1 GET mdata_pedido VALID IF(EMPTY(mdata_pedido) .OR. mdata_pedido < mdata_sis .OR. mdata_pedido > mdata_sis + 1,.F.,.T.)
                                READ
                                opcao := op_simnao('S','Confirma a Data do Pedido:')
                                wvw_lclosewindow()
                                IF opcao = 'N'
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        botao(0,0,5,99)

                        SUB_BANNER(01,02,'TERMINAL LIVRE')
                        DEVPOS(07,00);DEVOUT('Codigo do Cliente....:')
                        DEVPOS(08,00);DEVOUT('Nome Fantasia........:')
                        DEVPOS(09,00);DEVOUT('Observacao...........:')
                        @ 12,00 TO 12,99
                        DEVPOS(13,00);DEVOUT('Vendedor.............:')
                        @ 14,00 TO 14,99
                        DEVPOS(15,00);DEVOUT('Numero da O.S........:')
                        IF m_set[1,37] = 'S'
                                DEVPOS(16,00);DEVOUT('Placa................:')
                                DEVPOS(17,00);DEVOUT('KM...................:')
                        ELSE
                                DEVPOS(16,00);DEVOUT('Serie................:')
                                DEVPOS(17,00);DEVOUT('Numero...............:')
                        ENDIF
                        DEVPOS(18,00);DEVOUT('Marca................:')
                        DEVPOS(19,00);DEVOUT('Modelo...............:')
                        @ 20,00 TO 20,99
                        DEVPOS(21,00);DEVOUT('Codigo Condicao Pagto:')
                        DEVPOS(22,00);DEVOUT('Condicao de Pagamento:')
                        DEVPOS(23,00);DEVOUT('Quantidades de Dias..:')
                        DEVPOS(24,00);DEVOUT('Media Dias...........:')
                        DEVPOS(25,00);DEVOUT('Percentual...........:')
                        @ 26,00 TO 26,99
                        DEVPOS(27,00);DEVOUT('Codigo Representante.:')
                        @ 28,00 TO 28,99
                        DEVPOS(29,00);DEVOUT('Codigo Faturamento...:')
                        DEVPOS(30,00);DEVOUT('Tipo de PEDIDO.......:')
                        IF m_set[1,80] = 'S' .AND. m2ped = NIL
                                IF ! alt_senha('1')
                                        SET KEY -9 TO
                                        RELEASE ALL
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                mnome_ven := SPACE(30)
                                ver_ven(cod_operado)
                                mnome_ven := sen->snome
                        ELSE
                                ver_ven(cod_operado)
                                mnome_ven := sen->snome
                                atencao(' Operador:'+cod_operado+'-'+RTRIM(mnome_ven)+' ou <ESC> p/Sair')
                                IF LASTKEY() = 27
                                        SET KEY -9 TO
                                        RELEASE ALL
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        mcom_oper := sen->scom_oper
                        mnome_cli := SPACE(40)
                        // UTILIZAR A ORDEM DE SERVICOS
                        IF m_set[1,42] = 'S' .AND. ali = 'ped_s'
                                IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
                                IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
                                WHILE .T.
                                        mpt_os  := mnum_os := 0
                                        WVW_DrawBoxGet(,15,23,6)
                                        @ 15,23 GET mnum_os PICT '999999'
                                        READ
                                        IF LASTKEY() = 27
                                                RELEASE ALL
                                                wvw_lclosewindow()
                                                wvw_lclosewindow()
                                                RETURN NIL
                                        ENDIF
                                        IF EMPTY(mnum_os)
                                                IF ver_nivel('CUSTOMERC','EMISSAO DE PEDIDO SEM ORDEM DE SERVICOS (O.S.)','15',nivel_acess,,'AMBIE')
                                                        EXIT
                                                ELSE
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        *****************
                                        SELE('oss');ORDSETFOCUS(1)
                                        GO TOP
                                        *****************
                                        IF ! oss->(DBSEEK(STRZERO(mnum_os,6)))
                                                atencao('O.S. nao Encontrada em nosso Arquivos')
                                                LOOP
                                        ENDIF
                                        IF oss->pag = 'P'
                                        	atencao('Esta O.S. ja foi transformada em PEDIDO...')
                                        	LOOP
                                        ENDIF
					mpt_os := RECNO()
                                        *****************
                                        SELE('ospro');ORDSETFOCUS(1)
                                        GO TOP
                                        *****************
                                        IF ! ospro->(DBSEEK(STRZERO(mnum_os,6)))
                                                atencao('Nao existe nenhum PRODUTO nesta O.S.')
                                                mpt_so := 0
                                                EXIT
                                        ENDIF
                                        DEVPOS(16,23);DEVOUT(oss->serie)
                                        DEVPOS(17,23);DEVOUT(oss->numero)
                                        DEVPOS(18,23);DEVOUT(oss->marca)
                                        DEVPOS(19,23);DEVOUT(oss->modelo)
                                        setcor(1)
                                        opcao := op_simnao('S','Confirma a ORDEM DE SERVICO:')
                                        IF opcao = 'S'
                                                mplaca := oss->serie
                                                mkm    := oss->numero
                                                mmodelo:= oss->modelo
                                                mcarro := oss->marca
                                                mcod_cli := VAL(oss->cod_cli)
		                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                                gerar_no_ped()

                                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])

                                                WHILE ! EOF() .AND. STRZERO(mnum_os,6) = ospro->num_os
				                        mped_merc := {}
				                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(ospro->cod_merc),,.t.,@mped_merc)
                                                        sr_getconnection():exec('COMMIT',,.f.)
				                        IF LEN(mped_merc) = 0
				                                atencao('Codigo da mercadoria nao cadastrado')
				                                LOOP
				                        ENDIF
			                                mcampo_ped := 'pempresa,'   ;//1
                        			                      +'pnum_ped,'  ;//2
			                                              +'ptermina,'  ;//3
                        			                      +'pdat_ped,'  ;//4
			                                              +'pgru_sub,'  ;//5
                        			                      +'pcod_merc,' ;//6
			                                              +'pmerc,'     ;//7
                        			                      +'punidade,'  ;//8
			                                              +'pespecie,'  ;//9
                        			                      +'penvelope,' ;//10
			                                              +'ppeso,'     ;//11
			                                              +'ppeso_liq,' ;//12
                        			                      +'pgramatura,';//13
			                                              +'pquantd,'   ;//14
                        			                      +'ppacote,'   ;//15
			                                              +'ppecas,'    ;//16
                        			                      +'ppre_dig,'  ;//17
			                                              +'pdesc,'     ;//18
                        			                      +'pvlr_fat,'  ;//19
			                                              +'ppre_venda,';//20
                        			                      +'ppr_venda1,';//21
			                                              +'pcust_real,';//22
                        			                      +'pcust_merc,';//23
			                                              +'pcod_cli,'  ;//24
                        			                      +'pcgc,'      ;//25
			                                              +'pcpf,'      ;//26
                        			                      +'pplaca,'    ;//27
			                                              +'pcarro,'    ;//28
                        			                      +'pmodelo,'   ;//29
			                                              +'pkm,'       ;//30
	                        		                      +'pcod_fab,'  ;//31
        			                                      +'pfabrica,'  ;//32
                                			              +'pcod_oper,' ;//33
			                                              +'pcomi_oper,';//34
                        			                      +'pcod_vend,' ;//35
			                                              +'pvendedor,' ;//36
                        			                      +'palimento ,';//37
			                                              +'pcod_fin  ,';//38
                        			                      +'pcod_tab  ,';//39
			                                              +'pvlr_pres ,';//40
                        			                      +'pcond_veze,';//41
			                                              +'pcond_inte,';//42
                        			                      +'phora     ,';//43
			                                              +'ptp_vend  ,';//44
                        			                      +'pvlr_ent  ,';//45
			                                              +'pisento   ,';//46
                        			                      +'ppromocao ,';//47
			                                              +'pmontador ,';//48
                        			                      +'pmontador1,';//49
			                                              +'pcomissao ,';//50
                        			                      +'pcom_mont ,';//51
			                                              +'pprazo    ,';//52
	                        		                      +'pbebida   ,';//53
        			                                      +'pipi      ,';//54
                                			              +'pobs_prod ,';//55
			                                              +'pind_icms ,';//56
                        			                      +'pstat_item,';//57
			                                              +'psit_trib ,';//58
                        			                      +'pobs1,'     ;//59
			                                              +'pobs2,'     ;//60
                        			                      +'pobs3,'     ;//61
			                                              +'pobs4,'     ;//62
                        			                      +'plocal,'    ;//63
			                                              +'chassis,'   ;//64
                        			                      +'descri1,'   ;//65
			                                              +'descri2,'   ;//66
                        			                      +'descri3,'   ;//67
			                                              +'descri4,'   ;//68
                        			                      +'descri5,'   ;//69
			                                              +'pproducao,' ;//70
                        			                      +'pcod_tran,' ;//71
			                                              +'pos,'       ;//72
                        			                      +'data_so,'       ;//72
			                                              +'cod_pres'    //72
                        			        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
			                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                        			        sr_cdbvalue(STRZERO(mnum_ped,6)      )+','+;//2
			                                sr_cdbvalue(SUBSTR(NETNAME(),1,10)       )+','+;//3
                        			        sr_cdbvalue(mdata_sis                )+','+;//4
			                                sr_cdbvalue(mped_merc[1,7]           )+','+;//5
                        			        sr_cdbvalue(ospro->cod_merc          )+','+;//6
			                                sr_cdbvalue(ospro->merc              )+','+;//7
                        			        sr_cdbvalue(mped_merc[1,14]          )+','+;//8
			                                sr_cdbvalue(mped_merc[1,15]          )+','+;//9
                        			        sr_cdbvalue(''                       )+','+;//10
			                                sr_cdbvalue(mped_merc[1,17]          )+','+;//11
                        			        sr_cdbvalue(mped_merc[1,16]          )+','+;//12
			                                sr_cdbvalue(mped_merc[1,74]          )+','+;//13
                        			        sr_cdbvalue(ospro->quantd            )+','+;//14
			                                sr_cdbvalue(0                        )+','+;//15
                        			        sr_cdbvalue(0                        )+','+;//16
			                                sr_cdbvalue(ospro->vlr_fat           )+','+;//17
                        			        sr_cdbvalue(0                        )+','+;//18
			                                sr_cdbvalue(ospro->vlr_fat           )+','+;//19
                        			        sr_cdbvalue(ospro->vlr_fat           )+','+;//20
			                                sr_cdbvalue(mped_merc[1,47]          )+','+;//21
                        			        sr_cdbvalue(mped_merc[1,45]          )+','+;//22
			                                sr_cdbvalue(mped_merc[1,44]          )+','+;//23
                        			        sr_cdbvalue(mcod_cli      )+','+;//24
			                                sr_cdbvalue(''                       )+','+;//25
                        			        sr_cdbvalue(''                       )+','+;//26
			                                sr_cdbvalue(mplaca                   )+','+;//27
                        			        sr_cdbvalue(mcarro                   )+','+;//28
			                                sr_cdbvalue(mmodelo                  )+','+;//29
                        			        sr_cdbvalue(mkm                      )+','+;//30
			                                sr_cdbvalue(mped_merc[1,30]          )+','+;//31
	                        		        sr_cdbvalue(LEFT(mped_merc[1,31],30) )+','+;//32
        			                        sr_cdbvalue(ospro->operador          )+','+;//33
                                			sr_cdbvalue(0                        )+','+;//34
			                                sr_cdbvalue(ospro->operador          )+','+;//35
                        			        sr_cdbvalue(''                       )+','+;//36
			                                sr_cdbvalue(mped_merc[1,21]          )+','+;//37
                        			        sr_cdbvalue(STRZERO(0,3)             )+','+;//38
			                                sr_cdbvalue(STRZERO(0,3)             )+','+;//39
                        			        sr_cdbvalue(0                        )+','+;//40
			                                sr_cdbvalue(0                        )+','+;//41
                        			        sr_cdbvalue(' '                      )+','+;//42
			                                sr_cdbvalue(mhoras                   )+','+;//43
                        			        sr_cdbvalue(''                       )+','+;//44
			                                sr_cdbvalue(0                        )+','+;//45
                        			        sr_cdbvalue(mped_merc[1,61]          )+','+;//46
			                                sr_cdbvalue(mped_merc[1,23]          )+','+;//47
                        			        sr_cdbvalue(ospro->montador          )+','+;//48
		                	                sr_cdbvalue(ospro->montador1         )+','+;//49
                		        	        sr_cdbvalue(0                        )+','+;//50
			                                sr_cdbvalue(mped_merc[1,27]          )+','+;//51
                        			        sr_cdbvalue(mped_merc[1,75]          )+','+;//52
			                                sr_cdbvalue(mped_merc[1,62]          )+','+;//53
                        			        sr_cdbvalue(iat(mped_merc[1,65],2) )+','+;//54
			                                sr_cdbvalue(ospro->obs_prod          )+','+;//55
                        			        sr_cdbvalue(mped_merc[1,82]          )+','+;//56
			                                sr_cdbvalue(' '                      )+','+;//57
                        			        sr_cdbvalue(mped_merc[1,83]          )+','+;//58
			                                sr_cdbvalue(''                       )+','+;//59
                        			        sr_cdbvalue(''                       )+','+;//60
			                                sr_cdbvalue(''                       )+','+;//61
                        			        sr_cdbvalue(''                       )+','+;//62
			                                sr_cdbvalue(SUBSTR(mped_merc[1,73],1,2)  )+','+;//63
                        			        sr_cdbvalue(''                       )+','+;//64
		                	                sr_cdbvalue(''                       )+','+;//65
                		        	        sr_cdbvalue(''                       )+','+;//66
			                                sr_cdbvalue(''                       )+','+;//67
                        			        sr_cdbvalue(''                       )+','+;//68
			                                sr_cdbvalue(''                       )+','+;//69
	                      			        sr_cdbvalue(''                       )+','+;//70
	                                		sr_cdbvalue(' '                      )+','+;//71
			                                sr_cdbvalue('000000'                 )+','+;//72
                        			        sr_cdbvalue(DATE()                   )+','+;//73
		        	                        sr_cdbvalue('00000'                  )+','+;//74
                	        		        sr_cdbvalue(' ')+')'
			                                sr_getconnection():exec(ccomm,,.f.)
                        			        sr_getconnection():exec("COMMIT",,.f.)
                                                        AADD(m_codigo,ospro->cod_merc)
                                                        AADD(m_Cbarra,mped_merc[1,2])
                                                        IF mped_merc[1,14] = 'EV'
                                                                AADD(m_alt,ospro->cod_merc+' '+LEFT(ospro->merc,27)+' '+menvelope+' '+TRANSFORM(ospro->quantd,'99999.99')+' '+TRANSFORM(ospro->vlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(ospro->vlr_fat * ospro->quantd,ALLTRIM('@E '+m_set[1,98])))
                                                        ELSE
                                                                AADD(m_alt,ospro->cod_merc+' '+LEFT(ospro->merc,38)+' '+TRANSFORM(ospro->quantd,'99999.99')+' '+TRANSFORM(ospro->vlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(ospro->vlr_fat * ospro->quantd,ALLTRIM('@E '+m_set[1,98])))
                                                        ENDIF
                                                        AADD(m_matriz,{ospro->quantd,ospro->vlr_fat,        0,mped_merc[1,7],ospro->merc,mped_merc[1,14],mped_merc[1,17],       0,              0,mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],mped_merc[1,26],mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],mplaca,mhoras,mped_merc[1,82],mped_merc[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,mped_merc[1,75],mped_merc[1,74],ospro->obs_prod,;
	                                                             VAL(ospro->montador),VAL(ospro->montador1),mped_merc[1,27],mped_merc[1,47],'OS',mpacote,mpecas})
                                                        mcod_bc := mped_merc[1,2]
                                                        SKIP
                                                ENDDO
                                                EXIT
                                        ELSE
                                                LOOP
                                        ENDIF
                                ENDDO
                        ENDIF
                        // CLIENTE ANTES DO PEDIDO
                        IF m_set[1,10] = 'S' //.AND. m_indiv[1,26] = 'N'
                                WHILE .T.
                                        SET KEY -8 TO sac130()           // inclusao de clientes
                                        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                                        WVW_DrawBoxGet(,07,23,5)
                                        WVW_DrawBoxGet(,08,23,LEN(mnome_cli))
                                        @ 07,23 GET mcod_cli PICT '99999'
                                        @ 07,29 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                wvw_lclosewindow()
                                                RETURN
                                        ENDIF
                                        IF ! EMPTY(mcod_cli)
                                                *****************
                                                SELE('cli');ORDSETFOCUS(1)
                                                *****************
                                                IF ! cli->(DBSEEK(mcod_cli))
                                                        atencao('Cliente nao cadastrado !!!')
                                                        LOOP
                                                ENDIF
                                        ELSEIF ! EMPTY(mnome_cli)
                                                *****************
                                                SELE('cli');ORDSETFOCUS(2)
                                                *****************
                                                IF ! cli->(DBSEEK(RTRIM(mnome_cli)))
                                                        atencao('Cliente nao cadastrado !!!')
                                                        LOOP
                                                ELSE
                                                        f7_cli()
                                                        mcod_cli := cli->cod_cli
                                                        IF LASTKEY() = 27
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli)
                                                DEVPOS(07,23);DEVOUT(STR(cli->cod_cli,5))
                                                DEVPOS(07,29);DEVOUT(cli->razao)
                                                DEVPOS(08,23);DEVOUT(cli->nome)
                                                botao(09,23,11,96)
                                                WVW_DrawLabel(,09,23,cli->obs,,,240,, 'arial',15,10,,,,,)
                                                WVW_DrawLabel(,10,23,cli->l_obs1,,,240,, 'arial',15,10,,,,,)
                                                WVW_DrawLabel(,11,23,cli->l_obs2,,,240,, 'arial',15,10,,,,,)
                                                setcor(1)
                                                IF mnum_os = 0 .AND. ! spc(mcod_cli,0,'*')
                                                        UNLOCK
                                                        LOOP
                                                ENDIF
                                                IF mnum_os = 0
                                                        mlib_spc := '*'
                                                ENDIF
                                                mdocum := cli_dup(mcod_cli)
                                                IF ! EMPTY(mdocum)
                                                        atencao('Existe estes documentos deste cliente: '+mdocum,0,,,10)
                                                ENDIF
                                        ELSE
                                                LOOP
                                        ENDIF
                                        IF cli->bloqueio = 'S'
                                                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cli->data_bloq))
                                                LOOP
                                        ENDIF
                                        IF cli->atac_vare = 'A'
                                                setcor(3)
                                                DEVPOS(07,70);DEVOUT('ATACADISTA')
                                                setcor(1)
                                        ENDIF
                                        ver_aniv(mcod_cli)
                                        opcao := op_simnao('S','Confirma o CLIENTE:')
                                        SET KEY -8 TO                    // inclusao de clientes
                                        IF opcao = 'S'
                                                setcor(1)
                                                mcod_aux  := cli->codvend
                                                mcod_ven := cli->codvend
                                                mcod_cond := VAL(cli->cod_cond)
                                                IF cli->atac_vare = 'A'
                                                        mvarejo := 2
                                                ELSE
                                                        mvarejo := 1
                                                ENDIF
                                        ELSE
                                                LOOP
                                        ENDIF
                                        setcor(1)
                                        IF m_set[1,10] <> 'S'
                                                mcod_aux  := cli->codvend
                                                mcod_ven := cod_operado
                                        ENDIF
                                        mcgc := cli->cgc
                                        mcpf := cli->cpf
                                        minsc:= cli->insc
                                        EXIT
                                ENDDO
                        ELSE
                                mcod_aux  := cod_operado
                                mcod_ven := cod_operado
                                mcod_cond := VAL(cli->cod_cond)
                        ENDIF
                        ver_ven(mcod_ven)
                        mnome_ven := sen->snome
                        // SOLICITACAO DE VENDEDOR
                        WHILE .T. .AND. m_set[1,108] = 'S'
                                WVW_DrawBoxGet(,13,23,3)
                                @ 13,23 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                                READ
                                mcod_ven := sen->scod_op
                                mnome_ven := sen->snome
                                DEVPOS(13,23);DEVOUT(mcod_ven)
                                DEVPOS(13,27);DEVOUT(mnome_ven)
                                IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux .AND. mcod_cli <> m_set[1,84];
                                   .AND. ! aut_sen('Cod. Vend. Diferente do Vend. Resp.CLIENTE, Senha autorizacao:','LIBCLIVEN',,mcod_cli)
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        // VENDAS A VAREJO OU ATACADO
                        IF m_set[1,5] = 'S'
                                op_tela(10,24,15,60,'Tipo de Venda','*','1')
                                botao1(01,01,03,16)
                                botao1(01,18,03,35)
                                setcor(10)
                                @ 02,02 PROMPT ' Venda NORMAL '
                                @ 02,19 PROMPT ' Venda ESPECIAL '
                                SET INTEN ON
                                MENU TO mvarejo
                                setcor(1)
                                IF LASTKEY() = 27
                                        SET KEY -9 TO
                                        RELEASE ALL
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                wvw_lclosewindow()
                                IF mvarejo=1
                                        DEVPOS(lba,cci+1);DEVOUT(' Normal ')
                                ELSE
                                        DEVPOS(lba,cci+1);DEVOUT(' Especial ')
                                ENDIF
                        ENDIF
                        IF mmult_emp = 'S'
                                alt_emp('*')
                        ENDIF
                        // CONDICOES DE PAGAMENTO ANTE DO PEDIDO
                        IF m_set[1,46] = 'S'
                                WHILE .T.
                                        mquantd := 1
                                        mperc := mcomi_tab := mprz := 0
                                        WVW_DrawBoxGet(,21,23,3)
                                        @ 21,23 GET mcod_cond PICT '999' VALID IF(ver_serie() = '141410' .AND. EMPTY(mcod_cond),.F.,ver_cond(mcod_cond,21,27))
                                        READ
                                        IF LASTKEY() = 27
                                                EXIT
                                        ENDIF
                                        IF mcod_cond <> VAL(cli->cod_cond) .AND. VAL(cli->cod_cond) > 0
                                                IF ! aut_sen('Alteracao da Condicao de Pagamento pre fixada do CLIENTE: de '+cli->cod_cond+' para '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_CONDPAG',,mcod_cli)
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        WVW_DrawBoxGet(,23,23,3)
                                        WVW_DrawBoxGet(,23,27,3)
                                        WVW_DrawBoxGet(,23,31,3)
                                        WVW_DrawBoxGet(,23,35,3)
                                        WVW_DrawBoxGet(,23,39,3)
                                        WVW_DrawBoxGet(,23,43,3)
                                        WVW_DrawBoxGet(,23,47,3)
                                        WVW_DrawBoxGet(,23,51,3)
                                        WVW_DrawBoxGet(,23,55,3)
                                        WVW_DrawBoxGet(,23,59,3)
                                        WVW_DrawBoxGet(,23,63,3)
                                        WVW_DrawBoxGet(,23,67,3)
                                        WVW_DrawBoxGet(,23,71,3)
                                        WVW_DrawBoxGet(,23,75,3)
                                        WVW_DrawBoxGet(,23,79,3)
                                        IF ! EMPTY(mcod_cond)
                                                mcons_tabpg:=' '
                                                cons_tabpg := {}
                                                sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_cond,3)),,.t.,@cons_tabpg)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                setcor(3)
                                                WVW_DrawBoxGet(,22,23,4)
                                                DEVPOS(21,27);DEVOUT(cons_tabpg[1,4])
                                                DEVPOS(22,23);DEVOUTPICT(cons_tabpg[1,6],'@@R 9-99')
                                                mcons_tabpg := cons_tabpg[1,6]
                                                mtipo_preco := cons_tabpg[1,24]
                                                setcor(1)
                                                mcomi_tab := cons_tabpg[1,22]
                                                m_dia[1]   := cons_tabpg[1,7]
                                                m_dia[2]   := cons_tabpg[1,8]
                                                m_dia[3]   := cons_tabpg[1,9]
                                                m_dia[4]   := cons_tabpg[1,10]
                                                m_dia[5]   := cons_tabpg[1,11]
                                                m_dia[6]   := cons_tabpg[1,12]
                                                m_dia[7]   := cons_tabpg[1,13]
                                                m_dia[8]   := cons_tabpg[1,14]
                                                m_dia[9]   := cons_tabpg[1,15]
                                                m_dia[10]  := cons_tabpg[1,16]
                                                m_dia[11]  := cons_tabpg[1,17]
                                                m_dia[12]  := cons_tabpg[1,18]
                                                m_dia[13]  := cons_tabpg[1,19]
                                                m_dia[14]  := cons_tabpg[1,20]
                                                m_dia[15]  := cons_tabpg[1,21]
                                                @ 23,23 GET m_dia[1] PICT '999'
                                                @ 23,27 GET m_dia[2] PICT '999' WHEN ! EMPTY(m_dia[1]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 1
                                                @ 23,31 GET m_dia[3] PICT '999' WHEN ! EMPTY(m_dia[2]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 2
                                                @ 23,35 GET m_dia[4] PICT '999' WHEN ! EMPTY(m_dia[3]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 3
                                                @ 23,39 GET m_dia[5] PICT '999' WHEN ! EMPTY(m_dia[4]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 4
                                                @ 23,43 GET m_dia[6] PICT '999' WHEN ! EMPTY(m_dia[5]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 5
                                                @ 23,47 GET m_dia[7] PICT '999' WHEN ! EMPTY(m_dia[6]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 6
                                                @ 23,51 GET m_dia[8] PICT '999' WHEN ! EMPTY(m_dia[7]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 7
                                                @ 23,55 GET m_dia[9] PICT '999' WHEN ! EMPTY(m_dia[8]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 8
                                                @ 23,59 GET m_dia[10] PICT '999' WHEN ! EMPTY(m_dia[9]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 9
                                                @ 23,63 GET m_dia[11] PICT '999' WHEN ! EMPTY(m_dia[10]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 10
                                                @ 23,67 GET m_dia[12] PICT '999' WHEN ! EMPTY(m_dia[11]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 11
                                                @ 23,71 GET m_dia[13] PICT '999' WHEN ! EMPTY(m_dia[12]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 12
                                                @ 23,75 GET m_dia[14] PICT '999' WHEN ! EMPTY(m_dia[13]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 13
                                                @ 23,79 GET m_dia[15] PICT '999' WHEN ! EMPTY(m_dia[14]) .AND. VAL(SUBSTR(cons_tabpg[1,6],2,2)) > 14
                                                READ
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                                IF m_dia[1] > cons_tabpg[1,7] .OR. m_dia[2] > cons_tabpg[1,8] .OR. m_dia[3] > cons_tabpg[1,9] .OR. m_dia[4] > cons_tabpg[1,10] .OR. m_dia[5] > cons_tabpg[1,11];
                                                   .OR. m_dia[6] > cons_tabpg[1,12] .OR. m_dia[7] > cons_tabpg[1,13] .OR. m_dia[8] > cons_tabpg[1,14] .OR. m_dia[9] > cons_tabpg[1,15] .OR. m_dia[10] > cons_tabpg[1,16];
                                                   .OR. m_dia[11] > cons_tabpg[1,17] .OR. m_dia[12] > cons_tabpg[1,18] .OR. m_dia[13] > cons_tabpg[1,19] .OR. m_dia[14] > cons_tabpg[1,20] .OR. m_dia[15] > cons_tabpg[1,21]
                                                        IF ! aut_sen('Alteracao de Prazo na Tabela: '+STRZERO(mcod_cond,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                mcond_veze := cons_tabpg[1,6]
                                                mprz := m_dia[1]
                                                mperc := cons_tabpg[1,5]
                                        ELSE
                                                mcons_tabpg := ' '
                                                @ 22,23 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                READ
                                                IF(VAL(SUBSTR(mcond_veze,2,2)) >= 1,m_dia[1]:=SUBSTR(cli->prazo_pag,1,2)+' ',.T.)
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                                        m_dia[1]:=VAL(SUBSTR(cli->prazo_pag,1,2))
                                                        m_dia[2]:=VAL(SUBSTR(cli->prazo_pag,3,2))
                                                        m_dia[3]:=VAL(SUBSTR(cli->prazo_pag,5,2))
                                                ENDIF
                                                @ 23,23 GET m_dia[1] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 1
                                                @ 23,27 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                                @ 23,31 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                                @ 23,35 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                                @ 23,39 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                                @ 23,43 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                                @ 23,47 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                                @ 23,51 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                                @ 23,55 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                                @ 23,59 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                                @ 23,63 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                                @ 23,67 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                                @ 23,71 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                                @ 23,75 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                                @ 23,79 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                                READ
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                                mqtd_dias := m_dia[1]+m_dia[2]+m_dia[3]+m_dia[4]+m_dia[5]+m_dia[6]+m_dia[7]+m_dia[8]+m_dia[9]+m_dia[10]+m_dia[11]+m_dia[12]+m_dia[13]+m_dia[14]+m_dia[15]
                                                mqtd_prz := 1
                                                IF(! EMPTY(m_dia[2]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[3]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[4]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[5]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[6]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[7]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[8]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[9]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[10]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[11]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[12]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[13]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[14]),mqtd_prz++,0)
                                                IF(! EMPTY(m_dia[15]),mqtd_prz++,0)
                                                mprz := mqtd_dias / mqtd_prz
                                                IF mprz = 0
                                                        mperc := 0
                                                ENDIF
                                                IF mprz > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(mprz,3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        setcor(3,'*')
                                        DEVPOS(22,23);DEVOUTPICT(mcond_veze,'@@R 9-99')
                                        DEVPOS(24,23);DEVOUT(TRANSFORM(mprz,'9999'))
                                        DEVPOS(25,23);DEVOUT(TRANSFORM(mperc,'999.99'))
                                        setcor(1)
                                        opcao := op_simnao('S','Confirma o percentual:')
                                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                                LOOP
                                        ENDIF
                                        EXIT
                                ENDDO
                        ENDIF
                        // INFORMAR REPRESENTANTE
                        IF m_set[1,152] = 'S'
                                WHILE .T.
                                        mmontador := 0
                                        WVW_DrawBoxGet(,27,23,3)
                                        @ 27,23 GET mmontador PICT '999' VALID ven(mmontador,27,27)
                                        READ
                                        opcao := op_simnao('S','Confirma o Representante:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        EXIT
                                ENDDO
                        ENDIF
                        // CODIGO FATURAMENTO
/*
                        IF ver_serie() = '141373' .AND. EMPTY(mperc)
                                mperc := 0
                                WVW_DrawBoxGet(,29,23,3)
                                @ 29,23 GET mperc PICT '999' VALID IF(mperc<0,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        SET KEY -9 TO
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                setcor(1)
                                opcao := op_simnao('S','Confirma o PERCENTUAL:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                        ENDIF
*/
                        IF ver_nivel(mprg+'AV','EMISSAO DE PEDIDO VENDA DE AVARIAS','1',nivel_acess,'*') .AND. (ver_serie() = '141225' .OR. ver_serie() = '141254')
                                setcor(10)
                                @ 30,23 PROMPT ' Pedido NORMAL '
                                @ 30,COL()+1 PROMPT ' Pedido AVARIAS '
                                SET INTEN ON
                                MENU TO mavaria
                                setcor(1)
                                IF LASTKEY() = 27
                                        SET KEY -9 TO
                                        RELEASE ALL
                                        wvw_lclosewindow()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        IF ! EMPTY(cli->desconto)
                                mperc := mperc + (cli->desconto * -1)
                        ENDIF
                        opcao := op_simnaocan('S','CONFIRMA TODAS AS INFORMACOES DO PEDIDO:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        IF opcao = 'C'
                                wvw_lclosewindow()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ELSE
                        mcod_cli := 1
                        mcod_ven := cod_operado

                ENDIF
                mflag := 1
                EXIT
        ENDDO

        IF mavaria = 1 
                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS'+SPACE(40)+'Terminal: '+m_indiv[1,1])
        ELSE
                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DE PEDIDOS *** AVARIAS ***'+SPACE(25)+'Terminal: '+m_indiv[1,1])
        ENDIF

        merroped := 0
        IF m_indiv[1,9] <> 'V' .AND. m_indiv[1,26] <> 'T'
                wvw_lclosewindow()
        ENDIF
        IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
        IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
        IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
        IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
        IF m_set[1,84] <> mcod_cli .AND. ! EMPTY(mcod_cli)
                mlimite := cli->limite
                mcompras := ver_compras(mcod_cli)
        ENDIF
        * ERRO DO SISTEMA**********
        m_set:={}
        sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
        sr_getconnection():exec('COMMIT',,.f.)
        m_set[1,123] := DCRIPTO(SUBSTR(m_set[1,123],1,14))+DCRIPTO(SUBSTR(m_set[1,123],15,6))

        IF ! EMPTY(m_set[1,82]) .AND. (DATE() >= CTOD(SUBSTR(m_set[1,82],1,2)+'/'+SUBSTR(m_set[1,82],3,2)+'/'+SUBSTR(m_set[1,82],5,2));
                        .OR. SUBSTR(m_set[1,82],12,1) = '*')
                erro()
        ENDIF
        ********************
        botao(00,01,07,99)
        WVW_DrawLabel(,lci-2,cci+58,'No.Pedido: '+STRZERO(0,6),,,210,, 'Arial Black',35,20,,,,,)
        WHILE .T.
                IF LEN(m_codigo) = 0
                        limpa(01,02,06,98)
                        IF m_indiv[1,26] = 'T'
                                SUB_BANNER(01,05,'CAIXA LIVRE')
                        ELSE
                                SUB_BANNER(01,05,'TERMINAL LIVRE')
                        ENDIF
                ENDIF
                IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(08,01,18,53)
                	WVW_DrawImage( ,08,01,18,53,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                botao(19,01,29,53)
                setcor(1)
                DEVPOS(20,02);DEVOUT('Cod.Produto:')
                DEVPOS(21,02);DEVOUT('Descricao..:')
                DEVPOS(22,02);DEVOUT('Quantidade.:')
                DEVPOS(23,02);DEVOUT('Vlr.Unita..:')
                DEVPOS(24,02);DEVOUT('Vlr.Total..:')
                DEVPOS(25,02);DEVOUT('Saldo......:')
                //IF ver_serie() = '141235'
                //        DEVPOS(26,02);DEVOUT('Pct:          Pcs:    ')
                IF ver_serie() <> '141410'
	                DEVPOS(26,02);DEVOUT('Quantidade.:               ')
                ENDIF
                DEVPOS(27,02);DEVOUT('Sub-IPI....:')
                DEVPOS(27,25);DEVOUT('Total c/IPI:')
                DEVPOS(28,02);DEVOUT('Desc.(%)...:       - R$: ')
                IF mflag = 0
                        EXIT
                ENDIF
/*
                IF mflag = 0
                        SET KEY -9 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
*/

                // PEDIDO DO APP...

                IF orc # NIL .AND. EMPTY(mnum_ped)
                        c_orcam := {}  
                        sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(orc),,.t.,@c_orcam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_orcam) = 0
                                atencao('Nao foi possivel encontrar este ORCAMENTO...')
                        ELSE
                                mobs1 := c_orcam[1,86]
                                mobs2 := c_orcam[1,87]
                                mobs3 := c_orcam[1,88]
                                mobs4 := c_orcam[1,89]
                                y:=0
                                FOR y = 1 TO LEN(c_orcam)
                                        mped_merc:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[y,6]),,.t.,@mped_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        setcor(3)
                                        WVW_DrawBoxGet(,20,14,LEN(mped_merc[1,8]))
                                        limpa(01,01,06,100)
                                        @ 20,14 SAY SPACE(13)
                                        @ 20,14 SAY mped_merc[1,8]
                                        @ 21,14 SAY mped_merc[1,9]
                                        @ 22,14 SAY c_orcam[y,14] PICT '9,999,999.99'
                                        @ 23,14 SAY c_orcam[y,18] PICT '9,999,999.99'
                                        @ 24,14 SAY c_orcam[y,18] * c_orcam[y,14] PICT '9,999,999.99'
                                        @ 25,14 SAY mped_merc[1,56] PICT '9,999,999.99'

                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        WVW_DrawLabel(,01,02,mped_merc[1,8]+' - '+SUBSTR(mped_merc[1,9],1,20),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,04,02,'             '+SUBSTR(mped_merc[1,9],21),,,,, 'arial black',60,20,,,,,)
                                        WVW_DrawLabel(,04,02,IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mped_merc[1,46],'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)
                                        IF mped_merc[1,24] = 'N'
                                                atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                                                LOOP
                                        ENDIF
                                        IF mped_merc[1,104] = 'S'
                                                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                                                LOOP
                                        ENDIF

        	                        IF mped_merc[1,103] = 'S' .AND. c_orcam[y,14] > mped_merc[1,56]
                	                        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                        	                LOOP
	                               ENDIF
	                                IF c_orcam[y,14] > mped_merc[1,56] .AND. m_set[1,107] = 'S' .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                	                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,0,c_orcam[y,6])
                        	                        LOOP
                                	        ENDIF
                                        ENDIF
                                
                                        IF c_orcam[y,14] > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,0,c_orcam[y,6])
                                                        LOOP
                                                ENDIF
                                                mlibera := 'S'
                                        ENDIF
                                        IF ! EMPTY(m_set[1,153]) .AND. c_orcam[y,14] > m_set[1,153]
                                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[y,14],'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,0,c_orcam[y,6])
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(m_set[1,154]) .AND. c_orcam[y,14] > m_set[1,154]
                                                atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                                                LOOP
                                        ENDIF
                                        
                                        mcomissao := mped_merc[1,26]
                                        IF c_orcam[y,18] > mped_merc[1,46]
                                                mdesconto := ((mped_merc[1,46]-c_orcam[y,18])/mped_merc[1,46])*100
                                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                                        IF m_set[1,113] > 1
                                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                                        ELSE
                                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                                IF mcomissao < 0
                                                                        mcomissao := 0
                                                                ENDIF
                                                        ENDIF
                                                ENDIF
                                                IF ((mped_merc[1,46] - c_orcam[y,18])/mped_merc[1,46])*100 > m_set[1,33] .AND. EMPTY(mped_merc[1,80]) .AND. ! EMPTY(m_set[1,33])
                                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mped_merc[1,46],'999,999.99')+' - '+TRANSFORM(((mped_merc[1,46] - c_orcam[y,18])/mped_merc[1,46])*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ELSEIF ((mped_merc[1,46] - c_orcam[y,18])/mped_merc[1,46])*100 > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80])
                                                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                                                atencao('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mped_merc[1,20],'999,999.99')+' - '+TRANSFORM(((mped_merc[1,20] - c_orcam[y,18])/mped_merc[1,20])*100,'999.99')+'% Desconto nao e permitido..')
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mped_merc[1,20],'999,999.99')+' - '+TRANSFORM(((mped_merc[1,20] - c_orcam[y,18])/mped_merc[1,20])*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ELSEIF m_set[1,38] = 'C' .AND. c_orcam[y,18] < mped_merc[1,45]
                                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Custo R$:'+TRANSFORM(mped_merc[1,45],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ELSEIF m_set[1,38] = 'V' .AND. c_orcam[y,18] < mped_merc[1,46]
                                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(c_orcam[y,18],'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mped_merc[1,20],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                                mquantd := 1
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ENDIF
                                        IF 'N' = op_simnao('S','Confirma Inclusao da Mercadoria:')
                                                LOOP
                                        ENDIF

                                        IF EMPTY(mnum_ped)
                                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                                gerar_no_ped()

                                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                                        ENDIF
                                        sr_begintransaction()
                                                try
                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(mped_merc[1,56] - c_orcam[y,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(c_orcam[y,6]),,.f.)
                                                catch e
                                                        tracelog(valtoprg())
                                                        sr_COMMITtransaction()
                                                END
                                                try
                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(c_orcam[y,6])+','+; //4
                                                                sr_cdbvalue(c_orcam[y,14])+','+; //5
                                                                sr_cdbvalue(mped_merc[1,56])+','+; //6
                                                                sr_cdbvalue(mped_merc[1,56] - c_orcam[y,14])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC23PD1')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                sr_cdbvalue('S')+','+; //11
                                                                sr_cdbvalue(' ')+')',,.f.)
                                                catch e
                                                        tracelog(valtoprg())
                                                        sr_COMMITtransaction()
                                                END

                                                TRY
                                                        mcampo_ped := 'pempresa,'   ;//1
                                                                      +'pnum_ped,'  ;//2
                                                                      +'ptermina,'  ;//3
                                                                      +'pdat_ped,'  ;//4
                                                                      +'pgru_sub,'  ;//5
                                                                      +'pcod_merc,' ;//6
                                                                      +'pmerc,'     ;//7
                                                                      +'punidade,'  ;//8
                                                                      +'pespecie,'  ;//9
                                                                      +'penvelope,' ;//10
                                                                      +'ppeso,'     ;//11
                                                                      +'ppeso_liq,' ;//12
                                                                      +'pgramatura,';//13
                                                                      +'pquantd,'   ;//14
                                                                      +'ppacote,'   ;//15
                                                                      +'ppecas,'    ;//16
                                                                      +'ppre_dig,'  ;//17
                                                                      +'pdesc,'     ;//18
                                                                      +'pvlr_fat,'  ;//19
                                                                      +'ppre_venda,';//20
                                                                      +'ppr_venda1,';//21
                                                                      +'pcust_real,';//22
                                                                      +'pcust_merc,';//23
                                                                      +'pcod_cli,'  ;//24
                                                                      +'pcgc,'      ;//25
                                                                      +'pcpf,'      ;//26
                                                                      +'pplaca,'    ;//27
                                                                      +'pcarro,'    ;//28
                                                                      +'pmodelo,'   ;//29
                                                                      +'pkm,'       ;//30
                                                                      +'pcod_fab,'  ;//31
                                                                      +'pfabrica,'  ;//32
                                                                      +'pcod_oper,' ;//33
                                                                      +'pcomi_oper,';//34
                                                                      +'pcod_vend,' ;//35
                                                                      +'pvendedor,' ;//36
                                                                      +'palimento ,';//37
                                                                      +'pcod_fin  ,';//38
                                                                      +'pcod_tab  ,';//39
                                                                      +'pvlr_pres ,';//40
                                                                      +'pcond_veze,';//41
                                                                      +'pcond_inte,';//42
                                                                      +'phora     ,';//43
                                                                      +'ptp_vend  ,';//44
                                                                      +'pvlr_ent  ,';//45
                                                                      +'pisento   ,';//46
                                                                      +'ppromocao ,';//47
                                                                      +'pmontador ,';//48
                                                                      +'pmontador1,';//49
                                                                      +'pcomissao ,';//50
                                                                      +'pcom_mont ,';//51
                                                                      +'pprazo    ,';//52
                                                                      +'pbebida   ,';//53
                                                                      +'pipi      ,';//54
                                                                      +'pobs_prod ,';//55
                                                                      +'pind_icms ,';//56
                                                                      +'pstat_item,';//57
                                                                      +'psit_trib ,';//58
                                                                      +'pobs1,'     ;//59
                                                                      +'pobs2,'     ;//60
                                                                      +'pobs3,'     ;//61
                                                                      +'pobs4,'     ;//62
                                                                      +'plocal,'    ;//63
                                                                      +'chassis,'   ;//64
                                                                      +'descri1,'   ;//65
                                                                      +'descri2,'   ;//66
                                                                      +'descri3,'   ;//67
                                                                      +'descri4,'   ;//68
                                                                      +'descri5,'   ;//69
                                                                      +'pproducao,' ;//70
                                                                      +'pcod_tran,' ;//71
                                                                      +'pos,'       ;//72
                                                                      +'data_so,'   ;//73
                                                                      +'pos,'       ;//74
                                                                      +'cod_pres'    //75
                                                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)      )+','+;//3
                                                        sr_cdbvalue(mdata_pedido            )+','+;//4
                                                        sr_cdbvalue(mped_merc[1,7]               )+','+;//5
                                                        sr_cdbvalue(c_orcam[y,6]            )+','+;//6
                                                        sr_cdbvalue(c_orcam[y,7]            )+','+;//7
                                                        sr_cdbvalue(mped_merc[1,14]              )+','+;//8
                                                        sr_cdbvalue(mped_merc[1,15]              )+','+;//9
                                                        sr_cdbvalue(IF(! EMPTY(c_orcam[y,26]),c_orcam[y,26],c_orcam[y,10]))+','+;//10
                                                        sr_cdbvalue(mped_merc[1,17]              )+','+;//11
                                                        sr_cdbvalue(mped_merc[1,16]              )+','+;//12
                                                        sr_cdbvalue(mped_merc[1,74]              )+','+;//13
                                                        sr_cdbvalue(c_orcam[y,14]           )+','+;//14
                                                        sr_cdbvalue(c_orcam[y,15]           )+','+;//15
                                                        sr_cdbvalue(c_orcam[y,16]           )+','+;//16
                                                        sr_cdbvalue(c_orcam[y,17]           )+','+;//17
                                                        sr_cdbvalue(c_orcam[y,39]           )+','+;//18
                                                        sr_cdbvalue(c_orcam[y,18]           )+','+;//19
                                                        sr_cdbvalue(c_orcam[y,20]           )+','+;//20
                                                        sr_cdbvalue(mped_merc[1,47]              )+','+;//21
                                                        sr_cdbvalue(mped_merc[1,45]              )+','+;//22
                                                        sr_cdbvalue(mped_merc[1,44]              )+','+;//23
                                                        sr_cdbvalue(c_orcam[y,23]           )+','+;//24
                                                        sr_cdbvalue(c_orcam[y,24]           )+','+;//25
                                                        sr_cdbvalue(c_orcam[y,25]           )+','+;//26
                                                        sr_cdbvalue(c_orcam[y,26]           )+','+;//27
                                                        sr_cdbvalue(c_orcam[y,27]           )+','+;//28
                                                        sr_cdbvalue(c_orcam[y,28]           )+','+;//29
                                                        sr_cdbvalue(c_orcam[y,29]           )+','+;//30
                                                        sr_cdbvalue(mped_merc[1,30]              )+','+;//31
                                                        sr_cdbvalue(LEFT(mped_merc[1,31],30)     )+','+;//32
                                                        sr_cdbvalue(cod_operado             )+','+;//33
                                                        sr_cdbvalue(c_orcam[y,35]           )+','+;//34
                                                        sr_cdbvalue(c_orcam[y,32]           )+','+;//35
                                                        sr_cdbvalue(c_orcam[y,33]           )+','+;//36
                                                        sr_cdbvalue(mped_merc[1,21]              )+','+;//37
                                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//38
                                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//39
                                                        sr_cdbvalue(0                       )+','+;//40
                                                        sr_cdbvalue(0                       )+','+;//41
                                                        sr_cdbvalue(' '                     )+','+;//42
                                                        sr_cdbvalue(mhoras                  )+','+;//43
                                                        sr_cdbvalue(c_orcam[y,45]           )+','+;//44
                                                        sr_cdbvalue(0                       )+','+;//45
                                                        sr_cdbvalue(mped_merc[1,61]              )+','+;//46
                                                        sr_cdbvalue(mped_merc[1,23]              )+','+;//47
                                                        sr_cdbvalue(c_orcam[y,36]           )+','+;//48
                                                        sr_cdbvalue(c_orcam[y,38]           )+','+;//49
                                                        sr_cdbvalue(c_orcam[y,53]           )+','+;//50
                                                        sr_cdbvalue(mped_merc[1,27]              )+','+;//51
                                                        sr_cdbvalue(mped_merc[1,75]              )+','+;//52
                                                        sr_cdbvalue(mped_merc[1,62]              )+','+;//53
                                                        sr_cdbvalue(mped_merc[1,65]              )+','+;//54
                                                        sr_cdbvalue(c_orcam[y,58]           )+','+;//55
                                                        sr_cdbvalue(mped_merc[1,82]              )+','+;//56
                                                        sr_cdbvalue(' '                     )+','+;//57
                                                        sr_cdbvalue(mped_merc[1,83]              )+','+;//58
                                                        sr_cdbvalue(c_orcam[y,86]           )+','+;//59
                                                        sr_cdbvalue(c_orcam[y,87]           )+','+;//60
                                                        sr_cdbvalue(c_orcam[y,88]           )+','+;//61
                                                        sr_cdbvalue(c_orcam[y,89]           )+','+;//62
                                                        sr_cdbvalue(SUBSTR(mped_merc[1,73],1,2)  )+','+;//63
                                                        sr_cdbvalue(c_orcam[y,80]           )+','+;//64
                                                        sr_cdbvalue(c_orcam[y,81]           )+','+;//65
                                                        sr_cdbvalue(c_orcam[y,82]           )+','+;//66
                                                        sr_cdbvalue(c_orcam[y,83]           )+','+;//67
                                                        sr_cdbvalue(c_orcam[y,84]           )+','+;//68
                                                        sr_cdbvalue(c_orcam[y,85]           )+','+;//69
                                                        sr_cdbvalue(c_orcam[y,93]           )+','+;//70
                                                        sr_cdbvalue(' ')+','+;//71
                                                        sr_cdbvalue('000000')+','+;//72
                                                        sr_cdbvalue(DATE())+','+;//73
                                                        sr_cdbvalue(orc)+','+;//74
                                                        sr_cdbvalue('00000')+','+;//75
                                                        sr_cdbvalue(' ')+')'
                                                        sr_getconnection():exec(ccomm,,.f.)
                                                catch e
                                                        tracelog(valtoprg())
                                                        sr_COMMITtransaction()
                                                END
                                                sr_committransaction()
                                        SR_ENDTRANSACTION()

                                        AADD(m_codigo,c_orcam[y,6])
                                        AADD(m_Cbarra,mped_merc[1,2])
                                        IF c_orcam[y,18] = 0
                                        *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                        *                          40      41    42      43     44
                                                AADD(m_matriz,{c_orcam[y,14],c_orcam[y,18],        0,mped_merc[1,7],c_orcam[y,7],mped_merc[1,14],mped_merc[1,17],       0,         0,mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],c_orcam[y,53],mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],c_orcam[y,10],mhoras,mped_merc[1,82],mped_merc[1,83],c_orcam[y,80],c_orcam[y,81],c_orcam[y,82],c_orcam[y,83],c_orcam[y,84],c_orcam[y,85],mped_merc[1,75],mped_merc[1,74],c_orcam[y,58],c_orcam[y,36],c_orcam[y,38],mped_merc[1,27],;
                                                               mped_merc[1,47],'  ',c_orcam[y,15],c_orcam[y,16],'00000'})
                                        ELSE            
                                                AADD(m_matriz,{c_orcam[y,14],c_orcam[y,18],c_orcam[y,39],mped_merc[1,7],c_orcam[y,7],mped_merc[1,14],mped_merc[1,17],c_orcam[y,20],mped_merc[1,45],mped_merc[1,30],mped_merc[1,31],mped_merc[1,21],mped_merc[1,61],mped_merc[1,23],mcomissao+mcomi_tab,mped_merc[1,62],mped_merc[1,16],mped_merc[1,44],mobs1,mobs2,mped_merc[1,73],mped_merc[1,65],mped_merc[1,15],menvelope,mhoras,mped_merc[1,82],mped_merc[1,83],c_orcam[y,80],c_orcam[y,81],c_orcam[y,82],c_orcam[y,83],c_orcam[y,84],c_orcam[y,85],mped_merc[1,75],mped_merc[1,74],c_orcam[y,58],c_orcam[y,36],c_orcam[y,38],mped_merc[1,27],;
                                                               mped_merc[1,47],'  ',c_orcam[y,15],c_orcam[y,16],'00000'})
                                        ENDIF
                                        IF mped_merc[1,14] = 'EV'
                                                AADD(m_alt,c_orcam[y,6]+' '+LEFT(mped_merc[1,9],27)+' '+c_orcam[y,10]+' '+TRANSFORM(c_orcam[y,14],'99999.99')+' '+TRANSFORM(c_orcam[y,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[y,18] * c_orcam[y,14],ALLTRIM('@E '+m_set[1,98])))
                                        ELSE
                                                AADD(m_alt,c_orcam[y,6]+' '+LEFT(mped_merc[1,9],38)+' '+TRANSFORM(c_orcam[y,14],'99999.99')+' '+TRANSFORM(c_orcam[y,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[y,18] * c_orcam[y,14],ALLTRIM('@E '+m_set[1,98])))
                                        ENDIF


                                        mlibera := ' '
                                        i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := mqtd_lin := 0
                                        SETCOLOR('B/W,W/B')
                                        botao(lci,cci+55,lba,cba-1)
                                        mitem := 1
                                        cons_tela := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_tela)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(cons_tela) > 20
                                                mqtd_lin := LEN(cons_tela) - 20
                                        ENDIF
                                        IF ! EMPTY(mcod_cond)
                                                @ lci+f,cci+55 SAY ''
                                                WVW_DrawLabel(,lci+f,COL()+1,'Usando a Tabela:'+STRZERO(mcod_cond,3)+'-'+TRANSFORM(mperc,'999.99')+IF(! EMPTY(mtipo_preco),' - Preco:'+mtipo_preco,'')+IF(! EMPTY(cli->desconto),' [ Desc.Esp.:'+TRANSFORM((cli->desconto * -1),'9999.99')+' ] ',''),,,,, 'terminal',13,4,,,,,)
                                                f++
                                        ENDIF
                                        @ lci+f,cci+55 SAY ''
                                        WVW_DrawLabel(,lci+f,COL()+1,'Cliente:'+STR(cli->cod_cli,5)+'-'+LEFT(cli->razao,35)+' - Vend.:'+mcod_ven+'-'+LEFT(mnome_ven,25),,,,, 'terminal',13,4,,,,,)
                                        f++
                                        WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),90),,,,, 'terminal',13,4,,,,,)
                                        f++
                                        @ lci+f,cci+55 SAY ''
                                        WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,4,,,,,)
                                        f++
                                        WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),90),,,,, 'terminal',13,4,,,,,)
                                        f++
                                        i:=0
                                        FOR i = 1 TO LEN(cons_tela)
                                                mtot_desc := mtot_desc + iat((cons_tela[i,14] * cons_tela[i,17]),m_set[1,103])
                                                msubtotal := msubtotal + iat((cons_tela[i,14] * cons_tela[i,18]),m_set[1,103])
                                                mtot_custo:= mtot_custo + iat((cons_tela[i,14] * cons_tela[i,21]),m_set[1,103])
                                                mtot_ipi := mtot_ipi + ((cons_tela[i,18] * cons_tela[i,14]) * (cons_tela[i,57]/100))
                                                mlibera := ' '
                                                SETCOLOR('W/b,W/b')
                                                IF mqtd_lin < i
                                                        @ lci+f,cci+55 SAY ''
                                                        IF m_set[1,147] = 'C'
                                                                IF cons_tela[i,8] = 'EV ' .OR. cons_tela[i,8] = 'PL '
                                                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+cons_tela[i,6]+'  '+LEFT(cons_tela[i,7],10)+' '+cons_tela[i,10]+' '+cons_tela[i,80]+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                                ELSE
                                                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+cons_tela[i,6]+'  '+cons_tela[i,7]+'   '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                                ENDIF
                                                        ELSE
                                                                WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+IF(! EMPTY(m_cbarra[i]),m_cbarra[i],STRZERO(VAL(cons_tela[i,6]),14))+'  '+LEFT(cons_tela[i,7],33)+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                                        ENDIF
                                                        f++
                                                ENDIF
                                        NEXT
                                        tela_ := {}
                                        tela_ := WVW_SAVESCREEN(,lci,cci+55,lba,cba-1)
                                        setcor(3)
                                        IF (mtot_desc - msubtotal) > 0
                                                DEVPOS(28,14);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                                                DEVPOS(28,26);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
                                        ELSE
                                                DEVPOS(28,14);DEVOUT(TRANSFORM(0,'99.99'))
                                                DEVPOS(28,26);DEVOUT(TRANSFORM(0,'99,999.99'))
                                        ENDIF
                                        DEVPOS(27,14);DEVOUTPICT(mtot_ipi,'99,999.99')
                                        DEVPOS(27,38);DEVOUTPICT(msubtotal+mtot_ipi,ALLTRIM('@E '+m_set[1,98]))
                                        setcor(1)
                                        WVW_DrawLabel(,lci-2,cci+58,'No.Pedido: '+STRZERO(mnum_ped,6),,,210,, 'Arial Black',35,20,,,,,)
                                        botao(30,01,34,53,,,'*')
                                        DEVPOS(30,01);DEVOUT(' T O T A L   R$:')
                                        WVW_DrawLabel(,31,02,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',70,45,,,,,)
                                NEXT
                                mobs1 := c_orcam[1,86]
                                mobs2 := c_orcam[1,87]
                                mobs3 := c_orcam[1,88]
                                mobs4 := c_orcam[1,89]
                        ENDIF
                ENDIF

                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := 0
                SETCOLOR('B/W,W/B')
                botao(lci,cci+55,lba,cba-1)
                mqtd_lin := 0
                mitem := 1

                cons_tela := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_tela)
                sr_getconnection():exec('COMMIT',,.f.)

                IF LEN(cons_tela) > 20
                        mqtd_lin := LEN(cons_tela) - 20
                ENDIF
                IF ! EMPTY(mcod_cond)
                        @ lci+f,cci+55 SAY ''
                        WVW_DrawLabel(,lci+f,COL()+1,'Usando a Tabela:'+STRZERO(mcod_cond,3)+'-'+TRANSFORM(mperc,'999.99')+IF(! EMPTY(mtipo_preco),' - Preco:'+mtipo_preco,'')+IF(! EMPTY(cli->desconto),' [ Desc.Esp.:'+TRANSFORM((cli->desconto * -1),'9999.99')+' ] ',''),,,,, 'terminal',13,4,,,,,)
                        f++
                ENDIF
                @ lci+f,cci+55 SAY ''
                WVW_DrawLabel(,lci+f,COL()+1,'Cliente:'+STR(cli->cod_cli,5)+'-'+LEFT(cli->razao,35)+' - Vend.:'+mcod_ven+'-'+LEFT(mnome_ven,25),,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),90),,,,, 'terminal',13,4,,,,,)
                f++
                @ lci+f,cci+55 SAY ''
                WVW_DrawLabel(,lci+f,COL(),'Item  Cod.  Descricao                                      Quantd.   Vlr.Unit.   Vlr.Total',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),90),,,,, 'terminal',13,4,,,,,)
                f++
                i:=0
                FOR i = 1 TO LEN(cons_tela)
                        mtot_desc := mtot_desc + iat((cons_tela[i,14] * cons_tela[i,17]),m_set[1,103])
                        msubtotal := msubtotal + iat((cons_tela[i,14] * cons_tela[i,18]),m_set[1,103])
                        mtot_custo:= mtot_custo + iat((cons_tela[i,14] * cons_tela[i,21]),m_set[1,103])
                        mtot_ipi := mtot_ipi + ((cons_tela[i,18] * cons_tela[i,14]) * (cons_tela[i,57]/100))
                        mlibera := ' '
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ lci+f,cci+55 SAY ''
                                IF m_set[1,147] = 'C'
                                        IF cons_tela[i,8] = 'EV ' .OR. cons_tela[i,8] = 'PL '
                                                WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+cons_tela[i,6]+'  '+LEFT(cons_tela[i,7],10)+' '+cons_tela[i,10]+' '+cons_tela[i,80]+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                        ELSE
                                                WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+cons_tela[i,6]+'  '+cons_tela[i,7]+'   '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                        ENDIF
                                ELSE
                                        WVW_DrawLabel(,lci+f,COL(),STRZERO(i,4)+'  '+IF(! EMPTY(m_cbarra[i]),m_cbarra[i],STRZERO(VAL(cons_tela[i,6]),14))+'  '+LEFT(cons_tela[i,7],33)+' '+TRANSFORM(cons_tela[i,14],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(cons_tela[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_tela[i,18] * cons_tela[i,14],ALLTRIM('@E '+m_set[1,98])),,,,, 'terminal',13,4,,,,,)
                                ENDIF
                                f++
                        ENDIF
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,cci+55,lba,cba-1)
                setcor(3)
                IF (mtot_desc - msubtotal) > 0
                        DEVPOS(28,14);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                        DEVPOS(28,26);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
                ELSE
                        DEVPOS(28,14);DEVOUT(TRANSFORM(0,'99.99'))
                        DEVPOS(28,26);DEVOUT(TRANSFORM(0,'99,999.99'))
                ENDIF
                DEVPOS(27,14);DEVOUTPICT(mtot_ipi,'99,999.99')
                DEVPOS(27,38);DEVOUTPICT(msubtotal+mtot_ipi,ALLTRIM('@E '+m_set[1,98]))
                setcor(1)
                //WVW_DrawLabel(,lba+2,cci+58,'No.Pedido: '+STRZERO(mnum_ped,6),,,,, 'Arial Black',20,20,,,,,)
                WVW_DrawLabel(,lci-2,cci+58,'No.Pedido: '+STRZERO(mnum_ped,6),,,210,, 'Arial Black',35,20,,,,,)
                botao(30,01,34,53,,,'*')
                DEVPOS(30,01);DEVOUT(' T O T A L   R$:')
                WVW_DrawLabel(,31,02,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',70,45,,,,,)

                malterou := ' '
                mmerc := SPACE(40)
                IF mpre = ' '
                        mcod_bc := SPACE(14)
                ENDIF
                mcod_merc := mdesconto := mvlr_fat := mpromocao := 0
                IF(mquantd > 1,mquantd,mquantd=1)
                menvelope := SPACE(10)
                f4 := ' '
                setcor(1)
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO fecha_pd('1')       // neste mesmo PRG. <F10>Tecla
                //mensagem('Digite codigo ou Descricao - <F10>Fechamento <ALT+V>Alt.Prod. <PD>2o.Pedido ou <OR>2o.Orcamento <PRE>Lista de Presente <ESC>Sair')
                mensagem('<F10>Fechamento  - <X mais a qtd.>Informa Qtd. - <TAB>Cond.Pagamento - <PD>Recuperar Pedido - <ESC>Sair')
                WVW_DrawBoxGet(,20,14,LEN(mcod_bc))
                SET KEY -7 TO F8_PROD()
                mloop := 0
                @ 20,14 GET mcod_bc PICT '@!'
                READ
                IF ALLTRIM(mcod_bc) = 'ORCAMENTO'
                        IF LEN(m_codigo) > 0
                                atencao('Nao e possivel Incluir este orcamento neste pedido porque ja foi Incluso algum Produto...')
                                LOOP
                        ENDIF
                        mnum_orc := 0
                        op_tela(10,10,12,80,'Numero do Orcamento')
                        DEVPOS(01,01);DEVOUT('Digite o Numero do Orcamento:')
                        @ 01,31 GET mnum_orc PICT '999999'
                        READ
                        ali := 'ped_s'
                        c_orcam := {}
                        sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_orc,6)),,.t.,@c_orcam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_orcam) = 0
                                atencao('Nao foi possivel encontrar este ORCAMENTO...')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma o ORCAMENTO para PEDIDO:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        wvw_lclosewindow()

                        i:=ok:=0
                        FOR i = 1 TO LEN(c_orcam)
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF c_orcam[i,14] > aret[1,56] .AND. m_set[1,107] = 'S' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        LOOP
                                ELSE
                                        ok := 1
                                        EXIT
                                ENDIF
                                EXIT
                        NEXT
                        IF EMPTY(ok)
                                LOOP
                        ENDIF
                        *****************
                        SELE('cli');ORDSETFOCUS(1)
                        *****************
                        mcod_cli := VAL(c_orcam[1,23])
                        IF ! cli->(DBSEEK(mcod_cli))
                                atencao('Nao foi encontrado este CLIENTE verifique este ORCAMENTO....')
                                LOOP
                        ENDIF
                        IF m_set[1,10] <> 'S'
                                mcod_aux  := cli->codvend
                                mcod_ven := cod_operado
                        ENDIF
                        mcgc := cli->cgc
                        mcpf := cli->cpf
                        minsc:= cli->insc
                        //IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                gerar_no_ped()

                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                        //ENDIF
                        mobs1 := c_orcam[1,86]
                        mobs2 := c_orcam[1,87]
                        mobs3 := c_orcam[1,88]
                        mobs4 := c_orcam[1,89]
                        i:=0
                        FOR i = 1 TO LEN(c_orcam)
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
	                        IF aret[1,103] = 'S' .AND. c_orcam[i,14] > aret[1,56]
        	                        atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                	                LOOP
	                        ENDIF
	                        IF c_orcam[i,14] > aret[1,56] .AND. m_set[1,107] = 'S' .AND. SUBSTR(aret[1,9],1,1) <> '@'
        	                        IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(c_orcam[i,14],'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(aret[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,0,c_orcam[i,6])
                	                        LOOP
                        	        ENDIF
	                        ENDIF
/*
                                IF c_orcam[i,14] > aret[1,56] .AND. m_set[1,107] = 'S' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        LOOP
                                ENDIF
*/
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - c_orcam[i,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(c_orcam[i,6])+','+; //4
                                                        sr_cdbvalue(c_orcam[i,14])+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56] - c_orcam[i,14])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC23PD1')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                        sr_cdbvalue('S')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                                mcampo_ped := 'pempresa,'   ;//1
                                              +'pnum_ped,'  ;//2
                                              +'ptermina,'  ;//3
                                              +'pdat_ped,'  ;//4
                                              +'pgru_sub,'  ;//5
                                              +'pcod_merc,' ;//6
                                              +'pmerc,'     ;//7
                                              +'punidade,'  ;//8
                                              +'pespecie,'  ;//9
                                              +'penvelope,' ;//10
                                              +'ppeso,'     ;//11
                                              +'ppeso_liq,' ;//12
                                              +'pgramatura,';//13
                                              +'pquantd,'   ;//14
                                              +'ppacote,'   ;//15
                                              +'ppecas,'    ;//16
                                              +'ppre_dig,'  ;//17
                                              +'pdesc,'     ;//18
                                              +'pvlr_fat,'  ;//19
                                              +'ppre_venda,';//20
                                              +'ppr_venda1,';//21
                                              +'pcust_real,';//22
                                              +'pcust_merc,';//23
                                              +'pcod_cli,'  ;//24
                                              +'pcgc,'      ;//25
                                              +'pcpf,'      ;//26
                                              +'pplaca,'    ;//27
                                              +'pcarro,'    ;//28
                                              +'pmodelo,'   ;//29
                                              +'pkm,'       ;//30
                                              +'pcod_fab,'  ;//31
                                              +'pfabrica,'  ;//32
                                              +'pcod_oper,' ;//33
                                              +'pcomi_oper,';//34
                                              +'pcod_vend,' ;//35
                                              +'pvendedor,' ;//36
                                              +'palimento ,';//37
                                              +'pcod_fin  ,';//38
                                              +'pcod_tab  ,';//39
                                              +'pvlr_pres ,';//40
                                              +'pcond_veze,';//41
                                              +'pcond_inte,';//42
                                              +'phora     ,';//43
                                              +'ptp_vend  ,';//44
                                              +'pvlr_ent  ,';//45
                                              +'pisento   ,';//46
                                              +'ppromocao ,';//47
                                              +'pmontador ,';//48
                                              +'pmontador1,';//49
                                              +'pcomissao ,';//50
                                              +'pcom_mont ,';//51
                                              +'pprazo    ,';//52
                                              +'pbebida   ,';//53
                                              +'pipi      ,';//54
                                              +'pobs_prod ,';//55
                                              +'pind_icms ,';//56
                                              +'pstat_item,';//57
                                              +'psit_trib ,';//58
                                              +'pobs1,'     ;//59
                                              +'pobs2,'     ;//60
                                              +'pobs3,'     ;//61
                                              +'pobs4,'     ;//62
                                              +'plocal,'    ;//63
                                              +'chassis,'   ;//64
                                              +'descri1,'   ;//65
                                              +'descri2,'   ;//66
                                              +'descri3,'   ;//67
                                              +'descri4,'   ;//68
                                              +'descri5,'   ;//69
                                              +'pproducao,' ;//70
                                              +'pcod_tran,' ;//71
                                              +'pos,'       ;//72
                                              +'data_so,'       ;//72
                                              +'cod_pres'    //72
                                cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                sr_cdbvalue(SUBSTR(NETNAME(),1,10)      )+','+;//3
                                sr_cdbvalue(mdata_pedido            )+','+;//4
                                sr_cdbvalue(aret[1,7]               )+','+;//5
                                sr_cdbvalue(c_orcam[i,6]            )+','+;//6
                                sr_cdbvalue(c_orcam[i,7]            )+','+;//7
                                sr_cdbvalue(aret[1,14]              )+','+;//8
                                sr_cdbvalue(aret[1,15]              )+','+;//9
                                sr_cdbvalue(IF(! EMPTY(c_orcam[i,26]),c_orcam[i,26],c_orcam[i,10]))+','+;//10
                                sr_cdbvalue(aret[1,17]              )+','+;//11
                                sr_cdbvalue(aret[1,16]              )+','+;//12
                                sr_cdbvalue(aret[1,74]              )+','+;//13
                                sr_cdbvalue(c_orcam[i,14]           )+','+;//14
                                sr_cdbvalue(c_orcam[i,15]           )+','+;//15
                                sr_cdbvalue(c_orcam[i,16]           )+','+;//16
                                sr_cdbvalue(c_orcam[i,17]           )+','+;//17
                                sr_cdbvalue(c_orcam[i,39]           )+','+;//18
                                sr_cdbvalue(c_orcam[i,18]           )+','+;//19
                                sr_cdbvalue(c_orcam[i,20]           )+','+;//20
                                sr_cdbvalue(aret[1,47]              )+','+;//21
                                sr_cdbvalue(aret[1,45]              )+','+;//22
                                sr_cdbvalue(aret[1,44]              )+','+;//23
                                sr_cdbvalue(c_orcam[i,23]           )+','+;//24
                                sr_cdbvalue(c_orcam[i,24]           )+','+;//25
                                sr_cdbvalue(c_orcam[i,25]           )+','+;//26
                                sr_cdbvalue(c_orcam[i,26]           )+','+;//27
                                sr_cdbvalue(c_orcam[i,27]           )+','+;//28
                                sr_cdbvalue(c_orcam[i,28]           )+','+;//29
                                sr_cdbvalue(c_orcam[i,29]           )+','+;//30
                                sr_cdbvalue(aret[1,30]              )+','+;//31
                                sr_cdbvalue(LEFT(aret[1,31],30)     )+','+;//32
                                sr_cdbvalue(cod_operado             )+','+;//33
                                sr_cdbvalue(c_orcam[i,35]           )+','+;//34
                                sr_cdbvalue(c_orcam[i,32]           )+','+;//35
                                sr_cdbvalue(c_orcam[i,33]           )+','+;//36
                                sr_cdbvalue(aret[1,21]              )+','+;//37
                                sr_cdbvalue(STRZERO(0,3)            )+','+;//38
                                sr_cdbvalue(STRZERO(0,3)            )+','+;//39
                                sr_cdbvalue(0                       )+','+;//40
                                sr_cdbvalue(0                       )+','+;//41
                                sr_cdbvalue(' '                     )+','+;//42
                                sr_cdbvalue(mhoras                  )+','+;//43
                                sr_cdbvalue(c_orcam[i,45]           )+','+;//44
                                sr_cdbvalue(0                       )+','+;//45
                                sr_cdbvalue(aret[1,61]              )+','+;//46
                                sr_cdbvalue(aret[1,23]              )+','+;//47
                                sr_cdbvalue(c_orcam[i,36]           )+','+;//48
                                sr_cdbvalue(c_orcam[i,38]           )+','+;//49
                                sr_cdbvalue(c_orcam[i,53]           )+','+;//50
                                sr_cdbvalue(aret[1,27]              )+','+;//51
                                sr_cdbvalue(aret[1,75]              )+','+;//52
                                sr_cdbvalue(aret[1,62]              )+','+;//53
                                sr_cdbvalue(aret[1,65]              )+','+;//54
                                sr_cdbvalue(c_orcam[i,58]           )+','+;//55
                                sr_cdbvalue(aret[1,82]              )+','+;//56
                                sr_cdbvalue(' '                     )+','+;//57
                                sr_cdbvalue(aret[1,83]              )+','+;//58
                                sr_cdbvalue(c_orcam[i,86]           )+','+;//59
                                sr_cdbvalue(c_orcam[i,87]           )+','+;//60
                                sr_cdbvalue(c_orcam[i,88]           )+','+;//61
                                sr_cdbvalue(c_orcam[i,89]           )+','+;//62
                                sr_cdbvalue(SUBSTR(aret[1,73],1,2)  )+','+;//63
                                sr_cdbvalue(c_orcam[i,80]           )+','+;//64
                                sr_cdbvalue(c_orcam[i,81]           )+','+;//65
                                sr_cdbvalue(c_orcam[i,82]           )+','+;//66
                                sr_cdbvalue(c_orcam[i,83]           )+','+;//67
                                sr_cdbvalue(c_orcam[i,84]           )+','+;//68
                                sr_cdbvalue(c_orcam[i,85]           )+','+;//69
                                sr_cdbvalue(c_orcam[i,93]           )+','+;//70
                                sr_cdbvalue(' ')+','+;//71
                                sr_cdbvalue('000000')+','+;//72
                                sr_cdbvalue(DATE())+','+;//73
                                sr_cdbvalue('00000')+','+;//74
                                sr_cdbvalue(' ')+')'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                AADD(m_codigo,c_orcam[i,6])
                                AADD(m_Cbarra,aret[1,2])
                                IF c_orcam[i,18] = 0
                                *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                *                          40      41    42      43     44
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ELSE
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ENDIF
                                IF aret[1,14] = 'EV'
                                        AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],27)+' '+c_orcam[i,10]+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                ELSE
                                        AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                ENDIF
                        NEXT
                        mobs1 := c_orcam[1,86]
                        mobs2 := c_orcam[1,87]
                        mobs3 := c_orcam[1,88]
                        mobs4 := c_orcam[1,89]
                        LOOP
                ENDIF
                IF ALLTRIM(mcod_bc) = 'PD'	//RESTAURAR O PEDIDO
			mcod_bc := SPACE(14)
                        IF LEN(m_codigo) > 0
                                atencao('Nao e possivel Incluir este orcamento neste pedido porque ja foi Incluso algum Produto...')
                                LOOP
                        ENDIF
                        mnum_orc := mcod_oper := 0
                        op_tela(10,10,12,80,'Numero do Orcamento')
                        DEVPOS(00,01);DEVOUT('Digite o Codigo Operador.:')
                        DEVPOS(01,01);DEVOUT('Digite o Numero do Pedido:')
                        @ 00,28 GET mcod_oper PICT '999'
                        READ
			IF LASTKEY() = 27
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
			IF ! EMPTY(mcod_oper)
	                        c_orcam   := {}
	                        m_ped     := {}
				m_pos     := {}
				cons_cli := {}
				point := 0
        	                sr_getconnection():exec("SELECT pnum_ped,pcod_cli,sum(pquantd*pvlr_fat),pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pcod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+" AND pfecha IS NULL AND pdatapag IS NULL GROUP BY pnum_ped,pnum_ped,pcod_cli,pcod_cli,pdat_ped,pdat_ped ORDER BY pnum_ped",,.t.,@c_orcam)
                                sr_getconnection():exec('COMMIT',,.f.)
                	        IF LEN(c_orcam) = 0
                        	        atencao('Nao foi possivel encontrar este nenhum PEDIDO...')
                                	wvw_lclosewindow()
	                                LOOP
        	                ENDIF
				op_tela(10,10,31,92,memp_resa+SPACE(50)+'PEDIDOS EM ABERTO DO OPERADOR: '+STRZERO(mcod_oper,3))
				setcor(3)
				DEVPOS(00,00);DEVOUT('  Data     Numero       Valor  Cliente')
				@ 01,00 TO 01,100                        
				setcor(1)
				FOR i = 1 to LEN(c_orcam)
					cons_cli := {}
					sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(c_orcam[i,2]),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
					IF LEN(cons_cli) = 0
			        	        AADD(m_ped,DTOC(c_orcam[i,4])+'  '+c_orcam[i,1]+'  '+TRANSFORM(c_orcam[i,3],'999,999.99')+'  00000 - ')
		                        	AADD(m_pos,c_orcam[i,1])
					ELSE
			        	        AADD(m_ped,DTOC(c_orcam[i,4])+'  '+c_orcam[i,1]+'  '+TRANSFORM(c_orcam[i,3],'999,999.99')+'  '+cons_cli[1,2]+' - '+cons_cli[1,3])
		                        	AADD(m_pos,c_orcam[i,1])
					ENDIF		
			        NEXT
				//ASORT(m_ped,,,{|x,y| x[1] < y[1]})
        			setcor(10);point := ACHOICE(2,1,28,80,m_ped,,,point);setcor(1)
			        wvw_lclosewindow()
			        DO CASE
			                CASE LASTKEY()=27 .OR. LASTKEY() = 4 .OR. LASTKEY() = 19
					        wvw_lclosewindow()
		        	                LOOP
		                	CASE LASTKEY() = 13
			                        mnum_orc := VAL(m_pos[point])
			        ENDCASE
			ELSE
	                        @ 01,28 GET mnum_orc PICT '999999'
        	                READ
				IF LASTKEY() = 27
                        	        wvw_lclosewindow()
                                	LOOP
	                        ENDIF
			ENDIF
        	       	c_orcam := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_orc,6)),,.t.,@c_orcam)
                        sr_getconnection():exec('COMMIT',,.f.)
	                IF LEN(c_orcam) = 0
	        	        atencao('Nao foi possivel encontrar este PEDIDO...')
        	        	wvw_lclosewindow()
                	        LOOP
	                ENDIF
			IF ! EMPTY(c_orcam[1,100])
				atencao('Este Pedido ja foi FECHADO Faca um ALTERACAO no mesmo ....')
        	        	wvw_lclosewindow()
				LOOP
			ENDIF
                        opcao := op_simnao('S','Confirma o PEDIDO de No. '+STRZERO(mnum_orc,6)+':')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        mnum_ped := mnum_orc
			wvw_lclosewindow()
                        mcod_cli := VAL(c_orcam[1,23])
			cons_cli := {}
			sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(c_orcam[1,23]),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(cons_cli) > 0
	                        mcod_aux  := cons_cli[1,106]
        	                mcod_ven := cons_cli[1,106]
                	        mcod_cond := VAL(cons_cli[1,133])
                        	IF cons_cli[1,45] = 'A'
	                        	mvarejo := 2
		               	ELSE
                	        	mvarejo := 1
                        	ENDIF
	                        IF m_set[1,10] <> 'S'
        	                        mcod_aux  := cons_cli[1,106]
                	                mcod_ven := cod_operado
                        	ENDIF
	                        mcgc := cons_cli[1,32]
                	        minsc:= cons_cli[1,33]
        	                mcpf := cons_cli[1,34]
			ENDIF
                        IF ! EMPTY(VAL(c_orcam[1,42]))
                                mcons_tabpg:=' '
                                cons_tabpg := {}
                                sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(c_orcam[1,42]),,.t.,@cons_tabpg)
                                sr_getconnection():exec('COMMIT',,.f.)
				IF LEN(cons_tabpg) = 0
					atencao('Nao foi encontrado esta tabela de preco: '+c_orcam[1,42])
				ELSE		
                        		mcod_cond   := VAL(c_orcam[1,42])
			        	mcons_tabpg := cons_tabpg[1,6]
	                                mtipo_preco := cons_tabpg[1,24]
                                        mcomi_tab := cons_tabpg[1,22]
	                       	ENDIF
                        ENDIF
                        i:=0
                        FOR i = 1 TO LEN(c_orcam)
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_orcam[i,6]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
	                        IF LEN(aret) = 0
                	                LOOP
	                        ENDIF
                                AADD(m_codigo,c_orcam[i,6])
                                AADD(m_Cbarra,aret[1,2])
                                IF c_orcam[i,18] = 0
                                *                              1            2        3           4         5            6          7         8           9         10        11          12        13         14           15          16          17        18       19   20        21         22         23        24          25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                                *                          40      41    42      43     44
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],        0,aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],c_orcam[i,53],aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],c_orcam[i,10],mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ELSE
                                        AADD(m_matriz,{c_orcam[i,14],c_orcam[i,18],c_orcam[i,39],aret[1,7],c_orcam[i,7],aret[1,14],aret[1,17],c_orcam[i,20],aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],c_orcam[i,80],c_orcam[i,81],c_orcam[i,82],c_orcam[i,83],c_orcam[i,84],c_orcam[i,85],aret[1,75],aret[1,74],c_orcam[i,58],c_orcam[i,36],c_orcam[i,38],aret[1,27],;
                                                       aret[1,47],'  ',c_orcam[i,15],c_orcam[i,16],'00000'})
                                ENDIF
                                IF aret[1,14] = 'EV'
                                        AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],27)+' '+c_orcam[i,10]+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                ELSE
                                        AADD(m_alt,c_orcam[i,6]+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(c_orcam[i,14],'99999.99')+' '+TRANSFORM(c_orcam[i,18],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(c_orcam[i,18] * c_orcam[i,14],ALLTRIM('@E '+m_set[1,98])))
                                ENDIF
                        NEXT
                        mobs1 := c_orcam[1,86]
                        mobs2 := c_orcam[1,87]
                        mobs3 := c_orcam[1,88]
                        mobs4 := c_orcam[1,89]
                        LOOP
                ENDIF

                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(mcod_bc,2)) > 0
                        mquantd := VAL(SUBSTR(mcod_bc,2))
                        LOOP
                ENDIF
                IF SUBSTR(mcod_bc,1,1) = '*'
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc),f4_merc1(,mcod_bc,STRZERO(mvarejo,1),mperc))

                        mped_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mped_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF LASTKEY() = 27
                        IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
	                        SET KEY -2 TO
        	                SET KEY -7 TO
                                m_codigo := {}
                                m_matriz := {}
                                IF m_indiv[1,26] = 'T'
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                EXIT
                        ENDIF
			IF 'N' = op_simnao('S','Deseja Sair o Pedido:')
				LOOP
			ENDIF	
                        SET KEY -2 TO
                        SET KEY -7 TO
                        c_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF EMPTY(c_ped[1,100])
				IF ver_serie() <> '141237' .AND. ver_serie() <> '141525' .AND. ver_serie() <> '141414' 
        				IF 'N' = op_simnao('N','Deseja CANCELAR este Pedido de No. '+STRZERO(mnum_ped,6)+':') .AND. ver_serie() <> '141237' .AND. ver_serie() <> '141525' .AND. ver_serie() <> '141414'
	              	                        SET KEY -2 TO
                		                SET KEY -7 TO
                        	                m_codigo := {}
                                	        m_matriz := {}
                                        	IF m_indiv[1,26] = 'T'
                                                	wvw_lclosewindow()
	                                               RETURN NIL
                	                        ENDIF
                        	                EXIT
		              		ENDIF
                                ENDIF		                      
                                IF ! aut_sen('Deseja CANCELAR este Pedido: '+STRZERO(mnum_ped,6)+' - Senha de Liberacao','LIB_PED',,0,,,STRZERO(mnum_ped,6))
                                        LOOP
                                ENDIF
                                i := 0
                                FOR i = 1 TO LEN(c_ped)
                                        IF ! EMPTY(c_ped[i,80])
                                                sr_getconnection():exec("UPDATE merc_det SET venda = NULL,n_ped = NULL WHERE codigo = "+sr_cdbvalue(c_ped[i,6])+" .AND. chassis = "+sr_cdbvalue(c_ped[i,80]),,.f.)
                                        ENDIF
                                        mensagem('Atualizando o SALDO DA MERCADORIA... Aguarde')
                                        aret:={}
                                        sr_getconnection():exec("SELECT saldo_mer FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,1] + c_ped[i,14])+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(c_ped[i,6]),,.f.)
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(c_ped[i,6])+','+; //4
                                                                sr_cdbvalue(c_ped[i,14])+','+; //5
                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                sr_cdbvalue(aret[1,1] + c_ped[i,14])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC34')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('CANCELAR PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                sr_cdbvalue('E')+','+; //11
                                                                sr_cdbvalue(' ')+')',,.f.)

                                        mensagem('Atualizando o OCORRENCIA... Aguarde')
                                        sr_getconnection():exec('INSERT INTO sacocorr (tipo,documento,data_exe,hora_exe,cod_oper,data_oco,hora_oco,cod_vend,codigo,quantd,saldo_atu,saldo_exe,pedido,obs,sr_deleted) VALUES ('+;      //?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? , ' ')"
                                                                sr_cdbvalue('CAN')+','+; //1
                                                                sr_cdbvalue(STRZERO(mnum_ped,6))+','+; //2
                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                sr_cdbvalue(TIME())+','+; //4
                                                                sr_cdbvalue(cod_operado)+','+; //5
                                                                sr_cdbvalue(c_ped[i,4])+','+; //6
                                                                sr_cdbvalue(c_ped[i,47])+','+; //7
                                                                sr_cdbvalue(c_ped[i,32])+','+; //8
                                                                sr_cdbvalue(c_ped[i,6])+','+;//9
                                                                sr_cdbvalue(c_ped[i,14])+','+;//10
                                                                sr_cdbvalue(aret[1,1])+','+; //11
                                                                sr_cdbvalue(aret[1,1] + c_ped[i,14])+','+;//12
                                                                sr_cdbvalue('S')+','+;//13
                                                                sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+','+;//14
                                                                sr_cdbvalue(' ')+')',,.f.)
                                NEXT
                                mensagem('Atualizando o CANCELANDO NO CAIXA... Aguarde')                                               //  1 2 3 4 5 6 7 8
                                sr_getconnection():exec("INSERT INTO saccaixa (empresa,tipo,data,nota,descri1,descri2,cod_opera,hora,sr_deleted) VALUES ("+;    //?,?,?,?,?,?,?,?,' ')"
                                                                sr_cdbvalue(mcodempresa)+','+; //1
                                                                sr_cdbvalue('CA')+','+; //2
                                                                sr_cdbvalue(mdata_sis)+','+; //3
                                                                sr_cdbvalue('PD'+STRZERO(mnum_ped,6))+','+; //4
                                                                sr_cdbvalue('Pedido CANCELADO')+','+; //5
                                                                sr_cdbvalue(LEFT('(PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6),37)+')')+','+; //6
                                                                sr_cdbvalue(cod_operado)+','+; //7
                                                                sr_cdbvalue(TIME())+','+; //8
                                                                sr_cdbvalue(' ')+')',,.f.)
                		sr_getconnection():exec("UPDATE sacped_s SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue('CANCELAR PEDIDO EM ANDAMENTO No.: '+STRZERO(mnum_ped,6))+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                                EXIT

                                //atencao('Nao pode Sair, porque tem um pedido em andamento...')
                                //LOOP
                        ENDIF
                ENDIF
                IF mflag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF mcod_bc = 'TAB'
                                mcont := 0
                                mcod_tab := SPACE(3)
                                mcod_tab := sac20()
                                cons_tabpg := {}
                                sr_getconnection():exec("SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(mcod_tab),,.t.,@cons_tabpg)
                                sr_getconnection():exec('COMMIT',,.f.)

                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                mperc := cons_tabpg[1,5]
                                m_codigo := {}
                                m_Cbarra := {}
                                m_matriz := {}
                                c_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                                FOR mcont = 1 TO LEN(c_ped)
                                        m_produto := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[mcont,6]),,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF ! EMPTY(cons_tabpg[1,24])
                                                IF cons_tabpg[1,24] = '1'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,46])+",ppre_venda = "+sr_cdbvalue(m_produto[1,46])+",ppre_dig = "+sr_cdbvalue(m_produto[1,46])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,46]
                                                ELSEIF cons_tabpg[1,24] = '2'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,47])+",ppre_venda = "+sr_cdbvalue(m_produto[1,47])+",ppre_dig = "+sr_cdbvalue(m_produto[1,47])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,47]
                                                ELSEIF cons_tabpg[1,24] = '3'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,100])+",ppre_venda = "+sr_cdbvalue(m_produto[1,100])+",ppre_dig = "+sr_cdbvalue(m_produto[1,100])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,100]
                                                ELSEIF cons_tabpg[1,24] = '4'
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,101])+",ppre_venda = "+sr_cdbvalue(m_produto[1,101])+",ppre_dig = "+sr_cdbvalue(m_produto[1,101])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,101]
                                                ELSE
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,102])+",ppre_venda = "+sr_cdbvalue(m_produto[1,102])+",ppre_dig = "+sr_cdbvalue(m_produto[1,102])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,102]
                                                ENDIF
                                                sr_getconnection():exec(ccomm,,.f.)
                                                mtipo_preco := cons_tabpg[1,24]
                                        ELSE
                                                IF cons_tabpg[1,5] =  0
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,46])+",ppre_venda = "+sr_cdbvalue(m_produto[1,46])+",ppre_dig = "+sr_cdbvalue(m_produto[1,46])  +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,46]
                                                ELSE
                                                        ccomm :="UPDATE sacped_s SET pvlr_fat = "+sr_cdbvalue(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1))+",ppre_venda = "+sr_cdbvalue(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1))+",ppre_dig = "+sr_cdbvalue(m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1)) +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(c_ped[mcont,6])
                                                        mvlr_fat := m_produto[1,46] *  ((cons_tabpg[1,5]/100)+1)
                                                ENDIF
                                                sr_getconnection():exec(ccomm,,.f.)
                                        ENDIF
                                        AADD(m_codigo,c_ped[mcont,6])
                                        AADD(m_Cbarra,m_produto[1,2])
                                        IF mvlr_fat = 0
                                        *                               1         2         3             4           5             6                  7         8           9         10                  11            12               13            14             15                16          17                 18                19           20                  21            22               23            24           25                 26              27       28      29      30       31       32       33         34         35        36        37        38          39
                                        *                          40      41    42      43     44
                                                AADD(m_matriz,{c_ped[mcont,14],mvlr_fat,        0,c_ped[mcont,5],m_produto[1,2],c_ped[mcont,8],c_ped[mcont,11],       0,         0,c_ped[mcont,30],c_ped[mcont,31],c_ped[mcont,48],c_ped[mcont,51],c_ped[mcont,52],c_ped[mcont,53],c_ped[mcont,56],c_ped[mcont,12],c_ped[mcont,22],c_ped[mcont,86],c_ped[mcont,87],c_ped[mcont,92],c_ped[mcont,57],c_ped[mcont,9],c_ped[mcont,10],c_ped[mcont,47],c_ped[mcont,78],c_ped[mcont,79],c_ped[mcont,80],c_ped[mcont,81],c_ped[mcont,82],c_ped[mcont,83],c_ped[mcont,84],c_ped[mcont,85],c_ped[mcont,55],c_ped[mcont,13],c_ped[mcont,58],c_ped[mcont,36],c_ped[mcont,38],c_ped[mcont,37],;
                                                               c_ped[mcont,19],'  ',c_ped[mcont,15],c_ped[mcont,16],c_ped[mcont,99]})
                                        ELSE
                                                AADD(m_matriz,{c_ped[mcont,14],mvlr_fat,c_ped[mcont,39],c_ped[mcont,5],m_produto[1,2],c_ped[mcont,8],c_ped[mcont,11],mvlr_fat,c_ped[mcont,21],c_ped[mcont,30],c_ped[mcont,31],c_ped[mcont,48],c_ped[mcont,51],c_ped[mcont,52],c_ped[mcont,53],c_ped[mcont,56],c_ped[mcont,12],c_ped[mcont,22],c_ped[mcont,86],c_ped[mcont,87],c_ped[mcont,92],c_ped[mcont,57],c_ped[mcont,9],c_ped[mcont,10],c_ped[mcont,47],c_ped[mcont,78],c_ped[mcont,79],c_ped[mcont,80],c_ped[mcont,81],c_ped[mcont,82],c_ped[mcont,83],c_ped[mcont,84],c_ped[mcont,85],c_ped[mcont,55],c_ped[mcont,13],c_ped[mcont,58],c_ped[mcont,36],c_ped[mcont,38],c_ped[mcont,37],;
                                                               c_ped[mcont,19],'  ',c_ped[mcont,15],c_ped[mcont,16],c_ped[mcont,99]})
                                        ENDIF
                                        IF m_produto[1,14] = 'EV'
                                                AADD(m_alt,c_ped[mcont,6]+' '+LEFT(m_produto[1,9],27)+' '+menvelope+' '+TRANSFORM(c_ped[mcont,14],'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * c_ped[mcont,14],ALLTRIM('@E '+m_set[1,98])))
                                        ELSE
                                                AADD(m_alt,c_ped[mcont,6]+' '+LEFT(m_produto[1,9],38)+' '+TRANSFORM(c_ped[mcont,14],'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * c_ped[mcont,14],ALLTRIM('@E '+m_set[1,98])))
                                        ENDIF
                                NEXT
                                sr_getconnection():exec('COMMIT',,.f.)
                                LOOP
                        ELSEIF mcod_bc = 'ALT'
                                alt_prod2()
                                LOOP
                        ELSEIF mcod_bc = 'PRE'
                                mconvidado := SPACE(30)
                                mcod_merc := VAL(cons_pre())
                                DEVPOS(20,14);DEVOUT(SPACE(14))
                                **********
                                IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
                                SELE('merc');ORDSETFOCUS(1)
                                **********
                                IF LASTKEY() <> 27 .AND. ! EMPTY(mcod_merc)
                                        mpre := '*'
                                        op_tela(15,20,16,80,'Informar o Nome do Convidado')
                                        mensagem('Campo Obrigatorio nao pode ficar em Branco')
                                        DEVPOS(00,01);DEVOUT('Nome do Convidado:')
                                        @ 0,COL()+1 GET mconvidado PICT '@!' VALID IF(EMPTY(mconvidado),.F.,.T.)
                                        READ
                                        fecha_tela()
                                        IF LASTKEY() = 27
                                                mconvidado := SPACE(30)
                                                LOOP
                                        ENDIF
                                ELSE
                                        mpre := ' '
                                ENDIF
                                LOOP
                        ELSEIF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0) .AND. m_set[1,159] <> 'N'
                                IF m_set[1,159] = 'V'
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                ELSE
                                        mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo Barra nao cadastrado')
                                        LOOP
                                ENDIF
                                mmerc := mped_merc[1,9]
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                IF LEN(RTRIM(mcod_bc)) = 12
                                        mcod_bc := '0'+mcod_bc
                                ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) > 0
                                        m_produto := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_produto) > 0 .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                                alt_prod2(mped_merc[1,8])
                                                LOOP
                                        ENDIF
                                ELSE
                                        mped_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@mped_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(mped_merc) = 0
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                m_produto := {}
                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@m_produto)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_produto) > 0 .AND. RTRIM(m_produto[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                        alt_prod2(mcod_merc)
                                        LOOP
                                ENDIF
                                mped_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(mped_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                          mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,,STRZERO(mvarejo,1),mperc))
                        mped_merc := {}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mped_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                mpre := ' '
                IF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg')
                        limpa(08,01,18,53)
                        botao(08,10,18,40)
                        WVW_DrawImage( ,08,10,18,40,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp')
                        limpa(08,01,18,53)
                        botao(08,10,18,40)
                        WVW_DrawImage( ,08,10,18,40,ALLTRIM(m_indiv[1,29])+'P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg')
                        limpa(08,01,18,53)
                        botao(08,10,18,40)
                        WVW_DrawImage( ,08,10,18,40,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp')
                        limpa(08,01,18,53)
                        botao(08,10,18,40)
                        WVW_DrawImage( ,08,10,18,40,ALLTRIM(m_indiv[1,3])+'\PRODUTO\P'+mped_merc[1,8]+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                        botao(08,01,18,53)
                	WVW_DrawImage( ,08,01,18,53,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF

                IF mcont_item >= m_set[1,34] .AND. m_set[1,34] > 0
                        atencao('Nao e possivel incluir mais item porque ja ultrapassou o numero maximo de itens estipulado que e de '+STRZERO(m_set[1,34],5))
                        WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                // DESATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
                //
                IF ver_serie() = '141410' .AND. EMPTY(mped_merc[1,30])
                        atencao('Este PRODUTO NAO estar com o codigo do FORNECEDOR ou codigo de MENSAGEM')
                        LOOP
                ENDIF
                IF mmult_emp = 'S' .AND. ! EMPTY(mped_merc[1,1]) .AND. mcodempresa <> mped_merc[1,1]
                        atencao('Este produto nao e da EMPRESA em uso...')
                        LOOP
                ENDIF
                mcod_merc := VAL(mped_merc[1,8])
                setcor(3)
                WVW_DrawBoxGet(,20,14,LEN(mcod_bc))
                @ 20,14 SAY SPACE(13)
                @ 20,14 SAY mcod_merc
                @ 21,14 SAY mped_merc[1,9]
                @ 25,14 SAY mped_merc[1,56] PICT '9,999,999.99'
                IF ver_serie() <> '141410'
                        @ 26,14 SAY mped_merc[1,55] PICT '999,999.99'
                ENDIF
                IF ncnn1 > 0
                        IF SR_SetActiveConnection(nCnn1) > 0
                                m_merc1 := {}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@m_merc1)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc1) > 0
                                        setcor(1)
                                        DEVPOS(26,30);DEVOUT('Deposito:')
                                        setcor(3)
                                        DEVPOS(26,COL()+1);DEVOUT(TRANSFORM(m_merc1[1,56],'999,999.999'))
                                ENDIF
                        ENDIF
                        SR_SetActiveConnection(nCnn)
                ENDIF
                setcor(1)
                IF mavaria = 2
                        mvlr_fat := iat(mped_merc[1,45],m_set[1,103])
                        mp_venda := mvlr_fat
                ELSEIF mped_merc[1,23] > 0
                        mvlr_fat = iat(mped_merc[1,46],m_set[1,103]) - iat((mped_merc[1,46] * (mped_merc[1,23] / 100)),m_set[1,103])
                        mp_venda = mvlr_fat
                ELSEIF ! EMPTY(mtipo_preco)
                        IF mtipo_preco = '1'
                                mvlr_fat := mped_merc[1,46]
                        ELSEIF mtipo_preco = '2'
                                mvlr_fat := mped_merc[1,47]
                        ELSEIF mtipo_preco = '3'
                                mvlr_fat := mped_merc[1,100]
                        ELSEIF mtipo_preco = '4'
                                mvlr_fat := mped_merc[1,101]
                        ELSE
                                mvlr_fat := mped_merc[1,102]
                        ENDIF
                        mvlr_fat := iat(mvlr_fat,m_set[1,103])
                        IF ! EMPTY(mperc)
                                mvlr_fat := iat(mvlr_fat*((mperc/100)+1),m_set[1,103])
                        ENDIF
                        mp_venda := mvlr_fat
                ELSE
                        mvlr_fat := iat(mped_merc[1,46],m_set[1,103])
                        mp_venda := mvlr_fat
                        IF mvarejo = 2
                                IF ! EMPTY(mped_merc[1,47])
                                        mvlr_fat := mped_merc[1,47]
                                ELSE
                                        mvlr_fat := iat(mped_merc[1,46]*((mped_merc[1,50]/100)+1),m_set[1,103])
                                ENDIF
                        ENDIF
                        IF ver_descon(mcod_cli,mcod_merc,mped_merc[1,7]) > 0
                                mvlr_fat := iat(mp_venda - (mp_venda*(ver_descon(mcod_cli,mcod_merc,mped_merc[1,7])/100)),m_set[1,103])
                        ENDIF
                        IF ! EMPTY(mperc)
                                mvlr_fat := iat(mp_venda*((mperc/100)+1),m_set[1,103])
                        ENDIF
                        IF SUBSTR(mcond_veze,1,1) = 'D'
                                mvlr_fat := iat(mped_merc[1,43],m_set[1,103])
                        ENDIF
                        mp_venda := mvlr_fat

                ENDIF
                WVW_RESTSCREEN(,lci,cci+55,lba,cba-1,tela_,.T.)
                botao(00,01,07,99)
                IF mped_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,mped_merc[1,8]+' - '+SUBSTR(mped_merc[1,9],1,20),,,,, 'arial black',60,20,,,,,)
                //WVW_DrawLabel(,04,02,'             '+SUBSTR(mped_merc[1,9],21)+' '+IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99'),''),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,04,02,'             '+SUBSTR(mped_merc[1,9],21),,,,, 'arial black',60,20,,,,,)
                WVW_DrawLabel(,04,02,IF(! EMPTY(mped_merc[1,23]),'P:'+TRANSFORM(mped_merc[1,23],'99')+' %',''),,,245,, 'arial black',60,20,,,,,)

                IF mped_merc[1,84] = 'S'
                        mp_venda := mvlr_fat := (mvlr_fat * ver_dolar(mdata_sis))
                ENDIF
                IF ! EMPTY(mped_merc[1,65])
                        mp_venda := mvlr_fat := (mvlr_fat * ((mped_merc[1,65]/100)+1))
                ENDIF                

                IF m_set[1,125] = 'S'
                        mdesc_prod := 0
                        @ 28,cci+46 GET mdesc_prod PICT '999.99'
                        READ
                        limpa(28,cci+46,28,cci+55)
                        IF (mdesc_prod > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80]));
                           .OR. (mdesc_prod > m_set[1,33] .AND. EMPTY(mped_merc[1,80]))
                                IF ! aut_sen(TRANSFORM(mdesc_prod,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,mcod_merc)
                                        setcor(1)
                                        mquantd := 1
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mdesc_prod)
                                mdesc_prod:= mdesc_prod * -1
                                mp_venda = iat(mvlr_fat,m_set[1,103])
                                mvlr_fat = iat(mvlr_fat*((mdesc_prod/100)+1),m_set[1,103])
                        ENDIF
                ENDIF

                DEVPOS(00,80);DEVOUT('Preco   R$:')
                WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
                setcor(5)
		DEVPOS(20,30);DEVOUT(IF(! EMPTY(mped_merc[1,23]),'PROMOCAO:'+TRANSFORM(mped_merc[1,23],'99')+'%',''))
                setcor(1)
                IF mped_merc[1,24] = 'N'
                        atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                        LOOP
                ENDIF
                IF mped_merc[1,104] = 'S'
	                atencao('PRODUTO: '+mped_merc[1,8]+' - '+mped_merc[1,9]+' *** D E S C O N T I N U A D O *** ....',3)
                        LOOP
                ENDIF
                IF ! EMPTY(mmerc) .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS'
                        m_produto := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@m_produto)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_produto) > 0 .AND. RTRIM(mped_merc[1,9]) <> 'DIVERSOS' .AND. m_set[1,104] <> 'S' .AND. m_indiv[1,26] <> 'T'
                                alt_prod2(mped_merc[1,8])
                                LOOP
                        ENDIF
                ENDIF
                setcor(1)
                mmerc := mped_merc[1,9]
                IF mped_merc[1,25] = 'S'
                        setcor(1)
                        WVW_DrawBoxGet(,lba-1,cci+1,LEN(mmerc))
                        @ 21,14 GET mmerc PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mped_merc[1,14] = 'EV'
                        op_tela(22,10,23,60,' ENVELOPE')
                        DEVPOS(01,01);DEVOUT('Numero do Envelope:')
                        WVW_DrawBoxGet(,01,22,LEN(menvelope))
                        @ 01,22 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,ver_envelope(menvelope+mcod_cli))
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mped_merc[1,14] = 'PL '
                        op_tela(22,10,25,65,'INFORMACOES SOBRE A PLACA')
                        DEVPOS(01,01);DEVOUT('No. Placa.:')
                        DEVPOS(02,01);DEVOUT('Observacao:')
                        WVW_DrawBoxGet(,01,13,8)
                        WVW_DrawBoxGet(,02,13,LEN(mobs_prod))
                        @ 01,13 GET menvelope PICT '@!' VALID IF(EMPTY(menvelope),.F.,.T.)
                        @ 02,13 GET mobs_prod PICT '@!' VALID IF(EMPTY(mobs_prod),.F.,.T.)
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSEIF mped_merc[1,14] = 'PLA'
                        op_tela(22,10,27,70,'Observacao do Produto')
                        WVW_DrawBoxGet(,01,01,61)
                        WVW_DrawBoxGet(,02,01,61)
                        WVW_DrawBoxGet(,03,01,61)
                        WVW_DrawBoxGet(,04,01,61)
                        @ 01,01 GET mdescri1
                        @ 02,01 GET mdescri2
                        @ 03,01 GET mdescri3
                        @ 04,01 GET mdescri4
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF SUBSTR(m_set[1,9],1,1) = 'P' .AND. mped_merc[1,14] <> 'PL'
                        mobs_prod := SPACE(40)
                        op_tela(22,10,24,51,' O B E R V A C A O   D O   P R O D U T O')
                        WVW_DrawBoxGet(,01,01,LEN(mobs_prod))
                        @ 01,01 GET mobs_prod VALID IF(EMPTY(mobs_prod) .AND. mped_merc[1,14]='PL',.F.,.T.)
                        READ
                        wvw_lclosewindow()
                ENDIF
                IF EMPTY(mcod_merc)
                        LOOP
                ENDIF
                mcust_real := mped_merc[1,45]
                mchass := cons_chass()
                IF ! EMPTY(mchass)
                        mdescri1 := deta->descri1
                        mdescri2 := deta->descri2
                        mdescri3 := deta->descri3
                        mdescri4 := deta->descri4
                        mdescri5 := deta->descri5
                        IF ! EMPTY(deta->vlr_venda)
                                mp_venda := deta->vlr_venda
                                mvlr_fat := deta->vlr_venda
                                mcust_real := deta->vlr_custo
                        ENDIF
                ENDIF
                //setcor(3)
                DEVPOS(23,14);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                IF ! EMPTY(mped_merc[1,65])
			//DEVPOS(23,27);DEVOUT('Vlr.C/IPI:'+TRANSFORM(mvlr_fat*((mped_merc[1,65]/100)+1),ALLTRIM('@E '+m_set[1,98])))
			DEVPOS(23,27);DEVOUT('Vlr.do IPI:'+TRANSFORM(mvlr_fat*((mped_merc[1,65]/100)),ALLTRIM('@E '+m_set[1,98])))
		ELSE
			DEVPOS(23,27);DEVOUT('                      ')
		ENDIF

                IF SUBSTR(mcod_bc,1,1) = '2' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                        IF m_set[1,159] = 'V'
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/1000)
                        ELSE
                                mquantd := (VAL(SUBSTR(mcod_bc,8,5))/100) / mvlr_fat
                        ENDIF
                        DEVPOS(22,14);DEVOUTPICT(mquantd,ALLTRIM(m_set[1,99]))
                        DEVPOS(23,14);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                        mcomissao := mped_merc[1,26]
                        setcor(1)
                ELSEIF m_indiv[1,26] <> 'T' .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        setcor(1)
                        mensagem('<F8> para consultar aplicacao do produto')
                        mmasc_qtd := unidade(mped_merc[1,14])
                        WVW_DrawBoxGet(,22,14,LEN(mmasc_qtd))
                        //@ lba-6,cci+46 GET mquantd PICT ALLTRIM(mmasc_qtd) WHEN m_indiv[1,26] <> 'T' VALID IF(EMPTY(mquantd) .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        @ 22,14 GET mquantd PICT ALLTRIM(mmasc_qtd) VALID IF(EMPTY(mquantd) .OR. mquantd < 0 .OR. (! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF mped_merc[1,103] = 'S' .AND. mquantd > mped_merc[1,56]
                                atencao('MERCADORIA BLOQUEADA para nao vender com SALDO A MENOR')
                                LOOP
                        ENDIF
                        IF ! EMPTY(mped_merc[1,28]) .AND. mped_merc[1,28] >= (mped_merc[1,56] - mquantd) .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. m_indiv[1,26] <> 'T'
                                atencao('SALDO esta menor que o ESTOQUE MINIMO: '+TRANSFORM(mped_merc[1,28],'9,999,999.99')+' estipulado !!!')
                        ENDIF
                        IF mquantd > mped_merc[1,56] .AND. mped_merc[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. SUBSTR(mped_merc[1,9],1,1) <> '@'
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que saldo: '+ALLTRIM(TRANSFORM(mped_merc[1,56],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                                mlibera := 'S'
                        ENDIF
                        IF ! EMPTY(m_set[1,153]) .AND. mquantd > m_set[1,153]
                                IF ! aut_sen('Quantidade Solicitada: '+ALLTRIM(TRANSFORM(mquantd,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,153],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDOADM',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mped_merc[1,23] > 0
                                setcor(6)
                                DEVPOS(lba-5,cci+07);DEVOUT('Preco de Tabela R$: '+TRANSFORM(mped_merc[1,46],'999,999.99'))
                                setcor(1)
                        ENDIF
                        mpacote := mpecas := 0
                        IF ! EMPTY(mped_merc[1,19])
                                IF VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),9)) > 0
                                        mquantd_aux := VAL(SUBSTR(TRANSFORM(mquantd/mped_merc[1,19],'999,999.99'),1,7)) +1
                                        mquantd := mquantd_aux * mped_merc[1,19]
                                ENDIF
                                mpacote := VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),1,7))
                                mpecas  := (VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999,999.99'),9))*mped_merc[1,20])/100
                                //mpecas  := iat((VAL(SUBSTR(TRANSFORM((mquantd/mped_merc[1,19])/mped_merc[1,20],'999999.99'),8))),1)      //*mped_merc[1,20])/100
                                //mpecas  := VAL(SUBSTR(STRZERO((mquantd/mped_merc[1,19])/mped_merc[1,20],14,2),13)),2
                                //DEVPOS(PROW(),56);DEVOUT(SUBSTR(STRZERO(mvl_nota,14,2),1,11)+SUBSTR(STRZERO(mvl_nota,14,2),13))

/*
                                IF ver_serie() = '141235'
                                        setcor(1)
                                        limpa(26,01,26,32)
                                        DEVPOS(26,02);DEVOUT('Pacotes....:')
                                        DEVPOS(26,21);DEVOUT('Pecas: ')
                                        setcor(3,'*')
                                        DEVPOS(22,14);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                                        DEVPOS(26,14);DEVOUT(TRANSFORM(mpacote,'9,999'))
                                        DEVPOS(26,28);DEVOUT(TRANSFORM(mpecas,'999'))
                                        setcor(1)
                                ENDIF
  */
                        ENDIF
                        cons_formula :={}
                        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mped_merc[1,8]),,.t.,@cons_formula)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_formula) > 0
                                mvlr_fat := tab_formula(mped_merc[1,8])
                        ENDIF
                                
                        mensagem('Digite o valor do produto - <ESC>Sair')
                        WVW_DrawBoxGet(,23,14,LEN(m_set[1,98]))
                        @ 23,14 GET mvlr_fat PICT ALLTRIM(m_set[1,98]) VALID IF(mped_merc[1,23]>0 .AND. mvlr_fat < mp_venda,.F.,.T.) WHEN (m_set[1,38] <> 'P' .AND. m_indiv[1,26] <> 'S' .AND. m_indiv[1,26] <> 'T') .OR. mped_merc[1,25] = 'S' .OR. mvlr_fat = 0
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                mquantd := 1
                                LOOP
                        ENDIF
                        //IF mped_merc[1,46] = 0        //Valor de TABELA
                        IF ! EMPTY(m_set[1,154]) .AND. mvlr_fat > m_set[1,154]
                                IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor por Produto Solicitada: '+ALLTRIM(TRANSFORM(mvlr_fat,'999,999,999.99'))+' maior que Permitido pela ADM: '+ALLTRIM(TRANSFORM(m_set[1,154],'999,999.99'))+' ... Senha de autorizacao:','LIB_SALDO',,,mcod_merc)
                                        LOOP
                                ENDIF
                        ENDIF
                        mcomissao := mped_merc[1,26]
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ! EMPTY(m_set[1,113]) .AND. mdesconto >= m_set[1,114]
                                        IF m_set[1,113] > 1
                                                mcomissao := mcomissao * (m_set[1,113]/100)
                                        ELSE
                                                mcomissao := mcomissao - (iat(mdesconto,0) * m_set[1,113])
                                                IF mcomissao < 0
                                                        mcomissao := 0
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,33] .AND. EMPTY(mped_merc[1,80]) .AND. ! EMPTY(m_set[1,33])
                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF ((mp_venda - mvlr_fat)/mp_venda)*100 > mped_merc[1,80] .AND. ! EMPTY(mped_merc[1,80])
                                        IF ver_serie() = '141220' .OR. ver_serie() = '141350' .OR. ver_serie() = '141384'
                                                atencao('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido..')
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                        IF ! aut_sen('Codigo do Produto: '+mped_merc[1,8]+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - '+TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,'999.99')+'% Desconto nao e permitido.. senha autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'C' .AND. mvlr_fat < mped_merc[1,45]
                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Custo R$:'+TRANSFORM(mped_merc[1,45],'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ELSEIF m_set[1,38] = 'V' .AND. mvlr_fat < mp_venda
                                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' Vlr.Solicitado R$:'+TRANSFORM(mvlr_fat,'999,999.99')+' - Pr.Venda R$:'+TRANSFORM(mp_venda,'999,999.99')+' - Senha de autorizacao:','LIB_DESC',,,mcod_merc)
                                                mquantd := 1
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE
                        mmasc_qtd := unidade(mped_merc[1,14])
                        WVW_DrawBoxGet(,22,14,LEN(mmasc_qtd))
                        WVW_DrawBoxGet(,23,14,LEN(m_set[1,98]))
                        DEVPOS(22,14);DEVOUTPICT(mquantd,ALLTRIM(mmasc_qtd))
                        DEVPOS(23,14);DEVOUTPICT(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))
                        setcor(1)
                ENDIF
                IF ! EMPTY(m_set[1,154]) .AND. mquantd > m_set[1,154]
                        atencao('QUANTIDADE Solicitada maior que o MAXIMO Permitido')
                        LOOP
                ENDIF
                IF mlimite <= (mcompras+msubtotal+(mvlr_fat*mquantd)) .AND. mlimite > 0
                        atencao('Limite do Cliente foi ultrapassado em R$:'+TRANSFORM(mlimite-(mcompras+msubtotal+(mvlr_fat*mquantd)),'999,999.99'))
                ENDIF
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 24,14 SAY mtot_ped PICT ALLTRIM(m_set[1,98])
                setcor(1)
                IF (m_set[1,37] = 'S' .AND. m_set[1,152] <> 'S')
                        mmontador := 0
                        op_tela(22,25,27,75,' Informe os Montadores ')
                        DEVPOS(01,00);DEVOUT('Montador 1:')
                        DEVPOS(02,00);DEVOUT('Montador 2:')
                        WVW_DrawBoxGet(,01,12,3)
                        WVW_DrawBoxGet(,02,12,3)
                        @ 01,12 GET mmontador PICT '999' VALID ven(mmontador,01,16)
                        @ 02,12 GET mmontador1 PICT '999' VALID IF(mmontador1 = mmontador,.F.,ven(mmontador1,02,16)) WHEN ! EMPTY(mmontador)
                        READ
                        opcao := op_simnao('S','Confirma os Montador:')
                        wvw_lclosewindow()
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                ENDIF
                IF m_set[1,115] = 'S'
                        op_tela(22,10,24,70,'COMISSAO DO VENDEDOR')
                        DEVPOS(01,00);DEVOUT('Digite o percentual de Comissao do Vendedor [%]:')
                        WVW_DrawBoxGet(,01,COL()+1,6)
                        @ 01,COL()+1 GET mcomissao PICT '999.99' VALID IF(EMPTY(mcomissao),.F.,.T.)
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27;LOOP;ENDIF
                ENDIF
                IF m_indiv[1,26] <> 'T' .OR. mped_merc[1,25] = 'S'
                        opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                ELSE
                        opcao := 'S'
                ENDIF
                IF opcao = 'N'
                        DBUNLOCKALL()
                        mquantd := 1
                ELSE
                        IF LEN(m_codigo) = 0 .AND. mnum_ped = 0
                                mensagem('Aguarde um momento Gerando NUMERO para o PEDIDO....')

                                gerar_no_ped()

                                Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO PEDIDOS No.:'+STRZERO(mnum_ped,6)+SPACE(30)+'Terminal: '+m_indiv[1,1])
                        ENDIF
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF ! (aret[1,11] = 'S' .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0))
                                IF mquantd > aret[1,56] .AND. aret[1,9] <> 'DIVERSOS' .AND. m_set[1,107] = 'S' .AND. mlibera = ' ' .AND. SUBSTR(aret[1,9],1,1) <> '@'
                                        IF ! aut_sen('Sld:'+TRANSFORM(aret[1,59],ALLTRIM('@E '+m_set[1,98]))+'-Ped:'+TRANSFORM(mquantd,'99999.99')+'-Aut.:','LIB_SALDO',,,mcod_merc)
                                                DBUNLOCKALL();LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
/*
                        IF mproducao = 'N'
                                ccomm :="UPDATE sacmerc SET saldo_est = "+sr_cdbvalue(aret[1,59] - mquantd) +" WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
                                sr_getconnection():exec(ccomm,,.f.)
                        ELSE
*/
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - mquantd)+",data_atu = "+sr_cdbvalue(mdata_sis)+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.f.)
/*
                                IF ver_serie() = '141235'
                                        ccomm :="UPDATE sacmerc SET saldo_est = "+sr_cdbvalue(aret[1,59] - mquantd)+" WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
                                        sr_getconnection():exec(ccomm,,.f.)
                                ENDIF
*/
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //4
                                                        sr_cdbvalue(mquantd)+','+; //5
                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                        sr_cdbvalue(aret[1,56] - mquantd)+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC23PD1')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('INCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                        sr_cdbvalue('S')+','+; //11
                                                        sr_cdbvalue(' ')+')',,.f.)
                        //ENDIF
                        mcampo_ped := 'pempresa,'   ;//1
                                      +'pnum_ped,'  ;//2
                                      +'ptermina,'  ;//3
                                      +'pdat_ped,'  ;//4
                                      +'pgru_sub,'  ;//5
                                      +'pcod_merc,' ;//6
                                      +'pmerc,'     ;//7
                                      +'punidade,'  ;//8
                                      +'pespecie,'  ;//9
                                      +'penvelope,' ;//10
                                      +'ppeso,'     ;//11
                                      +'ppeso_liq,' ;//12
                                      +'pgramatura,';//13
                                      +'pquantd,'   ;//14
                                      +'ppacote,'   ;//15
                                      +'ppecas,'    ;//16
                                      +'ppre_dig,'  ;//17
                                      +'pdesc,'     ;//18
                                      +'pvlr_fat,'  ;//19
                                      +'ppre_venda,';//20
                                      +'ppr_venda1,';//21
                                      +'pcust_real,';//22
                                      +'pcust_merc,';//23
                                      +'pcod_cli,'  ;//24
                                      +'pcgc,'      ;//25
                                      +'pcpf,'      ;//26
                                      +'pplaca,'    ;//27
                                      +'pcarro,'    ;//28
                                      +'pmodelo,'   ;//29
                                      +'pkm,'       ;//30
                                      +'pcod_fab,'  ;//31
                                      +'pfabrica,'  ;//32
                                      +'pcod_oper,' ;//33
                                      +'pcomi_oper,';//34
                                      +'pcod_vend,' ;//35
                                      +'pvendedor,' ;//36
                                      +'palimento ,';//37
                                      +'pcod_fin  ,';//38
                                      +'pcod_tab  ,';//39
                                      +'pvlr_pres ,';//40
                                      +'pcond_veze,';//41
                                      +'pcond_inte,';//42
                                      +'phora     ,';//43
                                      +'ptp_vend  ,';//44
                                      +'pvlr_ent  ,';//45
                                      +'pisento   ,';//46
                                      +'ppromocao ,';//47
                                      +'pmontador ,';//48
                                      +'pmontador1,';//49
                                      +'pcomissao ,';//50
                                      +'pcom_mont ,';//51
                                      +'pprazo    ,';//52
                                      +'pbebida   ,';//53
                                      +'pipi      ,';//54
                                      +'pobs_prod ,';//55
                                      +'pind_icms ,';//56
                                      +'pstat_item,';//57
                                      +'psit_trib ,';//58
                                      +'pobs1,'     ;//59
                                      +'pobs2,'     ;//60
                                      +'pobs3,'     ;//61
                                      +'pobs4,'     ;//62
                                      +'plocal,'    ;//63
                                      +'chassis,'   ;//64
                                      +'descri1,'   ;//65
                                      +'descri2,'   ;//66
                                      +'descri3,'   ;//67
                                      +'descri4,'   ;//68
                                      +'descri5,'   ;//69
                                      +'pproducao,' ;//70
                                      +'pcod_tran,' ;//71
                                      +'pos,'       ;//72
                                      +'data_so,'   ;//73
                                      +'convidado,' ;//74
                                      +'cod_pres,'  ;//75
                                      +'tipo_ped'    //76
                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)      )+','+;//3
                        sr_cdbvalue(mdata_pedido            )+','+;//4
                        sr_cdbvalue(aret[1,7]               )+','+;//5
                        sr_cdbvalue(STRZERO(mcod_merc,5)    )+','+;//6
                        sr_cdbvalue(mmerc                   )+','+;//7
                        sr_cdbvalue(aret[1,14]              )+','+;//8
                        sr_cdbvalue(aret[1,15]              )+','+;//9
                        sr_cdbvalue(IF(! EMPTY(mplaca),mplaca,menvelope))+','+;//10
                        sr_cdbvalue(aret[1,17]              )+','+;//11
                        sr_cdbvalue(aret[1,16]              )+','+;//12
                        sr_cdbvalue(aret[1,74]              )+','+;//13
                        sr_cdbvalue(mquantd                 )+','+;//14
                        sr_cdbvalue(mpacote                 )+','+;//15
                        sr_cdbvalue(mpecas                  )+','+;//16
                        sr_cdbvalue(mvlr_fat                )+','+;//17
                        sr_cdbvalue(mdesconto               )+','+;//18
                        sr_cdbvalue(mvlr_fat * 1            )+','+;//19
                        sr_cdbvalue(IF(aret[1,23] > 0,mvlr_fat,mp_venda))+','+;//20
                        sr_cdbvalue(aret[1,47]              )+','+;//21
                        sr_cdbvalue(aret[1,45]              )+','+;//22
                        sr_cdbvalue(aret[1,44]              )+','+;//23
                        sr_cdbvalue(mcod_cli     )+','+;//24
                        sr_cdbvalue(mcgc                    )+','+;//25
                        sr_cdbvalue(mcpf                    )+','+;//26
                        sr_cdbvalue(mplaca                  )+','+;//27
                        sr_cdbvalue(mcarro                  )+','+;//28
                        sr_cdbvalue(mmodelo		    )+','+;//29
                        sr_cdbvalue(mkm			    )+','+;//30
                        sr_cdbvalue(aret[1,30]		    )+','+;//31
                        sr_cdbvalue(LEFT(aret[1,31],30)	    )+','+;//32
                        sr_cdbvalue(cod_operado		    )+','+;//33
                        sr_cdbvalue(mcom_oper)+','+;//34
                        sr_cdbvalue(mcod_ven)+','+;//35
                        sr_cdbvalue(mnome_ven)+','+;//36
                        sr_cdbvalue(aret[1,21])+','+;//37
                        sr_cdbvalue(STRZERO(0,3))+','+;//38
                        sr_cdbvalue(STRZERO(mcod_cond,3))+','+;//39
                        sr_cdbvalue(0)+','+;//40
                        sr_cdbvalue(0)+','+;//41
                        sr_cdbvalue(' ')+','+;//42
                        sr_cdbvalue(mhoras)+','+;//43
                        sr_cdbvalue(mtp_venda)+','+;//44
                        sr_cdbvalue(0)+','+;//45
                        sr_cdbvalue(aret[1,61])+','+;//46
                        sr_cdbvalue(aret[1,23])+','+;//47
                        sr_cdbvalue(STRZERO(mmontador,3))+','+;//48
                        sr_cdbvalue(STRZERO(mmontador1,3))+','+;//49
                        sr_cdbvalue(mcomissao+mcomi_tab)+','+;//50
                        sr_cdbvalue(aret[1,27])+','+;             //51
                        sr_cdbvalue(aret[1,75])+','+;             //52
                        sr_cdbvalue(aret[1,62])+','+;             //53
                        sr_cdbvalue(aret[1,65])+','+;             //54
                        sr_cdbvalue(mobs_prod)+','+;             //55
                        sr_cdbvalue(aret[1,82])+','+;           //56
                        sr_cdbvalue(' ')+','+;            //57
                        sr_cdbvalue(aret[1,83])+','+;             //58
                        sr_cdbvalue(mobs1)+','+;                      //59
                        sr_cdbvalue(mobs2)+','+;                      //60
                        sr_cdbvalue(mobs3)+','+;                      //61
                        sr_cdbvalue(mobs4)+','+;                      //62
                        sr_cdbvalue(SUBSTR(aret[1,73],1,2))+','+; //63
                        sr_cdbvalue(mchass)+','+;             //64
                        sr_cdbvalue(mdescri1)+','+;             //65
                        sr_cdbvalue(mdescri2)+','+;             //66
                        sr_cdbvalue(mdescri3)+','+;             //67
                        sr_cdbvalue(mdescri4)+','+;             //68
                        sr_cdbvalue(mdescri5)+','+;             //69
                        sr_cdbvalue(mproducao)+','+;            //70
                        sr_cdbvalue(' ')+','+;                  //71
                        sr_cdbvalue(STRZERO(mnum_os,6))+','+;   //72
                        sr_cdbvalue(DATE())+','+;               //73
                        sr_cdbvalue(mconvidado          )+','+; //74
                        sr_cdbvalue(STRZERO(mcod_pres,5))+','+; //75
                        sr_cdbvalue(mavaria             )+','+; //76
                        sr_cdbvalue(' ')+')'
                        sr_getconnection():exec(ccomm,,.f.)
                        mconvidado := SPACE(30)
                        IF ! EMPTY(mchass)
                                sr_getconnection():exec("UPDATE merc_det SET venda='V',n_ped="+sr_cdbvalue(STRZERO(mnum_ped,6))+",dat_venda="+sr_cdbvalue(mdata_sis)+",vl_vendido="+sr_cdbvalue(mvlr_fat * 1)+" WHERE  merc_det.codigo = "+sr_cdbvalue(mcod_merc)+" AND merc_det.chassis  = "+sr_cdbvalue(mchass)+" AND merc_det.venda IS NULL",,.f.)
                        ENDIF
                        IF mcod_pres > 0
                                cons_presen:={}
                                sr_getconnection():exec("SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))+" AND cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,cons_presen)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_presen) > 0
                                        sr_getconnection():exec("UPDATE sacpresen SET qtd ="+sr_cdbvalue(cons_presen[1,6] - mquantd)+" WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))+" AND cod_merc = "+sr_cdbvalue(mcod_merc),,.f.)
                                ENDIF
                        ENDIF
                        sr_getconnection():exec("COMMIT",,.f.)
                        AADD(m_codigo,mcod_merc)
                        AADD(m_Cbarra,aret[1,2])
                        IF mvlr_fat = 0
                        *                         1       2        3           4     5       6          7         8           9         10        11          12        13         14              15             16          17        18       19   20        21         22         23        24       25        26        27       28      29      30       31       32       33         34         35        36        37        38          39
                        *                          40      41    42      43     44
                                AADD(m_matriz,{mquantd,mvlr_fat,        0,aret[1,7],mmerc,aret[1,14],aret[1,17],       0,         0,aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ELSE
                                AADD(m_matriz,{mquantd,mvlr_fat,mdesconto,aret[1,7],mmerc,aret[1,14],aret[1,17],mp_venda,aret[1,45],aret[1,30],aret[1,31],aret[1,21],aret[1,61],aret[1,23],mcomissao+mcomi_tab,aret[1,62],aret[1,16],aret[1,44],mobs1,mobs2,aret[1,73],aret[1,65],aret[1,15],menvelope,mhoras,aret[1,82],aret[1,83],mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,aret[1,75],aret[1,74],mobs_prod,mmontador,mmontador1,aret[1,27],;
                                               aret[1,47],'  ',mpacote,mpecas,mcod_pres})
                        ENDIF
                        IF aret[1,14] = 'EV'
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],27)+' '+menvelope+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ELSE
                                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(aret[1,9],38)+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mvlr_fat,ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(mvlr_fat * mquantd,ALLTRIM('@E '+m_set[1,98])))
                        ENDIF
                        menvelope := SPACE(10)
                        mcod_pres := 0
                        mobs_prod:=SPACE(40)
                        mcont_item ++
                        mquantd := 1
                ENDIF
        ENDDO
ENDDO
RELEASE ALL
wvw_lclosewindow()
RETURN NIL
*******************************************************
* FUNCAO P/DEVOLUCAO DE MERCADORIAS
*******************************************************
FUNCTION tab_formula(mcod_m)
******************
LOCAL mprg:='SAC23PD1',;
      lci,cci,lba,cba,tela_sai,tela_ent,mquantd,mvlr_merc,mtotal,;
      lci_ent,cci_ent,lba_ent,cba_ent,point,;
      I,opcao,mmerc,li,ci,lb,cb,i_ent:=0,mtitulo:='TABELA DA FORMULA DO PRODUTO',c_merc:={},c_formula:={}

PRIVATE cons_prod:={},cons_merc:={},m_formula:={},m_pos:={},;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg+'FORMU',mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := 00
cci := 15
lba := 02
cba := 60

lci_ent := 04
cci_ent := 00
lba_ent := 28
cba_ent := 79

op_tela(00,05,30,85,mtitulo)
WHILE .T.
        limpa(00,00,30,100)
        //botao(lci,cci,lba,cba)
        botao(lci_ent,cci_ent,lba_ent,cba_ent)
        DEVPOS(lci_ent+1,cci_ent+1);DEVOUT(' Cod.    Descricao                               Quantd    Valor')
        @ lci_ent+2,cci_ent TO lci_ent+2,cba_ent
        setcor(1)
        exibi_prg(mprg)
        i := mquantd := mvlr_merc := mtotal := 0
        mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')
        DEVPOS(00,01);DEVOUT('Codigo:')
        DEVPOS(02,01);DEVOUT('Valor da Formula:')
        setcor(3)
        DEVPOS(00,09);DEVOUT(mcod_m)
        setcor(1)
        cons_merc :={}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_m),,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao foi possivel encontrar este produto...')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(00,15);DEVOUT(cons_merc[1,9])
        setcor(1)
        cons_formula :={}
        sr_getconnection():exec("SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@cons_formula)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_formula) > 0
                m_formula :={}
                m_pos :={}
                i:=0
                FOR i = 1 TO LEN(cons_formula)
                        c_merc :={}
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_formula[i,2]),,.t.,@c_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_merc) = 0
                                atencao('Nao foi possivel encontrar este produto...')
                                LOOP
                        ENDIF
                        AADD(m_formula,' '+cons_formula[i,2]+' '+c_merc[1,9]+' '+TRANSFORM(cons_formula[i,3],ALLTRIM(m_set[1,99]))+' '+TRANSFORM(c_merc[1,46],'999,999.999'))
                        AADD(m_pos,{cons_formula[i,3],c_merc[1,46]})
                        mtotal := mtotal + (cons_formula[i,3] * c_merc[1,46])
                NEXT
                setcor(3)
                DEVPOS(02,19);DEVOUT(TRANSFORM(mtotal,'999,999.999'))
                setcor(1)
        ENDIF
        WHILE .T.
                setcor(3)
                botao(29,00,30,79)
                setcor(1)
                DEVPOS(29,01);DEVOUT('Cod.   Descricao')
                DEVPOS(29,52);DEVOUT('Qtd.')
                DEVPOS(29,62);DEVOUT('Valor')
                mquantd := mvlr_merc := point:= 0
                mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')
                setcor(10);point := ACHOICE(lci_ent+3,cci_ent+1,lba_ent-1,cba_ent-1,m_formula,,,point);setcor(1)
                DO CASE
                        CASE LASTKEY()=27
                                wvw_lclosewindow()
                                RETURN mtotal
                        CASE LASTKEY() = 13
                                mquantd := m_pos[point,1]
                                mvlr_merc := m_pos[point,2]
                                @ 30,48 GET mquantd PICT ALLTRIM(m_set[1,99])
                                @ 30,58 GET mvlr_merc PICT '999,999.999'
                                READ
                                IF LASTKEY() = 27;LOOP;ENDIF
                                opcao := op_simnao('S','Confirma a Altercao:')
                                IF opcao = 'N' .OR. LASTKEY() = 27
                                        LOOP
                                ENDIF
                                m_pos[point,1] := mquantd
                                m_pos[point,2] := mvlr_merc
                                m_formula[point] := SUBSTR(m_formula[point],1,48)+TRANSFORM(mquantd,ALLTRIM(m_set[1,99]))+' '+TRANSFORM(mvlr_merc,'999,999.999')
                                i := mtotal := 0
                                FOR i = 1 TO LEN(m_pos)
                                        mtotal := mtotal + (m_pos[i,1] * m_pos[i,2] )
                                NEXT
                                setcor(3)
                                DEVPOS(02,19);DEVOUT(TRANSFORM(mtotal,'999,999.999'))
                                setcor(1)
                ENDCASE
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ******************************************
*****************************
* FECHAMENTO DO PEDIDO
*****************************
MEMVAR getlist

FUNCTION fecha_pd(mtip,magrupar,orc_tp)
*****************
LOCAL lcia,ccia,lbaa,cbaa,mopcao,mdocum,mvenc,mcodvend,mtot_prazo:=0,mprazo_aux:=0,opcao,;
      mtotitens:=0,mtel_carro,mdesc_alt:=0,i,tela_ped,mtelemark:=' ',;
      mdesc_aux:=0,mppag:=' ',mcli_aux:=' ',mop_desc := ' ',cons_presen:={},mpd_entrega,;
      cComm,cons_ped:={},cons_merc:={},m_envelope:={},mcam_db := {}

MEMVAR ali,no,mcod_cli,mnome_ven,m_matriz,m_codigo,m_num,mcod_aux,;
       mnum_ped,mlci,mlib_spc,mprz,mtp_venda,mcond_veze,mdata_sis,m_dia,cod_operado,;
       m_alt,msit_tip,sovenda,mproducao,mcont_item,mtela,m_pedido,;
       m_cbarra,mflag,mcom_oper,m_vlr,;
       mtot_limite,mlim_venc,mlim_avenc,mobs1,mobs2,mobs3,mobs4,;
       mplaca,mcarro,mmodelo,mkm,mnum_os,mcod_pres

PRIVATE mdocumento,mvalor_aux,mtipo_aux,mextenso,mhora,mdata,;
        f,mforma_pg,modo_pg,mvlr_ent,mfin,;
        mt_pedido,mtot_desc,mtot_quant,mdesconto,mtraco,mcondicao,mprazo,;
        mperc,mlinha,lin,mlin,mdesc,mvlr_desc,mcartao,mdup,mcheque,;
        mdinheiro,mend,mbairro,mcidade,muf,;
        mcond_int,mvia,mtot_itens,malteracao:=0,;
        mdif,mnome,tela,mpoint,mquantd_prod,mtaxa_adm:=0,;
        mnome_cli,mjuros,mjuros_aux,mlimite:=0,mautoriza,;
        mpagina,mp,mvalor_ent,mtipo_fin,maliq_fin,mcobra_fin,mcod_fin,mtaxa_fin,;
        mvalor_pres,mvalor_fin,mquantd,mporta_imp,;
        mnome_trans,mcgc_trans,mend_trans,mmun_trans,muf_trans,minsc_trans,;
        mplaca_trans,mcod_tran,mnum_trans,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo_pg,mmontador:=0,mmontador1:=0,;
        memissao:=CTOD('  /  /  '),mcart_ban:=' '	//,mcod_ven

SET KEY -8 TO sac130()           // inclusao de clientes
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('merc_det','deta');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
CLEAR GETS
lcia := ccia := 0
lbaa := 24
cbaa := 75
mtraco := REPLI('=',80)
mlinha := lin := mlin := mtot_limite:= mlim_venc := mlim_avenc := mautoriza := ;
mvlr_ent := 0
i = 1
ali := 'ped_s'
no  := 'noped'
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacnoped','noped');RETURN NIL;ENDIF
CLEAR GETS
mp := ' '
i:=0
/*
IF (ver_serie() = '141287' .OR. ver_serie() = '14128D') .AND. (mtip = '1' .OR. mtip = 'SAC23P1')
        ver_pedido()    // mesmo PRG
ENDIF
*/
IF m_set[1,84] > 0 .AND. (mtip = 'SAC23P1' .OR. mtip = '1' .OR. mtip = 'SAC23ORC') .AND. EMPTY(mcod_cli)
        mcod_cli := m_set[1,84]
ENDIF
mt_pedido := 0
op_tela(10,10,13,70,' Confirmacao de Vendedor ')
WHILE .T.
        muf_trans := SPACE(2)
        mcod_tran := SPACE(4)
        mplaca_trans := SPACE(7)
        mnum_trans := SPACE(8)
        minsc_trans := SPACE(11)
        mcgc_trans := SPACE(13)
        mmun_trans := SPACE(20)
        mnome_trans := SPACE(30)
        mend_trans := SPACE(40)
        mcodvend := mcod_ven
        IF m_set[1,108] = 'S'           //.AND. m_indiv[1,26] = 'N'
                DEVPOS(01,01);DEVOUT('Vendedor:')
                setcor(3)
                DEVPOS(01,11);DEVOUT(mcod_ven+'-'+mnome_ven)
                DEVPOS(02,01);DEVOUT('Pressione <ENTER> p/continuar ou Altere o Vendedor')
                setcor(1)
                mcod_aux := mcod_ven
		@ 01,11 GET mcod_ven PICT '999' VALID IF(ver_ven(mcod_ven),.T.,.F.)
                READ
                mcod_ven := sen->scod_op
                mnome_ven := sen->snome
                IF m_set[1,10] = 'S' .AND. mcod_ven <> mcod_aux .AND. mcod_cli <> m_set[1,84];
                   .AND. ! aut_sen('Cod. Vend. Diferente do Vend. Resp.CLIENTE, Senha autorizacao:','LIBCLIVEN',,mcod_cli)
                        LOOP
                ENDIF
                IF mcodvend <> mcod_ven
                        mopcao := ' '
                        DEVPOS(01,01);DEVOUT('Vendedor:')
                        setcor(3)
                        DEVPOS(01,11);DEVOUT(mcod_ven+'-'+mnome_ven)
                        DEVPOS(02,01);DEVOUT('Para Confirma pressione qualquer tecla ou <ESC>retornar')
                        setcor(1)
                        @ 50,00 GET mopcao
                        READ
                        //INKEY(0)
                        IF LASTKEY() = 27
                                SET KEY 28 TO menu_cons()
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                ENDIF
                IF m_set[1,153] = 'S' .AND. mcod_ven <> cod_operado
                        mtelemark := mensagem1('Esta Venda e [T]->TELE MARKETING ou [N]->NORMAL:',' ','T,N')
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
op_tela(05,10,30,85,' FECHAMENTO DO PEDIDO ')
WHILE .T.
        limpa(00,00,33,100)
        IF orc_tp = '*'
                mtelemark := mtele_mark
        ENDIF
        SET KEY 28 TO menu_cons()
        *********
        SELE(ali);ORDSETFOCUS(1)
        *********
        mpd_entrega := CTOD('  /  /  ')
        mnome_cli := mnome := SPACE(40)
        mcartao := mdup := mcheque := mdinheiro := mcobra_fin := SPACE(1)
        mend := SPACE(35)
        mbairro := mcidade := SPACE(20)
        muf := mcond_int := SPACE(2)
        mtipo_fin := SPACE(3)
        mvlr_desc := mdesc := mvalor_ent := maliq_fin := mcod_fin := ;
        mtaxa_fin := mvalor_aux := mvalor_pres := mvalor_fin := mdesc_alt := ;
        mmontador := mmontador1 := 0
        mensagem('Preencha os campos de acordo com o HELP - <ESC> p/retornar')
        //botao(lcia,ccia,lbaa,cbaa)
        @ lcia+2,ccia TO lcia+2,cbaa
        @ lcia+6,ccia TO lcia+6,cbaa
        @ lcia+17,ccia TO lcia+17,cbaa
        @ lcia+19,ccia TO lcia+19,cbaa

        setcor(1)
        IF m_indiv[1,9] <> 'V'
                DEVPOS(lcia+01,ccia+1);DEVOUT('Sub-Total do Pedido:')
                DEVPOS(lcia+02,ccia+20);DEVOUT('Indentificacao Cliente')
                DEVPOS(lcia+06,ccia+20);DEVOUT('Condicoes de Pagamento')
                DEVPOS(lcia+3,ccia+1);DEVOUT('Cod.:')
                DEVPOS(lcia+4,ccia+1);DEVOUT('CPF.:')
                DEVPOS(lcia+4,ccia+28);DEVOUT('| Media de dias em Atraso:')
                DEVPOS(lcia+5,ccia+1);DEVOUT('CGC.:')
                DEVPOS(lcia+5,ccia+28);DEVOUT('| Quantidade Documento...:')
                DEVPOS(lcia+16,ccia+1);DEVOUT('Previsao de Entrega......:')
                DEVPOS(lcia+20,ccia+1);DEVOUT('Observacoes:')
        ELSE
                DEVPOS(lcia+01,ccia+1);DEVOUT('Sub-Total do Pedido:')
                DEVPOS(lcia+17,ccia+1);DEVOUT('Vaqueiros..:')
                DEVPOS(lcia+18,ccia+1);DEVOUT('Patrocinio.:')
                DEVPOS(lcia+21,ccia+1);DEVOUT('Sub-Total do Pedido:')
        ENDIF
        mtipo_imp := m_indiv[1,10]
        mporta_imp := m_indiv[1,7]
        mquantd := m_indiv[1,11]
        IF magrupar = 100
                mobs1 := orcam->pobs1
                mobs2 := orcam->pobs2
                mobs3 := orcam->pobs3
                mobs4 := orcam->pobs4
        ENDIF
        ****
        mt_pedido := i := mtotitens := 0
        mvia := '1a.via'
        FOR i = 1 TO LEN(m_codigo)
                IF m_matriz[i,1] = NIL
                        LOOP
                ENDIF
                IF m_matriz[i,2] < m_matriz[i,8]
                        mdesc_alt := mdesc_alt + ((m_matriz[i,1] * m_matriz[i,2]) - (m_matriz[i,1] * m_matriz[i,8]))
                ENDIF
                mt_pedido = mt_pedido + (m_matriz[i,2] * m_matriz[i,1])
                mtotitens ++
/*
                IF ver_serie() = '141235' .OR. ver_serie() = '141274'
                        mt_pedido := mt_pedido + ((m_matriz[i,2] * m_matriz[i,1]) * (m_matriz[i,22]/100))
                ENDIF
*/
        NEXT
        IF LEN(m_codigo) = 0
                atencao('Nao foi Solicitacao nenhum Pedido neste momento')
                SET KEY -8 TO
                EXIT
        ENDIF
        i = 1

        ***
        IF SUBSTR(m_set[1,9],1,1) = 'S' .OR. SUBSTR(m_set[1,9],2,1) = 'S'
                IF magrupar = 1
                        mobs1 := mobs2 := mobs3 := mobs4 := SPACE(40)
                        i := 0
                        FOR i =1 TO LEN(m_num)
                                IF i > 0 .AND. i <=6
                                        mobs1 := RTRIM(mobs1)+m_num[i]+','
                                ELSEIF i > 7 .AND. i <= 12
                                        mobs2 := RTRIM(mobs2)+m_num[i]+','
                                ELSEIF i > 14 .AND. i <= 18
                                        mobs3 := RTRIM(mobs3)+m_num[i]+','
                                ELSEIF i > 21 .AND. i <= 24
                                        mobs4 := RTRIM(mobs4)+m_num[i]+','
                                ENDIF
                        NEXT
                        mobs1 := SUBSTR(mobs1,1,40)
                        mobs2 := SUBSTR(mobs2,1,40)
                        mobs3 := SUBSTR(mobs3,1,40)
                        mobs4 := SUBSTR(mobs4,1,40)
                ENDIF
                //SET KEY 28 TO
                WHILE .T. .AND. m_indiv[1,26] = 'N'
                        IF m_indiv[1,9] <> 'V'
                                @ lcia+20,ccia+14 GET mobs1
                        ELSE
                                @ lcia+20,ccia+14 GET mobs1 VALID IF(EMPTY(mobs1),.F.,.T.)
                        ENDIF
                                @ lcia+21,ccia+14 GET mobs2 WHEN ! EMPTY(mobs1)
                                @ lcia+22,ccia+14 GET mobs3 WHEN ! EMPTY(mobs2)
                                @ lcia+23,ccia+14 GET mobs4 WHEN ! EMPTY(mobs3)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        opcao := op_simnao('S','Confirma as OBSERVACOES [S/n]:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        EXIT
                ENDDO
        ENDIF
        SET KEY 28 TO menu_cons()
        setcor(3)
        WVW_DrawLabel(,0,ccia+22,ALLTRIM(TRANSFORM(mt_pedido,'99,999,999.99')),,,,, 'Arial Black',40,30,,,,,)
         //WVW_DrawLabel(,lcia+0,ccia+22,ALLTRIM(TRANSFORM(mt_pedido,'99,999,999.99')),,,,, 'Arial Black',60,30,,,,,)
        setcor(1)
        mcli_aux := mcod_cli
    IF m_indiv[1,9] <> 'V'
        IF mtip = '*' .OR. ali <> 'ped_s'       //.OR. orc_tp <> NIL
                @ lcia+3,ccia+7 GET mcod_cli PICT '99999'       //WHEN m_set[1,17] = 'S' .AND. m_set[1,100] = 'N' .AND. m_set[1,10] = 'N' .AND. ali <> 'ped_s'    // men_get(lcia+4,ccia+7,'Informe o Cod.do Cliente - <ENTER>outro campo - <F1>Pesquisar - <F9>p/Incluir Clientes') .AND.          //.AND. m_indiv[1,26] = 'N'
        ELSE
                @ lcia+3,ccia+7 GET mcod_cli PICT '99999' WHEN m_set[1,17] = 'S' .AND. m_set[1,10] = 'N'    // men_get(lcia+4,ccia+7,'Informe o Cod.do Cliente - <ENTER>outro campo - <F1>Pesquisar - <F9>p/Incluir Clientes') .AND.          //.AND. m_indiv[1,26] = 'N'
        ENDIF
        @ lcia+3,ccia+14 GET mnome_cli PICT '@!' WHEN EMPTY(mcod_cli)
        @ lcia+4,ccia+7 GET mcpf PICT '@@R 999.999.999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mnome_cli)          //.AND. men_get(lcia+5,ccia+7,'Informe o CPF do Cliente - <ENTER>outro campo - <F7>p/pesquisar')
        @ lcia+5,ccia+7 GET mcgc PICT '@@R 99.999.999/9999-99' WHEN EMPTY(mcod_cli) .AND. EMPTY(mnome_cli)
        READ
        IF mp = '*'
                mp := ' '
                LOOP
        ENDIF
        IF LASTKEY() = 27
                IF mtip = '*' .AND. malteracao = 1
                        atencao('Voce nao pode Sair esta alteracao sem fazer o FECHAMENTO porque este pedido ja foi ALTERADO OK')
                        LOOP
                ENDIF
                CLEAR GETS
                SET KEY -8 TO
                EXIT
        ENDIF
        *****************
        SELE('cli')
        *****************
        IF ! EMPTY(mcod_cli)
                *****************
                ORDSETFOCUS(1)
                *****************
                cli->(DBSEEK(mcod_cli))
        ELSEIF ! EMPTY(mnome_cli)
                *****************
                ORDSETFOCUS(2)
                *****************
                cli->(DBSEEK(RTRIM(mnome_cli),.T.))
                f7_cli()
                *****************
                ORDSETFOCUS(1)
                *****************
                cli->(DBSEEK(mcod_cli))
                IF LASTKEY() = 27
                       LOOP
                ENDIF
        ELSEIF ! EMPTY(mcpf)
                *****************
                ORDSETFOCUS(4)
                *****************
                cli->(DBSEEK(mcpf))
        ELSEIF ! EMPTY(mcgc)
                *****************
                ORDSETFOCUS(3)
                *****************
                cli->(DBSEEK(mcgc))
        ENDIF
        IF ! FOUND()
                atencao('Cliente nao cadastrado !!!')
                LOOP
        ENDIF
        IF cli->bloqueio = 'S'
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA')
                LOOP
        ENDIF
        //SET KEY 28 TO
        IF ! EMPTY(mnome_cli) .OR. ! EMPTY(mcod_cli) .OR. ! EMPTY(mcpf) .OR. ! EMPTY(mcgc)
                setcor(3)
                DEVPOS(lcia+3,ccia+7);DEVOUT(STR(mcod_cli))
                DEVPOS(lcia+3,ccia+14);DEVOUT(cli->razao)
                setcor(1)
                mcod_cli = cli->cod_cli
                mnome_cli = cli->razao
                mend := cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),'')
                mbairro := cli->bairro
                mcidade := cli->cidade
                muf := cli->uf
                mcgc := cli->cgc
                mcpf := cli->cpf
                minsc := cli->insc
                mlimite := cli->limite
                IF mcod_cli <> m_set[1,84] .AND. ! limite(mcod_cli,mt_pedido,'*')
                        UNLOCK
                        LOOP
                ENDIF
                IF ! EMPTY(mdocum)
                        atencao('Existe estes documentos deste cliente: '+mdocum,9)
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(lcia+3,ccia+7);DEVOUTPICT(mcod_cli,'99999')
        DEVPOS(lcia+4,ccia+7);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(lcia+4,ccia+55);DEVOUTPICT(cli->dia_atras,'999.99')
        DEVPOS(lcia+5,ccia+7);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(lcia+5,ccia+55);DEVOUTPICT(cli->qtd_doc,'9999')
        setcor(1)
        IF mcli_aux <> mcod_cli
                mlib_spc := ' '
                IF ! spc(mcod_cli,mt_pedido,,'*',)
                        LOOP
                ENDIF
        ENDIF
        IF m_set[1,37] = 'S'
		op_tela(10,35,13,75,' Dados do Carro ')
                DEVPOS(00,00);DEVOUT('Placa No..:')
                DEVPOS(01,00);DEVOUT('Marca.....:')
                DEVPOS(02,00);DEVOUT('Modelo....:')
                DEVPOS(03,00);DEVOUT('KM........:')
		mensagem('Preencha os campos')
                @ 00,12 GET mplaca PICT '@!'
                READ
                IF ! EMPTY(mplaca)
                        m_envelope:={}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(mplaca),,.t.,@m_envelope)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_envelope) > 0
                                mcarro  := m_envelope[1,27]
                                mmodelo := m_envelope[1,28]
                                mkm     := m_envelope[1,29]
                        ENDIF
                ENDIF
/*
                IF ver_envelope(mplaca,'*',IF(ali='orcam','*',))
                        IF(EMPTY(mcarro),mcarro := aret[1,27],mcarro)                                         _
                        IF(EMPTY(mmodelo),mmodelo := aret[1,28],mmodelo)
                        IF(EMPTY(mkm),mkm := aret[1,29],mkm)
                ENDIF
*/
                @ 01,12 GET mcarro PICT '@!'
                @ 02,12 GET mmodelo PICT '@!'
                @ 03,12 GET mkm PICT '@!'
                READ
                opcao := op_simnao('S','Confirma os dados digitados:')
		fecha_tela()
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
/*
        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
		op_tela(10,35,11,75,' Dados do Pedido Externo ')
		mensagem('Preencha os campos')
                DEVPOS(01,00);DEVOUT('No.Pedido.:')
                @ 01,13 GET mplaca PICT '@!'
                READ
                opcao := op_simnao('S','Confirma os dados digitados:')
		fecha_tela()
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
*/
    ENDIF
        setcor(1)
        mjuros := mjuros_aux := mforma_pg := 0
        IF m_indiv[1,26] = 'N' .OR. ver_serie() = '141414'         // NAO AUTOCAIXA
                DEVPOS(lcia+7,ccia+1);DEVOUT('Forma de Pagamento:')
                IF SUBSTR(cli->prazo_pag,1,2) = '00' .OR. (EMPTY(VAL(mcons_tabpg)) .AND. ! EMPTY(mcod_cond))
                        SETCOLOR('W/B,B/W')
                        DEVPOS(lcia+7,ccia+20);DEVOUT('1> AVISTA')
                        setcor(1)
                        DEVPOS(lcia+7,ccia+34);DEVOUT('1> Aprazo')
                        mforma_pg := 1
                ELSEIF EMPTY(mprz)
                        setcor(10)
                        @ lcia+7,ccia+20 PROMPT '1> Avista'
                        @ lcia+7,ccia+34 PROMPT '2> Aprazo'
                        SET INTEN ON
                        MENU TO mforma_pg
                        setcor(1)
                ELSE
                        DEVPOS(lcia+7,ccia+20);DEVOUT('1> Avista')
                        SETCOLOR('W/B,B/W')
                        DEVPOS(lcia+7,ccia+34);DEVOUT('2> APRAZO')
                        setcor(1)
                        mforma_pg := 2
                ENDIF
                IF mtp_venda = 'AV' .AND. mtip = '*'
                        IF mforma_pg = 2
                                IF ! aut_sen('Forma de Pagamento estar Diferente da Emissao, Senha autorizacao:','FORMPAGPED',,mcod_cli)
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF

                DO CASE
                        CASE mforma_pg = 1
                                mtp_venda = 'AV'
                                modo_pg := 0
                                DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                                setcor(10)
                                @ lcia+8,ccia+20 PROMPT '1> Dinheiro'
                                @ lcia+8,ccia+34 PROMPT '2> Cheque'
                                SET INTEN ON
                                MENU TO modo_pg
                                setcor(1)
                                IF modo_pg = 1
                                        mtipo_pg := 'DN'
                                        mdinheiro := '*'
                                ELSEIF modo_pg = 2
                                        mtipo_pg := 'CH'
                                        mcheque := '*'
                                        IF ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                                UNLOCK
                                                LOOP
                                        ELSEIF mnum_os > 0 .AND. ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                                UNLOCK
                                                LOOP
                                        ELSEIF ! limite(mcod_cli,mt_pedido)
                                                UNLOCK
                                                LOOP
                                        ENDIF
                                ENDIF
                        CASE mforma_pg = 2
                                IF ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                        UNLOCK
                                        LOOP
                                ELSEIF mnum_os > 0 .AND. ! spc(mcod_cli,mt_pedido,,'*',mlib_spc)
                                        UNLOCK
                                        LOOP
                                ELSEIF ! limite(mcod_cli,mt_pedido)
                                        UNLOCK
                                        LOOP
                                ENDIF
                                mtp_venda = 'AP'
                                modo_pg := 0
                                DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pag.:')
                                setcor(10)
                                @ lcia+8,ccia+15 PROMPT '1> Cheque'
                                @ lcia+8,ccia+25 PROMPT '2> Cartao'
                                @ lcia+8,ccia+35 PROMPT '3> Duplicata'
                                @ lcia+8,ccia+48 PROMPT '4> Financiamento'
                                SET INTEN ON
                                MENU TO modo_pg
                                setcor(1)
                                DO CASE
                                        CASE modo_pg = 2
                                                mtipo_pg := 'CT'
                                                mcond_veze := '01 '
                                                mcond_int := ' '
                                                mcartao := '*'
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Condicoes de Pagamento: A PRAZO')
                                                DEVPOS(lcia+10,ccia+1);DEVOUT('Quatidade de vezes:')
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                READ
                                                IF m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        DBUNLOCK();LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                        @ lcia+11,ccia+21 GET mvlr_ent PICT '99,999.99' VALID IF(EMPTY(mvlr_ent),.F.,.T.)
                                                        READ
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,2,2)) > 0
                                                        m_dia[1]:=IF(EMPTY(m_dia[1]),VAL(SUBSTR(cli->prazo_pag,1,2)),m_dia[1])
                                                        m_dia[2]:=IF(EMPTY(m_dia[2]),VAL(SUBSTR(cli->prazo_pag,3,2)),m_dia[2])
                                                        m_dia[3]:=IF(EMPTY(m_dia[3]),VAL(SUBSTR(cli->prazo_pag,5,2)),m_dia[3])
                                                        DEVPOS(lcia+10,ccia+25);DEVOUT('Para os Dias:')
                                                        @ lcia+10,ccia+39 GET m_dia[1] PICT '999' VALID ! EMPTY(m_dia[1])
                                                        @ lcia+10,ccia+43 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                                        @ lcia+10,ccia+47 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                                        @ lcia+10,ccia+51 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                                        @ lcia+10,ccia+55 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                                        @ lcia+10,ccia+59 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                                        @ lcia+10,ccia+63 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                                        @ lcia+11,ccia+39 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                                        @ lcia+11,ccia+43 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                                        @ lcia+11,ccia+47 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                                        @ lcia+11,ccia+51 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                                        @ lcia+11,ccia+55 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                                        @ lcia+11,ccia+59 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                                        @ lcia+11,ccia+63 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                                        @ lcia+12,ccia+39 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                                        READ
                                                ENDIF
                                        CASE modo_pg = 4
                                                mtipo_pg := 'FI'
                                                mfin := '*'
                                                mtipo_fin := SPACE(3)
                                                mcobra_fin := SPACE(1)
                                                mvalor_ent := maliq_fin := ;
                                                mcod_fin := mtaxa_fin := ;
                                                mvalor_aux := mvalor_pres := ;
                                                mvalor_fin := mtaxa_fin := 0
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Cod.do Financiamento..:')
                                                DEVPOS(lcia+10,ccia+1);devout('Tipo do Financiamento:')
                                                DEVPOS(lcia+10,ccia+32);DEVOUT('Aliquota:')
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$.....:')
                                                DEVPOS(lcia+12,ccia+1);DEVOUT('Valor das prestacoes.:')
                                                DEVPOS(lcia+12,ccia+39);DEVOUT('Taxa R$:')
                                                @ lcia+9,ccia+25 GET mcod_fin PICT '999' VALID ver_finan(mcod_fin,lcia+9,ccia+29)
                                                @ lcia+10,ccia+25 GET mtipo_fin PICT '@R 9+99' VALID IF(LEN(ALLTRIM(mtipo_fin))<3,.F.,.T.) .AND. ver_aliq(mcod_fin,mtipo_fin)
                                                READ
                                                mcond_veze := mtipo_fin
                                                mcond_int  := '30'
                                                setcor(3)
                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(maliq_fin,'99.999999')
                                                setcor(1)
                                                IF maliq_fin > 0
                                                        mvalor_pres := iat((mt_pedido + mtaxa_fin) * maliq_fin,2) + mtaxa_adm
                                                        IF VAL(SUBSTR(mtipo_fin,1,1)) > 0
                                                                mvalor_ent := mvalor_pres
                                                        ENDIF
                                                        @ lcia+11,ccia+28 GET mvalor_ent PICT '999,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1'              //.AND. men_get(lcia+12,ccia+21,'Valor da Entrada do Fiananciamento')  VALID lim_get()
                                                        READ
                                                        IF mvalor_ent <> mvalor_pres
                                                                mvalor_pres := mvalor_fin := ;
                                                                mvalor_aux := 0
                                                                mtipo_aux := '0'+SUBSTR(mtipo_fin,2,2)
                                                                IF ! ver_aliq(mcod_fin,mtipo_aux)
                                                                        LOOP
                                                                ENDIF
                                                                setcor(3)
                                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(maliq_fin,'99.999999')
                                                                setcor(1)
                                                                mvalor_aux := (mt_pedido + mtaxa_fin) - mvalor_ent
                                                                mvalor_pres := iat(mvalor_aux * maliq_fin,2) + mtaxa_adm
                                                                mvalor_fin := (VAL(SUBSTR(mtipo_fin,2,2)) * mvalor_pres) + mvalor_ent
                                                        ELSE
*                                                               mvalor_aux := mt_pedido - mvalor_ent
*                                                               mvalor_pres := iat((mvalor_aux + mtaxa_fin) * maliq_fin,2)
                                                                mvalor_fin := (VAL(SUBSTR(mtipo_fin,1,1))+VAL(SUBSTR(mtipo_fin,2,2))) * mvalor_pres
                                                        ENDIF
                                                ELSE
                                                        @ lcia+11,ccia+28 GET mvalor_ent PICT '999,999.99' WHEN SUBSTR(mtipo_fin,1,1) = '1'              //.AND. men_get(lcia+12,ccia+21,'Valor da Entrada do Fiananciamento')  VALID lim_get()
                                                        @ lcia+12,ccia+28 GET mvalor_pres PICT '999,999.99'
                                                        READ
                                                        mvalor_fin := (VAL(SUBSTR(mtipo_fin,2,2)) * mvalor_pres) + mvalor_ent
                                                        IF mvalor_fin < mt_pedido
                                                                atencao('O Valor do financiamento estar menor que o Valor do Pedido')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF mcobra_fin = 'S'
                                                        mjuros := (mvalor_fin/mt_pedido)
                                                        mt_pedido := mvalor_fin
                                                ELSE
                                                        mjuros := 1
                                                        mt_pedido := mvalor_fin
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lcia+10,ccia+42);DEVOUTPICT(mjuros,'99.999999')
                                                setcor(1)
                                                setcor(3)
                                                DEVPOS(lcia+12,ccia+25);DEVOUT(SUBSTR(mtipo_fin,2,2)+'X')
                                                DEVPOS(lcia+12,ccia+28);DEVOUTPICT(mvalor_pres,'999,999.99')
                                                DEVPOS(lcia+12,ccia+48);DEVOUTPICT(mtaxa_fin,'99,999.99')
                                                DEVPOS(lcia+12,COL()+1);DEVOUTPICT(mtaxa_adm,'99,999.99')
                                                setcor(1)
                                        CASE modo_pg = 1  .OR. modo_pg = 3
                                                IF modo_pg = 1
                                                        mtipo_pg := 'CH'
                                                        mcheque := '*'
                                                ELSEIF modo_pg = 3
                                                        mtipo_pg := 'DU'
                                                        mdup := '*'
                                                        mcart_ban := ' '
                                                        IF ver_serie() = '141410'
                                                                mcart_ban := mensagem1('Tipo de Duplicata:','C','C,B',,,'*')
                                                        ENDIF
                                                ENDIF
                                                IF ! EMPTY(cli->dia1_ini) .OR. ! EMPTY(cli->dia2_ini)
                                                        IF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cli->dia1_ini) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cli->dia1_fim)
                                                                mcond_int := STRZERO(CTOD(cli->venc1_dup+SUBSTR(DTOC(mdata_sis),3)) - mdata_sis,2)
                                                                m_dia[1] := VAL(mcond_int)
                                                        ELSEIF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cli->dia2_ini) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cli->dia2_fim)
*                                                               mcond_int := STRZERO(CTOD(cli->venc2_dup+'/'+STRZERO(VAL(SUBSTR(DTOC(mdata_sis),4,2))+1,2)+'/'+IF(VAL(SUBSTR(DTOC(mdata_sis),7))=12,STRZERO(VAL(SUBSTR(DTOC(mdata_sis),7))+1,2),SUBSTR(DTOC(mdata_sis),7)))-mdata_sis,2)
                                                                mcond_int := STRZERO(CTOD(cli->venc2_dup+'/';
                                                                +STRZERO(IF(VAL(SUBSTR(DTOC(mdata_sis),4,2))<12,VAL(SUBSTR(DTOC(mdata_sis),4,2))+1,1),2);
                                                                +'/';
                                                                +IF(VAL(SUBSTR(DTOC(mdata_sis),4,2))=12,STRZERO(IF(VAL(SUBSTR(DTOC(mdata_sis),7))=99,00,VAL(SUBSTR(DTOC(mdata_sis),7))+1),2),SUBSTR(DTOC(mdata_sis),7)))-mdata_sis,2)
                                                                m_dia[1] := VAL(mcond_int)
                                                        ENDIF
                                                ENDIF
                                                DEVPOS(lcia+9,ccia+1);DEVOUT('Condicoes de Pagamento: A PRAZO')
                                                DEVPOS(lcia+10,ccia+1);DEVOUT('Quatidade de vezes:')
                                                DEVPOS(lcia+11,ccia+1);devout('Valor Entrada R$..:')
                                                IF ver_serie() = '141410'
                                                        @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.))
                                                ELSE
                                                        @ lcia+10,ccia+21 GET mcond_veze PICT '@@R 9-99' VALID IF(EMPTY(mcond_veze),.F.,IF(VAL(SUBSTR(mcond_veze,1,1))>1,.F.,.T.)) WHEN EMPTY(mcod_cond)
                                                ENDIF
                                                READ
                                                IF EMPTY(mcod_cond) .AND. m_dia[1] > m_set[1,49] .AND. ! aut_sen('Prazo Permitido '+TRANSFORM(m_set[1,49],'999')+' Solicitado '+STRZERO(m_dia[1],3)+' - Autorizacao:','LIB_PRZ',,mcod_cli)
                                                        DBUNLOCK();LOOP
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,1,1)) = 1
                                                        @ lcia+11,ccia+21 GET mvlr_ent PICT '99,999.99' VALID IF(EMPTY(mvlr_ent),.F.,.T.)
                                                        READ
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_veze,2,2)) > 0
                                                        m_dia[1]:=IF(EMPTY(m_dia[1]),VAL(SUBSTR(cli->prazo_pag,1,2)),m_dia[1])
                                                        m_dia[2]:=IF(EMPTY(m_dia[2]),VAL(SUBSTR(cli->prazo_pag,3,2)),m_dia[2])
                                                        m_dia[3]:=IF(EMPTY(m_dia[3]),VAL(SUBSTR(cli->prazo_pag,5,2)),m_dia[3])
                                                        DEVPOS(lcia+10,ccia+25);DEVOUT('Para os Dias:')
                                                        @ lcia+10,ccia+39 GET m_dia[1] PICT '999' VALID ! EMPTY(m_dia[1]) .AND. vencim((mdata_sis+m_dia[1]))
                                                        @ lcia+10,ccia+43 GET m_dia[2] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 2 VALID ! EMPTY(m_dia[2])
                                                        @ lcia+10,ccia+47 GET m_dia[3] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 3 VALID ! EMPTY(m_dia[3])
                                                        @ lcia+10,ccia+51 GET m_dia[4] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 4 VALID ! EMPTY(m_dia[4])
                                                        @ lcia+10,ccia+55 GET m_dia[5] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 5 VALID ! EMPTY(m_dia[5])
                                                        @ lcia+10,ccia+59 GET m_dia[6] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 6 VALID ! EMPTY(m_dia[6])
                                                        @ lcia+10,ccia+63 GET m_dia[7] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 7 VALID ! EMPTY(m_dia[7])
                                                        @ lcia+11,ccia+39 GET m_dia[8] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 8 VALID ! EMPTY(m_dia[8])
                                                        @ lcia+11,ccia+43 GET m_dia[9] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 9 VALID ! EMPTY(m_dia[9])
                                                        @ lcia+11,ccia+47 GET m_dia[10] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 10 VALID ! EMPTY(m_dia[10])
                                                        @ lcia+11,ccia+51 GET m_dia[11] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 11 VALID ! EMPTY(m_dia[11])
                                                        @ lcia+11,ccia+55 GET m_dia[12] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 12 VALID ! EMPTY(m_dia[12])
                                                        @ lcia+11,ccia+59 GET m_dia[13] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 13 VALID ! EMPTY(m_dia[13])
                                                        @ lcia+11,ccia+63 GET m_dia[14] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 14 VALID ! EMPTY(m_dia[14])
                                                        @ lcia+12,ccia+39 GET m_dia[15] PICT '999' WHEN VAL(SUBSTR(mcond_veze,2,2)) >= 15 VALID ! EMPTY(m_dia[15])
                                                        READ
                                                ENDIF
                                ENDCASE
                                IF LASTKEY() = 27;LOOP;ENDIF
                ENDCASE
                IF LASTKEY() = 27;LOOP;ENDIF
                IF (mtp_venda = 'AV' .OR. m_set[1,35] = 'S' .OR. malteracao = 1) .AND. m_set[1,105] <> 'S' .AND. mdesc_alt = 0 .AND. m_set[1,125] <> 'S'    // .AND. mtipo_pg <> 'FI'
                        mop_desc := ' '
			DEVPOS(lcia+15,ccia+1);DEVOUT('Desconto [1] (%)  [2] (R$):')
			@ lcia+15,COL()+1 GET mop_desc VALID mop_desc $ '1,2, '
                        READ
                        
			IF mop_desc = '1'
                                SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+10);DEVOUT('[1] (%)')
                                setcor(1)
                                @ lcia+15,ccia+29 GET mdesc PICT ALLTRIM(m_set[1,98])
                                READ
                                IF mdesc > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mdesc := mdesc/100
                                mvlr_desc := mt_pedido * mdesc
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSEIF mop_desc = '2'
				mdesc := 0	
				SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+19);DEVOUT('[2] (R$)')
                                setcor(1)
                                @ lcia+15,ccia+29 GET mdesc PICT ALLTRIM(m_set[1,98])
                                READ
                                mdesc := (mdesc/mt_pedido)
                                IF mdesc*100 > m_set[1,33] .AND. ! aut_sen('Desconto a maior.. senha de autorizacao:','LIB_DESC',,mcod_cli)
                                        LOOP
                                ENDIF
                                mvlr_desc := mt_pedido * mdesc
                                mt_pedido := mt_pedido - (mt_pedido * mdesc)
                        ELSE
                                SETCOLOR('i*')
                                DEVPOS(lcia+15,ccia+29);DEVOUT('Nenhum Desconto')
                                setcor(1)
                                mdesc := 0
                        ENDIF
                        setcor(3)
                        DEVPOS(lcia+18,ccia+01);DEVOUT('Desconto R$:')
                        setcor(1)
                        DEVPOS(lcia+18,ccia+14);DEVOUT(TRANSFORM(mvlr_desc,'999,999,999.99'))
                        setcor(3)
                ENDIF
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ELSE
                IF ! EMPTY(mprz)
                        mtp_venda = 'AP'
                        modo_pg := mforma_pg := 2
                        DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                        setcor(3)
                        DEVPOS(lcia+7,ccia+22);DEVOUT('2> Aprazo')
                        setcor(1)
                        mtipo_pg := 'DU'
                        mdup := '*'
                        m_dia[1] := mprz
                ELSE
                        mtp_venda = 'AV'
                        modo_pg := mforma_pg := 1
                        DEVPOS(lcia+8,ccia+1);DEVOUT('Modo de Pagamento:')
                        setcor(3)
                        DEVPOS(lcia+7,ccia+22);DEVOUT('1> Avista')
                        setcor(1)
                        mtipo_pg := 'DN'
                        mdinheiro := '*'
                ENDIF
        ENDIF           // autocaixa
        setcor(3)
        @ lcia+17,ccia+1 TO lcia+17,cbaa-1
        DEVPOS(lcia+18,ccia+30);DEVOUT('TOTAL PEDIDO:')
        setcor(1)
        DEVPOS(lcia+18,ccia+44);DEVOUT(TRANSFORM(mt_pedido,'999,999,999.99'))
        ************* DATA DA ENTREGA *****************
        WHILE .T.
                @ lcia+16,ccia+29 GET mpd_entrega WHEN m_set[1,92] <> 'N'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF (! EMPTY(m_set[1,162]) .OR. ! EMPTY(m_set[1,163]) .OR. ! EMPTY(m_set[1,164])) .AND. ! EMPTY(mpd_entrega)
                        mped_exp:={}
                        sr_getconnection():exec("SELECT pnum_ped,sum(pquantd*pvlr_fat),sum(pquantd) FROM sacped_s WHERE sr_deleted = ' ' AND pd_entrega = "+sr_cdbvalue(mpd_entrega)+" AND (ppag = '*' OR ppag IS NULL) GROUP BY pnum_ped",,.t.,@mped_exp)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF ! EMPTY(m_set[1,162])
                                IF LEN(mped_exp) >= m_set[1,162]
                                        atencao('Para esse dia ja estar completo as Entregas favor verificar outro dia...')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                IF ! EMPTY(mpd_entrega)
                        DEVPOS(lcia+16,ccia+41);DEVOUT(' - '+ver_dia(mpd_entrega))
                ENDIF
                EXIT
        ENDDO
        *********************************************************
/*
        IF ali='orcam' .AND. ver_serie() = '141235'
                mopcao := op_simnao('N','Deseja colocar este ORCAMENTO para PRODUCAO: ')
                IF mopcao = 'S';mppag:='P';ENDIF
        ENDIF
*/
        mopcao := op_simnao('S','Confirma Fechamento do Pedido [S/n]:')
        IF mopcao = 'N'
                SET KEY -8 TO
                LOOP
        ELSEIF mopcao = 'S'
                IF mjuros = 0;mjuros := 1;ENDIF
                IF ver_ven(mcod_ven)
                        mnome_ven := sen->snome
                ENDIF
                IF mjuros > 1 .OR. ! EMPTY(mdesc)
                        mensagem('Atualizando e Recalculando o PEDIDO....')
                        i := 0
                        cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        FOR i = 1 TO LEN(cons_ped)
                                mdesc_aux := mdesc
                                IF ! EMPTY(cons_ped[i,52])
                                	LOOP
                                ENDIF

                                IF cons_ped[i,17] < cons_ped[i,20]
                                        cons_ped[i,18] := cons_ped[i,20] - (cons_ped[i,20] * (mdesc_aux + (cons_ped[i,39]/100)))
                                ELSE
                                        cons_ped[i,18] := cons_ped[i,18] - (cons_ped[i,18] * mdesc_aux)
                                ENDIF
                                ccomm := "UPDATE sacped_s SET pcgc = "+sr_cdbvalue(mcgc)
                                ccomm := ccomm + ",pcpf ="+sr_cdbvalue(mcpf)
                                ccomm := ccomm + ",pplaca = "+sr_cdbvalue(mplaca)
                                ccomm := ccomm + ",pcarro = "+sr_cdbvalue(mcarro)
                                ccomm := ccomm + ",pmodelo = "+sr_cdbvalue(mmodelo)
                                ccomm := ccomm + ",pkm = "+sr_cdbvalue(mkm)
                                ccomm := ccomm + ",pcod_cli = "+sr_cdbvalue(mcod_cli)
                                ccomm := ccomm + ",pcomi_oper ="+sr_cdbvalue(mcom_oper)
                                ccomm := ccomm + ",pcod_fin = "+sr_cdbvalue(STRZERO(mcod_fin,3))
                                ccomm := ccomm + ",pcod_tab = "+sr_cdbvalue(STRZERO(mcod_cond,3))
                                ccomm := ccomm + ",pvlr_pres = "+sr_cdbvalue(mvalor_pres)
                                ccomm := ccomm + ",pcond_veze = "+sr_cdbvalue(mcond_veze)
                                ccomm := ccomm + ",pcond_inte = "+sr_cdbvalue(IF(! EMPTY(mcond_int),mtipo_pg+STRZERO(VAL(mcond_int),3),mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))
                                ccomm := ccomm + ",ptp_vend = "+sr_cdbvalue(mtp_venda)
                                ccomm := ccomm + ",pvlr_ent = "+sr_cdbvalue(mvlr_ent)
                                ccomm := ccomm + ",pstat_item = "+sr_cdbvalue(mtelemark)
                                ccomm := ccomm + ",pcod_vend = "+sr_cdbvalue(mcod_ven)
                                ccomm := ccomm + ",pvendedor = "+sr_cdbvalue(mnome_ven)
                                ccomm := ccomm + ",pdesc = "+sr_cdbvalue(mdesc_aux * 100)
                                ccomm := ccomm + ",pvlr_fat = "+sr_cdbvalue(cons_ped[i,18]*mjuros)
                                ccomm := ccomm + ",pobs1 = "+sr_cdbvalue(mobs1)
                                ccomm := ccomm + ",pobs2 = "+sr_cdbvalue(mobs2)
                                ccomm := ccomm + ",pobs3 = "+sr_cdbvalue(mobs3)
                                ccomm := ccomm + ",pobs4 = "+sr_cdbvalue(mobs4)
                                ccomm := ccomm + ",pproducao = "+sr_cdbvalue(mproducao)
                                ccomm := ccomm + ",pcod_tran = "+sr_cdbvalue(mcod_tran)
                                ccomm := ccomm + ",pd_entrega = "+IF(! EMPTY(mpd_entrega),sr_cdbvalue(mpd_entrega),'NULL')

/*
                                IF ! EMPTY(mpd_entrega)
                                        ccomm := ccomm + ",pd_entrega = "+sr_cdbvalue(mpd_entrega)
                                ENDIF
*/
                                ccomm := ccomm + ",pfecha = 'F' WHERE SR_RECNO = "+sr_cdbvalue(cons_ped[i,111])
                                //ccomm := ccomm + ",pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_ped[i,6])
                                sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                ELSE
                        mensagem('Atualizando PEDIDO....')
                        ccomm := "UPDATE sacped_s SET pcgc = "+sr_cdbvalue(mcgc)
                        ccomm := ccomm + ",pcpf = "+sr_cdbvalue(mcpf)
                        ccomm := ccomm + ",pplaca = "+sr_cdbvalue(mplaca)
                        ccomm := ccomm + ",pcarro = "+sr_cdbvalue(mcarro)
                        ccomm := ccomm + ",pmodelo = "+sr_cdbvalue(mmodelo)
                        ccomm := ccomm + ",pkm = "+sr_cdbvalue(mkm)
                        ccomm := ccomm + ",pcod_cli = "+sr_cdbvalue(mcod_cli)
                        ccomm := ccomm + ",pcomi_oper = "+sr_cdbvalue(mcom_oper)
                        ccomm := ccomm + ",pcod_fin = "+sr_cdbvalue(STRZERO(mcod_fin,3))
                        ccomm := ccomm + ",pcod_tab = "+sr_cdbvalue(STRZERO(mcod_cond,3))
                        ccomm := ccomm + ",pvlr_pres = "+sr_cdbvalue(mvalor_pres)
                        ccomm := ccomm + ",pcond_veze = "+sr_cdbvalue(mcond_veze)
                        ccomm := ccomm + ",pcond_inte = "+sr_cdbvalue(IF(! EMPTY(mcond_int),mtipo_pg+STRZERO(VAL(mcond_int),3),mtipo_pg+STRZERO(m_dia[1],3)+STRZERO(m_dia[2],3)+STRZERO(m_dia[3],3)+STRZERO(m_dia[4],3)+STRZERO(m_dia[5],3)+STRZERO(m_dia[6],3)+STRZERO(m_dia[7],3)+STRZERO(m_dia[8],3)+STRZERO(m_dia[9],3)+STRZERO(m_dia[10],3)+STRZERO(m_dia[11],3)+STRZERO(m_dia[12],3)+STRZERO(m_dia[13],3)+STRZERO(m_dia[14],3)+STRZERO(m_dia[15],3)))
                        ccomm := ccomm + ",ptp_vend = "+sr_cdbvalue(mtp_venda)
                        ccomm := ccomm + ",pvlr_ent = "+sr_cdbvalue(mvlr_ent)
                        ccomm := ccomm + ",pstat_item = "+sr_cdbvalue(mtelemark)
                        ccomm := ccomm + ",pcod_vend = "+sr_cdbvalue(mcod_ven)
                        ccomm := ccomm + ",pvendedor = "+sr_cdbvalue(mnome_ven)
                        ccomm := ccomm + ",pobs1 = "+sr_cdbvalue(mobs1)
                        ccomm := ccomm + ",pobs2 = "+sr_cdbvalue(mobs2)
                        ccomm := ccomm + ",pobs3 = "+sr_cdbvalue(mobs3)
                        ccomm := ccomm + ",pobs4 = "+sr_cdbvalue(mobs4)
                        ccomm := ccomm + ",pproducao = "+sr_cdbvalue(mproducao)
                        ccomm := ccomm + ",pcod_tran = "+sr_cdbvalue(mcod_tran)
                        IF ! EMPTY(mpd_entrega)
                                        ccomm := ccomm + ",pd_entrega = "+sr_cdbvalue(mpd_entrega)
                        ENDIF

                        //ccomm := ccomm + ",pd_entrega = "+IF(! EMPTY(mpd_entrega),sr_cdbvalue(mpd_entrega),'NULL')
                        //ccomm := ccomm + ",pfecha = 'F' WHERE SR_RECNO = "+sr_cdbvalue(cons_ped[i,102])
                        ccomm := ccomm + ",pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF

                sr_getconnection():exec("UPDATE sacped_s SET pfecha = 'F' WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)

                mensagem('Atualizando o CLIENTE....')
                //cComm  := "UPDATE saccli SET ult_orc="+sr_cdbvalue(mdata_sis)+" WHERE  cod_cli = "+sr_cdbvalue(mcod_cli)
                //sr_getconnection():exec(ccomm,,.f.)
                IF ! EMPTY(mnum_os)
                       sr_getconnection():exec("UPDATE sacoss SET pag = 'P',baixa="+sr_cdbvalue(mdata_sis)+",num_ped="+sr_cdbvalue(STRZERO(mnum_ped,6))+" WHERE  sacoss.num_os = "+sr_cdbvalue(STRZERO(mnum_os,6)),,.f.)
                ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                mensagem('Impressao do PEDIDO....')

                mcont_item := mtot_itens := 0
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                mcondicao := cons_ped[1,43]
                IF VAL(SUBSTR(mcond_veze,2,2)) = 1
                        mprazo := SUBSTR(cons_ped[1,44],3,3)
                ELSE
                        mprazo := STRZERO(m_dia[1],3)
                ENDIF
                mdata := cons_ped[1,4]
                mhora := cons_ped[1,47]
                m_matriz:={}
                m_codigo:={}
                m_Cbarra:={}
                m_alt:={}
                SET KEY 28 TO menu_cons()
                IF ver_serie() = '141302' .AND. SUBSTR(mvia,1,6) = '2a.via'
                        boleto()
                        mflag := 0
                ELSE
                        //IF m_set[1,152] = 'S' .AND. ((m_indiv[1,9] <> 'B' .OR. m_indiv[1,14] <> 'B') .AND. (m_indiv[1,9] <> 'L' .OR. m_indiv[1,14] <> 'L'))
                        IF (ali = 'orcam' .AND. m_indiv[1,14] = 'V') .OR. m_indiv[1,9] = 'V'
                                sacvaque()
                                mflag := 0
                        ELSEIF ((m_indiv[1,9] <> 'B' .OR. m_indiv[1,14] <> 'B') .AND. (m_indiv[1,9] <> 'L' .OR. m_indiv[1,14] <> 'L'))
                                IF ! imp_arq('PD'+STRZERO(mnum_ped,6)+'.REL','T')
                                        CLEAR GETS
                                        **********
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                        mt_pedido := mflag := 0
                                        SET KEY -8 TO
                                        WHILE LASTKEY() = 27
                                                mensagem('Tecle <ENTER> p/Continuar...')
                                                INKEY(0)
                                        ENDDO
                                        IF ((m_set[1,83] = 'S' .OR. m_set[1,83] = 'I') .AND. sovenda = 1 .AND. ali = 'ped_s' .AND. msit_tip <> 'VENDA') .OR. m_indiv[1,26] = 'S'
                                                SET KEY -9 TO
                                                sac30(mnum_ped)
                                                SET KEY -9 TO fecha_pd          // neste mesmo PRG. <F10>Tecla
                                                SET KEY -8 TO sac130()           // inclusao de clientes
                                        ENDIF
                                        EXIT
                                ENDIF
                        ELSEIF (m_indiv[1,9] <> 'B' .AND. m_indiv[1,14] <> 'B') .AND. (m_indiv[1,9] <> 'L'  .AND. m_indiv[1,14] <> 'L')
                                mensagem('Aguarde um momento imprimido pedido')
                                SET DEVICE TO PRINT
                                SET PRINT TO (mporta_imp)
                        ENDIF
                        IF (ali = 'orcam' .AND. m_indiv[1,14] = 'G') .OR. m_indiv[1,9] = 'G'
                                ped_jw()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'B2') .OR. m_indiv[1,9] = 'B2'
                                boleto2()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'B') .OR. m_indiv[1,9] = 'B'
                                boleto()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'L') .OR. m_indiv[1,9] = 'L'
                                boleto('*')
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'T') .OR. m_indiv[1,9] = 'T'
                                bole_term()
                                mflag := 0
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'F') .OR. m_indiv[1,9] = 'F'
                                formula(,mavaria)
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'F1') .OR. m_indiv[1,9] = 'F1'
                                formula(,mavaria)
                        ELSEIF (ali = 'orcam' .AND. m_indiv[1,14] = 'P') .OR. m_indiv[1,9] = 'P'
                                procomp()
                        ENDIF
                ENDIF
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                IF ! EMPTY(mnum_os) .AND. m_set[1,42] = 'S'
                        mopcao := op_simnao('S','Deseja Imprimir o RECIBO da O.S.:')
                        IF mopcao = 'S'
                                rec_os(mcod_cli,mnome_cli,mnum_ped,mnum_os,mmodelo,mplaca,mt_pedido)
                        ENDIF
                ENDIF
                IF ver_serie() = '141473'
                        mopcao := op_simnao('S','Deseja Imprimir o RECIBO DE ENTREGA:')
                        IF mopcao = 'S'
                                sacexp1()
                                //sacrec5('*')
                        ENDIF
                ENDIF
                mobs1 := mobs2 := mobs3 := mobs4 := SPACE(39)
		// CAMINHO DO ARQUIVO DE PEDIDO BM


                m_matriz := {}
                m_codigo := {}
                m_alt := {}
                mt_pedido := 0
                CLEAR GETS
                **********
                SELE('merc');ORDSETFOCUS(1)
                **********
                IF ((m_set[1,83] = 'S' .OR. m_set[1,83] = 'I') .AND. sovenda = 1 .AND. ali = 'ped_s' .AND. msit_tip <> 'VENDA') .OR. m_indiv[1,26] = 'S'
                        SET KEY -9 TO
                        IF LASTKEY() = 27
                                mensagem('Tecle <ENTER> para continuar...')
                                INKEY(0)
                        ENDIF
                        sac30(mnum_ped)
	                cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
			WHILE EMPTY(cons_ped[1,49])
                        	IF ! aut_sen('SENHA de Liberacao para Sair o Recebimento','Sair_REC',10,'')
	                                mensagem('Tecle <ENTER> para continuar...')
        	                        INKEY(0)
					sac30(mnum_ped)
				ELSE
					EXIT
                        	ENDIF
                        ENDDO
                        SET KEY -9 TO fecha_pd          // neste mesmo PRG. <F10>Tecla
                        SET KEY -8 TO sac130()           // inclusao de clientes
                ENDIF
                mflag := 0
                CLEAR GETS
                SET KEY -8 TO
                conf_impressao('PD'+STRZERO(mnum_ped,6)+'.REL')
                IF mimp_tipo = 2
                        lertexto('PD'+STRZERO(mnum_ped,6)+'.REL')
                        atencao('Pressione <ENTER> p/continuar')
                        //INKEY(0)
                ENDIF
                m_matriz := {}
                m_codigo := {}
                m_alt := {}
		i := mnum_ped := 0
                FOR i = 1 TO 15
                        m_dia[i] := m_vlr[i] := 0
                NEXT
                EXIT
        ENDIF
ENDDO
SET KEY -8 TO
*mflag := 0
*RELEASE ALL
SET KEY 28 TO menu_cons()
wvw_lclosewindow()
RETURN NIL

