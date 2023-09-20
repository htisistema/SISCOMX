*******************************
* RECEBIMENTO DE TP's
*******************************
MEMVAR getlist,mdata_sis,nivel_acess,cod_operado,mvl_vend,mtot_icm,mtot_rece,;
       cnumpdv,cnumcupom,mnum_ecf,mtipo_pg,mcodemp,mcliente,mcod_cli,mcartao_sn,;
       m_recebe

FUNCTION sac30ecf(mnum,tip_imp)
***************
LOCAL MPRG:='SAC30ECF',;
      opcao,mtela2,mtela1,lci,cci,lba,cba,i,msele,morde,point,;
      mopcao,mtela,pode,f,mtraco,mtipo_comp,mtipo_pag,mbox,;
      mtot_icmf,msaldo_atu,mtot_comissao,mperc_comissao,;
      li,ci,lb,cb,mtot_nota,mdiferenca,menvelope,;
      mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,;
      mcod_cart,mvalor,mn_fin,mtot_ipi,mbox_rece,magencia,mc_c,mcorrente,;
      mpago:=' ',c_duplicata:=' '

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,;
        m_codigo:={},m_desc:={},mdesconto,tela,mreceb,mcom_ven,mcom_ap,mbanco,;
        mnome_vend,mperc,mcgc,mcpf,mdocumento,;
        mnum_ped,minsc,mcond_vezes,mcond_intev,mtp_vend,mtot_desc,mtot_verif:=0,;
        mdata_ped,mn_cupom,m_param:={},aret:={},cComm,cons_ped:={},mcredito,mn_cred

PRIVATE mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0

CLEAR GETS

mreceb := 'R'
lci := cci := 00
lba = 23
cba = 90
*----------------------------------------------------
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmovnt','movnt');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
*---------------------------------------------
setcor(1)
op_tela(00,00,30,90,'FECHAMENTO DO CUPOM')
ver_ven(cod_operado)
//]atencao(' Operador:'+cod_operado+'-'+RTRIM(sen->snome),2)

WHILE .T.
        IF mnum <> NIL
                mnum_ped := mnum
        ELSE
                mnum_ped := 0
        ENDIF
        ASIZE(m_codigo,0)
        ASIZE(m_desc,0)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdocumento := SPACE(6)
        mcliente = SPACE(40)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        opcao = 'S'
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mbanco := 'C'
        mcom_ven := mcom_ap := mtot_nota := mdesconto := mperc := ;
        mcod_cli := mperc_comissao := mtot_comissao := mprazo_cart := mdesc_cart := ;
        mtot_icm := mdinheiro := mvl_vend := mcod_vend := mvalor := ;
        mtot_desc := mtot_verif := mtot_ipi := mdiferenca := ;
        mcod_cart := mtot_rece := f := mtot_verif := 0
        mtipo_comp := 'AV'
        mtipo_pag := mcartao_sn := SPACE(1)
        mn_banco := SPACE(3)
        mn_cheque := SPACE(6)
        magencia := mn_dup := mn_trans := mn_cupom := SPACE(8)
        mc_c := SPACE(13)
        mvencimento := CTOD(' /  /  ')
        mt_pag := SPACE(1)
        menvelope := SPACE(10)
        i = 1
        mpago:=' '
        mbox := SAVESCREEN(01,00,24,79)
        ASIZE(m_recebe,0)
        li := ci := 0
        lb := 22
        cb := 79
        DEVPOS(li+1,ci+1);DEVOUT('No.Pedido: ')
        DEVPOS(li+1,ci+25);DEVOUT('Data:')
        DEVPOS(li+1,ci+43);DEVOUT('Vend:')
        DEVPOS(li+1,ci+52);DEVOUT('Cond.Pag.:')
        DEVPOS(li+2,ci+1);DEVOUT('Cod.Cliente:')
        DEVPOS(li+3,ci+1);DEVOUT('C.P.F......:')
        DEVPOS(li+3,ci+31);DEVOUT('C.G.C.:')
        @ li+4,ci TO li+4,cb
        DEVPOS(li+8,ci+1);DEVOUT('Total da COMPRA.....R$:')
        @ li+9,ci TO li+9,cb
        DEVPOS(li+10,ci+1);DEVOUT('Total RECEBIDO......R$:')
        DEVPOS(li+10,ci+40);DEVOUT('a RECEBER R$:')
        @ li+11,ci TO li+11,cb
        @ li+15,ci TO li+15,cb
        janela(li+15,cb,' Formas de Pagamentos ','*')

        @ li+1,ci+12 GET mnum_ped PICT '999999' WHEN men_get(li+2,ci+12,'Informe o No.do PEDIDO que deseja fazer o recebimento ou <ENTER> p/No.ENVELOPE - <ESC>p/abandonar') VALID lim_get()
        READ
        IF LASTKEY() = 27
                UNLOCK
                EXIT
        ENDIF
