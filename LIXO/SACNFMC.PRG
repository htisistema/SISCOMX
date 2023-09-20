/****************************
* IMPRIMI NOTA FISCAL DA M.C.BRASILEIRO
***************************
*icmsub

FUNCTION sacnfmc(m_nota,via,texto,v)
*********************

LOCAL mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mvalor_nt,mvlr_icmsub:=0,mbase_icmsub:=0,mdesc_icm:=0,mcodnat_aux,;
      mtip_nf:='N'
IF v <> NIL
        DEVPOS(22,00);DEVOUT(' SACNFMC ')
        RETURN NIL
ENDIF
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
marca := '*'

lci := 15
cci := 01
lba := 22
cba := 65
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
mtot_icm := 0
WHILE .T.
        mtip_nf := mensagem1('Que tipo de nota [N]ormal [O]utros=(Transf., Devolucao e etc.):','N','N,O')
        mcodnat_aux := mcod_nat
        IF mtip_nf = 'N'
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        ****************
                        SELE('merc');ORDSETFOCUS(1)
                        GO TOP
                        ****************
                        SEEK m_nota[i,21]
                        IF VAL(merc->local) = 1
                                mobs1 := '* Recolhimento  de  ICMS  Normal/ST., nos  termos  dos '  //farinha
                                mobs2 := '  PROTOCOLO 46/00 E 05/01. Ratif.p/23.071/PE 05/03/01. '
                        ELSEIF VAL(merc->local) = 2
                                mobs3 := '* Operacao desunerada do ICMS, conf.artigo 6,paragrafo '  //mergarina
                                mobs4 := '  Unico do decreto 24/654/02                           '
                        ELSEIF VAL(merc->local) = 3
                                mobs5 := '* ICMS isento CFE art.9,inc.CIV-H,item I Dec.14.876/91-PE' //FARELO
                                mobs6 := '  FARELO TRIGO REG.MIN AGRIC.SOB N.S 91. '
                        ENDIF
                NEXT
        ENDIF
        botao(lci,cci,lba,cba,,' OBSERVACAO DA NOTA ')
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
        mcont_nota := 0
        IF LEN(m_nota)/17 <= 1
                mpag := 1
        ELSEIF LEN(m_nota)/16 <= 2
                mpag := 2
        ELSEIF LEN(m_nota)/16 <= 3
                mpag := 3
        ELSEIF LEN(m_nota)/16 <= 4
                mpag := 4
        ELSEIF LEN(m_nota)/16 <= 5
                mpag := 5
        ENDIF
        IF via = '1'
                IF LEN(m_nota) = 0
                        RESTSCREEN(01,00,23,79,mtela)
                        RETURN NIL
                ENDIF
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
                mtot_nota := mtot_icmf := mbase_icm := 0
                mdoc := mdoc_aux := mdocumento
                maux := SPACE(10)
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,20] = 12 .AND. mtip_nf = 'N'
                                mcodnat_aux := '5.403'
                        ENDIF
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
                                                merc-> icm := merc->icm - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ELSE
                                                merc-> icm := merc->icm - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                ELSEIF msai_ent = 'E'
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
                                                sr_cdbvalue('SACNFMC')+','+; //9
                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                sr_cdbvalue('EMISSAO NOTA ENTRADA : '+mdocumento)+','+; //11
                                                sr_cdbvalue('E')+','+; //11
                                                sr_cdbvalue(' ')+')',,.f.)
                                        merc-> saldo_fis := merc->saldo_fis + m_nota[i,5]
                                        merc-> saldo_mer := merc->saldo_mer + m_nota[i,5]
                                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                                merc-> icm := merc->icm + (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ELSE
                                                merc-> icm := merc->icm + (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
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
                                IF i = 18
                                        mdoc_aux := mdocumento+'/A'
                                        maux := '/A'
                                ELSEIF i = 34
                                        mdoc_aux := mdocumento+'/B'
                                        maux := ALLTRIM(maux)+'B'
                                ELSEIF i = 50
                                        mdoc_aux := mdocumento+'/C'
                                        maux := ALLTRIM(maux)+'C'
                                ELSEIF i = 66
                                        mdoc_aux := mdocumento+'/D'
                                        maux := ALLTRIM(maux)+'D'
                                ELSEIF i = 82
                                        mdoc_aux := mdocumento+'/E'
                                        maux := ALLTRIM(maux)+'E'
                                ELSEIF i = 98
                                        mdoc_aux := mdocumento+'/F'
                                        maux := ALLTRIM(maux)+'F'
                                ENDIF
                                movnt-> modelo  := mmodelo
                                movnt-> num_ped := STRZERO(mnum_ped,6)
                                movnt-> serie   := mserie_not
                                movnt-> tipo_nota := mtipo_nota
                                movnt-> documento := 'NF'+mdoc_aux
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
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        movnt-> vl_fatura := (m_nota[i,12] * (m_set[1,6]/100+1))
                                        mtot_icm := mtot_icm + (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        movnt-> vlr_icm := (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        mtot_icmf := mtot_icmf + m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        IF  m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                                movnt->base_icmsu := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := (((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                        IF m_nota[i,25] = 'S'
                                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                        movnt-> base_icm := iat(mbase_icm,2)
                                ELSE
                                        movnt-> vl_fatura := m_nota[i,7]
                                        mtot_icm := mtot_icm + (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        movnt-> vlr_icm := (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                        mtot_icmf := mtot_icmf + m_nota[i,13] * (m_nota[i,7] * m_nota[i,5])
                                        IF m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                        IF m_nota[i,25] = 'S'
                                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                        IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                                mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                               // 2.35
                                                mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                                movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                        movnt-> base_icm := iat(mbase_icm,2)
                                ENDIF
                                movnt-> icm_f := m_nota[i,13]
                                movnt-> icm_sub := m_nota[i,22]
                                movnt-> pr_unit := (m_nota[i,12] * (m_set[1,6]/100+1))
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
                                movnt-> cod_nat := mcodnat_aux
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
                        totnt-> serie   := mserie_not
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
                        totnt-> vl_nota := mtot_nota + vlr_icmsub
                        totnt-> vlr_icmsub := mvlr_icmsub
                        totnt-> base_icmsu := mbase_icmsub
                        totnt-> desc_icm := mdesc_icm
                        totnt-> frete := mfrete
                        totnt-> encargo_f := mencargo
                        totnt-> disp_asse := mseguro
                        totnt-> cod_nat := mcodnat_aux
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
                mtot_nota := mtot_icmf := mbase_icm := 0.00
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
                                IF m_nota[i,25] = 'S'
                                        mdesc_icm := mdesc_icm + (m_set[1,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                                ENDIF
                                mtot_icm := mtot_icm + (m_nota[i,20]/100) * ((m_nota[i,12] * (m_set[1,6]/100+1)) * m_nota[i,5])
                        ELSE
                                IF m_nota[i,25] = 'S'
                                        mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                ENDIF
                                IF ! EMPTY(m_nota[i,22])                                                    // 2.35
                                        mbase_icmsub := mbase_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                                                                                       // 2.35
                                        mvlr_icmsub := mvlr_icmsub + ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                        movnt->base_icmsu := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))
                                        movnt->vlr_icmsub := ((m_nota[i,7] * m_nota[i,5])*((m_nota[i,22]/100)+1))*(m_nota[i,20]/100) - (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                                ENDIF
                                mtot_icm := mtot_icm + (m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5])
                        ENDIF
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
*               mextenso := mobs1+mobs2+mobs3+mobs4+mobs5+mobs6
                mlin1 := mobs1
                mlin2 := mobs2
                mlin3 := mobs3
                mlin4 := mobs4
                mlin5 := mobs5
                mlin6 := mobs6
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo (SACCLI)')
                        RESTSCREEN(01,00,24,79,mtela)
                        RESTSCREEN(24,00,24,79,mlinha)
                        RETURN NIL
                ELSE

                        cli->ult_comp := mdata
                        DBUNLOCK()
                        DBCOMMIT()
                        mensagem('Espere o Final da Impressao OK !!!')
                        SET DEVI TO PRINT
                        SET PRINT TO (m_indiv[1,23])
                        imprt('M','N')
                        DEVPOS(PROW()+1,70);DEVOUT(mdocumento)
                        DEVPOS(PROW()+1,10);DEVOUT(mend_firm)
                        IF msai_ent = 'S'
                                DEVPOS(PROW(),50);DEVOUT('X')
*                               DEVPOS(PROW(),70);DEVOUT('SERIE 03')
                        ELSE
                                DEVPOS(PROW(),57);DEVOUT('X')
*                                DEVPOS(PROW(),70);DEVOUT('SERIE 01')
                        ENDIF
                        DEVPOS(PROW(),70);DEVOUT('SERIE:'+mserie_not)
                        DEVPOS(PROW()+1,10);DEVOUT(mcid_firm)
                        DEVPOS(PROW()+1,10);DEVOUT(mfone_firm)
                        imprt('M','C')
                        DEVPOS(PROW()+1,95);DEVOUT(mcgc_firm)
                        DEVPOS(PROW()+2,00);DEVOUT(mnatureza)
                        DEVPOS(PROW(),38);DEVOUT(mcodnat_aux)
                        DEVPOS(PROW(),95);DEVOUT(minsc_firm)

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
                        DEVPOS(PROW(),76);DEVOUT(bairro)
                        DEVPOS(PROW(),105);DEVOUT(cep)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        DEVPOS(PROW(),58);DEVOUT(tel1)
                        DEVPOS(PROW(),79);DEVOUT(uf)
                        DEVPOS(PROW(),83);DEVOUT(insc)
                        IF EMPTY(mnum_dup)
                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                        ELSE
                                IF mpag = 1
                                        DEVPOS(PROW()+3,00);DEVOUT(mnum_dup)
                                        DEVPOS(PROW(),13);DEVOUT(mvenci)
                                        DEVPOS(PROW(),25);DEVOUT(TRANSFORM(mvlr_dup,'999,999,999.99'))
                                        DEVPOS(PROW(),44);DEVOUT(mnum_dup1)
                                        DEVPOS(PROW(),57);DEVOUT(mvenci1)
                                        DEVPOS(PROW(),69);DEVOUT(TRANSFORM(mvlr_dup1,'999,999,999.99'))
                                        DEVPOS(PROW(),86);DEVOUT(mnum_dup2)
                                        DEVPOS(PROW(),99);DEVOUT(mvenci2)
                                        DEVPOS(PROW(),111);DEVOUT(TRANSFORM(mvlr_dup2,'999,999,999.99'))
                                ELSE
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                        mtot_nota := mtot_desc := mtot_peso := mtot_liq := ;
                        mtot_icmf := mbase_icm := i := f := 0
                        FOR i = 1 TO LEN(m_nota)
                                f++
                                IF f > 17
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
                                        DEVPOS(52,01);DEVOUT(RTRIM(mlin1))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
                                        DEVPOS(PROW(),102);DEVOUT(mdata)
                                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                                        IF via <> '1'
                                                DEVPOS(PROW(),102);DEVOUT(mserie+' '+mnum_sel)
                                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                                        ELSE
		                                cons_sel := {}
                		                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                		DEVPOS(PROW(),102);DEVOUT(mserie+' '+cons_sel[1,1])
		                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                		                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        ****************
                                        SELE('cli');ORDSETFOCUS(1)
                                        ****************
                                        imprt('M','N')
*                                       DEVPOS(61,72);DEVOUT(mdocumento)
                                        DEVPOS(PROW()+5,70);DEVOUT(mdoc_aux)
                                        SETPRC(00,00)
                                        EJECT
*                                       mdocumento := STRZERO(VAL(mdocumento)+1,6)
                                        imprt('M','N')
                                        IF mcont_nota = 0
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento)
                                        ELSEIF mcont_nota = 1
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento+'/A')
                                        ELSEIF mcont_nota = 2
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento+'/B')
                                        ELSEIF mcont_nota = 3
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento+'/C')
                                        ELSEIF mcont_nota = 4
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento+'/D')
                                        ELSEIF mcont_nota = 5
                                                DEVPOS(PROW()+3,70);DEVOUT(mdocumento+'/E')
                                        ENDIF
                                        IF msai_ent = 'S'
                                                DEVPOS(PROW()+3,50);DEVOUT('X')
                                        ELSE
                                                DEVPOS(PROW()+3,57);DEVOUT('X')
                                        ENDIF
                                        imprt('M','C')
                                        DEVPOS(PROW()+4,00);DEVOUT(mnatureza)
                                        DEVPOS(PROW(),46);DEVOUT(mcodnat_aux)

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
                                        DEVPOS(PROW(),76);DEVOUT(bairro)
                                        DEVPOS(PROW(),105);DEVOUT(cep)
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                        DEVPOS(PROW(),58);DEVOUT(tel1)
                                        DEVPOS(PROW(),79);DEVOUT(uf)
                                        DEVPOS(PROW(),83);DEVOUT(insc)
                                        DEVPOS(PROW()+2,00);DEVOUT(' ')
                                        DEVPOS(PROW()+1,17);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
                                DEVPOS(PROW(),08);DEVOUT(RTRIM(m_nota[i,2]))
                                DEVPOS(PROW(),51);DEVOUT('Cl.Fis: '+m_nota[i,23])
                                DEVPOS(PROW(),73);DEVOUT(m_nota[i,35])
                                DEVPOS(PROW(),78);DEVOUT(m_nota[i,8])
                                DEVPOS(PROW(),81);DEVOUTPICT(m_nota[i,5],'99999.99')
                                IF mcod_fat = '02'
                                        DEVPOS(PROW(),95);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)),'999,999.99')
                                        DEVPOS(PROW(),117);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),132);DEVOUTPICT(m_nota[i,20],'99.99')
                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        mtot_icmf := mtot_icmf + m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
*                                       IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                        IF  m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),95);DEVOUTPICT(m_nota[i,7],'999,999.99')
                                        DEVPOS(PROW(),117);DEVOUTPICT(m_nota[i,7] * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),132);DEVOUTPICT(m_nota[i,20],'99.99')

                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                        mtot_desc :=iat(mtot_desc + m_nota[i,11],2)
                                        mtot_icmf := mtot_icmf + m_nota[i,13] * (m_nota[i,7] * m_nota[i,5])
*                                       IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0;
                                        IF m_nota[i,20] > 0
                                                mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                        ENDIF
                                ENDIF
                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                        NEXT
                        IF mdesc_icm > 0
                                DEVPOS(36,05);DEVOUT('Desconto de ICMS R$: '+TRANSFORM(mdesc_icm,'999,999.99'))
                        ENDIF
                        DEVPOS(40,05);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'9,999,999.99')
                        DEVPOS(40,35);DEVOUTPICT(mtot_icm,'9,999,999.99')
                        IF mbase_icmsub > 0
                                DEVPOS(40,58);DEVOUTPICT(mbase_icmsub,'9,999,999.99')
                                DEVPOS(40,90);DEVOUTPICT(mvlr_icmsub,'9,999,999.99')
                        ELSE
                                DEVPOS(40,58);DEVOUTPICT(0,'9,999,999.99')
                                DEVPOS(40,90);DEVOUTPICT(0,'9,999,999.99')
                        ENDIF
                        DEVPOS(40,122);DEVOUTPICT(mtot_nota,'999,999,999.99')
                        DEVPOS(42,05);DEVOUTPICT(mfrete,'9,999,999.99')
                        DEVPOS(42,35);DEVOUTPICT(mseguro,'9,999,999.99')
                        DEVPOS(42,58);DEVOUTPICT(mencargo,'9,999,999.99')
                        DEVPOS(42,122);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mvlr_icmsub - mdesc_icm,'999,999,999.99')

                        DEVPOS(45,10);DEVOUT(mnome_trans)
                        DEVPOS(45,78);DEVOUT(mfrete_trans)
                        DEVPOS(45,88);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
                        DEVPOS(45,99);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(45,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(45,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(45,118);DEVOUT(mcgc_trans)
                        ENDIF
                        DEVPOS(47,10);DEVOUT(mend_trans)
                        DEVPOS(47,73);DEVOUT(mmun_trans)
                        DEVPOS(47,99);DEVOUT(muf_trans)
                        DEVPOS(47,118);DEVOUT(minsc_trans)

                        DEVPOS(49,00);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(49,22);DEVOUT(mesp_trans)
                        DEVPOS(49,50);DEVOUT(mmarca_trans)
                        DEVPOS(49,75);DEVOUT(mnum_trans)
                        DEVPOS(49,95);DEVOUTPICT(mtot_peso,'99,999.999')
                        DEVPOS(49,122);DEVOUTPICT(mtot_liq,'99,999.999')
                        DEVPOS(51,02);DEVOUT(STRZERO(mnum_ped,6))
                        DEVPOS(52,01);DEVOUT(RTRIM(mlin1))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin2))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin3))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin4))
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin5))
*                       DEVPOS(PROW(),102);DEVOUT(mdata)
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
                        IF via <> '1'
*                               DEVPOS(PROW(),102);DEVOUT(mserie+' '+mnum_sel)
                                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
                        ELSE
                                cons_sel := {}
                                sr_getconnection():exec("SELECT num_sel FROM sacselnf  WHERE sr_recno = 1" ,,.t.,cons_sel)
                                DEVPOS(PROW(),102);DEVOUT(mserie+' '+cons_sel[1,1])
                                sr_getconnection():exec("UPDATE sacselnf SET num_sel = "+sr_cdbvalue(IF(LEN(cons_sel)>0,STRZERO(VAL(cons_sel[1,1])+1,9),STRZERO(1,9)))+" WHERE sr_recno = 1" ,,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        imprt('M','N')
*                       DEVPOS(61,72);DEVOUT(mdocumento)
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
                        ENDIF
                        imprt('M','N')
                        EJECT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        RESTSCREEN(01,00,24,79,mtela)
                        RESTSCREEN(24,00,24,79,mlinha)
                        ASIZE(m_nota,0)
                        mvalor_nt := mtot_nota + mtot_icmf + mfrete + mseguro + mencargo
                        CLEAR GETS
                        IF mtp_vend = 'AP'
                                opcao := mensagem1('Deseja emitir [B]oleto bancario/Promissoria [D]uplicata [N]ao:','N','B,D,N,P')
                                IF opcao = 'B'
                                        CLEAR GETS
                                        sacbolet(mcod_cli,mdocumento,mvalor_nt,mnum_ped)
                                ENDIF
                                IF opcao = 'D'
                                        CLEAR GETS
                                        con428(mcod_cli,mdocumento,mvalor_nt)
                                ENDIF
                        ENDIF
                        RETURN NIL
                ENDIF
        ELSE
                RESTSCREEN(01,00,24,79,mtela)
                RESTSCREEN(24,00,24,79,mlinha)
                ASIZE(m_nota,0)
                CLEAR GETS
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** F I M **********************************
/*
*********************************************
* IMPRIMI NOTA FISCAL DO "M.C.BRAS." CORRECAO
********************************************

FUNCTION sacnfmc1(via,texto)
*********************

LOCAL mprg:='SACNFMC',lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,mtela,;
      mbase_icm:=0,;
      mtot_icm:=0,;
      mbase_icmf:=0,;
      mtot_icmf:=0,;
      mtot_ipi:=0,;
      mtot_prod:=0,;
      mtot_nota:=0,;
      mtot_quantd:=0,;
      mtot_peso:=0,;
      mtot_liq:=0

MEMVAR mseguro,mencargo
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
mtela := SAVESCREEN(00,00,24,79)
lci := 10
cci := 01
lba := 22
cba := 75
mobs1 := SPACE(55)
mobs2 := SPACE(55)
mobs3 := SPACE(55)
mobs4 := SPACE(55)
mobs5 := SPACE(55)
mobs6 := SPACE(55)
CLEAR GETS
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mbase_icm:=0
        mtot_icm:=0
        mbase_icmf:=0
        mtot_icmf:=0
        mtot_ipi:=0
        mtot_prod:=0
        mtot_nota:=0
        mtot_quantd:=0
        mtot_peso:=0
        mtot_liq:=0
        botao(lci,cci,lba,cba,,' Nota Fiscal de CORRECAO ')
        DEVPOS(lci+1,cci+1);DEVOUT('Base ICMS.......:             ')
        DEVPOS(lci+1,33);DEVOUT('Vlr.ICMS.......:             ')
        DEVPOS(lci+2,cci+1);DEVOUT('Base ICMS SUBST.:             ')
        DEVPOS(lci+2,33);DEVOUT('Vlr.ICMS SUBST.:             ')
        DEVPOS(lci+3,cci+1);DEVOUT('Vlr.Total IPI...:             ')
        DEVPOS(lci+4,cci+1);DEVOUT('Vlr.Total Prod..:             ')
        DEVPOS(lci+4,33);DEVOUT('Vlr.Total NOTA.:             ')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade......:             ')
        DEVPOS(lci+6,cci+1);DEVOUT('Peso Bruto......:             ')
        DEVPOS(lci+6,33);DEVOUT('Peso Liquido...:             ')
        DEVPOS(lci+7,cci+1);DEVOUT('Observacoes.....:             ')
        @ lci+1,cci+19 GET mbase_icm PICT '9,999,999.99'
        @ lci+1,cci+50 GET mtot_icm PICT '9,999,999.99'
        @ lci+2,cci+19 GET mbase_icmf PICT '9,999,999.99'
        @ lci+2,cci+50 GET mtot_icmf PICT '9,999,999.99'
        @ lci+3,cci+19 GET mtot_ipi PICT '9,999,999.99'
        @ lci+4,cci+19 GET mtot_prod PICT '9,999,999.99'
        @ lci+4,cci+50 GET mtot_nota PICT '9,999,999.99'
        @ lci+5,cci+19 GET mtot_quantd PICT '999,999.99'
        @ lci+6,cci+19 GET mtot_peso PICT '999,999.99'
        @ lci+6,cci+50 GET mtot_liq PICT '999,999.99'
        @ lci+7,cci+19 GET mobs1 PICT '@!'
        @ lci+8,cci+19 GET mobs2 PICT '@!'
        @ lci+9,cci+19 GET mobs3 PICT '@!'
        @ lci+10,cci+19 GET mobs4 PICT '@!'
        READ
        opcao := op_simnao('S','Confirma os DADOS DA NOTA:')
        IF opcao = 'N'
                RESTSCREEN(00,00,24,79,mtela)
                CLEAR GETS
                RETURN NIL
        ENDIF
        mcont_nota := 0
        mpag := 1
        IF via = '1'
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
                mdoc := mdocumento
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt->empresa   := mcodempresa
                        totnt-> cod_nota := mcod_nota
                        totnt-> num_ped := STRZERO(mnum_ped,6)
                        totnt-> documento := 'NF'+mdoc
                        totnt-> serie     := mserie_not
                        totnt-> auxiliar := mdoc
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
                        totnt-> vl_base := mbase_icm
                        totnt-> vl_icm  := mtot_icm
                        totnt-> vl_icmsu:= mtot_icmf
                        totnt-> vl_prod := mtot_prod
                        totnt-> vl_nota := mtot_nota
                        totnt-> ipi     := mtot_ipi
                        totnt-> peso := mtot_peso
                        totnt-> peso_liq := mtot_liq
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
        ENDIF
        mcont_nota := 0
        ****************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ****************
        SEEK STRZERO(mcod_cli,5)
        WHILE .T.
                IF ! imp_arq(mprg+'.REL','N')
                        atencao('Foi Gerada a NOTA FISCAL de No.:'+mdocumento)
                        LOOP
                ELSE
                        EXIT
                ENDIF
        ENDDO
        imprt('M','N')
        DEVPOS(PROW()+1,70);DEVOUT(mdocumento)
        DEVPOS(PROW()+1,10);DEVOUT(mend_firm)
        IF msai_ent = 'S'
                DEVPOS(PROW(),50);DEVOUT('X')
        ELSE
                DEVPOS(PROW(),57);DEVOUT('X')
        ENDIF
        DEVPOS(PROW(),70);DEVOUT('SERIE:'+mserie_not)
        DEVPOS(PROW()+1,10);DEVOUT(mcid_firm)
        DEVPOS(PROW()+1,10);DEVOUT(mfone_firm)
        imprt('M','C')
        DEVPOS(PROW()+1,95);DEVOUT(mcgc_firm)
        DEVPOS(PROW()+2,00);DEVOUT(mnatureza)
        DEVPOS(PROW(),38);DEVOUT(mcod_nat)
        DEVPOS(PROW(),95);DEVOUT(minsc_firm)

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
        DEVPOS(PROW(),76);DEVOUT(bairro)
        DEVPOS(PROW(),105);DEVOUT(cep)
        DEVPOS(PROW()+2,00);DEVOUT(cidade)
        DEVPOS(PROW(),58);DEVOUT(tel1)
        DEVPOS(PROW(),79);DEVOUT(uf)
        DEVPOS(PROW(),83);DEVOUT(insc)
        DEVPOS(PROW()+6,00);DEVOUT(' ')
        DEVPOS(40,05);DEVOUTPICT(mbase_icm,'9,999,999.99')
        DEVPOS(40,35);DEVOUTPICT(mtot_icm,'9,999,999.99')
        DEVPOS(40,58);DEVOUTPICT(mbase_icmf,'9,999,999.99')
        DEVPOS(40,90);DEVOUTPICT(mtot_icmf,'9,999,999.99')
        DEVPOS(40,122);DEVOUTPICT(mtot_prod,'999,999,999.99')
        DEVPOS(42,05);DEVOUTPICT(mfrete,'9,999,999.99')
        DEVPOS(42,35);DEVOUTPICT(mseguro,'9,999,999.99')
        DEVPOS(42,58);DEVOUTPICT(mencargo,'9,999,999.99')
        DEVPOS(42,122);DEVOUTPICT(mtot_nota,'999,999,999.99')

        DEVPOS(45,10);DEVOUT(mnome_trans)
        DEVPOS(45,78);DEVOUT(mfrete_trans)
        DEVPOS(45,88);DEVOUTPICT(mplaca_trans,'@@R XXX-9999')
        DEVPOS(45,99);DEVOUT(mpluf_trans)
        IF mcgccpf = 'CGC'
                DEVPOS(45,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
        ELSEIF mcgccpf = 'CPF'
                DEVPOS(45,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
        ELSE
                DEVPOS(45,118);DEVOUT(mcgc_trans)
        ENDIF
        DEVPOS(47,10);DEVOUT(mend_trans)
        DEVPOS(47,73);DEVOUT(mmun_trans)
        DEVPOS(47,99);DEVOUT(muf_trans)
        DEVPOS(47,118);DEVOUT(minsc_trans)

        DEVPOS(49,00);DEVOUTPICT(mtot_quantd,'999,999.99')
        DEVPOS(49,22);DEVOUT(mesp_trans)
        DEVPOS(49,50);DEVOUT(mmarca_trans)
        DEVPOS(49,75);DEVOUT(mnum_trans)
        DEVPOS(49,95);DEVOUTPICT(mtot_peso,'99,999.999')
        DEVPOS(49,122);DEVOUTPICT(mtot_liq,'99,999.999')
        DEVPOS(51,02);DEVOUT('')
        DEVPOS(52,01);DEVOUT(RTRIM(mobs1))
        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mobs2))
        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mobs3))
        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mobs4))
        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mobs5))
        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mobs6))
        IF via <> '1'
                mnum_sel := STRZERO(VAL(mnum_sel)+1,9)
        ELSE
                *************
                SELE('sel')
                *************
                IF ! BLOQREG()
                        atencao('Nao foi possivel bloquear o REGISTRO')
                        LOOP
                ENDIF
                sel->num_sel := STRZERO(VAL(sel->num_sel)+1,9)
                DBUNLOCK()
                DBCOMMIT()
        ENDIF
        ****************
        SELE('cli');ORDSETFOCUS(1)
        ****************
        imprt('M','N')
        DEVPOS(PROW()+5,70);DEVOUT(mdocumento)
        imprt('M','N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                lertexto(mprg+'.REL')
        ENDIF
        RESTSCREEN(00,00,24,79,mtela)
        CLEAR GETS
        RETURN NIL
ENDDO
RETURN NIL
*********************** F I M **********************************

*/