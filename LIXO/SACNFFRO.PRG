***************************
* IMPRIMI NOTA FISCAL DA FROTINTAS
***************************

FUNCTION sacnffro(m_nota,via,texto,v)
*********************
LOCAL mprg:='SACNFFRO',;
      mcont_nota:=0,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mtot_quantd,mtot_ipi:=0,mcont_prod:=0,mextenso,i:=0,f:=0

MEMVAR mseguro,mencargo,mdif_icms,mbase_sub,micm_sub,mtipo_nota,mpercent,mcod_nat

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,aret:={}

IF v <> NIL
        DEVPOS(22,00);DEVOUT(' SACNFFRO ')
        RETURN NIL
ENDIF
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
IF mtipo_nota = 'N'
        mtot_quantd := mtot_icm := mtot_ipi :=mtot_nota:=mtot_icmf:=;
        mtot_peso:=mtot_liq :=mbase_icm:=0
ENDIF
marca := '*'
lci := 15
cci := 01
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
                IF m_nota[i,35] = '060'
                        mobs1 := 'LIVRE DA COBRANCA DO ICMS CONFORME DECRETO 18503 DE 23/05/95'
                        mobs2 := 'ONU.1263                       CLASSE: 3                 SUB-CLASSE: 0'
                ENDIF
                IF mtipo_nota = 'N'
                        mcont_prod ++
                        mtot_quantd := mtot_quantd + m_nota[i,5]
                ENDIF
        NEXT
        IF SUBSTR(mcod_nat,1,1) = '6' .AND. mtip_cli = 'C'
                mobs3 := 'DIFERENCA DA ALIQUOTA DO ICMS R$: '+ALLTRIM(TRANSFORM(mdif_icms,'99,999.99'))
        ENDIF
        IF mtipo_nota = 'N'
                mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        ENDIF
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
        IF mcont_prod/13 <= 1
                mpag := 1
        ELSEIF mcont_prod/12<= 2
                mpag := 2
        ELSEIF mcont_prod/12<= 3
                mpag := 3
        ELSEIF mcont_prod/12<= 4
                mpag := 4
        ELSEIF mcont_prod/12<= 5
                mpag := 5
        ELSEIF mcont_prod/12<= 6
                mpag := 6
        ELSEIF mcont_prod/12<= 7
                mpag := 7
        ELSEIF mcont_prod/12<= 8
                mpag := 8
        ENDIF
        IF via = '1'
                IF mcont_prod = 0
                        RETURN NIL
                ENDIF
                aret:={}
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
                IF mtipo_nota = 'N'
                        mtot_ipi  := mtot_nota := mtot_icmf := mbase_icm := 0
                ENDIF
                mdoc := mdoc_aux := mdocumento
                maux := SPACE(10)
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
                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                       mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
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
                        totnt-> base_icmsu:= mbase_sub
                        totnt-> vl_icmsu:= micm_sub
                        IF mtipo_nota = 'N'
                                totnt-> vl_prod := mtot_nota
                                totnt-> vl_nota := mtot_nota + mtot_ipi + mdif_icms + micm_sub
                        ELSE
                                totnt-> vl_prod := mtot_prod
                                totnt-> vl_nota := mtot_nota
                        ENDIF
                        totnt-> ipi     := mtot_ipi
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
*                       mtot_nota := 0
                        mtot_icmf := mbase_icm := 0
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
*                       imprt('M','P6')
                        imprt('M','N')
                        IF msai_ent = 'S'
                                DEVPOS(PROW()+2,51);DEVOUT('X')
                                DEVPOS(PROW(),70);DEVOUT(mdocumento)
                                DEVPOS(PROW()+1,52);DEVOUT('SERIE:'+mserie_not)
                        ELSE
                                DEVPOS(PROW()+2,56);DEVOUT('X')
                                DEVPOS(PROW(),70);DEVOUT(mdocumento)
                                DEVPOS(PROW()+1,52);DEVOUT('SERIE:'+mserie_not)
                        ENDIF
                        imprt('M','C')
                        DEVPOS(PROW()+4,00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),41);DEVOUT(mcod_nat)
                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                        IF ! EMPTY(cgc)
                                DEVPOS(PROW(),95);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                        ELSE
                                DEVPOS(PROW(),95);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(PROW(),124);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                        DEVPOS(PROW(),75);DEVOUT(bairro)
                        DEVPOS(PROW(),102);DEVOUT(cep)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        DEVPOS(PROW(),65);DEVOUT(tel1)
                        DEVPOS(PROW(),82);DEVOUT(uf)
                        DEVPOS(PROW(),90);DEVOUT(insc)
                        IF EMPTY(mnum_dup)
                                DEVPOS(PROW()+5,00);DEVOUT(' ')
                        ELSE
                                IF mpag = 1
                                        DEVPOS(PROW()+3,00);DEVOUT(mdata)
                                        DEVPOS(PROW(),25);DEVOUT(mdocumento)
                                        DEVPOS(PROW(),54);DEVOUT(TRANSFORM(mtot_nota,'9,999,999.99'))
                                        DEVPOS(PROW(),75);DEVOUT(mnum_dup)
                                        IF mvlr_dup1 = 0
                                                DEVPOS(PROW(),95);DEVOUT(mvenci)
                                                DEVPOS(PROW()+2,00);DEVOUT('')
                                        ELSE
                                                DEVPOS(PROW()+2,22);DEVOUT(mvenci)
                                                DEVPOS(PROW(),37);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
                                                DEVPOS(PROW(),55);DEVOUT(mvenci1)
                                                DEVPOS(PROW(),67);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                                DEVPOS(PROW(),87);DEVOUT(mvenci2)
                                                DEVPOS(PROW(),102);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW()+5,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        i := f := 0
                        IF ! EMPTY(cli->end_cob)
                                DEVPOS(PROW()+2,00);DEVOUT(ALLTRIM(cli->end_cob)+' - '+ALLTRIM(cli->bairro_cob)+' - '+ALLTRIM(cli->cidade_cob)+' - '+cli->uf_cob+' CEP.: '+cli->cep_cob)
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT(ALLTRIM(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))+' - '+ALLTRIM(cli->bairro)+' - '+ALLTRIM(cli->cidade)+' - '+cli->uf+' CEP.: '+cli->cep)
                        ENDIF
