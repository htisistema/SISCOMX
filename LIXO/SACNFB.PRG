*********************************************
* IMPRIMI NOTA FISCAL DO "MAFEMA"  NOVA
********************************************

FUNCTION sacnfb(m_nota,via,texto)
*********************
LOCAL mprg:='SACNFB',;
      mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mtot_ipi:=0,mtot_nota:=0,mtot_icmf:=0,mbase_icm:=0,mdoc_aux,mcli_nota,mend_nota,mbai_nota,;
      mop_nota:='N',mcod_uax
MEMVAR mcod_cli
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
marca := '*'
lci := 13
cci := 01
lba := 20
cba := 70
mtot_icm := 0
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := mobs6 := SPACE(55)
mcli_nota := mend_nota := mbai_nota := ' '
CLEAR GETS
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
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
*       IF via = '1'
                IF LEN(m_nota) = 0
                        RESTSCREEN(05,00,23,79,mtela)
                        RETURN NIL
                ENDIF
                ***************
                SELE('notab');ORDSETFOCUS(1)
                ***************
                IF ADIREG()
                        notab->data_ntb := mdata
                        notab->numerob := mdocumento
                        DBUNLOCK()
                        DBCOMMIT()
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo (SACNOTA)!!!')
                        LOOP
                ENDIF
                mtot_ipi  := 0
                mtot_nota := 0
                mtot_icmf := 0
                mbase_icm := 0
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

                        IF BLOQREG()
                                merc-> saldo_fis := merc-> saldo_fis - m_nota[i,5]
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        merc-> icm := icm - iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                ELSE
                                        merc-> icm := icm - iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                ENDIF
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                        DBUNLOCK()
                        *************
                        SELE('movb')
                        *************
                        IF ADIREG()
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
                                movb-> modelo  := mmodelo
                                movb-> num_ped := STRZERO(mnum_ped,6)
                                movb-> tipo_nota := mtipo_nota
                                movb-> documento := 'NF'+mdoc_aux
                                movb-> serie     := mserie_not
                                movb-> codigo := m_nota[i,21]
                                movb-> produto := m_nota[i,2]
                                movb-> cod_fab := m_nota[i,3]
                                movb-> fabrica := m_nota[i,4]
                                movb-> unidade := m_nota[i,8]
                                movb-> data_s_e := mdata
                                movb-> ent_sai := 'S'
                                movb-> quantd := m_nota[i,5]
                                movb-> pr_venda := m_nota[i,6]
                                movb-> vl_vend := m_nota[i,7]          // - (m_nota[i,7]*(m_nota[i,11]/100))
                                movb-> cod_vend := STRZERO(mcod_vend,3)
                                movb-> cod_cli := STRZERO(mcod_cli,5)
                                movb-> cliente := mcliente
                                movb-> uf_cli := muf_cli
                                movb-> cgc_cli := cli->cgc
                                movb-> cpf_cli := cli->cpf
                                movb-> insc_cli := cli->insc
                                movb-> icm := m_nota[i,20]
                                movb-> ipi_aliq := m_nota[i,24]
                                IF mcod_fat = '02' .OR. mcod_fat = '  '
                                        movb-> ipi := ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movb-> vl_fatura := m_nota[i,12]
                                        IF  m_nota[i,20] > 0
                                                IF ver_serie() = '141259' .OR. ver_serie() = '141266' .OR. ver_serie() = '141267' .OR. ver_serie() = '141268'
                                                        mbase_icm = mbase_icm + (((merc->cust_merc * m_nota[i,5])*41.18)/100)
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((merc->cust_merc * m_nota[i,5])*41.18)/100),2)
                                                ELSEIF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + ((((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*m_nota[i,34]))
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * ((((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])*m_nota[i,34])),2)
                                                ELSE
                                                        mbase_icm = mbase_icm + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                                ENDIF
                                        ENDIF
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)

                                ELSE
                                        movb-> ipi := (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                        movb-> vl_fatura := m_nota[i,7]
                                        IF m_nota[i,20] > 0
                                                IF ver_serie() = '141259' .OR. ver_serie() = '141266' .OR. ver_serie() = '141267' .OR. ver_serie() = '141268'
                                                        mbase_icm = mbase_icm + (((merc->cust_merc * m_nota[i,5])*41.18)/100)
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((merc->cust_merc * m_nota[i,5])*41.18)/100),2)
                                                ELSEIF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + (((m_nota[i,7] * m_nota[i,5])*m_nota[i,34]))
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((m_nota[i,7] * m_nota[i,5])*m_nota[i,34])),2)
                                                ELSE
                                                        mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                                ENDIF
                                        ENDIF
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                        mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                                ENDIF
                                movb-> icm_f := m_nota[i,13]
                                movb-> icm_sub := m_nota[i,22]
                                movb-> pr_unit := m_nota[i,12]
                                movb-> cust_mer := m_nota[i,33]
                                movb-> frete := mfrete
                                movb-> encargo_f := mencargo
                                movb-> disp_asse := mseguro
                                movb-> tipo := '03'
                                movb-> isento := m_nota[i,14]
                                movb-> sittrib:= m_nota[i,35]
                                movb-> desc1 := m_nota[i,11]
                                movb-> peso := m_nota[i,9]
                                movb-> peso_liq := m_nota[i,18]
                                movb-> alimento := m_nota[i,10]
                                movb-> bebida := m_nota[i,17]
                                movb-> tp_venda := mtp_vend
                                movb-> cond_vezes := mcond_vezes
                                movb-> cond_intev := mintev
                                movb-> cod_nat := mcod_nat
                                movb-> conjunta := mdocumento
                                movb-> obs1 := mobs1
                                movb-> obs2 := mobs2
                                movb-> obs3 := mobs3
                                movb-> obs4 := mobs4
                                movb-> obs5 := mobs5
                                movb-> obs6 := mobs6
                                movb-> cod_nota := mcod_nota
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                        ENDIF
                        DBCOMMITALL()
                NEXT
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
                                icm-> deb_cred := icm->deb_cred - mtot_icm
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                        GO 2
                        IF BLOQREG()
                                icm-> documento := mdocumento
                                icm-> data := mdata
                                icm-> deb_cred := icm->deb_cred - mtot_ipi
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACICM)')
                                LOOP
                        ENDIF
                        DBCOMMITALL()
                ENDIF
                *************
                SELE('totb')
                *************
                IF ADIREG()
                        totb-> num_ped := STRZERO(mnum_ped,6)
                        totb-> cod_nota := mcod_nota
                        totb-> tipo_nota := mtipo_nota
                        totb-> num_ped := STRZERO(mnum_ped,6)
                        totb-> documento := 'NF'+mdoc
                        totb-> serie     := mserie_not
                        totb-> auxiliar := maux
                        totb-> emissao := mdata
                        totb-> ent_sai := 'S'
                        totb-> cod_cli := STRZERO(mcod_cli,5)
                        totb-> cliente := mcliente
                        totb-> uf_cli := muf_cli
                        totb-> cid_cli := mcid_cli
                        totb-> insc_cli := cli->insc
                        totb-> cgc_cli := cli->cgc
                        totb-> cpf_cli := cli->cpf
                        totb-> cod_vend := STRZERO(mcod_vend,3)
                        totb-> vl_base := mbase_icm
                        totb-> vl_icm  := mtot_icm
                        totb-> vl_icmsu:= mtot_icmf
                        totb-> vl_nota := mtot_nota + mtot_ipi
                        totb-> ipi     := mtot_ipi
                        totb-> frete := mfrete
                        totb-> encargo_f := mencargo
                        totb-> disp_asse := mseguro
                        totb-> cod_nat := mcod_nat
                        totb-> obs1 := mobs1
                        totb-> obs2 := mobs2
                        totb-> obs3 := mobs3
                        totb-> obs4 := mobs4
                        totb-> obs5 := mobs5
                        totb-> obs6 := mobs6
                        DBUNLOCK()
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        LOOP
                ENDIF
                DBCOMMITALL()
                mtot_nota := 0
                mtot_icmf := 0
                mbase_icm := 0
