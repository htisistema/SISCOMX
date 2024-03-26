#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
#INCLUDE "COMMCTRL.CH"
MEMVAR getlist
*******************************
* RECEBIMENTO DE TP's
*******************************
FUNCTION sac30(mnum)
********************
LOCAL MPRG:='SAC30',mmodulo:='RECEBIMENTOS DO CAIXA',;
      opcao,lci:=0,cci:=0,lba,cba,i,msele,morde,point,;
      mopcao,mtela,f,mtipo_comp,mtipo_pag,;
      mtot_icmf,msaldo_atu,mtot_comissao,mperc_comissao,mvlr_tab,;
      li:=0,ci:=0,lb,cb,menvelope,mproducao,mprz_med:=0,mdia_med:=0,;
      mn_dup,mn_trans,mvencimento,mt_pag,;
      mn_cupom,mvalor,mn_fin,mtot_ipi,mbox_rece,mcorrente,mcpfcnpj,;
      m_parcela:={},mqtd_parc:=0,m_intevalo:={},mtraco := REPLI('=',60),mtela_aut,;
      mvl_vend,mtot_icm,mnome,mextenso,mlinha,lin,mop_ipi:=' ',mop_desc:=' ',;
      mdata_30:=CTOD('  /  /  '),mintevalo:=0,mliv_por:='   ',mvlr_cred:=0,mtelemark:=' ',;
      mcom_sem:=' ',mtipo,mnumero_doc:= ' ',mnum_dup:=' ',mdup_num:=' ',mmont:=' ',mmont1:=' ',;
      mc_mont:=0,mc_mont1:=0,mcomis:=0,mvlr_credcheq:=0,mcred_cheq:=' ',m_credito:={},;
      mcredito_aux:=0,achou:=0,y:=0,cons_tab:={},mbaixar:='N',;
      nerr,npos,oSql,cComm, apCode,m_param:={},mflag := ' '

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm,memp_resa,mend_firm,mfone_firm,;
       mcid_firm,minsc_firm

PRIVATE mlin,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_recebe:={},;
        m_codigo:={},m_desc:={},mdesconto,tela,mreceb,mcom_ven,mcom_ap,;
        mcod_cli,mcliente,mnome_vend,mperc,mcgc,mcpf,mcod_vend,mdocumento,;
        mnum_ped,minsc,mcond_vezes,mcond_intev,mtp_vend,mtot_desc,mcod_oper,mlib:=' ',;
        mtot_verif:= 0,m_alt:={},mdiferenca,mtot_nota,mqtd_doc:=0,mqtd_dias:=0,;
        mdesc_cx:=0,mdesc_perc:=0,mcom_oper,mfornece:='',;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_emp:='   ',mcredito,mn_cred:=SPACE(8),mn_pix:=SPACE(8),;
        ali:='ped_s',mperc_com1,;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mdata_ped,mresta,mvlr_pg,mduplicata,;
        mvalor_dup,mtip_cli,mobs,mdia_venc:=0,mdata_v,mcod_cart,cons_ped:={},aret:={},mtipo_imp,mporta_imp,mquantd,;
        magencia,mc_c,mn_banco,mn_cheque,mquantd:=1,mvia := '1a.via',mdup:='',mtroco:=0,nBota,mnovo_ped:={},email_cli:='',;
        m_dia[15],m_vlr[15],mcheque:=' ',mfin:= ' ',mdup := ' ',mcartao := ' ',mdinheiro,mtipo_pg,;
        mid_cb,m_conteudo,mposicao,cons_cli:={},mtp_venda:=' '

IF ! ver_nivel(mprg,mmodulo,'13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
mreceb := 'R'
lba := 29
cba := 75
lb := 31
cb := 72
setcor(1)
IF m_set[1,61] = 'S'
        IF ! cx_fechado()
                RETURN NIL
        ENDIF
ENDIF
op_tela(00,00,47,120,memp_resa+SPACE(50)+'RECEBIMENTO DO CAIXA',,1)
WVW_TBCreate( , .T.,TBSTYLE_LIST            , 0,3,3)
WVW_TBAddButton( ,2900,' ','BAIXA DOCUMENTO',1)
//WVW_TBAddButton( ,1901,' ','Resumo Produto',1)
MenuId:=WVW_GETLASTMENUEVENT()
ver_ven(cod_operado)
mnome_vend := sen->snome
mlib := ' '
SET KEY 281 TO alt_caixa()
mdeb_cred := ' '


m_conteudo:={'1 Dinheiro','2 Cheque','3 Duplicata','4 Financeira','5 Cartao','6 Transferenca','7 Credito','8 PIX ','9 Dup.+15'}
mposicao:={0,0,3,4}
WVW_CBSetFont( , 'lucida console', 20, 12,2,2)
mid_cb := WVW_CBCreate( , 18, 02,20, m_conteudo,,20,,0,mposicao )
//WVW_CBAddString( , mid_cb, 'teste')
//WVW_CBEnable( , mid_cb, .F. )
*/
//WVW_CBFindString( , mid_cb, '3 Duplicata')
//mtipo_pg := WVW_CBGetIndex( , mid_cb)
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,50,120)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        WVW_CBEnable( , mid_cb, .F. )

        IF mnum <> NIL
                mnum_ped := mnum
        ELSE
                mnum_ped := 0
        ENDIF
        m_codigo :={}
        m_desc   :={}
        SET INTEN ON
        mcom_ven := mcom_ap := mtot_nota := mdesconto := mperc := mcod_cli :=;
        mvl_vend := mcod_vend := mcod_oper := mperc_comissao := mtot_comissao := ;
        mprazo_cart := mdesc_cart := mtot_icm := mdinheiro := mcod_cart := ;
        mvalor := mtot_desc := mtot_verif := mtot_ipi := mdiferenca := ;
        f := mqtd_doc := mqtd_dias := mperc_com1 := mvlr_tab := mvlr_credcheq := 0
        mlib := mtipo_pag := mt_pag := mtelemark := mcom_sem := mcred_cheq:= SPACE(1)
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mn_dup := mn_trans := mn_cupom := mn_cred  := mn_pix := SPACE(8)
        menvelope := SPACE(10)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        mcliente = SPACE(40)
        opcao = 'S'
        mtipo_comp := 'AV'
        mvencimento := CTOD(' /  /  ')
        i = 1
	m_credito :={}
        m_recebe  :={}
        m_parcela :={}
        m_intevalo:={}
        mnovo_ped :={}
        mensagem('Preencha os Campos - <F1> Ajuda - <ESC> p/Retornar - <-1> Baixar Individual Documento')
        DEVPOS(li,ci+1);DEVOUT('No.Pedido: ')
        DEVPOS(li,ci+21);DEVOUT('Data:')
        DEVPOS(li,ci+39);DEVOUT('Emissao:')
        DEVPOS(li,ci+59);DEVOUT('Vendedor.:')
        DEVPOS(li+1,ci+1);DEVOUT('Cliente:')
        DEVPOS(li+1,ci+55);DEVOUT('CPF:')
        DEVPOS(li+2,ci+1);DEVOUT('CNPJ:')
        DEVPOS(li+2,ci+25);DEVOUT('Cond.Pag.:')
        DEVPOS(li+3,ci+1);DEVOUT('Observacao:')
        @ li+5,ci TO li+5,cb
        //DEVPOS(li+11,ci+1);DEVOUT('Total da COMPRA R$:')
        DEVPOS(li+11,ci+1);DEVOUT('TOTAL R$:')
        @ li+12,ci TO li+12,cb
        @ li+15,ci TO li+15,cb
        DEVPOS(li+16,ci+1);DEVOUT('Total RECEBIDO......R$:')
        DEVPOS(li+16,ci+40);DEVOUT('a RECEBER R$:')
        @ li+17,ci TO li+17,cb
        
        botao(li+1,ci+74,li+46,ci+120,,' P R O D U T O S   D O   P E D I D O')
        @ li+44,ci+74 to li+44,ci+120
        botao(42,01,46,72,,,'*')

        //WvW_PBSetFont( NIL, "lucida console", 12, 0,)
        //nBota := wvw_pbCreate(NIL,38,01,39,20,'[F7] Alterar Pedido',NIL,{||fecha_pd('1')})
        //WVW_PBEnable( NIL, nBota, .F. )

        IF ver_serie() = '141566' .OR. ver_serie() = '141567' .OR. ver_serie() = '141568'
                IF ! alt_senha('1')
                        SET KEY 281 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        setcor(1)
        @ li,ci+12 GET mnum_ped PICT '999999' WHEN mnum_ped = 0          // VALID lim_get()        //.AND. men_get(li+2,ci+12,'Informe o No.do PEDIDO que deseja fazer o recebimento ou <ENTER> p/No.ENVELOPE - <F1> Consulta pedidos PENDENTES - <ESC>p/Sair')
        READ
        IF MenuId=2900
        	con251('*')
                CLEAR GETS
		Menuid := 0
                LOOP
        ENDIF
        IF mnum_ped = -1
        	con251('*')
		LOOP
	ENDIF			
	IF LASTKEY() = 27
                IF mnum <> NIL
                        mopcao := op_simnao('S','Deseja Sair o RECEBIMENTO:')
                        IF mopcao = 'N'
                                LOOP
                        ENDIF
                ENDIF
                SET KEY 281 TO
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_ped:={}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+ " ORDER BY pnum_ped,pcod_merc",,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao ENCONTRADO !!!')
                LOOP
        ENDIF
        IF m_indiv[1,26] # 'T'
                IF EMPTY(cons_ped[1,100])
                        atencao('Este pedido nao foi FECHADO corretamente por isso nao pode ser Recebido, Favor entrar na alteracao de pedido para fechar corretamente...'+m_qp+'Operador: '+cons_ped[1,34]+m_qp+'Vendedor :'+cons_ped[1,32]+m_qp+'Data :'+DTOC(cons_ped[1,4]))
                        LOOP
                ENDIF
        ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este pedido foi CANCELADO do dia: '+DTOC(cons_ped[1,50])+' Hrs.: '+cons_ped[1,59]+' Por: '+cons_ped[1,60]+' Motivo:'+cons_ped[1,91])
                LOOP
        ELSEIF cons_ped[1,49] = '*'
                atencao('Este pedido ja foi PAGO no dia '+DTOC(cons_ped[1,50]))
                IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'C'
                        IF op_simnao('S','Deseja imprimir o Ticket p/Expedicao:') = 'S'
                                imp_emba(mnum_ped,'*')
                        ENDIF
                ENDIF
                SET KEY 281 TO
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF m_set[1,150] = 'S' .AND. EMPTY(cons_ped[1,65])
                atencao('Este PEDIDO nao foi LIBERADO')
                LOOP
        ENDIF
        IF cons_ped[1,4] > mdata_sis
                atencao('Este pedido nao pode ser Recebido com esta DATA !!!')
                LOOP
        ENDIF
        aret:={}
        sr_getconnection():exec("SELECT sr_recno,fornec,cliente, emissao FROM sacdupr WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0
                atencao('Ja existe Documentos com No.deste Pedido na conta do cliente:'+STR(aret[1,2],5)+'-'+aret[1,3]+' - Data: '+DTOC(aret[1,4]))
        ENDIF
/*
        IF verdupped(STRZERO(mnum_ped))
                atencao('Ja existe Documentos com No.deste Pedido na conta do cliente:'+dupr->fornec+'-'+dupr->cliente)
        ENDIF
*/
        IF m_set[1,78] = 'S'
                IF op_simnao('N','Recebimento Parcial:') = 'S'
                        altped_rec()
                ENDIF
        ENDIF
	mcom_sem := 'D'
        IF m_set[1,155] = 'S'
                mcom_sem := mensagem1('Tipo de Recebimento:','D',' ,D,C,A,X,T',,,,'A - Z ou 0 - 9')
        ENDIF
        point := RECNO()
        //limpa(15,02,20,78)
        mlib_por := cons_ped[1,65]
        mcod_emp := cons_ped[1,1]
        mdata_ped := cons_ped[1,4]
        mcgc := cons_ped[1,24]
        mcpf := cons_ped[1,25]
        mcod_vend := VAL(cons_ped[1,32])
        mcod_oper := VAL(cons_ped[1,34])
        mcom_oper := cons_ped[1,35]
        mnome_vend := cons_ped[1,33]
        mcond_vezes := cons_ped[1,43]
        mcond_intev := cons_ped[1,44]
        mtp_vend := cons_ped[1,45]
        mcod_cli := cons_ped[1,23]
        mproducao := cons_ped[1,93]
        mtelemark := cons_ped[1,77]
        mtp_venda := cons_ped[1,45]
        setcor(3)
        DEVPOS(li,ci+27);DEVOUT(mdata_sis)
        DEVPOS(li,ci+48);DEVOUT(cons_ped[1,4])
        DEVPOS(li,ci+69);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(li+2,ci+35);DEVOUT(SUBSTR(mcond_intev,1,2))
        setcor(1)
        IF mtp_vend = 'AP'
                setcor(3)
                DEVPOS(li+2,COL()+1);DEVOUTPICT(mcond_vezes,'@@R 9+99')
                DEVPOS(li+2,COL()+1);DEVOUT('p/')
                DEVPOS(li+2,col()+1);DEVOUT(SUBSTR(mcond_intev,3,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,3,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,6,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,6,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,9,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,9,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,12,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,12,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,15,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,15,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,18,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,18,3)))
                DEVPOS(li+2,col());DEVOUT(',')
                DEVPOS(li+2,col());DEVOUT(SUBSTR(mcond_intev,21,3))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,21,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,24,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,27,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,30,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,33,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,36,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,39,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,42,3)))
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,45,3)))
                setcor(1)
                i:= mprz_med := mdia_med := 0
                FOR i = 1 TO LEN(m_intevalo)
                        IF m_intevalo[i] > 0
                                mprz_med := mprz_med + m_intevalo[i]
                                mdia_med := mdia_med + 1
                                mintevalo := m_intevalo[i]
                        ENDIF
                NEXT
        ELSE
                setcor(3)
                DEVPOS(li+2,COL()+1);DEVOUT('A VISTA')
                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,3,3)))
                setcor(1)
        ENDIF
        ven(@mcod_vend)
        IF m_set[1,119] = 'S'
                @ li+1,ci+09 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,li+1,ci+15) WHEN m_indiv[1,26] <> 'T' .OR. m_set[1,17] = 'S'
                @ li+1,ci+59 GET mcpf PICT '@@R 999.999.999-99' VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN EMPTY(mcod_cli)         //.AND. mnum = NIL
                @ li+2,ci+06 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN EMPTY(mcod_cli) .AND. mcpf = SPACE(11)       //.AND. mnum = NIL
                READ
        	IF LASTKEY() = 27
                        IF mnum <> NIL
                                mopcao := op_simnao('S','Deseja Sair o RECEBIMENTO:')
                                IF mopcao = 'N'
                                        LOOP
                                ENDIF
                        ENDIF
                        SET KEY 281 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        //ver_cli(mcod_cli,li+1,ci+15)
        cons_cli:={}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Nao foi possivel encontrar este cliente...')
                LOOP
        ENDIF
	mcliente := cons_cli[1,3]
        setcor(3)
        DEVPOS(li+1,ci+09);DEVOUT(STR(mcod_cli,5))
        DEVPOS(li+1,ci+15);DEVOUT(mcliente)
        DEVPOS(li+1,ci+59);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(li+2,ci+06);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(li+3,ci+13);DEVOUT(cons_ped[1,86])
        setcor(1)
        IF cons_cli[1,41] = 'S'
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cons_cli[1,138]))
                LOOP
        ENDIF
        email_cli := cons_cli[1,27]
        F:= i:=mtot_comissao := 0
        FOR i = 1 TO LEN(cons_ped)
                mdesconto := cons_ped[i,76]
                AADD(m_codigo,VAL(cons_ped[i,6]))
