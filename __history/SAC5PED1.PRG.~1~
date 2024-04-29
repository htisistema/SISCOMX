* EMISSAO DE 2a.VIA DO PEDIDO JA RECEBIDO
******************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac5ped1(mnum_p,orc,consult,tkt,mfrente,menu_print,mapp)
************************************************************
LOCAL MPRG:='SAC5PED1',;
      lba,cba,opcao,m_pedido:={},m_pos:={},mnum_aux,mcli,mtot_p:=0,;
      mcod_vend,mcod_oper,point,mdata_p,mno_roma:=SPACE(6),mnum_nota:=' ',;
      mimp_dup2:=' ',cam_db := {},mcons_ped:={},cComm

PRIVATE mt_pedido,mtot_desc,mtot_quant,mpoint:=0,mdesconto,;
      mtraco,tela,mcopia,mform,mn_fiscal,mlinhas,mimporte,mblo_vend,;
      mdado_cli,mobs1,mobs2,mobs3,mobs4,menvelope,mquantd:=1,mproducao,mdata,;
      mvia:='2a.via',mnome_cli,mcgc,mcpf,minsc,mplaca:=' ',mcarro:=' ',;
      mpeso_brut := 0,mpeso_liq:=0,mdesc,mcartao:=' ',mcheque:=' ',mdup:=' ',;
      mfin:=' ',mdinheiro:=' ',mcondicao := ' ',mvlr_ent := 0,mcod_fin,mtipo_fin,;
      mvalor_pres,mvalor_ent:=0,mporta_imp,malias,ali,no,msubtotal:=0,mtot_custo:=0,;
      m_dia[15],m_vlr[15],mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mcliente,;
      mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcab,mrodap1,mrodap2,mnum_ped,moper,;
      mvend,mtp_venda,mcond_vezes,mprazo,mdat_ped,mhora,mcod_cli,mcart_ban:=' ',mnum_orc := 0

