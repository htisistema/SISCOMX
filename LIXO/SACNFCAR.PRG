************************************************
* IMPRIMI NOTA FISCAL DA CARMEL, 2001 E L.BASTOS
************************************************
*icmsub

FUNCTION sacnfcar(m_nota,via,texto)
*********************
LOCAL mprg:='SACNFCAR',mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,;
      micm,mdoc,maux,mtot_quantd,mtot_ipi:=0,mqtd_pag:=0,mvlr_icmsub:=0,mbase_icmsub:=0
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret

MEMVAR mpr_fat
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0

IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
marca := '*'
lci := 17
cci := 01
lba := 22
cba := 70
mtot_icm := mtot_quantd := 0
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        i := 0
        FOR i = 1 TO LEN(mpedidos)
                IF i <= 7
                        mobs1 := ALLTRIM(mobs1) + ','+mpedidos[i]
                ELSEIF i <= 14
                        mobs2 := ALLTRIM(mobs2) + ','+mpedidos[i]
                ELSEIF i <= 21
                        mobs3 := ALLTRIM(mobs3) + ','+mpedidos[i]
                ENDIF
        NEXT
        i := mqtd_pag := mvlr_icmsub := mbase_icmsub := 0
        FOR i = 1 TO LEN(m_nota)
                IF m_nota[i,5] = 0
                        LOOP
                ENDIF
                mtot_quantd := mtot_quantd + m_nota[i,5]
                mqtd_pag ++
        NEXT
        mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+':')
        IF opcao = 'S'
                botao(lci,cci,lba,cba,,' OBSERVACAO nota normal ICM ')
                @ lci+1,cci+2 GET mobs1 PICT '@!'
                @ lci+2,cci+2 GET mobs2 PICT '@!'
                @ lci+3,cci+2 GET mobs3 PICT '@!'
                @ lci+4,cci+2 GET mobs4 PICT '@!'
                @ lci+5,cci+2 GET mobs5 PICT '@!'
                @ lci+6,cci+2 GET mobs6 PICT '@!'
                READ
                opcao := op_simnao('S','Confirma as observacoes:')
                IF opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        mcont_nota := 0
        IF mqtd_pag/25 <= 1
                mpag := 1
        ELSEIF mqtd_pag/24 <= 2
                mpag := 2
        ELSEIF mqtd_pag/24 <= 3
                mpag := 3
        ELSEIF mqtd_pag/24 <= 4
                mpag := 4
        ELSEIF mqtd_pag/24 <= 5
                mpag := 5
        ELSEIF mqtd_pag/24 <= 6
                mpag := 6
        ELSEIF mqtd_pag/24 <= 7
                mpag := 7
        ELSEIF mqtd_pag/24 <= 8
                mpag := 8
        ELSEIF mqtd_pag/24 <= 9
                mpag := 9
        ELSEIF mqtd_pag/24 <= 10
                mpag := 10
        ENDIF
        IF via = '1'
                IF LEN(m_nota) = 0
                        RETURN NIL
                ENDIF
                aret:={}
                //sr_starttrace()
                lExit := .T.
                while lExit
                sr_begintransaction()
                try
                IF msai_ent = 'S' .OR. ver_serie() = '141225' .OR. ver_serie() = '141254'
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
                sr_getconnection():exec('COMMIT',,.f.)

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

                                                IF EMPTY(mnum_ped) .OR. mnum_ped = 0 .OR. ver_serie() = '141235' .OR. ver_serie() = '141376'
                                                        mnum_dup := mdocumento
                                                ENDIF
                                                IF VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2)) = 1
                                                        mnum_dup := mnum_dup+'-01/01'
                                                        mvenci := mdata + mintev
                                                        IF ver_serie() = '141225' .OR. ver_serie() = '141254'
                                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub
                                                        ELSE
                                                                mvlr_dup := mtot_nota+mfrete+mencargo+mseguro+mtot_ipi+mvlr_icmsub+mdif_icms+micm_sub-mdesc_icm
                                                        ENDIF
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

                mtot_ipi  := mtot_nota := mtot_icmf := mbase_icm := 0
                mdoc := mdoc_aux := mdocumento
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
/*
                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                'processo,ent_sai,SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(merc->cod_merc)+','+; //4
                                                sr_cdbvalue(m_nota[i,5])+','+; //5
                                                sr_cdbvalue(merc->saldo_mer)+','+; //6
                                                sr_cdbvalue(merc->saldo_mer + m_nota[i,5])+','+; //7
                                                sr_cdbvalue(cod_operado)+','+; //8
                                                sr_cdbvalue('SACNFCAR')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('EMISSAO NOTA ENTRADA : '+mdocumento)+','+; //11
                                                sr_cdbvalue('E')+','+; //11
                                                sr_cdbvalue(' ')+')',,.f.)
*/
                                        merc-> saldo_fis := merc-> saldo_fis + m_nota[i,5]
                                        //merc-> saldo_mer := merc-> saldo_mer + m_nota[i,5]
                                        merc-> icm := icm + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                                ENDIF
                                merc->data_atu := mdata_sis
                                DBUNLOCK()
                        ENDIF
                        *************
                        SELE('movnt')
                        *************
                        IF ADIREG()
                                movnt->empresa := mcodempresa
                                IF i = 26
                                        mdoc_aux := mdocumento+'/A'
                                        maux := '/A'
                                ELSEIF i = 50
                                        mdoc_aux := mdocumento+'/B'
                                        maux := ALLTRIM(maux)+'B'
                                ELSEIF i = 74
                                        mdoc_aux := mdocumento+'/C'
                                        maux := ALLTRIM(maux)+'C'
                                ELSEIF i = 98
                                        mdoc_aux := mdocumento+'/D'
                                        maux := ALLTRIM(maux)+'D'
                                ELSEIF i = 122
                                        mdoc_aux := mdocumento+'/E'
                                        maux := ALLTRIM(maux)+'E'
                                ELSEIF i = 146
                                        mdoc_aux := mdocumento+'/F'
                                        maux := ALLTRIM(maux)+'F'
                                ELSEIF i = 170
                                        mdoc_aux := mdocumento+'/G'
                                        maux := ALLTRIM(maux)+'G'
                                ELSEIF i = 194
                                        mdoc_aux := mdocumento+'/H'
                                        maux := ALLTRIM(maux)+'H'
                                ELSEIF i = 218
                                        mdoc_aux := mdocumento+'/I'
                                        maux := ALLTRIM(maux)+'I'
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
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + ((mpr_fat * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + ((mpr_fat * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (mpr_fat * m_nota[i,5])
                                                movnt->base_icmsu := ((mpr_fat * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := ((mpr_fat * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (mpr_fat * m_nota[i,5])
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
                        ENDIF
                NEXT
                sr_getconnection():exec('COMMIT',,.f.)
                DBCOMMITALL()
                mdoc_aux := mdocumento
                mbase_icm := mbase_icm + mfrete
                mtot_icm := mtot_icm + (mfrete * (m_set[1,20]/100))
                mtot_icm := iat(mtot_icm,2)
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
                        ENDIF
                        DBCOMMITALL()
                ENDIF
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt->empresa  := mcodempresa
                        totnt-> modelo  := mmodelo
                        totnt-> cod_nota := mcod_nota
                        totnt-> tipo_nota := mtipo_nota
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
                                totnt-> vlr_icmsub := mvlr_icmsub
                                totnt-> base_icmsu := mbase_icmsub
                                totnt-> ipi     := mtot_ipi
	                        totnt-> peso := mtot_peso
        	                totnt-> peso_liq := mtot_liq
	                        IF mtipo_nota = 'N'
        	                        totnt-> vl_prod := mtot_nota
                	                totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
                        	ELSE
	                                totnt-> vl_prod := mtot_prod
        	                        totnt-> vl_nota := (mtot_nota + mtot_ipi + mvlr_icmsub)       //- (mpis+mconfis+micms_desc)
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
                ENDIF
                DBCOMMITALL()
                mtot_nota := mtot_icmf := 0
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,21] = SPACE(5)
                                LOOP
                        ENDIF
                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                        ELSE
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                        ENDIF
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
                mextenso := mobs1+mobs2+mobs3+mobs4+mobs5+mobs6
                mlin1 := MEMOLINE(mextenso,55,1,,10)
                mlin2 := MEMOLINE(mextenso,55,2,,10)
                mlin3 := MEMOLINE(mextenso,55,3,,10)
                mlin4 := MEMOLINE(mextenso,55,4,,10)
                mlin5 := MEMOLINE(mextenso,55,5,,10)
                mlin6 := MEMOLINE(mextenso,55,6,,10)
                ASIZE(m_acucar,0)
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo (SACCLI)')
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
*                       mensagem('Espere o Final da Impressao OK !!!')
*                       SET DEVI TO PRINT
*                       SET PRINT TO (m_indiv[1,23])
*                       SET PRINT TO NOTA.REL
                        imprt('M','P8')
                        imprt('M','N')
                        IF msai_ent = 'S'
                                DEVPOS(PROW()+5,49);DEVOUT('X')
                        ELSE
                                DEVPOS(PROW()+5,56);DEVOUT('X')
                        ENDIF
                        DEVPOS(PROW(),72);DEVOUT(mdocumento)
                        imprt('M','C')
                        DEVPOS(PROW()+5,00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),43);DEVOUT(mcod_nat)

                        imprt('M','N')
                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                        imprt('M','C')
                        IF ! EMPTY(cgc)
                                DEVPOS(PROW(),95);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                        ELSE
                                DEVPOS(PROW(),95);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(PROW(),124);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                        DEVPOS(PROW(),70);DEVOUT(bairro)
                        DEVPOS(PROW(),100);DEVOUT(cep)
                        IF ver_serie() = '141215'
                                DEVPOS(PROW(),124);DEVOUT(mdata)
                                DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                DEVPOS(PROW(),58);DEVOUT(tel1)
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        ENDIF
                        DEVPOS(PROW(),78);DEVOUT(uf)
                        DEVPOS(PROW(),90);DEVOUT(insc)
                        IF ver_serie() = '141237' .OR. ver_serie() = '141204';
                           .OR. ver_serie() = '141226' .OR. ver_serie() = '141215';
                           .OR. ver_serie() = '141225' .OR. ver_serie() = '141254'
                                IF EMPTY(mnum_dup)
                                        DEVPOS(PROW()+4,00);DEVOUT('')
                                ELSE
                                        IF mpag = 1
                                                DEVPOS(PROW()+3,03);DEVOUT(mnum_dup)
                                                DEVPOS(PROW(),17);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
                                                DEVPOS(PROW(),35);DEVOUT(mvenci)
                                                DEVPOS(PROW(),50);DEVOUT(mnum_dup1)
                                                DEVPOS(PROW(),64);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                                DEVPOS(PROW(),83);DEVOUT(mvenci1)
                                                DEVPOS(PROW(),96);DEVOUT(mnum_dup2)
                                                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                                DEVPOS(PROW(),126);DEVOUT(mvenci2)
                                                DEVPOS(PROW()+1,03);DEVOUT(mnum_dup3)
                                                DEVPOS(PROW(),17);DEVOUT(TRANSFORM(mvlr_dup3,'9,999,999.99'))
                                                DEVPOS(PROW(),35);DEVOUT(mvenci3)
                                                DEVPOS(PROW(),50);DEVOUT(mnum_dup4)
                                                DEVPOS(PROW(),64);DEVOUT(TRANSFORM(mvlr_dup4,'9,999,999.99'))
                                                DEVPOS(PROW(),83);DEVOUT(mvenci4)
                                                DEVPOS(PROW(),96);DEVOUT(mnum_dup5)
                                                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mvlr_dup5,'9,999,999.99'))
                                                DEVPOS(PROW(),126);DEVOUT(mvenci5)
                                        ELSE
                                                DEVPOS(PROW()+4,00);DEVOUT('')
                                        ENDIF
                                ENDIF
                        ELSE
                                DEVPOS(PROW(),124);DEVOUT(TIME())
                                DEVPOS(PROW()+4,00);DEVOUT(' ')
                        ENDIF
                        mtot_nota := mtot_desc := mtot_peso := mtot_liq := ;
                        mtot_icmf := mtot_ipi := i := f := 0
                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                        FOR i = 1 TO LEN(m_nota)
                                f++
                                IF f > 25
                                        mdoc_aux := mdocumento
                                        mcont_nota++
                                        mpag --
                                        IF mcont_nota = 1
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/A')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 2
                                                mdoc_aux := mdocumento+'/A'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/B')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 3
                                                mdoc_aux := mdocumento+'/B'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/C')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 4
                                                mdoc_aux := mdocumento+'/C'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/D')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 5
                                                mdoc_aux := mdocumento+'/D'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/E')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 6
                                                mdoc_aux := mdocumento+'/E'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/F')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 7
                                                mdoc_aux := mdocumento+'/F'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/G')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 8
                                                mdoc_aux := mdocumento+'/G'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/H')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 9
                                                mdoc_aux := mdocumento+'/H'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/I')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ELSEIF mcont_nota = 10
                                                mdoc_aux := mdocumento+'/I'
                                                DEVPOS(PROW()+1,15);DEVOUT('VALOR A TRANSPORTAR P/NOTA No.:'+ mdocumento+'/J')
                                                DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        ENDIF
                                        DEVPOS(68,02);DEVOUT(STRZERO(mnum_ped,6))
                                        DEVPOS(69,01);DEVOUT(RTRIM(mlin1))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
                                        IF ver_serie() = '141226' .OR. ver_serie() = '141225' .OR. ver_serie() = '141254'
                                                DEVPOS(PROW(),90);DEVOUT(' ')
                                        ELSE
                                                DEVPOS(PROW(),90);DEVOUT(mdata)
                                        ENDIF
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                                        IF via <> '1'
                                                //IF m_set[1,117] = 'N'
                                                IF ver_serie() <> '141225'
                                                        DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+mnum_sel)
                                                ENDIF
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
                                                //IF m_set[1,117] = 'N'
                                                IF ver_serie() <> '141225'
                                                        cons_sel := {}
                                                        sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                                        DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+cons_sel[1,1])
                                                        sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        //DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+sel->num_sel)
                                                ENDIF
                                        ENDIF
                                        ****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        ****************
                                        imprt('M','N')
*                                       DEVPOS(61,72);DEVOUT(mdocumento)
                                        DEVPOS(PROW()+7,72);DEVOUT(mdoc_aux)
                                        SETPRC(00,00)
                                        EJECT
*                                       mdocumento := STRZERO(VAL(mdocumento)+1,6)
                                        imprt('M','N')
                                        IF msai_ent = 'S'
                                                DEVPOS(PROW()+5,49);DEVOUT('X')
                                        ELSE
                                                DEVPOS(PROW()+5,56);DEVOUT('X')
                                        ENDIF
                                        IF mcont_nota = 0
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento)
                                        ELSEIF mcont_nota = 1
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/E')
                                        ELSEIF mcont_nota = 6
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/F')
                                        ELSEIF mcont_nota = 7
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/G')
                                        ELSEIF mcont_nota = 8
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/H')
                                        ELSEIF mcont_nota = 9
                                                DEVPOS(PROW(),71);DEVOUT(mdocumento+'/I')
                                        ENDIF
                                        imprt('M','C')
                                        DEVPOS(PROW()+5,00);DEVOUT(mnatureza)
                                        DEVPOS(PROW(),43);DEVOUT(mcod_nat)
                                        imprt('M','N')
                                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                                        imprt('M','C')
                                        IF ! EMPTY(cgc)
                                                DEVPOS(PROW(),95);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                                        ELSE
                                                DEVPOS(PROW(),95);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                                        ENDIF
                                        DEVPOS(PROW(),124);DEVOUT(mdata)
                                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                                        DEVPOS(PROW(),70);DEVOUT(bairro)
                                        DEVPOS(PROW(),100);DEVOUT(cep)
*                                       DEVPOS(PROW(),124);DEVOUT(mdata)
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
*                                       IF ver_serie() <> '141237'
*                                               DEVPOS(PROW(),58);DEVOUT(tel1)
*                                       ENDIF
                                        DEVPOS(PROW(),78);DEVOUT(uf)                                                     
                                        DEVPOS(PROW(),90);DEVOUT(insc)
                                        IF ver_serie() = '141237' .OR. ver_serie() = '141204' .OR. ver_serie() = '141226'
                                                IF EMPTY(mnum_dup)
                                                        DEVPOS(PROW()+4,00);DEVOUT(' ')
                                                ELSE
                                                        IF mpag = 1
                                                                DEVPOS(PROW()+3,03);DEVOUT(mnum_dup)
                                                                DEVPOS(PROW(),17);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
                                                                DEVPOS(PROW(),35);DEVOUT(mvenci)
                                                                DEVPOS(PROW(),50);DEVOUT(mnum_dup1)
                                                                DEVPOS(PROW(),64);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                                                DEVPOS(PROW(),83);DEVOUT(mvenci1)
                                                                DEVPOS(PROW(),96);DEVOUT(mnum_dup2)
                                                                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                                                DEVPOS(PROW(),128);DEVOUT(mvenci2)
                                                                DEVPOS(PROW()+1,03);DEVOUT(mnum_dup3)
                                                                DEVPOS(PROW(),17);DEVOUT(TRANSFORM(mvlr_dup3,'9,999,999.99'))
                                                                DEVPOS(PROW(),35);DEVOUT(mvenci3)
                                                                DEVPOS(PROW(),50);DEVOUT(mnum_dup4)
                                                                DEVPOS(PROW(),64);DEVOUT(TRANSFORM(mvlr_dup4,'9,999,999.99'))
                                                                DEVPOS(PROW(),83);DEVOUT(mvenci4)
                                                                DEVPOS(PROW(),96);DEVOUT(mnum_dup5)
                                                                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mvlr_dup5,'9,999,999.99'))
                                                                DEVPOS(PROW(),128);DEVOUT(mvenci5)
                                                        ELSE
                                                                DEVPOS(PROW()+4,00);DEVOUT(' ')
                                                        ENDIF
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW(),124);DEVOUT(TIME())
                                                DEVPOS(PROW()+4,00);DEVOUT(' ')
                                        ENDIF
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                        DEVPOS(PROW()+1,17);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                        //IF ver_serie() = '141204'
                                        //        ver_cod(VAL(m_nota[i,21]),,,,0,'*')
                                        //        DEVPOS(PROW()+1,01);DEVOUT(IF(EMPTY(merc->cod_barr),m_nota[i,21],merc->cod_barr))
                                        //ELSE
                                                DEVPOS(PROW()+1,03);DEVOUT(m_nota[i,21])
                                        //ENDIF
                                        DEVPOS(PROW(),15);DEVOUT(RTRIM(m_nota[i,2]))
                                        DEVPOS(PROW(),75);DEVOUT(m_nota[i,35])
                                        DEVPOS(PROW(),80);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),83);DEVOUTPICT(m_nota[i,5],ALLTRIM(m_set[1,99]))
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
                                        ****************************
                                        DEVPOS(PROW(),95);DEVOUTPICT(mpr_fat,ALLTRIM(m_set[1,98]))
                                        DEVPOS(PROW(),117);DEVOUTPICT(mpr_fat * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),131);DEVOUTPICT(m_nota[i,20],'99.99')
                                        mtot_nota := mtot_nota + iat(mpr_fat * m_nota[i,5],2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                ELSE
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                        mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
                                        ****************************
                                        mtot_nota := mtot_nota + iat(mpr_fat * m_nota[i,5],2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                        mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                ENDIF
                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                        NEXT
                        IF mtipo_nota = 'C'
                                DEVPOS(55,10);DEVOUTPICT(cbase_icm,'9,999,999.99')
                                DEVPOS(55,36);DEVOUTPICT(ctot_icm,'9,999,999.99')
                                DEVPOS(55,68);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                                DEVPOS(55,96);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                                DEVPOS(55,122);DEVOUTPICT(ctot_prod,'999,999,999.99')
                                DEVPOS(57,10);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(57,36);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(57,68);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(57,96);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                                DEVPOS(57,122);DEVOUTPICT(ctot_nota,'999,999,999.99')
                        ELSE
	                        DEVPOS(55,10);DEVOUTPICT(mbase_icm,'99,999,999.99')
        	                DEVPOS(55,36);DEVOUTPICT(mtot_icm,'9,999,999.99')
                                DEVPOS(55,68);DEVOUTPICT(mbase_icmsub,'9,999,999.99')
                                DEVPOS(55,96);DEVOUTPICT(mvlr_icmsub,'9,999,999.99')
                       	        DEVPOS(55,122);DEVOUTPICT(mtot_nota,'99,999,999.99')
        	                DEVPOS(57,10);DEVOUTPICT(mfrete,'9,999,999.99')
                	        DEVPOS(57,36);DEVOUTPICT(mseguro,'9,999,999.99')
                        	DEVPOS(57,68);DEVOUTPICT(mencargo,'9,999,999.99')
	                        IF SUBSTR(m_nota[1,2],1,4) <> 'ICMS'
        	                        DEVPOS(57,96);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                	        ENDIF
                                DEVPOS(57,122);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999,999,999.99')
                        ENDIF

/*
                        DEVPOS(55,10);DEVOUTPICT(mbase_icm + mseguro + mencargo,'9,999,999.99')
                        DEVPOS(55,36);DEVOUTPICT(mtot_icm,'9,999,999.99')
                        DEVPOS(55,68);DEVOUTPICT(mbase_icmsub,'9,999,999.99')
                        DEVPOS(55,96);DEVOUTPICT(mvlr_icmsub,'9,999,999.99')
                        IF mtot_icmf > 0
                                DEVPOS(55,68);DEVOUTPICT(mbase_icm,'9,999,999.99')
                                DEVPOS(55,96);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                        ELSE
                                DEVPOS(55,68);DEVOUTPICT(0,'9,999,999.99')
                                DEVPOS(55,96);DEVOUTPICT(0,'9,999,999.99')
                        ENDIF
                        DEVPOS(55,122);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        DEVPOS(57,10);DEVOUTPICT(mfrete,'9,999,999.99')
                        DEVPOS(57,36);DEVOUTPICT(mseguro,'9,999,999.99')
                        DEVPOS(57,68);DEVOUTPICT(mencargo,'9,999,999.99')
                        DEVPOS(57,96);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                        DEVPOS(57,122);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999,999,999.99')
*/

                        DEVPOS(60,10);DEVOUT(mnome_trans)
                        DEVPOS(60,81);DEVOUT(mfrete_trans)
                        DEVPOS(60,88);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
                        DEVPOS(60,100);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(60,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(60,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(60,118);DEVOUT(mcgc_trans)
                        ENDIF
                        DEVPOS(62,10);DEVOUT(mend_trans)
                        DEVPOS(62,73);DEVOUT(mmun_trans)
                        DEVPOS(62,100);DEVOUT(muf_trans)
                        DEVPOS(62,118);DEVOUT(minsc_trans)

                        DEVPOS(64,02);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(64,30);DEVOUT(mesp_trans)
                        DEVPOS(64,50);DEVOUT(mmarca_trans)
                        DEVPOS(64,75);DEVOUT(mnum_trans)
                        DEVPOS(64,100);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(64,120);DEVOUTPICT(mtot_liq,'99,999.999')
                        DEVPOS(68,02);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(69,01);DEVOUT(RTRIM(mlin1))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
                        IF ver_serie() = '141226' .OR. ver_serie() = '141225' .OR. ver_serie() = '141254'
                                DEVPOS(PROW(),90);DEVOUT(' ')
                        ELSE
                                DEVPOS(PROW(),90);DEVOUT(mdata)
                        ENDIF
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                        IF via <> '1'
                                IF ver_serie() <> '141225'
                                //IF m_set[1,117] = 'N'
                                        DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+mnum_sel)
                                ENDIF
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
                                IF ver_serie() <> '141225'
                                //IF m_set[1,117] = 'N'
                                        cons_sel := {}
                                        sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                        DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+cons_sel[1,1])
                                        sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        //DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+sel->num_sel)
                                ENDIF
                        ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        imprt('M','N')
                        IF mcont_nota = 0
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento)
                        ELSEIF mcont_nota = 1
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/A')
                        ELSEIF mcont_nota = 2
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/B')
                        ELSEIF mcont_nota = 3
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/C')
                        ELSEIF mcont_nota = 4
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/D')
                        ELSEIF mcont_nota = 5
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/E')
                        ELSEIF mcont_nota = 6
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/F')
                        ELSEIF mcont_nota = 7
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/G')
                        ELSEIF mcont_nota = 8
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/H')
                        ELSEIF mcont_nota = 9
                                DEVPOS(PROW()+7,72);DEVOUT(mdocumento+'/I')
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
