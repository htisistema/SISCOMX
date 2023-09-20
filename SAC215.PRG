MEMVAR getlist
*******************************
* ESTORNO CANCELAMENTO NOTA FISCAL
*******************************
FUNCTION sac215
***************
LOCAL MPRG:='SAC215',;
      opcao,mtela2,mtela1,lba,cba,mmerc,mcod_forn,mfabrica,;
      mquantd,mpr_venda,mgrupo,mval_venda,i,micm,mponto,mtipo_comp,mtipo_pag,;
      mnum_ban,mnum_che,ment_sai
MEMVAR nivel_acess,mdata_sis,cod_operado
PRIVATE m_codigo:={},m_desc:={},mtot_nota,mdesconto,mtot_quantd,;
        mtot_peso,m_tp_venda:={},micm_f,tela,mdata_ped,mcom_ven,mvencimento,;
        mnum_dup,mtipo_ped,mfrete,mseguro,mencargo,mpoint,mcod_nota,;
        mcod_cli,mcliente,mcod_merc,mnome_vend,mperc,mcod_op,mcgc,mcpf,mcod_vend,;
        mdocumento,mdata,mnum_ped,muf,minsc,mcod_nat,mnatureza,mtransporte,;
        mnota,mcond_vezes,mcond_intev,mcod_fat,mtp_vend,mtot_desc,m_transp:={},;
        m_point:={},mcgccpf,mvl_vend,m_movnt:={},cons_cli:={}

IF ! ver_nivel(mprg,'ESTORNO CANCELAMENTO DE NOTA FISCAL','13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba = 23
cba = 78
*----------------------------------------------------
////
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
op_tela(00,00,24,79,' Estorno de Cancelamento Nota fiscal ',,1)
WHILE .T.
        exibi_prg(mprg)
        mdocumento := SPACE(8)
        ASIZE(m_codigo,0)
        ASIZE(m_desc,0)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mcom_ven := mtot_nota := mtot_quantd := mtot_peso := mdesconto := ;
        mperc := mcod_cli := mvl_vend := mnum_ped := mfrete := mseguro := ;
        mencargo := micm_f := mfrete := mseguro := mencargo := micm := 0
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mcod_op := '03'
        muf := 'PE'
        mdata := mdata_sis
        mnome_vend := SPACE(30)
        opcao = 'S'
        mcod_vend := VAL(cod_operado)
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mcod_nat := '5.12 '
        mnatureza := 'Vendas dentro do Estado'
        mtransporte := SPACE(15)
        mnota := SPACE(1)
        mcod_fat := SPACE(2)
        mtipo_ped := SPACE(1)
        mdata_ped := mvencimento := CTOD('  /  /  ')
        mnum_dup := SPACE(6)
        i = 1
        mcod_nota := 'N'
        DEVPOS(0,2);DEVOUT('Tp Nota [N]F ou NF[C]:')
        DEVPOS(1,2);DEVOUT('No.da Nota Fiscal....:')
        janela(2,0,'þ DADOS DO CLIENTE ','*','D')
        DEVPOS(3,2);DEVOUT('Codigo:')
        DEVPOS(4,2);DEVOUT('C.P.F.:')
        DEVPOS(4,26);DEVOUT('C.G.C.:')
        janela(5,0,'þ DADOS DA NOTA FISCAL ','*','D')
        DEVPOS(6,29);DEVOUT('Data de Emissao:')
        DEVPOS(7,2);DEVOUT('Cod.Nat.operacao:')
        DEVPOS(8,2);DEVOUT('Pagamento:')
        DEVPOS(9,2);DEVOUT('Frete:')
        DEVPOS(9,23);DEVOUT('Seguro:')
        DEVPOS(9,45);DEVOUT('Disp.Acessoria:')
        mensagem('Preencha os Campos ou <ESC> p/Sair')
        /*
        //c_nota()
        mcod_nota  := totnt->cod_nota
        mdocumento := SUBSTR(totnt->documento,3,6)        //+SPACE(2)
        mdata      := totnt->emissao
        mcod_nat   := totnt->cod_nat
        mcod_cli   := totnt->cod_cli
        ment_sai   := totnt->ent_sai
        //ver_nat(mcod_nat)
        */
        @ 0,25 GET mcod_nota PICT '@!' VALID mcod_nota $ 'NC '
        @ 1,25 GET mdocumento PICT '999999'
        //@ 6,46 GET mdata
        //@ 7,20 GET mcod_nat
        READ
        //DEVPOS(3,10);DEVOUT(STR(mcod_cli))
        IF LASTKEY() = 27
                RELEASE m_codigo:={},m_desc:={},mtot_nota,mdesconto,mtot_quantd,;
                        mtot_peso,m_tp_venda:={},micm_f,mdata_ped,mcom_ven,mvencimento,;
                        mnum_dup,;
                        mobs1,mobs2,mobs3,mobs4,;
                        mobs5,mobs6,mtipo_ped,mfrete,mseguro,mencargo,mpoint,mcod_nota,;
                        mcod_cli,mcliente,mcod_merc,mnome_vend,mperc,mcod_op,mcgc,mcpf,mcod_vend,;
                        mdocumento,mdata,mnum_ped,muf,minsc,mcod_nat,mnatureza,mtransporte,;
                        mnota,mcond_vezes,mcond_intev,mcod_fat,mtp_vend,mtot_desc,m_transp:={},;
                        m_point:={},mcgccpf
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        /*
        IF EMPTY(mdocumento)
                c_nota()
                mdocumento := totnt->documento
        ELSE
                mdocumento := IF(mcod_nota = 'N','NF','CP')+mdocumento
        ENDIF
        */
        mdocumento := IF(mcod_nota = 'N','NF','CP')+mdocumento
        setcor(3)
        DEVPOS(7,26);DEVOUT(mnatureza)
        setcor(1)
        m_movnt:={}
        sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mdocumento),,.t.,@m_movnt)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_movnt) = 0
                atencao('Esta nota de No.: '+mdocumento+' nao se encontra em nossos arquivos')
                LOOP
        ENDIF
        IF m_movnt[1,72] = ' '
                atencao('Esta nota de No.: '+mdocumento+' NAO FOI CANCELADA OK')
                LOOP
        ENDIF
        mperc := 0
        mcod_cli = m_movnt[1,31]
        mcod_op := '03'
        muf := 'PE'
        mcod_vend := m_movnt[1,26]
        mnum_ped := m_movnt[1,8]