*                                   1              2             3              4               5            6            7               8              9           10             11          12      13       14             15               16            17             18             19             20            21             22             23             24              25
                AADD(m_desc,{cons_ped[i,5],cons_ped[i,7],cons_ped[i,30],cons_ped[i,31],cons_ped[i,14],cons_ped[i,20],cons_ped[i,18],cons_ped[i,8],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],0,cons_ped[i,51],cons_ped[i,52],cons_ped[i,53],cons_ped[i,22],cons_ped[i,57],cons_ped[i,9],cons_ped[i,36],cons_ped[i,38],cons_ped[i,37],cons_ped[i,19],cons_ped[i,99],cons_ped[i,105]})
                //IF m_set[1,109] = 'S' 	//.OR. m_set[1,36] # 'S'
                setcor(3)
                @ li+2+f,ci+73 SAY STR(i,4)+' - '+cons_ped[i,6]
                @ li+2+f,ci+COL()+1 SAY cons_ped[i,7]
                f++
                IF cons_ped[i,14] = 0
                        setcor(5)
                ELSE
                        setcor(1)
                ENDIF
                @ li+2+f,ci+75 SAY cons_ped[i,14] PICT '@E 9,999.99'
                @ li+2+f,COL()+2 SAY 'X'
                IF cons_ped[i,17] > cons_ped[i,20]
	                mtot_nota := mtot_nota + (cons_ped[i,17] * cons_ped[i,14])
                        @ li+2+f,COL()+2 SAY cons_ped[i,17] PICT '@E 999,999.99'
                        @ li+2+f,COL()+2 SAY '='
                        @ li+2+f,COL()+2 SAY cons_ped[i,17]*cons_ped[i,14] PICT '@E 999,999.99'
                ELSE
	                mtot_nota := mtot_nota + (cons_ped[i,20] * cons_ped[i,14])
                        @ li+2+f,COL()+2 SAY cons_ped[i,20] PICT '@E 999,999.99'
                        @ li+2+f,COL()+2 SAY '='
                        @ li+2+f,COL()+2 SAY cons_ped[i,20]*cons_ped[i,14] PICT '@E 999,999.99'
                ENDIF
                setcor(1)
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF
                IF m_set[1,21] = 'R'
                        mtot_comissao := mtot_comissao + ((cons_ped[i,14] * cons_ped[i,18]) * (cons_ped[i,53] / 100))
                ELSE
                        mtot_comissao := mtot_comissao + cons_ped[i,53]
                ENDIF

                        /*
                        IF cons_ped[i,20] > cons_ped[i,18]
        	                mdesconto := 0
                	ELSE
                        	mdesconto := (cons_ped[i,18] - cons_ped[i,20]) * cons_ped[i,14]
	                ENDIF
	                */
                /*
                ELSE
	                mtot_nota := mtot_nota + (cons_ped[i,18] * cons_ped[i,14])
	                IF cons_ped[i,18] > cons_ped[i,20]
        	                mdesconto := 0
                	ELSE
                        	mdesconto := (cons_ped[i,20] - cons_ped[i,18]) * cons_ped[i,14]
	                ENDIF
		ENDIF
		*/
                /*
                IF m_set[1,109] = 'S' 	//.OR. m_set[1,36] # 'S'
	                mtot_nota := mtot_nota + (cons_ped[i,17] * cons_ped[i,14])
	                IF cons_ped[i,20] > cons_ped[i,17]
        	                mdesconto := 0
                	ELSE
                        	mdesconto := (cons_ped[i,17] - cons_ped[i,20]) * cons_ped[i,14]
	                ENDIF
		ELSE
	                mtot_nota := mtot_nota + (cons_ped[i,17] * cons_ped[i,14])
	                IF cons_ped[i,18] > cons_ped[i,20]
        	                mdesconto := 0
                	ELSE
                        	mdesconto := (cons_ped[i,20] - cons_ped[i,18]) * cons_ped[i,14]
	                ENDIF
		ENDIF
                IF ver_serie() = '141235' .OR. ver_serie() = '141449' .OR. ver_serie() = '141265'
                        mtot_ipi := mtot_ipi + ((cons_ped[i,18] * cons_ped[i,14]) * (cons_ped[i,57]/100))
                ENDIF
                mtot_comissao := mtot_comissao + (cons_ped[i,18]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100)
                mperc_com1 := mperc_com1 + ;
                (((cons_ped[i,18]*cons_ped[i,14]) * ((cons_ped[i,53] + mcom_ven)/100) - (cons_ped[i,20]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100));
                + ((cons_ped[i,18]*cons_ped[i,14]) - (cons_ped[i,20]*cons_ped[i,14])));
                 / (cons_ped[i,18]*cons_ped[i,14])
                mvlr_tab := mvlr_tab + (cons_ped[i,20]*cons_ped[i,14])
                //mtot_desc := mtot_desc + ((cons_ped[i,18] * cons_ped[i,14])*(mdesconto/100))
                mtot_desc := mdesconto
                */
        NEXT
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF
        DEVPOS(li+2+f,ci+75);DEVOUT('SUB-TOTAL R$: '+TRANSFORM(mtot_nota,'@E 999,999.99'))
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF
        DEVPOS(li+2+f,ci+75);DEVOUT('DESCONTO  R$: '+TRANSFORM(mdesconto,'@E 999,999.99'))
        //mdesconto := mdesconto + cons_ped[1,76]
        //mtot_desc := mtot_desc + cons_ped[1,76]
        mtot_nota := mtot_nota  - mdesconto
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF
        DEVPOS(li+2+f,ci+75);DEVOUT('              ----------')
                IF f > 40
                        SCROLL(li+2,ci+75,li+46,ci+120,1)
                        setcor(1)
                ELSE
                        f++
                ENDIF
        DEVPOS(li+2+f,ci+75);DEVOUT('T O T A L R$: '+TRANSFORM(mtot_nota,'@E 999,999.99'))
        setcor(3)
        @ li+44,ci+76 to li+44,ci+119
        DEVPOS(li+45,ci+76);DEVOUT('Quantidade de Itens: '+TRANSFORM(LEN(cons_ped),'9999'))
        DEVPOS(lci+13,cci+1);DEVOUT('Media Estipulado: '+TRANSFORM(mprz_med/mdia_med,'9999'))
        DEVPOS(lci+13,cci+25);DEVOUT('Media dias: ')
        setcor(1)
        /*
        IF ver_serie() = '141235' .OR. ver_serie() = '141449' .OR. ver_serie() = '141265'
                mtot_ipi := iat(mtot_ipi,2)
                setcor(3)
                DEVPOS(lci+14,cci+1);DEVOUT('Valor do IPI R$: '+TRANSFORM(mtot_ipi,'9,999.99')+' ')
                mtot_nota := iat(mtot_nota,2)+mtot_ipi
                setcor(1)
        ENDIF
        */
        SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
        @ li+5,ci TO li+5,cb
        @ li+12,ci TO li+12,cb
        IF m_set[1,94] = 'S'
                mop_desc := mensagem1('Este RECEBIMENTO tem algum DESCONTO:','N','S,N')
                IF mop_desc = 'S'
                        IF ! aut_sen('Senha p/liberacao de DESCONTO NO RECEBIMENTO','DESC_CX',,0)
                                LOOP
                        ENDIF
                        mdesc_cx := 0
                        DEVPOS(lci+14,cci+30);DEVOUT('- DESCONTO R$: ')
                        @ lci+14,cci+45 GET mdesc_cx PICT '999,999.99'
                        READ
                        mdesc_perc := mdesc_cx / mtot_nota
                        @ lci+14,COL()+1 SAY ' - %:'
                        @ lci+14,COL() SAY mdesc_perc*100 PICT '999.999'
                        mtot_nota := mtot_nota-mdesc_cx
                ENDIF
        ENDIF
        IF mdesconto > 0
                botao(42,01,46,72,,,'*')
                WVW_DrawLabel(,43,02,'ECONOMIA R$:'+ALLTRIM(TRANSFORM(mdesconto,'@E 99,999.99'))+' - '+ALLTRIM(TRANSFORM((mdesconto / mtot_nota) * 100,'@E 9999.99')+' %'),,,210,, 'arial black',35,15,,,,,)
        ENDIF
        @ li+5,ci TO li+5,cb
        @ li+12,ci TO li+12,cb
        //mperc_comissao := mtot_comissao / mtot_nota

        IF m_set[1,21] = 'R'
                IF mdesc_cx # 0
                        mperc_comissao := 3
                ELSE
                        mperc_comissao := (mtot_comissao / mtot_nota) * 100
                ENDIF
                
                //ATENCAO('perc:'+TRANSFORM(mperc_comissao,'999,999.99')+' - total:'+TRANSFORM(mtot_comissao,'999,999.99')+' - total:'+TRANSFORM(LEN(cons_ped),'9999'))
        ELSEIF mtelemark = 'T' .AND. mperc_comissao < m_set[1,116]/100
                mperc_comissao := 0
        ELSE
                mperc_comissao := mperc_comissao - IF(! EMPTY(m_set[1,116]) .AND. STRZERO(mcod_oper,3) <> STRZERO(mcod_vend,3) .AND. mperc_comissao > 0,(m_set[1,116]/100),0)
        ENDIF
        IF mcod_cli <> 0
                mcpf := cons_cli[1,34]
                mcgc := cons_cli[1,32]
                minsc := cons_cli[1,33]
        ENDIF
        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
        m_alt :={}
        mn_banco := SPACE(3)
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mcorrente := SPACE(35)
        mcpfcnpj := SPACE(14)
        mtipo_pg := mcredito := mvlr_cred := 0
        mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3)
                DEVPOS(li+4,ci+1);DEVOUT('CREDITO DO CLIENTE R$:'+TRANSFORM(mcredito,'999,999.99')+' ')
                setcor(1)
                mtipo_pg := 7
        ENDIF
        WVW_CBEnable( , mid_cb, .T. )
        WHILE .T.
