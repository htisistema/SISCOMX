***************************
* IMPRIMI NOTA FISCAL DA RIDEL
***************************

FUNCTION sacnfrid(m_nota,via,texto,v)
*********************
LOCAL mprg:='SACNFRID',mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mtot_quantd,mtot_ipi:=0,mtot_nota:=0,mbase_icm:=0,mdoc_aux,;
      mpeso_liq:=0,mpeso:=0,mbase_aux,;
      mvalor_nt,mvlr_icmsub:=0,mbase_icmsub:=0
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret

MEMVAR mseguro,mencargo,mtipo_nota,mpis,mconfis,micms_desc

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtot_desc:=0
IF v <> NIL
        DEVPOS(22,00);DEVOUT(' SACNFRID ')
        RETURN NIL
ENDIF
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
        FOR i = 1 TO LEN(m_nota)
                mtot_quantd := mtot_quantd + m_nota[i,5]
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
        IF LEN(m_nota)/25 <= 1
                mpag := 1
        ELSEIF LEN(m_nota)/24 <= 2
                mpag := 2
        ELSEIF LEN(m_nota)/24 <= 3
                mpag := 3
        ELSEIF LEN(m_nota)/24 <= 4
                mpag := 4
        ELSEIF LEN(m_nota)/24 <= 5
                mpag := 5
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
                sr_getconnection():exec('COMMIT',,.f.)
                setcor(1)
                atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