*       ver_dup(m_movnt[1,8])
        mfrete := m_movnt[1,47]
        mseguro := m_movnt[1,49]
        mencargo := m_movnt[1,48]
        mtp_vend := m_movnt[1,62]
        mcond_vezes := m_movnt[1,63]
        mcond_intev := m_movnt[1,64]
        micm_f := m_movnt[1,39]
        mcod_nat := m_movnt[1,65]
        mnota := SPACE(1)
        mtipo_ped := 'C'
        i = 1
        micm := 0
        ver_cli(m_movnt[1,31],3,17)
        setcor(3)
        DEVPOS(1,13);DEVOUT(m_movnt[1,8])
        DEVPOS(3,10);DEVOUT(STR(m_movnt[1,31],5)+'-'+mcliente)
        DEVPOS(4,10);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(4,34);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(6,46);DEVOUT(m_movnt[1,17])
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
        i:=0
        FOR i = 1 TO LEN(m_movnt)
                mcod_merc := m_movnt[i,11]
                mmerc := m_movnt[i,12]
                mcod_forn := m_movnt[i,14]
                mfabrica := m_movnt[i,15]
                mquantd := m_movnt[i,19]
                mpr_venda := m_movnt[i,20]
                mval_venda := m_movnt[i,22]
                mdesconto := m_movnt[i,50]
                AADD(m_codigo,VAL(m_movnt[i,11]))
                IF m_movnt[i,60] = 'S'
*                                     1         2             3             4             5             6            7              8          9               10            11          12              13            14     1516       17              18   19       20             21            22
                        AADD(m_desc,{' ',m_movnt[i,12],m_movnt[i,14],m_movnt[i,15],m_movnt[i,19],m_movnt[i,20],m_movnt[i,22],m_movnt[i,16],m_movnt[i,55],m_movnt[i,57],m_movnt[i,50],m_movnt[i,23],m_movnt[i,39],m_movnt[i,60],0,0,m_movnt[i,58],m_movnt[i,56],0,m_movnt[i,38],m_movnt[i,54],m_movnt[i,18]})
                ELSE
*                                       1      2       3      4         5        6         7         8      9      10            11       12       13       14       15      16       17      18        19      20
                        AADD(m_desc,{' ',m_movnt[i,12],m_movnt[i,14],m_movnt[i,15],m_movnt[i,19],m_movnt[i,20],m_movnt[i,22],m_movnt[i,16],m_movnt[i,55],m_movnt[i,57],m_movnt[i,50],m_movnt[i,23],m_movnt[i,39],m_movnt[i,60],0,0,m_movnt[i,58],m_movnt[i,56],0,m_movnt[i,38],m_movnt[i,54],m_movnt[i,18]})
                ENDIF
        NEXT
        mensagem('Pressione qualquer tecla p/continuar - <ESC>p/Sair')
        nota_sdel()
        LOOP
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************
* IMPRIMI NOTA FISCAL
*********************
FUNCTION nota_sdel()
********************
LOCAL mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
      mtot_icmf,mbase_icm,mtot_icm,msaldo_atu,mextenso,lin1,lin2,;
      mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mtot_peso,mtot_liq,m_altera:={},tela2,;
      mpag,mdoc_aux,mtot_aux,mdoc,mtipo_comp,mtipo_pag,mnum_ban,mnum_che
