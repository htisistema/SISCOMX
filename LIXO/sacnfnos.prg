*********************************************
* IMPRIMI NOTA FISCAL DO "NOSSA TINTAS"
********************************************
FUNCTION sacnfnos(m_nota,via,texto)
*********************
LOCAL mprg:='SACNFNOS',mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mdoc_aux,mpeso_liq:=0,mpeso:=0,mbase_aux,;
      f:=0,i:=0
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret

MEMVAR mseguro,mencargo,mtipo_nota,mpis,mconfis,micms_desc
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
IF mtipo_nota = 'N'
        mtot_quantd := 1
        mtot_icm := mtot_ipi :=mtot_nota:=mtot_icmf:=mtot_peso:=mtot_liq := ;
        mbase_icm:=0
ENDIF
marca := '*'
lci := 17
cci := 01
lba := 22
cba := 70
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
mpeso := mpeso_liq:=0
CLEAR GETS
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
        i := mqtd_pag := 0
        FOR i = 1 TO LEN(m_nota)
                IF m_nota[i,5] = 0
                        LOOP
                ENDIF
                mtot_quantd := mtot_quantd + m_nota[i,5]
                mqtd_pag ++
        NEXT
        mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        mpis:=mconfis:=micms_desc:=0
        opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+':')
        IF opcao = 'S'
                botao(lci,cci,lba,cba,,' OBSERVACAO nota normal ICM ')
                @ lci+1,cci+1 GET mobs1 PICT '@!'
                @ lci+2,cci+1 GET mobs2 PICT '@!'
                @ lci+3,cci+1 GET mobs3 PICT '@!'
                @ lci+4,cci+1 GET mobs4 PICT '@!'
                READ
                opcao := op_simnao('S','Confirma as observacoes:')
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        mcont_nota := 0
        IF LEN(m_nota)/15 <= 1
                mpag := 1
        ELSEIF LEN(m_nota)/14 <= 2
                mpag := 2
        ELSEIF LEN(m_nota)/14 <= 3
                mpag := 3
        ELSEIF LEN(m_nota)/14 <= 4
                mpag := 4
        ELSEIF LEN(m_nota)/14 <= 5
                mpag := 5
        ENDIF
        IF via = '1'
                IF LEN(m_nota) = 0
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
                                        mnum_dup1 := mnum_dup2 := mnum_dup3 := ;
                                        mnum_dup4 := mnum_dup5 := SPACE(8)
                                        mvenci1 := mvenci2 := mvenci3 := ;
                                        mvenci4 := mvenci5 := mvenci := CTOD('  /  /  ')
                                        mvlr_dup := mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := ;
                                        mvlr_dup4 := mvlr_dup5 := 0
                                        mnum_dup := STRZERO(mnum_ped,6)
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
                                        IF ver_serie() = '141410' .OR. ver_serie() = '141302'
                                                opcao := op_simnao('N','Deseja IMPRESSAO DAS DUPLICATAS:')
                	              	ELSE
                                                opcao := op_simnao('S','Deseja IMPRESSAO DAS DUPLICATAS:')
                        		ENDIF
                                        IF opcao = 'S'
                                                @ 14,21 GET mcond_vezes PICT '@@R 9-99' VALID IF((VAL(SUBSTR(mcond_vezes,1,1))) + (VAL(SUBSTR(mcond_vezes,2,2))) > 7,.F.,.T.)
                                                @ 14,37 GET mintev PICT '999' VALID IF(EMPTY(mintev),.F.,.T.)
                                                @ 14,41 GET mintev1 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 2 VALID IF(EMPTY(mintev1),.F.,.T.)
                                                @ 14,45 GET mintev2 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 3 VALID IF(EMPTY(mintev2),.F.,.T.)
                                                @ 14,49 GET mintev3 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 4 VALID IF(EMPTY(mintev3),.F.,.T.)
                                                @ 14,53 GET mintev4 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) >= 5 VALID IF(EMPTY(mintev4),.F.,.T.)
                                                @ 14,57 GET mintev5 PICT '999' WHEN VAL(SUBSTR(mcond_vezes,2,2)) = 6 VALID IF(EMPTY(mintev5),.F.,.T.)
                                                READ

                                                IF EMPTY(mnum_ped) .OR. mnum_ped = 0
                                                        mnum_dup := mdocumento
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 1
                                                        mnum_dup := mnum_dup+'-01/01'
                                                        mvenci := mdata + mintev
                                                        mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 2
                                                        mnum_dup1 := mnum_dup+'-02/02'
                                                        mnum_dup := mnum_dup+'-01/02'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /2
                                                        msobra := mvlr_dup
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 3
                                                        mnum_dup1 := mnum_dup+'-02/03'
                                                        mnum_dup2 := mnum_dup+'-03/03'
                                                        mnum_dup := mnum_dup+'-01/03'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /3
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 4
                                                        mnum_dup1 := mnum_dup+'-02/04'
                                                        mnum_dup2 := mnum_dup+'-03/04'
                                                        mnum_dup3 := mnum_dup+'-04/04'
                                                        mnum_dup := mnum_dup+'-01/04'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /4
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 5
                                                        mnum_dup1 := mnum_dup+'-02/05'
                                                        mnum_dup2 := mnum_dup+'-03/05'
                                                        mnum_dup3 := mnum_dup+'-04/05'
                                                        mnum_dup4 := mnum_dup+'-05/05'
                                                        mnum_dup := mnum_dup+'-01/05'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvenci4 := mdata + mintev4
                                                        mvlr_dup := ((mtot_nota+mfrete+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                                        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /5
                                                ELSEIF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 6
                                                        mnum_dup1 := mnum_dup+'-02/06'
                                                        mnum_dup2 := mnum_dup+'-03/06'
                                                        mnum_dup3 := mnum_dup+'-04/06'
                                                        mnum_dup4 := mnum_dup+'-05/06'
                                                        mnum_dup5 := mnum_dup+'-06/06'
                                                        mnum_dup := mnum_dup+'-01/06'
                                                        mvenci := mdata + mintev
                                                        mvenci1 := mdata + mintev1
                                                        mvenci2 := mdata + mintev2
                                                        mvenci3 := mdata + mintev3
                                                        mvenci4 := mdata + mintev4
                                                        mvenci5 := mdata + mintev5
                                                        mvlr_dup := ((mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6) + mtot_ipi + mfrete
                                                        mvlr_dup1 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                        mvlr_dup2 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                        mvlr_dup3 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                        mvlr_dup4 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
                                                        mvlr_dup5 := (mtot_nota+mencargo+mseguro+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm) /6
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
/*
                IF msai_ent = 'S'
                        ***************
                        SELE('nota');ORDSETFOCUS(1)
                        ***************
                        IF ADIREG()
                                nota->data_nt := mdata
                                nota->numero := mdocumento
                                DBUNLOCK()
                                DBCOMMIT()
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                                LOOP
                        ENDIF
                ELSE
                        ***************
                        SELE('notae');ORDSETFOCUS(1)
                        ***************
                        IF ADIREG()
                                notae->data_nte := mdata
                                notae->numeroe := mdocumento
                                DBUNLOCK()
                                DBCOMMIT()
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                                LOOP
                        ENDIF
                ENDIF
*/
                IF mtipo_nota = 'N'
                        mtot_ipi  := mtot_nota := mtot_icmf := mbase_icm := 0
                ENDIF
                mdoc := mdocumento
                mdoc_aux := mdocumento
                maux := SPACE(10)
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        f++
                        ****************
                        SELE('merc');ORDSETFOCUS(1)
                        GO TOP
                        ****************
                        SEEK m_nota[i,21]
                        *** PRECO DE FATURA ********
                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
                        mpr_fat := m_nota[i,7]
                        ****************************

                        IF BLOQREG()
                                IF msai_ent = 'S'
                                        merc-> saldo_fis := merc-> saldo_fis - m_nota[i,5]
                                        merc-> icm := icm - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                                ELSEIF msai_ent = 'E'
                                        merc-> saldo_fis := merc-> saldo_fis + m_nota[i,5]
                                        //merc-> saldo_mer := merc-> saldo_mer + m_nota[i,5]
                                        merc-> icm := icm + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                                ENDIF
                                merc->data_atu := mdata_sis
                        ENDIF
                        DBUNLOCK()
                        *************
                        SELE('movnt')
                        *************
                        IF ADIREG()
                                movnt->empresa := mcodempresa
                                IF i = 16
                                        mdoc_aux := mdocumento+'/A'
                                        maux := '/A'
                                ELSEIF i = 30
                                        mdoc_aux := mdocumento+'/B'
                                        maux := ALLTRIM(maux)+'B'
                                ELSEIF i = 44
                                        mdoc_aux := mdocumento+'/C'
                                        maux := ALLTRIM(maux)+'C'
                                ELSEIF i = 58
                                        mdoc_aux := mdocumento+'/D'
                                        maux := ALLTRIM(maux)+'D'
                                ELSEIF i = 72
                                        mdoc_aux := mdocumento+'/E'
                                        maux := ALLTRIM(maux)+'E'
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
                                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                        movnt-> base_icm := iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                                ELSE
                                                        mbase_icm = mbase_icm + (mpr_fat * m_nota[i,5])
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                                                        movnt-> base_icm := iat((mpr_fat * m_nota[i,5]),2)
                                                ENDIF
                                        ENDIF
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + (mpr_fat * m_nota[i,5])
                                        mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                ENDIF
                                movnt-> icm_f := m_nota[i,13]
                                movnt-> icm_sub := m_nota[i,22]
                                movnt-> pr_unit := m_nota[i,12]
                                movnt-> cust_mer := m_nota[i,33]
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
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                        ENDIF
                NEXT
                DBCOMMITALL()
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_nota := mtot_nota - (mpis+mconfis+micms_desc)
                IF mtipo_nota = 'N'
                       mbase_icm := mbase_icm + mseguro + mencargo
                       mtot_icm := iat(mtot_icm,2)
                ENDIF
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
                        DBCOMMITALL()
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
                        mtot_nota := mtot_icmf := 0
                ENDIF
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,21] = SPACE(5)
                                LOOP
                        ENDIF
                        IF mtipo_nota = 'N'
                                IF EMPTY(cli->insc)
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                mbase_icm := mbase_icm + iat((m_nota[i,12] * m_nota[i,5])+((m_nota[i,12] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_icm := mbase_icm + iat((m_nota[i,7] * m_nota[i,5])+((m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ENDIF
                                ELSE
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                mbase_icm := mbase_icm + iat(m_nota[i,12] * m_nota[i,5],2)
                                        ELSE
                                                mbase_icm := mbase_icm + iat(m_nota[i,7] * m_nota[i,5],2)
                                        ENDIF
                                ENDIF
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                ELSE
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                ENDIF
                        ENDIF
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        RETURN NIL
                ELSE
                        WHILE .T.
                                IF ! imp_arq(mprg+'.REL','N')
                                        atencao('Foi Gerada a NOTA FISCAL de No.:'+mdocumento)
                                        LOOP
                                ELSE
                                        EXIT
                                ENDIF
                        ENDDO
                        cli->ult_comp := mdata
                        DBUNLOCK()
                        DBCOMMIT()
                        mdoc_aux := mdocumento
                        imprt('M','C')
                        imprt('M','P8')
                        DEVPOS(PROW()+2,115);DEVOUT(mdocumento)
                        imprt('M','N')
                        DEVPOS(PROW()+1,49);DEVOUT('X')
                        imprt('M','C')
                        DEVPOS(PROW()+3,90);DEVOUT(' ')
                        DEVPOS(PROW()+1,131);DEVOUT(mdocumento)
                        DEVPOS(PROW(),00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),52);DEVOUT(mcod_nat)
                        DEVPOS(PROW(),90);DEVOUT(' ')
                        imprt('M','C')
                        pitalico(.T.)
                        DEVPOS(PROW()+2,00);DEVOUT(cod_cli+'-'+razao)
                        pitalico(.F.)
                        IF ! EMPTY(cgc)
                                DEVPOS(PROW(),90);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                        ELSE
                                DEVPOS(PROW(),90);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(PROW(),115);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                        DEVPOS(PROW(),72);DEVOUT(bairro)
                        DEVPOS(PROW(),95);DEVOUT(cep)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        DEVPOS(PROW(),65);DEVOUT(tel1)
                        DEVPOS(PROW(),79);DEVOUT(uf)
                        DEVPOS(PROW(),88);DEVOUT(insc)

                        IF EMPTY(mnum_dup)
                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                        ELSE
                                IF mpag = 1
                                        //DEVPOS(PROW()+1,00);DEVOUT(mnum_dup)
                                        //DEVPOS(PROW(),44);DEVOUT(mnum_dup1)
                                        //DEVPOS(PROW(),86);DEVOUT(mnum_dup2)
                                        //DEVPOS(PROW()+1,00);DEVOUT(mnum_dup3)
                                        DEVPOS(PROW()+2,32);DEVOUT(mvenci)
                                        DEVPOS(PROW(),60);DEVOUT(mvenci1)
                                        DEVPOS(PROW(),86);DEVOUT(mvenci2)
                                        DEVPOS(PROW(),114);DEVOUT(mvenci3)
                                        DEVPOS(PROW()+1,25);DEVOUT(TRANSFORM(mvlr_dup,'999,999,999.99'))
                                        DEVPOS(PROW(),53);DEVOUT(TRANSFORM(mvlr_dup1,'999,999,999.99'))
                                        DEVPOS(PROW(),79);DEVOUT(TRANSFORM(mvlr_dup2,'999,999,999.99'))
                                        DEVPOS(PROW(),107);DEVOUT(TRANSFORM(mvlr_dup3,'999,999,999.99'))
/*
                                        DEVPOS(PROW(),44);DEVOUT(mnum_dup4)
                                        DEVPOS(PROW(),57);DEVOUT(mvenci4)
                                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mvlr_dup4,'999,999,999.99'))
                                        DEVPOS(PROW(),86);DEVOUT(mnum_dup5)
                                        DEVPOS(PROW(),99);DEVOUT(mvenci5)
                                        DEVPOS(PROW(),111);DEVOUT(TRANSFORM(mvlr_dup5,'999,999,999.99'))
*/
                                ELSE
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_desc := mtot_peso := ;
                                mtot_liq := mtot_icmf := mtot_ipi := 0
                        ENDIF
                        i := f := 0
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        FOR i = 1 TO LEN(m_nota)
                                f++
                                IF f > 16
                                        mdoc_aux := mdocumento
                                        mcont_nota++
                                        mpag --
                                        pitalico(.T.)
                                        IF mcont_nota = 1
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/A')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 2
                                                mdoc_aux := mdocumento+'/A'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/B')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 3
                                                mdoc_aux := mdocumento+'/B'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/C')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 4
                                                mdoc_aux := mdocumento+'/C'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/D')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 5
                                                mdoc_aux := mdocumento+'/D'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/E')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 6
                                                mdoc_aux := mdocumento+'/E'
                                                DEVPOS(PROW()+1,13);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/F')
                                                DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ENDIF
                                        pitalico(.F.)
                                        DEVPOS(61,24);DEVOUT(STRZERO(mnum_ped,6))
/*
                                        IF via <> '1'
                                                DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+mnum_sel)
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
*/		                                cons_sel := {}
                		                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                		//DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+cons_sel[1,1])
		                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                		                sr_getconnection():exec("COMMIT",,.f.)
                                        //ENDIF
                                        ****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        ****************
                                        imprt('M','C')
                                        DEVPOS(PROW()+4,0);DEVOUT(' ')
                                        imprt('M','P6')
                                        EJECT
                                        imprt('M','C')
                                        imprt('M','P8')
                                        IF mcont_nota = 1
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/A')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/B')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/C')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/D')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                imprt('M','C')
                                                DEVPOS(PROW()+2,115);DEVOUT(mdocumento+'/E')
                                                imprt('M','N')
                                                DEVPOS(PROW()+1,49);DEVOUT('X')
                                                imprt('M','C')
                                                DEVPOS(PROW()+3,90);DEVOUT(mcgc_firm)
                                                DEVPOS(PROW()+1,131);DEVOUT(mdocumento+'/E')
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(mnatureza)
                                        DEVPOS(PROW(),55);DEVOUT(mcod_nat)
                                        DEVPOS(PROW(),90);DEVOUT(minsc_firm)
                                        pitalico(.T.)
                                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                                        pitalico(.F.)
                                        imprt('M','C')
                                        IF ! EMPTY(cgc)
                                                DEVPOS(PROW(),90);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                                        ELSE
                                                DEVPOS(PROW(),90);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                                        ENDIF
                                        DEVPOS(PROW(),118);DEVOUT(mdata)
                                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                                        DEVPOS(PROW(),72);DEVOUT(bairro)
                                        DEVPOS(PROW(),96);DEVOUT(cep)
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                        DEVPOS(PROW(),58);DEVOUT(tel1)
                                        DEVPOS(PROW(),80);DEVOUT(uf)
                                        DEVPOS(PROW(),88);DEVOUT(insc)
                                        IF EMPTY(mnum_dup)
                                                DEVPOS(PROW()+2,00);DEVOUT(' ')
                                        ELSE
                                                IF mpag = 1
                                                        DEVPOS(PROW()+2,00);DEVOUT(mnum_dup)
                                                        DEVPOS(PROW(),13);DEVOUT(mvenci)
                                                        DEVPOS(PROW(),25);DEVOUT(TRANSFORM(mtot_aux+mfrete+mseguro+mencargo,'999,999,999.99'))
                                                ELSE
                                                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                                                ENDIF
                                        ENDIF
                                        DEVPOS(PROW()+4,02);DEVOUT(' ')
                                        pitalico(.T.)
                                        DEVPOS(PROW()+1,13);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),113);DEVOUTPICT(mtot_nota,'999,999.99')
                                        pitalico(.F.)
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                        DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
                                        DEVPOS(PROW(),15);DEVOUT(RTRIM(m_nota[i,2]))
                                        DEVPOS(PROW(),72);DEVOUT(m_nota[i,23])
                                        DEVPOS(PROW(),75);DEVOUT(m_nota[i,35])
                                        DEVPOS(PROW(),80);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),83);DEVOUTPICT(m_nota[i,5],'99999.99')
                                        IF mcod_fat = '02'
                                                DEVPOS(PROW(),90);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)),ALLTRIM(m_set[1,98]))
                                                DEVPOS(PROW(),105);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5],'999,999.99')
                                                DEVPOS(PROW(),119);DEVOUTPICT(m_nota[i,20],'99')
                                                //DEVPOS(PROW(),112);DEVOUTPICT(m_nota[i,24],'99')
                                                //DEVPOS(PROW(),117);DEVOUTPICT(((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*(m_nota[i,24]/100),'99,999.99')
                                                IF mtipo_nota = 'N'