/*
                IF msai_ent = 'S'
                        ***************
                        SELE('nota');ORDSETFOCUS(1)
                        ***************
                        IF ADIREG()
                                nota->data_nt := mdata
                                nota->numero := mdocumento
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
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                                LOOP
                        ENDIF
                ENDIF
                DBUNLOCK()
                DBCOMMIT()
*/
                mtot_ipi  := mtot_nota := mbase_icm := 0
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

                        IF BLOQREG()
                                IF msai_ent = 'S'
                                        merc-> saldo_fis := saldo_fis - m_nota[i,5]
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                merc-> icm := merc->icm - iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                        ELSE
                                                merc-> icm := merc->icm - iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                        ENDIF
                                ELSEIF msai_ent = 'E'
                                        merc-> saldo_fis := merc->saldo_fis + m_nota[i,5]
                                        //merc-> saldo_mer := merc->saldo_mer + m_nota[i,5]
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                merc-> icm := merc->icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                        ELSE
                                                merc-> icm := merc->icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                        ENDIF
                                ENDIF
                                merc->data_atu := mdata_sis
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
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        movnt-> ipi := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movnt-> vl_fatura := m_nota[i,12]
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + iat(((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
*                                       mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        IF  m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                                movnt->base_icm := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                                movnt->base_icmsu := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                ELSE
                                        movnt-> ipi := (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movnt-> vl_fatura := m_nota[i,7]
                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                        movnt-> vlr_icm := iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + iat((m_nota[i,7] * m_nota[i,5]),2)
                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
*                                       mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                        IF m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                                movnt->base_icm := (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                                movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
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
                                movnt-> norm_ele        := 'N'
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
                        DBCOMMITALL()
                ENDIF
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt->empresa := mcodempresa
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
                        ELSE
                                totnt-> vl_base := mbase_icm
                                totnt-> vl_icm  := mtot_icm
                                totnt-> vl_icmsu:= mtot_icmf
                                totnt-> vl_nota := mtot_nota + mtot_ipi
                                totnt-> vlr_icmsub := mtot_icmf
                                totnt-> base_icmsu := mbase_icmf
                                totnt-> ipi     := mtot_ipi
                                totnt-> peso := mpeso
                                totnt-> peso_liq := mpeso_liq
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
                        totnt-> norm_ele:= 'N'
                        DBUNLOCK()
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        LOOP
                ENDIF
                DBCOMMITALL()
                mtot_nota := mbase_icm := 0
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,21] = SPACE(5)
                                LOOP
                        ENDIF
                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        mbase_icmsub := mbase_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        mvlr_icmsub := mvlr_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                ENDIF
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                        ELSE
                                IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                       // 2.35
                                        mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                ENDIF
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                        ENDIF
                NEXT
                DBCOMMITALL()
                DBUNLOCKALL()
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
                        imprt('M','P8')
                        imprt('M','N')
                        DEVPOS(PROW()+1,74);DEVOUT(mdocumento)
                        IF msai_ent = 'S'
                                DEVPOS(PROW()+2,62);DEVOUT('X')
                        ELSE
                                DEVPOS(PROW()+2,68);DEVOUT('X')
                        ENDIF
                        imprt('M','C')
                        DEVPOS(PROW()+5,00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),45);DEVOUT(mcod_nat)

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
                        DEVPOS(PROW(),72);DEVOUT(bairro)
                        DEVPOS(PROW(),100);DEVOUT(cep)
*                       DEVPOS(PROW(),124);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        IF ver_serie() <> '141237'
                                DEVPOS(PROW(),58);DEVOUT(tel1)
                        ENDIF
                        DEVPOS(PROW(),81);DEVOUT(uf)
                        DEVPOS(PROW(),90);DEVOUT(insc)
                        IF ver_serie() = '141237' .OR. ver_serie() = '141204' .OR. ver_serie() = '141226' .OR. ver_serie() = '141314'
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
                        mtot_desc := mtot_nota := mtot_desc := mtot_peso := ;
                        mtot_liq := mbase_icm := mtot_ipi := ;
                        i := f := 0
                        DEVPOS(PROW()+4,00);DEVOUT(' ')
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
                                        ENDIF
                                        DEVPOS(68,02);DEVOUT(STRZERO(mnum_ped,6))
                                        DEVPOS(69,01);DEVOUT(RTRIM(mlin1))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
                                        IF ver_serie() <> '141226'
                                                DEVPOS(PROW(),90);DEVOUT(mdata)
                                        ENDIF
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                                        IF via <> '1'
                                                DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+mnum_sel)
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
		                                cons_sel := {}
                		                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                		DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+cons_sel[1,1])
		                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                		                sr_getconnection():exec("COMMIT",,.f.)
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
                                        IF mcont_nota = 0
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento)
                                        ELSEIF mcont_nota = 1
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/E')
                                        ENDIF
                                        IF msai_ent = 'S'
                                                DEVPOS(PROW()+2,49);DEVOUT('X')
                                        ELSE
                                                DEVPOS(PROW()+2,56);DEVOUT('X')
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
                                        IF ver_serie() <> '141237'
                                                DEVPOS(PROW(),58);DEVOUT(tel1)
                                        ENDIF
                                        DEVPOS(PROW(),78);DEVOUT(uf)
                                        DEVPOS(PROW(),90);DEVOUT(insc)
                                        IF ver_serie() = '141237' .OR. ver_serie() = '141204' .OR. ver_serie() = '141226' .OR. ver_serie() = '141314'
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
                                        DEVPOS(PROW()+1,03);DEVOUT(m_nota[i,21])
                                        DEVPOS(PROW(),15);DEVOUT(RTRIM(m_nota[i,2]))
                                        IF m_nota[i,14] = 'S'
                                                IF ver_serie() = '141226'
                                                        DEVPOS(PROW(),80);DEVOUT('03')
                                                ELSE
                                                        DEVPOS(PROW(),80);DEVOUT('04')
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW(),80);DEVOUT('00')
                                        ENDIF
                                        DEVPOS(PROW(),85);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),90);DEVOUTPICT(m_nota[i,5],'99999.99')
                                        IF mcod_fat = '02'
                                                DEVPOS(PROW(),100);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)),ALLTRIM(m_set[1,98]))
                                                DEVPOS(PROW(),120);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5],'999,999.99')
                                                DEVPOS(PROW(),135);DEVOUTPICT(m_nota[i,20],'99')
                                                mtot_nota := mtot_nota + iat(((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
*                                               mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                                mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
*                                               IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                                IF  m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + (m_nota[i,12] * m_nota[i,5])
                                                ENDIF
                                        ELSE
                                                IF m_nota[i,7] >= m_nota[i,6] .OR. mcod_nat = '6.22'
                                                        DEVPOS(PROW(),100);DEVOUTPICT(m_nota[i,7],ALLTRIM(m_set[1,98]))
                                                        DEVPOS(PROW(),120);DEVOUTPICT(m_nota[i,7] * m_nota[i,5],'999,999.99')
                                                        DEVPOS(PROW(),135);DEVOUTPICT(m_nota[i,20],'99')
                                                        mtot_aux := mtot_aux + (m_nota[i,7] * m_nota[i,5])
                                                ELSE
                                                        DEVPOS(PROW(),100);DEVOUTPICT(m_nota[i,6],ALLTRIM(m_set[1,98]))
                                                        DEVPOS(PROW(),120);DEVOUTPICT(m_nota[i,6] * m_nota[i,5],'999,999.99')
                                                        DEVPOS(PROW(),135);DEVOUTPICT(m_nota[i,20],'99')
                                                        mtot_aux := mtot_aux + (m_nota[i,6] * m_nota[i,5])
                                                        mtot_desc :=iat(mtot_desc + (m_nota[i,6]*m_nota[i,5]) - (m_nota[i,7] * m_nota[i,5]),2)
                                                ENDIF
                                                mtot_nota := mtot_nota + iat((m_nota[i,7] * m_nota[i,5]),2)
*                                               mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                                mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
*                                               IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                                IF m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                                ENDIF
                                        ENDIF
                                ELSE
                                        IF mcod_fat = '02'
                                                mtot_nota := mtot_nota + iat(((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
*                                               mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
*                                               IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                                IF  m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + (m_nota[i,12] * m_nota[i,5])
                                                ENDIF
                                        ELSE
                                                mtot_nota := mtot_nota + iat((m_nota[i,7] * m_nota[i,5]),2)
                                                mtot_desc :=iat(mtot_desc + m_nota[i,11],2)
*                                               mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
*                                               IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                                IF m_nota[i,20] > 0
                                                        mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                                ENDIF
                                        ENDIF
                                ENDIF
                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                        NEXT
                        IF mcod_nat <> '6.22' .AND. ! EMPTY(mtot_desc)
                                DEVPOS(PROW()+1,20);DEVOUT('Desconto PROMOCIONAL R$:')
                                DEVPOS(PROW(),116);DEVOUT('('+TRANSFORM(mtot_desc,'999,999.99')+')')
                        ENDIF
*                       IF mtot_icmf > 0
*                       IF mtot_icmf+mbase_icmf > 0
                        IF mtipo_nota = 'C'
                                DEVPOS(56,05);DEVOUTPICT(cbase_icm,'9,999,999.99')
                                DEVPOS(56,34);DEVOUTPICT(ctot_icm,'9,999,999.99')
                                DEVPOS(56,58);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                                DEVPOS(56,86);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                                DEVPOS(56,122);DEVOUTPICT(ctot_prod,'999,999,999.99')
                                DEVPOS(58,05);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(58,34);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(58,58);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(58,86);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                                DEVPOS(58,122);DEVOUTPICT(ctot_nota,'999,999,999.99')
                        ELSE
                                DEVPOS(56,05);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'9,999,999.99')
                                DEVPOS(56,34);DEVOUTPICT(mtot_icm,'9,999,999.99')
                                DEVPOS(56,58);DEVOUTPICT(0,'9,999,999.99')
                                DEVPOS(56,86);DEVOUTPICT(0,'9,999,999.99')
                                DEVPOS(56,122);DEVOUTPICT(mtot_nota,'999,999,999.99')
                                DEVPOS(58,05);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(58,34);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(58,58);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(58,86);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                                DEVPOS(58,122);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999,999,999.99')
                        ENDIF

                        DEVPOS(61,05);DEVOUT(mnome_trans)
                        DEVPOS(61,72);DEVOUT(mfrete_trans)
                        DEVPOS(61,84);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
                        DEVPOS(61,96);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(61,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(61,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(61,118);DEVOUT(mcgc_trans)
                        ENDIF
                        DEVPOS(63,05);DEVOUT(mend_trans)
                        DEVPOS(63,70);DEVOUT(mmun_trans)
                        DEVPOS(63,96);DEVOUT(muf_trans)
                        DEVPOS(63,118);DEVOUT(minsc_trans)

                        DEVPOS(65,02);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(65,28);DEVOUT(mesp_trans)
                        DEVPOS(65,50);DEVOUT(mmarca_trans)
                        DEVPOS(65,75);DEVOUT(mnum_trans)
                        DEVPOS(65,100);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(65,120);DEVOUTPICT(mtot_liq,'99,999.999')
                        DEVPOS(68,02);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(69,01);DEVOUT(RTRIM(mlin1))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
                        IF ver_serie() <> '141226'
                                DEVPOS(PROW(),90);DEVOUT(mdata)
                        ENDIF
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                        IF via <> '1'
                                DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+mnum_sel)
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
                                cons_sel := {}
                                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                DEVPOS(PROW()+1,90);DEVOUT(mserie+' '+cons_sel[1,1])
                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        imprt('M','N')
                        IF mcont_nota = 0
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento)
                        ELSEIF mcont_nota = 1
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento+'/A')
                        ELSEIF mcont_nota = 2
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento+'/B')
                        ELSEIF mcont_nota = 3
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento+'/C')
                        ELSEIF mcont_nota = 4
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento+'/D')
                        ELSEIF mcont_nota = 5
                                DEVPOS(PROW()+5,72);DEVOUT(mdocumento+'/E')
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

