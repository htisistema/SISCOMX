MEMVAR getlist
*******************************
* CANCELAMENTO NOTA FISCAL
*******************************
FUNCTION sac213(melet)
***************
LOCAL MPRG:='SAC213',mtitulo:='CANCELAMENTO DE NOTA FISCAL',;
      opcao,mtela2,mtela1,lba,cba,mmerc,mcod_forn,mfabrica,;
      mquantd,mpr_venda,mgrupo,mval_venda,i,micm,mponto,mtipo_comp,mtipo_pag,;
      mnum_ban,mnum_che
MEMVAR nivel_acess,mdata_sis,cod_operado
PRIVATE m_codigo:={},m_desc:={},mtot_nota,mdesconto,mtot_quantd,;
        mtot_peso,m_tp_venda:={},micm_f,tela,mdata_ped,mcom_ven,mvencimento,;
        mnum_dup,mtipo_ped,mfrete,mseguro,mencargo,mpoint,mcod_nota,;
        mcod_cli,mcliente,mcod_merc,mnome_vend,mperc,mcod_op,mcgc,mcpf,mcod_vend,;
        mdocumento,mdata,mnum_ped,muf,minsc,mcod_nat,mnatureza,mtransporte,;
        mnota,mcond_vezes,mcond_intev,mcod_fat,mtp_vend,mtot_desc,m_transp:={},;
        m_point:={},mcgccpf,mvl_vend,ment_sai,marq_sai,cons_cli:={}

IF ! ver_nivel(mprg,mtitulo,'13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
marq_sai := "C:\ACBrMonitorplus\SAINFE.TXT"
lba = 23
cba = 79
*----------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('SACNOTA','NOTA');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
IF ! AbriArq('SACTOTNT','TOTNT');RETURN NIL;ENDIF
IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
IF ! AbriArq('SACOP','OP');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
*---------------------------------------------
op_tela(05,01,29,90,mtitulo,,1)

WHILE .T.
        exibi_prg(mprg)
        mdocumento := SPACE(8)
        ASIZE(m_codigo,0)
        ASIZE(m_desc,0)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mcom_ven := mtot_nota := mtot_quantd := mtot_peso := mdesconto := ;
        mperc := mcod_cli := mnum_ped := mfrete := mseguro := mencargo := ;
        mvl_vend := micm_f := mfrete := mseguro := mencargo := 0
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mcod_op := '03'
        muf := 'PE'
        mdata := mdata_sis
        mnome_vend := SPACE(30)
        opcao = 'S'
        mcod_vend := VAL(cod_operado)
        mtp_vend := mcond_vezes := mcond_intev := mcod_nota := SPACE(2)
        mcod_nat := '5.12 '
        mnatureza := 'Vendas dentro do Estado'
        mtransporte := SPACE(15)
        mnota := SPACE(1)
        mcod_fat := SPACE(2)
        mdata_ped := mvencimento := CTOD('  /  /  ')
        mtipo_ped := SPACE(1)
        mnum_dup := SPACE(6)
        i = 1
        micm := 0

        DEVPOS(0,2);DEVOUT('Tipo Nota NFe-[NF] ou NFCe-[CP].:')
        DEVPOS(1,2);DEVOUT('Numero do Documento.............:')
        janela(2,0,'� DADOS DO CLIENTE ','*','D')
        DEVPOS(3,2);DEVOUT('Codigo:')
        DEVPOS(4,2);DEVOUT('C.P.F.:')
        DEVPOS(4,26);DEVOUT('CNPJ..:')
        janela(5,0,'� DADOS DA NOTA FISCAL ','*','D')
        DEVPOS(6,2);DEVOUT('No.da Nota Fiscal:')
        DEVPOS(6,29);DEVOUT('Data de Emissao:')
        DEVPOS(7,2);DEVOUT('Cod.Nat.operacao:')
        DEVPOS(8,2);DEVOUT('Pagamento:')
        DEVPOS(9,2);DEVOUT('Frete:')
        DEVPOS(9,23);DEVOUT('Seguro:')
        DEVPOS(9,45);DEVOUT('Disp.Acessoria:')

        mensagem('Preencha os Campos ou <ESC> p/Sair')
        /*
        c_nota()        //CHECA NO ARQ.SACTOTNT

        mcod_nota  := totnt->cod_nota
        mdocumento := totnt->documento+SPACE(2)
        mdata      := totnt->emissao
        mcod_nat   := totnt->cod_nat
        mcod_cli   := VAL(totnt->cod_cli)
        ment_sai   := totnt->ent_sai
        ver_nat(mcod_nat)
        */
        @ 0,36 GET mcod_nota PICT '@!' VALID mcod_nota $ 'NF,CP'
        @ 1,36 GET mdocumento PICT '999999'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                EXIT
        ENDIF                    
        mdocumento := mcod_nota+mdocumento
        mcons_mov:={}
        //sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue('NF'+mdocumento)+' AND ent_sai = '+sr_cdbvalue(ment_sai)+' AND cod_cli = '+sr_cdbvalue(mcod_cli)+' AND cod_nat = '+sr_cdbvalue(mcod_nat),,.t.,@mcons_mov)
        //sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mdocumento)+" AND NOT cancel = 'C'",,.t.,@mcons_mov)
        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mdocumento),,.t.,@mcons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_mov) = 0
                atencao('Esta nota nao se encontra em nossos arquivos....')
                LOOP
        ENDIF
        IF mcons_mov[1,72] = 'C'
                atencao('Esta nota ja foi cancelada OK')
                mopcao := op_simnao('N','Esta nota ja foi CANCELA Deseja continuar:')
                IF mopcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        mpoint := RECNO()
        mperc := 0
        mcod_op := '03'
        muf := 'PE'
        mcod_vend := mcons_mov[1,26]
        mnum_ped := mcons_mov[1,8]
*       ver_dup(mcons_mov[1,8])
        mfrete := mcons_mov[1,47]
        mseguro := mcons_mov[1,49]
        mencargo := mcons_mov[1,48]
        mtp_vend := mcons_mov[1,62]
        mcond_vezes := mcons_mov[1,63]
        mcond_intev := mcons_mov[1,64]
        micm_f := mcons_mov[1,39]
        mcod_nat := mcons_mov[1,65]
        mnota := SPACE(1)
        mtipo_ped := 'C'
        i = 1
        micm := 0
        ver_cli(mcons_mov[1,31],3,17)
        setcor(3)
        DEVPOS(1,13);DEVOUT(mcons_mov[1,8])
        DEVPOS(3,10);DEVOUT(STR(mcons_mov[1,31],5)+'-'+mcliente)
        DEVPOS(4,10);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(4,34);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(6,46);DEVOUT(mcons_mov[1,17])
        DEVPOS(7,26);DEVOUT(mnatureza)
        DEVPOS(8,12);DEVOUT(mtp_vend)
        setcor(1)
        IF mtp_vend = 'AP'
                DEVPOS(8,15);DEVOUT('Qt.Vezes:')
                DEVPOS(8,28);DEVOUT('Intervalo:')
                DEVPOS(8,42);DEVOUT('Venc.:')
                DEVPOS(8,58);DEVOUT('No.Dup.:')
                setcor(3)
                DEVPOS(8,24);DEVOUTPICT(mcond_vezes,'@@R 9-9')
                DEVPOS(8,39);DEVOUT(mcond_intev)
                DEVPOS(8,48);DEVOUT(mvencimento)
                DEVPOS(8,66);DEVOUT(mnum_dup)
                setcor(1)
        ENDIF
        setcor(3)
        DEVPOS(09,8);DEVOUTPICT(mfrete,'99,999,999.99')
        DEVPOS(09,30);DEVOUTPICT(mseguro,'99,999,999.99')
        DEVPOS(09,60);DEVOUTPICT(mencargo,'99,999,999.99')
        setcor(1)
        FOR i = 1 TO LEN(mcons_mov)
                mcod_merc := mcons_mov[i,11]
                mmerc := mcons_mov[i,12]
                mcod_forn := mcons_mov[i,14]
                mfabrica := mcons_mov[i,15]
                mquantd := mcons_mov[i,19]
                mpr_venda := mcons_mov[i,20]
                mval_venda := mcons_mov[i,22]
                mdesconto := mcons_mov[i,50]
                AADD(m_codigo,VAL(mcons_mov[i,11]))
                IF mcons_mov[i,60] = 'S'