*                       IF mvlr_dup+mvlr_dup1+mvlr_dup2+mvlr_dup3 > 0 .AND. mpag = 1
                        IF mpag = 1
                                IF mvlr_dup+mvlr_dup1+mvlr_dup2+mvlr_dup3 > 0
                                        mextenso:= '('+ALLTRIM(extenso(iat(mvlr_dup+mvlr_dup1+mvlr_dup2+mvlr_dup3,2),.T.,'real','reais'))+')'
                                ELSE
                                        mextenso:= '('+ALLTRIM(extenso(iat(mtot_nota,2),.T.,'real','reais'))+')'
                                ENDIF
                                DEVPOS(PROW()+2,00);DEVOUT(mextenso)
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT('')
                        ENDIF
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_desc := mtot_peso := ;
                                mtot_liq := mtot_icmf := mbase_icm := ;
                                mtot_ipi := 0
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                        FOR i = 1 TO mcont_prod
                                IF m_nota[i,21] = SPACE(5) .OR. EMPTY(m_nota[i,5])
                                        LOOP
                                ENDIF
                                f ++
                                IF f > 13
                                        mdoc_aux := mdocumento
                                        mcont_nota ++
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
                                        ENDIF
                                        DEVPOS(54,00);DEVOUT(endereco)
                                        DEVPOS(55,00);DEVOUT(ALLTRIM(cli->bairro)+'-'+ALLTRIM(cli->cidade)+'-'+cli->uf)
                                        DEVPOS(55,50);DEVOUT(STRZERO(mnum_ped,6))
                                        DEVPOS(55,65);DEVOUT(cli->cod_cli)
                                        DEVPOS(56,01);DEVOUT(mobs1)
                                        DEVPOS(PROW()+1,01);DEVOUT(mobs2)
                                        DEVPOS(PROW()+1,01);DEVOUT(mobs3)
                                        DEVPOS(PROW()+1,01);DEVOUT(mobs4)
                                        DEVPOS(PROW()+1,01);DEVOUT(mobs5)
                                        DEVPOS(PROW()+1,01);DEVOUT(mobs6)
                                        IF via <> '1'
                                                DEVPOS(PROW()+1,102);DEVOUT(mserie+' '+mnum_sel)
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
		                                cons_sel := {}
                		                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
		                                DEVPOS(PROW()+1,102);DEVOUT(mserie+' '+cons_sel[1,1])
                		                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                		sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        ****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        ****************
                                        imprt('M','N')
                                        DEVPOS(PROW()+5,70);DEVOUT(mdoc_aux)
                                        SETPRC(00,00)
                                        EJECT
