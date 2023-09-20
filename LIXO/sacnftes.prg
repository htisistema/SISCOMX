***************************
* IMPRIMI NOTA FISCAL DA J.W.ESTOFADOS
***************************

FUNCTION sacnfjw(m_nota,via,texto,v)
*********************
LOCAL mprg:='SACNFJW'
LOCAL mcont_nota,lci,cci,lba,cba,mobs1,mobs2,mobs3,mobs4,mobs5,micm,mdoc,maux,;
      mtot_quantd,mcont_prod:=0,mpeso:=0,mpeso_liq:=0,mcampo_arq
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret

MEMVAR mseguro,mencargo,mtipo_nota,mtot_ipi
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF v <> NIL
        DEVPOS(22,00);DEVOUT(' SACNFJW ')
        RETURN NIL
ENDIF
IF marca = '*'
        mdocumento := STRZERO(VAL(mdocumento)+1,6)
ENDIF
IF mtipo_nota = 'N'
        mtot_quantd := 1
        mtot_icm := mtot_ipi :=mtot_nota:=mtot_icmf:=mtot_peso:=mtot_liq :=;
        mbase_icm:=0
ENDIF
marca := '*'
lci := 17
cci := 01
lba := 22
cba := 70
mobs1 := 'Fantasia: '+cli->nome
IF ver_serie() = '141287'
        mobs2 := 'CLASSIFICACAO FISCAL'+SPACE(55-20)
        mobs3 := '1 - 9401.61.00'+SPACE(55-14)
ELSE
        mobs2 := SPACE(55)
        mobs3 := SPACE(55)
ENDIF
mobs4 := 'O VALOR DO FRETE JA ESTA INCLUSO NA MERCADORIA        '
mobs5 := mobs6 := SPACE(55)
mtot_quantd := 0
WHILE .T.
        mcont_prod:=0
        i := 0
        FOR i = 1 TO LEN(m_nota)
                IF EMPTY(m_nota[i,5])
                        LOOP
                ENDIF
                mcont_prod ++
                mtot_quantd := mtot_quantd + m_nota[i,5]
        NEXT
        mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        opcao := op_simnao('N','Deseja descrever alguma OBSERVACAO na nota '+texto+' :')
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
        IF mcont_prod/25 <= 1
                mpag := 1
        ELSEIF mcont_prod/24 <= 2
                mpag := 2
        ELSEIF mcont_prod/24 <= 3
                mpag := 3
        ELSEIF mcont_prod/24 <= 4
                mpag := 4
        ELSEIF mcont_prod/24 <= 5
                mpag := 5
        ENDIF
        IF via = '1'
                IF mcont_prod = 0
                        RESTSCREEN(05,00,23,79,mtela)
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
                mdoc := mdoc_aux := mdocumento
                maux := SPACE(10)
                i := 0
                FOR i = 1 TO LEN(m_nota)        //mcont_prod
                        IF EMPTY(m_nota[i,5])
                                LOOP
                        ENDIF
                        f++
                        aret:={}
                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                        sr_getconnection():exec(ccomm,,.t.,@aret)
                        IF msai_ent = 'S'
                                ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] - m_nota[i,5])
                                ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] - iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                        ELSEIF msai_ent = 'E'
                                ccomm :="UPDATE sacmerc SET saldo_fis = "+sr_cdbvalue(aret[1,55] + m_nota[i,5])
                                ccomm := ccomm +",saldo_mer = "+sr_cdbvalue(aret[1,56] + m_nota[i,5])
                                ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))

                        ENDIF
                        ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(m_nota[i,21])
                        sr_getconnection():exec(ccomm,,.f.)

                        mpr_fat := m_nota[i,7]
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

                        mcampo_arq :=  'empresa,';//1
                                      +'modelo,';//2
                                      +'num_ped,';//3
                                      +'tipo_nota,';//4
                                      +'documento,';//5
                                      +'serie,';//6
                                      +'codigo,';//7
                                      +'produto,';//8
                                      +'cod_fab,';//9
                                      +'fabrica,';//10
                                      +'unidade,';//11
                                      +'data_s_e,';//12
                                      +'quantd,';//13
                                      +'pr_venda,';//14
                                      +'vl_vend,';//15
                                      +'cod_vend,';//16
                                      +'cod_cli,';//17
                                      +'cliente,';//18
                                      +'uf_cli,';//19
                                      +'cgc_cli,';//20
                                      +'cpf_cli,';//21
                                      +'insc_cli,';//22
                                      +'icm,';//23
                                      +'ipi_aliq,';//24
                                      +'ipi,';//25
                                      +'vl_fatura,';//26
                                      +'icm_f,';//27
                                      +'icm_sub,';//28
                                      +'pr_unit,';//29
                                      +'cust_mer,';//30
                                      +'frete,';//31
                                      +'encargo_f,';//32
                                      +'disp_asse,';//33
                                      +'tipo,';//34
                                      +'isento,';//35
                                      +'sittrib,';//36
                                      +'desc1,';//37
                                      +'peso,';//38
                                      +'peso_liq,';//39
                                      +'alimento,';//40
                                      +'bebida,';//41
                                      +'tp_venda,';//42
                                      +'cond_vezes,';//43
                                      +'cond_intev,';//44
                                      +'cod_nat,';//45
                                      +'conjunta,';//46
                                      +'obs1,';//47
                                      +'obs2,';//48
                                      +'obs3,';//49
                                      +'obs4,';//50
                                      +'obs5,';//51
                                      +'obs6,';//52
                                      +'cod_nota,';//53
                                      +'ent_sai,';//54
                                      +'vlr_icm,';//55
                                      +'base_icm'//56
                        cComm  := 'INSERT INTO sacmovnt ('+mcampo_arq+',sr_deleted) VALUES ('
                        cComm  := ccomm +     sr_cdbvalue(mcodempresa                                 ) //1
                        cComm  := ccomm + ','+sr_cdbvalue(mmodelo                                     ) //2
                        cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mnum_ped,6)                         ) //3
                        cComm  := ccomm + ','+sr_cdbvalue(mtipo_nota                                  ) //4
                        cComm  := ccomm + ','+sr_cdbvalue('NF'+mdoc_aux                               ) //5
                        cComm  := ccomm + ','+sr_cdbvalue(mserie_not                                  ) //6
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,21]                                ) //7
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,2]                                 ) //8
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,3]                                 ) //9
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,4]                                 ) //10
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,8]                                 ) //11
                        cComm  := ccomm + ','+sr_cdbvalue(mdata                                       ) //12
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,5]                                 ) //13
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,6]                                 ) //14
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,7]                                 ) //15
                        cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mcod_vend,3)                        ) //16
                        cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mcod_cli,5)                         ) //17
                        cComm  := ccomm + ','+sr_cdbvalue(mcliente                                    ) //18
                        cComm  := ccomm + ','+sr_cdbvalue(muf_cli                                     ) //19
                        cComm  := ccomm + ','+sr_cdbvalue(cli->cgc                                    ) //20
                        cComm  := ccomm + ','+sr_cdbvalue(cli->cpf                                    ) //21
                        cComm  := ccomm + ','+sr_cdbvalue(cli->insc                                   ) //22
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,20]                                ) //23
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,24]                                ) //24
                        cComm  := ccomm + ','+sr_cdbvalue(iat((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100),2)) //25
                        cComm  := ccomm + ','+sr_cdbvalue(mpr_fat                                     ) //26
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,13]                                ) //27
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,22]                                ) //28
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,12]                                ) //29
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,33]                                ) //30
                        cComm  := ccomm + ','+sr_cdbvalue(mfrete                                      ) //31
                        cComm  := ccomm + ','+sr_cdbvalue(mencargo                                    ) //32
                        cComm  := ccomm + ','+sr_cdbvalue(mseguro                                     ) //33
                        cComm  := ccomm + ','+sr_cdbvalue('03'                                        ) //34
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,14]                                ) //35
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,35]                                ) //36
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,11]                                ) //37
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,9]                                 ) //38
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,18]                                ) //39
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,10]                                ) //40
                        cComm  := ccomm + ','+sr_cdbvalue(m_nota[i,17]                                ) //41
                        cComm  := ccomm + ','+sr_cdbvalue(mtp_vend                                    ) //42
                        cComm  := ccomm + ','+sr_cdbvalue(mcond_vezes                                 ) //43
                        cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mintev,2)                           ) //44
                        cComm  := ccomm + ','+sr_cdbvalue(mcod_nat                                    ) //45
                        cComm  := ccomm + ','+sr_cdbvalue(SUBSTR(mdocumento,1,8)                      ) //46
                        cComm  := ccomm + ','+sr_cdbvalue(mobs1                                       ) //47
                        cComm  := ccomm + ','+sr_cdbvalue(mobs2                                       ) //48
                        cComm  := ccomm + ','+sr_cdbvalue(mobs3                                       ) //49
                        cComm  := ccomm + ','+sr_cdbvalue(mobs4                                       ) //50
                        cComm  := ccomm + ','+sr_cdbvalue(mobs5                                       ) //51
                        cComm  := ccomm + ','+sr_cdbvalue(mobs6                                       ) //52
                        cComm  := ccomm + ','+sr_cdbvalue(mcod_nota                                   ) //53
                        cComm  := ccomm + ','+sr_cdbvalue(msai_ent                                    ) //54
                        IF mtipo_nota = 'N'
                                IF  m_nota[i,20] > 0
                                        IF m_nota[i,25] = 'S'
                                                cComm  := ccomm + ','+sr_cdbvalue(iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)) //55
                                                cComm  := ccomm + ','+sr_cdbvalue(iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)) //56
                                                mbase_icm = mbase_icm + (((mpr_fat * m_nota[i,5])*m_nota[i,34]))
                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),2)
                                        ELSE
                                                cComm  := ccomm + ','+sr_cdbvalue(iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)) //55
                                                cComm  := ccomm + ','+sr_cdbvalue(iat((mpr_fat * m_nota[i,5]),2)) //56
                                                mbase_icm = mbase_icm + (mpr_fat * m_nota[i,5])
                                                mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),2)
                                        ENDIF
                                ELSE
                                        cComm  := ccomm + ','+sr_cdbvalue(0.00) //55
                                        cComm  := ccomm + ','+sr_cdbvalue(0.00) //56
                                ENDIF
                                mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                mtot_nota := mtot_nota + (mpr_fat * m_nota[i,5])
                                mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                        ELSE
                                cComm  := ccomm + ','+sr_cdbvalue(0.00) //55
                                cComm  := ccomm + ','+sr_cdbvalue(0.00) //56
                        ENDIF
                        cComm  := ccomm + ','+sr_cdbvalue(' ')+')'
                        sr_getconnection():exec(ccomm,,.f.)