*                                     1           2           3              4              5              6               7               8              9                   10             11             12                  13           14         1516     17              18         19      20               21              22
                        AADD(m_desc,{' ',mcons_mov[i,12],mcons_mov[i,14],mcons_mov[i,15],mcons_mov[i,19],mcons_mov[i,20],mcons_mov[i,22],mcons_mov[i,16],mcons_mov[i,55],mcons_mov[i,57],mcons_mov[i,50],mcons_mov[i,23],mcons_mov[i,39],mcons_mov[i,60],0,0,mcons_mov[i,58],mcons_mov[i,56],0,mcons_mov[i,38],mcons_mov[i,54],mcons_mov[i,18]})
                ELSE
*                                       1      2       3      4         5        6         7         8      9      10            11       12       13       14       15      16       17      18        19      20
                        AADD(m_desc,{' ',mcons_mov[i,12],mcons_mov[i,14],mcons_mov[i,15],mcons_mov[i,19],mcons_mov[i,20],mcons_mov[i,22],mcons_mov[i,16],mcons_mov[i,55],mcons_mov[i,57],mcons_mov[i,50],mcons_mov[i,23],mcons_mov[i,39],mcons_mov[i,60],0,0,mcons_mov[i,58],mcons_mov[i,56],0,mcons_mov[i,38],mcons_mov[i,54],mcons_mov[i,18]})
                ENDIF
                SKIP
        NEXT
        mensagem('Pressione qualquer tecla p/continuar - <ESC>p/Sair')
        nota_del()
        LOOP
ENDDO
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************
* IMPRIMI NOTA FISCAL
***************************
FUNCTION nota_del(melet)
*********************
LOCAL mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
      mtot_icmf,mbase_icm,mtot_icm,msaldo_atu,mextenso,lin1,lin2,;
      mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mtot_peso,mtot_liq,m_altera:={},tela2,;
      mpag,mdoc_aux,mtot_aux,mdoc,mtipo_comp,mtipo_pag,mnum_ban,mnum_che,mmotivo:=SPACE(20)
MEMVAR mtot_nota,mtot_desc,mtot_quantd,m_codigo,m_desc,mfrete,mpoint,mencargo,;
       mseguro,mdocumento,mdata,mcod_nota,mcod_nat
PRIVATE mlin

