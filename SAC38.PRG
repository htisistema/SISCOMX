*****************************
* ESTORNO DE RECEBIMENTOS
*****************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado
FUNCTION sac38(mtip)
**************
LOCAL MPRG:='SAC38',mtitulo,;
      lba,cba,opcao,tela38,mtot_ped,mtipo_comp,mpoint,;
      mdoc:={},i,mmotivo,mnota,mdocumento,mvalor,mdata,mpedente:=' ',;
      m_ver:={},mdupr:={},mv_dupr:={},mdetalhe:=' ',mlocal,m_dupr:={},m_dupr1:={}
local nErr, nPos,;
        nCnn,oSql,;
        cComm, apCode,aret

PRIVATE mnome_vend:=SPACE(30),mcom_ven:=0,mcliente:=SPACE(30),mcpf:=SPACE(11),;
        mcgc:= SPACE(14),mcod_cli:=0,mcod_vend:='   ',mnome_ven:='',;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mnum_pedp:=0,;
        m_mat:={},m_cod:={},m_cbar:={},ali:='ped_s',;
        m_matriz:={},m_codigo:={},m_cbarra:={},m_alt:={},;
        mobs1,mobs2,mobs3,mobs4,mobs5,mprz:=0,mtp_venda,mnum_os:=0,mcond_veze:='01 ',;
        mcond_int:=0,mcod_cond:=0,m_dia[15],m_vlr[15],no:='noped',mplaca:=' ',;
        mcarro,mmodelo,mkm,mtelemark,mcom_oper,mproducao,mcod_tran,;
        mhoras,tela_ant,cons_cli:={}

lba := 42
cba := 79
*----------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
//
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------
IF mtip = NIL
        mtitulo := 'ESTORNO DE RECEBIMENTO'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(0,0,lba,cba,mtitulo,,1)