IF orc = NIL
        IF tkt <> NIL
                IF ! ver_nivel(mprg+'TKT','EMISSAO DE TICKET P/EMBALAGEM OU EXPEDICAO','15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mfrente = NIL
                IF ! ver_nivel(mprg,'2a. VIA DO PEDIDO','15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ENDIF
ELSEIF orc <> NIL
        IF ! ver_nivel(mprg+'ORC','2a. VIA DO ORCAMENTO','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mvia := '2a.via ORC'
ENDIF
lba := 10
cba := 42
mtraco := REPLI('=',80)
SET KEY 294 TO cons_luc()               // Consulta Lucro  <ALT+L)
*---------------------------------------------------------------------------
//IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------------------------------------
mcab := m_set[1,22]
mrodap1 := m_set[1,25]
mrodap2 := m_set[1,26]
mcopia := m_indiv[1,11]
mform := m_indiv[1,9]
mlinhas := m_indiv[1,16]
mn_fiscal := m_indiv[1,23]
mblo_vend := m_set[1,38]
mdado_cli := m_set[1,39]
mporta_imp := m_indiv[1,7]
IF orc = NIL
        IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
        ali := 'ped_s'
        no  := 'noped'
        op_tela(05,00,17,82,IF(tkt<>NIL,' Emitir Ticket p/Embalagem ',' 2a.via do pedido '))
ELSE
        IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
        ali := 'orcam'
        no  := 'noorc'
        op_tela(05,10,17,82,' 2a.via do ORCAMENTO ')
ENDIF
SELE('cli');ORDSETFOCUS(2)
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,10]
        mt_pedido := mtot_desc := mtot_quant := mdesconto := msubtotal := ;
        mtot_custo := 0
        IF orc = NIL
                ali := 'ped_s'
                @ 1,2 SAY 'No. Pedido........:'
        ELSE
                ali := 'orcam'
                @ 1,2 SAY 'No.Orcamento......:'
        ENDIF
        @ 2,2 SAY 'No.Envelope/Placa.:'
        @ 3,2 SAY 'Cliente...........:'
        @ 4,2 SAY 'Codigo Vendedor...:'
        @ 5,2 SAY 'Codigo Operador...:'
        @ 6,2 SAY 'Total Pedido R$...:'
        @ 7,2 SAY 'Numero ROMANEIO...:'
        @ 8,2 SAY 'Imprimir Duplicata:'
        @ 9,2 SAY 'Qtd.Copias........:'
        IF mnum_p = NIL
                mnum_ped := mnum_orc := 0
                menvelope := SPACE(10)
                mensagem('Digite o No.do pedido que deseja 2a.Via.')
                IF orc = NIL
                        @ 1,22 GET mnum_ped PICT '999999'
                        @ 2,22 GET menvelope PICT '@!' WHEN EMPTY(mnum_ped)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                ELSE
                        @ 1,22 GET mnum_orc PICT '999999'
                        @ 2,22 GET menvelope PICT '@!' WHEN EMPTY(mnum_ped)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        mnum_ped := mnum_orc
                ENDIF
                IF ! EMPTY(mnum_ped)
                        IF orc = NIL
                                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                malias := 'Q_ped_s'
                        ELSE
                                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                malias := 'Q_orcam'
                        ENDIF
			mcons_ped:={}
		        sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_ped) = 0
                                atencao('Nao Existe este PEDIDO em nossos arquivos')
                                LOOP
                        ENDIF
                ELSEIF ! EMPTY(menvelope)
                        IF orc = NIL
                                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(menvelope)
                                malias := 'Q_ped_s'
                        ELSE
                                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(menvelope)
                                malias := 'Q_orcam'
                        ENDIF
			mcons_ped:={}
		        sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mcons_ped) = 0
                                atencao('Nao Existe este PLACA em nossos arquivos')
                                LOOP
                        ENDIF
                        mnum_aux := mcons_ped[1,2]
                        mcli     := mcons_ped[1,23]
                        moper    := mcons_ped[1,34]
                        mvend    := mcons_ped[1,32]
                        mtot_p   := 0
                        mdata_p  := mcons_ped[1,4]
                        m_pedido := {}
	               	IF orc = NIL
        	        	ccomm  := "SELECT pnum_ped,pcod_cli,SUM(pquantd*pvlr_fat),pcod_vend,pcod_oper,pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(menvelope)+" GROUP BY pnum_ped,pnum_ped,pcod_cli,pcod_cli,pcod_vend,pcod_vend,pcod_oper,pcod_oper,pdat_ped,pdat_ped"
	                ELSE
        	        	ccomm  := "SELECT pnum_ped,pcod_cli,SUM(pquantd*pvlr_fat),pcod_vend,pcod_oper,pdat_ped FROM sacorcam WHERE sr_deleted = ' ' AND penvelope = "+sr_cdbvalue(menvelope)+" GROUP BY pnum_ped,pnum_ped,pcod_cli,pcod_cli,pcod_vend,pcod_vend,pcod_oper,pcod_oper,pdat_ped,pdat_ped"
	                ENDIF
			mtot_p:={}
			sr_getconnection():exec(ccomm,,.t.,@mtot_p)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mtot_p) = 0
				atencao('Nao existe nenhum pedido com esse envelope...')
			ENDIF
			i:=0
			FOR i = 1 TO LEN(mtot_p)
                                AADD(m_pos,mtot_p[i,1])
                                AADD(m_pedido,mtot_p[i,1]+'  '+mtot_p[i,2]+'    '+TRANSFORM(mtot_p[i,3],'999,999.99')+'    '+mtot_p[i,4]+'  '+mtot_p[i,5]+'  '+DTOC(mtot_p[i,6]))
			NEXT
                        op_tela(00,00,19,55)
                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        setcor(3)
                        DEVPOS(00,01);DEVOUT('No.Ped')
                        DEVPOS(00,09);DEVOUT('Cliente')
                        DEVPOS(00,18);DEVOUT('Vlr Pedido')
                        DEVPOS(00,30);DEVOUT('Vend.')
                        DEVPOS(00,36);DEVOUT('Oper.')
                        DEVPOS(00,43);DEVOUT('Data')
                        @ 01,00 TO 01,55
                        setcor(1)
                        setcor(10);point := ACHOICE(2,00,17,55,m_pedido,,,point);setcor(1)

                        DO CASE
                                CASE LASTKEY()=27
                                        wvw_lclosewindow()
                                        LOOP
                                CASE LASTKEY() = 13
                                        mnum_ped := VAL(m_pos[point])
		                        IF orc = NIL
                		                cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
		                        ELSE
                		                cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
		                        ENDIF
					mcons_ped:={}
				        sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                                        sr_getconnection():exec('COMMIT',,.f.)
                		        IF LEN(mcons_ped) = 0
                                		atencao('Nao Existe este PEDIDO em nossos arquivos')
		                                LOOP
                		        ENDIF
                        ENDCASE
                        wvw_lclosewindow()
                ELSE
                        LOOP
                ENDIF
        ELSE
                mnum_ped = VAL(mnum_p)
                IF orc = NIL
                        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        malias := 'Q_ped_s'
                ELSE
                        cComm  := "SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        malias := 'Q_orcam'
                ENDIF
		mcons_ped:={}
		sr_getconnection():exec(ccomm,,.t.,@mcons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_ped) = 0
                        atencao('Nao Existe este PEDIDO em nossos arquivos')
                        LOOP
                ENDIF
        ENDIF
        IF m_indiv[1,26] # 'T'
                IF EMPTY(mcons_ped[1,100])
                        atencao('Este Pedido nao foi fechado corretamente, Favor entrar na alteracao de pedido para fecha o pedido para que possa tirar a 2a.via')
                        IF mnum_p # NIL
                                EXIT
                        ENDIF
                        LOOP
                ENDIF
        ENDIF
        IF ! EMPTY(VAL(mcons_ped[1,109]))
                atencao('Ja foi Impresso: '+STRZERO(VAL(mcons_ped[1,109]),4)+' Copias da 2a.via deste '+IF(orc <> NIL,'ORCAMENTO','PEDIDO')+', Data da Ultima Emissao: '+DTOC(mcons_ped[1,72])+' Hr.: '+mcons_ped[1,73]+' Operador: '+mcons_ped[1,75])
        ENDIF
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcons_ped[1,23]),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('Cliente nao encontrado...')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(1,22);DEVOUT(STRZERO(mnum_ped,6))
        setcor(1)
        setcor(3)
        DEVPOS(3,22);DEVOUT(STR(mcons_ped[1,23],5))
        DEVPOS(3,COL()+1);DEVOUT('- '+cons_cli[1,3])
        DEVPOS(4,22);DEVOUT(mcons_ped[1,32])
        DEVPOS(5,22);DEVOUT(mcons_ped[1,34])
        setcor(1)
        mnome_cli := cons_cli[1,3]
        mcgc := cons_cli[1,32]
        minsc:= cons_cli[1,33]
        mcpf := cons_cli[1,34]
        mtp_venda := mcons_ped[1,45]
        IF SUBSTR(mcons_ped[1,44],1,2) = 'DN'
                mdinheiro := '*'
        ELSEIF SUBSTR(mcons_ped[1,44],1,2) = 'CH'
                mcheque := '*'
        ELSEIF SUBSTR(mcons_ped[1,44],1,2) = 'FI'
                mfin := '*'
                mcod_fin := VAL(mcons_ped[1,41])
                ver_finan(mcod_fin)
                mtipo_fin := mcons_ped[1,43]
                mvalor_pres := mcons_ped[1,40]
        ELSEIF SUBSTR(mcons_ped[1,44],1,2) = 'DU'
                mdup := '*'
        ELSEIF SUBSTR(mcons_ped[1,44],1,2) = 'CT'
                mcartao := '*'
        ENDIF
        mcond_veze := mcons_ped[1,43]
        mcondicao := mcons_ped[1,43]
        mprazo := SUBSTR(mcons_ped[1,44],3,3)
        m_dia[1] := VAL(SUBSTR(mcons_ped[1,44],3,3))
        m_dia[2] := VAL(SUBSTR(mcons_ped[1,44],6,3))
        m_dia[3] := VAL(SUBSTR(mcons_ped[1,44],9,3))
        m_dia[4] := VAL(SUBSTR(mcons_ped[1,44],12,3))
        m_dia[5] := VAL(SUBSTR(mcons_ped[1,44],15,3))
        m_dia[6] := VAL(SUBSTR(mcons_ped[1,44],18,3))
        m_dia[7] := VAL(SUBSTR(mcons_ped[1,44],21,3))
        m_dia[8] := VAL(SUBSTR(mcons_ped[1,44],24,3))
        m_dia[9] := VAL(SUBSTR(mcons_ped[1,44],27,3))
        m_dia[10] := VAL(SUBSTR(mcons_ped[1,44],30,3))
        m_dia[11] := VAL(SUBSTR(mcons_ped[1,44],33,3))
        m_dia[12] := VAL(SUBSTR(mcons_ped[1,44],36,3))
        m_dia[13] := VAL(SUBSTR(mcons_ped[1,44],39,3))
        m_dia[14] := VAL(SUBSTR(mcons_ped[1,44],42,3))
        m_dia[15] := VAL(SUBSTR(mcons_ped[1,44],45,3))
        mdat_ped := mcons_ped[1,4]
        mhora := mcons_ped[1,47]
        mcod_vend := mcons_ped[1,32]
        mcod_cli := mcons_ped[1,23]
        mobs1 := mcons_ped[1,86]
        mobs2 := mcons_ped[1,87]
        mobs3 := mcons_ped[1,88]
        mobs4 := mcons_ped[1,89]
        mproducao := mcons_ped[1,93]
        mdata := mcons_ped[1,4]
        mdesc := mcons_ped[1,39]/100
        mvlr_ent := mcons_ped[1,46]
        setcor(3)
	i:=0
        total_ped := {}
        IF ali = 'ped_s'
                cComm  := "SELECT SUM(pquantd * ppre_dig), SUM(pquantd * ppre_venda), SUM(pquantd * pvlr_fat) FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        ELSE
                cComm  := "SELECT SUM(pquantd * ppre_dig), SUM(pquantd * ppre_venda), SUM(pquantd * pvlr_fat) FROM sacorcam WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        ENDIF
        sr_getconnection():exec(ccomm,,.t.,@total_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF total_ped[1,1] > total_ped[1,2]
                mt_pedido := total_ped[1,1]
                msubtotal := total_ped[1,1]
                mcons_ped[1,76] = 0
        ELSE
                mt_pedido := total_ped[1,1]
                msubtotal := total_ped[1,3]
                mt_pedido = mt_pedido  - mcons_ped[1,76]
        ENDIF


        /*
	FOR i = 1 TO LEN(mcons_ped)
                * mt_pedido = mt_pedido + (mcons_ped[i,18] * mcons_ped[i,14])
                mt_pedido = mt_pedido + (mcons_ped[i,17] * mcons_ped[i,14])
                msubtotal := msubtotal + (mcons_ped[i,18] * mcons_ped[i,14])
                mtot_custo := mtot_custo + (mcons_ped[i,21] * mcons_ped[i,14])
        NEXT
        
        mt_pedido = mt_pedido  - mcons_ped[1,76]
        */
        DEVPOS(6,22);DEVOUT(TRANSFORM(mt_pedido,'9,999,999.99'))
        mno_roma := ped_rom(mnum_ped)
        DEVPOS(7,22);DEVOUT(mno_roma)
        SETCOR(1)
        IF (mdup = '*' .OR. mfin = '*') .AND. m_set[1,45] = 'S'
                mimp_dup2 := 'S'
        ELSE
                mimp_dup2 := 'N'
        ENDIF
        @ 8,22 GET mimp_dup2 PICT '@!' VALID mimp_dup2 $ 'S,N' WHEN mdup = '*' .OR. mfin = '*' .AND.  menu_print = NIL
        @ 9,22 GET mquantd PICT '9' WHEN menu_print = NIL
        READ
        IF tkt <> NIL
                imp_emba(mnum_ped)
                LOOP
        ENDIF
        mensagem('Aguarde... Imprimindo Pedido !!!')
        IF m_set[1,100] = 'H' .AND. m_indiv[1,9] = 'A'
                formula_APP()
        ELSE
        IF m_indiv[1,9] = 'B'
                IF mimp_dup2 = 'S'
                        boleto(,'*')
                ELSE
                        boleto()
                ENDIF
        ELSEIF m_indiv[1,9] = 'L'
                IF mimp_dup2 = 'S'
                        boleto('*','*')
                ELSE
                        boleto('*')
                ENDIF
        ELSEIF m_indiv[1,9] = 'F'
                IF mimp_dup2 = 'S'
                        formula('*')
                ELSE
                        formula()
                ENDIF
        ELSEIF m_indiv[1,9] = 'M'
                IF mimp_dup2 = 'S'
                        formula_1('*')
                ELSE
                        formula_1()
                ENDIF
        ELSEIF m_indiv[1,9] = 'T'
                bole_term()
        ENDIF
        ENDIF
        IF ! EMPTY(cons_cli[1,27]) .AND. m_set[1,76] = 'S'
                email_ped(mnum_ped,cons_cli[1,27])
        ENDIF
        IF orc = NIL
                sr_getconnection():exec("UPDATE sacped_s SET qtd_via = "+sr_cdbvalue(STRZERO(VAL(mcons_ped[1,109])+1,2))+",PHORA2A = "+sr_cdbvalue(TIME())+",POPER2A = "+sr_cdbvalue(cod_operado)+",PDAT_PED2A = "+sr_cdbvalue(DATE())+' WHERE pnum_ped = '+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
        ELSE
                sr_getconnection():exec("UPDATE sacorcam SET qtd_via = "+sr_cdbvalue(STRZERO(VAL(mcons_ped[1,109])+1,2))+",PHORA2A = "+sr_cdbvalue(TIME())+",POPER2A = "+sr_cdbvalue(cod_operado)+",PDAT_PED2A = "+sr_cdbvalue(DATE())+' WHERE pnum_ped = '+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
        ENDIF
        sr_getconnection():exec("COMMIT",,.f.)

        IF mnum_p <> NIL
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL