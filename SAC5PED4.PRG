********************************************************
* ROMANEIO DE CARGA
*******************************************************
MEMVAR getlist,cod_operado,nivel_acess,mdata_sis
FUNCTION sac5ped4(ml,mn)
******************
LOCAL MPRG:='SAC5PED4',;
      lci,cci,lba,cba,li,ci,lb,cb,mtot_ped,mtot_p,mtot_ger,mtot_qtd,;
      lc,cc,la,ca,i,mcod_cli,mqtd_ped:=0,mcod_ven:='   '
PRIVATE M_pedido:={},m_num:={},opcao,mtot_tempo:=0,op_total,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),marq_ali,mtip_cons,mal,mno,mnum_ped,;
        m_ped:={},mqtd_ger:=0,mtot_geral:=0,mtot_peso:=0,ali,cons_roma:={},;
        cons_ped:={},cons_cli:={},mc_cli:={},mc_cid:={}
IF ! ver_nivel(mprg,'ROMANEIO DE CARGA','123456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
ali := 'ped_s'
mal := ml
mno := mn

lci := 10
cci := 0
lba := 12
cba := 32

lc := 15
cc := 0
la := 21
ca := 32

li := 01
ci := 43
lb := 23
cb := 96
*****************************************************
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
//
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('sacprodu','produ');RETURN NIL;ENDIF
IF ! AbriArq('sacroma','roma');RETURN NIL;ENDIF
IF ! AbriArq('sacnorom','norom');RETURN NIL;ENDIF
*****************************************************
i := 2
op_tela(00,02,24,98,' EMISSAO DE ROMANEIOS '+IF(mal='roma','DE CARGA','DE PRODUCAO'))
botao(lc,cc,la,ca,,' T O T A I S ')
DEVPOS(lc+1,cc+2);DEVOUT('Valor do Pedido......:')
DEVPOS(lc+2,cc+2);DEVOUT('Total Valor..........:')
DEVPOS(lc+3,cc+2);DEVOUT('Quantidade de Pedidos:')
DEVPOS(lc+4,cc+2);DEVOUT('Total Peso...........:')
DEVPOS(lc+5,cc+2);DEVOUT('Total Tempo..........:')
DEVPOS(lc+6,cc+2);DEVOUT('Quantidade de Entrega:')
botao(li,ci,lb,cb,,' Pedidos Solicitados ')
DEVPOS(li+1,ci+1);DEVOUT('No.Ped.      Quantidade Valor Pedido  Vend.')
mtot_ped := mtot_p := mtot_ger := mtot_tempo := mtot_qtd := mqtd_ped := 0
m_ped:={}
m_pedido:={}
m_num:={}
mc_cli:={}
mc_cid:={}
mtipo_imp := m_indiv[1,18]
mtip_cons := 'P'
botao(lci-4,cci,lci-2,cba,,' Tipo de Consulta ')
DEVPOS(lci-3,cci+2);DEVOUT('[P]edido [O]rcamento.:')
@ lci-3,cci+25 GET mtip_cons pict "@!" VALID mtip_cons $ 'P,O'
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
WHILE .T.
        exibi_prg(mprg)
        mensagem('Digite o No.pedido desejado - <ENTER><ENTER>p/imprimir - <ESC>Sair')
        ****************************
        SELE(mal);ORDSETFOCUS(2)
        GO TOP
        ****************************
        mnum_ped := 0
        botao(lci,cci,lba,cba,,' No. do Pedido ')
        @ li+2,ci+1 TO li+2,cb-1

        DEVPOS(lci+1,cci+2);DEVOUT('Digite o No.do Pedido:')
        @ lci+1,cci+25 GET mnum_ped PICT '999999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mnum_ped)
                @ lci+1,cci+25 GET mnum_ped PICT '999999'
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                IF EMPTY(mnum_ped)
                        IF LEN(m_pedido) = 0;atencao('Nao existe pedido solicitado');LOOP;ENDIF
                        imp_rel('1','PEDIDOS')
                        IF (opcao = 'N' .OR. LASTKEY() = 27) .AND. (mimp_tipo = 1 .OR. mimp_tipo = 0)
                                LOOP
                        ENDIF
                        setcor(3)
                        botao(li,ci,lb,cb,,' Pedidos Solicitados ')
                        DEVPOS(li+1,ci+1);DEVOUT('No.Ped.   Valor Pedido')
                        setcor(1)
                        i := 2
                        m_pedido := {}
                        m_num := {}
                        LOOP
                ENDIF
        ENDIF
        IF ASCAN(m_num,STRZERO(mnum_ped,6)) > 0
                atencao('Este pedido ja foi solicitado OK !!!')
                LOOP
        ENDIF
        cons_roma := {}
        IF mal = 'roma'
                sr_getconnection():exec("SELECT num_roma,num_ped FROM sacroma WHERE num_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND (cancel IS NULL OR cancel = ' ') AND ped_orc = "+sr_cdbvalue(mtip_cons),,.t.,@cons_roma)
        ELSE
                sr_getconnection():exec("SELECT num_roma,num_ped FROM sacprodu WHERE num_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND (cancel IS NULL OR cancel = ' ') AND ped_orc = "+sr_cdbvalue(mtip_cons),,.t.,@cons_roma)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_roma) > 0
                atencao('Pedido ja se encontra no ROMANEIO No.:'+cons_roma[1,1]+'Pedidos No.: '+cons_roma[1,2])
                LOOP
        ENDIF
        cons_ped := {}
        IF mtip_cons = 'P'
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        ELSE
                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped  = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Pedido nao encontrado no Arquivo')
                LOOP
        ENDIF
        IF cons_ped[1,93] = 'N';atencao('Este pedido nao e para a PRODUCAO');LOOP;ENDIF
        IF cons_ped[1,49] = 'C'
                atencao('Este Pedido foi CANCELADO !!!')
                opcao := 'N'
                IF mensagem1('Deseja incluir mesmo assim','N','S,N') = 'N';LOOP;ENDIF
        ENDIF
        IF ver_serie() = '141495'
                IF cons_ped[1,49] = ' ' .OR. cons_ped[1,49] = 'NULL'
                        atencao('Este Pedido nao foi  P A G O !!!')
                        LOOP
                ENDIF
        ENDIF
        AADD(m_num,cons_ped[1,2])
        IF ASCAN(mc_cli,cons_ped[1,23]) = 0
                AADD(mc_cli,cons_ped[1,23])
        ENDIF
        mtot_ped := mqtd_ped := 0
        mcod_cli := cons_ped[1,23]
        mcod_ven := cons_ped[1,32]
        cons_cli := {}
        sr_getconnection():exec("SELECT razao,cidade FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_ped[1,23]),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) > 0
                IF ASCAN(mc_cid,cons_cli[1,2]) = 0
                        AADD(mc_cid,cons_cli[1,2])
                ENDIF
        ELSE
                atencao('Nao possivel encontrar o CLIENTE verifique o Pedido...')
                LOOP
        ENDIF
        i:=0
        FOR i = 1 TO LEN(cons_ped)
                AADD(m_pedido,{cons_ped[i,2],cons_ped[i,6],cons_ped[i,7],cons_ped[i,8],cons_ped[i,11],;
                     cons_ped[i,14],cons_ped[i,18],cons_ped[i,23],cons_ped[i,32],cons_ped[i,33]})
                mtot_ped := mtot_ped + (cons_ped[i,14] * cons_ped[i,18])
                mtot_ger := mtot_ger + (cons_ped[i,14] * cons_ped[i,18])
                mqtd_ped := mqtd_ped + cons_ped[i,14]
                mqtd_ger := mqtd_ger + cons_ped[i,14]
                mtot_p := mtot_p + (cons_ped[i,14] * cons_ped[i,11])
                mtot_tempo := mtot_tempo + (VAL(cons_ped[i,92]))
        NEXT
        AADD(m_ped,STRZERO(mnum_ped,6)+'  '+STR(mcod_cli,5)+' - '+cons_cli[1,1]+'  '+TRANSFORM(mqtd_ped,'99,999.99')+'   '+TRANSFORM(mtot_ped,'999,999.99')+'   '+mcod_ven+' '+cons_cli[1,2])
        SETCOR(3)
        DEVPOS(lc+1,cc+25);DEVOUT(TRANSFORM(mtot_ped,'999,999,999.99'))
        DEVPOS(lc+2,cc+25);DEVOUT(TRANSFORM(mtot_ger,'999,999,999.99'))
        DEVPOS(lc+3,cc+25);DEVOUT(TRANSFORM(LEN(m_num),'999,999'))
        DEVPOS(lc+4,cc+25);DEVOUT(TRANSFORM(mtot_p,'999,999,999.9999'))
        DEVPOS(lc+5,cc+25);DEVOUT(TRANSFORM(mtot_tempo,'999,999,999.9999'))
        DEVPOS(lc+6,cc+25);DEVOUT(TRANSFORM(LEN(mc_cli),'999,999'))
        SETCOR(1)
        botao(li,ci,lb,cb,,' Pedidos Solicitados ')
        DEVPOS(li+1,ci+1);DEVOUT('No.Ped.      Quantidade Valor Pedido  Vend.')
        i:=0
        FOR i = 1 TO LEN(m_ped)
                IF i = 20;SCROLL(li+i,ci+1,lb-2,cb-1,1);ENDIF
                //DEVPOS(li+i,ci+01);DEVOUT(STRZERO(mnum_ped,6)+' ³ '+TRANSFORM(mtot_ped,'999,999,999.99'))
                DEVPOS(li+2+i,ci+01);DEVOUT(SUBSTR(m_ped[i],1,6)+'  '+SUBSTR(m_ped[i],53))
        NEXT
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ******************************************
*******************************
*IMPRIMIR A RELACAO DE PEDIDO
*******************************
FUNCTION imp_rel(mvia,tip_rel)
******************************
LOCAL f,i,x,y,mtit,mpag,no_ped1,no_ped2,no_ped3,no_ped4,no_ped5,no_ped6,no_ped7,no_ped8,no_ped9,no_ped10,no_ped11,;
      mtraco,mtot_prod,mmerc,mprod,mqtd_prod,mquantd,mop_total:='S',;
      mtot_qtd:=0,mop_agru:=' ',mli,mci,mla,mca,mtel,tela_ped,mcod_oper,mtipo,;
      mtiprel:='E',mcom_resu:='N',mcidade:='',mcidade2:='',mcidade3:='',mcidade4:='',;
      mcidade5:='',mcidade6:='',h:=0

MEMVAR m_pedido,mnum_roma,m_num,mtela,mtipo_imp,mimp_tipo,marq,mtot_tempo,mtip_cons,;
       mal,mno,mtot_peso,mtot_geral

PRIVATE mcod_mot,mplaca_mot,mcliente,mcpf,mcgc,mobs1,mobs2,mobs3,mobs4,mobs5

mli := mci := 0
mla := 08
mca := 96
op_tela(mli,mci,mla+5,mca,' Fechamento do Romaneio ')
mop_agru := 'P'
mquantd := 2
mop_total := 'S'
IF ver_serie() = '141488'
        mtiprel := 'R'
        mcom_resu := 'C'
        mquantd := 1
ENDIF
DEVPOS(mli+1,mci+1);DEVOUT('Agrupar: [P]roduto [C]liente [D]igitacao Cid[A]de:')
DEVPOS(mli+2,mci+1);DEVOUT('Imprimir Total em R$ [S]im [N]ao:')
DEVPOS(mli+3,mci+1);DEVOUT('Codigo do Transportador.........:')
DEVPOS(mli+4,mci+1);DEVOUT('Placa do Transportador..........:')
DEVPOS(mli+5,mci+1);DEVOUT('Tipo [E]xtrato ou [R]esumo......:')
DEVPOS(mli+6,mci+1);DEVOUT('Resumo Pedidos [C]om [S]o [N]ao.:')
DEVPOS(mli+7,mci+1);DEVOUT('Obsercoes.......................:')
DEVPOS(mli+12,mci+1);DEVOUT('Quantidade de copias............:')
@ mli+1,mci+59 GET mop_agru PICT '@!' VALID mop_agru $ 'P,C,D,A'
@ mli+2,mci+35 GET mop_total PICT '@!' VALID mop_total $ 'S,N'
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
IF mvia = '1'
        mcod_mot := 0
        @ mli+3,mci+35 GET mcod_mot PICT '9999' VALID ver_trans(mcod_mot,mli+3,mci+40,'*')
        @ mli+4,mci+35 GET mplaca_mot PICT '@!'         //WHEN mvia = '1'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_oper := cod_operado
        mplaca_mot := tran->placa
ELSE
        *********
        SELE(mal);ORDSETFOCUS(1)
        (mal)->(DBSEEK(STRZERO(mnum_roma)))
        *********
        mnum_roma := VAL((mal)->num_roma)
        mcod_mot := VAL((mal)->cod_mot)
        mplaca_mot := (mal)->placa_mot
        mcod_oper := (mal)->cod_ope
        setcor(3)
        DEVPOS(mli+3,mci+35);DEVOUTPICT(mcod_mot,'9999')
        DEVPOS(mli+4,mci+35);DEVOUT(mplaca_mot)
        setcor(1)
ENDIF
mobs1 := mobs2 := mobs3 := mobs4 := mobs5 := SPACE(60)
ver_trans(mcod_mot,mli+3,mci+40,'*')
@ mli+5,mci+35 GET mtiprel PICT '@!' VALID mtiprel $ 'E,R' WHEN mop_agru = 'P'
@ mli+6,mci+35 GET mcom_resu PICT '@!' VALID mcom_resu $ 'S,N,C'
@ mli+7,mci+35 GET mobs1 
@ mli+8,mci+35 GET mobs2 
@ mli+9,mci+35 GET mobs3 
@ mli+10,mci+35 GET mobs4 
@ mli+11,mci+35 GET mobs5 
@ mli+12,mci+35 GET mquantd PICT '9' VALID IF(EMPTY(mquantd),.F.,.T.)
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
IF mop_agru = 'P'
        ASORT(m_pedido,,, {|x,y| x[3] < y[3]})
ELSEIF mop_agru = 'C'
        ASORT(m_pedido,,, {|x,y| x[8] < y[8]})
ELSEIF mop_agru = 'A'
        ASORT(m_pedido,,, {|x,y| x[11] < y[11]})
ENDIF
ASORT(m_num)
mtraco := REPLI('=',132)
IF mvia = '1'
        *********
        SELE(mno)
        *********
        GO TOP
        IF LASTREC() = 0
                IF ! ADIREG()
                        atencao('Nao foi possivel gerar o numero do ROMANEIO')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                IF ! BLOQARQ()
                        atencao('Nao foi possivel gerar o numero do ROMANEIO')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        mnum_roma := VAL((mno)->numero)+1
        (mno)->data_ped := mdata_sis
        (mno)->numero := STRZERO(mnum_roma,6)
        DBCOMMIT()
        DBUNLOCK()
        *********
        SELE(mal)
        *********
        i:=0
        FOR i =1 TO LEN(m_num)
                ADIREG()
                (mal)->empresa  := mcodempresa
                (mal)->num_roma := STRZERO(mnum_roma,6)
                (mal)->dat_roma := mdata_sis
                (mal)->num_ped  := m_num[i]
                (mal)->cod_mot  := STRZERO(mcod_mot,4)
                (mal)->placa_mot:= mplaca_mot
                (mal)->cod_ope  := cod_operado
                (mal)->ped_orc  := mtip_cons
                (mal)->obs1     := mobs1
                (mal)->obs2     := mobs2
                (mal)->obs3     := mobs3
                (mal)->obs4     := mobs4
                (mal)->obs5     := mobs5
                DBCOMMIT()
        NEXT
        DBUNLOCKALL()
        atencao('Foi gerado o ROMANEIO DE NUMERO: '+STRZERO(mnum_roma,6))
ENDIF
mensagem('Espere o final da impressao - <ESC>p/cancelar')
i := f := 0
marq := 'REL_PED.REL'
IF ! imp_arq('REL_PED.REL','R')
        wvw_lclosewindow()
        RETURN NIL
ENDIF
IF mcom_resu <> 'S'
        FOR f = 1 TO mquantd
                mqtd_prod := mtot_prod := mtot_geral := mtot_peso := mtot_qtd := 0
                no_ped1 := no_ped2 := no_ped3 := no_ped4 := no_ped5 := no_ped6 := no_ped7 := no_ped8 :=no_ped9 :=no_ped10 :=no_ped11 :=SPACE(80)
                mcidade := mcidade2 := mcidade3 := mcidade4 := mcidade5 := mcidade6 := ''
                IF mtiprel = 'E'
                        mtit := 'Romaneio '+IF(mal='roma','de CARGA','de PRODUCAO')+' No.: '+STRZERO(mnum_roma,6)+' *** EXTRATO *** Tp: '+mtip_cons
                ELSE
                        mtit := 'Romaneio '+IF(mal='roma','de CARGA','de PRODUCAO')+' No.: '+STRZERO(mnum_roma,6)+' *** RESUMO *** Tp: '+mtip_cons
                ENDIF
                mtit := mtit + '   -   Via: '+mvia
                mtipo := 'Quantidades de '+tip_rel+': '+STRZERO(LEN(m_num),6)
                mpag := 0
                i := 0
                FOR i =1 TO LEN(m_num)
                        IF i > 0 .AND. i <=8
                                no_ped1 := RTRIM(no_ped1)+m_num[i]+','
                        ELSEIF i > 8 .AND. i <= 19
                                no_ped2 := RTRIM(no_ped2)+m_num[i]+','
                        ELSEIF i > 19 .AND. i <= 30
                                no_ped3 := RTRIM(no_ped3)+m_num[i]+','
                        ELSEIF i > 30 .AND. i <= 41
                                no_ped4 := RTRIM(no_ped4)+m_num[i]+','
                        ELSEIF i > 41 .AND. i <= 52
                                no_ped5 := RTRIM(no_ped5)+m_num[i]+','
                        ELSEIF i > 52 .AND. i <= 63
                                no_ped6 := RTRIM(no_ped6)+m_num[i]+','
                        ELSEIF i > 63 .AND. i <= 74
                                no_ped7 := RTRIM(no_ped7)+m_num[i]+','
                        ELSEIF i > 74 .AND. i <= 85
                                no_ped8 := RTRIM(no_ped8)+m_num[i]+','
                        ELSEIF i > 85 .AND. i <= 96
                                no_ped9 := RTRIM(no_ped9)+m_num[i]+','
                        ELSEIF i > 96 .AND. i <= 107
                                no_ped10 := RTRIM(no_ped10)+m_num[i]+','
                        ELSEIF i > 107 .AND. i <= 63
                                no_ped11 := RTRIM(no_ped11)+m_num[i]+','
                        ENDIF
                NEXT
                i := 0
                FOR i =1 TO LEN(mc_cid)
                        IF i > 0 .AND. i <=4
                                mcidade := RTRIM(mcidade)+  mc_cid[i]+','
                        ELSEIF i > 4 .AND. i <= 8
                                mcidade2 := RTRIM(mcidade2)+mc_cid[i]+','
                        ELSEIF i > 8 .AND. i <= 12
                                mcidade3 := RTRIM(mcidade3)+mc_cid[i]+','
                        ELSEIF i > 12 .AND. i <= 16
                                mcidade4 := RTRIM(mcidade4)+mc_cid[i]+','
                        ELSEIF i > 16 .AND. i <= 20
                                mcidade5 := RTRIM(mcidade5)+mc_cid[i]+','
                        ELSEIF i > 20
                                mcidade6 := RTRIM(mcidade6)+mc_cid[i]+','
                        ENDIF
                NEXT
                IF mop_agru = 'P'
                        mmerc := m_pedido[1,3]
                        mprod := m_pedido[1,2]
                ELSEIF mop_agru = 'A'
                        mprod := m_pedido[1,11]
                ELSE
                        mprod := m_pedido[1,8]
                ENDIF
                i := 0
                FOR i =1 TO LEN(m_pedido)
                        IF mpag = 0 .OR. PROW() >= 59
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo do Motorista: '+STRZERO(mcod_mot,4)+'-'+tran->razao+'  -  Placa: '+mplaca_mot+'  -  Cod.Operador: '+mcod_oper)
                                DEVPOS(PROW()+1,00);DEVOUT('Quantidade de PEDIDOS: '+TRANSFORM(LEN(m_num),'999,999')+' - Quantidade de ENTREGA: '+TRANSFORM(LEN(mc_cli),'999,999'))
                                /*
                                IF ver_serie() = '141488'
                                        IF mpag = 1
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(RTRIM(mcidade))
                                                IF ! EMPTY(mcidade2)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mcidade2))
                                                ENDIF
                                                IF ! EMPTY(mcidade3)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mcidade3))
                                                ENDIF
                                                IF ! EMPTY(mcidade4)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mcidade4))
                                                ENDIF
                                                IF ! EMPTY(mcidade5)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mcidade5))
                                                ENDIF
                                                IF ! EMPTY(mcidade6)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mcidade6))
                                                ENDIF
                                        ENDIF
                                ENDIF
                                */
                                DEVPOS(PROW()+1,00);DEVOUT(tip_rel+' de Numeros:')
                                IF mpag = 1
                                        h:=0
                                        FOR h = 1 TO LEN(m_num)
                                                IF h = 1
                                                        DEVPOS(PROW()+1,0);DEVOUT(RTRIM(m_num[h]))
                                                ELSEIF h = 12
                                                        DEVPOS(PROW()+1,0);DEVOUT(RTRIM(m_num[h]))
                                                ELSEIF h = 23
                                                        DEVPOS(PROW()+1,0);DEVOUT(RTRIM(m_num[h]))
                                                ELSEIF h = 34
                                                        DEVPOS(PROW()+1,0);DEVOUT(RTRIM(m_num[h]))
                                                ELSE
                                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(RTRIM(m_num[h]))
                                                ENDIF
                                        NEXT
                                        /*
                                        IF ! EMPTY(no_ped2)
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(no_ped2))
                                        ENDIF
                                        IF ! EMPTY(no_ped3)
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(no_ped3))
                                        ENDIF
                                        IF ! EMPTY(no_ped4)
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(no_ped4))
                                        ENDIF
                                        IF ! EMPTY(no_ped5)
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(no_ped5))
                                        ENDIF
                                        IF ! EMPTY(no_ped6)
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(no_ped6))
                                        ENDIF
                                        */
                                ENDIF
				imprt(mtipo_imp,'N')
				IF ! EMPTY(mobs1)
                                	DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs1)
                                ENDIF
				IF ! EMPTY(mobs2)
                                	DEVPOS(PROW()+1,0);DEVOUT('      '+mobs2)
                                ENDIF
				IF ! EMPTY(mobs3)
                                	DEVPOS(PROW()+1,0);DEVOUT('      '+mobs3)
                                ENDIF
				IF ! EMPTY(mobs4)
                                	DEVPOS(PROW()+1,0);DEVOUT('      '+mobs4)
                                ENDIF
				IF ! EMPTY(mobs5)
                                	DEVPOS(PROW()+1,0);DEVOUT('      '+mobs5)
                                ENDIF
                                
				imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,01);DEVOUT('Cod.')
                                DEVPOS(PROW(),08);DEVOUT('Descricao')
                                DEVPOS(PROW(),52);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Vendido')
                                DEVPOS(PROW(),75);DEVOUT('Total')
                                DEVPOS(PROW(),84);DEVOUT('No.Ped')
                                DEVPOS(PROW(),95);DEVOUT('Cod.Ven.')
                                DEVPOS(PROW(),126);DEVOUT('Cliente')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                IF i = 1 .AND. (mop_agru = 'C' .OR. mop_agru = 'D')
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+STR(m_pedido[i,8],5)+' - ')
                                        ver_cli(m_pedido[i,8],PROW(),PCOL(),'*')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('-  Cidade: '+cons_cli[1,24])
                                ELSEIF i = 1 .AND. mop_agru = 'A'
                                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+m_pedido[i,11])
                                ENDIF
                        ENDIF
                        IF mop_agru = 'P'
                                IF mprod <> m_pedido[i,2]
                                        imprt(mtipo_imp,'C')
                                        IF mtiprel = 'R'
                                                DEVPOS(PROW()+1,00);DEVOUT(mprod)
                                                DEVPOS(PROW(),08);DEVOUT(mmerc)
                                        ELSE
                                                DEVPOS(PROW()+1,43);DEVOUT('TOTAL: ')
                                        ENDIF
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        mmerc := m_pedido[i,3]
                                        mprod := m_pedido[i,2]
                                        mtot_prod := mqtd_prod := 0
                                ENDIF
                        ELSEIF mop_agru = 'A'
                                IF mprod <> m_pedido[i,11]
                                        mprod := m_pedido[i,11]
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,43);DEVOUT('TOTAL: ')
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        mtot_prod := 0
                                        mqtd_prod := 0
                                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+m_pedido[i,11])
                                ENDIF
                        ELSE
                                IF mprod <> m_pedido[i,8]
                                        mprod := m_pedido[i,8]
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,43);DEVOUT('TOTAL: ')
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                                        mtot_prod := 0
                                        mqtd_prod := 0
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+STR(m_pedido[i,8],5)+' - ')
                                        ver_cli(m_pedido[i,8],PROW(),PCOL(),'*')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('-  Cidade: '+cons_cli[1,24])
                                ENDIF
                        ENDIF
                        IF mtiprel = 'E'
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(m_pedido[i,2])
                                DEVPOS(PROW(),08);DEVOUT(m_pedido[i,3])
                                DEVPOS(PROW(),50);DEVOUT(TRANSFORM(m_pedido[i,6],'99999.99'))
                                DEVPOS(PROW(),59);DEVOUT(TRANSFORM(m_pedido[i,7],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(m_pedido[i,7] * m_pedido[i,6],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(m_pedido[i,1])
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(m_pedido[i,9]+'-'+SUBSTR(m_pedido[i,10],1,25))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(STR(m_pedido[i,8],5))
                        ENDIF
                        mtot_geral := mtot_geral + (m_pedido[i,7] * m_pedido[i,6])
                        mtot_peso := mtot_peso + (m_pedido[i,5] * m_pedido[i,6])
                        mtot_prod := mtot_prod + (m_pedido[i,7] * m_pedido[i,6])
                        mtot_qtd  := mtot_qtd + m_pedido[i,6]
                        mqtd_prod := mqtd_prod + m_pedido[i,6]
                NEXT
                imprt(mtipo_imp,'C')
                IF mtiprel = 'R'
                        DEVPOS(PROW()+1,00);DEVOUT(mprod)
                        DEVPOS(PROW(),08);DEVOUT(mmerc)
                ELSE
                        DEVPOS(PROW()+1,43);DEVOUT('TOTAL: ')
                ENDIF
                DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                DEVPOS(PROW(),50);DEVOUT(TRANSFORM(mqtd_prod,'99999.99'))
                DEVPOS(PROW(),80);DEVOUT(TRANSFORM(mtot_prod,'999,999.99'))
                mtot_prod := mqtd_prod := 0
                imprt(mtipo_imp,'N')
                IF mop_total = 'S'
                        DEVPOS(PROW()+2,00);DEVOUT('TOTAL GERAL DOS '+tip_rel+' R$: '+TRANSFORM(mtot_geral,'99,999,999.99'))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('QUANTIDADE GERAL..........:    '+TRANSFORM(mtot_qtd,'999,999.9999'))
                DEVPOS(PROW()+1,00);DEVOUT('PESO TOTAL................:    '+TRANSFORM(mtot_peso,'999,999.9999'))
                IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                        DEVPOS(PROW()+1,00);DEVOUT('TEMPO TOTAL DE FABRICACAO.:    '+TRANSFORM(mtot_tempo,'999,999.9999'))
                ENDIF
                EJECT
        NEXT
ENDIF
IF mcom_resu <> 'N'
        FOR f = 1 TO mquantd
                IF mtiprel = 'E'
                        mtit := 'Romaneio '+IF(mal='roma','de CARGA','de PRODUCAO')+' *** RESUMO DE PEDIDOS *** Tp: '+mtip_cons
                ELSE
                        mtit := 'Romaneio '+IF(mal='roma','de CARGA','de PRODUCAO')+' *** RESUMO DE PEDIDOS *** Tp: '+mtip_cons
                ENDIF
                mtit := mtit + '   -   Via: '+mvia
                mtipo := 'Quantidades de '+tip_rel+': '+STRZERO(LEN(m_num),6)
                mpag := i := 0
                FOR i =1 TO LEN(m_ped)
                        IF mpag = 0 .OR. PROW() >= 59
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo do Motorista: '+STRZERO(mcod_mot,4)+'-'+tran->razao+'  -  Placa: '+mplaca_mot+'  -  Cod.Operador: '+mcod_oper)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT('No.Ped.')
                                DEVPOS(PROW(),08);DEVOUT('Cliente')
                                DEVPOS(PROW(),60);DEVOUT('Quantd.')
                                DEVPOS(PROW(),75);DEVOUT('Total')
                                DEVPOS(PROW(),83);DEVOUT('Ven')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Cidade')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(m_ped[i])
                NEXT
                i := mtot_geral := mtot_peso := mtot_qtd  := 0
                FOR i =1 TO LEN(m_pedido)
                        IF mpag = 0 .OR. PROW() >= 56
                                mpag ++
                                IF mpag > 1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT('Codigo do Motorista: '+STRZERO(mcod_mot,4)+'-'+tran->razao+'  -  Placa: '+mplaca_mot+'  -  Cod.Operador: '+mcod_oper)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT('No.Ped.')
                                DEVPOS(PROW(),08);DEVOUT('Cliente')
                                DEVPOS(PROW(),60);DEVOUT('Quantd.')
                                DEVPOS(PROW(),75);DEVOUT('Total')
                                DEVPOS(PROW(),82);DEVOUT('Cod.Ven.')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        mtot_geral := mtot_geral + (m_pedido[i,7] * m_pedido[i,6])
                        mtot_peso := mtot_peso + (m_pedido[i,5] * m_pedido[i,6])
                        mtot_qtd  := mtot_qtd + m_pedido[i,6]
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT('TOTAL GERAL DOS '+tip_rel+' R$: '+TRANSFORM(mtot_geral,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('QUANTIDADE GERAL..........:    '+TRANSFORM(mtot_qtd,'999,999.9999'))
                DEVPOS(PROW()+1,00);DEVOUT('PESO TOTAL................:    '+TRANSFORM(mtot_peso,'999,999.9999'))
                EJECT
        NEXT
ENDIF
SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao(marq)
wvw_lclosewindow()
RETURN NIL

