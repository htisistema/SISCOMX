* FECHAMENTO DO CAIXA
*********************
MEMVAR getlist,nivel_acess,mdata_sis,memp_resa

FUNCTION sac33(mfecha_tp,mtipo_fecha)
*************************************
LOCAL MPRG:='SAC33',;
      lba,cba,li,ci,la,ca,lc,cc,lb,cb,opcao,;
      mtot_din,mtot_pix,mtot_ch,mtot_ch_p,mtot_vale,mtot_dup,mtot_cart,mtot_av,mtot_fi,mtot_doc_pg,mtot_tranf,;
      mcred_rec,mcred_pg,mqtd_ch,mqtd_ch_p,mqtd_dup,mqtd_cart,mqtd_re,mqtd_fi,mqtd_pix,mqtd_tranf,;
      mtot_ap,mtot_re,mtot_dp,mdata,mtraco,mfundo,msangria,mquantd,mtot_des,;
      mdescri2,mcod_vend,mcod_op,mtip_ordem,mecf,mdata_ped,mop_dn:='S',tela_conf,mpag,;
      mtot_vol,mtot_dia,mtot_ped,mtot_geral,mtipo_rel,m_cartao:={},m_finan:={},i,;
      mfin_aux,misento,mn_isento,mdup_rec,mtipo_form:=' ',mnum_cx,mponto,mprocura,op_ped,;
      mped_pgp:=0,mped_pg:=0,mped_ab:=0,mpedido:=SPACE(6),mtot_can:=0,mtip_fecha:=' ',;
      mvlr_dn_t:=0,mch_t_a:=0,mqtd_ch_t:=0,mct_t:=0,mqtd_ct_t:=0,mch_t_p:=0,mqtd_chp_t:=0,;
      mpag_dup:=' ',m_param:={},mres_ped:='S',mimp_prod:='N',mn_ped:=' ',cons_ped:={},;
      c_ped:=0,q_caixa:={},mcons:={},msoma_cart:={},;
      mveri_din,mveri_pix,mveri_ch,mveri_du_mveri_cart,mveri_fi,mtotal_geral:=0,;
     cComm,m_vendedor:={},v:=0

PRIVATE mnome_ven,mcom_ven,mdescri1,mimp,menv,mtit,mtipo,mcod_cli,mnum_ped,msit,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcodemp:='   ',m_pedido:={},mcliente:=SPACE(40),;
        mtotdup,mtotch,mtotfi,mtotct,mqtddu,mqtdch,mqtdfi,mqtdct,cons_cli:={}

IF mtipo_fecha = NIL
	IF ! ver_nivel(mprg,'FECHAMENTO DO CAIXA','135',nivel_acess,,'AMBIE')
	        RETURN NIL
	ENDIF
        op_tela(02,03,12,95,' FECHAMENTO DO CAIXA ')
	//op_tela(00,05,28,93,'FECHAMENTO DO CAIXA')
ELSE
	IF ! ver_nivel(mprg+mtipo_fecha,'FECHAMENTO DO CAIXA COM VERIFICACAO','1345',nivel_acess,,'AMBIE')
	        RETURN NIL
	ENDIF
	op_tela(00,05,28,93,'FECHAMENTO DO CAIXA COM VERIFICACAO')
ENDIF

mtraco := REPLI('=',80)

lba := 23
cba := 72

li := 10
ci := 64
la := 16
ca := 76

lc := 16
cc := 45
lb := 19
cb := 79
*--------------------------------------------------------------------------
//IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*--------------------------------------------------------------------------
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        ASIZE(m_param,0)
        ASIZE(m_cartao,0)
        ASIZE(m_finan,0)
        ASIZE(m_pedido,0)
        m_vendedor:={}
        mqtd_ch := mqtd_ch_p:= mqtd_dup := mqtd_cart:= mqtd_re := mqtd_fi:= mqtd_pix := mqtd_tranf := ;
        mtot_des := mtot_din := mtot_pix := mtot_ch := mtot_ch_p := mtot_vale := mtot_tranf := ;
        mtot_dup := mtot_cart := mtot_av := mtot_ap := mtot_re := mtot_dp := ;
        mtot_fi := mtot_can := mcred_rec := mcred_pg := mdup_rec:= mfundo := msangria := ;
        mquantd := mnumero1 := mnumero2 := mcod_vend := mcod_op := ;
        mvlr_dn_t:=mch_t_a:=mqtd_ch_t:=mct_t:=mqtd_ct_t:=mch_t_p:=mqtd_chp_t:= ;
        mtotdu := mtotch := mtotfi := mtotct := ;
        mqtddu := mqtdch := mqtdfi := mqtdct := ;
        mtot_doc_pg := 0

      	mveri_din:=mveri_ch:=mveri_du:=mveri_cart:=mveri_fi:=mveri_din:=0

        mdata := mdata_sis
        mdescri1 := mdescri2 := SPACE(40)
        mtip_ordem := '1'
        mecf := ' '
        mcodemp:=SPACE(3)

        mtipo_rel := 'G'
        mtipo_form := 'F'
        op_ped := 'D'
        mop_dn := 'S'
        mimp_prod := 'N'
        DEVPOS(0,1);DEVOUT('Resumo do Dia..................................: ')
        DEVPOS(0,63);DEVOUT('Tipo Consulta: ')
        DEVPOS(1,1);DEVOUT('Tipo de Fechamento do CAIXA....................:')
        DEVPOS(2,1);DEVOUT('Tipo do Fechamento do Caixa [R]esumo [G]eral...:')
        DEVPOS(3,1);DEVOUT('Ordem [1]Pedido [8]Documento [S]Sint. Operador.:')
        DEVPOS(4,1);DEVOUT('Tipo Relatorio [F]ormulario [B]obina...........:')
        DEVPOS(5,1);DEVOUT('Pedidos Pedentes [T]odos, [D]ia ou [N]enhum....:')
        DEVPOS(6,1);DEVOUT('Imprimir Pedidos Pago c/DINHEIRO [S/N].........:')
        DEVPOS(7,1);DEVOUT('Imprimir Resumo de Pedidos [S/N]...............:')
        DEVPOS(8,1);DEVOUT('Imprimir os Produtos dos Pedidos [S/N].........:')
        IF mmult_emp = 'S'
                DEVPOS(9,1);DEVOUT('Digite o Codigo da Empresa.....................:')
                //mcodemp := mcodempresa
        ENDIF