*                                                       mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) - IF(mcod_nat = '6.109',((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,0)
                                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                        mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW(),90);DEVOUTPICT(m_nota[i,7],ALLTRIM(m_set[1,98]))
                                                DEVPOS(PROW(),105);DEVOUTPICT(m_nota[i,7] * m_nota[i,5],'999,999.99')
                                                DEVPOS(PROW(),119);DEVOUTPICT(m_nota[i,20],'99')
                                                //DEVPOS(PROW(),112);DEVOUTPICT(m_nota[i,24],'99')
                                                //DEVPOS(PROW(),117);DEVOUTPICT((m_nota[i,7] * m_nota[i,5])*(m_nota[i,24]/100),'99,999.99')
                                                IF mtipo_nota = 'N'
*                                                       mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5]) - IF(mcod_nat = '6.109',(m_nota[i,7] * m_nota[i,5])*.12,0)
                                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                                        mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ENDIF
                                        IF mtipo_nota = 'N'
                                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                        ENDIF
                                ELSE
                                        IF mtipo_nota = 'N'
                                                IF mcod_fat = '02'
                                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
*                                                       mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) - IF(mcod_nat = '6.109',((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,0)
                                                        mtot_Icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                        mtot_desc :=iat(mtot_desc + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*.12,2)
                                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ELSE
                                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
*                                                       mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5]) - IF(mcod_nat = '6.109',(m_nota[i,7] * m_nota[i,5])*.12,0)
                                                        mtot_desc :=iat(mtot_desc + (m_nota[i,7] * m_nota[i,5])*.12,2)
                                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                                ENDIF
                                        ENDIF
                                ENDIF
                        NEXT
                        DEVPOS(37,00);DEVOUT(mobs1)
                        DEVPOS(38,00);DEVOUT(mobs2)
                        DEVPOS(39,00);DEVOUT(mobs3)
                        DEVPOS(40,00);DEVOUT(mobs4)
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
                        ENDIF
                        IF mtipo_nota = 'C'
                                DEVPOS(45,05);DEVOUTPICT(cbase_icm,'9,999,999.99')
                                DEVPOS(45,33);DEVOUTPICT(ctot_icm,'9,999,999.99')
                                DEVPOS(45,59);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                                DEVPOS(45,80);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                                DEVPOS(45,108);DEVOUTPICT(ctot_prod,'999,999,999.99')
                                DEVPOS(47,05);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(47,33);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(47,59);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(47,80);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                                DEVPOS(47,108);DEVOUTPICT(ctot_nota,'999,999,999.99')
                        ELSE
	                        DEVPOS(45,05);DEVOUTPICT(mbase_icm,'99,999,999.99')
        	                DEVPOS(45,33);DEVOUTPICT(mtot_icm,'9,999,999.99')
                	        DEVPOS(45,59);DEVOUTPICT(mbase_icmf,'9,999,999.99')
                        	DEVPOS(45,80);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                       	        DEVPOS(45,108);DEVOUTPICT(mtot_nota,'99,999,999.99')
        	                DEVPOS(47,05);DEVOUTPICT(mfrete,'9,999,999.99')
                	        DEVPOS(47,33);DEVOUTPICT(mseguro,'9,999,999.99')
                        	DEVPOS(47,59);DEVOUTPICT(mencargo,'9,999,999.99')
	                        IF SUBSTR(m_nota[1,2],1,4) <> 'ICMS'
        	                        DEVPOS(47,80);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                	        ENDIF
                                DEVPOS(47,108);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi,'999,999,999.99')
                        ENDIF
                        DEVPOS(49,00);DEVOUT(mnome_trans)
                        DEVPOS(49,76);DEVOUT(mfrete_trans)
                        DEVPOS(49,78);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
                        DEVPOS(49,90);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(49,106);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(49,106);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(51,00);DEVOUT(mend_trans)
                        DEVPOS(51,65);DEVOUT(mmun_trans)
                        DEVPOS(51,90);DEVOUT(muf_trans)
                        DEVPOS(51,108);DEVOUT(minsc_trans)

                        DEVPOS(53,00);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(53,21);DEVOUT(mesp_trans)
                        DEVPOS(53,40);DEVOUT(mmarca_trans)
                        DEVPOS(53,60);DEVOUT(mnum_trans)
                        DEVPOS(53,87);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(53,108);DEVOUTPICT(mtot_liq,'99,999.999')
                        DEVPOS(55,45);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(62,00);DEVOUT('')
                        //DEVPOS(61,PCOL()+5);DEVOUT(cod_operado)
/*
                        IF via <> '1'
                                DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+mnum_sel)
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
*/
                                cons_sel := {}
                                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                //DEVPOS(PROW()+1,82);DEVOUT(mserie+' '+cons_sel[1,1])
                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        //ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
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
                        RETURN NIL
                ENDIF
        ELSE
                ASIZE(m_nota,0)
                CLEAR GETS
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** F I M **********************************