/*
                        *************
                        SELE('movnt')
                        *************
                        IF ADIREG()
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
                                movnt-> empresa         := mcodempresa
                                movnt-> modelo          := mmodelo
                                movnt-> num_ped         := STRZERO(mnum_ped,6)
                                movnt-> tipo_nota       := mtipo_nota
                                movnt-> documento       := 'NF'+mdoc_aux
                                movnt-> serie           := mserie_not
                                movnt-> codigo          := m_nota[i,21]
                                movnt-> produto         := m_nota[i,2]
                                movnt-> cod_fab         := m_nota[i,3]
                                movnt-> fabrica         := m_nota[i,4]
                                movnt-> unidade         := m_nota[i,8]
                                movnt-> data_s_e        := mdata
                                movnt-> quantd          := m_nota[i,5]
                                movnt-> pr_venda        := m_nota[i,6]
                                movnt-> vl_vend         := m_nota[i,7]
                                movnt-> cod_vend        := STRZERO(mcod_vend,3)
                                movnt-> cod_cli         := STRZERO(mcod_cli,5)
                                movnt-> cliente         := mcliente
                                movnt-> uf_cli          := muf_cli
                                movnt-> cgc_cli         := cli->cgc
                                movnt-> cpf_cli         := cli->cpf
                                movnt-> insc_cli        := cli->insc
                                movnt-> icm             := m_nota[i,20]
                                movnt-> ipi_aliq        := m_nota[i,24]
                                movnt-> ipi             := (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                movnt-> vl_fatura       := mpr_fat
                                movnt-> icm_f           := m_nota[i,13]
                                movnt-> icm_sub         := m_nota[i,22]
                                movnt-> pr_unit         := m_nota[i,12]
                                movnt-> cust_mer        := m_nota[i,33]
                                movnt-> frete           := mfrete
                                movnt-> encargo_f       := mencargo
                                movnt-> disp_asse       := mseguro
                                movnt-> tipo            := '03'
                                movnt-> isento          := m_nota[i,14]
                                movnt-> sittrib         := m_nota[i,35]
                                movnt-> desc1           := m_nota[i,11]
                                movnt-> peso            := m_nota[i,9]
                                movnt-> peso_liq        := m_nota[i,18]
                                movnt-> alimento        := m_nota[i,10]
                                movnt-> bebida          := m_nota[i,17]
                                movnt-> tp_venda        := mtp_vend
                                movnt-> cond_vezes      := mcond_vezes
                                movnt-> cond_intev      := STRZERO(mintev,3)
                                movnt-> cod_nat         := mcod_nat
                                movnt-> conjunta        := mdocumento
                                movnt-> obs1            := mobs1
                                movnt-> obs2            := mobs2
                                movnt-> obs3            := mobs3
                                movnt-> obs4            := mobs4
                                movnt-> obs5            := mobs5
                                movnt-> obs6            := mobs6
                                movnt-> cod_nota        := mcod_nota
                                movnt-> ent_sai         := msai_ent
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
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        ENDIF
                        DBUNLOCK()
                        DBCOMMIT()
*/
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
                mcampo_arq :=   'empresa         ,';//1
                               +'modelo          ,';//2
                               +'cod_nota        ,';//3
                               +'tipo_nota       ,';//4
                               +'num_ped         ,';//5
                               +'documento       ,';//6
                               +'serie           ,';//7
                               +'auxiliar        ,';//8
                               +'emissao         ,';//9
                               +'ent_sai         ,';//10
                               +'cod_cli         ,';//11
                               +'cliente         ,';//12
                               +'uf_cli          ,';//13
                               +'cid_cli         ,';//14
                               +'insc_cli        ,';//15
                               +'cgc_cli         ,';//16
                               +'cpf_cli         ,';//17
                               +'cod_vend        ,';//18
                               +'frete           ,';//19
                               +'encargo_f       ,';//20
                               +'disp_asse       ,';//21
                               +'cod_nat         ,';//22
                               +'obs1            ,';//23
                               +'obs2            ,';//24
                               +'obs3            ,';//25
                               +'obs4            ,';//26
                               +'obs5            ,';//27
                               +'obs6            ,';//28
                               +'vl_base         ,';//29
                               +'vl_icm          ,';//30
                               +'vl_icmsu        ,';//31
                               +'vl_nota         ,';//32
                               +'vlr_icmsub      ,';//33
                               +'base_icmsu      ,';//34
                               +'ipi             ,';//35
                               +'peso            ,';//36
                               +'peso_liq        ,';//37
                               +'vl_prod         ,';//38
                               +'vl_nota          '//39
                cComm  := 'INSERT INTO sactotnt ('+mcampo_arq+',sr_deleted) VALUES ('
                cComm  := ccomm +     sr_cdbvalue(mcodempresa           ) //1
                cComm  := ccomm + ','+sr_cdbvalue(mmodelo               ) //2
                cComm  := ccomm + ','+sr_cdbvalue(mcod_nota             ) //3
                cComm  := ccomm + ','+sr_cdbvalue(mtipo_nota            ) //4
                cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mnum_ped,6)   ) //5
                cComm  := ccomm + ','+sr_cdbvalue('NF'+mdoc             ) //6
                cComm  := ccomm + ','+sr_cdbvalue(mserie_not            ) //7
                cComm  := ccomm + ','+sr_cdbvalue(maux                  ) //8
                cComm  := ccomm + ','+sr_cdbvalue(mdata                 ) //9
                cComm  := ccomm + ','+sr_cdbvalue(msai_ent              ) //10
                cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mcod_cli,5)   ) //11
                cComm  := ccomm + ','+sr_cdbvalue(mcliente              ) //12
                cComm  := ccomm + ','+sr_cdbvalue(muf_cli               ) //13
                cComm  := ccomm + ','+sr_cdbvalue(mcid_cli              ) //14
                cComm  := ccomm + ','+sr_cdbvalue(cli->insc             ) //15
                cComm  := ccomm + ','+sr_cdbvalue(cli->cgc              ) //16
                cComm  := ccomm + ','+sr_cdbvalue(cli->cpf              ) //17
                cComm  := ccomm + ','+sr_cdbvalue(STRZERO(mcod_vend,3)  ) //18
                cComm  := ccomm + ','+sr_cdbvalue(mfrete                ) //19
                cComm  := ccomm + ','+sr_cdbvalue(mencargo              ) //20
                cComm  := ccomm + ','+sr_cdbvalue(mseguro               ) //21
                cComm  := ccomm + ','+sr_cdbvalue(mcod_nat              ) //22
                cComm  := ccomm + ','+sr_cdbvalue(mobs1                 ) //23
                cComm  := ccomm + ','+sr_cdbvalue(mobs2                 ) //24
                cComm  := ccomm + ','+sr_cdbvalue(mobs3                 ) //25
                cComm  := ccomm + ','+sr_cdbvalue(mobs4                 ) //26
                cComm  := ccomm + ','+sr_cdbvalue(mobs5                 ) //27
                cComm  := ccomm + ','+sr_cdbvalue(mobs6                 ) //28
                IF mtipo_nota = 'C'
                        cComm  := ccomm + ','+sr_cdbvalue(iat(cbase_icm,3) ) //29
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_icm ,3) ) //30
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_icmf,3) ) //31
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_nota,3) ) //32
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_icmf,3) ) //33
                        cComm  := ccomm + ','+sr_cdbvalue(iat(cbase_icmf,3)) //34
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_ipi,3)  ) //35
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_peso,3) ) //36
                        cComm  := ccomm + ','+sr_cdbvalue(iat(ctot_liq,3)  ) //37
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_prod,3) ) //38
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_nota,3)) //39
                ELSE
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mbase_icm,3) ) //29
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_icm,3)            ) //30
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_icmf,3)           ) //31
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_nota + mtot_ipi,3)) //32
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_icmf,3)           ) //33
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mbase_icmf,3)          ) //34
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_ipi,3)            ) //35
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mpeso,3)               ) //36
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mpeso_liq,3)           ) //37
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_nota,3)           ) //38
                        cComm  := ccomm + ','+sr_cdbvalue(iat(mtot_nota + mtot_ipi,3)) //39
                ENDIF

                cComm  := ccomm + ','+sr_cdbvalue(' ')+')'
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
/*
                *************
                SELE('totnt')
                *************
                IF ADIREG()
                        totnt-> empresa         := mcodempresa
                        totnt-> modelo          := mmodelo
                        totnt-> cod_nota        := mcod_nota
                        totnt-> tipo_nota       := mtipo_nota
                        totnt-> num_ped         := STRZERO(mnum_ped,6)
                        totnt-> documento       := 'NF'+mdoc
                        totnt-> serie           := mserie_not
                        totnt-> auxiliar        := maux
                        totnt-> emissao         := mdata
                        totnt-> ent_sai         := msai_ent
                        totnt-> cod_cli         := STRZERO(mcod_cli,5)
                        totnt-> cliente         := mcliente
                        totnt-> uf_cli          := muf_cli
                        totnt-> cid_cli         := mcid_cli
                        totnt-> insc_cli        := cli->insc
                        totnt-> cgc_cli         := cli->cgc
                        totnt-> cpf_cli         := cli->cpf
                        totnt-> cod_vend        := STRZERO(mcod_vend,3)
                        totnt-> frete           := mfrete
                        totnt-> encargo_f       := mencargo
                        totnt-> disp_asse       := mseguro
                        totnt-> cod_nat         := mcod_nat
                        totnt-> obs1            := mobs1
                        totnt-> obs2            := mobs2
                        totnt-> obs3            := mobs3
                        totnt-> obs4            := mobs4
                        totnt-> obs5            := mobs5
                        totnt-> obs6            := mobs6
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
                                totnt-> vl_base         := mbase_icm
                                totnt-> vl_icm          := mtot_icm
                                totnt-> vl_icmsu        := mtot_icmf
                                totnt-> vl_nota         := mtot_nota + mtot_ipi
                                totnt-> vlr_icmsub      := mtot_icmf
                                totnt-> base_icmsu      := mbase_icmf
                                totnt-> ipi             := mtot_ipi
                                totnt-> peso            := mpeso
                                totnt-> peso_liq        := mpeso_liq
                                totnt-> vl_prod         := mtot_nota
                                totnt-> vl_nota         := mtot_nota + mtot_ipi
                        ENDIF
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo (SACMOV)')
                        LOOP
                ENDIF
                DBUNLOCK()
                DBCOMMIT()
*/
                IF mtipo_nota = 'N'
                        mtot_nota := mtot_icmf := mbase_icm := 0
                ENDIF
        ELSE
                i := 0
                FOR i = 1 TO mcont_prod
                        IF m_nota[i,21] = SPACE(5) .OR. EMPTY(m_nota[i,5])
                                LOOP
                        ENDIF
                        *** PRECO DE FATURA ********
                        mpr_fat := m_nota[i,7]
                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
                        ****************************
                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2)
                NEXT
                mtot_icm := iat(mtot_icm,2)
        ENDIF
        IF mnota = 'S'
                mcont_nota := 0
                mextenso := mobs2+mobs3+mobs4+mobs5+mobs6
                mlin1 := mobs1  //MEMOLINE(mextenso,55,1,,10)
                mlin2 := MEMOLINE(mextenso,55,1,,10)
                mlin3 := MEMOLINE(mextenso,55,2,,10)
                mlin4 := MEMOLINE(mextenso,55,3,,10)
                mlin5 := MEMOLINE(mextenso,55,4,,10)
                mlin6 := MEMOLINE(mextenso,55,5,,10)
                ASIZE(m_acucar,0)
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo (SACCLI)')
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
                        //mensagem('Espere o Final da Impressao OK !!!')
                        //SET DEVI TO PRINT
                        //SET PRINT TO (m_indiv[1,23])