MEMVAR mtot_nota,mtot_desc,mtot_quantd,m_codigo,m_desc,mfrete,mpoint,mencargo,;
       mseguro,mdocumento,mdata,mcod_nota,mcod_nat
PRIVATE mlin

CLEAR GETS
mtela := SAVESCREEN(00,00,50,120)
//mlinha := SAVESCREEN(24,00,24,79)
mtraco := REPLI('=',80)
mlin := 10
WHILE .T.
        mdoc := SPACE(8)
        mtot_icm := 0
        mtipo_comp := SPACE(1)
        mtipo_pag := SPACE(1)
        mtot_nota := mtot_desc := mtot_quantd := mtot_peso := ;
        mtot_liq := mtot_icmf := mtot_aux := i := f := mbase_icm := 0
        lin1 := lin2 := SPACE(60)
        setcor(3)
        botao(10,00,22,79,,' Resumo da Nota Fiscal ')
        setcor(1)
        DEVPOS(12,01);DEVOUT('Cod.')
        DEVPOS(12,08);DEVOUT('Descricao')
        DEVPOS(12,44);DEVOUT('Quantd.')
        DEVPOS(12,53);DEVOUT('Pr.Unit.')
        DEVPOS(12,63);DEVOUT('Valor Total')
        DEVPOS(12,75);DEVOUT('ICM')

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
        DEVPOS(21,02);DEVOUT('Sub Total_:')
        DEVPOS(21,29);DEVOUT('Desc.:')
        DEVPOS(21,51);DEVOUT('Vlr.Total_:')
        setcor(3)
        DEVPOS(21,14);DEVOUTPICT(mtot_nota + mtot_desc + mfrete + mseguro + mencargo,'9,999,999.99')
        DEVPOS(21,36);DEVOUTPICT(mtot_desc,'9,999,999.99')
        DEVPOS(21,63);DEVOUTPICT(mtot_nota,'9,999,999.99')
        setcor(1)

        f := 0
        i := 1
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
                mopcao := op_simnao('N','Confirma o ESTORNO DO CANCELAMENTO da nota:')
                IF LASTKEY() = 27 .OR. mopcao = 'N'
                        RESTSCREEN(01,00,24,79,mtela)
                        RETURN NIL
                ENDIF

                *******************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                *******************
                f := 0
                FOR f = 1 TO LEN(m_codigo)
                        SEEK STRZERO(m_codigo[f],5)
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                        IF m_desc[1,22] = 'S'
                                merc->saldo_fis := merc->saldo_fis - m_desc[f,5]
                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(m_codigo[f],5))+','+; //4
                                                        sr_cdbvalue(m_desc[f,5])+','+; //5
                                                        sr_cdbvalue(merc->saldo_fis)+','+; //6
                                                        sr_cdbvalue(merc->saldo_fis - m_desc[f,5])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC215')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CANCELAMENTO: '+mcod_nota+mdocumento)+','+; //11
                                                        sr_cdbvalue('S')+')',,.f.)
                        ELSE
                                merc->saldo_fis := merc->saldo_fis + m_desc[f,5]
                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                        'processo,ent_sai )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(DATE())+','+; //1
                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(STRZERO(m_codigo[f],5))+','+; //4
                                                        sr_cdbvalue(m_desc[f,5])+','+; //5
                                                        sr_cdbvalue(merc->saldo_fis)+','+; //6
                                                        sr_cdbvalue(merc->saldo_fis = m_desc[f,5])+','+; //7
                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                        sr_cdbvalue('SAC215')+','+; //9
                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                        sr_cdbvalue('CANCELAMENTO: '+mcod_nota+mdocumento)+','+; //11
                                                        sr_cdbvalue('E')+')',,.f.)
                        ENDIF
                        DBUNLOCK()
                NEXT
                DBCOMMITALL()
                mdoc := mdocumento
                //sr_begintransaction()
                //try
                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = '' WHERE documento = " + sr_cdbvalue(mdocumento),,.f.)
                        sr_getconnection():exec("UPDATE sactotnt SET cancel = '' WHERE documento = " + sr_cdbvalue(mdocumento)+' AND emissao = '+sr_cdbvalue(mdata),,.f.)
                        sr_committransaction()
                //catch e
                //        tracelog(valtoprg())
                //        sr_COMMITtransaction()
                //END
                //sr_endtransaction()
                RESTSCREEN(00,00,50,120,mtela)
                RETURN NIL
        ENDDO
ENDDO
RETURN NIL