CLEAR GETS
mtela := SAVESCREEN(00,00,24,79)
mlinha := SAVESCREEN(24,00,24,79)
mtraco := REPLI('=',80)
mlin := 10
WHILE .T.
        mdoc := SPACE(8)
        mtipo_comp := mtipo_pag := SPACE(1)
        mtot_icm := mtot_nota := mtot_desc := mtot_quantd := mtot_peso :=;
        mtot_liq := mtot_icmf := mtot_aux := i := f := mbase_icm := 0
        lin1 := lin2 := SPACE(60)
        setcor(3)
        botao(10,00,22,79,,' Resumo da Nota Fiscal ')
        setcor(1)
        DEVPOS(11,01);DEVOUT('Cod.')
        DEVPOS(11,08);DEVOUT('Descricao')
        DEVPOS(11,44);DEVOUT('Quantd.')
        DEVPOS(11,53);DEVOUT('Pr.Unit.')
        DEVPOS(11,63);DEVOUT('Valor Total')
        DEVPOS(11,75);DEVOUT('ICM')
        DEVPOS(12,00);DEVOUT(REPLI('-',12))
        FOR f = 1 TO LEN(m_codigo)
                AADD(m_altera,STRZERO(m_codigo[f],5)+' '+m_desc[f,2]+' '+TRANSFORM(m_desc[f,20],'99.99'))
                mtot_aux := mtot_aux + (m_desc[f,7] * m_desc[f,5])
                mtot_nota := mtot_nota + (m_desc[f,7] * m_desc[f,5])
                mtot_desc := mtot_desc + (m_desc[f,7] * m_desc[f,5])*(m_desc[f,11]/100)
                mtot_quantd := mtot_quantd + m_desc[f,5]
                mtot_peso := mtot_peso + (m_desc[f,9] * m_desc[f,5])
                mtot_icmf := mtot_icmf + m_desc[f,13]
                IF m_desc[f,14] = 'N' .AND. m_desc[f,20] > 0
                        mbase_icm = mbase_icm + (m_desc[f,7] * m_desc[f,5])
                ENDIF
        NEXT
        DEVPOS(21,02);DEVOUT('Sub Total.:')
        DEVPOS(21,29);DEVOUT('Desc.:')
        DEVPOS(21,51);DEVOUT('Vlr.Total.:')
        setcor(3)
        DEVPOS(21,14);DEVOUTPICT(mtot_nota + mtot_desc + mfrete + mseguro + mencargo,'9,999,999.99')
        DEVPOS(21,36);DEVOUTPICT(mtot_desc,'9,999,999.99')
        DEVPOS(21,63);DEVOUTPICT(mtot_nota,'9,999,999.99')
        setcor(1)
        pode=.T.
        WHILE .T.
                i := 1
                f := 0
                FOR f=1 TO 06
                        IF i <= LEN(m_codigo)
                                WHILE m_codigo[i] == 0 .AND. i > LEN(m_codigo)
                                        i ++
                                ENDDO
                                IF i > LEN(m_codigo)
                                       setcor(3)
                                        DEVPOS(13+f,01);DEVOUT(SPACE(5))
                                        DEVPOS(13+f,07);DEVOUT(SPACE(35))
                                        DEVPOS(13+f,43);DEVOUT(SPACE(8))
                                        DEVPOS(13+f,52);DEVOUT(SPACE(10))
                                        DEVPOS(13+f,63);DEVOUT(SPACE(10))
                                        DEVPOS(13+f,74);DEVOUT(SPACE(5))
                                        setcor(1)
                                ENDIF
                                setcor(3)
                                DEVPOS(13+f,01);DEVOUT(STRZERO(m_codigo[i],5))
                                DEVPOS(13+f,07);DEVOUT(LEFT(m_desc[i,2],35))
                                DEVPOS(13+f,43);DEVOUTPICT(m_desc[i,5],'99999.99')
                                DEVPOS(13+f,52);DEVOUTPICT(m_desc[i,7],'9999999.99')
                                DEVPOS(13+f,63);DEVOUTPICT(m_desc[i,7] * m_desc[i,5],'9999999.99')
                                DEVPOS(13+f,74);DEVOUTPICT(m_desc[i,20],'99.99')
                                setcor(1)
                                i ++
                        ELSE
                                setcor(3)
                                DEVPOS(13+f,01);DEVOUT(SPACE(5))
                                DEVPOS(13+f,07);DEVOUT(SPACE(35))
                                DEVPOS(13+f,43);DEVOUT(SPACE(8))
                                DEVPOS(13+f,52);DEVOUT(SPACE(10))
                                DEVPOS(13+f,63);DEVOUT(SPACE(10))
                                DEVPOS(13+f,74);DEVOUT(SPACE(5))
                                setcor(1)
                        ENDIF
                NEXT F
                op_tela(40,30,41,65,'MOTIVO DO CANCELAMENTO',,1)
                @ 00,01 GET mmotivo PICT '@!' VALID IF(EMPTY(mmotivo),.F.,.T.)
                READ
                wvw_lclosewindow()
                mopcao := op_simnao('N','Confirma o CANCELAMENTO da nota:')
                IF LASTKEY() = 27 .OR. mopcao = 'N'
                        RESTSCREEN(00,00,24,79,mtela)
                        RETURN NIL
                ENDIF
                f := 0
                FOR f = 1 TO LEN(m_codigo)
                        aret:={}
                        sr_getconnection():exec("SELECT saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[f],5)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF m_desc[f,22] = 'S'
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis  = "+sr_cdbvalue(aret[1,1] + m_desc[f,5])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[f],5)),,.f.)
                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(m_codigo[f],5))+','+; //4
                                                        sr_cdbvalue(m_desc[f,5])+','+; //5
                                                        sr_cdbvalue(aret[1,1])+','+; //6
                                                        sr_cdbvalue(aret[1,1] + m_desc[f,5])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC213')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CANCELAMENTO: '+mcod_nota+mdocumento)+','+; //11
                                                        sr_cdbvalue('E')+')',,.f.)
                        ELSE
                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis  = "+sr_cdbvalue(aret[1,1] - m_desc[f,5])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[f],5)),,.f.)
                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(m_codigo[f],5))+','+; //4
                                                        sr_cdbvalue(m_desc[f,5])+','+; //5
                                                        sr_cdbvalue(aret[1,1])+','+; //6
                                                        sr_cdbvalue(aret[1,1] + m_desc[f,5])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC213')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CANCELAMENTO: '+mcod_nota+mdocumento)+','+; //11
                                                        sr_cdbvalue('S')+')',,.f.)
                        ENDIF
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)
                sr_getconnection():exec("UPDATE sacmovnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                sr_getconnection():exec("UPDATE sactotnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mdocumento),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                //atencao("SELECT vl_icm,ipi,chnfe FROM sactotnt WHERE  documento = "+sr_cdbvalue('NF'+mdocumento)+' AND ent_sai = '+sr_cdbvalue(ment_sai)+' AND cod_cli = '+sr_cdbvalue(mcod_cli))
                mcons_tot:={}
                sr_getconnection():exec("SELECT camnfe,data_s_e,serie,modelo FROM sacmovnt WHERE documento = "+sr_cdbvalue(mdocumento),,.t.,@mcons_tot)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_tot) > 0
                        IF ! EMPTY(mcons_tot[1,1])
                                ***INICIA O ACBRMONITOR***

                                IF ! inicia_acbr(1)
                                        RETURN NIL
                                ENDIF
                                mretorno := IBR_comando('NFe.CancelarNFe('+mcons_tot[1,1]+','+mmotivo+','+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+')',,3,,1)
                                atencao(mretorno)
                                mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+','+mmotivo+','+SUBSTR(DTOC(mcons_tot[1,2]),7)+','+mcons_tot[1,4]+','+mcons_tot[1,3]+','+STR(VAL(SUBSTR(mdocumento,3)))+','+STR(VAL(SUBSTR(mdocumento,3)))+')',,3,,1)
                                IF ! EMPTY(mretorno)
                                        atencao(mretorno)
                                        sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                        'JUSTIFICATIVA,'+;//1
                                        'ANO          ,'+;//2
                                        'MODELO       ,'+;//3
                                        'SERIE        ,'+;//4
                                        'NUMERO       ,'+;//4
                                        'CAMINHO      )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mmotivo)+','+; //1
                                        sr_cdbvalue(SUBSTR(DTOC(mcons_tot[1,2]),7))+','+; //2
                                        sr_cdbvalue(mcons_tot[1,4])+','+; //3
                                        sr_cdbvalue(mcons_tot[1,3])+','+; //4
                                        sr_cdbvalue(mdocumento)+','+;
                                        sr_cdbvalue(mcons_tot[1,1])+')',,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                ELSE
                                        atencao(mretorno)
                                ENDIF
                                */
                        ENDIF
                ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                RESTSCREEN(00,00,24,79,mtela)
                RETURN NIL
        ENDDO
ENDDO
RETURN NIL
