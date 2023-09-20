**************************************
* IMPRIMI NOTA FISCAL DA MASTER FERRO
**************************************
FUNCTION sacnfmel(m_nota,via,texto,v)
*********************
LOCAL mprg:='SACNFMEL',;
      mcont_nota:=0,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mtot_quantd,mtot_ipi:=0,mcont_prod:=0,mextenso,i:=0,f:=0,mvalor_nt:=0,;
      cComm,aret,cons_op:={}

MEMVAR mseguro,mencargo,mdif_icms,mbase_sub,micm_sub,mtipo_nota,mpercent,mcod_nat

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0

IF v <> NIL
        DEVPOS(22,00);DEVOUT(' SACNFMEL ')
        RETURN NIL
ENDIF
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
IF mtipo_nota = 'N' .OR. (mtipo_nota = 'C' .AND. LEN(m_nota) > 0 )
        mtot_quantd := 0
        //mtot_quantd := mtot_icm := mtot_ipi :=mtot_nota:=mtot_icmf:=;
        //mtot_peso:=mtot_liq :=mbase_icm:=0
ENDIF
marca := '*'
lci := cci := 0
lba := 22
cba := 70
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mcont_prod:= i := 0
        FOR i = 1 TO LEN(m_nota)
                IF EMPTY(m_nota[i,5])
                        LOOP
                ENDIF
                IF mtipo_nota = 'N' .OR. (mtipo_nota = 'C' .AND. LEN(m_nota) > 0 )
                        mcont_prod ++
                        mtot_quantd := mtot_quantd + m_nota[i,5]
                ENDIF
        NEXT
        IF mtipo_nota = 'N'
                mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        ENDIF
        opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+':')
        IF opcao = 'S'
                IF mcod_nat = '5.929' .OR. mcod_nat = '6.929'
                        mobs1 := 'REFERENTE A EMISSAO DO CUPOM FISCAL No.: '+SPACE(55-LEN('REFERENTE A EMISSAO DO CUPOM FISCAL No.: '))
                        mobs2 := 'CCF:'+SPACE(55-LEN('CCF:'))
                        mobs3 := 'COO:'+SPACE(55-LEN('COO:'))
                ENDIF
                op_tela(15,10,22,80,' OBSERVACAO nota normal ICM ')
                @ lci+1,cci+2 GET mobs1 PICT '@!'
                @ lci+2,cci+2 GET mobs2 PICT '@!'
                @ lci+3,cci+2 GET mobs3 PICT '@!'
                @ lci+4,cci+2 GET mobs4 PICT '@!'
                @ lci+5,cci+2 GET mobs5 PICT '@!'
                @ lci+6,cci+2 GET mobs6 PICT '@!'
                READ
                opcao := op_simnao('S','Confirma as observacoes:')
                wvw_lclosewindow()
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        mcont_nota := 0
        IF mcont_prod/17 <= 1
                mpag := 1
        ELSEIF mcont_prod/16<= 2
                mpag := 2
        ELSEIF mcont_prod/16<= 3
                mpag := 3
        ELSEIF mcont_prod/16<= 4
                mpag := 4
        ELSEIF mcont_prod/16<= 5
                mpag := 5
        ELSEIF mcont_prod/16<= 6
                mpag := 6
        ELSEIF mcont_prod/16<= 7
                mpag := 7
        ELSEIF mcont_prod/16<= 8
                mpag := 8
        ENDIF
        IF via = '1'
                IF LEN(m_nota) = 0
                        atencao('Nao existe nenhum produto para impressao da nota...')
                        RETURN NIL
                ENDIF
	        IF m_set[1,117] = 'S'
	                aret:={}
        	        //sr_starttrace()
                	lExit := .T.
	                while lExit
        	        sr_begintransaction()
                	try
	                IF msai_ent = 'S'
        	                sr_getconnection():exec( "select numero from  sacnota where sr_recno = 1 for update with lock",,.t.,@aret)
                	        if len(aRet)  == 0
                        	        sr_getconnection():exec("insert into sacnota (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                                	mdocumento = STRZERO(1,6)
	                        else
        	                        mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                	                mnum = strzero(VAL(aret[1,1])+1,6)
                        	        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
	                        endif
        	        ELSE
                	        sr_getconnection():exec( "select numeroe from  sacnotae where sr_recno = 1 for update with lock",,.t.,@aret)
                        	if len(aRet)  == 0
                                	sr_getconnection():exec("insert into sacnotae (numeroe,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
	                                mdocumento = STRZERO(1,6)
        	                else
                	                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                        	        mnum = strzero(VAL(aret[1,1])+1,6)
                                	sr_getconnection():exec("update sacnotae set numeroe = " + sr_cdbvalue(mnum) + " where sr_recno = 1 ",,.f.)
	                        endif

	                ENDIF
        	        sr_committransaction()
                	lExit:=.F.
	                catch e
        	        tracelog(valtoprg())
                	sr_COMMITtransaction()
	                end
        	        sr_endtransaction()
                	end
		ELSE
	                IF msai_ent = 'S'
                                sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mdocumento) + " where sr_recno = 1 ",,.f.)
	                ELSE
                                sr_getconnection():exec("update sacnotae set numeroe = " + sr_cdbvalue(mdocumento) + " where sr_recno = 1 ",,.f.)
        	        ENDIF
		ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                setcor(1)
                atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
                IF m_set[1,117] = 'S'
                        IF mtp_vend = 'AP'
                                mtela_ap := SAVESCREEN(00,00,24,79)
                                WHILE .T.
                                        mnum_dup := mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                        mnum_dup4 := mnum_dup5 := SPACE(8)
                                        mvenci := mvenci1 := mvenci2 := mvenci3 := ;
                                        mvenci4 := mvenci5 := CTOD('  /  /  ')
                                        mvlr_dup := mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := ;
                                        mvlr_dup4 := mvlr_dup5 := 0
                                        setcor(3)
                                        botao(13,10,22,70,,' Duplicatas ')
                                        setcor(1)
                                        DEVPOS(14,11);DEVOUT('Qt.Vezes:')
                                        DEVPOS(14,25);DEVOUT('Intervalos:    -   -   -   -   -')
                                        DEVPOS(15,11);DEVOUT('No.Dup.:')
                                        DEVPOS(15,33);DEVOUT('Venc.:')
                                        DEVPOS(15,52);DEVOUT('Vlr.:')
                                        DEVPOS(16,11);DEVOUT('No.Dup.:')
                                        DEVPOS(16,33);DEVOUT('Venc.:')
                                        DEVPOS(16,52);DEVOUT('Vlr.:')
                                        DEVPOS(17,11);DEVOUT('No.Dup.:')
                                        DEVPOS(17,33);DEVOUT('Venc.:')
                                        DEVPOS(17,52);DEVOUT('Vlr.:')
                                        DEVPOS(18,11);DEVOUT('No.Dup.:')
                                        DEVPOS(18,33);DEVOUT('Venc.:')
                                        DEVPOS(18,52);DEVOUT('Vlr.:')
                                        DEVPOS(19,11);DEVOUT('No.Dup.:')
                                        DEVPOS(19,33);DEVOUT('Venc.:')
                                        DEVPOS(19,52);DEVOUT('Vlr.:')
                                        DEVPOS(20,11);DEVOUT('No.Dup.:')
                                        DEVPOS(20,33);DEVOUT('Venc.:')
                                        DEVPOS(20,52);DEVOUT('Vlr.:')
                                        DEVPOS(21,11);DEVOUT('Valor do IPI:'+TRANSFORM(mtot_ipi,'999,999.99'))
                                        opcao := op_simnao('S','Deseja IMPRESSAO DAS DUPLICATAS:')
                                        IF opcao = 'S'
                                                @ 14,21 GET mcond_vezes PICT '@@R 9-99' VALID IF((VAL(SUBSTR(mcond_vezes,1,1))) + (VAL(SUBSTR(mcond_vezes,2,2))) > 7,.F.,.T.)
                                                @ 14,37 GET mintev PICT '999' VALID IF(EMPTY(mintev),.F.,.T.)
                                                @ 14,41 GET mintev1 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 2 VALID IF(EMPTY(mintev1),.F.,.T.)
                                                @ 14,45 GET mintev2 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 3 VALID IF(EMPTY(mintev2),.F.,.T.)
                                                @ 14,49 GET mintev3 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 4 VALID IF(EMPTY(mintev3),.F.,.T.)
                                                @ 14,53 GET mintev4 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 5 VALID IF(EMPTY(mintev4),.F.,.T.)
                                                @ 14,57 GET mintev5 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) = 6 VALID IF(EMPTY(mintev5),.F.,.T.)
                                                READ
                                                mnum_dup := mdocumento
                                                IF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 1
                                                        mnum_dup := mnum_dup+'-1/1'
                                                        mvenci := mdata + mintev
                                                        IF ver_serie() = '141225' .OR. ver_serie() = '141254'
                                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub
                                                        ELSE
                                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)
                                                        ENDIF
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 2
                                                        mnum_dup1 := mnum_dup+'-2/2'
                                                        mnum_dup := mnum_dup+'-1/2'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /2) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /2
                                                        msobra := mvlr_dup
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 3
                                                        mnum_dup1 := mnum_dup+'-2/3'
                                                        mnum_dup2 := mnum_dup+'-3/3'
                                                        mnum_dup := mnum_dup+'-1/3'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /3) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /3
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /3
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 4
                                                        mnum_dup1 := mnum_dup+'-2/4'
                                                        mnum_dup2 := mnum_dup+'-3/4'
                                                        mnum_dup3 := mnum_dup+'-4/4'
                                                        mnum_dup := mnum_dup+'-1/4'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /4) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /4
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /4
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /4
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 5
                                                        mnum_dup1 := mnum_dup+'-2/5'
                                                        mnum_dup2 := mnum_dup+'-3/5'
                                                        mnum_dup3 := mnum_dup+'-4/5'
                                                        mnum_dup4 := mnum_dup+'-5/5'
                                                        mnum_dup := mnum_dup+'-1/5'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvenci4 := mdata + mintev4
                                                        mvlr_dup := ((mtot_nota+mfrete+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /5) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /5
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /5
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /5
                                                        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /5
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 6
                                                        mnum_dup1 := mnum_dup+'-2/6'
                                                        mnum_dup2 := mnum_dup+'-3/6'
                                                        mnum_dup3 := mnum_dup+'-4/6'
                                                        mnum_dup4 := mnum_dup+'-5/6'
                                                        mnum_dup5 := mnum_dup+'-6/6'
                                                        mnum_dup := mnum_dup+'-1/6'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvenci4 := mdata + mintev4
                                                        mvenci5 := mdata + mintev5
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6
                                                        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6
                                                        mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-(mdesc_icm+mvlr_entrada)) /6
                                                ENDIF
                                                msobra := 0
                                                msobra := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub+mtot_ipi-mdesc_icm)  - (iat(mvlr_dup,2) + iat(mvlr_dup1,2) +iat(mvlr_dup2,2) +iat(mvlr_dup3,2) +iat(mvlr_dup4,2) + iat(mvlr_dup5,2))
                                                mvlr_dup := mvlr_dup + msobra

                                                @ 15,20 GET mnum_dup PICT '@!'
                                                @ 15,40 GET mvenci
                                                @ 15,58 GET mvlr_dup PICT '999,999.99'
                                                @ 16,20 GET mnum_dup1 PICT '@!'
                                                @ 16,40 GET mvenci1
                                                @ 16,58 GET mvlr_dup1 PICT '999,999.99'
                                                @ 17,20 GET mnum_dup2 PICT '@!'
                                                @ 17,40 GET mvenci2
                                                @ 17,58 GET mvlr_dup2 PICT '999,999.99'
                                                @ 18,20 GET mnum_dup3 PICT '@!'
                                                @ 18,40 GET mvenci3
                                                @ 18,58 GET mvlr_dup3 PICT '999,999.99'
                                                @ 19,20 GET mnum_dup4 PICT '@!'
                                                @ 19,40 GET mvenci4
                                                @ 19,58 GET mvlr_dup4 PICT '999,999.99'
                                                @ 20,20 GET mnum_dup5 PICT '@!'
                                                @ 20,40 GET mvenci5
                                                @ 20,58 GET mvlr_dup5 PICT '999,999.99'
                                                READ
                                                mopcao := op_simnao('S','Confirma as Duplicatas:')
                                                IF mopcao = 'N'
                                                        mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                                        mnum_dup4 := mnum_dup5 := SPACE(6)
                                                        mvenci1 := mvenci2 := ;
                                                        mvenci3 := mvenci4 := ;
                                                        mvenci5 := CTOD('  /  /  ')
                                                        mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := ;
                                                        mvlr_dup4 := mvlr_dup5 := 0
                                                        LOOP
                                                ELSE
                                                        EXIT
                                                ENDIF
                                        ELSE
                                                EXIT
                                        ENDIF
                                ENDDO
                                RESTSCREEN(00,00,24,79,mtela_ap)
                        ENDIF
                ENDIF

                IF mtipo_nota = 'N'
                        mtot_ipi  := mtot_nota := mtot_icmf := mbase_icm := 0
                ENDIF
                mdoc := mdoc_aux := mdocumento
                maux := SPACE(10)
                cons_op :={}
                cComm  := "SELECT * FROM sacop WHERE operacao = "+sr_cdbvalue(mcod_nat)
                sr_getconnection():exec(ccomm,,.t.,@cons_op)
                i := 0
                FOR i = 1 TO mcont_prod
                        f ++
                        ****************
                        SELE('merc');ORDSETFOCUS(1)
                        GO TOP
                        ****************

                        SEEK m_nota[i,21]

                        *** PRECO DE FATURA ********
                        mpr_fat := m_nota[i,7]
                        ****************************
                        IF BLOQREG()
                                IF msai_ent = 'S' .AND. cons_op[1,3] = 'S'
                                        merc-> saldo_fis := merc-> saldo_fis - m_nota[i,5]
                                        merc-> icm := icm - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                                ELSEIF msai_ent = 'E'
                                        merc-> saldo_fis := merc-> saldo_fis + m_nota[i,5]
                                        merc-> data_atu := mdata_sis
                                        merc-> icm := icm + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACMERC)')
                                LOOP
                        ENDIF
                        *************
                        SELE('movnt')
                        *************
                        IF ADIREG()
                                movnt->empresa := mcodempresa
                                IF i = 14
                                        mdoc_aux := mdocumento+'/A'
                                        maux := '/A'
                                ELSEIF i = 25
                                        mdoc_aux := mdocumento+'/B'
                                        maux := ALLTRIM(maux)+'B'
                                ELSEIF i = 34
                                        mdoc_aux := mdocumento+'/C'
                                        maux := ALLTRIM(maux)+'C'
                                ELSEIF i = 43
                                        mdoc_aux := mdocumento+'/D'
                                        maux := ALLTRIM(maux)+'D'
                                ELSEIF i = 52
                                        mdoc_aux := mdocumento+'/E'
                                        maux := ALLTRIM(maux)+'E'
                                ELSEIF i = 61
                                        mdoc_aux := mdocumento+'/F'
                                        maux := ALLTRIM(maux)+'F'
                                ELSEIF i = 70
                                        mdoc_aux := mdocumento+'/G'
                                        maux := ALLTRIM(maux)+'G'
                                ELSEIF i = 79
                                        mdoc_aux := mdocumento+'/H'
                                        maux := ALLTRIM(maux)+'H'
                                ENDIF
                                movnt-> modelo  := mmodelo
                                movnt-> num_ped := STRZERO(mnum_ped,6)
                                movnt-> tipo_nota := mtipo_nota
                                movnt-> documento := 'NF'+mdoc_aux
                                movnt-> serie     := mserie_not
                                movnt-> codigo := m_nota[i,21]
                                movnt-> produto := m_nota[i,2]
                                movnt-> cod_fab := m_nota[i,3]
                                movnt-> fabrica := m_nota[i,4]
                                movnt-> unidade := m_nota[i,8]
                                movnt-> data_s_e := mdata
                                IF msai_ent = 'S'
                                        movnt-> ent_sai := 'S'
                                ELSEIF msai_ent = 'E'
                                        movnt-> ent_sai := 'E'
                                ENDIF
                                movnt-> quantd := m_nota[i,5]
                                movnt-> pr_venda := m_nota[i,6]
                                movnt-> vl_vend := m_nota[i,7]          // - (m_nota[i,7]*(m_nota[i,11]/100))
                                movnt-> cod_vend := STRZERO(mcod_vend,3)
                                movnt-> cod_cli := STRZERO(mcod_cli,5)
                                movnt-> cliente := mcliente
                                movnt-> uf_cli := muf_cli
                                movnt-> cgc_cli := cli->cgc
                                movnt-> cpf_cli := cli->cpf
                                movnt-> insc_cli := cli->insc
                                movnt-> icm := m_nota[i,20]

                                movnt-> ipi_aliq := m_nota[i,24]
                                movnt-> ipi := (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                movnt-> vl_fatura := mpr_fat
                                IF mtipo_nota = 'N'
                                        IF  m_nota[i,20] > 0
                                                IF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + (((mpr_fat * m_nota[i,5])*m_nota[i,34]))
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                        movnt-> base_icm := iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                ELSE
                                                        mbase_icm = mbase_icm + (mpr_fat * m_nota[i,5])
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                                                        movnt-> base_icm := iat((mpr_fat * m_nota[i,5]),2)
                                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                                                ENDIF
                                        ENDIF
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + (mpr_fat * m_nota[i,5])
                                        mtot_ipi := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                ENDIF
                                movnt-> icm_f := m_nota[i,13]
                                movnt-> icm_sub := m_nota[i,22]
                                movnt-> pr_unit := m_nota[i,12]
                                movnt-> cust_mer:= m_nota[i,33]
                                movnt-> frete := mfrete
                                movnt-> encargo_f := mencargo
                                movnt-> disp_asse := mseguro
                                movnt-> tipo := '03'
                                movnt-> isento := m_nota[i,14]
                                movnt-> sittrib:= m_nota[i,35]
                                movnt-> desc1 := m_nota[i,11]
                                movnt-> peso := m_nota[i,9]
                                movnt-> peso_liq := m_nota[i,18]
                                movnt-> alimento := m_nota[i,10]
                                movnt-> bebida := m_nota[i,17]
                                movnt-> tp_venda := mtp_vend
                                movnt-> cond_vezes := mcond_vezes
                                movnt-> cond_intev := STRZERO(mintev,3)
                                movnt-> cod_nat := mcod_nat
                                movnt-> conjunta := mdocumento
                                movnt-> obs1 := mobs1
                                movnt-> obs2 := mobs2
                                movnt-> obs3 := mobs3
                                movnt-> obs4 := mobs4
                                movnt-> obs5 := mobs5
                                movnt-> obs6 := mobs6
                                movnt-> cod_nota := mcod_nota
                                IF mtipo_nota = 'N'
                                        mtot_peso := mtot_peso + (m_nota[i,9]*m_nota[i,5])
                                        mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        ENDIF
                NEXT
                DBCOMMITALL()
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_icm := iat(mtot_icm,2)
                mdoc_aux := mdocumento
                IF mcredito = 'S'
                        ****************
                        SELE('icm')
                        GO TOP
                        ****************
                        IF BLOQREG()
                                icm-> documento := mdocumento
                                icm-> data := mdata
                                IF msai_ent = 'S'
                                        icm-> deb_cred := icm->deb_cred - mtot_icm
                                ELSE
                                        icm-> deb_cred := icm->deb_cred + mtot_icm
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                        GO 2
                        IF BLOQREG()
                                icm-> documento := mdocumento
                                icm-> data := mdata
                                IF msai_ent = 'S'
                                        icm-> deb_cred := icm->deb_cred - mtot_ipi
                                ELSE
                                        icm-> deb_cred := icm->deb_cred + mtot_ipi
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                ENDIF
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt->empresa  := mcodempresa
                        totnt-> modelo  := mmodelo
                        totnt-> tipo_nota := mtipo_nota
                        totnt-> cod_nota := mcod_nota
                        totnt-> num_ped := STRZERO(mnum_ped,6)
                        totnt-> documento := 'NF'+mdoc
                        totnt-> serie     := mserie_not
                        totnt-> auxiliar := maux
                        totnt-> emissao := mdata
                        IF msai_ent = 'S'
                                totnt-> ent_sai := 'S'
                        ELSEIF msai_ent = 'E'
                                totnt-> ent_sai := 'E'
                        ENDIF
                        totnt-> cod_cli := STRZERO(mcod_cli,5)
                        totnt-> cliente := mcliente
                        totnt-> uf_cli := muf_cli
                        totnt-> cid_cli := mcid_cli
                        totnt-> insc_cli := cli->insc
                        totnt-> cgc_cli := cli->cgc
                        totnt-> cpf_cli := cli->cpf
                        totnt-> cod_vend := STRZERO(mcod_vend,3)
                        totnt-> vl_base := mbase_icm
                        totnt-> vl_icm  := mtot_icm
                        totnt-> vl_icmsu:= mtot_icmf
                        IF mtipo_nota = 'C'
                                totnt-> vl_base     := cbase_icm
                                totnt-> vl_icm      := ctot_icm
                                totnt-> vl_icmsu    := ctot_icmf
                                totnt-> vl_nota     := ctot_nota
                                totnt-> vlr_icmsub  := ctot_icmf
                                totnt-> base_icmsu  := cbase_icmf
                                totnt-> ipi         := ctot_ipi
                                totnt-> peso        := ctot_peso
                                totnt-> peso_liq    := ctot_liq
                                totnt-> vl_prod     := mtot_prod
                                totnt-> vl_nota     := mtot_nota
                        ELSE
                                totnt-> vl_base := mbase_icm
                                totnt-> vl_icm  := mtot_icm
                                totnt-> vl_icmsu:= mtot_icmf
                                totnt-> vl_nota := mtot_nota + mtot_ipi
                                totnt-> vlr_icmsub := mtot_icmf
                                totnt-> base_icmsu := mbase_icmf
                                totnt-> ipi     := mtot_ipi
	                        totnt-> peso := mtot_peso
        	                totnt-> peso_liq := mtot_liq
	                        IF mtipo_nota = 'N'
        	                        totnt-> vl_prod := mtot_nota
                	                totnt-> vl_nota := (mtot_nota + mtot_ipi)       //- (mpis+mconfis+micms_desc)
                        	ELSE
	                                totnt-> vl_prod := mtot_prod
        	                        totnt-> vl_nota := (mtot_nota + mtot_ipi)       //- (mpis+mconfis+micms_desc)
                	        ENDIF
                        ENDIF
                        totnt-> frete := mfrete
                        totnt-> encargo_f := mencargo
                        totnt-> disp_asse := mseguro
                        totnt-> cod_nat := mcod_nat
                        totnt-> obs1 := mobs1
                        totnt-> obs2 := mobs2
                        totnt-> obs3 := mobs3
                        totnt-> obs4 := mobs4
                        totnt-> obs5 := mobs5
                        totnt-> obs6 := mobs6
                        DBUNLOCK()
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        LOOP
                ENDIF
                DBCOMMITALL()
                IF mtipo_nota = 'N'
                        mtot_nota := mtot_icmf := mbase_icm := 0

                ENDIF
        ELSE
                IF mtipo_nota = 'N'
                        i := 0
                        FOR i = 1 TO mcont_prod
                                IF m_nota[i,21] = SPACE(5) .OR. EMPTY(m_nota[i,5])
                                        LOOP
                                ENDIF
                                *** PRECO DE FATURA ********
                                mpr_fat := m_nota[i,7]
                                //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
                                ****************************
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                        NEXT
                ENDIF
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
                cons_cli := {}
                sr_getconnection():exec("SELECT * FROM saccli  WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)) ,,.t.,cons_cli)
		IF LEN(cons_cli) = 0
			atencao('Nao foi encontrado este CLIENTE...')
			LOOP
		ENDIF
                sr_getconnection():exec("UPDATE saccli SET ult_comp = "+sr_cdbvalue(mdata)+" WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)) ,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                WHILE .T.
                        IF ! imp_arq(mprg+'.REL','N')
                                atencao('Foi Gerada a NOTA FISCAL de No.:'+mdocumento)
                                LOOP
                        ELSE
                                EXIT
                        ENDIF
                ENDDO
                SETPRC(00,00)
                imprt('M','C') 
                IF msai_ent = 'S'
                        DEVPOS(PROW()+1,83);DEVOUT('X')
                ELSE
                        DEVPOS(PROW()+1,103);DEVOUT('X')
                ENDIF
                DEVPOS(PROW(),125);DEVOUT(mdocumento)
                DEVPOS(PROW()+5,00);DEVOUT(mnatureza)
                DEVPOS(PROW(),47);DEVOUT(mcod_nat)
                DEVPOS(PROW()+3,00);DEVOUT(cons_cli[1,2]+'-'+cons_cli[1,3])
                IF ! EMPTY(cons_cli[1,32])
                        DEVPOS(PROW(),90);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                ELSE
                        DEVPOS(PROW(),90);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                ENDIF
                DEVPOS(PROW(),124);DEVOUT(mdata)
                DEVPOS(PROW()+2,00);DEVOUT(cons_cli[1,21])
                DEVPOS(PROW(),75);DEVOUT(cons_cli[1,22])
                DEVPOS(PROW(),102);DEVOUT(cons_cli[1,26])
                DEVPOS(PROW()+2,00);DEVOUT(cons_cli[1,24])
                DEVPOS(PROW(),55);DEVOUT(cons_cli[1,29])
                DEVPOS(PROW(),78);DEVOUT(cons_cli[1,25])
                DEVPOS(PROW(),90);DEVOUT(cons_cli[1,33])
/*
                IF EMPTY(mnum_dup)
                        DEVPOS(PROW()+4,00);DEVOUT(' ')
                ELSE
                        IF mpag = 1
                                DEVPOS(PROW()+3,00);DEVOUT(mnum_dup)
                                DEVPOS(PROW(),15);DEVOUT(mvenci)
                                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))

                                IF ! EMPTY(mnum_dup1)
                                        DEVPOS(PROW(),PCOL()+9);DEVOUT(mnum_dup1)
                                        DEVPOS(PROW(),PCOL()+5);DEVOUT(mvenci1)
                                        DEVPOS(PROW(),PCOL()+5);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                ENDIF
                                IF ! EMPTY(mnum_dup2)
                                        DEVPOS(PROW(),PCOL()+6);DEVOUT(mnum_dup2)
                                        DEVPOS(PROW(),PCOL()+5);DEVOUT(mvenci2)
                                        DEVPOS(PROW(),PCOL()+5);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ELSE
                                DEVPOS(PROW()+4,00);DEVOUT(' ')
                        ENDIF
                ENDIF
*/
                i := f := 0
                DEVPOS(PROW()+2,00);DEVOUT('')
                IF mtipo_nota = 'N'
                        mtot_nota := mtot_desc := mtot_peso := ;
                        mtot_liq := mtot_icmf := mbase_icm := ;
                        mtot_ipi := 0
                ENDIF
                FOR i = 1 TO mcont_prod
                        IF m_nota[i,21] = SPACE(5) .OR. EMPTY(m_nota[i,5])
                                LOOP
                        ENDIF
                        f ++
                        IF f > 20
                                mdoc_aux := mdocumento
                                mcont_nota ++
                                mpag --
                                IF mcont_nota = 1
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/A')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 2
                                        mdoc_aux := mdocumento+'/A'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/B')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 3
                                        mdoc_aux := mdocumento+'/B'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/C')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 4
                                        mdoc_aux := mdocumento+'/C'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/D')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 5
                                        mdoc_aux := mdocumento+'/D'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/E')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 6
                                        mdoc_aux := mdocumento+'/E'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/F')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 7
                                        mdoc_aux := mdocumento+'/F'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/G')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ELSEIF mcont_nota = 8
                                        mdoc_aux := mdocumento+'/G'
                                        DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/H')
                                        DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                ENDIF
                                DEVPOS(50,00);DEVOUT(STRZERO(mnum_ped,6))
                                DEVPOS(50,PCOL()+2);DEVOUT(cli->cod_cli+' - Ope.:'+cod_operado)
                                DEVPOS(51,01);DEVOUT(mobs1)
                                DEVPOS(PROW()+1,01);DEVOUT(mobs2)
                                DEVPOS(PROW()+1,01);DEVOUT(mobs3)
                                DEVPOS(PROW()+1,01);DEVOUT(mobs4)
                                DEVPOS(PROW()+1,01);DEVOUT(mobs5)
                                DEVPOS(PROW()+1,01);DEVOUT(mobs6)
                                IF via <> '1'
                                        DEVPOS(PROW(),95);DEVOUT(mserie+' '+mnum_sel)
                                        mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                ELSE
                                        cons_sel := {}
                                        sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                        DEVPOS(PROW()+1,95);DEVOUT(mserie+' '+cons_sel[1,1])
                                        sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                                imprt('M','C')
                                DEVPOS(PROW()+4,73);DEVOUT(mdoc_aux)
                                SETPRC(00,00)
                                EJECT
*                               mdocumento := STRZERO(VAL(mdocumento)+1,6)
                                IF msai_ent = 'S'
                                        DEVPOS(PROW()+1,83);DEVOUT('X')
                                ELSE
                                        DEVPOS(PROW()+1,103);DEVOUT('X')
                                ENDIF
                                IF mcont_nota = 1
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/A')
                                ELSEIF mcont_nota = 2
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/B')
                                ELSEIF mcont_nota = 3
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/C')
                                ELSEIF mcont_nota = 4
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/D')
                                ELSEIF mcont_nota = 5
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/E')
                                ELSEIF mcont_nota = 6
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/F')
                                ELSEIF mcont_nota = 7
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/G')
                                ELSEIF mcont_nota = 8
                                        DEVPOS(PROW(),125);DEVOUT(mdocumento+'/H')
                                ENDIF
                                DEVPOS(PROW()+5,00);DEVOUT(mnatureza)
                                DEVPOS(PROW(),47);DEVOUT(mcod_nat)
                                DEVPOS(PROW()+3,00);DEVOUT(cons_cli[1,2]+'-'+cons_cli[1,3])
                                IF ! EMPTY(cons_cli[1,32])
                                        DEVPOS(PROW(),90);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                ELSE
                                        DEVPOS(PROW(),90);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                ENDIF
                                DEVPOS(PROW(),124);DEVOUT(mdata)
                                DEVPOS(PROW()+2,00);DEVOUT(cons_cli[1,21])
                                DEVPOS(PROW(),75);DEVOUT(cons_cli[1,22])
                                DEVPOS(PROW(),102);DEVOUT(cons_cli[1,26])
                                DEVPOS(PROW()+2,00);DEVOUT(cons_cli[1,24])
                                DEVPOS(PROW(),55);DEVOUT(cons_cli[1,29])
                                DEVPOS(PROW(),78);DEVOUT(cons_cli[1,25])
                                DEVPOS(PROW(),90);DEVOUT(cons_cli[1,33])
                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                DEVPOS(PROW()+1,17);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999.99')
                                f := 2
                        ENDIF
                        IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                //ver_cod(VAL(m_nota[i,21]))
                                DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])        //caodigo
                                DEVPOS(PROW(),15);DEVOUT(m_nota[i,2])           // descricao
                                DEVPOS(PROW(),PCOL()+24);DEVOUT(m_nota[i,23])   // 
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(m_nota[i,35])
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(m_nota[i,8])
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_nota[i,5],'99999.99')
                                *** PRECO DE FATURA ********
                                mpr_fat := m_nota[i,7]
                                ****************************
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mpr_fat,'999,999.99')
                                DEVPOS(PROW(),PCOL()+7);DEVOUTPICT(mpr_fat * m_nota[i,5],'999,999.99')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_nota[i,20],'99')
                                IF mtipo_nota = 'N'
                                        mtot_nota := mtot_nota + (mpr_fat * m_nota[i,5])
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_desc :=iat(mtot_desc + m_nota[i,11],2)
                                        mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                        IF  m_nota[i,20] > 0
                                                IF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + (((mpr_fat * m_nota[i,5])*m_nota[i,34]))
                                                ELSE
                                                        mbase_icm = mbase_icm + (mpr_fat * m_nota[i,5])
                                                ENDIF
                                        ENDIF
                                        mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                        mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                ENDIF
                        ELSE
                                IF mtipo_nota = 'N'
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        ****************************
                                        mtot_nota := mtot_nota + iat((mpr_fat * m_nota[i,5]),2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                        IF  m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,5]),2)
                                        ENDIF
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'N'
                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                        ENDIF
                NEXT
                IF mtipo_nota = 'C'
                        DEVPOS(39,10);DEVOUTPICT(cbase_icm,'9,999,999.99')
                        DEVPOS(PROW(),36);DEVOUTPICT(ctot_icm,'9,999,999.99')
                        DEVPOS(PROW(),66);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                        DEVPOS(PROW(),92);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                        DEVPOS(PROW(),120);DEVOUTPICT(ctot_prod,'999,999,999.99')
                        DEVPOS(PROW()+2,10);DEVOUTPICT(mfrete,'9,999,999.99')
                        DEVPOS(PROW(),36);DEVOUTPICT(mseguro,'9,999,999.99')
                        DEVPOS(PROW(),66);DEVOUTPICT(mencargo,'9,999,999.99')
                        DEVPOS(PROW(),92);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                        DEVPOS(PROW(),120);DEVOUTPICT(ctot_nota,'999,999,999.99')
                ELSE
                        DEVPOS(39,10);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'9,999,999.99')
                        DEVPOS(PROW(),36);DEVOUTPICT(mtot_icm,'9,999,999.99')
                        //IF mtipo_nota = 'N'
                                IF micm_sub > 0
                                        DEVPOS(PROW(),66);DEVOUTPICT(mbase_icmf,'9,999,999.99')
                                        DEVPOS(PROW(),92);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                                ELSE
                                        DEVPOS(PROW(),66);DEVOUTPICT(0,'9,999,999.99')
                                        DEVPOS(PROW(),92);DEVOUTPICT(0,'9,999,999.99')
                                ENDIF
                                DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        //ELSE
                        //        DEVPOS(39,66);DEVOUTPICT(mbase_icmf,'9,999,999.99')
                        //        DEVPOS(39,92);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                        //        DEVPOS(39,120);DEVOUTPICT(mtot_prod,'99,999,999.99')
                        //ENDIF
                        DEVPOS(PROW()+2,10);DEVOUTPICT(mfrete,'9,999,999.99')
                        DEVPOS(PROW(),36);DEVOUTPICT(mseguro,'9,999,999.99')
                        DEVPOS(PROW(),66);DEVOUTPICT(mencargo,'9,999,999.99')
                        DEVPOS(PROW(),92);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                        IF mtipo_nota = 'C'
                                mvalor_nt := mtot_nota
                                DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        ELSE
                                mvalor_nt :=mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mdif_icms + micm_sub
                                DEVPOS(PROW(),120);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mdif_icms + micm_sub,'999,999,999.99')
                        ENDIF
                ENDIF
                DEVPOS(PROW()+3,10);DEVOUT(mnome_trans)
                DEVPOS(PROW(),84);DEVOUT(mfrete_trans)
                DEVPOS(PROW(),90);DEVOUT(mplaca_trans)
                DEVPOS(PROW(),110);DEVOUT(mpluf_trans)
                IF mcgccpf = 'CGC'
                        DEVPOS(PROW(),118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                ELSEIF mcgccpf = 'CPF'
                        DEVPOS(PROW(),118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                ELSE
                        DEVPOS(PROW(),118);DEVOUT(mcgc_trans)
                ENDIF
                DEVPOS(PROW()+2,10);DEVOUT(mend_trans)
                DEVPOS(PROW(),73);DEVOUT(mmun_trans)
                DEVPOS(PROW(),110);DEVOUT(muf_trans)
                DEVPOS(PROW(),118);DEVOUT(minsc_trans)

                DEVPOS(PROW()+2,02);DEVOUTPICT(mtot_quantd,'999,999.99')
                DEVPOS(PROW(),30);DEVOUT(mesp_trans)
                DEVPOS(PROW(),50);DEVOUT(mmarca_trans)
                DEVPOS(PROW(),75);DEVOUT(mnum_trans)
                DEVPOS(PROW(),100);DEVOUTPICT(mtot_peso,'99,999.999')
                DEVPOS(PROW(),120);DEVOUTPICT(mtot_liq,'99,999.999')
                DEVPOS(PROW()+2,00);DEVOUT(STRZERO(mnum_ped,6))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(cli->cod_cli+' - Ope.:'+cod_operado)
                DEVPOS(PROW()+1,01);DEVOUT(mobs1)
                DEVPOS(PROW()+1,01);DEVOUT(mobs2)
                DEVPOS(PROW()+1,01);DEVOUT(mobs3)
                DEVPOS(PROW()+1,01);DEVOUT(mobs4)
                DEVPOS(PROW()+1,01);DEVOUT(mobs5)
                DEVPOS(PROW()+1,01);DEVOUT(mobs6)
                IF via <> '1'
                        DEVPOS(PROW()+1,95);DEVOUT(mserie+' '+mnum_sel)
                        mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                ELSE
                        cons_sel := {}
                        sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                        DEVPOS(PROW()+1,95);DEVOUT(mserie+' '+cons_sel[1,1])
                        sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
                DEVPOS(PROW()+4,125);DEVOUT('')
                IF mcont_nota = 0
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento)
                ELSEIF mcont_nota = 1
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/A')
                ELSEIF mcont_nota = 2
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/B')
                ELSEIF mcont_nota = 3  
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/C')
                ELSEIF mcont_nota = 4
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/D')
                ELSEIF mcont_nota = 5
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/E')
                ELSEIF mcont_nota = 6
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/F')
                ELSEIF mcont_nota = 7
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/G')
                ELSEIF mcont_nota = 8
                        DEVPOS(PROW(),PCOL());DEVOUT(mdocumento+'/H')
                ENDIF
                EJECT
                imprt('M','N')
                imprt('M','P6')
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                IF mimp_tipo = 2
                        lertexto(mprg+'.REL')
                ELSEIF mtipo_imp = 'D'
                        
                ENDIF
                ASIZE(m_nota,0)
                CLEAR GETS
                IF mtp_vend = 'AP'
                        opcao := mensagem1('Deseja emitir [B]oleto bancario [D]uplicata carteira [N]ao:','N','B,D,N')
                        IF opcao = 'B'
                                CLEAR GETS
                                sacbole1(mcod_cli,mdocumento,mvalor_nt,mnum_ped)
                        ENDIF
                        IF opcao = 'D'
                                CLEAR GETS
                                IF ! EMPTY(mnum_dup)
                                        con428(mcod_cli,mnum_dup,mvlr_dup,,,mvenci,'DU')
                                ENDIF
                                IF ! EMPTY(mnum_dup1)
                                        con428(mcod_cli,mnum_dup1,mvlr_dup1,,,mvenci1,'DU')
                                ENDIF
                                IF ! EMPTY(mnum_dup2)
                                        con428(mcod_cli,mnum_dup2,mvlr_dup2,,,mvenci2,'DU')
                                ENDIF
                                IF ! EMPTY(mnum_dup3)
                                        con428(mcod_cli,mnum_dup3,mvlr_dup3,,,mvenci3,'DU')
                                ENDIF
                                IF ! EMPTY(mnum_dup4)
                                        con428(mcod_cli,mnum_dup4,mvlr_dup4,,,mvenci4,'DU')
                                ENDIF
                                IF ! EMPTY(mnum_dup5)
                                        con428(mcod_cli,mnum_dup5,mvlr_dup5,,,mvenci5,'DU')
                                ENDIF
                        ENDIF
                ENDIF
                IF mcod_nat = '5.912' .OR. mcod_nat = '5.913' .OR. mcod_nat = '5.915';
                   .OR. mcod_nat = '5.916' .OR. mcod_nat = '6.912' .OR. mcod_nat = '6.913';
                   .OR. mcod_nat = '6.915' .OR. mcod_nat = '6.916' .OR. mcod_nat = '6.949';
                   .OR. mcod_nat = '1.917' .OR. mcod_nat = '1.918' .AND. ! EMPTY(mnum_ped)
                        mtot_p := 0
                        mtempo := ' '
                        op_tela(02,15,13,85,'CANCELAMENTO DE PEDIDOS')
                        mensagem('Digite o No.do pedido que deseja cancelar - <ESC>abandonar')
                        @ lci+9,cci TO lci+9,cba
                        DEVPOS(lci+1,cci+1);DEVOUT('No.do Pedido:')
                        DEVPOS(lci+2,cci+1);DEVOUT('Valor R$....:')
                        DEVPOS(lci+3,cci+1);DEVOUT('Data pedido.:')
                        DEVPOS(lci+4,cci+1);DEVOUT('Cod.vendedor:')
                        DEVPOS(lci+5,cci+1);DEVOUT('Hora Emissao:')
                        DEVPOS(lci+6,cci+1);DEVOUT('Hora Atual..:')
                        DEVPOS(lci+7,cci+1);DEVOUT('Intervalo...:')
                        DEVPOS(lci+8,cci+1);DEVOUT('Motivo......:')
                        DEVPOS(lci+10,cci+1);DEVOUT('Produto.....:')
                        DEVPOS(lci+1,cci+15);DEVOUT(mnum_ped)
                        cons_ped:={}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" ORDER BY pnum_ped,pcod_merc",,.t.,@cons_ped)
			IF LEN(cons_ped) = 0
				atencao('Nao possivel encontrar este Pedido....')
				LOOP
			ENDIF
                        setcor(3)
                        DEVPOS(lci+3,cci+15);DEVOUT(cons_ped[1,4])
                        DEVPOS(lci+4,cci+15);DEVOUT(cons_ped[1,32])
                        DEVPOS(lci+5,cci+15);DEVOUT(cons_ped[1,47])
                        DEVPOS(lci+6,cci+15);DEVOUT(TIME())
                        IF mdata_sis - cons_ped[1,4] > 0
                                mtempo := STRZERO(mdata_sis - cons_ped[1,4],3)+' dias'
                        ELSE
                                mtempo := ELAPTIME(cons_ped[1,47],TIME())
                        ENDIF
                        DEVPOS(lci+7,cci+15);DEVOUT(mtempo)
                        i := 0
                        FOR i = 1 TO LEN(cons_ped)
                                mtot_p := mtot_p + (cons_ped[i,18] * cons_ped[i,14])
                        NEXT
                        DEVPOS(lci+2,cci+15);DEVOUT(TRANSFORM(mtot_p,'999,999,999.99'))
                        DEVPOS(lci+8,cci+15);DEVOUT('REF.NOTA FISCAL ENTRADA No:'+mdocumento)
                        setcor(1)
                        opcao := op_simnao('N','Confirma Cancelamento do Pedido:')
                        IF opcao = 'S'
                                mensagem('Cancelando o PEDIDO... Aguarde')
                                ccomm :="UPDATE sacped_s SET ppag = 'C',pdatapag = "+sr_cdbvalue(mdata_sis)+",pautoriz = "+sr_cdbvalue(cod_operado)+",pent_por = "+sr_cdbvalue(cod_operado)+",pent_dat = "+sr_cdbvalue(mdata_sis)+",pmotivo = "+sr_cdbvalue('REF.NOTA FISCAL ENTRADA No:'+mdocumento)+",phora_pg = "+sr_cdbvalue(TIME())+" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                sr_getconnection():exec(ccomm,,.f.)
                                ccomm :="DELETE FROM sacdupr  WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                                wvw_lclosewindow()
                        ENDIF
                ENDIF
                CLEAR GETS
                RETURN NIL
        ELSE
                ASIZE(m_nota,0)
                CLEAR GETS
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** F I M **********************************