*
//WVW_CBSetIndex( , mid_cb, 1 )
//atencao(STRZERO(WVW_CBGetIndex( , mid_cb ),4))
//atencao(WVW_CBGetCurText( , mid_cb))
*/
                setcor(3)
                SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'@E 999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mn_cheque := SPACE(6)
                mvencimento := CTOD('  /  /  ')
                mn_dup := mn_trans := mn_fin := mn_cred  := mn_pix := SPACE(8)
                mt_pag   := 'C'
                mdinheiro := mcod_cart := mvalor := 0
                mn_cupom := SPACE(7)
                mopcao := SPACE(1)
                IF mcredito > 0
                        mtipo_pg := 7
                ELSEIF VAL(mcond_vezes) > 0
                        IF SUBSTR(mcond_intev,1,2) = 'DU'
                                mtipo_pg := 3
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'CH'
                                mtipo_pg := 2
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'FI'
                                mtipo_pg := 4
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'CT'
                                mtipo_pg := 5
                        ELSEIF SUBSTR(mcond_intev,1,2) = 'PX'
                                mtipo_pg := 8
                        ENDIF
                ELSE
                        IF SUBSTR(mcond_intev,1,2) = 'PX'
                                mtipo_pg := 8
                        ELSE
                                mtipo_pg := 1
                        ENDIF

                ENDIF
                WVW_CBSetIndex( ,mid_cb,mtipo_pg-1)
                //WVW_CBFindString( , mid_cb, '3-Duplicata '  )
                //WVW_CBISFocused( , mid_cb )
                //WVW_CBSetCurSel( , mid_cb, mtipo_pg)
                mtipo_pg := 0
                @ 53,1 GET mtipo_pg WHEN mtipo_pg > -1
                READ
                mtipo_pg := VAL(SUBSTR(WVW_CBGetCurText(,mid_cb),1,1))
                //mtipo_pg := WVW_CBGetIndex( , mid_cb)
                //WVW_CBSetCurSel( , mid_cb, mtipo_pg )
                //mtipo_pg ++
                setcor(1)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                mbox_rece := SAVESCREEN(00,00,34,73)
                //DINHEIRO
                IF mtipo_pg = 9
                        //MYRUN('PDV.BAT')
                        op_tela(li+18,ci+28,li+35,ci+105,' DUPLICATAS ')
                        IF (mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0));
                           .OR. (EMPTY(mlib_por) .AND. (ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)))
                                fecha_tela()
                                LOOP

                        ENDIF
                        cons_tab:={}
                        cComm  := "SELECT * FROM sactabpg WHERE codigo = "+sr_cdbvalue(cons_ped[1,42])
                        sr_getconnection():exec(ccomm,,.t.,@cons_tab)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_tab) = 0
                                atencao('Tabela  nao ENCONTRADA !!!')
                                fecha_tela()
                                LOOP
                        ENDIF

                        IF ver_serie() = '141302'
                                mvencimento := mdata_ped + VAL(SUBSTR(cons_tab[1,6],2))
                                mdata_30 := mdata_ped
                        ELSE
                                mvencimento := mdata_sis + VAL(SUBSTR(cons_tab[1,6],2))
                                mdata_30 := mdata_sis
                        ENDIF
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                AADD(m_intevalo,30*i)
                        NEXT
                        mqtd_parc := VAL(SUBSTR(cons_tab[1,6],2))
                        mn_dup := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mn_banco := '   '
                        DEVPOS(0,1);DEVOUT('No.Duplicata.:')
                        DEVPOS(1,1);DEVOUT('Vencimento...:')
                        DEVPOS(2,1);DEVOUT('C>art. B>anco:   No.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')
                        @ 5,0 TO 5,100
                        //botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        /*
                        IF ver_serie() = '141235' .OR. ver_serie() = '141265' .OR. ver_serie() = '141449' .OR. ver_serie() = '141450' .OR. ver_serie() = '141451'
                                mnumero_doc := v_ped_nt(mnum_ped,'*','*')
                                IF ! EMPTY(mnumero_doc)
                                        mnumero_doc := SUBSTR(mnumero_doc,3)
                                        mn_dup:=mnumero_doc
                                ENDIF
                        ENDIF
                        */
                        @ 0,16 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ 1,16 GET mvencimento VALID vencim(mvencimento,,,mdata_30,mintevalo)      //IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 2,16 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ 2,23 GET mn_banco PICT '999' WHEN mt_pag = 'B'
                        @ 3,16 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc),.F.,.T.)
                        @ 4,16 GET mdia_venc PICT '99' VALID IF(EMPTY(mdia_venc),.F.,.T.)
                        READ
                        i := 0
                        m_parcela :={}
                        mnumero_doc := mn_dup
                        IF mdia_venc > 0
                                mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
                        ENDIF
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                IF i <= mqtd_parc
                                        IF mdia_venc > 0
                                                mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                        ELSE
                                                mdata_v := mdata_30 + m_intevalo[i]
                                        ENDIF
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,mdiferenca/mqtd_parc})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,mdiferenca/mqtd_parc})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                        NEXT
                        mtipo_comp = 'AP'
                //ELSEIF mtipo_pg = 8
                //        sac5ped1(STRZERO(mnum_ped,6))
                //        LOOP
                ELSEIF mtipo_pg = 1 .OR. SUBSTR(cons_cli[1,40],1,2) = '00'
                        op_tela(li+18,ci+28,li+20,ci+68,' DINHEIRO ')
                        DEVPOS(1,1);DEVOUT('Dinheiro............R$:')
                        @ 1,24 GET mdinheiro PICT '999,999,999.99' VALID IF(mdinheiro<0,.F.,.T.)
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                               LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2             // CHEQUES
                        IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
                        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
                        *---------------------------------------------
                        IF EMPTY(mlib_por) .AND. ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)
                                LOOP
                        ENDIF
                        mt_pag := 'B'
                        op_tela(li+18,ci+28,li+26,ci+103,' CHEQUES ')
                        setcor(1)
                        DEVPOS(1,1);DEVOUT('No.Banco...:')
                        DEVPOS(2,1);DEVOUT('Agencia....:')
                        DEVPOS(3,1);DEVOUT('C/C........:')
                        DEVPOS(4,1);DEVOUT('No.Cheque..:')
                        DEVPOS(5,1);DEVOUT('Vencimento.:')
                        DEVPOS(6,1);DEVOUT('Valor......:')
                        DEVPOS(7,1);DEVOUT('Correntista:')
                        DEVPOS(8,1);DEVOUT('CPF/CNPJ:')
                        IF ver_serie() = '141302'
                                mvencimento := mdata_ped + VAL(SUBSTR(mcond_intev,3,3))
                                mdata_30 := mdata_ped
                        ELSE
                                mvencimento := mdata_sis + VAL(SUBSTR(mcond_intev,3,3))
                                mdata_30 := mdata_sis
                        ENDIF
                        @ 1,14 GET mn_banco PICT '999'
                        READ
                        IF mn_banco = '9'
                                CLEAR GETS
                                mn_banco := ler_cheque()
                        ENDIF
                        @ 1,14 GET mn_banco PICT '999'
                        @ 2,14 GET magencia PICT '@!'
                        @ 3,14 GET mc_c PICT '@!' VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ 4,14 GET mn_cheque PICT '99999999' VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.)
                        @ 5,14 GET mvencimento WHEN ! EMPTY(mn_banco) VALID vencim(mvencimento,,,mdata_30,mintevalo) .AND. IF(mvencimento<mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mvencimento > mdata_sis .AND. mtp_vend = 'AV' .AND. ;
                           ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 6,14 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.) WHEN ! EMPTY(mn_banco)
                        @ 7,14 GET mcorrente PICT '@!'
                        @ 8,14 GET mcpfcnpj PICT '@!' VALID chq_corre(mcpfcnpj)
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = 'AP'
                        ENDIF
               ELSEIF mtipo_pg = 3              // DUPLICATA
                        //IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
                        IF m_indiv[1,26] <> 'P'
                                IF (mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0));
                                   .OR. (EMPTY(mlib_por) .AND. (ver_serie() <> '141287' .AND. ! spc(mcod_cli,mtot_nota+mtot_ipi,,'*',mlib)))
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mtp_vend = 'AV' .AND. ver_serie() <> '141287'
                                mcond_intev := 'DU00100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
                                mcons_vezes := '001'
                        ENDIF
                        IF ver_serie() = '141302'
                                mvencimento := mdata_ped + VAL(SUBSTR(mcond_intev,3,3))
                                mdata_30 := mdata_ped
                        ELSE
                                mvencimento := mdata_sis + VAL(SUBSTR(mcond_intev,3,3))
                                mdata_30 := mdata_sis
                        ENDIF
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        op_tela(li+18,ci+28,li+35,ci+105,' DUPLICATAS ')
                        DEVPOS(0,1);DEVOUT('No.Duplicata.....:')
                        DEVPOS(1,1);DEVOUT('Vencimento.......:')
                        DEVPOS(2,1);DEVOUT('C>art. B>anco....:   No.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')
                        @ 5,0 TO 5,100
                        //botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        //mqtd_parc := VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2))
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        mn_dup := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mn_banco := '   '
                        IF ver_serie() = '141235' .OR. ver_serie() = '141265' .OR. ver_serie() = '141449' .OR. ver_serie() = '141450' .OR. ver_serie() = '141451'
                                mnumero_doc := v_ped_nt(mnum_ped,'*','*')
                                IF ! EMPTY(mnumero_doc)
                                        mnumero_doc := SUBSTR(mnumero_doc,3)
                                        mn_dup:=mnumero_doc
                                ENDIF
                        ENDIF

                        @ 0,20 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ 1,20 GET mvencimento VALID vencim(mvencimento,,,mdata_30,mintevalo)      //IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 2,20 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ 2,27 GET mn_banco PICT '999' WHEN mt_pag = 'B'
                        @ 3,20 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc),.F.,.T.)
                        @ 4,20 GET mdia_venc PICT '99'  //VALID IF(EMPTY(mdia_venc),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        i := 0
                        m_parcela :={}
                        mnumero_doc := mn_dup
                        IF mdia_venc > 0
                                //mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
				mmes_fx := VAL(SUBSTR(DTOC(mdata_30 + 30),4,2))
                                mano_fx := VAL(SUBSTR(DTOC(mdata_30 + 30),7,2))
                                FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                        	               	//mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+STRZERO(mmes_fx,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                                IF mmes_fx= 2 .AND. mdia_venc > 28
                                                        mdata_v := CTOD(STRZERO(28,2)+'/'+STRZERO(mmes_fx,2)+'/'+STRZERO(mano_fx,2))
                                                ELSE
                                                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+STRZERO(mmes_fx,2)+'/'+STRZERO(mano_fx,2))
                                                ENDIF
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                	                mmes_fx ++
                	                IF mmes_fx > 12
                                                mano_fx ++
                	                	mmes_fx := 1
                	               	ENDIF
                        	NEXT
                                IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
			ELSE
	                        FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                	                        IF mdia_venc > 0
                        	                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                	        ELSE
                                        	        mdata_v := mdata_30 + m_intevalo[i]
	                                        ENDIF
                                                IF SUBSTR(DTOC(mdata_v),4,2) = '02'
                                                        mdata_v := CTOD(SUBSTR(DTOC(mdata_v),1,2)+'/'+SUBSTR(DTOC(mdata_v),4,2)+'/'+SUBSTR(DTOC(mdata_v),7))
                                                ENDIF
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                        	NEXT
                                IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
                        ENDIF
                        mtipo_comp = 'AP'
                ELSEIF mtipo_pg = 4             //FINANCIAMENTO
                        IF mtp_vend = 'AV' .AND. ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                LOOP
                        ENDIF
                        IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
                        IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
                        *---------------------------------------------
                        mvencimento := mdata_ped + VAL(SUBSTR(mcond_intev,3,3))
                        mdata_30 := mdata_ped
                        m_intevalo :={}
                        i:=mdia_venc:=0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        m_parcela :={}
                        //mqtd_parc := VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2))
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        mn_fin := STRZERO(mnum_ped,6)

                        op_tela(li+18,ci+28,li+35,ci+105,' FINANCIAMENTO ')
                        DEVPOS(1,1);DEVOUT('Cod.Financeira...:')
                        DEVPOS(2,1);DEVOUT('No.Financiamento.:')
                        DEVPOS(3,1);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(4,1);DEVOUT('Dia do Vencimento:')

                        @ 1,20 GET mcod_cart PICT '999' VALID ver_finan(mcod_cart,1,24)
                        @ 2,20 GET mn_fin PICT '@!'
                        @ 3,20 GET mqtd_parc PICT '99'
                        @ 4,20 GET mdia_venc PICT '99'
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        @ 5,0 TO 5,100
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100
                        mnumero_doc := mn_fin
                        IF ver_serie() = '141235'
                                mnumero_doc := SUBSTR(v_ped_nt(mnum_ped,'*','*'),3)
                                IF EMPTY(mnumero_doc);mnumero_doc:=mn_fin;ENDIF
                        ENDIF
                        i := 0
                        IF mdia_venc > 0
                                mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
                        ENDIF
                        FOR i = 1 TO 15
                                IF mdia_venc > 0
                                        //mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + (i*30)),4,2)+'/'+SUBSTR(DTOC(mdata_30 + (i*30)),7))
                                ELSE
                                        //mdata_v := mdata_30 + m_intevalo[i]
                                        mdata_v := mdata_30 + (30*i)
                                ENDIF
                                IF i <= mqtd_parc
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,iat(mdiferenca/mqtd_parc,2)})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                        NEXT
                        IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                        ENDIF
                        mtipo_comp = 'AP'
               ELSEIF mtipo_pg = 5      //CARTAO
                        mt_pag := 'B'
                        m_parcela :={}
                        mqtd_parc := VAL(SUBSTR(mcond_vezes,2))
                        op_tela(li+18,ci+28,li+35,ci+105,' CARTAO ')
                        DEVPOS(1,1);DEVOUT('Cod.Cartao.:')
                        DEVPOS(2,1);DEVOUT('No.Cupom...:')
                        DEVPOS(2,22);DEVOUT('/99')
                        DEVPOS(3,1);DEVOUT('No.Parcelas:')
                        @ 5,0 TO 5,100
                        DEVPOS(6,0);DEVOUT(' Documento  Vencimento       Valor      Documento  Vencimento       Valor')
                        @ 7,0 TO 7,100

                        @ 1,14 GET mcod_cart PICT '999' VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,1,18))
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        ver_cartao(mcod_cart,1,18)
                        mvencimento := mdata_sis
                        IF mtp_vend = 'AV' .AND. car->tipo_venda <> 'A' .AND. ;
                           ! aut_sen('Senha p/liberar VENDA AVISTA p/ APRAZO','LIB_FORMA_PG',,0)
                                LOOP
                        ENDIF
                        @ 2,14 GET mn_cupom PICT '@!' VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ 3,14 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        m_intevalo :={}
                        i := mdia_venc := 0
                        FOR i = 1 TO 15
                                AADD(m_intevalo,VAL(SUBSTR(mcond_intev,i*3,3)))
                        NEXT
                        i := 0
                        FOR i = 1 TO 15
                                IF i <= mqtd_parc
                                        //mvencimento := mvencimento + car->prazo
                                        IF car->tipo_venda = 'A'
                                                mvencimento := mdata_sis
                                        ELSE
                                                mvencimento := mdata_sis + m_intevalo[i]
                                        ENDIF
                                        //                                        1                                              2                 3                      4            5
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(mn_cupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(mn_cupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mdiferenca/mqtd_parc,2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                ELSE
                                        AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                                ENDIF
                                AADD(m_intevalo,0)
                        NEXT
                        IF mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (iat((mdiferenca/mqtd_parc),2) * mqtd_parc))
                        ENDIF
                        IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                mtipo_comp = 'AV'
                        ELSE
                                mtipo_comp = 'AP'
                        ENDIF
               ELSEIF mtipo_pg = 6
                        op_tela(li+18,ci+28,li+22,ci+57,' TRANSFERENCIA ')
                        mn_trans := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mvencimento := mdata_sis
                        DEVPOS(1,1);DEVOUT('No.Transferenca:')
                        DEVPOS(2,1);DEVOUT('Vencimento.....:')
                        DEVPOS(3,1);DEVOUT('Valor R$.......:')
                        
                        @ 1,18 GET mn_trans PICT '@!'    // VALID IF(EMPTY(mn_trans),.F.,.T.)
                        @ 2,18 GET mvencimento VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 3,18 GET mvalor PICT '9,999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27 .OR. EMPTY(mn_trans)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
               ELSEIF mtipo_pg = 7
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        op_tela(li+18,ci+28,li+22,ci+57,' CREDITO CLIENTE ')
                        //mn_cred := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mvencimento := mdata_sis
                        mcredito_aux := 0
                        DEVPOS(1,1);DEVOUT('No.CREDITO...:')
                        DEVPOS(2,1);DEVOUT('Data.........:')
                        DEVPOS(3,1);DEVOUT('Valor R$.....:')
                        setcor(1)
                        @ 1,16 GET mn_cred
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        achou := f := 0
                        FOR f = 1 TO LEN(m_recebe)
                                IF m_recebe[f,5] = mn_cred
                                        atencao('Este Credito ja foi solicitado....')
                                        achou := 1
                                        EXIT
                                ENDIF
                        NEXT
                        IF achou > 0
                                LOOP
                        ENDIF
                        mcredito_aux := cli_dup(mcod_cli,'*',mn_cred)
                        IF mcredito_aux = 0
                                atencao('Nao existe CREDITO com esse Numero ....')
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mdiferenca < mcredito_aux
                                mvalor := mdiferenca
                        ELSE
                                mvalor := mcredito_aux
                        ENDIF
                        setcor(3)
                        @ 2,16 SAY mvencimento
                        setcor(1)
                        @ 3,16 GET mvalor PICT '9,999,999.99' VALID IF(mvalor > mcredito_aux .OR. mvalor > mcredito,.F.,.T.)
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
               ELSEIF mtipo_pg = 8
                        op_tela(li+18,ci+28,li+22,ci+57,' RECEIMENTO NO PIX ')
                        mn_pix := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        mvencimento := mdata_sis
                        mvalor := mdiferenca
                        DEVPOS(1,1);DEVOUT('No.DOCUMENTO.:')
                        DEVPOS(2,1);DEVOUT('Data.........:')
                        DEVPOS(3,1);DEVOUT('Valor R$.....:')
                        setcor(1)
                        @ 1,16 GET mn_pix VALID IF(EMPTY(mn_pix),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        setcor(3)
                        @ 2,16 SAY mvencimento
                        setcor(1)
                        @ 3,16 GET mvalor PICT '9,999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                ELSE
                        LOOP
                ENDIF
                IF mtipo_pg = 3 .OR. mtipo_pg = 4 .OR. mtipo_pg = 5
                        @ 8,4 GET m_parcela[1,1] PICT '@!'
                        @ 8,COL()+2 GET m_parcela[1,2] VALID vencim(m_parcela[1,2],,,mdata_30,m_intevalo[1],m_parcela[1,1])
                        @ 8,COL()+2 GET m_parcela[1,3] PICT '999,999.99'
                        @ 9,4 GET m_parcela[2,1] PICT '@!'
                        @ 9,COL()+2 GET m_parcela[2,2] VALID vencim(m_parcela[2,2],,,mdata_30,m_intevalo[2],m_parcela[2,1])
                        @ 9,COL()+2 GET m_parcela[2,3] PICT '999,999.99'
                        @ 10,4 GET m_parcela[3,1] PICT '@!'
                        @ 10,COL()+2 GET m_parcela[3,2] VALID vencim(m_parcela[3,2],,,mdata_30,m_intevalo[3],m_parcela[3,1])
                        @ 10,COL()+2 GET m_parcela[3,3] PICT '999,999.99'
                        @ 11,4 GET m_parcela[4,1] PICT '@!'
                        @ 11,COL()+2 GET m_parcela[4,2] VALID vencim(m_parcela[4,2],,,mdata_30,m_intevalo[4],m_parcela[4,1])
                        @ 11,COL()+2 GET m_parcela[4,3] PICT '999,999.99'
                        @ 12,4 GET m_parcela[5,1] PICT '@!'
                        @ 12,COL()+2 GET m_parcela[5,2] VALID vencim(m_parcela[5,2],,,mdata_30,m_intevalo[5],m_parcela[5,1])
                        @ 12,COL()+2 GET m_parcela[5,3] PICT '999,999.99'
                        @ 13,4 GET m_parcela[6,1] PICT '@!'
                        @ 13,COL()+2 GET m_parcela[6,2] VALID vencim(m_parcela[6,2],,,mdata_30,m_intevalo[6],m_parcela[6,1])
                        @ 13,COL()+2 GET m_parcela[6,3] PICT '999,999.99'
                        @ 14,4 GET m_parcela[7,1] PICT '@!'
                        @ 14,COL()+2 GET m_parcela[7,2] VALID vencim(m_parcela[7,2],,,mdata_30,m_intevalo[7],m_parcela[7,1])
                        @ 14,COL()+2 GET m_parcela[7,3] PICT '999,999.99'
                        @ 15,4 GET m_parcela[8,1] PICT '@!'
                        @ 15,COL()+2 GET m_parcela[8,2] VALID vencim(m_parcela[8,2],,,mdata_30,m_intevalo[8],m_parcela[8,1])
                        @ 15,COL()+2 GET m_parcela[8,3] PICT '999,999.99'

                        @ 8,43 GET m_parcela[9,1] PICT '@!'
                        @ 8,COL()+2 GET m_parcela[9,2] VALID vencim(m_parcela[9,2],,,mdata_30,m_intevalo[9],m_parcela[9,1])
                        @ 8,COL()+2 GET m_parcela[9,3] PICT '999,999.99'
                        @ 9,43 GET m_parcela[10,1] PICT '@!'
                        @ 9,COL()+2 GET m_parcela[10,2] VALID vencim(m_parcela[10,2],,,mdata_30,m_intevalo[10],m_parcela[10,1])
                        @ 9,COL()+2 GET m_parcela[10,3] PICT '999,999.99'
                        @ 10,43 GET m_parcela[11,1] PICT '@!'
                        @ 10,COL()+2 GET m_parcela[11,2] VALID vencim(m_parcela[11,2],,,mdata_30,m_intevalo[11],m_parcela[11,1])
                        @ 10,COL()+2 GET m_parcela[11,3] PICT '999,999.99'
                        @ 11,43 GET m_parcela[12,1] PICT '@!'
                        @ 11,COL()+2 GET m_parcela[12,2] VALID vencim(m_parcela[12,2],,,mdata_30,m_intevalo[12],m_parcela[12,1])
                        @ 11,COL()+2 GET m_parcela[12,3] PICT '999,999.99'
                        @ 12,43 GET m_parcela[13,1] PICT '@!'
                        @ 12,COL()+2 GET m_parcela[13,2] VALID vencim(m_parcela[13,2],,,mdata_30,m_intevalo[13],m_parcela[13,1])
                        @ 12,COL()+2 GET m_parcela[13,3] PICT '999,999.99'
                        @ 13,43 GET m_parcela[14,1] PICT '@!'
                        @ 13,COL()+2 GET m_parcela[14,2] VALID vencim(m_parcela[14,2],,,mdata_30,m_intevalo[14],m_parcela[14,1])
                        @ 13,COL()+2 GET m_parcela[14,3] PICT '999,999.99'
                        @ 14,43 GET m_parcela[15,1] PICT '@!'
                        @ 14,COL()+2 GET m_parcela[15,2] VALID vencim(m_parcela[15,2],,,mdata_30,m_intevalo[15],m_parcela[15,1])
                        @ 14,COL()+2 GET m_parcela[15,3] PICT '999,999.99'
                        READ
                        fecha_tela()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        i := 0
                        FOR i = 1 TO 15
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ELSEIF mtipo_pg = 9
                        i := 0
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. EMPTY(mn_pix) .AND. mvalor+mdinheiro > 0 .AND. LEN(m_parcela) = 0
                        LOOP
                ENDIF
                mopcao := 'S'
                IF m_indiv[1,26] <> 'T'
                        mopcao := op_simnao('S','Confirma a Inclusao:')
                ENDIF
                mcredito := cli_dup(mcod_cli,'*')
                setcor(1)
                SUB_BANNER(li+5,ci+15,TRANSFORM(mtot_nota,'999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                IF mopcao = 'N';LOOP;ENDIF
                IF mdinheiro = mtot_nota 
                        mvalor := mdinheiro
                        AADD(m_alt,'DINHEIRO...: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                        AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                ELSEIF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_cred) .AND. EMPTY(mn_pix) .AND. ;
                     EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans) .AND. LEN(m_parcela) = 0);
                      .OR. mdinheiro = mtot_nota

                        IF ! EMPTY(mdinheiro)   //.OR. mdinheiro = mtot_nota
                                IF mdinheiro + mtot_verif > mtot_nota
                                        mvalor := mtot_nota - mtot_verif
                                        mtroco := mdinheiro+mtot_verif - mtot_nota
                                        SUB_BANNER(30,01,'Troco:'+TRANSFORM(mtroco,'999,999.99'))
                                        INKEY(,10)
                                        INKEY(30)
                                        //atencao('T R O C O   D E   R$: '+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                ELSE
                                        mvalor := mdinheiro
                                ENDIF
                                AADD(m_alt,'DINHEIRO...: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                                AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        ELSE
                                IF ! EMPTY(mn_cheque)
	                                //IF (mvalor + mtot_verif) > mtot_nota
	                                IF (mvalor + mtot_verif) - mtot_nota > .01
                				mcred_cheq := op_simnao('S','O Valor de R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+'  vai ser gerado um CREDITO para o cliente:')
						IF  mcred_cheq = 'N'
		                                	LOOP
		                                ENDIF
						mvlr_credcheq := mvalor+mtot_verif - mtot_nota
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18       19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE
	                                                AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
        	                                ENDIF
        	                        ELSE
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18   19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE                                                                                                                                                                     
                                        		AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                        	ENDIF
                                        ENDIF
                                        AADD(m_alt,'CHEQUE.....: Bco.: '+mn_banco+' No: '+mn_cheque+' Venc: '+DTOC(mvencimento)+' Vlr:'+TRANSFORM(mvalor,'999,999.99'))
                                ELSEIF ! EMPTY(mn_dup)
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'DUPLICATA..: No.:'+m_parcela[i,1]+' Venc:'+DTOC(m_parcela[i,2])+' Vlr:'+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        AADD(m_recebe,{'DU','AP',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'DU','AV',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_cupom)
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'CARTAO.....: '+STRZERO(mcod_cart,3)+' Cupom No.: '+m_parcela[i,1]+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        //               1    2       3      4         5       6          7           8                 9            10          11      12       13       14        15         16            17            18
                                                        AADD(m_recebe,{'CT','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE

                                                        AADD(m_recebe,{'CT','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_fin)  // .OR. LEN(m_parcela) > 0
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'FINANCIAMEN: '+m_parcela[i,1]+' Venc.: '+DTOC(m_parcela[i,2])+' Vlr: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        AADD(m_recebe,{'FI','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'FI','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                                ENDIF
                                        NEXT
                                ELSEIF ! EMPTY(mn_trans)
                                        AADD(m_alt,'TRANSFERENC: '+mn_trans+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'TR','AP',SPACE(3),SPACE(6),mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ELSEIF ! EMPTY(mn_cred)
                                        mtipo_pg := 1
                                        mcredito := mcredito - mvalor
                                        AADD(m_alt,'CREDITO....: '+mn_cred+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6),mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ELSEIF ! EMPTY(mn_pix)
                                        AADD(m_alt,'No.PIX.....: '+mn_pix+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        AADD(m_recebe,{'PX','AV',SPACE(3),SPACE(6),mn_pix,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',IF(EMPTY(VAL(ALLTRIM(cons_ped[1,94]))),'',' OS:'+ALLTRIM(cons_ped[1,94]))})
                                ENDIF
                        ENDIF
                ENDIF
                setcor(3)
                DEVPOS(lci+13,cci+37);DEVOUT(TRANSFORM(mqtd_dias/mqtd_doc,'9999')+' ')
                setcor(1)
                mtot_verif = mtot_verif + mvalor
		IF mcred_cheq = 'S'
			mdiferenca := 0
                ELSE
			mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
		ENDIF
                setcor(3)
                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                limpa(li+18,ci+17,lb-1,cb-1)
                f := 1
                i := 0
                FOR i = 1 TO LEN(m_alt)
                        DEVPOS(li+20+f,ci+17);DEVOUT(m_alt[i])
                        IF i > 4
                                SCROLL(li+21,ci+17,lb-1,cb-1,1)
                        ELSE
                                f++
                        ENDIF
                NEXT
                setcor(1)
                //IF mdiferenca <= 0 .OR. mdiferenca <= 0.05      //.OR. mdiferenca <= mtot_ipi
                IF mdiferenca <= 0.05 .AND. mdiferenca >= -0.0001      //.OR. mdiferenca <= mtot_ipi
                        WHILE mtot_verif <> iat(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                //atencao(TRANSFORM(mdiferenca,'9,999,999.999999'))
                                mopcao := mensagem1('Total RECEBIDO: '+TRANSFORM(mtot_verif,'9,999,999.999999')+' e maior que A RECEBER: '+TRANSFORM(mtot_nota-mtot_ipi,'9,999,999.99999')+', Deseja tentar Alterar os Recebimentos: ','S','S,N')
                                IF mopcao = 'S'
                                        alt_caixa()     // prgs SACROT1.PRG
                                        setcor(3)
                                        DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                                        limpa(li+22,ci+1,lb-1,cb-1)
                                        f := 1
                                        i := 0
                                        FOR i = 1 TO LEN(m_recebe)
                                                DEVPOS(li+19+f,ci+17);DEVOUT(m_alt[i])
                                                IF i > 4
                                                        SCROLL(li+20,ci+17,lb-1,cb-1,1)
                                                ELSE
                                                        f++
                                                ENDIF
                                        NEXT
                                        setcor(1)
                                        LOOP
                                ELSE
                                        EXIT
                                ENDIF
                        ENDDO
                        IF mtot_verif <> iat(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                m_alt :={}
                                m_recebe :={}
                                mtot_verif := 0
                                mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.999')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        mopcao := op_simnao('S','Todas informacoes "OK", Confirma Dados Preenchido:')
                        IF mopcao = 'N'
                                m_alt   :={}
                                m_recebe:={}
                                mtot_verif := 0
                                mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        IF mopcao = 'S'
                                EXIT
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                mtot_comissao := mtot_comissao + (cons_ped[i,18]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100)
                mperc_com1 := mperc_com1 + ;
                (((cons_ped[i,18]*cons_ped[i,14]) * ((cons_ped[i,53] + mcom_ven)/100) - (cons_ped[i,20]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100));
                + ((cons_ped[i,18]*cons_ped[i,14]) - (cons_ped[i,20]*cons_ped[i,14])));
                 / (cons_ped[i,18]*cons_ped[i,14])
                mvlr_tab := mvlr_tab + (cons_ped[i,20]*cons_ped[i,14])
                //mtot_desc := mtot_desc + ((cons_ped[i,18] * cons_ped[i,14])*(mdesconto/100))
                mtot_desc := mdesconto
        NEXT

        m_param:={}
        sr_getconnection():exec("SELECT tot_comp,vlr_comp,num_ped,ult_comp FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@m_param)
        sr_getconnection():exec('COMMIT',,.f.)
        aret:={}
        sr_begintransaction()
                        mensagem('Atualizando o CLIENTE....')
                        cComm  := "UPDATE saccli SET "
                        ccomm := ccomm +"num_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        ccomm := ccomm +",ult_comp = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm +",vlr_comp = "+sr_cdbvalue(iat(mtot_nota,2))
                        ccomm := ccomm +",tot_comp = "+sr_cdbvalue(iat(m_param[1,1] + mtot_nota,2))
                        IF ! EMPTY(m_param[1,4])
                                ccomm := ccomm +",ant_ped  = "+sr_cdbvalue(m_param[1,3])
                                ccomm := ccomm +",dat_ant  = "+sr_cdbvalue(m_param[1,4])
                        ENDIF
                        IF mtot_nota > cons_cli[1,18]
                                ccomm := ccomm +",numped_m  = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                ccomm := ccomm +",ultcomp_m = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm +",vlrcomp_m = "+sr_cdbvalue(iat(mtot_nota,2))
                        ENDIF
                        ccomm := ccomm +",vlr_ant  = "+sr_cdbvalue(iat(m_param[1,2],2))+" WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                        sr_getconnection():exec(ccomm,,.f.)

                        mensagem('Atualizando o CONTAS A RECEBER....')
                        c := i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                                //IF (m_recebe[i,1]='CH' .OR. m_recebe[i,1]='CT') .AND. m_recebe[i,6] <= mdata_sis
                                IF m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis
                                        mbaixar := op_simnao('N','Deseja Baixar este Cheque de No.:'+m_recebe[i,4]+'Valor: '+RTRIM(TRANSFORM(m_recebe[i,10],'999,999.99'))+' - Data Vecimento: '+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1]='CT' .AND. m_recebe[i,6] <= mdata_sis
                                        mbaixar := 'S'
                                ELSEIF m_recebe[i,1]='PX'
                                        mbaixar := 'S'
                                ENDIF
                                        mcampo_arq :=  'empresa         ,';//1
                                              +'emissao         ,';//2
                                              +'tipo            ,';//3
                                              +'tip_cli         ,';//4
                                              +'fornec          ,';//5
                                              +'cliente         ,';//6
                                              +'venc            ,';//7
                                              +'venc1           ,';//8
                                              +'comissao        ,';//9
                                              +'comissao1       ,';//10
                                              +'vlr_tab         ,';//11
                                              +'operador        ,';//12
                                              +'vendedor        ,';//13
                                              +'num_ped         ,';//14
                                              +'banco           ,';//15
                                              +'ope_venda       ,';//16
                                              +'ope_comi        ,';//17
                                              +'mov_cx          ,';//18
                                              +'c_cpfcnpj       ,';//19
                                              +'numero          ,';//20
                                              +'duplicata       ,';//21
                                              +'valor_dup       ,';//22
                                              +'valor           ,';//23
                                              +'agencia         ,';//24
                                              +'c_c             ,';//25
                                              +'datpag          ,';//26
                                              +'vlpago          ,';//27
                                              +'pago            ,';//28
                                              +'corrente        ,';//29
                                              +'cpfcnpj         ,';//30
                                              +'vl_ipi          ,';//31
                                              +'com_sem         ,';//32
                                              +'obs           '//33
                                        IF m_recebe[i,1] = 'DN'
                                                mnum_dup := STRZERO(mnum_ped,6)
                                        ELSEIF m_recebe[i,1] = 'CH'
                                                mnum_dup := m_recebe[i,4]
                                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                                mnum_dup := m_recebe[i,5]
                                        ELSEIF m_recebe[i,1] = 'FI'
                                                mnum_dup := m_recebe[i,11]
                                        ELSEIF m_recebe[i,1] = 'CT'
                                                mnum_dup := m_recebe[i,9]
                                        ENDIF
                                        cComm  := "INSERT INTO sacdupr ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                        cComm  := SR_SQLCodeGen(apCode,;
                                       {mcod_emp                               ,;//1
                                        mdata_sis                              ,;//2
                                        m_recebe[i,1]                          ,;//3
                                        cons_cli[1,8]                          ,;//4
                                        mcod_cli                               ,;//5
                                        mcliente                               ,;//6
                                        m_recebe[i,6]                          ,;//7
                                        m_recebe[i,6]                          ,;//8
                                        mperc_comissao                         ,;//9
                                        mperc_com1                             ,;//10
                                        mvlr_tab                               ,;//11
                                        cod_operado                            ,;//12
                                        STRZERO(mcod_vend,3)                   ,;//13
                                        STRZERO(mnum_ped,6)                    ,;//14
                                        m_recebe[i,7]                          ,;//15
                                        STRZERO(mcod_oper,3)                   ,;//16
                                        IF(mtelemark = 'T',(mcom_oper/100),0)  ,;//17
                                        'C'                                    ,;//18
                                        IF(! EMPTY(cons_cli[1,32]),cons_cli[1,32],cons_cli[1,34]) ,;//19
                                        IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]),;//20
                                        mnum_dup                                ,;//21
                                        m_recebe[i,10]                          ,;//22
                                        IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]),;//23
                                        m_recebe[i,13]                          ,;//24
                                        m_recebe[i,14]                          ,;//25
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. ((m_recebe[i,1]='CT' .OR. m_recebe[i,1]='CH') .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),m_recebe[i,6],CTOD('  /  /  ')),;//26
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. ((m_recebe[i,1]='CT' .OR. m_recebe[i,1]='CH') .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),m_recebe[i,10],0),;//27
                                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. ((m_recebe[i,1]='CT' .OR. m_recebe[i,1]='CH') .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),'B',' '),;//28
                                        m_recebe[i,15]                          ,;//29
                                        IF(m_recebe[i,1]='CH',m_recebe[i,16],' '),;//30
                                        mtot_ipi                                ,;//31
                                        mcom_sem                                ,;//32
                                        m_recebe[i,19]                           ;//33
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)
                                        IF m_recebe[i,1] = 'CH' .OR. m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT'
                                                mtot_ipi := 0
                                        ENDIF
                        NEXT
                        mensagem('Atualizando o PEDIDO....')
                        aret := {}
                        sr_getconnection():exec("SELECT pvlr_fat,pcod_cli,pcod_merc,pos,pcod_vend FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        i:=0
                        FOR i = 1 TO LEN(aret)
                                        cComm  := "UPDATE sacped_s SET ppag = '*'"
                                        ccomm := ccomm +",pcod_cli  = "+sr_cdbvalue(mcod_cli)
                                        ccomm := ccomm +",pcgc = "+sr_cdbvalue(mcgc)
                                        ccomm := ccomm +",pcpf = "+sr_cdbvalue(mcpf)
                                        ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                                        ccomm := ccomm + ",phora_pg = "+sr_cdbvalue(TIME())
                                        IF ! EMPTY(mdesc_cx)
                                                ccomm := ccomm +",pvlr_fat = pvlr_fat - "+sr_cdbvalue(aret[i,1] * mdesc_perc)
                                                ccomm := ccomm +",pdesc_merc = "+sr_cdbvalue(mdesc_cx)
                                        ENDIF
                                        IF aret[i,2] <> mcod_cli
                                                ccomm := ccomm +",pobs4 = "+sr_cdbvalue('Cliente Anterior:'+STR(aret[i,2],5))
                                        ENDIF
                                        ccomm := ccomm + " WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(aret[i,3])
                                        sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        sr_getconnection():exec("UPDATE sacped_s SET ppag = '*'  WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                        sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'FINALIZADO',obs_pc = 'FECHADO',importado = 1 WHERE codigo = "+sr_cdbvalue(VAL(aret[1,4]))+" AND cod_funcionario = "+sr_cdbvalue(ALLTRIM(aret[1,5])),,.f.)
                        mdocumento = 'PD'+STRZERO(mnum_ped,6)
                        mensagem('Atualizando o CAIXA....')
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1])
                                        LOOP
                                ENDIF
                                        mcampo_arq :=  'empresa   ,';//1
                                              +'data      ,';//2
                                              +'tipo      ,';//3
                                              +'tipo_comp ,';//4
                                              +'nota      ,';//5
                                              +'cod_cli   ,';//6
                                              +'cod_vend  ,';//7
                                              +'cod_opera ,';//8
                                              +'hora      ,';//9
                                              +'valor_com ,';//10
                                              +'comissao  ,';//11
                                              +'venci     ,';//12
                                              +'valor     ,';//13
                                              +'num_ban   ,';//14
                                              +'cod_ct    ,';//15
                                              +'c_s       ,';//16
                                              +'num_dup   ,';//17
                                              +'documento ,';//18
                                              +'descri2   ,';//19
                                              +'obs       '  //20
                                        IF m_recebe[i,1] = 'DN'
                                                mnum_dup := STRZERO(mnum_ped,6)
                                                mdup_num := '99999999'
                                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                                mnum_dup := m_recebe[i,5]
                                                mdup_num := m_recebe[i,5]
                                        ELSEIF m_recebe[i,1] = 'CH'
                                                mnum_dup := m_recebe[i,5]
                                                mdup_num := m_recebe[i,4]
                                        ELSEIF m_recebe[i,1] = 'CT'
                                                mnum_dup := m_recebe[i,5]
                                                mdup_num := m_recebe[i,9]
                                        ELSEIF m_recebe[i,1] = 'PX'
                                                mnum_dup := m_recebe[i,5]
                                                mdup_num := m_recebe[i,5]
                                        ELSEIF m_recebe[i,1] = 'FI'
                                                mnum_dup := m_recebe[i,11]
                                                mdup_num := m_recebe[i,11]
                                        ENDIF
                                        aret:={}
                                        cComm  := "INSERT INTO saccaixa ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                        cComm  := SR_SQLCodeGen(apCode,;
                                       {mcod_emp                               ,;//1
                                        mdata_sis                              ,;//2
                                        m_recebe[i,1]                          ,;//3
                                        m_recebe[i,2]                          ,;//4
                                        'PD'+STRZERO(mnum_ped,6)               ,;//5
                                        mcod_cli                    ,;//6
                                        STRZERO(mcod_vend,3)                   ,;//7
                                        cod_operado                            ,;//8
                                        TIME()                                 ,;//9
                                        m_recebe[i,10]                         ,;//10
                                        mperc_comissao                         ,;//11
                                        m_recebe[i,6]                          ,;//12
                                        m_recebe[i,10]                         ,;//13
                                        m_recebe[i,3]                          ,;//14
                                        m_recebe[i,8]                          ,;//15
                                        mcom_sem                               ,;//16
                                        mnum_dup                               ,;//17
                                        mdup_num                               ,;//18
                                        IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '),;//19
                                        m_recebe[i,19]                          ;//20
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        IF mvlr_credcheq > 0.50
                                mobs := 'CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_ped,6)
                                        cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                        ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                        ccomm  := ccomm + "num_ped,operador,obs,sr_deleted)"
                                        ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue('PD'+STRZERO(mnum_ped,6))
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(mvlr_credcheq,2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(mvlr_credcheq,2))+","+sr_cdbvalue(mcod_vend)+","+sr_cdbvalue(STRZERO(mnum_ped,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(mobs)+",' ')"
                                        sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        mensagem('Atualizando o MOVIMENTO....')
                        i := 0
                        FOR i = 1 TO LEN(m_codigo)
                                IF m_codigo[i] = 0;LOOP;ENDIF
                                aret:={}
                                sr_getconnection():exec("UPDATE sacmerc SET dat_ult_s = "+sr_cdbvalue(mdata_sis)+" WHERE sacmerc.cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[i],5)),,.f.)
                                mmont := mmont1 := ' '
                                mc_mont:=mc_mont1:=mcomis:=0
                                IF mtipo_comp = 'AV'
                                        ven(mcod_vend,,,'*')
                                        mcomis          := m_desc[i,16] + sen->scomissao - IF(! EMPTY(m_set[1,116]) .AND. mtelemark = 'T' .AND. m_desc[i,16] + sen->scomissao > 0,m_set[1,116],0)
                                        IF ! EMPTY(VAL(m_desc[i,21]))
                                                mmont          := m_desc[i,20]
                                                mmont1         := m_desc[i,21]
                                                ven(VAL(m_desc[i,20]),,,'*')
                                                mc_mont          := (sen->scomissao+m_desc[i,22]) /2
                                                ven(VAL(m_desc[i,21]),,,'*')
                                                mc_mont1         := (sen->scomissao+m_desc[i,22]) /2
                                        ELSE
                                                mmont          := m_desc[i,20]
                                                ven(VAL(m_desc[i,20]),,,'*')
                                                mc_mont          := sen->scomissao+m_desc[i,22]
                                        ENDIF
                                ELSE
                                        ven(mcod_vend,,,'*')
                                        mcomis          := m_desc[i,16] + sen->scom_praz - IF(! EMPTY(m_set[1,116]) .AND. mtelemark = 'T' .AND. m_desc[i,16] + sen->scom_praz > 0,m_set[1,116],0)
                                        IF ! EMPTY(VAL(m_desc[i,21]))
                                                mmont          := m_desc[i,20]
                                                mmont1         := m_desc[i,21]
                                                ven(VAL(m_desc[i,20]),,,'*')
                                                mc_mont          := (sen->scom_praz+m_desc[i,22]) /2
                                                ven(VAL(m_desc[i,21]),,,'*')
                                                mc_mont1         := (sen->scom_praz+m_desc[i,22]) /2
                                        ELSE
                                                mmont          := m_desc[i,20]
                                                ven(VAL(m_desc[i,20]),,,'*')
                                                mc_mont          := sen->scom_praz+m_desc[i,22]
                                        ENDIF
                                ENDIF
                                aret:={}
                                sr_getconnection():exec('INSERT INTO sacmov (empresa ,';//1
                                                +'num_ped           ,';//2
                                                +'data_ped          ,';//3
                                                +'documento         ,';//4
                                                +'codigo            ,';//5
                                                +'gru_sub           ,';//6
                                                +'produto           ,';//7
                                                +'especie           ,';//8
                                                +'cod_fab           ,';//9
                                                +'fabrica           ,';//10
                                                +'data_s_e          ,';//11
                                                +'ent_sai           ,';//12
                                                +'quantd            ,';//13
                                                +'pr_venda1         ,';//14
                                                +'pr_venda          ,';//15
                                                +'vl_vend           ,';//16
                                                +'vl_fatura         ,';//17
                                                +'peso              ,';//18
                                                +'cod_vend          ,';//19
                                                +'cod_oper          ,';//20
                                                +'cod_cli           ,';//21
                                                +'cliente           ,';//22
                                                +'tipo              ,';//23
                                                +'pr_unit           ,';//24
                                                +'cust_mer          ,';//25
                                                +'isento            ,';//26
                                                +'com_oper          ,';//27
                                                +'tp_venda          ,';//28
                                                +'cond_vezes        ,';//29
                                                +'cond_intev        ,';//30
                                                +'producao          ,';//31
                                                +'comissao          ,';//32
                                                +'montador          ,';//33
                                                +'montador1         ,';//34
                                                +'com_monta         ,';//35
                                                +'com_monta1        ,';//36
                                                +'convidado         ,';//37
                                                +'cod_presente       '; //38
                                                +',sr_deleted)       '+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcod_emp )             +','+; //1
                                                sr_cdbvalue(STRZERO(mnum_ped,6))    +','+; //2
                                                sr_cdbvalue(mdata_ped          )    +','+; //3
                                                sr_cdbvalue(mdocumento         )    +','+; //4
                                                sr_cdbvalue(STRZERO(m_codigo[i],5)) +','+; //5
                                                sr_cdbvalue(m_desc[i,1]           ) +','+; //6
                                                sr_cdbvalue(m_desc[i,2]           ) +','+; //7
                                                sr_cdbvalue(m_desc[i,19]          ) +','+; //8
                                                sr_cdbvalue(m_desc[i,3]           ) +','+; //9
                                                sr_cdbvalue(SUBSTR(m_desc[i,4],1,30))+','+; //10
                                                sr_cdbvalue(mdata_sis               )+','+; //11
                                                sr_cdbvalue('S'                     )+','+; //12
                                                sr_cdbvalue(m_desc[i,5]             )+','+; //13
                                                sr_cdbvalue(m_desc[i,23]            )+','+; //14
                                                sr_cdbvalue(m_desc[i,6]             )+','+; //15
                                                sr_cdbvalue(m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0))+','+; //16
                                                sr_cdbvalue(m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0))+','+; //17
                                                sr_cdbvalue(m_desc[i,9]                                                 )+','+; //18
                                                sr_cdbvalue(STRZERO(mcod_vend,3)                                        )+','+; //19
                                                sr_cdbvalue(STRZERO(mcod_oper,3)                                        )+','+; //20
                                                sr_cdbvalue(mcod_cli                                         )+','+; //21
                                                sr_cdbvalue(SUBSTR(mcliente,1,30)                                       )+','+; //22
                                                sr_cdbvalue('02'                                                        )+','+; //23
                                                sr_cdbvalue(m_desc[i,12]                                                )+','+; //24
                                                sr_cdbvalue(m_desc[i,17]                                                )+','+; //25
                                                sr_cdbvalue(m_desc[i,14]                                                )+','+; //26
                                                sr_cdbvalue(IF(mtelemark = 'T',mcom_oper,0)                             )+','+; //27
                                                sr_cdbvalue(mtipo_comp                                                  )+','+; //28
                                                sr_cdbvalue(mcond_vezes                                                 )+','+; //29
                                                sr_cdbvalue(SUBSTR(mcond_intev,1,2)                                     )+','+; //30
                                                sr_cdbvalue(mproducao                                                   )+','+; //31
                                                sr_cdbvalue(mcomis                                                      )+','+; //32
                                                sr_cdbvalue(mmont                                                       )+','+; //33
                                                sr_cdbvalue(mmont1                                                      )+','+; //34
                                                sr_cdbvalue(mc_mont                                                     )+','+; //35
                                                sr_cdbvalue(mc_mont1                                                    )+','+; //36
                                                sr_cdbvalue(m_desc[i,25]                                                )+','+; //37
                                                sr_cdbvalue(m_desc[i,24]                                                )+','+; //38
                                                sr_cdbvalue(' ')+')',,.f.)
                        NEXT
                        mensagem('Atualizando o CONTA A PAGAR....')
                        c := i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1]) .OR. EMPTY(VAL(m_recebe[i,17]))
                                        LOOP
                                ENDIF
                                sr_getconnection():exec('INSERT INTO sacdupp (empresa ,';//1
                                                +'tipo      ,';//2
                                                +'numero    ,';//3
                                                +'duplicata ,';//4
                                                +'valor_dup ,';//5
                                                +'tip_for   ,';//6
                                                +'fornec    ,';//7
                                                +'cliente   ,';//8
                                                +'emissao   ,';//9
                                                +'venc      ,';//10 +'datpag    ,';//11
                                                +'valor     ,';//12 +'vlpago    ,';//13
                                                +'banco     ,';//14 +'pago      ,';//15
                                                +'operador  ,';//16
                                                +'num_ped   ,';//17
                                                +'obs       ,';//18
                                                +'sr_deleted)       '+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcod_emp                                          )+','+; //1
                                                sr_cdbvalue('PA'                                              )+','+; //2
                                                sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                                sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                                sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //5
                                                sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                                sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                                sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                                sr_cdbvalue(mdata_sis                                         )+','+; //9
                                                sr_cdbvalue(m_recebe[i,6]                                     )+','+; //10 sr_cdbvalue(mdata_sis                                         )+','+; //11
                                                sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //12   sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                                sr_cdbvalue('C'                                               )+','+; //14 sr_cdbvalue('B'                                               )+','+; //15
                                                sr_cdbvalue(cod_operado                                       )+','+; //16
                                                sr_cdbvalue(STRZERO(mnum_ped,6)                               )+','+; //17
                                                sr_cdbvalue('Pedido:'+STRZERO(mnum_ped,6)+' DESCONTO DE CARTAO')+','+; //18
                                                sr_cdbvalue(' ')+')',,.f.)
                        NEXT
                        i := mnum_novo := 0
                        FOR i = 1 TO LEN(mnovo_ped)
                                IF mnovo_ped[i,2] = 0
                                        c_pedi := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_pedi)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(c_pedi) = 1
                                                atencao('Nao e possivel Excluir este Produto pois so existe (01) Um produto no pedido !!!!')
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        c_pedi := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.t.,@c_pedi)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        aret:={}
                                        mensagem('Atualizando o Produto...')
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mnovo_ped[i,1]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mlinha := ' '//aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + c_pedi[mponto,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + c_pedi[mponto,14])+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(mnovo_ped[i,1]),,.f.)
                                        mensagem('Atualizando o Arquivo de LOG...')
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(mnovo_ped[i,1])+','+; //4
                                                                                sr_cdbvalue(c_pedi[mponto,14])+','+; //5
                                                                                sr_cdbvalue(aret[1,56])+','+; //6
                                                                                sr_cdbvalue(aret[1,56] + c_pedi[mponto,14] )+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC23PD1')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue('EXCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                        mensagem('Atualizando o Arquivo de PEDIDO...')
                                        //sr_getconnection():exec("DELETE FROM sacped_s WHERE sr_deleted = ' ' AND SR_RECNO = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                        sr_getconnection():exec("UPDATE sacped_s SET sr_deleted = 'S' WHERE SR_RECNO = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                ELSE
                                        IF mnum_novo = 0
                                                lExit := .T.
                                                WHILE lExit
                                                        sr_begintransaction()
                                                        try
                                                                aret:={}
                                                                sr_getconnection():exec( "select MAX(numero) from sacnoped",,.t.,@aret)
                                                        	mnum_novo = VAL(aret[1,1])+1
                                                                sr_getconnection():exec("update sacnoped set numero = " + sr_cdbvalue(STRZERO(mnum_novo,6)) + ", data_ped = " + sr_cdbvalue( mdata_sis),,.f.)
                                                                sr_committransaction()
                                                                lExit:=.T.
                                                        catch e
                                                                tracelog(valtoprg())
                                                                sr_COMMITtransaction()
                                                                lExit:=.F.
                                                                /*
                                                                aret:={}
                                                                sr_getconnection():exec("SELECT count(*) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_novo,6)),,.t.,@aret)
                                                                IF aret[1,1] > 0
                                                                        lexit := .T.
                                                                ENDIF
                                                                */
                                                        END
                                                        sr_endtransaction()
                                                ENDDO
                                                mhoras := TIME()
                                                atencao('Foi Gerado o Pedido de Numero: '+STRZERO(mnum_novo,6))
                                        ENDIF
                                        mensagem('Foi Gerado o Pedido de Numero: '+STRZERO(mnum_novo,6))

                                        c_pedi := {}
                                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.t.,@c_pedi)
                                        sr_getconnection():exec('COMMIT',,.f.)

                                        mped_merc := {}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mnovo_ped[i,1]),,.t.,@mped_merc)
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
                                                        +'data_so,'   ;//73
                                                        +'cod_pres,'  ;//74
                                                        +'qtd_orig,'  ;//75
                                                        +'numped_orig,';//76
                                                        +'pfecha'      //77
                                                        cComm  := 'INSERT INTO sacped_s ('+mcampo_ped+',sr_deleted) VALUES ('
                                                        cComm  := ccomm + sr_cdbvalue(mcodempresa)+','+; //1
                                                        sr_cdbvalue(STRZERO(mnum_novo,6)      )+','+;//2
                                                        sr_cdbvalue(SUBSTR(NETNAME(),1,10)       )+','+;//3
             			                        sr_cdbvalue(mdata_sis                )+','+;//4
                                                        sr_cdbvalue(c_pedi[1,5]              )+','+;//5
                             			        sr_cdbvalue(c_pedi[1,6]              )+','+;//6
                                                        sr_cdbvalue(c_pedi[1,7]              )+','+;//7
                     		         	        sr_cdbvalue(c_pedi[1,8]              )+','+;//8
                                                        sr_cdbvalue(c_pedi[1,9]              )+','+;//9
                     			                sr_cdbvalue(c_pedi[1,10]             )+','+;//10
                                                        sr_cdbvalue(c_pedi[1,11]             )+','+;//11
                             			        sr_cdbvalue(c_pedi[1,12]             )+','+;//12
                                                        sr_cdbvalue(c_pedi[1,13]             )+','+;//13
                                                        sr_cdbvalue(c_pedi[1,14] - mnovo_ped[i,2] )+','+;//14
                                                        sr_cdbvalue(c_pedi[1,15]             )+','+;//15
             			                        sr_cdbvalue(c_pedi[1,16]             )+','+;//16
                                                        sr_cdbvalue(c_pedi[1,17]             )+','+;//17
                                                        sr_cdbvalue(c_pedi[1,39]             )+','+;//18
                                                        sr_cdbvalue(c_pedi[1,18]             )+','+;//19
             			                        sr_cdbvalue(c_pedi[1,20]             )+','+;//20
                                                        sr_cdbvalue(c_pedi[1,21]             )+','+;//21
                                                        sr_cdbvalue(c_pedi[1,21]             )+','+;//22
                                                        sr_cdbvalue(c_pedi[1,22]             )+','+;//23
             			                        sr_cdbvalue(c_pedi[1,23]             )+','+;//24
                                                        sr_cdbvalue(c_pedi[1,24]             )+','+;//25
                                                        sr_cdbvalue(c_pedi[1,25]             )+','+;//26
                                                        sr_cdbvalue(c_pedi[1,26]             )+','+;//27
             			                        sr_cdbvalue(c_pedi[1,26]             )+','+;//28
                                                        sr_cdbvalue(c_pedi[1,28]             )+','+;//29
                                                        sr_cdbvalue(c_pedi[1,29]             )+','+;//30
                                                        sr_cdbvalue(c_pedi[1,30]             )+','+;//31
              		                                sr_cdbvalue(c_pedi[1,31]             )+','+;//32
                                                        sr_cdbvalue(c_pedi[1,34]             )+','+;//33
                                                        sr_cdbvalue(c_pedi[1,35]             )+','+;//34
                                                        sr_cdbvalue(c_pedi[1,32]             )+','+;//35
             			                        sr_cdbvalue(c_pedi[1,33]             )+','+;//36
                                                        sr_cdbvalue(c_pedi[1,48]             )+','+;//37
                                                        sr_cdbvalue(c_pedi[1,41]             )+','+;//38
                                                        sr_cdbvalue(c_pedi[1,42]             )+','+;//39
     			                                sr_cdbvalue(c_pedi[1,40]             )+','+;//40
                                                        sr_cdbvalue(c_pedi[1,43]             )+','+;//41
                                                        sr_cdbvalue(c_pedi[1,44]             )+','+;//42
                                                        sr_cdbvalue(mhoras                   )+','+;//43
             			                        sr_cdbvalue(c_pedi[1,45]             )+','+;//44
                                                        sr_cdbvalue(c_pedi[1,46]             )+','+;//45
                                                        sr_cdbvalue(c_pedi[1,51]             )+','+;//46
                                                        sr_cdbvalue(c_pedi[1,52]             )+','+;//47
             			                        sr_cdbvalue(c_pedi[1,36]             )+','+;//48
                                                        sr_cdbvalue(c_pedi[1,38]             )+','+;//49
       	                                                sr_cdbvalue(c_pedi[1,53]             )+','+;//50
                                                        sr_cdbvalue(c_pedi[1,54]             )+','+;//51
     			                                sr_cdbvalue(c_pedi[1,55]             )+','+;//52
                                                        sr_cdbvalue(c_pedi[1,56]             )+','+;//53
             			                        sr_cdbvalue(c_pedi[1,57]             )+','+;//54
                                                        sr_cdbvalue(c_pedi[1,58]             )+','+;//55
                                                        sr_cdbvalue(c_pedi[1,78]             )+','+;//56
                                                        sr_cdbvalue(c_pedi[1,77]             )+','+;//57
             			                        sr_cdbvalue(c_pedi[1,79]             )+','+;//58
                                                        sr_cdbvalue(c_pedi[1,86]             )+','+;//59
                                                        sr_cdbvalue(c_pedi[1,87]             )+','+;//60
                                                        sr_cdbvalue(c_pedi[1,88]             )+','+;//61
             			                        sr_cdbvalue(c_pedi[1,89]             )+','+;//62
                                                        sr_cdbvalue(c_pedi[1,92]             )+','+;//63
                                                        sr_cdbvalue(c_pedi[1,80]             )+','+;//64
                                                        sr_cdbvalue(c_pedi[1,81]             )+','+;//65
       	                                                sr_cdbvalue(c_pedi[1,82]             )+','+;//66
                                                        sr_cdbvalue(c_pedi[1,83]             )+','+;//67
     			                                sr_cdbvalue(c_pedi[1,84]             )+','+;//68
                                                        sr_cdbvalue(c_pedi[1,85]             )+','+;//69
                                                        sr_cdbvalue(c_pedi[1,93]             )+','+;//70
                      		                        sr_cdbvalue(c_pedi[1,90]             )+','+;//71
                                                        sr_cdbvalue(c_pedi[1,94]             )+','+;//72
     			                                sr_cdbvalue(DATE()                   )+','+;//73
                                                        sr_cdbvalue(c_pedi[1,99]             )+','+;//74
     			                                sr_cdbvalue(c_pedi[1,14]             )+','+;//75
     			                                sr_cdbvalue(IF(EMPTY(c_pedi[1,108]),STRZERO(mnum_ped,6),c_pedi[1,108]))+','+;//76
                                                        sr_cdbvalue('F'                      )+','+;//77
                                                        sr_cdbvalue(' ')+')'
                                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_getconnection():exec("UPDATE sacped_s SET pquantd = "+sr_cdbvalue(mnovo_ped[i,2])+" WHERE sr_recno = "+sr_cdbvalue(mnovo_ped[i,3]),,.f.)
                                ENDIF
                        NEXT
                sr_committransaction()
        sr_endtransaction()
        mensagem('Atualizando o CREDITO....')
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF m_recebe[i,1] = 'CR'
                        cons_cred := {}
                        mcomando := "SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                        sr_getconnection():exec(mcomando,,.t.,@cons_cred)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF m_recebe[i,10] = cons_cred[1,19]
                                mcomando := "UPDATE saccred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)
                        ELSE
                                mcomando := "UPDATE saccred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)

                                cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(mnum_ped,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        sr_getconnection():exec("COMMIT",,.f.)
                        opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                        IF opcao = 'S'
                                IF ! imp_arq('CREDITO.REL','D','N')
                                        LOOP
                                ENDIF
                                IF m_set[1,65] = 'F'
                                        y:=0
                                        FOR y = 1 TO m_set[1,66]
                                                DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[y,5]+'   ( P A G O )',80))

                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),16);DEVOUT(mdata_sis)

                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[y,10],'99,999,999.99')))

                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])

                                                DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                                IF m_set[1,66] > 1 .AND. y < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                                EJECT
                                        NEXT

                                ELSE
                                        mtraco := REPLI('=',60)
                                        y:=0
                                        FOR y = 1 TO m_set[1,66]
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[y,5]+'   ( P A G O )',35))

                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[y,10],'99,999,999.99')))
                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])

                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                                IF m_set[1,66] > 1 .AND. y < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                        NEXT
                                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                                ENDIF
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                conf_impressao('CREDITO.REL')
                        ENDIF
                ENDIF
        NEXT
        IF m_set[1,111] = 'S'
                WHILE LASTKEY() <> 27
                        IF op_simnao('S','Insira o Documento na impressora p/autenticar',' AUTENTICACAO DE DOCUMENTO ') = 'S'
                                SET DEVICE TO PRINT
                                SET PRINT ON
                                SET PRINT TO (m_indiv[1,20])
                                imprt(m_indiv[1,21],'C')
                                DEVPOS(00,00);DEVOUT(ALLTRIM(SUBSTR(memp_resa,1,4))+ALLTRIM(mdocumento)+cod_operado+DTOC(mdata_sis)+ALLTRIM(TRANSFORM(mtot_nota,'999999.99')))
                                IF m_indiv[1,9] = 'P';DEVPOS(01,00);DEVOUT(' ');ENDIF
                                imprt(m_indiv[1,21],'N')
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        ELSE
                                EXIT
                        ENDIF
                ENDDO
        ENDIF
	IF mvlr_credcheq > 0
                opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                IF opcao = 'S'
                        IF ! imp_arq('CREDITO.REL','D','N')
                                LOOP
                        ENDIF
                        IF m_set[1,65] = 'F'
                                FOR i = 1 TO m_set[1,66]
                                        DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+'PD'+STRZERO(mnum_ped,6)+'   ( P A G O )',80))

                                        DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                        DEVPOS(PROW(),16);DEVOUT(mdata_sis)

                                        DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlr_credcheq,'99,999,999.99')))

                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                        DEVPOS(PROW()+1,16);DEVOUT('CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_ped,6))

                                        DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                        IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                                        ENDIF
                                        EJECT
                                NEXT

                        ELSE
                                mtraco := REPLI('=',60)
                                FOR i = 1 TO m_set[1,66]
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+'PD'+STRZERO(mnum_ped,6)+'   ( P A G O )',35))

                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                        DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlr_credcheq,'99,999,999.99')))
                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STR(mcod_cli,5)+'-'+mcliente)
                                        DEVPOS(PROW()+1,16);DEVOUT('CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_ped,6))

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
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('CREDITO.REL')
                ENDIF

        ENDIF
        IF m_set[1,47] = 'C'
                opcao := 'N'
                i:=0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DU'
                                opcao := op_simnao('S','Deseja imprimir a DUPLICATA No.:')
                                IF opcao = 'N'
                                        EXIT
                                ENDIF
                                IF ! imp_arq('DUPLICATA.REL','D','N')
                                        opcao := 'N'
                                        EXIT
                                ELSE
                                        EXIT
                                ENDIF
                        ENDIF
                NEXT
                IF opcao = 'S'
                        i:=0
                        FOR i = 1 TO LEN(m_recebe)
                                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                                IF m_recebe[i,1] = 'DU'
                                        dup_sis(STR(mcod_cli,5),mcliente,ALLTRIM(cons_cli[1,21])+', '+cons_cli[1,136]+'  '+ALLTRIM(cons_cli[1,137]),cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,29],;
                                                cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],;
                                                'DU',m_recebe[i,5],mdata_sis,m_recebe[i,6],mcod_vend,m_recebe[i,10],cons_cli[1,4])

                                ENDIF
                        NEXT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        //conf_impressao('PD'+STRZERO(mnum_ped,6)+'.REL',,,'B')
                        IF m_indiv[1,9] = 'B'
                                conf_impressao('DUPLICATA.REL',,,'B')
                        ELSE
                                conf_impressao('DUPLICATA.REL')
                        ENDIF
                ENDIF

        ENDIF
        IF m_set[1,62] = 'S' .AND. cons_ped[1,45] = 'AP'
                opcao:= op_simnao('S','Deseja emitir CARNES DE PAGAMENTOS:')
                IF opcao = 'S'
                        emi_carne(mnum_ped)     // prg SACROT
                ENDIF
        ENDIF
        IF m_set[1,87] = 'S' .AND. m_set[1,88] = 'C'
                imp_emba(mnum_ped,'*')
        ENDIF
        IF m_set[1,111] = 'R' .OR. ver_serie() = '141490' .OR. ver_serie() = '141491' .OR. ver_serie() = '141492' .OR. ver_serie() = '141493'
                opcao:= op_simnao('S','Deseja emitir RESUMO DO RECEBIMENTO:')
                IF opcao = 'S'
                        IF ! imp_arq('RES_REC.REL','R')
                                EXIT
                        ENDIF
                        cons_cli:={}
                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_cli) = 0
                                atencao('Nao foi possivel encontrar este cliente...')
                                LOOP
                        ENDIF
                        FOR mcopia = 1 TO 2
                                cons_caixa := {}
                                sr_getconnection():exec("SELECT * FROM saccaixa WHERE nota = "+sr_cdbvalue('PD'+STRZERO(mnum_ped,6)),,.t.,@cons_caixa)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_caixa) > 0
                                        DEVPOS(PROW(),00);DEVOUT('No.do pedido: '+STRZERO(mnum_ped,6))
                                        DEVPOS(PROW()+1,00);DEVOUT('Recebimento.: '+DTOC(cons_caixa[1,3])+' - Hora:'+cons_caixa[1,21])
                                        cons_cli := {}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_caixa[1,16]),,.t.,@cons_cli)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente.....: '+STR(cons_caixa[1,16],5)+' - '+cons_cli[1,3])
                                        DEVPOS(PROW()+1,00);DEVOUT('Fantasia....: '+cons_cli[1,4])
                                        DEVPOS(PROW()+1,00);DEVOUT('Endereco....: '+cons_cli[1,21])
                                        DEVPOS(PROW()+1,00);DEVOUT('Bairro......: '+cons_cli[1,22]+' - Cidade:'+cons_cli[1,24]+' - UF:'+cons_cli[1,25])
                                        DEVPOS(PROW()+1,00);DEVOUT('Cep.........: '+cons_cli[1,26]+' - Tel.:'+cons_cli[1,29]+' - Tel.:'+cons_cli[1,30])
                                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor....: '+cons_caixa[1,15])
                                        ven(VAL(cons_caixa[1,15]),PROW(),PCOL()+2)
                                        DEVPOS(PROW()+1,00);DEVOUT('Operador....: '+cons_caixa[1,17])
                                        ven(VAL(cons_caixa[1,17]),PROW(),PCOL()+2)
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC(' F O R M A   D E   R E C E B I M E N T O ',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                ENDIF
                                i := mtot_ped := 0
                                FOR i = 1 TO LEN(cons_caixa)
                                        IF cons_caixa[i,2] = 'DN'
                                                DEVPOS(PROW()+1,00);DEVOUT('Dinheiro R$..: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'CR'
                                                DEVPOS(PROW()+1,00);DEVOUT('Credito R$...: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99'))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'CH'
                                                DEVPOS(PROW()+1,00);DEVOUT('Cheque R$....: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' Bco: '+cons_caixa[i,6]+' No.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'DU'
                                                DEVPOS(PROW()+1,00);DEVOUT('Duplicata R$.: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' No.: '+cons_caixa[i,8]+IF(cons_caixa[i,20] = '*',' Pag..: ',' Venc.: ')+DTOC(cons_caixa[i,9]))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'FI'
                                                DEVPOS(PROW()+1,00);DEVOUT('Financeira R$: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' No.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'CT'
                                                DEVPOS(PROW()+1,00);DEVOUT('Cartao R$....: '+TRANSFORM(cons_caixa[i,10],'9,999,999.99')+' Cod.: '+cons_caixa[i,7]+' Doc.: '+cons_caixa[i,8]+' Venc.: '+DTOC(cons_caixa[i,9]))
                                                mtot_ped := mtot_ped + cons_caixa[i,10]
                                        ELSEIF cons_caixa[i,2] = 'CA'
                                                DEVPOS(PROW()+1,00);DEVOUT('PEDIDO CANCELADO PELO OPERADOR COD.: '+cons_caixa[i,17])
                                        ELSEIF cons_caixa[i,2] = 'ES'
                                                DEVPOS(PROW()+1,00);DEVOUT(cons_caixa[i,13]+'-'+cons_caixa[i,14])
                                        ELSE
                                                LOOP
                                        ENDIF
                                NEXT
                                DEVPOS(PROW()+2,00);DEVOUT('TOTAL R$...: ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999,999.99')
                                DEVPOS(PROW()+m_indiv[1,16],00)
                                SETPRC(00,00)
                                //EJECT
                        NEXT
                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('RES_REC.REL')
                ENDIF
        ENDIF
        /*
        IF m_set[1,70] = 'S'
                mtipo_imp := m_indiv[1,9]
                mporta_imp := m_indiv[1,7]
                IF ! imp_arq('PD'+STRZERO(mnum_ped,6)+'.REL','T')
                        EXIT
                ENDIF
                IF m_indiv[1,9] = 'B2'
                        boleto2()
                ELSEIF m_indiv[1,9] = 'B'
                        boleto(,,'*',mtroco)
                ELSEIF m_indiv[1,9] = 'L'
                        boleto(,,'*')
                ELSEIF m_indiv[1,9] = 'T'
                        bole_term()
                ELSEIF m_indiv[1,9] = 'F'
                        formula(,,'*')
                ELSEIF m_indiv[1,9] = 'F1'
                        formula(,,'*')
                ENDIF
                SETPRC(00,00)
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('DUPLICATA.REL')
                IF mimp_tipo = 2
                        //lertexto('PD'+STRZERO(mnum_ped,6)+'.REL')
                        atencao('Pressione <ENTER> p/continuar')
                ENDIF
        ENDIF
        */
        IF ! EMPTY(email_cli) .AND. m_set[1,77] = 'S'
                c_pedi := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_pedi)
                sr_getconnection():exec('COMMIT',,.f.)

                IF SUBSTR(c_pedi[1,44],1,2) = 'DN'
                        mdinheiro := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'CH'
                        mcheque := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'FI'
                        mfin := '*'
                        mcod_fin := VAL(c_pedi[1,41])
                        ver_finan(mcod_fin)
                        mtipo_fin := c_pedi[1,43]
                        mvalor_pres := c_pedi[1,40]
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'DU'
                        mdup := '*'
                ELSEIF SUBSTR(c_pedi[1,44],1,2) = 'CT'
                        mcartao := '*'
                ENDIF
                mcond_veze := c_pedi[1,43]
                mcondicao := c_pedi[1,43]
                mprazo := SUBSTR(c_pedi[1,44],3,3)
                m_dia[1] := VAL(SUBSTR(c_pedi[1,44],3,3))
                m_dia[2] := VAL(SUBSTR(c_pedi[1,44],6,3))
                m_dia[3] := VAL(SUBSTR(c_pedi[1,44],9,3))
                m_dia[4] := VAL(SUBSTR(c_pedi[1,44],12,3))
                m_dia[5] := VAL(SUBSTR(c_pedi[1,44],15,3))
                m_dia[6] := VAL(SUBSTR(c_pedi[1,44],18,3))
                m_dia[7] := VAL(SUBSTR(c_pedi[1,44],21,3))
                m_dia[8] := VAL(SUBSTR(c_pedi[1,44],24,3))
                m_dia[9] := VAL(SUBSTR(c_pedi[1,44],27,3))
                m_dia[10] := VAL(SUBSTR(c_pedi[1,44],30,3))
                m_dia[11] := VAL(SUBSTR(c_pedi[1,44],33,3))
                m_dia[12] := VAL(SUBSTR(c_pedi[1,44],36,3))
                m_dia[13] := VAL(SUBSTR(c_pedi[1,44],39,3))
                m_dia[14] := VAL(SUBSTR(c_pedi[1,44],42,3))
                m_dia[15] := VAL(SUBSTR(c_pedi[1,44],45,3))

                email_ped(mnum_ped,email_cli)
        ENDIF
        IF (m_set[1,83] = 'I' .AND. msit_tip <> 'VENDA') .OR. m_indiv[1,26] = 'S' .OR. m_indiv[1,26] = 'P'
                        IF ver_serie() = '141302' .AND. SUBSTR(mvia,1,6) = '2a.via'
                                boleto()
                                mflag := 0
                        ELSE
                                IF m_indiv[1,9] = 'B'
                                        boleto()
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'L'
                                        boleto('*')
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'T'
                                        bole_term()
                                        mflag := 0
                                ELSEIF m_indiv[1,9] = 'F'
                                        formula()
                                ELSEIF m_indiv[1,9] = 'F1'
                                        formula()
                                ELSEIF m_indiv[1,9] = 'M'
                                        formula_1()
                                //ELSEIF m_indiv[1,9] = 'P'
                                        //procomp()
                                ENDIF
                        ENDIF

        ENDIF
/*
        IF ver_serie() = '141235'
                opcao:= op_simnao('N','Deseja emitir Nota Fiscal:')
                IF opcao = 'S'
                        sac211(,,mnum_ped)
                ENDIF
        ENDIF
*/
        m_recebe :={}
        m_desc   :={}
        CLEAR GETS
        RELEASE mlin,mcartao,mprazo_cart,mdesc_cart
        IF mnum <> NIL
                RELEASE ALL
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        limpa(19,20,22,46)
ENDDO
wvw_lclosewindow()
RETURN NIL
/*
        IF EMPTY(mnum_ped) .AND. ver_serie() = '141253'
                DEVPOS(li+1,ci+1);DEVOUT('No.ENVELOPE:')
                @ li+1,ci+14 GET menvelope PICT '@!'
                READ
                IF LASTKEY() = 27 .OR. EMPTY(menvelope)
                        LOOP
                ENDIF
                ********************
                SELE('ped_s');ORDSETFOCUS(10)
                GO TOP
                ********************
                IF ! ped_s->(DBSEEK(menvelope))
                        atencao('ENVELOPE nao Cadastrado !!!')
                        LOOP
                ENDIF
                mnum_ped := VAL(ped_s->pnum_ped)
        ENDIF
*/
/*
        IF ver_serie() = '141403'
                opcao:= mensagem1('Deseja emitir Nota Fiscal:','S','S,N',17)
                IF opcao = 'S'
                        sac211(,,mnum_ped)
                ENDIF
        ENDIF
        mensagem('Deseja emitir Demonstrativo do Recebimento [S/n]:')
        opcao := 'S'
        @ 26,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF opcao = 'S'
                demo_cx()       // SACROT1.PRG
        ENDIF
*/
******************************* F I M ********************************************
* LER DADOS DO CHEQUE COM LEITOR
**********************************
FUNCTION ler_cheque()
*********************
LOCAL mdados:=SPACE(40)
op_tela(10,10,11,70,'DADOS DO CHEQUE')
DEVPOS(00,01);DEVOUT('Passe o Cheque no Leitor:')
//DEVPOS(01,01);DEVOUT('Numero do Banco.........:')
//DEVPOS(02,01);DEVOUT('Numero da Agencia.......:')
//DEVPOS(03,01);DEVOUT('Numero da Conta.........:')
@ 00,27 GET mdados
READ
mn_banco  := SUBSTR(mdados,2,3)
magencia  := SUBSTR(mdados,5,4)
mn_cheque := SUBSTR(mdados,14,6)
mc_c      := SUBSTR(mdados,26,6)
wvw_lclosewindow()
RETURN mn_banco
******************************* F I M ********************************************
* ALTERAR PEDIDO NO RECEBIMENTO
**********************************
FUNCTION altped_rec()
*********************
LOCAL malt_merc:={},mt_ped:=0,malt:={}

MEMVAR mponto,mcod_merc,mquantd,m_alt,cod_operado,m_posi,mnovo_ped

op_tela(4,5,43,90,' ALTERACAO DE PEDIDO NO RECEBIMENTO ',,1)
SETCOR(3)
DEVPOS(00,01);DEVOUT(' PRODUTO                                         QUANTD.    PR.UNIT.      TOTAL')
@ 01,00 TO 01,100
@ 38,00 TO 38,100
SETCOR(1)
mensagem('Escolha com as Setas e Tecle <ENTER>p/Alterar ou <ESC>p/Retornar ao Recebimento')
setcor(1)
mnovo_ped := {}
WHILE .T.
        //c_pedi := {}
        //sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_pedi)
        m_alt := {}
        m_posi := {}
        i := mt_ped:=0
        FOR i = 1 TO LEN(cons_ped)
                AADD(m_posi,cons_ped[i,111])
                AADD(m_alt,cons_ped[i,6]+' '+cons_ped[i,7]+' '+TRANSFORM(cons_ped[i,14],'99,999.99')+' '+TRANSFORM(cons_ped[i,17],ALLTRIM('@E '+m_set[1,98]))+' '+TRANSFORM(cons_ped[i,17] * cons_ped[i,14],ALLTRIM('@E '+m_set[1,98])))
                mt_ped := mt_ped + (cons_ped[i,17] * cons_ped[i,14])
        NEXT
        DEVPOS(39,01);DEVOUT('TOTAL DO PEDIDO:')
        setcor(3)
        DEVPOS(39,COL()+1);DEVOUT(TRANSFORM(mt_ped,'99,999.99'))
        setcor(1)
        mponto := 0
        setcor(10);mponto := ACHOICE(02,01,37,85,m_alt,,,mponto);setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        op_tela(10,10,17,79,' ALTERACAO DE PRODUTOS ')
        CLEAR GETS
        malt_merc := {}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND sr_recno = "+sr_cdbvalue(m_posi[mponto]),,.t.,@malt_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(malt_merc) = 0
                atencao('Codigo Barra nao cadastrado')
                wvw_lclosewindow()
                LOOP
        ENDIF
        mcod_merc := VAL(malt_merc[1,6])
        IF EMPTY(mcod_merc)
                wvw_lclosewindow()
                LOOP
        ENDIF
        DEVPOS(00,00);DEVOUT('Produto....:')
        DEVPOS(01,00);DEVOUT('Descricao..:')
        DEVPOS(02,00);DEVOUT('Saldo Ped..:')
        DEVPOS(03,00);DEVOUT('Quantidade.:')
        DEVPOS(04,00);DEVOUT('Observacao.:')
        SETCOR(3)
        DEVPOS(00,14);DEVOUT(STRZERO(mcod_merc,5))
        DEVPOS(01,14);DEVOUT(malt_merc[1,7])
        DEVPOS(02,14);DEVOUTPICT(malt_merc[1,14],ALLTRIM(m_set[1,98]))
        SETCOR(1)
        aret:={}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        setcor(1)
        mmasc_qtd := unidade(aret[1,14])
        WVW_DrawBoxGet(,03,14,LEN(mmasc_qtd))
        mquantd = malt_merc[1,14]
        @ 03,14 GET mquantd PICT mmasc_qtd WHEN men_get(0,2,'Informe a quantidade que deseja, so nao pode ultrapassar o saldo do Pedido') VALID lim_get()
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                LOOP
        ENDIF
        IF mquantd > malt_merc[1,14]
                atencao('Quantidade Solicitada maior que Quantidade que se encontrar no PEDIDO...')
                wvw_lclosewindow()
                LOOP
        ENDIF
        IF 'S' = op_simnao('S','Confirma Alteracao da Mercadoria:')
                AADD(mnovo_ped,{mcod_merc,mquantd,cons_ped[mponto,109]})
                cons_ped[mponto,14] := mquantd
        ENDIF
        /*
        IF mquantd = 0
                opcao := op_simnao('S','Confirma Exclusao da Mercadoria:')
                IF opcao = 'S'
                        AADD(mnovo_ped,{cons_ped[i,6],mquantd})

                        c_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@c_ped)
                        IF LEN(c_ped) = 1
                                atencao('Nao e possivel Excluir este Produto pois so existe (01) Um produto no pedido !!!!')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        mquantd = 0
                        aret:={}
                        mensagem('Atualizando o Produto...')
                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + c_pedi[mponto,14])*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + c_pedi[mponto,14])+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                        mensagem('Atualizando o Arquivo de LOG...')
                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                        'processo,ent_sai,SR_DELETED )'+;
                                                                        ' VALUES ('+;
                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                        sr_cdbvalue(m_codigo[mponto])+','+; //4
                                                                        sr_cdbvalue(c_pedi[mponto,14])+','+; //5
                                                                        sr_cdbvalue(aret[1,56])+','+; //6
                                                                        sr_cdbvalue(aret[1,56] + c_pedi[mponto,14] )+','+; //7
                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                        sr_cdbvalue('SAC23PD1')+','+; //9
                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                        sr_cdbvalue('EXCLUSAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                        sr_cdbvalue('E')+','+; //11
                                                                        sr_cdbvalue(' ')+')',,.f.)
                        mensagem('Atualizando o Arquivo de PEDIDO...')
                        sr_getconnection():exec("DELETE FROM sacped_s WHERE sr_deleted = ' ' AND SR_RECNO = "+sr_cdbvalue(m_posi[mponto]),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        setcor(1)
                ENDIF
        ELSE
                IF opcao = op_simnao('S','Confirma Alteracao da Mercadoria:')
                        IF mquantd > malt_merc[1,14]
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.t.,@aret)
                                mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] - (mquantd - c_pedi[mponto,14]))*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] - (mquantd - c_pedi[mponto,14]))+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue(m_codigo[mponto]),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                     'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                     'processo,ent_sai,SR_DELETED )'+;
                                                                     ' VALUES ('+;
                                                                     sr_cdbvalue(DATE())+','+; //1
                                                                     sr_cdbvalue(mdata_sis)+','+; //2
                                                                     sr_cdbvalue(TIME())+','+; //3
                                                                     sr_cdbvalue(m_codigo[mponto])+','+; //4
                                                                     sr_cdbvalue(IF(mquantd < c_pedi[mponto,14],(mquantd - c_pedi[mponto,14])*-1,mquantd - c_pedi[mponto,14]))+','+; //5
                                                                     sr_cdbvalue(aret[1,56])+','+; //6
                                                                     sr_cdbvalue(aret[1,56] - (mquantd - c_pedi[mponto,14]))+','+; //7
                                                                     sr_cdbvalue(cod_operado)+','+; //8
                                                                     sr_cdbvalue('SAC23PD1')+','+; //9
                                                                     sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                     sr_cdbvalue('ALTERACAO PD: '+STRZERO(mnum_ped,6))+','+; //11
                                                                     sr_cdbvalue(IF(mquantd < c_pedi[mponto,14],'E','S'))+','+; //12
                                                                     sr_cdbvalue(' ')+')',,.f.)
                        ENDIF
                        cComm  := "UPDATE sacped_s SET pquantd = "+sr_cdbvalue(mquantd)
                        cComm  := ccomm + ",pobs_prod = "+sr_cdbvalue(c_pedi[mponto,58])
                        cComm  := ccomm + " WHERE SR_RECNO = "+sr_cdbvalue(m_posi[mponto])
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
        ENDIF
        */
        wvw_lclosewindow()
ENDDO
CLEAR GETS
wvw_lclosewindow()
RETURN .T.


FUNCTION op_menu()
****************
mtipo_pg := WVW_CBGetIndex( , mid_cb)
atencao(STRZERO(mtipo_pg,4))
RETURN NIL