*                                       mdocumento := STRZERO(VAL(mdocumento)+1,6)
                                        IF msai_ent = 'S'
                                                DEVPOS(PROW()+2,51);DEVOUT('X')
                                        ELSE
                                                DEVPOS(PROW()+2,56);DEVOUT('X')
                                        ENDIF
                                        IF mcont_nota = 1
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/E')
                                        ELSEIF mcont_nota = 6
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/F')
                                        ELSEIF mcont_nota = 7
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/G')
                                        ELSEIF mcont_nota = 8
                                                DEVPOS(PROW(),70);DEVOUT(mdocumento+'/H')
                                        ENDIF
                                        DEVPOS(PROW()+1,52);DEVOUT('SERIE:'+mserie_not)
                                        imprt('M','C')
                                        DEVPOS(PROW()+4,00);DEVOUT(mnatureza)
                                        DEVPOS(PROW(),43);DEVOUT(mcod_nat)
                                        DEVPOS(PROW()+3,00);DEVOUT(cod_cli+'-'+razao)
                                        IF ! EMPTY(cgc)
                                                DEVPOS(PROW(),95);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                                        ELSE
                                                DEVPOS(PROW(),95);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                                        ENDIF
                                        DEVPOS(PROW(),124);DEVOUT(mdata)
                                        DEVPOS(PROW()+2,00);DEVOUT(endereco)
                                        DEVPOS(PROW(),75);DEVOUT(bairro)
                                        DEVPOS(PROW(),102);DEVOUT(cep)
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                        DEVPOS(PROW(),65);DEVOUT(tel1)
                                        DEVPOS(PROW(),82);DEVOUT(uf)
                                        DEVPOS(PROW(),90);DEVOUT(insc)
                                        IF EMPTY(mnum_dup)
                                                DEVPOS(PROW()+5,00);DEVOUT(' ')
                                        ELSE
                                                IF mpag = 1
                                                        DEVPOS(PROW()+3,00);DEVOUT(mdata)
                                                        DEVPOS(PROW(),25);DEVOUT(mdocumento)
                                                        DEVPOS(PROW(),54);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
                                                        DEVPOS(PROW(),75);DEVOUT(mnum_dup)

                                                        DEVPOS(PROW(),95);DEVOUT(mvenci)
                                                        DEVPOS(PROW()+2,22);DEVOUT(mvenci1)
                                                        DEVPOS(PROW(),37);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                                        DEVPOS(PROW(),55);DEVOUT(mvenci2)
                                                        DEVPOS(PROW(),67);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                                        DEVPOS(PROW(),87);DEVOUT(mvenci3)
                                                        DEVPOS(PROW(),102);DEVOUT(TRANSFORM(mvlr_dup3,'9,999,999.99'))
                                                ELSE
                                                        DEVPOS(PROW()+5,00);DEVOUT(' ')
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(cli->end_cob)
                                                DEVPOS(PROW()+2,00);DEVOUT(ALLTRIM(cli->end_cob)+' - '+ALLTRIM(cli->bairro_cob)+' - '+ALLTRIM(cli->cidade_cob)+' - '+cli->uf_cob+' CEP.: '+cli->cep_cob)
                                        ELSE
                                                DEVPOS(PROW()+2,00);DEVOUT(ALLTRIM(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))+' - '+ALLTRIM(cli->bairro)+' - '+ALLTRIM(cli->cidade)+' - '+cli->uf+' CEP.: '+cli->cep)
                                        ENDIF
                                        IF mvlr_dup+mvlr_dup1+mvlr_dup2+mvlr_dup3 > 0 .AND. mpag = 1
                                                mextenso:= '('+ALLTRIM(extenso(iat(mvlr_dup+mvlr_dup1+mvlr_dup2+mvlr_dup3,2),.T.,'real','reais'))+')'
                                                DEVPOS(PROW()+2,00);DEVOUT(mextenso)
                                        ELSE
                                                DEVPOS(PROW()+2,00);DEVOUT('')
                                        ENDIF
                                        DEVPOS(PROW()+2,00);DEVOUT(' ')
*                                       DEVPOS(PROW()+11,00);DEVOUT(' ')
                                        DEVPOS(PROW()+1,17);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                        ver_cod(VAL(m_nota[i,21]))