/*
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,21] = SPACE(5)
                                LOOP
                        ENDIF
                        IF mcod_fat = '02' .OR. mcod_fat = '  '
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,12] * m_nota[i,5]),2)
                                mtot_ipi  := mtot_ipi + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]) * (m_nota[i,24]/100)
                        ELSE
                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (m_nota[i,7] * m_nota[i,5]),2)
                                mtot_ipi  := mtot_ipi + (m_nota[i,7] * m_nota[i,5]) * (m_nota[i,24]/100)
                        ENDIF
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
*/
        IF mnota = 'S'
                mcont_nota := 0
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        RESTSCREEN(05,00,24,79,mtela)
                        RESTSCREEN(24,00,24,79,mlinha)
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
                        mensagem('Espere o Final da Impressao OK !!!')
                        mdoc_aux := mdocumento
                        imprt('M','C')
                        DEVPOS(PROW()+1,00);DEVOUT('No.Documento: '+mdocumento)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('SERIE:'+mserie_not)
                        DEVPOS(PROW(),PCOL()+3);DEVOUT('DATA EMISSAO: '+DTOC(mdata))
                        DEVPOS(PROW()+1,00);DEVOUT('CLIENTE: '+cod_cli+'-'+razao)
                        IF ! EMPTY(cgc)
                                DEVPOS(PROW()+1,00);DEVOUT('CNPJ: ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cgc,'@@R 99.999.999/9999-99')
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT('CPF: ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cpf,'@@R 999.999.999-99')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('INSCRICAO EST.: '+insc)
                        DEVPOS(PROW()+1,00);DEVOUT('ENDERECO: '+endereco)
                        DEVPOS(PROW()+1,00);DEVOUT('BAIRRO: '+bairro)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('CIDADE: '+cidade)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('UF:'+uf)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('CEP:'+cep)

                        mtot_nota := 0
                        mtot_desc := 0
                        mtot_peso := 0
                        mtot_liq := 0
                        mtot_icmf := 0
                        mbase_icm := 0
                        i := 0
                        f := 0
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                        DEVPOS(PROW()+1,00);DEVOUT('Codigo')
                        DEVPOS(PROW(),09);DEVOUT('Descricao')
                        DEVPOS(PROW(),82);DEVOUT(' UN')
                        DEVPOS(PROW(),86);DEVOUT('Quantd.')
                        DEVPOS(PROW(),95);DEVOUT('Vlr.Unit.')
                        DEVPOS(PROW(),110);DEVOUT('Vlr.Total')
                        DEVPOS(PROW(),124);DEVOUT('ICMS')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                        FOR i = 1 TO LEN(m_nota)
                                ver_cod(VAL(m_nota[i,21]))
                                imprt('M','C')
                                DEVPOS(PROW()+1,00);DEVOUT(m_nota[i,21])
                                DEVPOS(PROW(),09);DEVOUT(RTRIM(m_nota[i,2]))
                                DEVPOS(PROW(),82);DEVOUT(m_nota[i,8])
                                DEVPOS(PROW(),86);DEVOUTPICT(m_nota[i,5],ALLTRIM(m_set[1,99]))
                                IF mcod_fat = '02'
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)),ALLTRIM(m_set[1,98]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_nota[i,20],'99.9')
                                        mtot_nota := mtot_nota + ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5])
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((m_nota[i,12]*(m_set[1,6]/100+1)) * m_nota[i,5]),2)
                                        mtot_desc :=iat(mtot_desc + m_nota[i,11],2)