ELSE
        mtitulo := 'CONSULTA DE RECEBIMENTO'
        IF ! ver_nivel(mprg+mtip,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(0,0,lba,cba,mtitulo,,1)
ENDIF
WHILE .T.
        limpa(0,0,lba,cba)
        mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=SPACE(39)
        mtipo_imp := m_indiv[1,18]
        mhoras := TIME()
        exibi_prg(mprg)
        mdoc := {}
        m_ver:= {}
        mdupr:= {}
        mv_dupr:= {}
        m_mat:= {}
        m_cod:= {}
        m_cbar:= {}
        m_matriz:={}
        m_codigo:= {}
        m_cbarra:= {}
        i:=0
        FOR i = 1 TO 15
                m_dia[i]:=m_vlr[i]:=0
        NEXT
        i := mtot_ped := mnum_pedp := 0
        opcao := 'N'
        mmotivo := SPACE(30)
        mensagem('Digite o numero do pedido que deseja ESTORNAR - <ESC> Retornar')
        DEVPOS(1,1);DEVOUT('Digite o No.do pedido:')
        DEVPOS(1,33);DEVOUT('Data do Recebimento:')
        DEVPOS(2,1);DEVOUT('Cliente :')
        DEVPOS(3,1);DEVOUT('Vend:')
        DEVPOS(3,42);DEVOUT('Oper:')
        DEVPOS(4,1);DEVOUT('Motivo:')
*       DEVPOS(2,1);DEVOUT(PADC('Modo de pagamento',cba-cci-1))
        @ 5,1 TO 5,cba-1
        @ 1,24 GET mnum_pedp PICT '999999' VALID IF(EMPTY(mnum_pedp),.F.,.T.)
        READ
        IF LASTKEY() = 27
                RELEASE mnome_vend:=SPACE(30),mcom_ven:=0,mcliente:=SPACE(30),mcpf:=SPACE(11),;
                        mcgc:= SPACE(14)
                EXIT
        ENDIF
        mpedente := ' '
        aret := {}
        sr_getconnection():exec("SELECT * FROM saccaixa WHERE nota = "+sr_cdbvalue('PD'+STRZERO(mnum_pedp,6)),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                IF mtip # NIL
                        atencao('Este Pedido estar em ABERTO...')
                        cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        sr_getconnection():exec("UPDATE sacped_s SET ppag = NULL,pdatapag = NULL WHERE pnum_ped = "+ sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'PEDIDO',obs_pc = 'EM ANDAMENTO' WHERE codigo = "+sr_cdbvalue(VAL(cons_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(cons_ped[1,32]),,.f.)

                        sr_getconnection():exec("COMMIT",,.f.)
                        LOOP
                ENDIF

                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) > 0
                        setcor(3)
                        DEVPOS(2,11);DEVOUT(STR(cons_ped[1,23],5)+' - ')
                        DEVPOS(3,6);DEVOUT(cons_ped[1,32])
                        DEVPOS(3,47);DEVOUT(cons_ped[1,34])
                        ver_cli(cons_ped[1,23],2,19)
                        ven(VAL(cons_ped[1,32]),3,10)
                        ven(VAL(cons_ped[1,34]),3,51)
                        DEVPOS(5,1);DEVOUT(' ')
                        opcao := op_simnao('N','Deseja Estornar o Pedido [S/n]:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                LOOP
                        ENDIF
                        mensagem('Estornando os registro do SACPED_S')
                        cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        sr_getconnection():exec("UPDATE sacped_s SET ppag = NULL,pdatapag = NULL WHERE pnum_ped = "+ sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("DELETE FROM sacdupr WHERE SR_DELETED = 'T' OR num_ped = "+ sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("UPDATE sacoss SET pag = NULL,baixa=NULL,num_ped=NULL WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'PEDIDO',obs_pc = 'EM ANDAMENTO' WHERE codigo = "+sr_cdbvalue(VAL(cons_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(cons_ped[1,32]),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        EXIT
                ELSE
                        atencao('Pedido nao foi encontrado ou esta pedente !!!')
                        LOOP
                ENDIF
        ELSE
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) > 0
                        IF EMPTY(cons_ped[1,49]) .OR. EMPTY(cons_ped[1,50])
                                atencao('Este Pedido nao pode ser Estornado, ele estar em aberto...')
                                LOOP
                        ENDIF
                ENDIF
                cons_ped := {}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6))+" AND ppag ='C'",,.t.,@cons_ped)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_ped) > 0
                        atencao('Este pedido foi CANCELADO no dia: '+DTOC(cons_ped[1,50])+' - Emitido no dia:'+DTOC(cons_ped[1,4])+' Hrs.: '+cons_ped[1,59]+' Por: '+cons_ped[1,60]+' Motivo:'+cons_ped[1,91])
                        LOOP
                ENDIF
                //mpedente := '*'
        ENDIF
        mtipo_comp := aret[1,11]
        mtipo := aret[1,2]
        mcod_cli := aret[1,16]
        mcod_vend := aret[1,15]
        setcor(3)
        DEVPOS(1,54);DEVOUT(DTOC(aret[1,3])+' - Hora:'+aret[1,21])
        DEVPOS(2,11);DEVOUT(STR(aret[1,16],5)+' - ')
        DEVPOS(3,6);DEVOUT(aret[1,15])
        DEVPOS(3,47);DEVOUT(aret[1,17])
        ver_cli(aret[1,16],2,19)
        ven(VAL(aret[1,15]),3,10)
        ven(VAL(aret[1,17]),3,51)
        DEVPOS(5,1);DEVOUT(' ')
        i := 0
        FOR i = 1 TO LEN(aret)
                IF aret[i,2] = 'DN'
                        AADD(mdoc,{'Dinheiro R$..:',TRANSFORM(aret[i,10],'9,999,999.99'),'','','',aret[i,2]})
                        AADD(m_ver,'Dinheiro R$..: '+TRANSFORM(aret[i,10],'9,999,999.99'))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'CR'
                        AADD(mdoc,{'Credito R$...:',TRANSFORM(aret[i,10],'9,999,999.99'),'','','',aret[i,2]})
                        AADD(m_ver,'Credito R$...: '+TRANSFORM(aret[i,10],'9,999,999.99'))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'CH'
                        AADD(mdoc,{'Cheque R$....:',TRANSFORM(aret[i,10],'9,999,999.99'),aret[i,6],aret[i,8],DTOC(aret[i,9]),aret[i,2]})
                        AADD(m_ver,'Cheque R$....: '+TRANSFORM(aret[i,10],'9,999,999.99')+' Bco: '+aret[i,6]+' No.: '+aret[i,8]+' Venc.: '+DTOC(aret[i,9]))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'DU'
                        AADD(mdoc,{'Duplicata R$.:',TRANSFORM(aret[i,10],'9,999,999.99'),'',aret[i,8],DTOC(aret[i,9]),aret[i,2]})
                        AADD(m_ver,'Duplicata R$.: '+TRANSFORM(aret[i,10],'9,999,999.99')+' No.: '+aret[i,8]+IF(aret[i,20] = '*',' Pag..: ',' Venc.: ')+DTOC(aret[i,9]))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'FI'
                        AADD(mdoc,{'Financeira R$:',TRANSFORM(aret[i,10],'9,999,999.99'),'',aret[i,8],DTOC(aret[i,9]),aret[i,2]})
                        AADD(m_ver,'Financeira R$: '+TRANSFORM(aret[i,10],'9,999,999.99')+' No.: '+aret[i,8]+' Venc.: '+DTOC(aret[i,9]))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'CT'
                        AADD(mdoc,{'Cartao R$....:',TRANSFORM(aret[i,10],'9,999,999.99'),aret[i,7],aret[i,8],DTOC(aret[i,9]),aret[i,2]})
                        AADD(m_ver,'Cartao R$....: '+TRANSFORM(aret[i,10],'9,999,999.99')+' Cod.: '+aret[i,7]+' Doc.: '+aret[i,8]+' Venc.: '+DTOC(aret[i,9]))
                        mtot_ped := mtot_ped + aret[i,10]
                ELSEIF aret[i,2] = 'CA'
                        AADD(mdoc,{'PEDIDO CANCELADO PELO OPERADOR COD.:',aret[i,17],'','','',aret[i,2]})
                        AADD(m_ver,'PEDIDO CANCELADO PELO OPERADOR COD.: '+aret[i,17])
                ELSEIF aret[i,2] = 'ES'
                        AADD(mdoc,{aret[i,13]+'-'+aret[i,14],'','','','',aret[i,2]})
                        AADD(m_ver,aret[i,13]+'-'+aret[i,14])
                ELSE
                        LOOP
                ENDIF
        NEXT
        IF mtip = NIL
                DEVPOS(5,1);DEVOUT('')
                i := 0
                FOR i = 1 TO LEN(mdoc)
                        DEVPOS(ROW()+1,2);DEVOUT(m_ver[i])
                NEXT
                setcor(6)
                DEVPOS(ROW()+2,2);DEVOUT('TOTAL R$...: ')
                DEVPOS(ROW(),COL());DEVOUTPICT(mtot_ped,'999,999,999.99')
                IF ! ver_nivel(mprg,'ESTORNO DE RECEBIMENTO DE PEDIDO','15',nivel_acess,,'AMBIE')
                        EXIT
                ENDIF
                setcor(1)
                @ 4,9 GET mmotivo VALID IF(EMPTY(mmotivo),.F.,.T.) WHEN mpedente = ' ' .AND. mtip = NIL
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mpedente = '*'
                        atencao('(PEDIDO PEDENTE) - Pressione qualquer Tecla p/Retornar...')
                        LOOP
                ENDIF
                opcao := op_simnao('N','Confirma o estorno do recebimento:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ELSE
                        cons_ped := {}
                        sr_getconnection():exec("SELECT * FROM sacped_s WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)

                        sr_getconnection():exec("UPDATE sacped_s SET ppag = NULL,pdatapag = NULL WHERE pnum_ped = "+ sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("UPDATE cnnt_pedido SET status_ped = 'PEDIDO',obs_pc = 'EM ANDAMENTO' WHERE codigo = "+sr_cdbvalue(VAL(cons_ped[1,94]))+" AND cod_funcionario = "+sr_cdbvalue(cons_ped[1,32]),,.f.)

                        mvalor := 0
                        mnota := aret[1,4]
                        mdocumento := aret[1,8]
                        mdata := aret[1,3]
                        aret:={}
                        cComm  := "SELECT SUM(valor) FROM saccaixa WHERE nota = "+sr_cdbvalue('PD'+STRZERO(mnum_pedp,6))
                        sr_getconnection():exec(ccomm,,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mvalor := aret[1,1]
                        sr_getconnection():exec("UPDATE saccaixa SET tipo = 'ES',descri1 = "+ sr_cdbvalue(SUBSTR('Pedido Estornado dia:'+DTOC(mdata_sis)+'-Ope:'+cod_operado,40))+',descri2 = '+sr_cdbvalue(' '+SUBSTR(mmotivo,1,39))+',hora='+ sr_cdbvalue(TIME())+' WHERE nota = '+sr_cdbvalue('PD'+STRZERO(mnum_pedp,6)),,.f.)
                        aret:={}
                        //                                   1    2     3    4      5       6       7      8       9       10                      1 2 3 4 5 6 7 8 9 10
                        cComm  := "INSERT INTO saccaixa (empresa,tipo,data,nota,documento,valor,descri1,descri2,cod_opera,hora,sr_deleted) values (?,?,?,?,?,?,?,?,?,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,{mcodempresa,'ES',mdata_sis,mnota,mdocumento,mvalor,'Estornado do dia:'+DTOC(mdata)+'-Ope:'+cod_operado,' '+mmotivo,cod_operado,TIME()},sr_getconnection():nsystemid)
                        sr_getconnection():exec(ccomm,,.f.)
                        mensagem('Estornando os registro do CREDITO')
                        sr_getconnection():exec("DELETE FROM saccred WHERE num_ped = " + sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        mensagem('Estornando os registro do MOVIMENTO')
                        sr_getconnection():exec("DELETE FROM sacmov WHERE num_ped = " + sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        mensagem('Estornando os registro do DUPLICATAS')
                        sr_getconnection():exec("DELETE FROM sacdupr WHERE num_ped = " + sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        IF ! EMPTY(mcod_cli)
                                aret:={}
                                cComm  := "SELECT ant_ped,dat_ant,vlr_ant,tot_comp,vlr_ant FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                                sr_getconnection():exec(ccomm,,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                ccomm := "UPDATE saccli SET num_ped = "+sr_cdbvalue(aret[1,1])+",vlr_comp = "+sr_cdbvalue(iat(aret[1,3],2))+",tot_comp = "+sr_cdbvalue(iat(aret[1,4] - aret[1,5],2))
                                IF EMPTY(aret[1,2])
                                        ccomm := ccomm + ",ult_comp = NULL"
                                ELSE
                                        ccomm := ccomm + ",ult_comp = "+sr_cdbvalue(aret[1,2])
                                ENDIF
                                ccomm := ccomm + " WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                                sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        sr_getconnection():exec("UPDATE sacoss SET pag = NULL,baixa=NULL,num_ped=NULL WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_pedp,6)),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
        ELSE
                IF ! ver_nivel(mprg+'C','CONSULTA DE RECEBIMENTO DE PEDIDO','135',nivel_acess,,'AMBIE')
                        EXIT
                ENDIF
                DEVPOS(5,1);DEVOUT('')
                i := 0
                FOR i = 1 TO LEN(mdoc)
                        DEVPOS(ROW()+1,2);DEVOUT(m_ver[i])
                        @ ROW(),2 GET mdoc[i,1]
                NEXT
                setcor(6)
                DEVPOS(ROW()+2,2);DEVOUT('TOTAL R$...: ')
                DEVPOS(ROW(),COL());DEVOUTPICT(mtot_ped,'999,999,999.99')
                setcor(1)
                @ ROW()+1,1 TO ROW()+1,cba-1
                i := 0
                FOR i = 1 TO LEN(mdoc)
                        IF mdoc[i,6] = 'ES' .OR. mdoc[i,6] = 'CA' .OR. mdoc[i,6] = 'DN'
                                LOOP
                        ENDIF
                        m_dupr:={}
                        sr_getconnection():exec("SELECT * FROM sacdupr WHERE duplicata = "+sr_cdbvalue(mdoc[i,4])+" AND tipo = "+sr_cdbvalue(mdoc[i,6])+" AND fornec = "+sr_cdbvalue(mcod_cli) ,,.t.,@m_dupr)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(m_dupr) = 0
                                LOOP
                        ENDIF
                        AADD(mdupr,{m_dupr[1,2],m_dupr[1,4],TRANSFORM(m_dupr[1,19],'9,999,999.99'),m_dupr[1,11],m_dupr[1,13],m_dupr[1,25],m_dupr[1,37],m_dupr[1,25]})
                        IF m_dupr[1,25]='T'
                                AADD(mv_dupr,'Doc: TRANSFERIDO: '+m_dupr[1,2]+m_dupr[1,4]+'  Vlr:'+TRANSFORM(m_dupr[1,19],'99,999.99')+'  Venc:'+DTOC(m_dupr[1,11])+'  TRANS:'+DTOC(m_dupr[1,38]))
                        ELSE
                                AADD(mv_dupr,'Doc.: '+m_dupr[1,2]+m_dupr[1,4]+'  Vlr:'+TRANSFORM(m_dupr[1,19],'99,999.99')+'  Emi:'+DTOC(m_dupr[1,10])+' Venc:'+DTOC(m_dupr[1,11])+'  Dt.Pg:'+DTOC(m_dupr[1,13]))
                        ENDIF
                        IF m_dupr[1,25] = 'T'
                                m_dupr1:={}
                                sr_getconnection():exec("SELECT * FROM sacdupr WHERE doc_tran = "+sr_cdbvalue(m_dupr[1,2]+m_dupr[1,4]),,.t.,@m_dupr1)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_dupr1) = 0
                                        LOOP
                                ENDIF
                                FOR i = 1 TO LEN(m_dupr1)
                                        AADD(mdupr,{m_dupr1[i,2],m_dupr1[i,4],TRANSFORM(m_dupr1[i,19],'9,999,999.99'),m_dupr1[i,11],m_dupr1[i,13],m_dupr1[i,25],m_dupr1[i,37]})
                                        AADD(mv_dupr,'Doc.: '+m_dupr1[i,2]+m_dupr1[i,4]+'  Vlr:'+TRANSFORM(m_dupr1[i,19],'99,999.99')+'  Emi:'+DTOC(m_dupr1[i,10])+' Venc:'+DTOC(m_dupr1[i,11])+'  Dt.Pg:'+DTOC(m_dupr1[i,13]))
                                NEXT
                        ENDIF
                NEXT
                i := 0
                FOR i = 1 TO LEN(mv_dupr)
                        IF ! EMPTY(mdupr[i,7])
                                setcor(3)
                        ELSEIF mdupr[i,8] = 'T'
                                setcor(5)
                        ENDIF
                        DEVPOS(ROW()+1,2);DEVOUT(mv_dupr[i])
                        setcor(1)
                NEXT
                CLEAR GETS
                opcao := op_simnao('S','Confirma os dados acima [S/N]: ')
                IF opcao = 'N'
                        LOOP
                ENDIF
                mdetalhe := op_simnao('S','Deseja Imprimir o DETALHE DOS DOCUMENTOS [S/N]: ')
                IF mdetalhe = 'N'
                        LOOP
                ENDIF
                IF ! imp_arq('RECEBI.REL','R')
                        EXIT
                ENDIF
                ***************
                SELE('caix');ORDSETFOCUS(6)
                GO TOP
                ***************
                caix->(DBSEEK('PD'+STRZERO(mnum_pedp,6)))

                DEVPOS(PROW(),00);DEVOUT('No.do pedido: '+STRZERO(mnum_pedp,6))
                DEVPOS(PROW()+1,00);DEVOUT('Recebimento.: '+DTOC(caix->data)+' - Hora:'+caix->hora)
                DEVPOS(PROW()+1,00);DEVOUT('Cliente.....: '+caix->cod_cli+' - ')
                ver_cli(VAL(caix->cod_cli),PROW(),PCOL()+1)
                DEVPOS(PROW()+1,00);DEVOUT('Vendedor....: '+caix->cod_vend)
                ven(VAL(caix->cod_vend),PROW(),PCOL()+2)
                DEVPOS(PROW()+1,00);DEVOUT('Operador....: '+caix->cod_opera)
                ven(VAL(caix->cod_opera),PROW(),PCOL()+2)
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' F O R M A   D E   R E C E B I M E N T O ',80))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                i := 0
                FOR i = 1 TO LEN(mdoc)
                        IF mdoc[i,6] = 'ES' .OR. mdoc[i,6] = 'CA'
                                DEVPOS(PROW()+1,00);DEVOUT(m_ver[i])
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(mdoc[i,1])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(m_ver[i],15))
                        ENDIF
                NEXT
                DEVPOS(PROW()+2,00);DEVOUT('TOTAL R$...: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_ped,'999,999,999.99')
                IF mdetalhe = 'S'
                        DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC(' DETALHE DOS DOCUMENTOS ',80))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                        i := 0
                        FOR i = 1 TO LEN(mv_dupr)
                                IF SUBSTR(mv_dupr[i],1,16) = 'Doc: TRANSFERIDO'
                                        DEVPOS(PROW()+1,2);DEVOUT(mv_dupr[i])
                                        DEVPOS(PROW(),2);DEVOUT(mv_dupr[i])
                                        LOOP
                                ENDIF
                                DEVPOS(PROW()+1,2);DEVOUT(mv_dupr[i])
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                ENDIF
                SETPRC(00,00)
                EJECT
                SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('RECEBI.REL')
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