/*
        IF EMPTY(mnum_ped) .AND. ver_serie() = '141253'
                DEVPOS(li+1,ci+1);DEVOUT('No.ENVELOPE:')
                @ li+1,ci+14 GET menvelope PICT '9999999999' WHEN men_get(li+2,ci+12,'Informe o Numero do ENVELOPE que deseja fazer o recebimento - <ESC>p/retornar') VALID lim_get()         //.AND. IF(EMPTY(mnum_ped),.F.,.T.)
                READ
                IF LASTKEY() = 27 .OR. EMPTY(menvelope)
                        LOOP
                ENDIF
                ********************
                SELE('ped_s');ORDSETFOCUS(10)
                GO TOP
                ********************
                IF ! ped_s->(DBSEEK(menvelope))
                        atencao('ENVELOPE nao Cadastrado !!!')
                        LOOP
                ENDIF
                mnum_ped := VAL(ped_s->pnum_ped)
        ENDIF
*/
        cons_ped:={}
        sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao Cadastrado !!!')
                LOOP
        ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este pedido foi CANCELADO do dia: '+DTOC(ped_s->pdatapag)+' Hrs.: '+ped_s->phora_pg+' Por: '+pautoriz+' Motivo:'+pmotivo)
                UNLOCK
                LOOP
        ELSEIF cons_ped[1,49] = '*'
                atencao('Este pedido ja foi PAGO !!!')
                mpago := '*'
        ENDIF
        IF cons_ped[1,4] > mdata_sis
                atencao('Este pedido nao pode ser Recebido com esta DATA !!!')
                LOOP
        ENDIF

        mdata_ped := cons_ped[1,4]
        mcgc := cons_ped[1,24]
        mcpf := cons_ped[1,25]
        mcod_vend := VAL(cons_ped[1,32])
        mnome_vend := cons_ped[1,33]
        mcond_vezes := cons_ped[1,43]
        mcond_intev := cons_ped[1,44]
        mtp_vend := cons_ped[1,45]
        mcod_cli := VAL(cons_ped[1,23])
        setcor(3)
        DEVPOS(li+1,ci+31);DEVOUT(mdata_sis)
        DEVPOS(li+1,ci+48);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(li+1,ci+62);DEVOUT(mtp_vend)
        setcor(1)
*       ven(@mcod_vend,03,46)
        ven(@mcod_vend)
        IF mtp_vend = 'AP'
                setcor(3)
                DEVPOS(li+1,ci+60);DEVOUTPICT(mcond_vezes,'@@R 9-9')
                DEVPOS(li+1,COL()+1);DEVOUT('p/')
                DEVPOS(li+1,col()+1);DEVOUTPICT(mcond_intev,'99')
                setcor(1)
        ELSE
                setcor(3)
                DEVPOS(li+1,ci+60);DEVOUT('A VISTA')
                setcor(1)
        ENDIF
        ***************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ***************
        @ li+2,ci+14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,li+2,ci+21)
        @ li+3,ci+14 GET mcpf PICT '@@R 999.999.999-99' VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0
        @ li+3,ci+38 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        READ
        IF INKEY() = 27
                DBUNLOCKALL()
                LOOP
        ENDIF
        ver_cli(mcod_cli,li+2,ci+21)
        setcor(3)
        DEVPOS(li+2,ci+14);DEVOUT(mcod_cli+' - ')
        DEVPOS(li+2,ci+21);DEVOUT(mcliente)
        DEVPOS(li+3,ci+14);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(li+3,ci+38);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        setcor(1)
        mcredito := 0
        mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3,'*')
                DEVPOS(li+4,ci+5);DEVOUT(' CREDITO DO CLIENTE R$:'+TRANSFORM(mcredito,'999,999.99')+' ')
                setcor(1)
                mtipo_pg := 7
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                IF cons_ped[i,18] > cons_ped[i,20]
                        mdesconto := 0
                ELSE
                        mdesconto := (cons_ped[i,20] - cons_ped[i,18]) * cons_ped[i,14]
                ENDIF
                AADD(m_codigo,VAL(cons_ped[i,6]))
*                                   1           2             3              4               5              6              7           8              9           10             11              12      13      14             15               16            17             18             19             20            21          22
                AADD(m_desc,{cons_ped[i,5],cons_ped[i,7],cons_ped[i,30],cons_ped[i,31],cons_ped[i,14],cons_ped[i,20],cons_ped[i,18],cons_ped[i,8],cons_ped[i,11],cons_ped[i,48],mdesconto,cons_ped[i,21],0,cons_ped[i,51],cons_ped[i,52],cons_ped[i,53],cons_ped[i,22],cons_ped[i,57],cons_ped[i,9],cons_ped[i,79],cons_ped[i,78],cons_ped[i,99]})
                mtot_nota := mtot_nota + (cons_ped[i,18] * cons_ped[i,14])
                mtot_comissao := mtot_comissao + (cons_ped[i,18]*cons_ped[i,14])*((cons_ped[i,53] + mcom_ven)/100)
                mtot_desc := mtot_desc + (cons_ped[i,18] * cons_ped[i,14])*(mdesconto/100)
        NEXT