/*
	@ 10,00 TO 10,100
        DEVPOS(11,1);DEVOUT('Total em Dinheiro  R$..........................:')
        DEVPOS(12,1);DEVOUT('Total em Cheques   R$..........................:')
        DEVPOS(13,1);DEVOUT('Total em Cartoes   R$..........................:')
        DEVPOS(14,1);DEVOUT('Total em Duplicata R$..........................:')
        DEVPOS(15,1);DEVOUT('Total em Financiamento R$......................:')
        DEVPOS(16,1);DEVOUT('                                                 --------------')
        DEVPOS(17,1);DEVOUT('TOTAL..........................................:')
*/
        @ 0,50 GET mdata
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                EXIT
        ENDIF
        IF mdata # mdata_sis
                IF ! ver_nivel(mprg+'ALTCX','ALTERAR A DATA DO FECHAMENTO DO CAIXA','135',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
        ENDIF
        q_caixa:={}
        sr_getconnection():exec("SELECT * FROM saccaixa WHERE data = "+ sr_cdbvalue(mdata),,.t.,@q_caixa)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(q_caixa) = 0
		IF op_simnao('S','Nao existe Movimento neste periodo deseja continuar:') = 'N'
			LOOP
		ENDIF
	ENDIF
        @ 0,78 GET mecf PICT '@!' VALID mecf $ 'F,N,1,2, '
        READ
        IF LASTKEY() = 27
		LOOP
	ENDIF
        op_tela(10,64,13,76,' Opcoes ')
        opcao := 0
        setcor(10)
        @ 0,0 PROMPT ' Geral       '
        @ 1,0 TO 1,30
        //@ 1,0 PROMPT ' No.Pedido   '
        @ 2,0 PROMPT ' Vendedor    '
        @ 3,0 PROMPT ' Operador    '
        //@ 5,0 PROMPT ' Caixa       '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        wvw_lclosewindow()
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mtip_fecha := ' '
        IF opcao = 1
                IF ! ver_nivel(mprg+'GE','FECHAMENTO DO CAIXA (GERAL)','135',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                mtip_fecha := 'G'
	        setcor(3)
		DEVPOS(1,50);DEVOUT('FECHAMENTO DO CAIXA (GERAL)')
	        setcor(1)
        ELSEIF opcao = 2
                IF ! ver_nivel(mprg+'VD','FECHAMENTO DO CAIXA (POR VENDEDOR)','135',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                mtip_fecha := 'V'
                op_tela(lc,cc,lb,cb,' Fechamento Vendedor ')
                DEVPOS(01,01);DEVOUT('Codigo do Vendedor:')
                @ 01,21 GET mcod_vend PICT '999' VALID ven(mcod_vend,lc+2,cc+1)
                READ
                mensagem('Pressione <ENTER>')
                INKEY(0)
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
	        setcor(3)
		DEVPOS(1,50);DEVOUT('FECHAMENTO DO CAIXA (POR VENDEDOR): '+STRZERO(mcod_vend,3))
	        setcor(1)
        ELSEIF opcao = 3
                IF ! ver_nivel(mprg+'OP','FECHAMENTO DO CAIXA (POR OPERADOR)','135',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                mtip_fecha := 'O'
                op_tela(lc,cc,lb,cb,' Fechamento p/Operador ')
                DEVPOS(01,01);DEVOUT('Codigo do Operador:')
                @ 01,21 GET mcod_op PICT '999' VALID ven(mcod_op,02,01)
                READ
                mensagem('Pressione <ENTER>')
                INKEY(0)
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
	        setcor(3)
		DEVPOS(1,50);DEVOUT('FECHAMENTO DO CAIXA (POR OPERADOR): '+STRZERO(mcod_op,3))
	        setcor(1)
/*
        ELSEIF opcao = 5
                IF ! ver_nivel(mprg+'CX','FECHAMENTO DO CAIXA (POR CAIXA)','135',nivel_acess,,'AMBIE')
                        LOOP
                ENDIF
                mtip_fecha := 'C'
                mnum_cx := SPACE(4)
                op_tela(lc,cc,lb,cb,' Fechamento p/No.Caixa ')
                DEVPOS(01,01);DEVOUT('Numero do Caixa:')
                @ 01,18 GET mnum_cx PICT '9999'
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                caix->(DBSEEK(mnum_cx))
	        setcor(3)
		DEVPOS(1,62);DEVOUT('FECHAMENTO DO CAIXA (POR OPERADOR)')
	        setcor(1)
*/
        ENDIF
        IF m_set[1,61] = 'S' .AND. LEN(q_caixa) > 0
                IF SUBSTR(q_caixa[1,28],1,1) = 'G'
                        mfecha_tp := 'G'
                        mtit := 'Fechamento do Caixa - *** GERAL ***'
                ELSE
                        mtit := 'Fechamento do Caixa - *** PARCIAL ***'
                        mfecha_tp := 'P'
                        op_tela(10,10,15,70,'A T E N C A O')
                        DEVPOS(01,00);DEVOUT('ATENCAO - Deseja fazer o fechamento [P]arcial ou [G]eral')
                        DEVPOS(02,00);DEVOUT('(*** Fazendo o << FECHAMENTO DO CAIXA GERAL >>, nao pode')
                        DEVPOS(03,00);DEVOUT('fazer  mais  nenhum  recebimento  de PEDIDOS e nao BAIXA')
                        DEVPOS(04,00);DEVOUT('DUPLICATA pelo Caixa ***): ')
                        @ 04,COL()+1 GET mfecha_tp PICT '@!' VALID mfecha_tp $ 'P,G'
			READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27;LOOP;ENDIF
                        IF mfecha_tp = 'G'
                                mfecha_tp := 'G'
                                mtit := 'Fechamento do Caixa - *** GERAL ***'
                        ENDIF
                ENDIF
        ELSE
                mtit := 'Fechamento do Caixa - *** PARCIAL ***'
                mfecha_tp := 'P'
        ENDIF
        @ 2,50 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'R,G'
        @ 3,50 GET mtip_ordem PICT '@!' VALID mtip_ordem $ '1,8,S,D'
        @ 4,50 GET mtipo_form PICT '@!' VALID mtipo_form $ 'F,B'
        @ 5,50 GET op_ped PICT '@!' VALID op_ped $ 'T,D,N'
        @ 6,50 GET mop_dn PICT '@!' VALID mop_dn $ 'S,N'
        @ 7,50 GET mres_ped PICT '@!' VALID mres_ped $ 'S,N'
        @ 8,50 GET mimp_prod PICT '@!' VALID mimp_prod $ 'S,N'
        @ 9,50 GET mcodemp PICT '@!' VALID ver_emp(mcodemp,,,,'*') WHEN mmult_emp = 'S'
        //@ 07,41 GET mpag_dup PICT '@!' VALID mpag_dup $ 'S,N' WHEN ver_serie() = '141417'
        READ
        IF LASTKEY() = 27
		LOOP
	ENDIF
	
	IF mtipo_fecha <> NIL
	        @ 11,50 GET mveri_din  PICT '999,999,999.99'
        	@ 12,50 GET mveri_ch   PICT '999,999,999.99'
	        @ 13,50 GET mveri_du   PICT '999,999,999.99'
        	@ 14,50 GET mveri_cart PICT '999,999,999.99'
	        @ 15,50 GET mveri_fi   PICT '999,999,999.99'
	        @ 15,50 GET mveri_pix   PICT '999,999,999.99'
        	READ
		setcor(3)
        	DEVPOS(17,50);DEVOUT(TRANSFORM(mveri_din+mveri_ch+mveri_du+mveri_cart+mveri_fi+mveri_pix,'999,999,999.99'))
		setcor(1)
		IF mveri_din+mveri_ch+mveri_du+mveri_cart+mveri_fi+mveri_pix > 0
			IF op_simnao('S','Confirma os dados Informados:') = 'N' .OR. LASTKEY() = 27
				LOOP
			ENDIF
		ENDIF
	ENDIF
        wvw_lclosewindow()
        IF LASTKEY() = 27
                EXIT
        ENDIF
	//setcor(3)
        //DEVPOS(0,17);DEVOUT(mdata)
        //DEVPOS(0,44);DEVOUT(mecf)
	setcor(1)
        m_vendedor := {}
        sr_getconnection():exec("SELECT scod_op,snome,0,0,0,0,0,0,0 FROM insopera ORDER BY snome",,.t.,@m_vendedor)
        sr_getconnection():exec('COMMIT',,.f.)

        mensagem('Aguarde um Momento Coletanto DADOS DOCUMENTOS PAGO PELO MOVIMENTO "DU"')
        mov_doc := {}
        sr_getconnection():exec("SELECT COUNT(*),SUM(vlpago) FROM sacdupr WHERE mov_cx = 'M' AND tipo = 'DU' AND datpag IS NOT NULL AND datope = "+sr_cdbvalue(mdata),,.t.,@mov_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mov_doc) > 0
                mqtddu := mov_doc[1,1]
                mtotdu := mov_doc[1,2]
        ENDIF
        mensagem('Aguarde um Momento Coletanto DADOS DOCUMENTOS PAGO PELO MOVIMENTO "CH"')
        mov_doc := {}
        sr_getconnection():exec("SELECT COUNT(*),SUM(vlpago) FROM sacdupr WHERE mov_cx = 'M' AND tipo = 'CH' AND datpag IS NOT NULL AND datope = "+sr_cdbvalue(mdata),,.t.,@mov_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mov_doc) > 0
                mqtdch := mov_doc[1,1]
                mtotch := mov_doc[1,2]
        ENDIF
        mensagem('Aguarde um Momento Coletanto DADOS DOCUMENTOS PAGO PELO MOVIMENTO "FI"')
        mov_doc := {}
        sr_getconnection():exec("SELECT COUNT(*),SUM(vlpago) FROM sacdupr WHERE mov_cx = 'M' AND tipo = 'FI' AND datpag IS NOT NULL AND datope = "+sr_cdbvalue(mdata),,.t.,@mov_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mov_doc) > 0
                mqtdfi := mov_doc[1,1]
                mtotfi := mov_doc[1,2]
        ENDIF
        mensagem('Aguarde um Momento Coletanto DADOS DOCUMENTOS PAGO PELO MOVIMENTO "CT"')
        mov_doc := {}
        sr_getconnection():exec("SELECT COUNT(*),SUM(vlpago) FROM sacdupr WHERE mov_cx = 'M' AND tipo = 'CT' AND datpag IS NOT NULL AND datope = "+sr_cdbvalue(mdata),,.t.,@mov_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mov_doc) > 0
                mqtdct := mov_doc[1,1]
                mtotct := mov_doc[1,2]
        ENDIF
        mensagem('Aguarde um Momento Coletanto DADOS ....')

        mcons := {}
        sr_getconnection():exec("SELECT codigo,cartao FROM saccarta ORDER BY codigo",,.t.,@mcons)
        sr_getconnection():exec('COMMIT',,.f.)
        i := 0
        FOR i = 1 TO LEN(mcons)
                AADD(m_cartao,{mcons[i,1],mcons[i,2],0})
        NEXT
/*
        i:=0
        FOR i = 1 TO LEN(m_cartao)
                mcons := {}
                sr_getconnection():exec("SELECT SUM(valor) FROM saccaixa",,.t.,@mcons)

        NEXT
*/
        mcons := {}
        sr_getconnection():exec("SELECT cod_fin,desc_fin FROM sacfin WHERE aliq_fin IS NULL ORDER BY cod_fin",,.t.,@mcons)
        sr_getconnection():exec('COMMIT',,.f.)
        i := 0
        FOR i = 1 TO LEN(mcons)
                AADD(m_finan,{mcons[i,1],mcons[i,2],0})
        NEXT

        IF mtip_fecha = 'O'
                cComm  := "UPDATE saccaixa SET fechado = "+sr_cdbvalue(mfecha_tp+mtip_fecha)+" WHERE cod_opera = "+sr_cdbvalue(STRZERO(mcod_op,3))+" AND data = "+sr_cdbvalue(mdata)
                sr_getconnection():exec(ccomm,,.f.)
        ELSE
                cComm  := "UPDATE saccaixa SET fechado = "+sr_cdbvalue(mfecha_tp+mtip_fecha)+" WHERE data = "+sr_cdbvalue(mdata)
                sr_getconnection():exec(ccomm,,.f.)
        ENDIF
        sr_getconnection():exec("COMMIT",,.f.)

        cComm  := "SELECT * FROM saccaixa "
        //cComm  := ccomm +" WHERE NOT tipo = 'ES' AND data = "+ sr_cdbvalue(mdata)
        cComm  := ccomm +" WHERE data = "+ sr_cdbvalue(mdata)
        IF mecf = 'F'
                ccomm := ccomm + " AND (num_cup IS NOT NULL OR nota LIKE 'CP%')"
        ENDIF
        IF mecf = 'N'
                ccomm := ccomm + " AND num_cup IS NULL AND nota NOT LIKE 'CP%'"
        ENDIF
        IF mecf = '1'
                ccomm := ccomm + " AND c_s IS NOT NULL"
        ENDIF
        IF mecf = '2'
                ccomm := ccomm + " AND c_s IS NULL"
        ENDIF
        IF opcao = 2
                ccomm := ccomm + " AND cod_vend = "+ sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF opcao = 3
                ccomm := ccomm + " AND cod_opera = "+ sr_cdbvalue(STRZERO(mcod_op,3))
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+ sr_cdbvalue(mcodemp)
        ENDIF
        IF mtip_ordem = '1'
                ccomm := ccomm + " ORDER BY nota,tipo,documento,descri1"
        ELSEIF mtip_ordem = '8'
                ccomm := ccomm + " ORDER BY tipo,nota,documento,descri1"
        ELSEIF mtip_ordem = 'S'
                ccomm := ccomm + " ORDER BY cod_opera,tipo,descri1,nota,documento"
        ELSEIF mtip_ordem = 'D'
                ccomm := ccomm + " ORDER BY cod_opera,tipo,nota,documento"
        ENDIF
        q_caixa:={}
        sr_getconnection():exec(ccomm,,.t.,@q_caixa)
        sr_getconnection():exec('COMMIT',,.f.)
        i:=0
        FOR i = 1 TO LEN(q_caixa)
                IF (q_caixa[i,11] = 'AV' .AND. q_caixa[i,2] <> 'RE' .AND. q_caixa[i,2] <> 'ES')
                        mtot_av += q_caixa[i,10]
                ENDIF
                IF q_caixa[i,11] = 'AP'
                        IF mdata <= q_caixa[i,9] .AND. q_caixa[i,2] = 'CT'
                                mtot_ap += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] > mdata .AND. q_caixa[i,20] = ' '
                                mtot_ap += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = ' '
                                mtot_ap += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'FI'
                                mtot_ap += q_caixa[i,10]
                        ENDIF
                ENDIF
                IF q_caixa[i,2] = 'DN' .AND. q_caixa[i,4] = 'DUPLI_AP'
                        mtot_doc_pg += q_caixa[i,10]
                        LOOP
                ELSEIF q_caixa[i,2] = 'FD'
                        mfundo += q_caixa[i,10]
                        LOOP
                ELSEIF q_caixa[i,2] = 'SG'
                        msangria += q_caixa[i,10]
                        LOOP
                ENDIF
                IF ! EMPTY(q_caixa[i,29])
                        IF q_caixa[i,29] = 'B' .OR. q_caixa[i,2] = 'DN'
                                mvlr_dn_t += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] = mdata
                                mch_t_a += q_caixa[i,10]
                                mqtd_ch_t ++
                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] > mdata
                                mch_t_p += q_caixa[i,10]
                                mqtd_chp_t ++
                        ELSEIF q_caixa[i,2] = 'CT'
                                mct_t += q_caixa[i,10]
                                mqtd_ct_t ++
                        ENDIF
                        mdup_rec += q_caixa[i,10]
                        mqtd_re ++
                        IF opcao = 1
                                v:=0
                                FOR v = 1 TO LEN(m_vendedor)
                                        IF m_vendedor[v,1] = q_caixa[i,17]
                                                IF q_caixa[i,29] = 'B' .OR. q_caixa[i,2] = 'DN'
                                                        m_vendedor[v,3] := m_vendedor[v,3]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'CH'
                                                        m_vendedor[v,4] := m_vendedor[v,4]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'CT'
                                                        m_vendedor[v,5] := m_vendedor[v,5]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'DU'
                                                        m_vendedor[v,6] := m_vendedor[v,8]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'FI'
                                                        m_vendedor[v,7] := m_vendedor[v,7]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'PX'
                                                        m_vendedor[v,8] := m_vendedor[v,8]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'TR'
                                                        m_vendedor[v,9] := m_vendedor[v,9]  + q_caixa[i,10]
                                                ENDIF
                                                EXIT
                                        ENDIF
                                NEXT
                        ENDIF

                ELSE
                        IF q_caixa[i,2] = 'DN' .AND. q_caixa[i,29] = ' '
                                mtot_din := mtot_din + q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] > mdata .AND. q_caixa[i,20] = ' '
                                mtot_ch_p += q_caixa[i,10]
                                mqtd_ch_p ++
                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] = mdata .AND. q_caixa[i,29] = ' '
                                mtot_ch += q_caixa[i,10]
                                mqtd_ch ++
                        ELSEIF (q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = '*') .OR. (q_caixa[i,2] = 'FI' .AND. q_caixa[i,20] = '*');
                                .OR. (q_caixa[i,2] = 'RE' .AND. q_caixa[i,20] = '*') .OR. (q_caixa[i,2] = 'CH' .AND. q_caixa[i,20] = '*');
                                .OR. (q_caixa[i,2] = 'VL' .AND. q_caixa[i,20] = '*')
                                mdup_rec += q_caixa[i,10]
                                mqtd_re ++
                        ELSEIF q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = ' '
                                mtot_dup += q_caixa[i,10]
                                mqtd_dup ++
                        ELSEIF q_caixa[i,2] = 'CT' .AND. q_caixa[i,20] = '*'
                                mdup_rec += q_caixa[i,10]
                                mqtd_re ++
                        ELSEIF q_caixa[i,2] = 'CT'
                                mtot_cart += q_caixa[i,10]
                                mqtd_cart ++
                        ELSEIF q_caixa[i,2] = 'VL'
                                mtot_vale += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'DE' .OR. q_caixa[i,2] = 'DA'
                                mtot_des += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'VL' .AND. q_caixa[i,20] = '*'
                                mtot_re += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'RE'
                                mtot_re += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'DP'
                                mtot_dp += q_caixa[i,10]
                        ELSEIF q_caixa[i,2] = 'FI'
                                mtot_fi += q_caixa[i,10]
                                mqtd_fi ++
                        ELSEIF q_caixa[i,2] = 'PX'
                                mtot_pix += q_caixa[i,10]
                                mqtd_pix ++
                        ELSEIF q_caixa[i,2] = 'TR'
                                mtot_tranf += q_caixa[i,10]
                                mqtd_tranf ++
                        ELSEIF q_caixa[i,2] = 'CA'
                                mtot_can ++
                        ELSEIF q_caixa[i,2] = 'CR'
                                IF q_caixa[i,11] = 'AV'
                                        mcred_pg += q_caixa[i,10]
                                ELSE
                                        mcred_rec += q_caixa[i,10]
                                ENDIF
                        ELSEIF q_caixa[i,2] = 'ES'
                        ELSEIF ver_tipdc(q_caixa[i,2],'*')
                                mdup_rec += q_caixa[i,10]
                                mqtd_re ++
                        ENDIF
                        IF opcao = 1
                                v:=0
                                FOR v = 1 TO LEN(m_vendedor)
                                        IF m_vendedor[v,1] = q_caixa[i,17]
                                                IF q_caixa[i,2] = 'DN' .AND. q_caixa[i,29] = ' '
                                                        m_vendedor[v,3] := m_vendedor[v,3]  + q_caixa[i,10]
                                                ELSEIF (q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] > mdata .AND. q_caixa[i,20] = ' ') .OR. (q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] = mdata .AND. q_caixa[i,29] = ' ')
                                                        m_vendedor[v,4] := m_vendedor[v,4]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'CT'
                                                        m_vendedor[v,5] := m_vendedor[v,5]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = ' '
                                                        m_vendedor[v,6] := m_vendedor[v,6]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'FI'
                                                        m_vendedor[v,7] := m_vendedor[v,7]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'PX'
                                                        m_vendedor[v,8] := m_vendedor[v,8]  + q_caixa[i,10]
                                                ELSEIF q_caixa[i,2] = 'TR'
                                                        m_vendedor[v,9] := m_vendedor[v,9]  + q_caixa[i,10]
                                                ENDIF
                                                EXIT
                                        ENDIF
                                NEXT
                        ENDIF
                ENDIF
        NEXT
	IF mtipo_fecha <> NIL .AND. ;
	   (mveri_din + mveri_ch + mveri_cart + mveri_fi + mveri_du + mveri_pix) < (mfundo + mtot_din + mtot_ch + mtot_cart + mtot_dup + mtot_fi + mtot_pix + mtot_ch_p + mvlr_dn_t + mch_t_a + mch_t_p + mct_t)
          	atencao('O SOMATORIO INFORMADO NAO CONFERE COM O SISTEMA....')
        ENDIF		
        //DEVPOS(23,30);DEVOUT(TRANSFORM(mqtddu,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotdu,'99,999,999.99'))
        //DEVPOS(24,30);DEVOUT(TRANSFORM(mqtdch,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotch,'99,999,999.99'))
        //DEVPOS(25,30);DEVOUT(TRANSFORM(mqtdct,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotct,'99,999,999.99'))
        //DEVPOS(26,30);DEVOUT(TRANSFORM(mqtdfi,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotfi,'99,999,999.99'))
        setcor(1)
        //atencao('Pressione Qualquer Tecla p/Prossegir ou <ESC> p/Retornar')
        mpag := 1
        IF ! imp_arq('CX'+SUBSTR(DTOC(mdata),1,2)+SUBSTR(DTOC(mdata),4,2)+SUBSTR(DTOC(mdata),7)+'.REL','R')
                LOOP
        ENDIF
        mensagem('Aguarde Imprimindo o CAIXA...')
        mtraco := REPLI('=',80)
        mtipo := 'Data do Fechamento: '+DTOC(mdata)+'  -  Hora: '+TIME()
        IF ! EMPTY(mcod_vend)
                mtipo := mtipo + ' - Vendedor:'+STRZERO(mcod_vend,3)
        ELSEIF ! EMPTY(mcod_op)
                mtipo := mtipo + ' - Operador:'+STRZERO(mcod_op,3)
        ELSEIF ! EMPTY(mnum_cx)
                mtipo := mtipo + ' - Caixa:'+mnum_cx
        ENDIF
        IF mtipo_form = 'F'
                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
		IF mtipo_fecha = NIL
        		imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,02);DEVOUT('TP/NF')
                        DEVPOS(PROW(),13);DEVOUT('Descricao')
                        DEVPOS(PROW(),127);DEVOUT('Valor')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        IF LEN(q_caixa) > 0
                                m_ped := q_caixa[1,4]
                        ENDIF
                        i:=0
                        FOR i = 1 TO LEN(q_caixa)
                                prog_imp(i,q_caixa[i,4])
                                mdescri1 := mdescri2 := SPACE(40)
                                IF q_caixa[i,13] <> SPACE(40) .OR. q_caixa[i,14] <> SPACE(40) .AND. q_caixa[i,2] = 'CT'
                                        mdescri1 := q_caixa[i,13]
                                        mdescri2 := q_caixa[i,14]
                                        IF q_caixa[i,2] = 'CT' .AND. EMPTY(q_caixa[i,20]) .AND. SUBSTR(q_caixa[i,13],1,1) <> '*'
                                                mdescri1 = 'Cartao de Credito '+RTRIM(q_caixa[i,14])+'          No.: '+q_caixa[i,8]
                                                mdescri2 := ' '
                                                x := 0
                                                FOR x = 1 TO LEN(m_cartao)
                                                        IF q_caixa[i,7] = m_cartao[x,1]
                                                                m_cartao[x,3] := m_cartao[x,3] + q_caixa[i,10]
                                                                EXIT
                                                        ENDIF
                                                NEXT
                                        ELSEIF q_caixa[i,2] = 'CT' .AND. q_caixa[i,20] = '*' .AND. SUBSTR(q_caixa[i,13],1,1) <> '*'
                                                mdescri1 = 'Cartao PAGO       '+RTRIM(q_caixa[i,14])+'          No.: '+q_caixa[i,8]
                                                mdescri2 := ' '
                                        ENDIF
                                ELSE
                                        mdescri2 := ' '
                                        IF q_caixa[i,2] = 'FD'
                                                mdescri1 := 'Fundo de Caixa  -  Operador:'+q_caixa[i,17]
                                        ENDIF
                                        IF q_caixa[i,2] = 'SG'
                                                mdescri1 = 'Sangria do Caixa  -  Operador:'+q_caixa[i,17]
                                        ENDIF
                                        IF q_caixa[i,2] = 'CH'.AND. q_caixa[i,29] = 'B'
                                                mdescri1 = 'Cheque PAGO         No.Bco.: '+q_caixa[i,6]+'  No.: '+q_caixa[i,8]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Duplicata PAGA                    No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'FI' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Financiamento Pago (parcela)      No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'RE' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Recebimento (Parcela)             No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,29] = 'B'
                                                mdescri1 = 'Tipo:'+q_caixa[i,2]+' - Documento PAGO          No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'CH'.AND. q_caixa[i,9] > mdata
                                                mdescri1 = 'Cheque pre-datado   No.Bco.: '+q_caixa[i,6]+'  No.: '+q_caixa[i,8]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] = mdata
                                                mdescri1 = 'Cheque Avista       No.Bco.: '+q_caixa[i,6]+'  No.: '+q_caixa[i,8]
                                        ELSEIF q_caixa[i,2] = 'TR'
                                                mdescri1 = 'TRANSFERENCIA DE MERCADORIA       No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'CR'
                                                IF q_caixa[i,11] = 'AV'
                                                        mdescri1 = 'CREDITO DE CLIENTE (PAGO)         No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                                ELSE
                                                        mdescri1 = 'CREDITO DE CLIENTE (RECEBIDO)     No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                                ENDIF
                                        ELSEIF q_caixa[i,2] = 'DU'
                                                mdescri1 = 'Duplicata Receber                 No.: '+q_caixa[i,5]+'  Venc.: '+DTOC(q_caixa[i,9])
                                        ELSEIF q_caixa[i,2] = 'DN'
                                                mdescri1 = 'Vendas a Dinheiro                                                      '
                                        ELSEIF q_caixa[i,2] = 'PX'
                                                mdescri1 = 'Vendas no PIX                     No.: '+q_caixa[i,5]+'   '
                                        ELSEIF q_caixa[i,2] = 'FI'
                                                mdescri1 = 'Financiamento                     No.: '+q_caixa[i,8]+'  Venc.: '+DTOC(q_caixa[i,9])
                                                x := 0
                                                FOR x = 1 TO LEN(m_finan)
                                                        IF q_caixa[i,7] = m_finan[x,1]
                                                                m_finan[x,3] := m_finan[x,3] + q_caixa[i,10]
                                                                EXIT
                                                        ENDIF
                                                NEXT
                                        ENDIF
                                ENDIF
                                IF mtipo_rel = 'G'
                                        IF mop_dn = 'N'
                                                IF q_caixa[i,2] <> 'DN'
                                                        DEVPOS(PROW()+1,00);DEVOUT(q_caixa[i,4])
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(q_caixa[i,31])
                                                        DEVPOS(PROW(),12);DEVOUT(RTRIM(mdescri1)+RTRIM(mdescri2))
                                                        IF EMPTY(q_caixa[i,16])
                                                                DEVPOS(PROW(),89);DEVOUT('                          Op:'+q_caixa[i,17])
                                                        ELSE
                                                                ver_cli(q_caixa[i,16],,,'*')
                                                                DEVPOS(PROW(),80);DEVOUT('Cli:'+STR(q_caixa[i,16],5)+'-'+LEFT(mcliente,15)+'  Vnd:'+q_caixa[i,15]+' Op:'+q_caixa[i,17])
                                                        ENDIF
                                                        DEVPOS(PROW(),122);DEVOUTPICT(q_caixa[i,10],'999,999.99')
                                                        IF mimp_tipo = 2
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(q_caixa[i,21])
                                                        ENDIF
                                                        conf_impressao('DUPLICATA.REL')
                                                        IF ! EMPTY(q_caixa[i,32])
	                                                       DEVPOS(PROW()+1,12);DEVOUT('OBSERVACAO: '+q_caixa[i,32])
	                                               	ENDIF
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT(q_caixa[i,4])
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(q_caixa[i,31])
                                                DEVPOS(PROW(),12);DEVOUT(RTRIM(mdescri1)+RTRIM(mdescri2))
                                                IF EMPTY(q_caixa[i,16])
                                                        DEVPOS(PROW(),89);DEVOUT('                          Op:'+q_caixa[i,17])
                                                ELSE
                                                        ver_cli(q_caixa[i,16],,,'*')
                                                        DEVPOS(PROW(),80);DEVOUT('Cli:'+STR(q_caixa[i,16],5)+'-'+LEFT(mcliente,15)+'  Vnd:'+q_caixa[i,15]+' Op:'+q_caixa[i,17])
                                                ENDIF
                                                DEVPOS(PROW(),122);DEVOUTPICT(q_caixa[i,10],'999,999.99')
                                                IF mimp_tipo = 2
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(q_caixa[i,21])
                                                ENDIF
                                                IF ! EMPTY(q_caixa[i,32])
                                                        DEVPOS(PROW()+1,12);DEVOUT('OBSERVACAO: '+q_caixa[i,32])
	                                        ENDIF
                                        ENDIF
                                ENDIF
                                IF PROW() >= 59
                                        EJECT
                                        mpag ++
                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('TP/NF')
                                        DEVPOS(PROW(),13);DEVOUT('Descricao')
                                        DEVPOS(PROW(),127);DEVOUT('Valor')
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                                ENDIF
                                IF mn_ped <> q_caixa[i,4]
                                        IF mtipo_rel = 'G' .AND. mimp_prod = 'S'  .AND. SUBSTR(mn_ped,1,2) = 'PD'
                                                cons_ped := {}
                                                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(SUBSTR(mn_ped,3,6))
                                                sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(cons_ped) > 0
                                                        c_ped := 0
                                                        FOR c_ped = 1 TO LEN(cons_ped)
                                	                        DEVPOS(PROW()+1,12);DEVOUT('Produto: '+cons_ped[c_ped,6]+'-'+cons_ped[c_ped,7]+' Quantd.: '+TRANSFORM(cons_ped[c_ped,14],'999,999.99')+' Vlr.Unit.: '+TRANSFORM(cons_ped[c_ped,18],'999,999.99')+' TOTAL: '+TRANSFORM(cons_ped[c_ped,14]+cons_ped[c_ped,18],'999,999.99'))
                                                                IF PROW() >= 59
                                                                        EJECT
                                                                        mpag ++
                                                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                                                        imprt(mtipo_imp,'C')
                                                                        DEVPOS(PROW()+1,00);DEVOUT('TP/NF')
                                                                        DEVPOS(PROW(),13);DEVOUT('Descricao')
                                                                        DEVPOS(PROW(),127);DEVOUT('Valor')
                                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                                                                ENDIF
                                                        NEXT
                                                ENDIF
                                        ENDIF
                                        mn_ped := q_caixa[i,4]
                                ENDIF
                        NEXT
                        IF PROW() >= 25
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                        ENDIF
                        IF m_set[1,91] = 'A'
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+3,00);DEVOUT('*****************  RESUMO  *********************')
                                DEVPOS(PROW()+1,00);DEVOUT('Total Fundo de Caixa...........:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mfundo,'9,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em DINHEIRO..............:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_din,'9,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES AVISTA........:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ch,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_ch,'99.999'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CARTAO DE CREDITO.....:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_cart,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_cart,'99.999'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total DUPLICATA A RECEBER......:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dup,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_dup,'99.999'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total Recebimentos Diversos....:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_re,'9,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES PRE-DATADO....:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ch_p,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_ch_p,'99.999'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total FINANCIAMENTO............:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_fi,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_fi,'99.999'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de PIX...................:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_pix,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_pix,'99.999'))

                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DOCUMENTOS RECEBIDOS.....:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mdup_rec,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_re,'999,999'))

                                DEVPOS(PROW()+1,00);DEVOUT('Total Credito Cliente RECEBIDO.:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mcred_rec,'99,999,999.99')
                                DEVPOS(PROW()+1,35);DEVOUT('-------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL RECEBIMENTOS (A).........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_cart + mtot_dup + mtot_ch_p + mtot_re + mtot_fi + mtot_pix + mcred_rec + mdup_rec,'99,999,999.99')
                                imprt(mtipo_imp,'N-')

                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total Credito Cliente PAGO.....:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcred_pg,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')


                                DEVPOS(PROW()+1,00);DEVOUT('Total de Vales.................:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_vale,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Despesas..............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_des,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Retirada p/Deposito...:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_dp,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos Pagos......:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_doc_pg,'99,999,999.99')
                                DEVPOS(PROW()+1,35);DEVOUT('-------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DE DEBITOS (B)...........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_des + mtot_dp + mtot_doc_pg - mtot_vale,'99,999,999.99')
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('Somatorio (A)+(B)..:')
                                DEVPOS(PROW(),26);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_cart + mtot_dup + mtot_ch_p + mtot_fi + mtot_pix + mdup_rec + mcred_rec + mtot_re + mtot_vale + mtot_des + mtot_dp + mtot_doc_pg,'99,999,999.99')
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')

                                DEVPOS(PROW()+1,00);DEVOUT('********* DOCUMENTOS PAGOS POR TRASNFERENCA  ***********')
                                DEVPOS(PROW()+2,00);DEVOUT('Total em DINHEIRO..............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mvlr_dn_t,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES AVISTA........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mch_t_a,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ch_t,'9,999.99'))

                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES PRE-DATADO....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mch_t_p,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_chp_t,'9,999.99'))

                                DEVPOS(PROW()+1,00);DEVOUT('Total em CARTAO DE CREDITO.....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mct_t,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ct_t,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('************************************************')


                        ELSE
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('************ FATURAMENTO TOTAL *****************')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('FATURAMENTO TOTAL DO DIA.......:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_din+mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mcred_rec,'99,999,999.99')
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+1,00);DEVOUT('************ DOCUMENTOS A RECEBER **************')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CARTAO DE CREDITO.....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_cart,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_cart,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_cart / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total DUPLICATA A RECEBER......:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_dup,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_dup,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_dup / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total FINANCIAMENTO............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_fi,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_fi,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_fi / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('*****************  RESUMO  *********************')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em DINHEIRO..............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_din,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('                    ')
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_din / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES AVISTA........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_ch,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ch,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_ch / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES PRE-DATADO....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_ch_p,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ch_p,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_ch_p / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total Credito Cliente RECEBIDO.:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mcred_rec,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de PIX...................:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_pix,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_pix,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_pix / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de TRANFERENCIA..........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_tranf,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_tranf,'9,999.99'))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('% Faturamento: '+TRANSFORM((mtot_tranf / (mtot_ch+mtot_cart+mtot_dup+mtot_ch_p+mtot_fi+mtot_pix+mtot_tranf+mtot_din)) * 100,'9,999.99'))
                                DEVPOS(PROW()+1,35);DEVOUT('-------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('SUB-TOTAL .....................:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_din+mtot_ch+mtot_ch_p+mcred_rec+mtot_pix+mtot_tranf,'99,999,999.99')
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+2,00);DEVOUT('Total em DINHEIRO..............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mvlr_dn_t,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES AVISTA........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mch_t_a,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ch_t,'9,999.99'))

                                DEVPOS(PROW()+1,00);DEVOUT('Total em CHEQUES PRE-DATADO....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mch_t_p,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_chp_t,'9,999.99'))

                                DEVPOS(PROW()+1,00);DEVOUT('Total em CARTAO DE CREDITO.....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mct_t,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantidade: '+TRANSFORM(mqtd_ct_t,'9,999.99'))

                                DEVPOS(PROW()+1,35);DEVOUT('-------------              --------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DOCUMENTOS RECEBIDOS.....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mdup_rec,'99,999,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('QUANTIDADE: '+TRANSFORM(mqtd_re,'999,999'))
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+1,00);DEVOUT('Total Recebimentos Diversos....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_re,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total Fundo de Caixa...........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mfundo,'99,999,999.99')
                                DEVPOS(PROW()+1,35);DEVOUT('-------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL RECEBIMENTOS (A).........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_ch_p + mtot_re + mdup_rec + mcred_rec + mtot_pix + mtot_tranf,'99,999,999.99')
                                imprt(mtipo_imp,'N-')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total Credito Cliente PAGO.....:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mcred_pg,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')

                                DEVPOS(PROW()+1,00);DEVOUT('Total de Vales.................:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_vale,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Despesas..............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_des,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Retirada p/Deposito...:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_dp,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos Pagos......:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_doc_pg,'99,999,999.99')
                                DEVPOS(PROW()+1,35);DEVOUT('-------------')
                                imprt(mtipo_imp,'N+')
                                DEVPOS(PROW()+1,00);DEVOUT('TOTAL DE DEBITOS (B)...........:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_des + mtot_dp + mtot_doc_pg - mtot_vale,'99,999,999.99')
                                DEVPOS(PROW(),35);DEVOUTPICT(mtot_des + mtot_dp + mtot_doc_pg - mtot_vale,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')

                                DEVPOS(PROW()+1,00);DEVOUT('Somatorio (A) + (B)............:')
                                DEVPOS(PROW(),35);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_ch_p + mdup_rec + mcred_rec+mtot_pix+mtot_tranf + mtot_re + mtot_des + mtot_dp + mtot_doc_pg - mtot_vale,'99,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')
                                imprt(mtipo_imp,'N-')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Vendas a vista........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_av,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Vendas a prazo........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_ap,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Outros recebimentos............:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_re+mdup_rec,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Recebimento p/Movimento (DU)...:')
                        DEVPOS(PROW(),35);DEVOUT(TRANSFORM(mqtddu,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotdu,'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Recebimento p/Movimento (CH)...:')
                        DEVPOS(PROW(),35);DEVOUT(TRANSFORM(mqtdch,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotch,'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Recebimento p/Movimento (CT)...:')
                        DEVPOS(PROW(),35);DEVOUT(TRANSFORM(mqtdct,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotct,'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Recebimento p/Movimento (FI)...:')
                        DEVPOS(PROW(),35);DEVOUT(TRANSFORM(mqtdfi,'99,999,999.99')+' - Valor: '+TRANSFORM(mtotfi,'99,999,999.99'))
                        IF LEN(m_cartao) > 0
                                DEVPOS(PROW()+2,00);DEVOUT('********************  RESUMO DOS CARTOES ****************')
                                i := 0
                                FOR i = 1 TO LEN(m_cartao)
                                        DEVPOS(PROW()+1,00);DEVOUT(m_cartao[i,1]+'-'+m_cartao[i,2]+':')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_cartao[i,3],'99,999,999.99')
		                      DEVPOS(PROW(),PCOL()+1);DEVOUT(' - (%):'+TRANSFORM((m_cartao[i,3] / mtot_cart) * 100,'9,999.99'))
                                NEXT
                                DEVPOS(PROW()+1,26);DEVOUT('--------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em Cartao.........:')
                                DEVPOS(PROW(),27);DEVOUTPICT(mtot_cart,'99,999,999.99')
                        ENDIF
                        IF PROW() >= 57
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                        ENDIF
                        IF LEN(m_finan) > 0
                                DEVPOS(PROW()+1,00);DEVOUT('**************  RESUMO DOS FINANCIAMENTO **********')
                                i := 0
                                FOR i = 1 TO LEN(m_finan)
                                        DEVPOS(PROW()+1,00);DEVOUT(m_finan[i,1]+'-'+m_finan[i,2]+':')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_finan[i,3],'99,999,999.99')
                                NEXT
                                DEVPOS(PROW()+1,31);DEVOUT('--------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em Financiamento..:')
                                DEVPOS(PROW(),31);DEVOUTPICT(mtot_fi,'99,999,999.99')
                        ENDIF
                        IF opcao = 1
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+2,00);DEVOUT('**************************************  RESUMO DOS OPERADORES *************************************************')
                                DEVPOS(PROW()+1,00);DEVOUT('Vendedor                 Dinheiro     Cheque     Cartao  Duplicata    Financ.        PIX     TRANF.   T O T A L')
                                DEVPOS(PROW()+1,00);DEVOUT('---------------------------------------------------------------------------------------------------------------')
                                v := 0
                                FOR v = 1 TO LEN(m_vendedor)
                                        IF EMPTY(m_vendedor[v,3]+m_vendedor[v,4]+m_vendedor[v,5]+m_vendedor[v,6]+m_vendedor[v,7]+m_vendedor[v,8]+m_vendedor[v,9])
                                                LOOP
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(SUBSTR(m_vendedor[v,1]+' - '+m_vendedor[v,2],1,22)+' '+TRANSFORM(m_vendedor[v,3],'999,999.99')+' '+TRANSFORM(m_vendedor[v,4],'999,999.99')+' '+TRANSFORM(m_vendedor[v,5],'999,999.99')+' '+TRANSFORM(m_vendedor[v,6],'999,999.99')+' '+TRANSFORM(m_vendedor[v,7],'999,999.99')+' '+TRANSFORM(m_vendedor[v,8],'999,999.99')+' '+TRANSFORM(m_vendedor[v,9],'999,999.99')+'  '+TRANSFORM(m_vendedor[v,3]+m_vendedor[v,4]+m_vendedor[v,5]+m_vendedor[v,6]+m_vendedor[v,7]+m_vendedor[v,8]+m_vendedor[v,9],'999,999.99'))
                                NEXT
                                DEVPOS(PROW()+1,00);DEVOUT('***************************************************************************************************************')
                                imprt(mtipo_imp,'N')
                        ENDIF
                        IF PROW() >= 57
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                        ENDIF
                        // PRODUTO ISENTOS
                        cComm  := "SELECT pquantd * pvlr_fat FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND pisento = 'S'"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                misento := cons_ped[1,1]
                        ENDIF

                        // PRODUTO NAO ISENTOS
                        cComm  := "SELECT pquantd * pvlr_fat FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND (pisento = 'N' OR pisento IS NULL)"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mped_ab:=0
                        IF LEN(cons_ped) > 0
                                mn_isento := cons_ped[1,1]
                        ENDIF

                        // PEDIDOS PAGOS DO DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*' AND pdatapag = pdat_ped"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mped_pg := LEN(cons_ped)
                        ENDIF

                        // PEDIDOS PAGOS DE OUTRO DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND NOT pdatapag = pdat_ped"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mped_pgp := LEN(cons_ped)
                        ENDIF

                        // PEDIDOS ABERTOS DOS DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped = "+sr_cdbvalue(mdata)+" AND (ppag IS NULL OR ppag = ' ')"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mped_ab:=0
                        IF LEN(cons_ped) > 0
                                mped_ab := LEN(cons_ped)
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT('******  RESUMO MERCAD. <ISENTAS E NAO ISENTAS> PEDIDOS PAGOS ******')
                        DEVPOS(PROW()+1,00);DEVOUT('Mercadoria ISENTAS.............:')
                        DEVPOS(PROW(),35);DEVOUTPICT(misento,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Mercadoria NAO ISENTAS.........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mn_isento,'99,999,999.99')
                        IF PROW() >= 57
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                        ENDIF
                        IF mres_ped = 'S'
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('*************  RESUMO DE PEDIDOS  **************')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emitidos........:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg+mped_ab,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emititdos PAGOS.:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emititdos ABERTO:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_ab,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Pendente PAGOS..:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pgp,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total GERAL de Pedidos PAGOS.....:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg+mped_pgp,'99,999,999')
                        ENDIF
                        IF ! EMPTY(m_pedido)
                                DEVPOS(PROW()+2,00);DEVOUT('*** VERIFICAR PEDIDOS NAO ENCONTRADO NO CAIXA **')
                                i:=0
                                FOR i = 1 TO LEN(m_pedido)
                                        DEVPOS(PROW()+1,00);DEVOUT('No.Pedido: '+m_pedido[i])
                                NEXT
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                        IF mimp_tipo = 2
                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                SETPRC(00,00)
                        ELSE
                                EJECT
                        ENDIF

                        IF op_ped <> 'N'
                                mensagem('Aguarde Imprimindo o PEDIDOS (EM ABERTO)...')
                                cons_ped := {}
                                cComm  := "SELECT pdat_ped,pnum_ped,pcod_cli,(select razao from saccli where cod_cli = pcod_cli),SUM(pquantd * pvlr_fat) FROM sacped_s WHERE sr_deleted = ' ' AND (ppag IS NULL OR ppag = ' ')"
                                IF op_ped = 'D'
                                        ccomm := ccomm + " AND pdat_ped = "+sr_cdbvalue(mdata)
                                ENDIF
                                IF ! EMPTY(mcodemp)
                                        ccomm := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
                                ENDIF
                                ccomm := ccomm + " GROUP BY 1,2,3"
                                ccomm := ccomm + " ORDER BY pdat_ped,pnum_ped"
                                sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                                sr_getconnection():exec('COMMIT',,.f.)

                                IF LEN(cons_ped) > 0
                                        mtot_dia := mtot_geral := 0
                                        mtit = 'Movimento de Pedido (ABERTO)'
                                        mtipo = 'Do Dia '+DTOC(mdata)
                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Pedido')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Cliente                                         ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('TC')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Sit.')
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',55))
                                        i:=0
                                        FOR i = 1 TO LEN(cons_ped)
                                                msit := 'aberto'
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(DTOC(cons_ped[i,1]))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_ped[i,2])
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STR(cons_ped[i,3],5)+' - ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_ped[i,4])
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cons_ped[i,5],'999,999.99')
                                                DEVPOS(PROW(),PCOL()+3);DEVOUT(msit)
                                                mtot_dia += cons_ped[i,5]
                                                mtot_geral += cons_ped[i,5]
                                                IF PROW() >= 59
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                                        imprt(mtipo_imp,'N')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),10);DEVOUT('No.Pedido')
                                                        DEVPOS(PROW(),18);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),58);DEVOUT('Valor Pedido')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                        LOOP
                                                ENDIF
                                        NEXT
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        IF PROW() >= 55
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),10);DEVOUT('No.Pedido')
                                                DEVPOS(PROW(),18);DEVOUT('Cliente')
                                                DEVPOS(PROW(),58);DEVOUT('Valor Pedido')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        DEVPOS(PROW()+2,00);DEVOUT('Total GERAL em R$:')
                                        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                        imprt(mtipo_imp,'N',1)
                                        IF mimp_tipo = 2
                                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                                SETPRC(00,00)
                                        ELSE
                                                EJECT
                                        ENDIF
                                ENDIF
                        ENDIF


                        /*
                        IF op_ped <> 'N'
                                mensagem('Aguarde Imprimindo o PEDIDOS (EM ABERTO)...')
                                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND (ppag IS NULL OR ppag = ' ')"
                                IF op_ped = 'D'
                                        ccomm := ccomm + " AND pdat_ped = "+sr_cdbvalue(mdata)
                                ENDIF
                                IF ! EMPTY(mcodemp)
                                        ccomm := ccomm + " AND pempresa = "+sr_cdbvalue(mcodemp)
                                ENDIF
                                ccomm := ccomm + " ORDER BY pdat_ped,pnum_ped"
                                dbUseArea( .F.,"SQLRDD",cComm,"q_ped_s")
                                malias := 'q_ped_S'
                                SELE('q_ped_s')
                                sr_getconnection():exec('COMMIT',,.f.)
                                DBGOTOP()
                                IF ! EOF()
                                        mtit = 'Movimento de Pedido (ABERTO)'
                                        mtot_vol := mtot_dia := mtot_ped := mtot_geral := 0
                                        mtipo = 'Do Dia '+DTOC(mdata)
                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Pedido')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Cliente                                         ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Vlr Pedido')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('TC')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Sit.')
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',55))
                                        WHILE ! EOF()
                                                mcod_cli := q_ped_s->pcod_cli
                                                mnum_ped := q_ped_s->pnum_ped
                                                mtot_ped := 0
                                                msit := 'aberto'
                                                mdata_ped := q_ped_s->pdat_ped
                                                WHILE mnum_ped = q_ped_s->pnum_ped .AND. ! EOF()
                                                        mtot_ped := mtot_ped + (q_ped_s->pquantd * q_ped_s->pvlr_fat)
                                                        IF msit <> 'cancel.'
                                                                mtot_vol := mtot_vol + q_ped_s->pquantd
                                                        ENDIF
                                                        SKIP
                                                ENDDO
                                                mtot_dia := mtot_dia + mtot_ped
                                                mtot_geral := mtot_geral + mtot_ped
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(mdata_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mnum_ped)
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(STR(mcod_cli,5)+' - ')
                                                cons_cli:={}
                                                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                IF LEN(cons_cli) > 0
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[1,3])
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[1,8])
                                                ELSE
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(40))
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(1))
                                                ENDIF
                                                //ver_cli(VAL(mcod_cli),PROW(),PCOL()+1,'*')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999.99')
                                                DEVPOS(PROW(),PCOL()+3);DEVOUT(msit)
                                                IF PROW() >= 59
                                                        mpag ++
                                                        EJECT
                                                        cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                                        imprt(mtipo_imp,'N')
                                                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                        DEVPOS(PROW(),10);DEVOUT('No.Pedido')
                                                        DEVPOS(PROW(),18);DEVOUT('Cliente')
                                                        DEVPOS(PROW(),58);DEVOUT('Valor Pedido')
                                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                        DEVPOS(PROW()+1,58);DEVOUT('--------------')
                                        DEVPOS(PROW()+1,41);DEVOUT('Total do dia R$:')
                                        DEVPOS(PROW(),58);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                        DEVPOS(PROW(),58);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        IF PROW() >= 55
                                                mpag ++
                                                EJECT
                                                cabecalho(mpag,mtit,mtipo,mprg,mcodemp)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                                DEVPOS(PROW(),10);DEVOUT('No.Pedido')
                                                DEVPOS(PROW(),18);DEVOUT('Cliente')
                                                DEVPOS(PROW(),58);DEVOUT('Valor Pedido')
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        ENDIF
                                        DEVPOS(PROW()+2,00);DEVOUT('Total GERAL em R$:')
                                        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                                        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_geral,'999,999,999.99')))
                                        DEVPOS(PROW()+1,00);DEVOUT('Total de VOLUME..:')
                                        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                                        DEVPOS(PROW(),18);DEVOUT(LTRIM(TRANSFORM(mtot_vol,'999,999,999.99')))
                                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                                        imprt(mtipo_imp,'N',1)
                                        IF mimp_tipo = 2
                                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                                SETPRC(00,00)
                                        ELSE
                                                EJECT
                                        ENDIF
                                ENDIF
                                q_ped_s->(DBCLOSEAREA())
                        ENDIF
                        */

                ELSE
			imprt(mtipo_imp,'N')
		        DEVPOS(PROW()+1,01);DEVOUT('Total em Dinheiro  R$......: '+TRANSFORM(mveri_din ,'999,999,999.99'))
        		DEVPOS(PROW()+1,01);DEVOUT('Total em Cheques   R$......: '+TRANSFORM(mveri_ch  ,'999,999,999.99'))
		        DEVPOS(PROW()+1,01);DEVOUT('Total em Cartoes   R$......: '+TRANSFORM(mveri_du  ,'999,999,999.99'))
        		DEVPOS(PROW()+1,01);DEVOUT('Total em Duplicata R$......: '+TRANSFORM(mveri_cart,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('Total em Financiamento R$..: '+TRANSFORM(mveri_fi  ,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('Total em PIX           R$..: '+TRANSFORM(mveri_pix  ,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('                             --------------')
		        DEVPOS(PROW()+1,01);DEVOUT('TOTAL......................: '+TRANSFORM(mveri_din+mveri_ch+mveri_du+mveri_cart+mveri_fi+mveri_pix  ,'999,999,999.99'))

	                DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
        	        DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(m_set[1,129]))+2),80))
                	//DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,129]),80))
	                DEVPOS(PROW()+3,66);DEVOUT(TIME()+' Hrs.')

		ENDIF        	 
	         
        ELSE            // BOBINA
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(memp_resa)
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',55))
                DEVPOS(PROW()+1,00);DEVOUT(mtit)
                DEVPOS(PROW()+1,00);DEVOUT(mtipo)
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',55))

		IF mtipo_fecha = NIL
                        DEVPOS(PROW()+1,02);DEVOUT('TP/NF')
                        DEVPOS(PROW(),09);DEVOUT('Descricao')
                        DEVPOS(PROW(),26);DEVOUT('Valor')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',55))
                        i:=0
                        FOR i = 1 TO LEN(q_caixa)
                                IF q_caixa[i,13] <> SPACE(40) .OR. q_caixa[i,14] <> SPACE(40)
                                        mdescri1 := LEFT(q_caixa[i,13],19)+' Op:'+q_caixa[i,17]
                                        IF q_caixa[i,2] = 'CT'
                                                mdescri1 = 'Cartao Credito   - Op:'+q_caixa[i,17]
                                                x := 0
                                                FOR x = 1 TO LEN(m_cartao)
                                                        IF q_caixa[i,7] = m_cartao[x,1]
                                                                m_cartao[x,3] := m_cartao[x,3] + q_caixa[i,10]
                                                                EXIT
                                                        ENDIF
                                                NEXT
                                        ENDIF
                                ELSE
                                        IF q_caixa[i,2] = 'FD'
                                                mdescri1 := 'Fundo de Caixa  - Op.:'+q_caixa[i,17]
                                                mdescri2 := SPACE(40)
                                        ENDIF
                                        IF q_caixa[i,2] = 'SG'
                                                mdescri1 = 'Sangria do Caixa  - Op.:'+q_caixa[i,17]
                                                mdescri2 := SPACE(40)
                                        ENDIF
                                        IF q_caixa[i,2] = 'CH'.AND. q_caixa[i,9] > mdata
                                                mdescri1 = 'Cheque pre-datado - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'CH' .AND. q_caixa[i,9] = mdata
                                                mdescri1 = 'Cheque Avista     - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'DU' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Duplicatas Pagas  - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'FI' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Financiamento Pago- Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'RE' .AND. q_caixa[i,20] = '*'
                                                mdescri1 = 'Recebimento Parc. - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'TR'
                                                mdescri1 = 'TRANSF.MERCADORIA - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'DU'
                                                mdescri1 = 'Duplicata Receber - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'DN'
                                                mdescri1 = 'Vendas a Dinheiro - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'FI'
                                                mdescri1 = 'Financiamento     - Op.:'+q_caixa[i,17]
                                        ELSEIF q_caixa[i,2] = 'CR'
                                                IF q_caixa[i,11] = 'AV'
                                                        mdescri1 = 'CRED.CLIENTE (PG) - Op.:'+q_caixa[i,17]
                                                ELSE
                                                        mdescri1 = 'CRED.CLIENTE (REC)- Op.:'+q_caixa[i,17]
                                                ENDIF
                                        ENDIF
                                ENDIF
                                IF mtipo_rel = 'G'
                                        IF mimp_tipo = 1
                                                DEVPOS(PROW()+1,00);DEVOUT(q_caixa[i,4])
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(RTRIM(mdescri1))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(q_caixa[i,10],'99,999.99')
                                                IF ! EMPTY(q_caixa[i,32])
        	                                	DEVPOS(PROW()+1,00);DEVOUT('OBSERVACAO: '+q_caixa[i,32])
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT(q_caixa[i,4])
                                                DEVPOS(PROW(),PCOL()+2);DEVOUT(RTRIM(mdescri1))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(q_caixa[i,10],'999,999.99')
                                                IF mimp_tipo = 2
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(q_caixa[i,21])
                                                ENDIF
                                                IF ! EMPTY(q_caixa[i,32])
	                                	      DEVPOS(PROW()+1,00);DEVOUT('OBSERVACAO: '+q_caixa[i,32])
        	                                ENDIF
                                        ENDIF
                                ENDIF
                        NEXT
                        DEVPOS(PROW()+3,00);DEVOUT('*****************  RESUMO  *********************')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Fundo Caixa..:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mfundo,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total em Dinheiro..:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_din,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total em Cheques...:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_ch,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_ch,'99.999'))
                        DEVPOS(PROW()+1,00);DEVOUT('Total em Cartao....:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_cart,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_cart,'99.999'))
                        DEVPOS(PROW()+1,00);DEVOUT('Total Dupl.Receber.:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_dup,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_dup,'99.999'))
                        DEVPOS(PROW()+1,00);DEVOUT('Total Rec.Diversos.:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_re,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Ch.pre-datado:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_ch_p,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.: '+TRANSFORM(mqtd_ch_p,'99.999'))
                        DEVPOS(PROW()+1,00);DEVOUT('Total Financiamento:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_fi,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total de PIX.......:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_pix,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Doc.Recebidos:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mdup_rec,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Cred.Cli. PG.:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mcred_pg,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Vales.....:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_vale,'9,999,999.99')
                        DEVPOS(PROW()+1,26);DEVOUT('-------------')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Receb. (A)...:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_cart + mtot_dup + mtot_ch_p + mtot_re + mtot_fi + mtot_pix + mcred_rec + mdup_rec + mtot_vale,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Cred.Cli.REC.:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mcred_rec,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')

                        DEVPOS(PROW()+1,00);DEVOUT('Total de Despesas..:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_des,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total Ret.Deposito.:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_dp,'99,999,999.99')
                        DEVPOS(PROW()+1,26);DEVOUT('-------------')

                        DEVPOS(PROW()+1,00);DEVOUT('Total Debitos (B)..:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mtot_des + mtot_dp,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')

                        DEVPOS(PROW()+1,00);DEVOUT('Somatorio (A)+(B)..:')
                        DEVPOS(PROW(),26);DEVOUTPICT(mfundo + mtot_din + mtot_ch + mtot_cart + mtot_dup + mtot_ch_p + mtot_fi + mtot_pix + mdup_rec + mcred_rec + mtot_re + mtot_vale + mtot_des + mtot_dp,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('------------------------------------------------')


                        DEVPOS(PROW()+2,00);DEVOUT('Total de Vendas a vista........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_av,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Vendas a prazo........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_ap,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Outros recebimentos............:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mtot_re+mdup_rec,'99,999,999.99')
                        IF LEN(m_cartao) > 0
                                DEVPOS(PROW()+2,00);DEVOUT('*******  RESUMO DOS CARTOES ***********')
                                i := 0
                                FOR i = 1 TO LEN(m_cartao)
                                        DEVPOS(PROW()+1,00);DEVOUT(m_cartao[i,1]+'-'+m_cartao[i,2]+':')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_cartao[i,3],'99,999,999.99')
                                NEXT
                                DEVPOS(PROW()+1,26);DEVOUT('--------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em Cartao.........:')
                                DEVPOS(PROW(),27);DEVOUTPICT(mtot_cart,'99,999,999.99')
                        ENDIF
                        IF LEN(m_finan) > 0
                                DEVPOS(PROW()+2,00);DEVOUT('******  RESUMO DOS FINANCIAMENTO ******')
                                i := 0
                                FOR i = 1 TO LEN(m_finan)
                                        DEVPOS(PROW()+1,00);DEVOUT(m_finan[i,1]+'-'+m_finan[i,2]+':')
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_finan[i,3],'99,999,999.99')
                                NEXT
                                DEVPOS(PROW()+1,31);DEVOUT('--------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total em Financiamento..:')
                                DEVPOS(PROW(),31);DEVOUTPICT(mtot_fi,'99,999,999.99')
                        ENDIF
                        misento := mn_isento := mped_pgp:=mped_pg:=mped_ab:=0
                        mpedido := SPACE(6)
                        // PRODUTO ISENTOS
                        cComm  := "SELECT pquantd * pvlr_fat FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND pisento = 'S'"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                misento := cons_ped[1,1]
                        ENDIF

                        // PRODUTO NAO ISENTOS
                        cComm  := "SELECT pquantd * pvlr_fat FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND (pisento = 'N' OR pisento IS NULL)"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mn_isento := cons_ped[1,1]
                        ENDIF

                        // PEDIDOS PAGOS DO DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND pdatapag = pdat_ped"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mped_pg := LEN(cons_ped)
                        ENDIF

                        // PEDIDOS PAGOS DE OUTRO DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdatapag = "+sr_cdbvalue(mdata)+" AND ppag = '*'"
                        ccomm := ccomm + " AND NOT pdatapag = pdat_ped"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mped_pgp := LEN(cons_ped)
                        ENDIF
                        // PEDIDOS ABERTOS DOS DIA
                        cComm  := "SELECT pnum_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped = "+sr_cdbvalue(mdata)+" AND (ppag IS NULL OR ppag = ' ')"
                        IF ! EMPTY(mcodemp)
                                ccomm := ccomm + " AND pempresa = "+ sr_cdbvalue(mcodemp)
                        ENDIF
                        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped"
                        ccomm := ccomm + " ORDER BY pnum_ped"
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mped_ab:=0
                        IF LEN(cons_ped) > 0
                                mped_ab := LEN(cons_ped)
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT('***  RESUMO MERCAD. <ISENTAS E NAO ISENTAS> ***')
                        DEVPOS(PROW()+1,00);DEVOUT('Mercadoria ISENTAS.............:')
                        DEVPOS(PROW(),35);DEVOUTPICT(misento,'99,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT('Mercadoria NAO ISENTAS.........:')
                        DEVPOS(PROW(),35);DEVOUTPICT(mn_isento,'99,999,999.99')
                        IF mres_ped = 'S'
                                DEVPOS(PROW()+2,00);DEVOUT('***************  RESUMO DE PEDIDOS  ************')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emitidos........:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg+mped_ab,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emititdos PAGOS.:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Emititdos ABERTO:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Pedidos Pendente PAGOS..:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pgp,'99,999,999')
                                DEVPOS(PROW()+1,00);DEVOUT('Total GERAL de Pedidos PAGOS.....:')
                                DEVPOS(PROW(),37);DEVOUTPICT(mped_pg+mped_pgp,'99,999,999')
                        ENDIF
                        IF ! EMPTY(m_pedido)
                                DEVPOS(PROW()+2,00);DEVOUT('*** VERIFICAR PEDIDOS NAO ENCONTRADO NO CAIXA **')
                                i:=0
                                FOR i = 1 TO LEN(m_pedido)
                                        DEVPOS(PROW()+1,00);DEVOUT('No.Pedido: '+m_pedido[i])
                                NEXT
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(TIME())
                        imprt(mtipo_imp,'N')
                ELSE
			imprt(mtipo_imp,'N')
		        DEVPOS(PROW()+1,01);DEVOUT('Total em Dinheiro  R$......: '+TRANSFORM(mveri_din ,'999,999,999.99'))
        		DEVPOS(PROW()+1,01);DEVOUT('Total em Cheques   R$......: '+TRANSFORM(mveri_ch  ,'999,999,999.99'))
		        DEVPOS(PROW()+1,01);DEVOUT('Total em Cartoes   R$......: '+TRANSFORM(mveri_du  ,'999,999,999.99'))
        		DEVPOS(PROW()+1,01);DEVOUT('Total em Duplicata R$......: '+TRANSFORM(mveri_cart,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('Total em Financiamento R$..: '+TRANSFORM(mveri_fi  ,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('Total em PIX           R$..: '+TRANSFORM(mveri_pix  ,'999,999,999.99'))
	        	DEVPOS(PROW()+1,01);DEVOUT('                             --------------')
		        DEVPOS(PROW()+1,01);DEVOUT('TOTAL......................: '+TRANSFORM(mveri_din+mveri_ch+mveri_du+mveri_cart+mveri_fi+mveri_pix  ,'999,999,999.99'))

	                DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata),80))
        	        DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(m_set[1,129]))+2),80))
                	//DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,129]),80))
	                DEVPOS(PROW()+3,66);DEVOUT(TIME()+' Hrs.')
		ENDIF        	 
	ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('CX'+SUBSTR(DTOC(mdata),1,2)+SUBSTR(DTOC(mdata),4,2)+SUBSTR(DTOC(mdata),7)+'.REL')
        EXIT
ENDDO
CLOSE ALL
RETURN NIL
**************************  F I M  **********************************8
* VER PEDIDOS NO CAIXA
**********************
/*
FUNCTION ped_caixa(mdt,mpd)
***************************
LOCAL aret:={}

sr_getconnection():exec( "select sr_recno from saccaixa where data =  "+sr_cdbvalue(mdt)+" AND nota = "+sr_cdbvalue('PD'+mpd),,.t.,@aret)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(aret) > 0
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
RETURN NIL
*/