*                                       IF ! EMPTY(merc->cod_barr)
*                                               DEVPOS(PROW()+1,00);DEVOUT(SUBSTR(merc->cod_barr,1,13))
*                                       ELSE
*                                               DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
*                                       ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
                                        DEVPOS(PROW(),15);DEVOUT(merc->ref+' '+m_nota[i,2])
                                        DEVPOS(PROW(),PCOL());DEVOUT(m_nota[i,23])
                                        DEVPOS(PROW(),PCOL()+6);DEVOUT(m_nota[i,35])
                                        DEVPOS(PROW(),PCOL()+3);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_nota[i,5],'99999.99')
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                       mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
                                        ****************************
                                        DEVPOS(PROW(),PCOL()+3);DEVOUTPICT(mpr_fat,'999,999.99')
                                        DEVPOS(PROW(),PCOL()+3);DEVOUTPICT(mpr_fat * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),PCOL()+3);DEVOUTPICT(m_nota[i,20],'99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_nota[i,24],'99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mpr_fat * m_nota[i,5])*(m_nota[i,24]/100),'999.99')
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
                                                //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                               mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
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
                        DEVPOS(42,10);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'9,999,999.99')
                        DEVPOS(42,36);DEVOUTPICT(mtot_icm,'9,999,999.99')
                        IF mtipo_nota = 'N'
                                IF micm_sub > 0
                                        DEVPOS(42,66);DEVOUTPICT(mbase_sub,'9,999,999.99')
                                        DEVPOS(42,92);DEVOUTPICT(micm_sub,'9,999,999.99')
                                ELSE
                                        DEVPOS(42,66);DEVOUTPICT(0,'9,999,999.99')
                                        DEVPOS(42,92);DEVOUTPICT(0,'9,999,999.99')
                                ENDIF
                                DEVPOS(42,120);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        ELSE
                                DEVPOS(42,66);DEVOUTPICT(mbase_icmf,'9,999,999.99')
                                DEVPOS(42,92);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                                DEVPOS(42,120);DEVOUTPICT(mtot_prod,'99,999,999.99')
                        ENDIF
                        DEVPOS(44,10);DEVOUTPICT(mfrete,'9,999,999.99')
                        DEVPOS(44,36);DEVOUTPICT(mseguro,'9,999,999.99')
                        DEVPOS(44,66);DEVOUTPICT(mencargo,'9,999,999.99')
                        DEVPOS(44,92);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                        IF mtipo_nota = 'C'
                                DEVPOS(44,120);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        ELSE
                                DEVPOS(44,120);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mdif_icms + micm_sub,'999,999,999.99')
                        ENDIF

                        DEVPOS(47,10);DEVOUT(mnome_trans)
                        DEVPOS(47,79);DEVOUT(mfrete_trans)
                        DEVPOS(47,88);DEVOUT(mplaca_trans)
                        DEVPOS(47,103);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(47,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(47,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(47,118);DEVOUT(mcgc_trans)
                        ENDIF
                        DEVPOS(49,10);DEVOUT(mend_trans)
                        DEVPOS(49,73);DEVOUT(mmun_trans)
                        DEVPOS(49,103);DEVOUT(muf_trans)
                        DEVPOS(49,118);DEVOUT(minsc_trans)

                        DEVPOS(51,02);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(51,30);DEVOUT(mesp_trans)
                        DEVPOS(51,50);DEVOUT(mmarca_trans)
                        DEVPOS(51,75);DEVOUT(mnum_trans)
                        DEVPOS(51,100);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(51,120);DEVOUTPICT(mtot_liq,'99,999.999')
                        DEVPOS(54,00);DEVOUT(cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
                        DEVPOS(55,00);DEVOUT(ALLTRIM(cli->bairro)+'-'+ALLTRIM(cli->cidade)+'-'+cli->uf)
                        DEVPOS(55,50);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(55,65);DEVOUT(cli->cod_cli+' - Ope.:'+cod_operado)
                        DEVPOS(56,01);DEVOUT(mobs1)
                        DEVPOS(PROW()+1,01);DEVOUT(mobs2)
                        DEVPOS(PROW()+1,01);DEVOUT(mobs3)
                        DEVPOS(PROW()+1,01);DEVOUT(mobs4)
                        DEVPOS(PROW()+1,01);DEVOUT(mobs5)
                        DEVPOS(PROW()+1,01);DEVOUT(mobs6)
*                       DEVPOS(PROW(),90);DEVOUT(mdata)
                        IF via <> '1'
                                DEVPOS(PROW()+1,102);DEVOUT(mserie+' '+mnum_sel)
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
                                cons_sel := {}
                                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                DEVPOS(PROW()+1,102);DEVOUT(mserie+' '+cons_sel[1,1])
                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        imprt('M','N')
                        IF mcont_nota = 0
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento)
                        ELSEIF mcont_nota = 1
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/A')
                        ELSEIF mcont_nota = 2
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/B')
                        ELSEIF mcont_nota = 3
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/C')
                        ELSEIF mcont_nota = 4
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/D')
                        ELSEIF mcont_nota = 5
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/E')
                        ELSEIF mcont_nota = 6
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/F')
                        ELSEIF mcont_nota = 7
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/G')
                        ELSEIF mcont_nota = 8
                                DEVPOS(PROW()+5,70);DEVOUT(mdocumento+'/H')
                        ENDIF
                        EJECT
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

