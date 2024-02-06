* RELATORIO DE COMISSAO E VENDAS GERAL
**************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5com3
*****************
PRIVATE MPRG:='SAC5COM3',;
        opcao,mcod_op,mtraco,mcod_cli,mcod_vend,mdata1,mdata2,mnum_ped,mtot_cota,m_matriz:={},m_vendedor:={},;
        mqtd_item,mtot_item,mvlr_venda,mtot_venda,mcomissao,mvlr_com,mtot_com,;
        mqtd_ped,mtot_ped,mtot_med,mperc_venda,mtot_per_ven,mtot_geral,mop,;
        mcod_forn,mtot_prv,mtot_desc,i,mpag,mtit,mtipo,mvalor,;
        mcod_espe:=0,mtipo_com:=' ',mponto:=0,;
        mgrupo,msubgrupo,mcod_merc,nxls:={},cons_mov:={},mcont_prod:={},mtotal_item:=0,mcons_mov:={},;
        mtipo_oper:=' ',cComm,mlist_pre:=''

PRIVATE mnome_vend,mcom_ven,mcliente,mcpf,mcgc,mnome_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcodemp:=SPACE(3),cons_cli:={}

IF ! ver_nivel(mprg,'RELATORIO DE COMISSAO E VENDAS GERAL','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
op_tela(10,10,26,87,' Relatorio GERAL Comissao/Vendas ')
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mcod_forn := mcod_cli := mtot_geral := mqtd_item := mtot_item := ;
        mvlr_venda := mtot_venda := mcomissao := mvlr_com := mtot_com := ;
        mqtd_ped := mtot_ped := mtot_med := mtot_prv := mtot_desc := ;
        mperc_venda := mtot_per_ven := mcod_vend := mcom_ven := mtot_cota := ;
        mgrupo := msubgrupo := mcod_merc := 0
        mnome_vend := SPACE(30)
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mimp_tipo := 1
        mtipo_com := 'V'
        mlist_pre := 'N'
        ASIZE(m_matriz,0)
        ASIZE(m_vendedor,0)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 13,0 TO 13,77
        DEVPOS(1,2 );DEVOUT('Codigo da Empresa........:')
        DEVPOS(2,2 );DEVOUT('Data Inicial.............:')
        DEVPOS(3,2 );DEVOUT('Data Final...............:')
        DEVPOS(4,2 );DEVOUT('Cod.Fornecedor...........:')
        DEVPOS(5,2 );DEVOUT('Cod.Cliente..............:')
        DEVPOS(6,2 );DEVOUT('Cod.Especie Produto......:')
        DEVPOS(7,2 );DEVOUT('[V]end.[O]per.[M]ontad...:')
        DEVPOS(8,2 );DEVOUT('Codigo do Grupo..........:')
        DEVPOS(9,2 );DEVOUT('Codigo do Sub-Grupo......:')
        DEVPOS(10,2);DEVOUT('Codigo do Produto........:')
        DEVPOS(11,2);DEVOUT('Ver Menmsagem Abaixo.....:')
        DEVPOS(12,2);DEVOUT('So Produto Lista Presente:')

        @ 1,29 GET mcodemp PICT '999' VALID ver_emp(mcodemp,1,33,,'*') WHEN mmult_emp = 'S'
        @ 2,29 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 3,29 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,29 GET mcod_forn PICT '9999' VALID ver_fab(@mcod_forn,4,34)
        @ 5,29 GET mcod_cli PICT '99999' VALID ver_cli(@mcod_cli,5,35)
        @ 6,29 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,6,34,,0)
        @ 7,29 GET mtipo_com PICT '@!' VALID mtipo_com $ 'V,O,M'
        @ 8,29 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(@mgrupo,8,33,.F.))
        @ 9,29 GET msubgrupo PICT '99' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,9,33,.F.)) WHEN ! EMPTY(mgrupo)
        @ 10,29 GET mcod_merc PICT '99999' VALID IF(EMPTY(mcod_merc),.T.,ver_cod(mcod_merc,10,35))
        @ 11,29 GET mtipo_oper PICT '@!' VALID mtipo_oper $ 'O,V,G,A,B, ' .AND. lim_get() WHEN men_get(0,0,'[O]perador - [V]endedor - [G]erente - [A]dministrador - [B]loqueado - [ ]p/Todos')
        @ 12,29 GET mlist_pre PICT '@!' VALID mlist_pre $ 'S,N'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF mtipo_com = 'M'
                sac5com3_mont(mdata1,mdata2)
                LOOP
        ENDIF
        setcor(10)
        @ 14,1 PROMPT ' p/ Nome '
        @ 14,12 PROMPT ' p/ Valor Venda '
        mop := 0
        SET INTEN ON
        MENU TO mop
        setcor(1)
        IF LASTKEY() = 27
                LOOP
        ENDIF
        setcor(1)
        mensagem('Aguarde um momento coletando dados para o relatorio....')
        cComm  := "SELECT SUM(quantd),SUM(quantd*vl_vend) FROM sacmov"
	cComm  := ccomm +" WHERE data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)
        cComm  := ccomm +" AND  cancel is NULL AND  tipo = '02' AND  vl_vend > 0 "
        cComm  := ccomm +" AND  ent_sai='S' AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm +" AND devolucao IS NULL"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_espe)
                ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        IF mtipo_com = 'O'
                ccomm := ccomm + " AND  com_oper > "+sr_cdbvalue(0)
        ENDIF
        IF mtipo_com = 'M'
                ccomm := ccomm + " AND  montador IS NOT NULL AND montador1 IS NOT NULL"
        ENDIF
        IF mtipo_com = 'V'
                cComm  := ccomm +" AND (cod_vend IS NULL OR cod_vend = '000' OR cod_vend = '   ')"
        ENDIF
        IF ! EMPTY(msubgrupo)
                ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
        cons_mov:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) > 0
                AADD(m_vendedor,'000')
                AADD(m_matriz,{'000','VENDEDOR NAO INFORMADO',0,0,0,0,0,0,0,0,0,0,0})
        ENDIF

        cComm  := "SELECT * FROM insopera"
        IF ! EMPTY(mtipo_oper)
        	cComm  := ccomm +" WHERE stipo = "+sr_cdbvalue(mtipo_oper)
        ENDIF
        cons_sen:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_sen)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_sen) > 0
                i:=0
                FOR i = 1 TO LEN(cons_sen)
                        AADD(m_vendedor,cons_sen[i,1])
                                      //    1             2              3        4 5 6 7 8 9 10  11 com/av    12 com/ap     13 com/op
                        AADD(m_matriz,{cons_sen[i,1],cons_sen[i,2],cons_sen[i,10],0,0,0,0,0,0,0,cons_sen[i,7],cons_sen[i,8],cons_sen[i,9]})
                NEXT
        ENDIF
        cComm  := "SELECT  * FROM sacmov "
        cComm  := ccomm +"WHERE  data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)
	cComm  := ccomm +" AND  cancel is NULL AND  tipo = '02' AND  vl_vend > 0 "
	cComm  := ccomm +" AND  ent_sai='S' AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm +" AND devolucao IS NULL AND documento NOT LIKE 'BL%' AND documento NOT LIKE 'TR%'"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_espe)
                ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        IF mtipo_com = 'O'
                ccomm := ccomm + " AND  com_oper > "+sr_cdbvalue(0)
        ENDIF
        IF mtipo_com = 'M'
                ccomm := ccomm + " AND  montador IS NOT NULL AND montador1 IS NOT NULL"
        ENDIF
        IF mtipo_com = 'V'
                cComm  := ccomm +" AND cod_vend IS NOT NULL "
        ENDIF
        IF ! EMPTY(msubgrupo)
                ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
	mcons_mov:={}
        sr_getconnection():exec(ccomm,,.t.,@mcons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
	IF LEN(mcons_mov) = 0
		atencao('Nao existe movimento neste periodo...')
		LOOP
	ENDIF
        mensagem('Aguarde.. Gerando Consulta')
        mnum_ped := SPACE(6)
        i:=0
        FOR i = 1 TO LEN(mcons_mov)
                prog_imp(i,DTOC(mcons_mov[i,16]))
                mvalor:=mcons_mov[i,23]
                IF mtipo_com = 'V' .OR. mtipo_com = 'O'
                        mponto := mcomissao := 0
                        cons_prod:={}
                        sr_getconnection():exec("SELECT comissao FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,10]),,.t.,@cons_prod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_prod) = 0
                                mcomissao:=0
                        ELSE
                                mcomissao:= cons_prod[1,1]
                        ENDIF
                        IF mtipo_com='V'
                                mponto := ASCAN(m_vendedor,mcons_mov[i,28])
                        ELSEIF mtipo_com = 'O'
                                mponto := ASCAN(m_vendedor,mcons_mov[i,30])
                        ENDIF
                        IF mponto > 0
                                IF mtipo_com='V'
                                        mcomissao := mcomissao + IF(mcons_mov[i,70]='AV',m_matriz[mponto,11],m_matriz[mponto,12])
                                ELSEIF mtipo_com = 'O'
                                        mcomissao := mcomissao + m_matriz[mponto,13]
                                ENDIF
                                m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
                                m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
                                m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                                m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                                mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                IF mnum_ped <> mcons_mov[i,6]
                                        m_matriz[mponto,7] := m_matriz[mponto,7] + 1
                                        mnum_ped := mcons_mov[i,6]
                                ENDIF
			ELSEIF EMPTY(mtipo_oper)
		                AADD(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
		                AADD(m_matriz,{IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]),'VENDEDOR NAO ENCONTRADO',0,0,0,0,0,0,0,0,0,0,0})
	                        mponto := 0
        	                mponto := ASCAN(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
                                IF mtipo_com='V'
                                        mcomissao:=mcons_mov[i,29]
                                ELSEIF mtipo_com = 'O'
                                        mcomissao:=mcons_mov[i,31]
                                ENDIF
                                m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
                                m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
                                m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                                m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                                mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                IF mnum_ped <> mcons_mov[i,6]
                                        m_matriz[mponto,7] := m_matriz[mponto,7] + 1
                                        mnum_ped := mcons_mov[i,6]
                                ENDIF
                        ENDIF
                ELSE
                        mponto := mcomissao := 0
                        cons_prod:={}
                        sr_getconnection():exec("SELECT comissao FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,10]),,.t.,@cons_prod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_prod) = 0
                                mcomissao:=0
                        ELSE
                                mcomissao:= cons_prod[1,1]
                        ENDIF
                        IF ! EMPTY(mcons_mov[i,32])
                                mponto := 0
                                mponto := ASCAN(m_vendedor,mcons_mov[i,32])
                                IF mponto > 0
                                        //mcomissao:=mcons_mov[i,33]
                                        m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                        m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
                                        m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
                                        m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                                        m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                                        mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                        IF mnum_ped <> mcons_mov[i,6]
                                                m_matriz[mponto,7] := m_matriz[mponto,7] + 1
                                                mnum_ped := mcons_mov[i,6]
                                        ENDIF
				ELSEIF EMPTY(mtipo_oper)
			                AADD(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
			                AADD(m_matriz,{IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]),'VENDEDOR NAO ENCONTRADO',0,0,0,0,0,0,0,0,0,0,0})
	        	                mponto := 0
        	        	        mponto := ASCAN(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
                        	        m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                	m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
	                                m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
        	                        m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                	                m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                        	        mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                	IF mnum_ped <> mcons_mov[i,6]
                                	        m_matriz[mponto,7] := m_matriz[mponto,7] + 1
	                                        mnum_ped := mcons_mov[i,6]
        	                        ENDIF
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mcons_mov[i,34]) .AND. (mcons_mov[i,32] <> mcons_mov[i,34])
                                mponto := 0
                                mponto := ASCAN(m_vendedor,mcons_mov[i,34])
                                IF mponto > 0
                                        m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                        m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
                                        m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
                                        m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                                        m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                                        mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                        IF mnum_ped <> mcons_mov[i,6]
                                                m_matriz[mponto,7] := m_matriz[mponto,7] + 1
                                                mnum_ped := mcons_mov[i,6]
                                        ENDIF
				ELSEIF EMPTY(mtipo_oper)
			                AADD(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
			                AADD(m_matriz,{IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]),'VENDEDOR NAO ENCONTRADO',0,0,0,0,0,0,0,0,0,0,0})
	        	                mponto := 0
        	        	        mponto := ASCAN(m_vendedor,IF(mtipo_com='V',mcons_mov[i,28],mcons_mov[i,30]))
                        	        m_matriz[mponto,4] := m_matriz[mponto,4] + mcons_mov[i,19]
                                	m_matriz[mponto,5] := m_matriz[mponto,5] + mcons_mov[i,19]*mvalor
	                                m_matriz[mponto,6] := m_matriz[mponto,6] + (mcons_mov[i,19]*mvalor) * (mcomissao /100)
        	                        m_matriz[mponto,8] := m_matriz[mponto,8] + IF(mvalor < mcons_mov[i,22] .AND. mcons_mov[i,70] <> 'AV',(mcons_mov[i,19]*mcons_mov[i,22])-(mcons_mov[i,19]*mvalor),0)
                	                m_matriz[mponto,9] := m_matriz[mponto,9] + IF(mcons_mov[i,70] <> 'AV',mcons_mov[i,19]*mcons_mov[i,22],0)
                        	        mtot_geral := mtot_geral + (mcons_mov[i,19] * mvalor)
                                	IF mnum_ped <> mcons_mov[i,6]
                                	        m_matriz[mponto,7] := m_matriz[mponto,7] + 1
	                                        mnum_ped := mcons_mov[i,6]
        	                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
        NEXT
        i:=0
        FOR i = 1 TO LEN(m_matriz)
                cComm  := "SELECT  SUM(quantd) FROM sacmov "
                cComm  := ccomm +"WHERE  data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)+" AND  cancel is NULL AND  tipo = '02' AND  vl_vend > 0 AND  ent_sai='S' AND  num_ped<>'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
                cComm  := ccomm +" AND devolucao IS NULL"
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mcod_cli)
                        ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
                ENDIF
                IF ! EMPTY(mcod_espe)
                        ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                IF mtipo_com = 'O'
                        ccomm := ccomm + " AND  com_oper > "+sr_cdbvalue(0)
                ENDIF
                IF mtipo_com = 'M'
                        ccomm := ccomm + " AND  montador IS NOT NULL AND montador1 IS NOT NULL"
                ENDIF
                IF mtipo_com = 'V'
                        ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(m_matriz[i,1])
                        cComm  := ccomm +" AND cod_vend IS NOT NULL"
                ENDIF
                IF ! EMPTY(msubgrupo)
                        ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
                ENDIF
                IF ! EMPTY(mcod_merc)
                        ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(mcod_merc)
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                IF ! EMPTY(mgrupo)
                        ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
                ENDIF
                IF mlist_pre = 'S'
                        ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
                ENDIF
                ccomm := ccomm + " GROUP BY codigo,codigo"
                mcont_prod := {}
                sr_getconnection():exec(ccomm,,.t.,@mcont_prod)
                sr_getconnection():exec('COMMIT',,.f.)
                m_matriz[i,10] := LEN(mcont_prod)
        NEXT

        cComm  := "SELECT  SUM(quantd) FROM sacmov "
        cComm  := ccomm +"WHERE  data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)+" AND  cancel IS NULL AND  tipo = '02' AND  vl_vend > 0 AND  ent_sai='S' AND  num_ped<>'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm +" AND devolucao IS NULL"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_espe)
                ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        IF mtipo_com = 'O'
                ccomm := ccomm + " AND  com_oper > "+sr_cdbvalue(0)
        ENDIF
        IF mtipo_com = 'M'
                ccomm := ccomm + " AND  montador IS NOT NULL AND montador1 IS NOT NULL"
        ENDIF
        IF mtipo_com = 'V'
                cComm  := ccomm +" AND cod_vend IS NOT NULL"
        ENDIF
        IF ! EMPTY(msubgrupo)
                ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
        ccomm := ccomm + " GROUP BY codigo,codigo"
        mcont_prod := {}
        sr_getconnection():exec(ccomm,,.t.,@mcont_prod)
        sr_getconnection():exec('COMMIT',,.f.)
        mtotal_item:= LEN(mcont_prod)

        IF mop = 1
                ASORT(m_matriz,,,{|x,y| x[2] < y[2]})
        ELSEIF mop = 2
                ASORT(m_matriz,,,{|x,y| x[5] < y[5]})
        ENDIF
        IF LEN(m_matriz) = 0
                atencao('Nao existe movimento neste Periodo')
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'GER_COMI.REL'
        IF ! imp_arq('GER_COMI.REL','R',,,,,,'E')
                LOOP
        ENDIF
        IF mtipo_com = 'V'
                mtit := 'Relatorio de Vendas e Comissao (GERAL) ** VENDEDOR **'
        ELSEIF mtipo_com = 'O'
                mtit := 'Relatorio de Vendas e Comissao (GERAL) ** OPERADOR **'
        ELSE
                mtit := 'Relatorio de Vendas e Comissao (GERAL) ** MONTADOR **'
        ENDIF           
        mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        IF ! EMPTY(mcod_merc)
                mtipo := mtipo + ' - Cod.Prod.:'+STRZERO(mcod_merc,5)
        ENDIF

        IF mimp_tipo = 4
                nxls := {}
                f:=1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                MYRUN('DEL '+marq)
                nXls := xlsOpen(marq)
                xlsWrite( nXls, f, 1,mtit)
                f++                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
                xlsWrite( nXls, f, 1,mtipo)
                f++                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         

                IF ! EMPTY(mcod_forn)
                        q_forn := {}
                        sr_getconnection():exec("SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.t.,@q_forn)
                        sr_getconnection():exec('COMMIT',,.f.)
                        xlsWrite( nXls, f, 1,'Fornecedor :'+STRZERO(mcod_forn,4)+'-'+q_forn[1,2]+' Telefones: '+ALLTRIM(q_forn[1,13])+'/'+ALLTRIM(q_forn[1,14]))
                        f++
                ENDIF                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
                xlsWrite( nXls, f, 1, 'Vendedor' )
                xlsWrite( nXls, f, 2, 'Qtd.Item' )
                xlsWrite( nXls, f, 3, 'Valor Vendas' )
                xlsWrite( nXls, f, 4, 'Comissao (%)')
                xlsWrite( nXls, f, 5, 'Comissao (R$)')
                xlsWrite( nXls, f, 6, 'Qtd.Ped.')
                xlsWrite( nXls, f, 7, 'Vlr.Ped./Med.')
                xlsWrite( nXls, f, 8, '% Venda')
                IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                        xlsWrite( nXls, f, 9, 'Desco. Med')
                ELSE
                        xlsWrite( nXls, f, 9, 'Ticket Med')
                ENDIF
                IF mtipo_com <> 'M'
                        xlsWrite( nXls, f, 10, 'Cota')
                ENDIF
                f++
                i:=0
                FOR i = 1 TO LEN(m_matriz)
                        mensagem('IMPRIMINDO PARA EXCEL o Vendedor: '+m_matriz[i,1]+' - '+m_matriz[i,2]+'  Aguarde um momento ...')
                        IF EMPTY(m_matriz[i,4]) .AND. EMPTY(m_matriz[i,6])
                                LOOP
                        ENDIF
                        xlsWrite( nXls, f, 1,m_matriz[i,1]+'-'+m_matriz[i,2])
                        xlsWrite( nXls, f, 2,ALLTRIM(TRANSFORM(m_matriz[i,4],'@E 999999.99')))
                        xlsWrite( nXls, f, 3, ALLTRIM(TRANSFORM(m_matriz[i,5],'@E 9,999,999.99')) )                                                                                                                                                                                                                                                                                                                                                                                                                                          
                        xlsWrite( nXls, f, 4, ALLTRIM(TRANSFORM((m_matriz[i,6]/m_matriz[i,5])*100,'@E 999.99')) )                                                                                                                                                                                                                                                                                                                                                                                                                                          
                        xlsWrite( nXls, f, 5, ALLTRIM(TRANSFORM(m_matriz[i,6],'@E 999,999.99')) )
                        xlsWrite( nXls, f, 6, ALLTRIM(TRANSFORM(m_matriz[i,7],'@E 99999.99')) )
                        xlsWrite( nXls, f, 7, ALLTRIM(TRANSFORM(m_matriz[i,5]/m_matriz[i,7],'@E 9,999,999.99')) )
                        xlsWrite( nXls, f, 8, ALLTRIM(TRANSFORM((m_matriz[i,5]/mtot_geral)*100,'@E 9999.99')) )
                        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                                xlsWrite( nXls, f, 9, ALLTRIM(TRANSFORM((m_matriz[i,8]/m_matriz[i,9])*100,'@E 999,999.99')) )
                        ELSE
                                xlsWrite( nXls, f, 9, ALLTRIM(TRANSFORM(m_matriz[i,4]/m_matriz[i,7],'@E 999,999.99')) )
                        ENDIF
                        IF mtipo_com <> 'M'
                                xlsWrite( nXls, f, 10, ALLTRIM(TRANSFORM(m_matriz[i,5] - m_matriz[i,3],'@E 9,999,999.99')) )
                        ENDIF
                        f++                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
                        mtot_item := mtot_item + m_matriz[i,4]
                        mtot_venda := mtot_venda + m_matriz[i,5]
                        mtot_prv := mtot_prv + m_matriz[i,9]
                        mtot_desc := mtot_desc + m_matriz[i,8]
                        mtot_com := mtot_com + m_matriz[i,6]
                        mtot_ped := mtot_ped + m_matriz[i,7]
                NEXT
                IF mtipo_com <> 'M'
                        xlsWrite( nXls, f, 1,'T O T A L   G E R A L:')
                        xlsWrite( nXls, f, 2,ALLTRIM(TRANSFORM(mtot_item,'@E 999999.99')))
                        xlsWrite( nXls, f, 3,TRANSFORM(mtot_venda,'@E 9,999,999.99'))
                        xlsWrite( nXls, f, 5,TRANSFORM(mtot_com,'@E 999,999.99'))
                        xlsWrite( nXls, f, 6,TRANSFORM(mtot_ped,'@E 99999.99'))
                        xlsWrite( nXls, f, 7,TRANSFORM(mtot_venda/mtot_ped,'@E 99,999,999.99'))
                        xlsWrite( nXls, f, 8,TRANSFORM((mtot_venda/mtot_geral)*100,'@E 999.99'))
                        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                                xlsWrite( nXls, f, 9,TRANSFORM((mtot_desc/mtot_prv)*100,'@E 999,999.99'))
                        ELSE
                                xlsWrite( nXls, f, 9,TRANSFORM((mtot_item/mtot_ped),'@E 999,999.99'))
                        ENDIF
                        xlsWrite( nXls, f,10,TRANSFORM((mtot_venda-mtot_cota),'@E 9,999,999.99'))
                ENDIF           
        	xlsClose( nXls )
                //IF mimp_tipo = 4
                //       MYRUN('EXCEL.EXE '+marq)
                //ENDIF
                EXIT
        ELSE 
                mpag := 1
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Vendedor                      ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Qtd.Item')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Qtd.Prod')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Vendas')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('(% Comissao R$)')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Qtd.Ped')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Vl.Med.Ped')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('% Venda')
                IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Desco.')
                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Ticket')
                ENDIF

                IF mtipo_com <> 'M'
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Cota R$')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('% Cota')
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                i := 0
                FOR i = 1 TO LEN(m_matriz)
                        IF EMPTY(m_matriz[i,4]) .AND. EMPTY(m_matriz[i,6])
                                LOOP
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(m_matriz[i,1]+'-'+LEFT(m_matriz[i,2],26))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,10],'99,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,4],'999999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,5],'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_matriz[i,6]/m_matriz[i,5])*100,'99.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,6],'99,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,7],'9999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,5]/m_matriz[i,7],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_matriz[i,5]/mtot_geral)*100,'9999.99'))
                        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_matriz[i,8]/m_matriz[i,9])*100,'999.99'))
                        ELSE
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,4]/m_matriz[i,7],'999.99'))
                        ENDIF
                        IF mtipo_com <> 'M'
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,5] - m_matriz[i,3],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((m_matriz[i,5] / m_matriz[i,3])*100,'999.99'))
                        ENDIF
                        mtot_item := mtot_item + m_matriz[i,4]
                        mtot_venda := mtot_venda + m_matriz[i,5]
                        mtot_prv := mtot_prv + m_matriz[i,9]
                        mtot_desc := mtot_desc + m_matriz[i,8]
                        mtot_com := mtot_com + m_matriz[i,6]
                        mtot_ped := mtot_ped + m_matriz[i,7]
                NEXT
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                IF mtipo_com <> 'M'
                        DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
                        DEVPOS(PROW(),31);DEVOUT(TRANSFORM(mtotal_item,'999999.99'))
                        DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mtot_item,'999999.99'))
                        DEVPOS(PROW(),51);DEVOUT(TRANSFORM(mtot_venda,'9,999,999.99'))
                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mtot_com,'999,999.99'))
                        DEVPOS(PROW(),79);DEVOUT(TRANSFORM(mtot_ped,'99999.99'))
                        DEVPOS(PROW(),88);DEVOUT(TRANSFORM(mtot_venda/mtot_ped,'999,999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mtot_venda/mtot_geral)*100,'999.99'))
                        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                                DEVPOS(PROW(),107);DEVOUT(TRANSFORM((mtot_desc/mtot_prv)*100,'999.99'))
                        ELSE
                                DEVPOS(PROW(),107);DEVOUT(TRANSFORM((mtot_item/mtot_ped),'999.99'))
                        ENDIF
                        DEVPOS(PROW(),113);DEVOUT(TRANSFORM(mtot_venda-mtot_cota,'9999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM((mtot_venda/mtot_cota)*100,'999.99'))
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************
* RELATORIO DE COMISSAO E VENDAS GERAL
**************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5com3_mont(mdat_ini,mdat_fim)
**********************
LOCAL mnome:=''
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mtit := 'Relatorio de Vendas e Comissao (GERAL) ** MONTADOR **'
        mtipo := 'periodo: '+DTOC(mdat_ini)+' a '+DTOC(mdat_fim)
        mtot_geral := mtot_item := ;
        mvlr_venda := mtot_venda := mcomissao := mvlr_com := mtot_com := ;
        mtot_cota := 0
        mimp_tipo := 1
        setcor(1)
        mensagem('Aguarde um momento coletando dados para o relatorio....')
        cComm  := "SELECT montador,codigo,COUNT(*),SUM(quantd),SUM(quantd*vl_vend),SUM(quantd*vl_vend * (com_monta/100)) "
        cComm  := ccomm +" FROM sacmov m"
        cComm  := ccomm +" WHERE data_s_e >= "+sr_cdbvalue(mdat_ini)+" AND  data_s_e <= "+sr_cdbvalue(mdat_fim)
        cComm  := ccomm +" AND cancel is NULL AND  tipo = '02' AND  vl_vend > 0 "
        cComm  := ccomm +" AND tipo = '02' AND  vl_vend > 0 "
        cComm  := ccomm +" AND ent_sai='S' AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm +" AND devolucao IS NULL"
        ccomm  := ccomm + " AND (montador IS NOT NULL OR montador = '')"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_espe)
                ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        IF ! EMPTY(msubgrupo)
                ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                mtipo := mtipo + " - Produto: " + STRZERO(mcod_merc,5)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        ccomm := ccomm + " GROUP BY montador, codigo"
        cons_mov:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) > 0
                i:=0
                FOR i = 1 TO LEN(cons_mov)
                        IF VAL(cons_mov[i,1]) = 0
                                LOOP
                        ENDIF
//                        mcomissao := 0
//                        cons_prod:={}
//                        sr_getconnection():exec("SELECT com_mont FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_mov[i,2]),,.t.,@cons_prod)
//                        sr_getconnection():exec('COMMIT',,.f.)
//                        IF LEN(cons_prod) > 0
//                                mcomissao:= cons_prod[1,1]
//                        ENDIF

                        mponto := ASCAN(m_vendedor,cons_mov[i,1])
                        IF mponto > 0
                                m_matriz[mponto,4] := m_matriz[mponto,4] + cons_mov[i,3]
                                m_matriz[mponto,5] := m_matriz[mponto,5] + cons_mov[i,4]
                                m_matriz[mponto,6] := m_matriz[mponto,6] + cons_mov[i,5]
                                m_matriz[mponto,7] := m_matriz[mponto,7] + cons_mov[i,6]
                        ELSE
                                cons_sen:={}
                                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(cons_mov[i,1]),,.t.,@cons_sen)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_sen) = 0
                                        mnome := 'NAO LOCALIZADO ESTE OPERADOR  '
                                                      //    1          2   3      4              5             6            7        8      9 10  11 com/av    12 com/ap     13 com/op
                                        AADD(m_matriz,{cons_mov[i,1],mnome,0,cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,0,0,0})
                                ELSE
                                        AADD(m_matriz,{cons_sen[1,1],cons_sen[1,2],cons_sen[1,10],cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,cons_sen[1,7],cons_sen[1,8],cons_sen[1,9]})
                                ENDIF
                                AADD(m_vendedor,cons_mov[i,1])
                        ENDIF
                NEXT