*                       //SET PRINT TO jw.rel
                        imprt('M','P8')
                        imprt('M','N')
                        IF msai_ent = 'S'
                                DEVPOS(PROW()+1,51);DEVOUT('X')
                                DEVPOS(PROW()+2,51);DEVOUT('SERIE:'+mserie_not)
                        ELSE
                                DEVPOS(PROW()+1,57);DEVOUT('X')
                                DEVPOS(PROW()+2,51);DEVOUT('SERIE:'+mserie_not)
                        ENDIF
                        DEVPOS(PROW()+1,72);DEVOUT(mdocumento)
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
                        DEVPOS(PROW(),75);DEVOUT(bairro)
                        DEVPOS(PROW(),102);DEVOUT(cep)
*                       DEVPOS(PROW(),124);DEVOUT(mdata)
                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                        DEVPOS(PROW(),65);DEVOUT(tel1)
                        DEVPOS(PROW(),82);DEVOUT(uf)
                        DEVPOS(PROW(),90);DEVOUT(insc)
                        DEVPOS(PROW(),124);DEVOUT(TIME())
                        IF EMPTY(mnum_dup)
                                DEVPOS(PROW()+4,00);DEVOUT(' ')
                        ELSE
                                IF mpag = 1
                                        DEVPOS(PROW()+2,26);DEVOUT(mnum_dup)
                                        DEVPOS(PROW(),44);DEVOUT(mnum_dup1)
                                        DEVPOS(PROW(),64);DEVOUT(mnum_dup2)
                                        DEVPOS(PROW(),84);DEVOUT(mnum_dup3)
                                        DEVPOS(PROW(),104);DEVOUT(mnum_dup4)
                                        DEVPOS(PROW(),124);DEVOUT(mnum_dup5)
                                        DEVPOS(PROW()+1,20);DEVOUT(TRANSFORM(mvlr_dup,'9,999,999.99'))
                                        DEVPOS(PROW(),40);DEVOUT(TRANSFORM(mvlr_dup1,'9,999,999.99'))
                                        DEVPOS(PROW(),60);DEVOUT(TRANSFORM(mvlr_dup2,'9,999,999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mvlr_dup3,'9,999,999.99'))
                                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM(mvlr_dup4,'9,999,999.99'))
                                        DEVPOS(PROW(),120);DEVOUT(TRANSFORM(mvlr_dup5,'9,999,999.99'))
                                        DEVPOS(PROW()+1,22);DEVOUT(mvenci)
                                        DEVPOS(PROW(),42);DEVOUT(mvenci1)
                                        DEVPOS(PROW(),62);DEVOUT(mvenci2)
                                        DEVPOS(PROW(),82);DEVOUT(mvenci3)
                                        DEVPOS(PROW(),102);DEVOUT(mvenci4)
                                        DEVPOS(PROW(),122);DEVOUT(mvenci5)
                                ELSE
                                        DEVPOS(PROW()+4,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        IF mtipo_nota = 'N'
                                mtot_nota := mtot_desc := mtot_peso := mtot_liq := ;
                                mtot_icmf := mtot_ipi := 0
                        ENDIF
                        i := f := 0
                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                        FOR i = 1 TO mcont_prod
                                IF m_nota[i,21] = SPACE(5) .OR. EMPTY(m_nota[i,5])
                                        LOOP
                                ENDIF
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
                                        DEVPOS(PROW(),90);DEVOUT(mdata)
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
                                        ELSEIF mcont_nota = 6
                                                DEVPOS(PROW()+3,72);DEVOUT(mdocumento+'/F')
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
                                        DEVPOS(PROW()+2,00);DEVOUT(cidade)
                                        DEVPOS(PROW(),58);DEVOUT(tel1)
                                        DEVPOS(PROW(),78);DEVOUT(uf)
                                        DEVPOS(PROW(),90);DEVOUT(insc)
                                        DEVPOS(PROW(),124);DEVOUT(TIME())
                                        DEVPOS(PROW()+4,00);DEVOUT(' ')
*                                       ENDIF
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                        DEVPOS(PROW()+1,17);DEVOUT('VALOR TRANSPORTADO DA NOTA No.: '+ mdoc_aux)
                                        DEVPOS(PROW(),117);DEVOUTPICT(mtot_nota,'999,999.99')
                                        f := 2
                                ENDIF
                                imprt('M','C')
                                IF SUBSTR(m_nota[i,2],1,4) <> 'ICMS'
                                        DEVPOS(PROW()+1,02);DEVOUT(m_nota[i,21])
                                        DEVPOS(PROW(),15);DEVOUT(ALLTRIM(m_nota[i,2])+ALLTRIM(TRANSFORM(m_nota[i,6],'9999.99')))
                                        IF ver_serie() = '141287'
                                                DEVPOS(PROW(),62);DEVOUT('1')
                                        ENDIF
                                        IF m_nota[i,14] = 'S'
                                                DEVPOS(PROW(),65);DEVOUT('04')
                                        ELSE
                                                DEVPOS(PROW(),65);DEVOUT('000')
                                        ENDIF
                                        DEVPOS(PROW(),70);DEVOUT(m_nota[i,8])
                                        DEVPOS(PROW(),75);DEVOUTPICT(m_nota[i,5],'99999.99')
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                        mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
                                        ****************************
                                        DEVPOS(PROW(),85);DEVOUTPICT(mpr_fat,ALLTRIM(m_set[1,98]))
                                        DEVPOS(PROW(),100);DEVOUTPICT(mpr_fat * m_nota[i,5],'999,999.99')
                                        DEVPOS(PROW(),113);DEVOUTPICT(m_nota[i,20],'99')
                                        DEVPOS(PROW(),118);DEVOUTPICT(m_nota[i,24],'99')
                                        DEVPOS(PROW(),123);DEVOUTPICT((mpr_fat * m_nota[i,5])*(m_nota[i,24]/100),'99,999.99')
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
                                        *** PRECO DE FATURA ********
                                        mpr_fat := m_nota[i,7]
                                        //mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(mcod_fat='02',IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))),m_nota[i,7] - (m_nota[i,7] * (mpercent/100))))
*                                       mpr_fat := IF(mcod_fat = '01',m_nota[i,7],IF(! EMPTY(m_nota[i,32]),m_nota[i,32],(m_nota[i,12] * (m_set[1,6]/100+1))))
                                        ****************************
                                        IF mtipo_nota = 'N'
                                                mtot_nota := mtot_nota + iat((mpr_fat * m_nota[i,5]),2)
                                                mtot_icmf := mtot_icmf + iat(m_nota[i,13] * (mpr_fat * m_nota[i,5]),2)
                                                mtot_ipi  := mtot_ipi + (mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)
                                                IF  m_nota[i,20] > 0
                                                                mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,5]),2)
                                                ENDIF
                                                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
                                                mtot_liq := mtot_liq + (m_nota[i,18]*m_nota[i,5])
                                        ENDIF
                                ENDIF
                        NEXT
                        IF mtipo_nota = 'C'
                                DEVPOS(56,10);DEVOUTPICT(cbase_icm,'9,999,999.99')
                                DEVPOS(56,36);DEVOUTPICT(ctot_icm,'9,999,999.99')
                                DEVPOS(56,68);DEVOUTPICT(cbase_icmf,'9,999,999.99')
                                DEVPOS(56,96);DEVOUTPICT(ctot_icmf,'9,999,999.99')
                                DEVPOS(56,122);DEVOUTPICT(ctot_prod,'999,999,999.99')
                                DEVPOS(58,10);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(58,36);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(58,68);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(58,96);DEVOUTPICT(ctot_ipi,'9,999,999.99')
                                DEVPOS(58,122);DEVOUTPICT(ctot_nota,'999,999,999.99')
                        ELSE
                                DEVPOS(56,10);DEVOUTPICT(mbase_icm + mfrete + mseguro + mencargo,'9,999,999.99')
                                DEVPOS(56,36);DEVOUTPICT(mtot_icm,'9,999,999.99')
                                IF mtot_icmf > 0
                                        DEVPOS(56,68);DEVOUTPICT(mbase_icm,'9,999,999.99')
                                        DEVPOS(56,96);DEVOUTPICT(mtot_icmf,'9,999,999.99')
                                ELSE
                                        DEVPOS(56,68);DEVOUTPICT(0,'9,999,999.99')
                                        DEVPOS(56,96);DEVOUTPICT(0,'9,999,999.99')
                                ENDIF
                                IF mtipo_nota = 'C'
                                        DEVPOS(56,122);DEVOUTPICT(mtot_prod,'999,999,999.99')
                                ELSE
                                        DEVPOS(56,122);DEVOUTPICT(mtot_nota,'999,999,999.99')
                                ENDIF
                                DEVPOS(58,10);DEVOUTPICT(mfrete,'9,999,999.99')
                                DEVPOS(58,36);DEVOUTPICT(mseguro,'9,999,999.99')
                                DEVPOS(58,68);DEVOUTPICT(mencargo,'9,999,999.99')
                                DEVPOS(58,96);DEVOUTPICT(mtot_ipi,'9,999,999.99')
                                IF mtipo_nota = 'C'
                                        DEVPOS(58,122);DEVOUTPICT(mtot_nota,'999,999,999.99')
                                ELSE
                                        DEVPOS(58,122);DEVOUTPICT(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi,'999,999,999.99')
                                ENDIF
                        ENDIF
                        DEVPOS(61,10);DEVOUT(mnome_trans)
                        DEVPOS(61,81);DEVOUT(mfrete_trans)
                        DEVPOS(61,88);DEVOUT(mplaca_trans)
                        DEVPOS(61,105);DEVOUT(mpluf_trans)
                        IF mcgccpf = 'CGC'
                                DEVPOS(61,118);DEVOUTPICT(mcgc_trans,'@@R 99.999.999/9999-99')
                        ELSEIF mcgccpf = 'CPF'
                                DEVPOS(61,118);DEVOUTPICT(mcgc_trans,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(61,118);DEVOUT(mcgc_trans)
                        ENDIF
                        DEVPOS(63,10);DEVOUT(mend_trans)
                        DEVPOS(63,73);DEVOUT(mmun_trans)
                        DEVPOS(63,105);DEVOUT(muf_trans)
                        DEVPOS(63,118);DEVOUT(minsc_trans)

                        DEVPOS(65,02);DEVOUTPICT(mtot_quantd,'999,999.99')
                        DEVPOS(65,30);DEVOUT(mesp_trans)
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
                        DEVPOS(PROW()+1,01);DEVOUT(RTRIM(mlin6))
*                       DEVPOS(PROW(),90);DEVOUT(mdata)
                        IF via <> '1'
                                DEVPOS(PROW()+2,90);DEVOUT(mserie+' '+mnum_sel)
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