*        mtot_ipi := iat(mtot_ipi,2)
        mtot_ipi := iat(mtot_ipi,2)
        mtot_nota := iat(mtot_nota,2)+mtot_ipi
        mperc_comissao := mtot_comissao / mtot_nota
        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)

        setcor(3)
        SUB_BANNER(li+5,ci+30,TRANSFORM(mtot_nota,'999,999.99'))
        setcor(1)
        IF mcod_cli <> 0
                mcpf := cli->cpf
                mcgc := cli->cgc
                minsc := cli->insc
        ENDIF
        WHILE .T.
                SUB_BANNER(li+5,ci+30,TRANSFORM(mtot_nota,'999,999.99'))
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mdinheiro := 0
                mn_banco := SPACE(3)
                mn_cheque := SPACE(6)
                magencia := SPACE(8)
                mc_c := SPACE(13)
                mvencimento := CTOD('  /  /  ')
                mn_dup := mn_trans := mn_fin := SPACE(8)
                mt_pag := 'C'
                mn_cupom := SPACE(10)
                mcod_cart := mvalor := 0
                mopcao := SPACE(1)
                mcorrente := SPACE(35)
                botao(li+12,ci+1,li+14,ci+12)
                botao(li+12,ci+13,li+14,ci+22)
                botao(li+12,ci+23,li+14,ci+35)
                botao(li+12,ci+36,li+14,ci+52)
                botao(li+12,ci+53,li+14,ci+62)
                botao(li+12,ci+63,li+14,ci+73)
                botao(li+12,ci+74,li+14,ci+83)
                @ li+13,ci+2 PROMPT '1-Dinheiro'
                @ li+13,ci+14 PROMPT '2-Cheque'
                @ li+13,ci+24 PROMPT '3-Duplicata'
                @ li+13,ci+37 PROMPT '4-Financiamento'
                @ li+13,ci+54 PROMPT '5-Cartao'
                @ li+13,ci+64 PROMPT '6-T E F  '
                @ li+13,ci+74 PROMPT '7-CREDITO'
                SET INTEN ON
                MENU TO mtipo_pg

                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79,mbox)
                        EXIT
                ENDIF
                setcor(1)
                IF mtipo_pg = 1
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+1,li+18,ci+40)
                        DEVPOS(li+17,ci+2);DEVOUT('Dinheiro............R$:')
                        @ li+17,ci+25 GET mdinheiro PICT '999,999,999.99'
                        READ
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF EMPTY(mcod_cli)
                                atencao('Esta operacao e necessario um CLIENTE')
                                LOOP
                        ENDIF
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+15,ci+15,li+23,ci+75)
                        setcor(1)
                        DEVPOS(li+16,ci+16);DEVOUT('No.Banco...:')
                        DEVPOS(li+17,ci+16);DEVOUT('Agencia....:')
                        DEVPOS(li+18,ci+16);DEVOUT('C/C........:')
                        DEVPOS(li+19,ci+16);DEVOUT('No.Cheque..:')
                        DEVPOS(li+20,ci+16);DEVOUT('Vencimento.:')
                        DEVPOS(li+21,ci+16);DEVOUT('Valor......:')
                        DEVPOS(li+22,ci+16);DEVOUT('Correntista:')
                        @ li+16,ci+29 GET mn_banco PICT '9999' WHEN EMPTY(mdinheiro)
                        @ li+17,ci+29 GET magencia PICT '@!'
                        @ li+18,ci+29 GET mc_c PICT '@!' VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ li+19,ci+29 GET mn_cheque PICT '99999999' VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ li+20,ci+29 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+21,ci+29 GET mvalor PICT '9,999,999.99' WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ li+22,ci+29 GET mcorrente PICT '@!'
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = 'AP'
                        ENDIF
               ELSEIF mtipo_pg = 3
                        IF EMPTY(mcod_cli)
                                atencao('Esta operacao e necessario um CLIENTE')
                                LOOP
                        ENDIF
                        IF ! EMPTY(cli->dia1_ini) .OR. ! EMPTY(cli->dia2_ini)
                                IF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cli->dia1_ini) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cli->dia1_fim)
                                        mvencimento := CTOD(cli->venc1_dup+SUBSTR(DTOC(mdata_sis),3))
                                ELSEIF VAL(SUBSTR(DTOC(mdata_sis),1,2)) >= VAL(cli->dia2_ini) .AND. VAL(SUBSTR(DTOC(mdata_sis),1,2)) <= VAL(cli->dia2_fim)
                                        mvencimento := CTOD(cli->venc2_dup+'/'+STRZERO(VAL(SUBSTR(DTOC(mdata_sis),4,2))+1,2)+'/'+IF(VAL(SUBSTR(DTOC(mdata_sis),7))=12,STRZERO(VAL(SUBSTR(DTOC(mdata_sis),7))+1,2),SUBSTR(DTOC(mdata_sis),7)))
                                ENDIF
                        ENDIF
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+27,li+21,ci+56)
                        mn_dup := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        DEVPOS(li+17,ci+28);DEVOUT('No.Duplicata.:')
                        DEVPOS(li+18,ci+28);DEVOUT('Vencimento...:')
                        DEVPOS(li+19,ci+28);DEVOUT('C>art. B>anco:')
                        DEVPOS(li+20,ci+28);DEVOUT('Valor R$.....:')
                        @ li+17,ci+43 GET mn_dup PICT '@!'
                        @ li+18,ci+43 GET mvencimento WHEN ! EMPTY(mn_dup) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+19,ci+43 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B' WHEN ! EMPTY(mn_dup)
                        @ li+20,ci+43 GET mvalor PICT '9,999,999.99' WHEN ! EMPTY(mn_dup)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_dup)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AP'
                ELSEIF mtipo_pg = 4
                        IF EMPTY(mcod_cli)
                                atencao('Esta operacao e necessario um CLIENTE')
                                LOOP
                        ENDIF
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+12,li+21,ci+74)
                        DEVPOS(li+17,ci+13);DEVOUT('Cod.Financeira...:')
                        DEVPOS(li+18,ci+13);DEVOUT('No.Financiamento.:')
                        DEVPOS(li+19,ci+13);DEVOUT('Vencimento.......:')
                        DEVPOS(li+20,ci+13);DEVOUT('Valor R$.........:')
                        @ li+17,ci+32 GET mcod_cart PICT '999' VALID ver_finan(mcod_cart,li+17,ci+36)
                        @ li+18,ci+32 GET mn_fin PICT '99999999' WHEN EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup)
                        @ li+19,ci+32 GET mvencimento  VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+20,ci+32 GET mvalor PICT '9,999,999.99' WHEN ! EMPTY(mn_fin)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_fin)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AP'
               ELSEIF mtipo_pg = 5
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+40,li+21,ci+79)
                        DEVPOS(li+17,ci+41);DEVOUT('Cod.Cartao:')
                        DEVPOS(li+18,ci+41);DEVOUT('No.Cupom..:')
                        DEVPOS(li+19,ci+41);DEVOUT('Vencimento:')
                        DEVPOS(li+20,ci+41);DEVOUT('Valor R$..:')
                        @ li+17,ci+53 GET mcod_cart PICT '999' VALID ver_cartao(mcod_cart,li+17,ci+55)
                        mvencimento := mdata_sis + car->prazo
                        @ li+18,ci+53 GET mn_cupom PICT '@!' WHEN ! EMPTY(mcod_cart) VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ li+19,ci+53 GET mvencimento VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+20,ci+53 GET mvalor PICT '999,999.99' WHEN EMPTY(mdinheiro)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AP'
                ELSEIF mtipo_pg = 6
                        mcartao_sn := 'S'
                        mforma_pg := 'Cartao TEF'
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+40,li+21,ci+79)
                        DEVPOS(li+17,ci+41);DEVOUT('Cod.Cartao:')
                        DEVPOS(li+18,ci+41);DEVOUT('No.Cupom..:')
                        DEVPOS(li+19,ci+41);DEVOUT('Vencimento:')
                        DEVPOS(li+20,ci+41);DEVOUT('Valor R$..:')
                        @ li+17,ci+53 GET mcod_cart PICT '999' VALID ver_cartao(mcod_cart,li+17,ci+56)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        //IF ! VendaCartao()
                        //        RESTSCREEN(00,00,24,79,mbox_rece)
                        //        LOOP
                        //ENDIF
                        //ConfirmaVenda()
                        DEVPOS(li+17,ci+53);DEVOUT(STRZERO(mcod_cart,3))
                        ver_cartao(mcod_cart,li+17,ci+56)
                        mvencimento := mdata_sis + car->prazo
                        mtipo_comp = 'AP'
                        mn_cupom := IBR_NUM_CUPOM()
                        @ li+18,ci+53 GET mn_cupom PICT '@!' WHEN ! EMPTY(mcod_cart) VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ li+19,ci+53 GET mvencimento VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ li+20,ci+53 GET mvalor PICT '999,999.99' WHEN EMPTY(mdinheiro)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
               ELSEIF mtipo_pg = 7
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        mbox_rece := SAVESCREEN(00,00,24,79)
                        botao(li+16,ci+27,li+20,ci+56,,' CREDITO CLIENTE ')
                        mvencimento := mdata_sis
                        DEVPOS(li+17,ci+28);DEVOUT('No.CREDITO...:')
                        DEVPOS(li+18,ci+28);DEVOUT('Data.........:')
                        DEVPOS(li+19,ci+28);DEVOUT('Valor R$.....:')
                        setcor(3)
                        setcor(1)
                        @ li+17,ci+43 GET mn_cred
                        READ
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        achou := f := 0
                        FOR f = 1 TO LEN(m_recebe)
                                IF m_recebe[f,5] = mn_cred
                                        atencao('Este Credito ja foi solicitado....')
                                        achou := 1
                                        EXIT
                                ENDIF
                        NEXT
                        IF achou > 0
                                LOOP
                        ENDIF
                        mcredito_aux := cli_dup(mcod_cli,'*',mn_cred)
                        IF mcredito_aux = 0
                                atencao('Nao existe CREDITO com esse Numero ....')
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        IF mdiferenca < mcredito_aux
                                mvalor := mdiferenca
                        ELSE
                                mvalor := mcredito_aux
                        ENDIF
                        @ li+18,ci+43 SAY mvencimento
                        setcor(1)
                        WVW_DrawBoxGet(,li+19,ci+43,12)
                        @ li+19,ci+43 GET mvalor PICT '9,999,999.99' VALID IF(mvalor>mcredito,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                ELSE
                        LOOP
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. mvalor+mdinheiro > 0
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart) .OR. EMPTY(mn_cred)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao('Este tipo de operacao exige cliente para que nao haja problemas futuros')
                        RESTSCREEN(00,00,24,79,mbox_rece)
                       LOOP
                ENDIF
                mopcao := op_simnao('S','Confirma a Inclusao:')
                RESTSCREEN(00,00,24,79,mbox_rece)
                SUB_BANNER(li+5,ci+30,TRANSFORM(mtot_nota,'999,999.99'))

                IF mopcao = 'N'
                        LOOP
                ENDIF
                IF mopcao = 'S'
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND.;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred));
                              .OR. mdinheiro = mtot_nota

                                IF ! EMPTY(mdinheiro) .OR. mdinheiro = mtot_nota
                                        IF mdinheiro + mtot_verif > mtot_nota
                                                mbox_rece := SAVESCREEN(00,00,24,79)
                                                mtot_rece := mtot_verif + mdinheiro
                                                mvalor := mtot_nota - mtot_verif
	                                        SUB_BANNER(20,01,'Troco:'+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
        	                                atencao('T R O C O   D E   R$: '+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                        ELSE
                                                mvalor := mdinheiro
                                        ENDIF
*                                       AADD(m_recebe,{'DN','AV',mn_banco,mn_cheque,'99999999',mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mdinheiro,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                        AADD(m_recebe,{'DN','AV',mn_banco,mn_cheque,'99999999',mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                ELSE
                                        IF ! EMPTY(mn_banco)
                                                IF mvencimento > mdata_sis
*                                                                        1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                                        AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ELSE
                                                        AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                 AADD(m_recebe,{'DU','AP',mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                        ELSEIF ! EMPTY(mn_cupom)
*                                               mvencimento := mdata_sis + mprazo_cart
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{'CT','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ELSE
                                                        AADD(m_recebe,{'CT','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_fin)
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{'FI','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ELSE
                                                        AADD(m_recebe,{'FI','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_cred)
                                                mcredito := mcredito - mvalor
                                                AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6) ,mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                        ELSEIF ! EMPTY(mn_trans)
                                                 AADD(m_recebe,{'TR','AP',mn_banco,mn_cheque,mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente})
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif = mtot_verif + mvalor
                        mdiferenca := iat(iat(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                        limpa(li+17,ci+1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                IF m_recebe[i,1] = 'DN'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('DINHEIRO.....: ')
                                ELSEIF m_recebe[i,1] = 'CH'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('CHEQUE.......: Bco.: '+m_recebe[i,3]+' No.: '+m_recebe[i,4]+' Venc.: '+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = 'DU'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('DUPLICATA....: No.: '+m_recebe[i,5]+' Venc.: '+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = 'CT'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('CARTAO.......: '+m_recebe[i,8]+'-'+LEFT(m_recebe[i,12],10)+' Cupom No.: '+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = 'FI'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('FINANCIAMENTO: '+m_recebe[i,11]+' Venc.: '+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = 'TR'
                                        DEVPOS(li+16+f,ci+1);DEVOUT('TRANSFERENCIA: '+m_recebe[i,11]+' Venc.: '+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CR"
                                        DEVPOS(li+16+f,ci+1);DEVOUT("CREDITO......: ")
                                ENDIF
                                DEVPOS(li+16+f,ci+59);DEVOUT('Valor: '+TRANSFORM(m_recebe[i,10],'999,999.99'))
                                IF i > 4
                                        SCROLL(li+17,ci+1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        setcor(1)
                        IF mdiferenca = 0 .OR. mdiferenca <= mtot_ipi
*                       IF mdiferenca = 0 .OR. mtot_verif = (mtot_nota - mtot_ipi)
*                       IF (mtot_verif - mtot_nota) = 0 .OR. mtot_verif = (mtot_nota - mtot_ipi)
                                IF mtot_verif > mtot_nota .AND. ! EMPTY(mdiferenca)
                                        atencao('Total RECEBIDO: '+TRANSFORM(mtot_verif,'9,999,999.999999')+' e maior que A RECEBER: '+TRANSFORM(mtot_nota,'9,999,999.99999')+', digite tudo novamente OK')
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                        setcor(1)
                                        limpa(li+17,ci+1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                mopcao := op_simnao('S','Todas informacoes "OK", Confirma Dados Preenchido:')
                                IF mopcao = 'N'
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                        setcor(1)
                                        limpa(li+17,ci+1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = 'S'
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF EMPTY(mpago) .AND. msld_aux = ' '
                IF ! EMPTY(mcod_cli)
                        m_param:={}
                        sr_getconnection():exec("SELECT tot_comp,vlr_comp,num_ped,ult_comp FROM saccli WHERE cod_cli = "+sr_cdbvalue(mcod_cli),,.t.,@m_param)
                        aret:={}
                        cComm  := "UPDATE saccli SET "
                        ccomm := ccomm +"num_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                        ccomm := ccomm +",ult_comp = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm +",vlr_comp = "+sr_cdbvalue(iat(mtot_nota,2))
                        ccomm := ccomm +",tot_comp = "+sr_cdbvalue(iat(m_param[1,1] + mtot_nota,2))
                        IF ! EMPTY(m_param[1,4])
                                ccomm := ccomm +",ant_ped  = "+sr_cdbvalue(m_param[1,3])
                                ccomm := ccomm +",dat_ant  = "+sr_cdbvalue(m_param[1,4])
                        ENDIF
                        ccomm := ccomm +",vlr_ant  = "+sr_cdbvalue(iat(m_param[1,2],2))+" WHERE cod_cli = "+sr_cdbvalue(mcod_cli)
                        sr_getconnection():exec(ccomm,,.f.)
                        //sr_getconnection():exec('COMMIT',,.f.)

                ENDIF
                mensagem('Atualizando o ARQUIVO DE PEDIDO....')
                aret:={}
                cComm  := "UPDATE sacped_s SET "
                ccomm := ccomm +"ppag  = '*'"
                ccomm := ccomm +",pdatapag = "+sr_cdbvalue(mdata_sis)
                ccomm := ccomm +",phora_pg = "+sr_cdbvalue(TIME())
                ccomm := ccomm +",pnum_pdv = "+sr_cdbvalue(cnumpdv)
                ccomm := ccomm +",pnum_cup = "+sr_cdbvalue(cnumcupom)
                ccomm := ccomm +" WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
                sr_getconnection():exec(ccomm,,.f.)
                mdocumento = 'PD'+STRZERO(mnum_ped,6)
                IF LEN(m_codigo) = 0
                        i = 1
                        RESTSCREEN(01,00,24,79,mbox)
                        RESTSCREEN(05,00,24,79,mtela)
                        RETURN NIL
                ENDIF
                i = 0
                FOR i = 1 TO LEN(m_recebe)

                        IF EMPTY(m_recebe[i,1])
                                LOOP
                        ENDIF
                        mnum_dup := mdup_num := c_duplicata := ' '

                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := cNumcupom
                                c_duplicata := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,4]
                                c_duplicata := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'DU'
                                mnum_dup  := m_recebe[i,5]
                                mdup_num  := m_recebe[i,5]
                                c_duplicata := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup  := m_recebe[i,11]
                                mdup_num  := m_recebe[i,5]
                                c_duplicata := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup  := m_recebe[i,5]
                                mdup_num  := m_recebe[i,9]
                                c_duplicata := m_recebe[i,9]
                        ELSEIF m_recebe[i,1] = 'TR'
                                mnum_dup  := m_recebe[i,5]
                                mdup_num  := m_recebe[i,5]
                                c_duplicata := m_recebe[i,5]
                        ENDIF
                        mensagem('Atualizando o CAIXA....')
                        sr_getconnection():exec('INSERT INTO saccaixa ('+;
                        'empresa   ,'+;
                        'data      ,'+;//2
                        'tipo      ,'+;//3
                        'tipo_comp ,'+;//4
                        'nota      ,'+;//5
                        'cod_cli   ,'+;//6
                        'cod_vend  ,'+;//7
                        'cod_opera ,'+;//8
                        'hora      ,'+;//9
                        'valor_com ,'+;//10
                        'comissao  ,'+;//11
                        'venci     ,'+;//12
                        'valor     ,'+;//13
                        'num_ban   ,'+;//14
                        'cod_ct    ,'+;//15
                        'num_dup   ,'+;//16
                        'documento ,'+;//17
                        'descri2   ,'+;//18
                        'num_pdv   ,'+;//19
                        'num_cup   ,'+;//20
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodemp                                )+','+;//1
                        sr_cdbvalue(mdata_sis                              )+','+;//2
                        sr_cdbvalue(m_recebe[i,1]                          )+','+;//3
                        sr_cdbvalue(m_recebe[i,2]                          )+','+;//4
                        sr_cdbvalue('PD'+STRZERO(mnum_ped,6)               )+','+;//5
                        sr_cdbvalue(mcod_cli                    )+','+;//6
                        sr_cdbvalue(STRZERO(mcod_vend,3)                   )+','+;//7
                        sr_cdbvalue(cod_operado                            )+','+;//8
                        sr_cdbvalue(TIME()                                 )+','+;//9
                        sr_cdbvalue(m_recebe[i,10]                         )+','+;//10
                        sr_cdbvalue(mperc_comissao                         )+','+;//11
                        sr_cdbvalue(m_recebe[i,6]                          )+','+;//12
                        sr_cdbvalue(m_recebe[i,10]                         )+','+;//13
                        sr_cdbvalue(m_recebe[i,3]                          )+','+;//14
                        sr_cdbvalue(m_recebe[i,8]                          )+','+;//15
                        sr_cdbvalue(mnum_dup                               )+','+;//16
                        sr_cdbvalue(mdup_num                               )+','+;//17
                        sr_cdbvalue(IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '))+','+;//18
                        sr_cdbvalue(cNumpdv                                )+','+;//19
                        sr_cdbvalue(cNumcupom                              )+','+;//20
                        sr_cdbvalue(' ')+')',,.f.)

                        mensagem('Atualizando o CONTAS A RECEBER....')
                        IF m_recebe[i,1] = 'DN'
                                sr_getconnection():exec('INSERT INTO sacdupr ('+;
                                'empresa  ,'+; //1
                                'tipo     ,'+; //2
                                'tip_cli  ,'+; //3
                                'fornec   ,'+; //4
                                'cliente  ,'+; //5
                                'emissao  ,'+; //6
                                'venc     ,'+; //7
                                'banco    ,'+; //8
                                'agencia  ,'+; //9
                                'vendedor ,'+; //10
                                'num_ped  ,'+; //11
                                'comissao ,'+; //12
                                'operador ,'+; //13
                                'corrente ,'+; //14
                                'numero   ,'+; //15
                                'duplicata,'+; //16
                                'valor    ,'+; //17
                                'c_c      ,'+; //18
                                'datpag   ,'+; //19
                                'vlpago   ,'+; //20
                                'pago     ,'+; //21
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mcodemp             )+','+; //1
                                sr_cdbvalue(m_recebe[i,1]       )+','+; //2
                                sr_cdbvalue(cli->tipo           )+','+; //3
                                sr_cdbvalue(mcod_cli )+','+; //4
                                sr_cdbvalue(mcliente            )+','+; //5
                                sr_cdbvalue(mdata_sis           )+','+; //6
                                sr_cdbvalue(m_recebe[i,6]       )+','+; //7
                                sr_cdbvalue(m_recebe[i,7]       )+','+; //8
                                sr_cdbvalue(m_recebe[i,13]      )+','+;//9
                                sr_cdbvalue(STRZERO(mcod_vend,3))+','+;//10
                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+;//11
                                sr_cdbvalue(mperc_comissao      )+','+;//12
                                sr_cdbvalue(cod_operado         )+','+;//13
                                sr_cdbvalue(m_recebe[i,15]      )+','+;//14
                                sr_cdbvalue(IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]))+','+;//15
                                sr_cdbvalue(c_duplicata         )+','+;//16
                                sr_cdbvalue(IF(m_recebe[i,1] = 'CT',iat(m_recebe[i,10] - (m_recebe[i,10] * (mdesc_cart / 100)),2),m_recebe[i,10]))+','+;//17
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN',m_recebe[i,14],' '))+','+;//18
                                sr_cdbvalue(mdata_sis           )+','+;//19
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN',m_recebe[i,10],0))+','+;//20
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN','B',' '))+','+;//21
                                sr_cdbvalue(' ')+')',,.f.)
                        ELSE
                                sr_getconnection():exec('INSERT INTO sacdupr ('+;
                                'empresa  ,'+; //1
                                'tipo     ,'+; //2
                                'tip_cli  ,'+; //3
                                'fornec   ,'+; //4
                                'cliente  ,'+; //5
                                'emissao  ,'+; //6
                                'venc     ,'+; //7
                                'banco    ,'+; //8
                                'agencia  ,'+; //9
                                'vendedor ,'+; //10
                                'num_ped  ,'+; //11
                                'comissao ,'+; //12
                                'operador ,'+; //13
                                'corrente ,'+; //14
                                'numero   ,'+; //15
                                'duplicata,'+; //16
                                'valor    ,'+; //17
                                'c_c      ,'+; //18
                                'vlpago   ,'+; //20
                                'pago     ,'+; //21
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mcodemp             )+','+; //1
                                sr_cdbvalue(m_recebe[i,1]       )+','+; //2
                                sr_cdbvalue(cli->tipo           )+','+; //3
                                sr_cdbvalue(mcod_cli )+','+; //4
                                sr_cdbvalue(mcliente            )+','+; //5
                                sr_cdbvalue(mdata_sis           )+','+; //6
                                sr_cdbvalue(m_recebe[i,6]       )+','+; //7
                                sr_cdbvalue(m_recebe[i,7]       )+','+; //8
                                sr_cdbvalue(m_recebe[i,13]      )+','+;//9
                                sr_cdbvalue(STRZERO(mcod_vend,3))+','+;//10
                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+;//11
                                sr_cdbvalue(mperc_comissao      )+','+;//12
                                sr_cdbvalue(cod_operado         )+','+;//13
                                sr_cdbvalue(m_recebe[i,15]      )+','+;//14
                                sr_cdbvalue(IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]))+','+;//15
                                sr_cdbvalue(c_duplicata         )+','+;//16
                                sr_cdbvalue(IF(m_recebe[i,1] = 'CT',iat(m_recebe[i,10] - (m_recebe[i,10] * (mdesc_cart / 100)),2),m_recebe[i,10]))+','+;//17
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN',m_recebe[i,14],' '))+','+;//18
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN',m_recebe[i,10],0))+','+;//20
                                sr_cdbvalue(IF(m_recebe[i,1] = 'DN','B',' '))+','+;//21
                                sr_cdbvalue(' ')+')',,.f.)
                        ENDIF
                NEXT
                //sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        i := 0
        FOR i = 1 TO LEN(m_codigo)
                IF m_codigo[i] = 0
                        LOOP
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[i],5)),,.t.,aret)
                cComm  := "UPDATE sacmerc SET "
                ccomm := ccomm +"saldo_fis = "+sr_cdbvalue(aret[1,1]-m_desc[i,5])
                ccomm := ccomm +",dat_ult_s = "+sr_cdbvalue(mdata_sis)
                ccomm := ccomm +" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_codigo[i],5))
                sr_getconnection():exec(ccomm,,.f.)

                cNumcupom := IBR_NUM_CUPOM()
                cNumpdv   := IBR_NUM_CAIXA()

                mensagem('Atualizando o SACMOVNT....')

                sr_getconnection():exec('INSERT INTO sacmovnt ('+;
                'empresa   ,'+;
                'documento ,'+;
                'num_ecf   ,'+;
                'codigo    ,'+;
                'gru_sub   ,'+;
                'produto   ,'+;
                'especie   ,'+;
                'cod_fab   ,'+;
                'fabrica   ,'+;
                'data_s_e  ,'+;
                'ent_sai   ,'+;
                'quantd    ,'+;
                'pr_venda  ,'+;
                'vl_vend   ,'+;
                'cod_vend  ,'+;
                'cod_cli   ,'+;
                'cliente   ,'+;
                'vl_fatura ,'+;
                'pr_unit   ,'+;
                'cust_mer  ,'+;
                'isento    ,'+;
                'cod_nota  ,'+;
                'tp_venda  ,'+;
                'cond_vezes,'+;
                'cond_intev,'+;
                'tipo      ,'+;
                'comissao  ,'+;
                'num_ped  ,'+;
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(mcodemp               )+','+; //1                sr_cdbvalue(mdocumento            )+','+; //2
                sr_cdbvalue('CP'+ALLTRIM(cNumcupom))+','+; //2                sr_cdbvalue(mnum_ecf              )+','+; //3
                sr_cdbvalue(cNumpdv               )+','+; //3
                sr_cdbvalue(STRZERO(m_codigo[i],5))+','+; //4
                sr_cdbvalue(m_desc[i,1]           )+','+; //5
                sr_cdbvalue(m_desc[i,2]           )+','+; //6
                sr_cdbvalue(m_desc[i,19]          )+','+; //7
                sr_cdbvalue(m_desc[i,3]           )+','+; //8
                sr_cdbvalue(m_desc[i,4]           )+','+;//9
                sr_cdbvalue(mdata_sis             )+','+;//10
                sr_cdbvalue('S'                   )+','+;//11
                sr_cdbvalue(m_desc[i,5]           )+','+;//12
                sr_cdbvalue(m_desc[i,6]           )+','+;//13
                sr_cdbvalue(m_desc[i,7]           )+','+;//14
                sr_cdbvalue(STRZERO(mcod_vend,3)  )+','+;//15
                sr_cdbvalue(mcod_cli   )+','+;//16
                sr_cdbvalue(SUBSTR(mcliente,1,30) )+','+;//17
                sr_cdbvalue(m_desc[i,7]           )+','+;//18
                sr_cdbvalue(m_desc[i,12]          )+','+;//19
                sr_cdbvalue(m_desc[i,17]          )+','+;//20
                sr_cdbvalue(m_desc[i,14]          )+','+;//21
                sr_cdbvalue('B'                   )+','+;//22
                sr_cdbvalue(mtipo_comp            )+','+;//23
                sr_cdbvalue(mcond_vezes           )+','+;//24
                sr_cdbvalue(SUBSTR(mcond_intev,1,2))+','+;//25
                sr_cdbvalue(IF(mpago = '*','03','01'))+','+;//26
                sr_cdbvalue(IF(mtipo_comp = 'AV',m_desc[i,16] + mcom_ven,m_desc[i,16] + mcom_ap))+','+;//27
                sr_cdbvalue(STRZERO(mnum_ped,6))+','+;//28
                sr_cdbvalue(' ')+')',,.f.)
                IF mpago <> '*' .AND. msld_aux = ' '
                        mensagem('Atualizando o SACMOV....')
                        sr_getconnection():exec('INSERT INTO sacmov ('+;
                        'empresa   ,'+;
                        'num_ped   ,'+;
                        'data_ped  ,'+;
                        'documento ,'+;
                        'codigo    ,'+;
                        'gru_sub   ,'+;
                        'produto   ,'+;
                        'especie   ,'+;
                        'cod_fab   ,'+;
                        'fabrica   ,'+;
                        'data_s_e  ,'+;
                        'ent_sai   ,'+;
                        'quantd    ,'+;
                        'pr_venda  ,'+;
                        'vl_vend   ,'+;
                        'cod_oper  ,'+;
                        'cod_cli   ,'+;
                        'cliente   ,'+;
                        'vl_fatura ,'+;
                        'pr_unit   ,'+;
                        'cust_mer  ,'+;
                        'isento    ,'+;
                        'tp_venda  ,'+;
                        'cond_vezes,'+;
                        'cond_intev,'+;
                        'cod_vend  ,'+;
                        'tipo      ,'+;
                        'comissao  ,'+;
                        'cod_presente ,'+;
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodemp               )+','+; //1
                        sr_cdbvalue(STRZERO(mnum_ped,6)   )+','+; //2
                        sr_cdbvalue(mdata_ped             )+','+; //3                        sr_cdbvalue(mdocumento            )+','+; //4
                        sr_cdbvalue('CP'+ALLTRIM(cNumcupom))+','+; //4
                        sr_cdbvalue(STRZERO(m_codigo[i],5))+','+; //5
                        sr_cdbvalue(m_desc[i,1]           )+','+; //6
                        sr_cdbvalue(m_desc[i,2]           )+','+; //7
                        sr_cdbvalue(m_desc[i,19]          )+','+; //8
                        sr_cdbvalue(m_desc[i,3]           )+','+;//9
                        sr_cdbvalue(m_desc[i,4]           )+','+;//10
                        sr_cdbvalue(mdata_sis             )+','+;//11
                        sr_cdbvalue('S'                   )+','+;//12
                        sr_cdbvalue(m_desc[i,5]           )+','+;//13
                        sr_cdbvalue(m_desc[i,6]           )+','+;//14
                        sr_cdbvalue(m_desc[i,7]           )+','+;//15
                        sr_cdbvalue(cod_operado           )+','+;//16
                        sr_cdbvalue(mcod_cli   )+','+;//17
                        sr_cdbvalue(SUBSTR(mcliente,1,30) )+','+;//18
                        sr_cdbvalue(m_desc[i,7]           )+','+;//19
                        sr_cdbvalue(m_desc[i,12]          )+','+;//20
                        sr_cdbvalue(m_desc[i,17]          )+','+;//21
                        sr_cdbvalue(m_desc[i,14]          )+','+;//22
                        sr_cdbvalue(mtipo_comp            )+','+;//23
                        sr_cdbvalue(mcond_vezes           )+','+;//24
                        sr_cdbvalue(SUBSTR(mcond_intev,1,2))+','+;//25
                        sr_cdbvalue(IF(mpago = '*','000',STRZERO(mcod_vend,3)))+','+;//26
                        sr_cdbvalue(IF(mpago = '*','03','02'))+','+;//26
                        sr_cdbvalue(IF(mtipo_comp = 'AV',m_desc[i,16] + mcom_ven,m_desc[i,16] + mcom_ap))+','+;//27
                        sr_cdbvalue(m_desc[i,22])+','+;//28
                        sr_cdbvalue(' ')+')',,.f.)
                ENDIF
        NEXT
        mensagem('Atualizando o CREDITO....')
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF m_recebe[i,1] = 'CR'
                        cons_cred := {}
                        sr_getconnection():exec("SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5]),,.t.,@cons_cred)
                        mcomando := "UPDATE saccred SET datpag = "+sr_cdbvalue(mdata_sis)+",vlpago = "+sr_cdbvalue(m_recebe[i,10])+ ",pago = 'B',operador = "+sr_cdbvalue(cod_operado)+ ",conta = '*',mov_cx = 'C'"
                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                        IF m_recebe[i,10] = cons_cred[1,19]
                                sr_getconnection():exec(mcomando,,.f.)
                        ELSE
                                sr_getconnection():exec(mcomando,,.f.)
                                cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,fornec,cliente,emissao,venc1,venc,valor,vendedor,num_ped,operador,obs,conta,sr_deleted)"
                                ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],2))+","+sr_cdbvalue(mcod_cli)+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(mnum_ped,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        /*
                        opcao := 'N'
                        IF opcao = 'S'
                                IF ! imp_arq('CREDITO.REL','D','N')
                                        LOOP
                                ENDIF
                                IF m_set[1,65] = 'F'
                                        FOR i = 1 TO m_set[1,66]
                                                DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[i,5]+'   ( P A G O )',80))
                        
                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),16);DEVOUT(mdata_sis)
        
                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[i,10],'99,999,999.99')))
                        
                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+mcod_cli+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])
        
                                                DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))
                        
                                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                                EJECT
                                        NEXT
                                
                                ELSE            
                                        mtraco := REPLI('=',60)
                                        FOR i = 1 TO m_set[1,66]
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[i,5]+'   ( P A G O )',35))
        
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[i,10],'99,999,999.99')))
                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+mcod_cli+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])
                        
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))
                
                                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                        NEXT
                                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                                ENDIF
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        ENDIF
                        */
                ENDIF
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        //ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        CLEAR GETS
        RESTSCREEN(01,00,24,79,mbox)
        RESTSCREEN(01,00,24,79,mtela)
        IF mnum <> NIL
                EXIT
        ENDIF
        ********************
        //SELE('ped_s');ORDSETFOCUS(1)
        //UNLOCK
        ********************
        limpa(19,20,22,46)
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************