/*
                i:=0
                FOR i = 1 TO LEN(cons_mov)
                        IF VAL(cons_mov[i,1]) = 0
                                LOOP
                        ENDIF
                        cons_sen:={}
                        sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(cons_mov[i,1]),,.t.,@cons_sen)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_sen) = 0
                                mnome := 'NAO LOCALIZADO ESTE OPERADOR  '
                                              //    1          2   3      4              5             6            7        8      9 10  11 com/av    12 com/ap     13 com/op
                                AADD(m_matriz,{cons_mov[i,1],mnome,0,cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,0,0,0})
                        ELSE
                                AADD(m_matriz,{cons_sen[1,1],cons_sen[1,2],cons_sen[1,10],cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,cons_sen[1,7],cons_sen[1,8],cons_sen[1,9]})
                        ENDIF
                        AADD(m_vendedor,cons_mov[i,1])
                NEXT
*/
        ENDIF

        cComm  := "SELECT montador1,codigo,COUNT(*),SUM(quantd),SUM(quantd*vl_vend),SUM(quantd*vl_vend * (com_monta1/100)) FROM sacmov"
	cComm  := ccomm +" WHERE data_s_e >= "+sr_cdbvalue(mdat_ini)+" AND  data_s_e <= "+sr_cdbvalue(mdat_fim)
        cComm  := ccomm +" AND  cancel is NULL AND  tipo = '02' AND  vl_vend > 0 "
        cComm  := ccomm +" AND  ent_sai='S' AND NOT num_ped = 'CUPOME' AND ( documento like 'PD%' OR  documento like 'CP%')"
        cComm  := ccomm +" AND devolucao IS NULL"
        ccomm := ccomm + " AND (montador1 IS NOT NULL OR montador1 = '')"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND  cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND  cod_cli = "+sr_cdbvalue(mcod_cli)
        ENDIF
        IF ! EMPTY(mcod_espe)
                ccomm := ccomm + " AND  especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
        ENDIF
        IF ! EMPTY(msubgrupo)
                ccomm := ccomm + " AND  gru_sub = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msubgrupo,2))
        ENDIF
        IF ! EMPTY(mcod_merc)
                ccomm := ccomm + " AND  codigo = "+sr_cdbvalue(mcod_merc)
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND  empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF ! EMPTY(mgrupo)
                ccomm := ccomm + " AND  gru_sub LIKE "+sr_cdbvalue(STRZERO(mgrupo,3)+'%')
        ENDIF
        ccomm := ccomm + " GROUP BY montador1, codigo"
        cons_mov:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) > 0
                i:=0
                FOR i = 1 TO LEN(cons_mov)
                        IF VAL(cons_mov[i,1]) = 0
                                LOOP
                        ENDIF
