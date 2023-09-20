*************************************
* FUNCAO DE AGRUPAMENTO DE PV
*************************************
FUNCTION sac_pv1
****************
LOCAL mprg := 'SAC_PV1',cons_tot := {},m_num:={},cons_ped := {},m_pedido:={},m_ped:={},mtot_ger:=0,p:=0,m_aux:={}

PRIVATE mnum_ped
IF ! ver_nivel(mprg,"AGRUPAMENTO DE PRE-VENDAS (PV)",'135',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(02,10,47,90,'AGRUPAMENTO DE PRE-VENDAS (PV)',,1)
WHILE .T.
        DEVPOS(0,0);DEVOUT('Numero Pre-venda..:                ')
        DEVPOS(1,0);DEVOUT('Codigo do Cliente.:                ')
        DEVPOS(2,0);DEVOUT('Codigo do Vendedor:                ')
        DEVPOS(3,0);DEVOUT('Valor Pre-venda R$:                ')
        @ 4,0 TO 4,90
        DEVPOS(5,0);DEVOUT('PRE-VENDAS SOLICITADOS')
        DEVPOS(6,01);DEVOUT('No.PV   Cliente  Quantd.   Vlr.P.V     Vend')
        @ 7,0 TO 7,90
        @ 42,0 TO 42,90
        DEVPOS(43,0);DEVOUT('Quantidade Pre-venda:')
        DEVPOS(44,0);DEVOUT('Valor Total R$......:')
        mnum_ped := 0
        @ 0,20 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN '0'
        ENDIF
        IF EMPTY(mnum_ped)
                @ 0,20 GET mnum_ped PICT '999999'
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                IF EMPTY(mnum_ped)
                        IF LEN(m_pedido) = 0;atencao('Nao existe PRE-VENDA solicitado');LOOP;ENDIF
                        IF LEN(m_pedido) <= 1;atencao('Nao pode fazer o AGRUPAMENTO so tem UMA PRE-VENDA');LOOP;ENDIF
                        IF op_simnao('S','Confirma a Conclusao do Agrupamento das PRE-VENDAS:') = 'N' .OR. LASTKEY() = 27
                                LOOP
                        ENDIF
                        cancelar_pv(m_aux)
                        p:=0
                        FOR p = 1 TO LEN(m_aux)
                                sr_getconnection():exec("UPDATE sacpv SET ppag = 'C',pdatapag = " + sr_cdbvalue(mdata_sis)+" WHERE pnum_ped = "+sr_cdbvalue(m_num[p]),,.f.)
                        NEXT
                        mensagem('Aguarde um momento Gerando NUMERO para o PRE-VENDA....')
                        lExit := .T.
                        WHILE lExit
                                sr_begintransaction()
                                try
                                aret:={}
                                sr_getconnection():exec( "select numero from sacnopv where sr_recno = 1",,.t.,@aret)
                                mnum_ped = VAL(aret[1,1])+1
                                sr_getconnection():exec("update sacnopv set numero = " + sr_cdbvalue(strzero(VAL(aret[1,1])+1,6)) + ", data_ped = " + sr_cdbvalue( mdata_sis) + " where sr_recno = 1 ",,.f.)
                                sr_committransaction()
                                lExit:=.F.
                                catch e
                                tracelog(valtoprg())
                                sr_COMMITtransaction()
                                aret:={}
                                sr_getconnection():exec("SELECT count(*) FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@aret)
                                IF aret[1,1] > 0
                                        lexit := .T.
                                ENDIF
                        END
                        END
                        mensagem('Foi gerado a PRE-VENDA de No.: '+strzero(mnum_ped,6))
                        mhoras := TIME()
                        i:=0
                        FOR i = 1 TO LEN(m_num)
                                c_ped := {}
                                sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(m_num[i]),,.t.,@c_ped)
                                sr_getconnection():exec('COMMIT',,.f.)
                                y:=0
                                FOR y = 1 TO LEN(c_ped)
                                        aret:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(c_ped[y,6]),,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        mcampo_ped := 'pempresa,'   ;//1
                                                      +'pnum_ped,'  ;//2
                                                      +'ptermina,'  ;//3
                                                      +'pdat_ped,'  ;//4
                                                      +'pgru_sub,'  ;//5
                                                      +'pcod_merc,' ;//6
                                                      +'pmerc,'     ;//7
                                                      +'punidade,'  ;//8
                                                      +'pespecie,'  ;//9
                                                      +'penvelope,' ;//10
                                                      +'ppeso,'     ;//11
                                                      +'ppeso_liq,' ;//12
                                                      +'pgramatura,';//13
                                                      +'pquantd,'   ;//14
                                                      +'ppacote,'   ;//15
                                                      +'ppecas,'    ;//16
                                                      +'ppre_dig,'  ;//17
                                                      +'pdesc,'     ;//18
                                                      +'pvlr_fat,'  ;//19
                                                      +'ppre_venda,';//20
                                                      +'ppr_venda1,';//21
                                                      +'pcust_real,';//22
                                                      +'pcust_merc,';//23
                                                      +'pcod_cli,'  ;//24
                                                      +'pcgc,'      ;//25
                                                      +'pcpf,'      ;//26
                                                      +'pplaca,'    ;//27
                                                      +'pcarro,'    ;//28
                                                      +'pmodelo,'   ;//29
                                                      +'pkm,'       ;//30
                                                      +'pcod_fab,'  ;//31
                                                      +'pfabrica,'  ;//32
                                                      +'pcod_oper,' ;//33
                                                      +'pcomi_oper,';//34
                                                      +'pcod_vend,' ;//35
                                                      +'pvendedor,' ;//36
                                                      +'palimento ,';//37
                                                      +'pcod_fin  ,';//38
                                                      +'pcod_tab  ,';//39
                                                      +'pvlr_pres ,';//40
                                                      +'pcond_veze,';//41
                                                      +'pcond_inte,';//42
                                                      +'phora     ,';//43
                                                      +'ptp_vend  ,';//44
                                                      +'pvlr_ent  ,';//45
                                                      +'pisento   ,';//46
                                                      +'ppromocao ,';//47
                                                      +'pmontador ,';//48
                                                      +'pmontador1,';//49
                                                      +'pcomissao ,';//50
                                                      +'pcom_mont ,';//51
                                                      +'pprazo    ,';//52
                                                      +'pbebida   ,';//53
                                                      +'pipi      ,';//54
                                                      +'pobs_prod ,';//55
                                                      +'pind_icms ,';//56
                                                      +'pstat_item,';//57
                                                      +'psit_trib ,';//58
                                                      +'pobs1,'     ;//59
                                                      +'pobs2,'     ;//60
                                                      +'pobs3,'     ;//61
                                                      +'pobs4,'     ;//62
                                                      +'plocal,'    ;//63
                                                      +'chassis,'   ;//64
                                                      +'descri1,'   ;//65
                                                      +'descri2,'   ;//66
                                                      +'descri3,'   ;//67
                                                      +'descri4,'   ;//68
                                                      +'descri5,'   ;//69
                                                      +'pproducao,' ;//70
                                                      +'pcod_tran,' ;//71
                                                      +'pos,'       ;//72
                                                      +'data_so,'       ;//72
                                                      +'cod_pres'    //72
                                        cComm  := 'INSERT INTO sacpv ('+mcampo_ped+',sr_deleted) VALUES ('
                                        cComm  := ccomm + sr_cdbvalue('001')+','+; //1
                                        sr_cdbvalue(STRZERO(mnum_ped,6)     )+','+;//2
                                        sr_cdbvalue(LEFT(NETNAME(),10)      )+','+;//3
                                        sr_cdbvalue(mdata_sis               )+','+;//4
                                        sr_cdbvalue(aret[1,7]               )+','+;//5
                                        sr_cdbvalue(c_ped[y,6]            )+','+;//6
                                        sr_cdbvalue(c_ped[y,7]            )+','+;//7
                                        sr_cdbvalue(aret[1,14]              )+','+;//8
                                        sr_cdbvalue(aret[1,15]              )+','+;//9
                                        sr_cdbvalue(IF(! EMPTY(c_ped[y,26]),c_ped[y,26],c_ped[y,10]))+','+;//10
                                        sr_cdbvalue(aret[1,17]              )+','+;//11
                                        sr_cdbvalue(aret[1,16]              )+','+;//12
                                        sr_cdbvalue(aret[1,74]              )+','+;//13
                                        sr_cdbvalue(c_ped[y,14]           )+','+;//14
                                        sr_cdbvalue(c_ped[y,15]           )+','+;//15
                                        sr_cdbvalue(c_ped[y,16]           )+','+;//16
                                        sr_cdbvalue(c_ped[y,17]           )+','+;//17
                                        sr_cdbvalue(c_ped[y,39]           )+','+;//18
                                        sr_cdbvalue(c_ped[y,18]           )+','+;//19
                                        sr_cdbvalue(c_ped[y,20]           )+','+;//20
                                        sr_cdbvalue(aret[1,47]              )+','+;//21
                                        sr_cdbvalue(aret[1,45]              )+','+;//22
                                        sr_cdbvalue(aret[1,44]              )+','+;//23
                                        sr_cdbvalue(c_ped[y,23]           )+','+;//24
                                        sr_cdbvalue(c_ped[y,24]           )+','+;//25
                                        sr_cdbvalue(c_ped[y,25]           )+','+;//26
                                        sr_cdbvalue(c_ped[y,26]           )+','+;//27
                                        sr_cdbvalue(c_ped[y,27]           )+','+;//28
                                        sr_cdbvalue(c_ped[y,28]           )+','+;//29
                                        sr_cdbvalue(c_ped[y,29]           )+','+;//30
                                        sr_cdbvalue(aret[1,30]              )+','+;//31
                                        sr_cdbvalue(LEFT(aret[1,31],30)     )+','+;//32
                                        sr_cdbvalue(cod_operado             )+','+;//33
                                        sr_cdbvalue(c_ped[y,35]           )+','+;//34
                                        sr_cdbvalue(c_ped[y,32]           )+','+;//35
                                        sr_cdbvalue(c_ped[y,33]           )+','+;//36
                                        sr_cdbvalue(aret[1,21]              )+','+;//37
                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//38
                                        sr_cdbvalue(STRZERO(0,3)            )+','+;//39
                                        sr_cdbvalue(0                       )+','+;//40
                                        sr_cdbvalue(0                       )+','+;//41
                                        sr_cdbvalue(' '                     )+','+;//42
                                        sr_cdbvalue(mhoras                  )+','+;//43
                                        sr_cdbvalue(c_ped[y,45]           )+','+;//44
                                        sr_cdbvalue(0                       )+','+;//45
                                        sr_cdbvalue(aret[1,61]              )+','+;//46
                                        sr_cdbvalue(aret[1,23]              )+','+;//47
                                        sr_cdbvalue(c_ped[y,36]           )+','+;//48
                                        sr_cdbvalue(c_ped[y,38]           )+','+;//49
                                        sr_cdbvalue(c_ped[y,53]           )+','+;//50
                                        sr_cdbvalue(aret[1,27]              )+','+;//51
                                        sr_cdbvalue(aret[1,75]              )+','+;//52
                                        sr_cdbvalue(aret[1,62]              )+','+;//53
                                        sr_cdbvalue(aret[1,65]              )+','+;//54
                                        sr_cdbvalue(c_ped[y,58]           )+','+;//55
                                        sr_cdbvalue(aret[1,82]              )+','+;//56
                                        sr_cdbvalue(' '                     )+','+;//57
                                        sr_cdbvalue(aret[1,83]              )+','+;//58
                                        sr_cdbvalue(c_ped[y,86]           )+','+;//59
                                        sr_cdbvalue(c_ped[y,87]           )+','+;//60
                                        sr_cdbvalue(c_ped[y,88]           )+','+;//61
                                        sr_cdbvalue(c_ped[y,89]           )+','+;//62
                                        sr_cdbvalue(SUBSTR(aret[1,73],1,2)  )+','+;//63
                                        sr_cdbvalue(c_ped[y,80]           )+','+;//64
                                        sr_cdbvalue(c_ped[y,81]           )+','+;//65
                                        sr_cdbvalue(c_ped[y,82]           )+','+;//66
                                        sr_cdbvalue(c_ped[y,83]           )+','+;//67
                                        sr_cdbvalue(c_ped[y,84]           )+','+;//68
                                        sr_cdbvalue(c_ped[y,85]           )+','+;//69
                                        sr_cdbvalue(c_ped[y,93]           )+','+;//70
                                        sr_cdbvalue(' ')+','+;//71
                                        sr_cdbvalue('000000')+','+;//72
                                        sr_cdbvalue(DATE())+','+;//73
                                        sr_cdbvalue('00000')+','+;//74
                                        sr_cdbvalue(' ')+')'
                                        sr_getconnection():exec(ccomm,,.f.)
                                NEXT
                        NEXT
                        sr_getconnection():exec("COMMIT",,.f.)
                        i := 0
                        m_pedido := {}
                        m_num := {}
                        m_ped := {}
                        m_aux := {}
                        wvw_lclosewindow()
                        RETURN STRZERO(mnum_ped,6)
                        //LOOP
                ENDIF
        ENDIF
        IF ASCAN(m_num,STRZERO(mnum_ped,6)) > 0
                atencao('Este PRE-VENDA ja foi solicitado OK !!!')
                LOOP
        ENDIF
        cons_ped := {}
        sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('PRE-VENDA nao encontrado no Arquivo')
                LOOP
        ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este PRE-VENDA foi CANCELADO !!!')
                LOOP
        ELSEIF ! EMPTY(cons_ped[1,49])
                atencao('Este PRE-VENDA ja foi  P A G O !!!')
                LOOP
        ENDIF
        cons_tot := {}
        sr_getconnection():exec("SELECT ppag,sum(pvlr_fat*pquantd),sum(pquantd) FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" GROUP BY ppag",,.t.,@cons_tot)
        sr_getconnection():exec('COMMIT',,.f.)
        setcor(3)
        DEVPOS(1,20);DEVOUT(cons_ped[1,23])
        DEVPOS(2,20);DEVOUT(cons_ped[1,32])
        DEVPOS(3,20);DEVOUT(TRANSFORM(cons_tot[1,2],'999,999,999.99'))
        setcor(1)
        IF op_simnao('S','Confirma a Inclusao da PRE-VENDA:') = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        AADD(m_num,cons_ped[1,2])
        AADD(m_aux,{cons_ped[1,2],cons_ped[1,6]})
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                AADD(m_pedido,{cons_ped[i,2],cons_ped[i,6],cons_ped[i,7],cons_ped[i,8],cons_ped[i,11],;
                     cons_ped[i,14],cons_ped[i,18],cons_ped[i,23],cons_ped[i,32],cons_ped[i,33]})
        NEXT
        AADD(m_ped,STRZERO(mnum_ped,6)+'  '+cons_ped[1,23]+'  '+TRANSFORM(cons_tot[1,3],'99,999.99')+'   '+TRANSFORM(cons_tot[1,2],'999,999.99')+'   '+cons_ped[1,32])
        mtot_ger := mtot_ger + cons_tot[1,2]
        SETCOR(3)
        i:=0
        FOR i = 1 TO LEN(m_ped)
                IF i = 20;SCROLL(7+i,1,41,80,1);ENDIF
                DEVPOS(7+i,01);DEVOUT(m_ped[i])
        NEXT
        DEVPOS(43,23);DEVOUT(TRANSFORM(LEN(m_num),'999,999'))
        DEVPOS(44,23);DEVOUT(TRANSFORM(mtot_ger,'999,999,999.99'))
        SETCOR(1)
ENDDO
RETURN NIL        