*                                       IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0
                                        IF  m_nota[i,20] > 0
                                                IF ver_serie() = '141259' .OR. ver_serie() = '141266' .OR. ver_serie() = '141267' .OR. ver_serie() = '141268'
                                                        mbase_icm = mbase_icm + (((merc->cust_merc * m_nota[i,5])*41.18)/100)
                                                ELSEIF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + (((m_nota[i,12] * m_nota[i,5])*m_nota[i,34]))
                                                ELSE
                                                        mbase_icm = mbase_icm + (m_nota[i,12] * m_nota[i,5])
                                                ENDIF
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_nota[i,7],ALLTRIM(m_set[1,98]))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_nota[i,7] * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_nota[i,20],'99')

                                        mtot_nota := mtot_nota + (m_nota[i,7] * m_nota[i,5])
                                        mtot_desc :=iat(mtot_desc + m_nota[i,11],2)
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (m_nota[i,7] * m_nota[i,5]),2)
*                                       IF m_nota[i,14] = 'N' .AND. m_nota[i,20] > 0
                                        IF  m_nota[i,20] > 0
                                                IF ver_serie() = '141259' .OR. ver_serie() = '141266' .OR. ver_serie() = '141267' .OR. ver_serie() = '141268'
                                                        mbase_icm = mbase_icm + (((merc->cust_merc * m_nota[i,5])*41.18)/100)
                                                ELSEIF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + (((m_nota[i,7] * m_nota[i,5])*m_nota[i,34]))
                                                ELSE
                                                        mbase_icm = mbase_icm + (m_nota[i,7] * m_nota[i,5])
                                                ENDIF
                                        ENDIF
                                ENDIF
                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                        NEXT
                        DEVPOS(43,05);DEVOUT('BASE ICM:')
                        DEVPOS(43,PCOL()+1);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'999,999,999.99')
                        DEVPOS(43,PCOL()+3);DEVOUT('VALOR ICM:')
                        DEVPOS(43,PCOL()+1);DEVOUTPICT(mtot_icm,'9,999,999.99')
                        DEVPOS(43,PCOL()+3);DEVOUT('VALOR TOTAL:')
                        DEVPOS(43,PCOL()+1);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo+mtot_ipi,'999,999,999.99')
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        EJECT
                        imprt('M','N')
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao(mprg+'.REL')
                        RESTSCREEN(05,00,24,79,mtela)
                        RESTSCREEN(24,00,24,79,mlinha)
                        ASIZE(m_nota,0)
                        CLEAR GETS
                        RETURN NIL
                ENDIF
        ELSE
                RESTSCREEN(05,00,24,79,mtela)
                RESTSCREEN(24,00,24,79,mlinha)
                ASIZE(m_nota,0)
                CLEAR GETS
                RETURN NIL
        ENDIF
ENDDO
RETURN NIL
*********************** F I M **********************************