//                        mcomissao := 0
//                        cons_prod:={}
//                        sr_getconnection():exec("SELECT com_mont FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_mov[i,2]),,.t.,@cons_prod)
//                        sr_getconnection():exec('COMMIT',,.f.)
//                        IF LEN(cons_prod) > 0
//                                mcomissao:= cons_prod[1,1]
//                        ENDIF

                        mponto := ASCAN(m_vendedor,cons_mov[i,1])
                        IF mponto > 0
                                m_matriz[mponto,4] := m_matriz[mponto,4] + cons_mov[i,3]
                                m_matriz[mponto,5] := m_matriz[mponto,5] + cons_mov[i,4]
                                m_matriz[mponto,6] := m_matriz[mponto,6] + cons_mov[i,5]
                                m_matriz[mponto,7] := m_matriz[mponto,7] + cons_mov[i,6]
                        ELSE
                                cons_sen:={}
                                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(cons_mov[i,1]),,.t.,@cons_sen)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_sen) = 0
                                        mnome := 'NAO LOCALIZADO ESTE OPERADOR  '
                                                      //    1          2   3      4              5             6            7        8      9 10  11 com/av    12 com/ap     13 com/op
                                        AADD(m_matriz,{cons_mov[i,1],mnome,0,cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,0,0,0})
                                ELSE
                                        AADD(m_matriz,{cons_sen[1,1],cons_sen[1,2],cons_sen[1,10],cons_mov[i,3],cons_mov[i,4],cons_mov[i,5],cons_mov[i,6],0,0,0,cons_sen[1,7],cons_sen[1,8],cons_sen[1,9]})
                                ENDIF
                                AADD(m_vendedor,cons_mov[i,1])
                        ENDIF
                NEXT
        ENDIF

        IF LEN(m_vendedor) = 0
                atencao('Nao existe monvimento de MONTADORES neste periodo....')
                RETURN NIL
        ENDIF
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'GER_COMI.REL'
        IF ! imp_arq('GER_COMI.REL','R',,,,,,'E')
                RETURN NIL
        ENDIF
        mpag := 1
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Montador                      ')
        //DEVPOS(PROW(),PCOL()+1);DEVOUT('  Qtd.Item')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('    Qtd.Prod')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Valor Vendas')
        DEVPOS(PROW(),PCOL()+9);DEVOUT('(% Comissao R$)')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        i := 0
        FOR i = 1 TO LEN(m_matriz)
                DEVPOS(PROW()+1,00);DEVOUT(m_matriz[i,1]+'-'+LEFT(m_matriz[i,2],26))
                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,10],'99,999.99'))
                //DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,4],'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_matriz[i,5],'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_matriz[i,6],'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+4);DEVOUT(TRANSFORM(m_matriz[i,7]/m_matriz[i,6]*100,'9,999.99')+'%')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(m_matriz[i,7],'9,999,999.99'))
                mtotal_item := mtotal_item + m_matriz[i,4]
                mtot_item := mtot_item + m_matriz[i,5]
                mtot_venda := mtot_venda + m_matriz[i,6]
                mtot_com := mtot_com + m_matriz[i,7]
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
//        IF mtipo_com <> 'M'
//                DEVPOS(PROW()+1,00);DEVOUT('T O T A L   G E R A L:')
//                DEVPOS(PROW(),31);DEVOUT(TRANSFORM(mtotal_item,'999,999.99'))
//                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mtot_item,'99,999,999.99'))
//                DEVPOS(PROW(),51);DEVOUT(TRANSFORM(mtot_venda,'99,999,999.99'))
//                DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mtot_com,'999,999.99'))
//        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        RETURN NIL
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************


