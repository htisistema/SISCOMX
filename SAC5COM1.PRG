*************************
* LISTAGEM DE COMISSAO DE OPERADOR
*************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac5com1(mtipo_rel)
***************
LOCAL MPRG:='SAC5COM1',;
      opcao,lba,cba,aret:={},ccomm:='',x := 0

PRIVATE mcod_vend,mcomissao:=0,mcom_ven:=0,mdata1,mdata2,mnome_ven,mcli_ven,mcota:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,mcodemp:=SPACE(3),;
        mexcel:='N'

IF ! ver_nivel(mprg,'RELATORIO DE COMISSAO DE OPERADORES','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(1,10,22,72,' Comissao por Vendedor/Operador ')

WvW_PBSetFont( NIL, 'times', 25, 10,)
nBota  := wvw_pbCreate(NIL, 2,10, 4,55,'1 -> EXTRATO COMISSAO (venda)',NIL,{||impven()})
nBota1 := wvw_pbCreate(NIL, 6,10, 8,55,'2 -> RESUMO COMISSAO (venda)',NIL,{||impres()})
nBota2 := wvw_pbCreate(NIL,10,10,12,55,'3 -> PRODUTOS VENDIDO (venda)',NIL,{||conprod('*')})
nBota3 := wvw_pbCreate(NIL,14,10,16,55,'4 -> COMISSAO NO RECEBIMENTO (c.receber)',NIL,{||ver_comissao()})
nBota4 := wvw_pbCreate(NIL,18,10,20,55,'<ESC> -> SAIR',NIL,{||com_sair()})
WVW_PBEnable( NIL, nBota, .T. )
WVW_PBEnable( NIL, nBota1, .T. )
WVW_PBEnable( NIL, nBota2, .T. )
WVW_PBEnable( NIL, nBota3, .T. )
WHILE .T.
        INKEY(0)
        IF LASTKEY() = 27
                WVW_PBDestroy( NIL, nBota )
                WVW_PBDestroy( NIL, nBota1)
                WVW_PBDestroy( NIL, nBota2)
                WVW_PBDestroy( NIL, nBota3)
                WVW_PBDestroy( NIL, nBota4)
                wvw_lclosewindow()
                RETURN NIL
        ELSEIF LASTKEY() = 49
                impven()
        ELSEIF LASTKEY() = 50
                impres()
        ELSEIF LASTKEY() = 51
                conprod('*')
        ELSEIF LASTKEY() = 52
                ver_comissao()
        ENDIF
ENDDO
RETURN NIL
*********************** f i m ************************************
FUNCTION com_sair()
*******************
KEYBOARD CHR(27)
RETURN NIL

*********************** f i m ************************************
* IMPRIMI MOVIMENTO DE COMISSAO DO VENDEDOR EXTRATOS
*******************************
FUNCTION impven
**************
LOCAL mprg:='SAC5COM1',lba,cba,opcao,i:=0,mtecla,;
      point,msele,morde,mdesc,mdata_dia,mtolera,;
      mtot_av,mcom_av,mtipo_com,mvlr_av,mvlr_ap,mperc_comi:=0,;
      mtp_comi,mqtd_ped:=0,m_prod:={},mimp_prod:='N',;
      mvlr_com,mvlr_com1,mvlr_ok,mtot_dif,mtot_com:=0,mtot_ok,mop_tot:=' ',;
      m_tabela:={},m_descri:={},mponto:=0,mcod_tab,mimp_tab:=' ',cons_prod:={}

MEMVAR mcli_ven,mdata1,mdata2,mcod_vend,mcota,mtipo_imp,mimp_tipo,marq

PRIVATE mcliente,mcpf,mcgc,mtot_comiss,mcom_dia,mreducao,mtot_dia,mvlr_sai,;
        mtot_ped,mdata,mcod_cli,mdoc,mtraco,mcom_ped,mpag:=0,mtit,mtipo,;
        mvalor:=0,mtipo_rel := ' ',mtip_comi:='1',mt_comissao:='V',mcod_oper,mt_c,;
        cons_mov:={},mlist_pre:='',;
        mcod_vend,mcomissao:=0,mcom_ven:=0,mdata1,mdata2,mnome_ven,mcli_ven,mcota:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,mcodemp:=SPACE(3),;
        mexcel:='N'

mtraco := REPLI('=',132)

lba := 15
cba := 90

//msele := SELE()
//morde := INDEXORD()
op_tela(0,0,lba+2,cba,'IMPRIMI MOVIMENTO DE COMISSAO DO VENDEDOR EXTRATOS')
WHILE .T.
        mdata1 := mdata_sis -30
        mdata2 = mdata_sis
        mcod_vend = 0
        mtipo_imp := m_indiv[1,18]
        mtot_av := mcom_av := mreducao := mtolera := mvlr_com := mvlr_com1 := ;
        mvlr_ok := mtot_dif := mtot_ok := mtot_com := 0
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mdoc := SPACE(8)
        mdata := CTOD('  /  /  ')
        mcli_ven := mimp_prod := mexcel := mlist_pre := 'N'
        mtp_comi := m_set[1,21]
        mt_comissao := 'V'
        mtipo_rel := mtip_comi := '1'
        mt_c := mop_tot := mimp_tab := 'S'
        ASIZE(m_prod,0)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 3,0 TO 3,cba
        DEVPOS( 0,2);DEVOUT('Codigo Operador/Vendedor.......................:')
        DEVPOS( 1,2);DEVOUT('Data Inicial...................................:')
        DEVPOS( 2,2);DEVOUT('Data Final.....................................:')
        DEVPOS( 4,2);DEVOUT('Tolerancia.....................................:')
        DEVPOS( 5,2);DEVOUT('(%) reducao....................................:')
        DEVPOS( 6,2);DEVOUT('Vendedor Relacionado c/Cliente [s/N]...........:')
        DEVPOS( 7,2);DEVOUT('Tipo Comissao <V>enda ou <R>ecebimento de Doc..:')
        DEVPOS( 8,2);DEVOUT('Comissao:<V>endedor, <O>perador ou <M>ontador..:')
        DEVPOS( 9,2);DEVOUT('Imprimir os Produtos Comissionados [S/N].......:')
        DEVPOS(10,2);DEVOUT('Gerar Arquivo p/Planilha EXCEL [S/N]...........:')
        DEVPOS(11,2);DEVOUT('Tipo de Relatorio [1,2,3,4]....................:')
        DEVPOS(12,2);DEVOUT('Tipo de Comissao [1,2].........................:')
        DEVPOS(13,2);DEVOUT('Imprimir Comissao com zerada ou menor [S/N]....:')
        DEVPOS(14,2);DEVOUT('Deseja Imprimir Totalizador dos Dias [S/N].....:')
        DEVPOS(15,2);DEVOUT('Deseja Imp.Resumo das Tabelas Pagamento [S/N]..:')
        DEVPOS(16,2);DEVOUT('So Produto Lista Presente [S/N]................:')
        DEVPOS(17,2);DEVOUT('Percentual de Comissao na Liquidez (%).........:')

        @ 0,50 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,0,54))
        @ 1,50 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,50 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,50 GET mtolera PICT '999.99'
        @ 5,50 GET mreducao PICT '999.99'
        @ 6,50 GET mcli_ven PICT '@!' VALID mcli_ven $ 'S,N'
        @ 7,50 GET mtp_comi PICT '@!' VALID mtp_comi $ 'V,R'
        @ 8,50 GET mt_comissao PICT '@!' VALID mt_comissao $ 'V,O,M'    // WHEN mtp_comi = 'V'
        @ 9,50 GET mimp_prod PICT '@!' VALID mimp_prod $ 'S,N' WHEN mtp_comi = 'V'
        @ 10,50 GET mexcel PICT '@!' VALID mexcel $ 'S,N' WHEN mtp_comi = 'R'
        @ 11,50 GET mtipo_rel  PICT '9' VALID mtipo_rel $ '1,2,3,4'
        @ 12,50 GET mtip_comi PICT '9' VALID mtipo_rel $ '1,2' WHEN mtp_comi = 'V'
        @ 13,50 GET mt_c PICT '@!' VALID mt_c $ 'S,N'
        @ 14,50 GET mop_tot PICT '@!' VALID mop_tot $ 'S,N'
        @ 15,50 GET mimp_tab PICT '@!' VALID mimp_tab $ 'S,N'
        @ 16,50 GET mlist_pre PICT '@!' VALID mlist_pre $ 'S,N'
        @ 17,50 GET mcom_ven PICT '999.99' WHEN mtp_comi = 'R'
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RELEASE ALL
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma as Datas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'COM_VEND.REL'
        IF ! imp_arq('COM_VEND.REL','R')
                LOOP
        ENDIF
        IF mt_comissao = 'V'
                mtit := IF(ver_serie() = '141302','REPRESENTANTE: ','VENDEDOR: ')+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        ELSEIF mt_comissao = 'O'
                mtit := 'OPERADOR: '+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        ELSEIF mt_comissao = 'M'
                mtit := 'MONTADOR: '+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        ENDIF

        mtipo := 'Comissao periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2) + ' - '+mtipo_rel
        cabecalho(mpag,mtit,mtipo,mprg)
        IF mtp_comi = 'R'
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                           Doc.(NF)    Tot.Recebido      comissao (R$)      Comi.(%)   No.Ped Ope TM')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'N')
                ver_comissao('E')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
                IF mexcel = 'S'
                         MYRUN("EXCEL.EXE SACCOMI.XLS")
                ENDIF
                RELEASE ALL
                EXIT
        ENDIF

        mensagem('Aguarde Coletando dados para este Relatorio !!!')
        aret:={}
        sr_getconnection():exec("SELECT codigo,descri,percent FROM sactabpg",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        FOR i = 1 TO LEN(aret)
                AADD(m_tabela,aret[i,1])
                AADD(m_descri,{aret[i,2],aret[i,3],0,0})
        NEXT
        cons_mov := {}
        cComm  := "SELECT * FROM sacmov WHERE data_s_e >= "+sr_cdbvalue(mdata1)+" AND  data_s_e <= "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND tipo = '02' AND vl_vend > "+sr_cdbvalue(0)
        ccomm := ccomm + " AND (documento LIKE 'PD%' OR documento LIKE 'CP%' OR num_ped = 'CUPOME')"
        cComm  := ccomm +" AND cod_vend IS NOT NULL  AND devolucao IS NULL AND documento NOT LIKE 'BL%' AND documento NOT LIKE 'TR%'"
        IF mt_comissao = 'V'
                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'M'
                ccomm := ccomm + " AND NOT montador = "+sr_cdbvalue(STRZERO(mcod_vend,3))+" AND NOT montador1 = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND NOT cod_oper = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND com_oper IS NOT NULL"
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
        ccomm := ccomm + " ORDER BY data_s_e,cod_vend,num_ped"
        sr_getconnection():exec(ccomm,,.t.,cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        mdata_dia := mdata := cons_mov[1,16]
        mcom_dia := mtot_dia := mtot_comiss := mvlr_sai := mvlr_ok :=;
        mtot_ped := mvlr_av := mvlr_ap := mqtd_ped := mtot_ok := mtot_com := 0
        mdoc := cons_mov[1,2]
        mensagem('Espere o Final da Impressao OK !!!')
        //marq := 'COM_VEND.REL'
        //IF ! imp_arq('COM_VEND.REL','R')
        //        LOOP
        //ENDIF
        mpag := 1
        imprt(mtipo_imp,'C')
        IF mtip_comi = '2'
                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cliente                        Doc.(NF) Tot.Recebido  Comi(R$)    Comi(%)  Tot.Tab. Comi.(R$)    Dif.(%)  Dif.(R$) TC Oper')
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                        Doc.(NF) Tot.Recebido  Comi(R$)    Comi(%)                           TC Oper')
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mdata_dia := cons_mov[1,16]
        i:=0
        FOR i = 1 TO LEN(cons_mov)
                prog_imp(cons_mov[i,89],DTOC(cons_mov[i,16]))
                m_prod := {}
                IF mcli_ven = 'S' .AND. mt_comissao = 'V'
                        aret:={}
                        sr_getconnection():exec("SELECT codvend FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_vend,3)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF (LEN(aret) > 0 .AND. aret[1,1] <> cons_mov[i,36]) .OR. LEN(aret) = 0
                                LOOP
                        ENDIF
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT pcod_tab,ppag FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_mov[i,6]),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        IF aret[1,2] = 'C'
                                LOOP
                        ENDIF
                        mcod_tab := aret[1,1]
                ENDIF
                IF mdata_dia <> cons_mov[i,16] .AND. mtot_dia > 0 .AND. mop_tot = 'S'
                        DEVPOS(PROW()+1,37);DEVOUT('                  ------------')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('------------')
                        DEVPOS(PROW()+1,37);DEVOUT('Total do Dia R$.:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mcom_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(iat((mtot_dia/mcota) * 100,2),'9,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        mdata_dia := cons_mov[i,16]
                        mcom_dia := mtot_dia := 0
                ENDIF

                mcliente := SPACE(30)
                mdoc := cons_mov[i,2]
                mtot_ped := mcom_ped := mvlr_com := mvlr_com1 := mvlr_ok  := mcomissao := 0
                mcod_cli := cons_mov[i,36]
                mcliente := cons_mov[i,37]
                mcod_oper := cons_mov[i,30]
                mdata := cons_mov[i,16]
                mtipo_com := cons_mov[i,70]
                imprt(mtipo_imp,'C')
                WHILE mdoc = cons_mov[i,2]
                        IF mt_comissao = 'V'
                                cons_prod:={}
                                sr_getconnection():exec("SELECT comissao FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_mov[i,10]),,.t.,@cons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_prod) = 0
                                        mcomissao:=0
                                ELSE
                                        mcomissao:= cons_prod[1,1]
                                ENDIF
                        ELSEIF mt_comissao='O'
                                mcomissao:=cons_mov[i,31]
                        ELSEIF mt_comissao='M'
                                IF STRZERO(mcod_vend,3) = cons_mov[i,32]
                                        mcomissao:=cons_mov[i,33]
                                ELSEIF STRZERO(mcod_vend,3) = cons_mov[i,34]
                                        mcomissao:=cons_mov[i,35]
                                ELSE
                                        mcomissao:=0
                                ENDIF
                        ENDIF
                        IF (((cons_mov[i,22]*cons_mov[i,19])-(cons_mov[i,23]*cons_mov[i,19]))/(cons_mov[i,22]*cons_mov[i,19]))*100 > mtolera;
                           .AND. mtolera > 0
                                mcomissao := mcomissao - mreducao
                        ENDIF
*                       IF(ver_serie() = '141351',mvalor := cons_mov[i,22],mvalor := cons_mov[i,23])
                        IF mt_c = 'N' .AND. (mcom_ven+mcomissao) <= 0
                                LOOP
                        ENDIF
                        mvalor := cons_mov[i,23]
                        mvlr_sai = mvlr_sai + mvalor * cons_mov[i,19]
                        mtot_comiss = mtot_comiss + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        mcom_ped = mcom_ped + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        mtot_ped = mtot_ped + (mvalor * cons_mov[i,19])
                        mtot_dia = mtot_dia + mvalor * cons_mov[i,19]
                        mcom_dia = mcom_dia + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        IF mtipo_com = 'AV'
                                mvlr_av := mvlr_av + (mvalor * cons_mov[i,19])
                        ELSE
                                mvlr_ap := mvlr_ap + (mvalor * cons_mov[i,19])
                        ENDIF
                        IF mtip_comi = '2'
                                mvlr_ok  := mvlr_ok + (cons_mov[i,22] * cons_mov[i,19])
                                AADD(m_prod,'   '+cons_mov[i,10]+'-'+LEFT(cons_mov[i,11],35)+' '+TRANSFORM(cons_mov[i,19],'999999.99')+' '+TRANSFORM(cons_mov[i,23],'99,999.99')+' '+TRANSFORM(cons_mov[i,23] * cons_mov[i,19],'99,999.99')+' '+TRANSFORM((mcom_ven+mcomissao),'999.9999')+' '+TRANSFORM(iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2),'99,999.99')+' '+TRANSFORM(cons_mov[i,22],'99,999.99')+' '+TRANSFORM(iat((cons_mov[i,22] * cons_mov[i,19]),2),'99,999.99')+' '+;
                                TRANSFORM(iat(((cons_mov[i,22] * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2),'99,999.99')+' '+TRANSFORM(iat(((cons_mov[i,23] * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2) - iat(((cons_mov[i,22] * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2) + ((cons_mov[i,23] * cons_mov[i,19]) - (cons_mov[i,22] * cons_mov[i,19])),'9999.99'))
                        ELSE
                                AADD(m_prod,cons_mov[i,10]+'-'+cons_mov[i,11]+' Qtd.:'+TRANSFORM(cons_mov[i,19],'999999.99')+' Vlr.:'+TRANSFORM(cons_mov[i,23],'999,999.99')+' Total:'+TRANSFORM(cons_mov[i,23] * cons_mov[i,19],'999,999.99')+' Comissao:'+TRANSFORM((mcom_ven+mcomissao),'99.9999')+'%  Vlr.:'+TRANSFORM(iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2),'99,999.99'))
                        ENDIF
                        i++
                        IF i > LEN(cons_mov)
                               EXIT
                        ENDIF
                ENDDO
                i := i - 1
                mqtd_ped ++
                mperc_comi := (mcom_ped/mtot_ped)*100
                mvlr_com  := mtot_ped * (mperc_comi/ 100)
                mvlr_com1 := mvlr_ok * (mperc_comi/ 100)
                mtot_com  := mtot_com + (mvlr_ok * (mperc_comi/ 100))
                mtot_ok   := mtot_ok + mvlr_ok
                mponto := ASCAN(m_tabela,mcod_tab)
                IF mponto > 0
                        m_descri[mponto,3] := m_descri[mponto,3] + mtot_ped
                        m_descri[mponto,4] := m_descri[mponto,4] + mtot_ped * (mperc_comi/ 100)
                ENDIF                
                IF mtip_comi = '2'
                       DEVPOS(PROW()+1,00);DEVOUT(DTOC(mdata)+' '+STR(mcod_cli,5)+'-'+LEFT(mcliente,26)+' '+mdoc+' '+TRANSFORM(mtot_ped,'999,999.99')+' '+TRANSFORM(mtot_ped * (mperc_comi/ 100),'99,999.99')+' '+TRANSFORM(mperc_comi,'999.999999')+' '+TRANSFORM(mvlr_ok,'99,999.99')+' '+TRANSFORM(mvlr_com1,'99,999.99')+' '+TRANSFORM(((mvlr_com-mvlr_com1)+(mtot_ped-mvlr_ok)/mvlr_ok)*100,'999.999999')+' '+TRANSFORM((mtot_ped-mvlr_ok) + (mvlr_com-mvlr_com1),'99,999.99')+' '+mtipo_com+' '+mcod_oper)
                ELSE
                       DEVPOS(PROW()+1,00);DEVOUT(DTOC(mdata)+' '+STR(mcod_cli,5)+'-'+mcliente+' '+mdoc+' '+TRANSFORM(mtot_ped,'999,999.99')+' '+TRANSFORM(mtot_ped * (mperc_comi/ 100),'99,999.99')+' '+TRANSFORM(mperc_comi,'999.999999')+'                                '+mtipo_com+' '+mcod_oper)
                ENDIF
                IF mimp_prod = 'S'
                        x := 0
                        DEVPOS(PROW()+1,00);DEVOUT('   Produto                                     Quantd.  Pr.Unit.     Total  Comi(%)  Comi(R$)   Pr.Tab.     Total  Dif.(R$) Dif.(%)')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        FOR x = 1 TO LEN(m_prod)
                                DEVPOS(PROW()+1,00);DEVOUT(m_prod[x])
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                ENDIF
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        IF mtip_comi = '2'
                                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cliente                        Doc.(NF) Tot.Recebido  Comi(R$)    Comi(%)  Tot.Tab. Comi.(R$)    Dif.(%)  Dif.(R$) TC Oper')
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                        Doc.(NF) Tot.Recebido  Comi(R$)    Comi(%)                           TC Oper')
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        IF PROW() >= 59
                 EJECT
                 mpag ++
                 cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Resumo Geral')
        DEVPOS(PROW()+1,00);DEVOUT('Qtd.Pedidos.........: '+TRANSFORM(mqtd_ped,'9,999,999'))
        DEVPOS(PROW()+1,00);DEVOUT('Total Saidas R$.....: '+TRANSFORM(mvlr_sai,'999,999.99')+IF(mtip_comi = '2',' - Prc.Tabela R$: '+TRANSFORM(mtot_ok,'999,999.99')+' - Diferenca R$: '+TRANSFORM(mvlr_sai - mtot_ok,'999,999.99'),''))
        DEVPOS(PROW()+1,00);DEVOUT('Comissao R$.........: '+TRANSFORM(mtot_comiss,'999,999.99')+IF(mtip_comi = '2',' - Prc.Tabela R$: '+TRANSFORM(mtot_com,'999,999.99')+' - Diferenca R$: '+TRANSFORM((mtot_comiss-mtot_com),'999,999.99'),''))
        IF mtip_comi = '2'
                DEVPOS(PROW()+1,00);DEVOUT('Dif. Total R$.......: '+TRANSFORM((mtot_comiss-mtot_com) + (mvlr_sai - mtot_ok),'999,999.99'))
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT('Cota R$.............: '+TRANSFORM(mcota,'999,999.99')+' - Saldo R$: '+TRANSFORM(mvlr_sai - mcota,'999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Vendas Avista R$: '+TRANSFORM(mvlr_av,'9,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT('Vendas Aprazo R$: '+TRANSFORM(mvlr_ap,'9,999,999.99'))
        IF mimp_tab = 'S'
                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT('Resumo Geral das TABELAS')
                FOR i = 1 TO LEN(m_tabela)
                        DEVPOS(PROW()+1,00);DEVOUT('Tabela: '+m_tabela[i]+'-'+m_descri[i,1]+' (%)comissao: '+TRANSFORM(m_descri[i,2],'999.99')+' - Valor Total: '+TRANSFORM(m_descri[i,3],'999,999.99')+' - Total Comissao: '+TRANSFORM(m_descri[i,4],'999,999.99'))
                NEXT                
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************
* IMPRIMI RESUMO DE COMISSAO DO VENDEDOR
*******************************
FUNCTION impres
**************
LOCAL mprg:='SAC5COM1',lba,cba,opcao,i,mtecla,;
      mreducao,mtolera,mcom_av,mtot_av,;
      mvlr_av,mvlr_ap,msele,morde,mtp_comi,aret:={},ccomm:='',mlist_pre:='',cons_prod:={}

MEMVAR mtraco,mcli_ven,mcod_vend,mnome_ven,mcota,mdata1,mdata2,mtipo_imp,mimp_tipo,marq,;
       mvalor

PRIVATE mvlr_sai,mtot_comiss,mtot_dia,mcom_dia,mdata_dia,mpag:=1,mtit,mtipo,mtipo_rel:='1',;
        mtip_comi:='1',mt_comissao:='V',mt_c,cons_mov:={},;
        mcod_vend,mcomissao:=0,mcom_ven:=0,mdata1,mdata2,mnome_ven,mcli_ven,mcota:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,mcodemp:=SPACE(3),;
        mexcel:='N'

mtraco := REPLI('=',80)

lba := 12
cba := 60

msele := SELE()
morde := INDEXORD()
CLEAR GETS
op_tela(0,0,lba+2,cba,'IMPRIMI RESUMO DE COMISSAO DO VENDEDOR')
WHILE .T.
        mdata1 := mdata_sis -30
        mdata2 = mdata_sis
        mcod_vend = 0
        mtipo_imp := m_indiv[1,18]
        mcomissao := mreducao := mtolera := 0
        mcli_ven :=  mlist_pre := 'N'
        mtp_comi := m_set[1,21]
        mt_comissao := 'V'
        mtipo_rel := mtip_comi := '1'
        mt_c := 'S'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 3,0 TO 3,cba
        DEVPOS( 0,2);DEVOUT('Codigo Operador/Vendedor.......................:')
        DEVPOS( 1,2);DEVOUT('Data Inicial...................................:')
        DEVPOS( 2,2);DEVOUT('Data Final.....................................:')
        DEVPOS( 4,2);DEVOUT('Tolerancia.....................................:')
        DEVPOS( 5,27);DEVOUT('(%) de reducao................................:')
        DEVPOS( 6,2);DEVOUT('Cliente relacionado c/vendedor [s/N]...........:')
        DEVPOS( 7,2);DEVOUT('Tipo Comissao <V>enda ou <R>ecebimento de Doc..:')
        DEVPOS( 8,2);DEVOUT('Comissao:<V>endedor, <O>perador ou <M>ontador..:')
        DEVPOS( 9,2);DEVOUT('Tipo de Relatorio [1,2,3,4]....................:')
        DEVPOS(10,2);DEVOUT('Tipo de Comissao [1,2].........................:')
        DEVPOS(11,2);DEVOUT('Imprimir Comissao com zerada ou menor [S/N]....:')
        DEVPOS(12,2);DEVOUT('So Produto Lista Presente [S/N]................:')

        @ 0,50 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,0,54))
        @ 1,50 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,50 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,50 GET mtolera PICT '999.99'
        @ 5,50 GET mreducao PICT '999.99'
        @ 6,50 GET mcli_ven PICT '@!' VALID mcli_ven $ 'S,N'
        @ 7,50 GET mtp_comi PICT '@!' VALID mtp_comi $ 'V,R'
        @ 8,50 GET mt_comissao PICT '@!' VALID mt_comissao $ 'V,O,M' WHEN mtp_comi = 'V'
        @ 9,50 GET mtipo_rel PICT '9' VALID mtipo_rel $ '1,2,3,4'
        @ 10,50 GET mtip_comi PICT '9' VALID mtipo_rel $ '1,2' WHEN mtp_comi = 'V'
        @ 11,50 GET mt_c PICT '@!' VALID mt_c $ 'S,N'
        @ 12,50 GET mlist_pre PICT '@!' VALID mlist_pre $ 'S,N'
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma as Datas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        cons_mov:={}
        mensagem('Aguarde Coletando dados para este Relatorio !!!')
        cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND tipo = '02' AND vl_vend > "+sr_cdbvalue(0)
        ccomm := ccomm + " AND (documento LIKE 'PD%' OR documento LIKE 'CP%' OR num_ped = 'CUPOME')"
        cComm  := ccomm +" AND cod_vend IS NOT NULL  AND devolucao IS NULL AND documento NOT LIKE 'BL%' AND documento NOT LIKE 'TR%'"
        IF mt_comissao = 'V'
                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'M'
                ccomm := ccomm + " AND NOT montador = "+sr_cdbvalue(STRZERO(mcod_vend,3))+" AND NOT montador1 = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND NOT cod_oper = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND com_oper IS NOT NULL"
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
        ccomm := ccomm + " ORDER BY data_s_e,cod_vend,num_ped"
        sr_getconnection():exec(ccomm,,.t.,cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        mcom_dia := mtot_dia := mtot_comiss := mvlr_sai := mtot_av := ;
        mcom_av := mvlr_av := mvlr_ap := 0
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'RES_COM.REL'
        IF ! imp_arq('RES_COM.REL','R')
                LOOP
        ENDIF
        mpag := 1
        IF mt_comissao = 'V'
                mtit := IF(ver_serie() = '141302','REPRESENTANTE: ','VENDEDOR: ')+STRZERO(mcod_vend,3)          //+' - '+RTRIM(mnome_ven)
        ELSE
                mtit := 'OPERADOR: '+STRZERO(mcod_vend,3)+' - '+RTRIM(mnome_ven)
        ENDIF
        mtipo := 'Comissao periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)+' - '+mtipo_rel
        cabecalho(mpag,mtit,mtipo,mprg)
        DEVPOS(PROW()+1,00);DEVOUT('  Data')
        DEVPOS(PROW(),14);DEVOUT('Venda do dia')
        DEVPOS(PROW(),31);DEVOUT('Comissao Dia')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Venda / Cota')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        IF mtp_comi = 'R'
                ver_comissao('R')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ELSE
                mdata_dia := cons_mov[1,16]
                i:=0
                FOR i = 1 TO LEN(cons_mov)
                        prog_imp(i,DTOC(cons_mov[i,16]))
                        IF mcli_ven = 'S' .AND. mt_comissao = 'V'
                                aret:={}
                                sr_getconnection():exec("SELECT codvend FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_vend,3)),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF (LEN(aret) > 0 .AND. aret[1,1] <> cons_mov[i,36]) .OR. LEN(aret) = 0
                                        LOOP
                                ENDIF
                        ENDIF
                        aret:={}
                        sr_getconnection():exec("SELECT pcod_tab,ppag FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_mov[i,6]),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(aret) > 0
                                IF aret[1,2] = 'C'
                                        LOOP
                                ENDIF
                                mcod_tab := aret[1,1]
                        ENDIF
                        IF mdata_dia <> cons_mov[i,16] .AND. mtot_dia > 0
                                DEVPOS(PROW()+1,00);DEVOUT(mdata_dia)
                                DEVPOS(PROW(),12);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                DEVPOS(PROW(),29);DEVOUTPICT(mcom_dia,'999,999,999.99')
*                               DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(iat((mtot_dia * (mcomissao / 100)),2) + mcom_dia,'999,999,999.99')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(iat((mtot_dia/mcota) * 100,2),'9,999.99')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('%')
                                mdata_dia := cons_mov[i,16]
                                mcom_dia := mtot_dia := 0
                        ENDIF

                        IF mt_comissao = 'V'
                                cons_prod:={}
                                sr_getconnection():exec("SELECT comissao FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_mov[i,10]),,.t.,@cons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_prod) = 0
                                        mcomissao:=0
                                ELSE
                                        mcomissao:= cons_prod[1,1]
                                ENDIF
                                //mcomissao:=cons_mov[i,29]
                        ELSEIF mt_comissao='O'
                                mcomissao:=cons_mov[i,31]
                        ELSEIF mt_comissao='M'
                                IF STRZERO(mcod_vend,3) = cons_mov[i,32]
                                        mcomissao:=cons_mov[i,33]
                                ELSEIF STRZERO(mcod_vend,3) = cons_mov[i,34]
                                        mcomissao:=cons_mov[i,35]
                                ELSE
                                        mcomissao:=0
                                ENDIF
                        ENDIF
*                       IF(mt_comissao='O',mcomissao:=cons_mov[i,31],mcomissao:=cons_mov[i,29])
*                       IF(mt_comissao='M',IF(STRZERO(mcod_vend,3)=cons_mov[i,32],mcomissao:=cons_mov[i,33],mcomissao:=cons_mov[i,33]1),mcomissao:=0)
                        IF (((cons_mov[i,22]*cons_mov[i,19])-(cons_mov[i,23]*cons_mov[i,19]))/(cons_mov[i,22]*cons_mov[i,19]))*100 > mtolera;
                        .AND. mtolera > 0
                                mcomissao := mcomissao - mreducao
                        ENDIF
                        IF mt_c = 'N' .AND. (mcom_ven+mcomissao) <= 0
                                LOOP
                        ENDIF
*                       IF(ver_serie() = '141351',mvalor := cons_mov[i,22],mvalor := cons_mov[i,23])
                        mvalor := cons_mov[i,23]
                        mvlr_sai = mvlr_sai + mvalor * cons_mov[i,19]
                        mtot_comiss = mtot_comiss + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        mtot_dia = mtot_dia + mvalor * cons_mov[i,19]
                        mcom_dia = mcom_dia + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao)/ 100)),2)
                        mcom_av = mcom_av + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        mtot_av = mtot_av + mvalor * cons_mov[i,19]
                        IF cons_mov[i,70] = 'AV'
                                mvlr_av := mvlr_av + (mvalor * cons_mov[i,19])
                        ELSE
                                mvlr_ap := mvlr_ap + (mvalor * cons_mov[i,19])
                        ENDIF
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                        ENDIF
                NEXT
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                IF mtot_dia > 0
                        DEVPOS(PROW()+1,00);DEVOUT(mdata_dia)
                        DEVPOS(PROW(),12);DEVOUTPICT(mtot_dia,'999,999,999.99')
                        DEVPOS(PROW(),29);DEVOUTPICT(mcom_dia,'999,999,999.99')
*                       DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(iat((mtot_dia * (mcomissao / 100)),2) + mcom_dia,'999,999,999.99')
                        DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(iat((mtot_dia/mcota) * 100,2),'9,999.99')
                        mcom_dia := mtot_dia := 0
                ENDIF
                IF mtp_comi = 'R'
                        DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Avista R$.:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_av,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Total Comissao:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcom_av,'9,999,999.99')
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                DEVPOS(PROW()+2,04);DEVOUT('Resumo Geral')
                DEVPOS(PROW(),04);DEVOUT('Resumo Geral')
                DEVPOS(PROW()+1,04);DEVOUT('------------')
                DEVPOS(PROW()+1,04);DEVOUT('Total de Saidas R$..:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai,'999,999,999.99')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Cota R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcota,'999,999.99')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Saldo R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai - mcota,'999,999.99')
                DEVPOS(PROW()+1,04);DEVOUT('Comissao R$.........:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_comiss,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Avista R$.:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_av,'9,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Aprazo R$.:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_ap,'9,999,999.99')
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ENDIF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************
* IMPRIMI MOVIMENTO DE COMISSAO DO VENDEDOR
*******************************
FUNCTION conprod
**************
LOCAL mprg:='SAC5COM1',lba,cba,opcao,i,mtecla,;
      point,msele,morde,mdesc,mdata_dia,mtolera,;
      mtot_av,mcom_av,mtipo_com,mvlr_av,mvlr_ap,mperc_comi:=0,mcli_ven,;
      mpag:=1,mtit,mtipo,mt_comissao:=' ',mlist_pre:='',cons_prod:={}
MEMVAR mcod_vend,mcod_oper,mdata1,mdata2,mvalor

PRIVATE mcliente,mcpf,mcgc,mtot_comiss,mcom_dia,mreducao,mtot_dia,mvlr_sai,;
        mtot_ped,mdata,mcod_cli,mdoc,mtraco,mcom_ped,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_mov:={}

mtraco := REPLI('=',132)

lba := 07
cba := 60

msele := SELE()
morde := INDEXORD()

op_tela(0,0,lba+2,cba,'IMPRIMI MOVIMENTO DE COMISSAO DO VENDEDOR')
WHILE .T.
        mdata1 := mdata_sis -30
        mdata2 = mdata_sis
        mcod_vend = 0
        mtipo_imp := m_indiv[1,18]
        mreducao := mtolera := mtot_av := mcom_av := 0
        mcliente := SPACE(30)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mdoc := SPACE(8)
        mdata := CTOD('  /  /  ')
        mcli_ven :=  mlist_pre := 'N'
        mt_comissao := 'V'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 3,0 TO 3,cba
        DEVPOS( 0,2);DEVOUT('Codigo Operador/Vendedor.......................:')
        DEVPOS( 1,2);DEVOUT('Data Inicial...................................:')
        DEVPOS( 2,2);DEVOUT('Data Final.....................................:')
        DEVPOS( 4,2);DEVOUT('Tolerancia.....................................:')
        DEVPOS( 5,2);DEVOUT('(%) reducao....................................:')
        DEVPOS( 6,2);DEVOUT('Vendedor Relacionado c/Cliente [s/N]...........:')
        DEVPOS( 7,2);DEVOUT('Comissao:<V>endedor, <O>perador ou <M>ontador..:')
        DEVPOS( 8,2);DEVOUT('So Produto Lista Presente [S/N]................:')

        @ 0,50 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,0,54))
        @ 1,50 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,50 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,50 GET mtolera PICT '999.99'
        @ 5,50 GET mreducao PICT '999.99'
        @ 6,50 GET mcli_ven PICT '@!' VALID mcli_ven $ 'S,N'
        @ 7,50 GET mt_comissao PICT '@!' VALID mt_comissao $ 'V,O,M'    // WHEN mtp_comi = 'V'
        @ 8,50 GET mlist_pre PICT '@!' VALID mlist_pre $ 'S,N'
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RELEASE ALL
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma as Datas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Aguarde Coletando dados para este Relatorio !!!')
        cons_mov:={}
        cComm  := "SELECT * FROM sacmov WHERE data_s_e  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai = 'S' AND tipo = '02' AND vl_vend > "+sr_cdbvalue(0)
        ccomm := ccomm + " AND (documento LIKE 'PD%' OR documento LIKE 'CP%' OR num_ped = 'CUPOME')"
        cComm  := ccomm +" AND cod_vend IS NOT NULL  AND devolucao IS NULL AND documento NOT LIKE 'BL%' AND documento NOT LIKE 'TR%'"
        IF mt_comissao = 'V'
                ccomm := ccomm + " AND cod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'M'
                ccomm := ccomm + " AND NOT montador = "+sr_cdbvalue(STRZERO(mcod_vend,3))+" AND NOT montador1 = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND NOT cod_oper = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF mt_comissao = 'O'
                ccomm := ccomm + " AND com_oper IS NOT NULL"
        ENDIF
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF mlist_pre = 'S'
                ccomm := ccomm + " AND (cod_presente IS NOT NULL AND NOT cod_presente = '00000' AND NOT cod_presente = ' ')"
        ENDIF
        ccomm := ccomm + " ORDER BY data_s_e,cod_vend,num_ped"
        sr_getconnection():exec(ccomm,,.t.,cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        mcomissao := mcom_dia := mtot_dia := mtot_comiss := ;
        mvlr_sai := mtot_ped := mvlr_av := mvlr_ap := 0
        mdoc := cons_mov[1,2]
        mdata_dia := mdata := cons_mov[1,16]
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'COM_VEND.REL'
        IF ! imp_arq('COM_VEND.REL','R')
                LOOP
        ENDIF
        mpag := 1
        mtit := 'VENDEDOR: '+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        mtipo := 'Comissao periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Produto                          Doc.(NF)      Quantd.   Pr.Unit.    Tot.Valor Comi. (R$)   Comi.(%) TC Ope')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mdata_dia := cons_mov[1,16]
        i:=0
        FOR i = 1 TO LEN(cons_mov)
                prog_imp(cons_mov[i,89],DTOC(cons_mov[i,16]))
                IF mcli_ven = 'S' .AND. mt_comissao = 'V'
                        aret:={}
                        sr_getconnection():exec("SELECT codvend FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_vend,3)),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF (LEN(aret) > 0 .AND. aret[1,1] <> cons_mov[i,36]) .OR. LEN(aret) = 0
                                LOOP
                        ENDIF
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT pcod_tab,ppag FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_mov[i,6]),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        IF aret[1,2] = 'C'
                                LOOP
                        ENDIF
                        mcod_tab := aret[1,1]
                ENDIF
                IF mdata_dia <> cons_mov[i,16] .AND. mtot_dia > 0
                        DEVPOS(PROW()+1,44);DEVOUT('                                               ------------')
                        DEVPOS(PROW(),PCOL()+7);DEVOUT('------------')
                        DEVPOS(PROW()+1,44);DEVOUT('                   Total do Dia: '+DTOC(mdata_dia)+' R$.:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'9,999,999.99')
                        DEVPOS(PROW(),PCOL()+7);DEVOUTPICT(mcom_dia,'9,999,999.99')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        mdata_dia := cons_mov[i,16]
                        mcom_dia := mtot_dia := 0
                ENDIF
                mcliente := SPACE(30)
                mdoc := cons_mov[i,2]
                mtot_ped := mcom_ped :=0
                mcod_cli := cons_mov[i,36]
                mcliente := cons_mov[i,37]
                mcod_oper := cons_mov[i,30]
                mdata := cons_mov[i,16]
                mtipo_com := cons_mov[i,70]
                imprt(mtipo_imp,'C')
                WHILE mdoc = cons_mov[i,2] .AND. ! EOF()
                        cons_prod:={}
                        sr_getconnection():exec("SELECT comissao FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_mov[i,10]),,.t.,@cons_prod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_prod) = 0
                                mcomissao:=0
                        ELSE
                                mcomissao:= cons_prod[1,1]
                        ENDIF
                        //mcomissao := cons_mov[i,29]
                        IF (((cons_mov[i,22]*cons_mov[i,19])-(cons_mov[i,23]*cons_mov[i,19]))/(cons_mov[i,22]*cons_mov[i,19]))*100 > mtolera;
                        .AND. mtolera > 0
                                mcomissao := mcomissao - mreducao
                        ENDIF
                        IF(ver_serie() = '141351',mvalor := cons_mov[i,22],mvalor := cons_mov[i,23])
                        mvlr_sai = mvlr_sai + mvalor * cons_mov[i,19]
                        mtot_comiss = mtot_comiss + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        mcom_ped = mcom_ped + ((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100))
                        mtot_ped = mtot_ped + (mvalor * cons_mov[i,19])
                        mtot_dia = mtot_dia + mvalor * cons_mov[i,19]
                        mcom_dia = mcom_dia + iat(((mvalor * cons_mov[i,19]) * ((mcom_ven+mcomissao) / 100)),2)
                        IF mtipo_com = 'AV'
                                mvlr_av := mvlr_av + (mvalor * cons_mov[i,19])
                        ELSE
                                mvlr_ap := mvlr_ap + (mvalor * cons_mov[i,19])
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(DTOC(mdata)+' '+cons_mov[i,10]+' - '+cons_mov[i,11]+' '+mdoc+' '+TRANSFORM(cons_mov[i,19],'999,999.99')+' '+TRANSFORM(mvalor,'999,999.99')+' '+TRANSFORM(cons_mov[i,19]*mvalor,'9,999,999.99')+' '+TRANSFORM((cons_mov[i,19]*mvalor)*((mcom_ven+mcomissao)/100),'999,999.99')+' '+TRANSFORM((mcom_ven+mcomissao),'999.999999')+' '+mtipo_com+' '+mcod_oper)
                        i++
                        IF i > LEN(cons_mov)
                               EXIT
                        ENDIF
                ENDDO
                i := i - 1
                mperc_comi := (mcom_ped/mtot_ped)*100
                DEVPOS(PROW()+1,00);DEVOUT('                                                                                           ------------ ---------- ----------')
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL: Cliente: '+STR(mcod_cli,5)+' - '+mcliente+'    '+mdoc+'             '+TRANSFORM(mtot_ped,'9,999,999.99')+' '+TRANSFORM(mtot_ped * (mperc_comi/ 100),'999,999.99')+' '+TRANSFORM(mperc_comi,'999.999999'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Produto                          Doc.(NF)      Quantd.   Pr.Unit.    Tot.Valor Comi. (R$)   Comi.(%) TC Ope')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        IF PROW() >= 59
                 EJECT
                 mpag ++
                 cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Resumo Geral')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Saidas R$.....:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_sai,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Comissao R$............:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_comiss,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Avista R$.:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_av,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Aprazo R$.:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_ap,'9,999,999.99')
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
********************** F I M ********************************
* VER COMISSAO NA DUPLICATA
*********************************
FUNCTION ver_comissao(mcom_tipo)
***********************
LOCAL mprg:='SAC5COM1',msel,mord,mtot_dup,mcom_dup,mdata_dia,mcom_dia:=0,mtot_dia:=0,;
      mtot_comiss:=0,mvlr_sai:=0,mcomi_aux:=0,mvlr_ok:=0,mvlr_com:=0,;
      mtot_dif:=0,linha := 1,linhas:=0,LIN,cons_vend:={}

PRIVATE mdata1,mdata2,mcod_vend,mtraco,mpag:=1,mtit,mtipo,mexcel,mt_c,;
        mcod_vend,mcomissao:=0,mcom_ven:=0,mdata1,mdata2,mnome_ven,mcli_ven,mcota:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcliente,mcpf,mcgc,mcodemp:=SPACE(3),;
        mexcel:='N'

mtraco := REPLI('=',132)

op_tela(0,0,5,70,'IMPRIMI COMISSAO PELO RECEBIMENTO')
WHILE .T.
        mdata1 := mdata_sis -30
        mdata2 = mdata_sis
        mcod_vend = 0
        mt_comissao := 'V'
        DEVPOS( 0,2);DEVOUT('Codigo Operador/Vendedor.......................:')
        DEVPOS( 1,2);DEVOUT('Data Inicial...................................:')
        DEVPOS( 2,2);DEVOUT('Data Final.....................................:')
        DEVPOS( 3,2);DEVOUT('Comissao:<V>endedor, <O>perador ou <M>ontador..:')
        @ 0,50 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,0,54))
        @ 1,50 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,50 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,50 GET mt_comissao PICT '@!' VALID mt_comissao $ 'V,O,M'    // WHEN mtp_comi = 'V'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF mexcel = 'S'
                ****************
                SELE('comi')
                ***************
                ZAP
        ENDIF
        mensagem('Aguarde o Coletando dados p/ Impressao....')
        ************************************************************
        cons_vend:={}
        sr_getconnection():exec("SELECT scod_op,snome,cpf,scomissao FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_vend,3)),,.t.,@cons_vend)
        sr_getconnection():exec('COMMIT',,.f.)


        //cComm  := "SELECT * FROM sacdupr WHERE datpag >= "+sr_cdbvalue(mdata1)+" AND  datpag <= "+sr_cdbvalue(mdata2)+" AND pago = 'B' AND dat_tran IS NULL"
        cComm  := "SELECT * FROM sacdupr WHERE datpag BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND pago = 'B' AND dat_tran IS NULL"
        IF ! EMPTY(mcodemp)
                ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
        ENDIF
        IF mt_comissao = 'V'
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ELSE
                ccomm := ccomm + " AND ope_venda = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        //ccomm := ccomm + " ORDER BY datpag,tipo,duplicata,fornec"
        ccomm := ccomm + " ORDER BY datpag"
        cons_dupr:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_dupr) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        marq := 'COM_VEND.REL'
        IF ! imp_arq('COM_VEND.REL','R')
                LOOP
        ENDIF
        mpag:=1
        mtipo := 'Comissao periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2) + ' - COMISSAO NO RECEBIMENTO'
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                           Doc.(NF)    Tot.Recebido      comissao (R$)      Comi.(%)   No.Ped Ope TM')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        imprt(mtipo_imp,'N')
        mtot_dup := mcom_dup := mcom_dia := mtot_dia := mtot_comiss := ;
        mtot_dif := mvlr_ok := mvlr_com := 0
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT('*** COMISSAO SOBRE DUPLICATAS PAGAS ***')
        imprt(mtipo_imp,'C')
        mdata_dia := cons_dupr[1,13]
        i:=0
        FOR i = 1 TO LEN(cons_dupr)
                IF mcom_tipo = 'E'
                        IF mdata_dia <> cons_dupr[i,13] .AND. mtot_dia > 0
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,54);DEVOUT('                  ------------')
                                DEVPOS(PROW(),PCOL()+7);DEVOUT('------------')
                                DEVPOS(PROW()+1,54);DEVOUT('Total do Dia R$.:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'9,999,999.99')
                                DEVPOS(PROW(),PCOL()+7);DEVOUTPICT(mcom_dia,'9,999,999.99')
                                mdata_dia := cons_dupr[i,13]
                                mcom_dia := mtot_dia := 0
                        ENDIF
                ELSE
                        imprt(mtipo_imp,'N')
                        IF mdata_dia <> cons_dupr[i,13]
                                DEVPOS(PROW()+1,00);DEVOUT(mdata_dia)
                                DEVPOS(PROW(),12);DEVOUTPICT(mtot_dia,'999,999,999.99')
                                DEVPOS(PROW(),29);DEVOUTPICT(mcom_dia,'999,999,999.99')
                                mdata_dia := cons_dupr[i,13]
                                mcom_dia := mtot_dia := 0
                        ENDIF
                        IF PROW() >= 58
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                           Doc.(NF)    Tot.Recebido      comissao (R$)      Comi.(%)   No.Ped Ope TM')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'N')
                        ENDIF
                ENDIF
                prog_imp(i,DTOC(cons_dupr[i,13]))
                mcomi_aux := 0
                IF mcom_ven # cons_vend[1,4] .AND. EMPTY(cons_dupr[i,32])
                        mcomi_aux := mcom_ven /100
                ELSE
                        //IF mtip_comi = '1'
                                IF mt_comissao = 'V'
                                        mcomi_aux := cons_dupr[i,32]
                                ELSE
                                        mcomi_aux := cons_dupr[i,55]
                                ENDIF
                        /*
                        ELSE
                                mcomi_aux := cons_dupr[i,33]
                                mvlr_com := iat((IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / VAL(mtipo_rel))),2)
                                mvlr_ok  := iat((cons_dupr[i,34] * (cons_dupr[i,32] / VAL(mtipo_rel))),2)
                                mtot_dif := mtot_dif + (mvlr_com - mvlr_ok)
                        ENDIF
                        */
                ENDIF
                //IF mt_c = 'N' .AND. mcomi_aux <= 0
                //        LOOP
                //ENDIF
                /*
                mtele:='N'
                IF ! EMPTY(cons_dupr[i,31])
                        cComm  := "SELECT pstat_item FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_dupr[i,31])
                        cons_ped:={}
                        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_ped) > 0
                                mtele := cons_ped[1,1]
                        ENDIF

                ENDIF
                */
                mcom_dia := mcom_dia + iat((IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / 100)),2)
                mtot_dia := mtot_dia + IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20])
                mtot_comiss := mtot_comiss + iat((IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / 100)),2)
                mvlr_sai := mvlr_sai + IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20])
                mcom_dup := mcom_dup + iat((IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / 100)),2)
                mtot_dup := mtot_dup + IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20])
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(DTOC(cons_dupr[i,13])+'  '+STR(cons_dupr[i,7],5)+' - '+cons_dupr[i,8]+'  '+cons_dupr[i,2]+LEFT(cons_dupr[i,4],8)+'  '+TRANSFORM(IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]),'9,999,999.99')+'       '+TRANSFORM(IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / 100),'9,999,999.99')+'    '+TRANSFORM(mcomi_aux,'999.999999')+'  '+cons_dupr[i,31]+' '+cons_dupr[i,35])     //+' '+mtele)
                IF mexcel = 'S'
                        ****************
                        SELE('comi')
                        ***************
                        ADIREG()
                        comi-> Documento := cons_dupr[i,2]+cons_dupr[i,4]
                        comi-> cliente   := STR(cons_dupr[i,7],5)+' - '+cons_dupr[i,8]
                        comi-> c_ipi     := 0
                        comi-> s_ipi     := 0
                        comi-> ipi       := 0
                        comi-> Valor     := IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20])
                        comi-> Venc      := cons_dupr[i,11]
                        comi-> Data_pag  := cons_dupr[i,13]
                        comi-> Com       := 0
                        comi-> Sit       := '    '
                        comi-> Perc_com  := (mcomi_aux / 100)
                        comi-> Vlr_com   := IF(ver_serie() = '141535',cons_dupr[i,19],cons_dupr[i,20]) * (mcomi_aux / 100)
                        comi-> Represent := IF(mt_comissao = 'V',cons_dupr[i,30],cons_dupr[i,54])+'-'+sen->snome
                        comi-> n_pedido  := cons_dupr[i,31]
                        comi-> periodo   := DTOC(mdata1)+' a '+DTOC(mdata2)
                        DBCOMMIT()
                        DBUNLOCK()
                        //****************
                        //SELE('dupr');ORDSETFOCUS(3)
                        //***************
                ENDIF
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                           Doc.(NF)    Tot.Recebido      comissao (R$)      Comi.(%)   No.Ped Ope TM')
*                        DEVPOS(PROW()+1,00);DEVOUT('   Data    Cod.          Cliente                           Doc.(NF)    Tot.Recebido      comissao (R$)      Comissao (%)   No.Pedido')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        IF mcom_tipo = 'E'
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,54);DEVOUT('                  ------------')
                DEVPOS(PROW(),PCOL()+7);DEVOUT('------------')
                DEVPOS(PROW()+1,54);DEVOUT('Total do Dia R$.:')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_dia,'9,999,999.99')
                DEVPOS(PROW(),PCOL()+7);DEVOUTPICT(mcom_dia,'9,999,999.99')
        ELSE
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mdata_dia)
                DEVPOS(PROW(),12);DEVOUTPICT(mtot_dia,'999,999,999.99')
                DEVPOS(PROW(),29);DEVOUTPICT(mcom_dia,'999,999,999.99')
                IF PROW() >= 58
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
        ENDIF
        mcom_dia := mtot_dia := 0
        DEVPOS(PROW()+1,00);DEVOUT('************ TOTAL GERAL ***************************************************')
        DEVPOS(PROW()+1,00);DEVOUT('Total R$: ')
        DEVPOS(PROW(),16);DEVOUT(TRANSFORM(mtot_dup,'999,999.99'))
        DEVPOS(PROW(),33);DEVOUT(TRANSFORM(mcom_dup,'999,999.99')+' - Medio de Comissao (%) : '+TRANSFORM((mcom_dup/mtot_dup)*100,'999.99'))
        *DEVPOS(PROW()+1,00);DEVOUT('Total Diferenca de Comissao R$:')
        *DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(mtot_dif,'99,999.99')
        DEVPOS(PROW()+6,00);DEVOUT(' ')
        EJECT
        imprt(mtipo_imp,'N')
        imprt(mtipo_imp,'N+')
        DEVPOS(PROW()+1,00);DEVOUT(PADC('R E C I B O',80))
        imprt(mtipo_imp,'N-')
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,0);DEVOUT(' ')
        rrecibo := '              Recebi da '+RTRIM(m_set[1,129])+' a importancia de R$: '+LTRIM(TRANSFORM(mcom_dup,'@E 9,999,999.99'))+'('+RTRIM(extenso(mcom_dup,.T.,'real','reais'))+') referente a comissao de vendas do periodo de '+;
                DTOC(mdata1)+' a '+DTOC(mdata2)+' que plena quitacao.'
        linhas := MLCOUNT(rrecibo,70)

        FOR linha = 1 TO  linhas
                LIN := MEMOLINE(rrecibo,70,linha,,10)
                DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
        NEXT
        DEVPOS(PROW()+2,00);DEVOUT(PADC(RTRIM(m_set[1,134])+', '+DTOC(mdata_sis),80))
        DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',35),80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_vend[1,2]),80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM('CPF: '+cons_vend[1,3]),80))
        DEVPOS(PROW()+3,66);DEVOUT(TIME()+' Hrs.')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN .T.
*********************** f i m ************************************
* IMPRIMI COMISSAO POR PEDIDO
*******************************
FUNCTION comi_ped
*****************
LOCAL mprg:='SAC5COM1',lba,cba,opcao,i,mpag,mtit,mtipo

MEMVAR mcod_vend,mcod_oper,mdata1,mdata2,mvalor

PRIVATE mtot_ped,mtraco,mcom_ped,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_mov:={}

mtraco := REPLI('=',132)
lba := 06
cba := 60

msele := SELE()
morde := INDEXORD()
op_tela(10,10,16,70,'IMPRIMI COMISSAO DO VENDEDOR PELO PEDIDO')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata := CTOD('  /  /  ')
        mtipo_rel := 'R'
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 3,0 TO 3,cba
        DEVPOS(1,2);DEVOUT('Data Inicial......................:')
        DEVPOS(2,2);DEVOUT('Data Final........................:')
        DEVPOS(4,2);DEVOUT('Tipo Relatorio [E]xtrato [R]esumo.:')
//        DEVPOS(4,27);DEVOUT('(%) reducao:')
//        DEVPOS(5,2);DEVOUT('Vendedor Relacionado c/Cliente [s/N]:')
//        DEVPOS(6,2);DEVOUT('Comissao:<V>endedor, <O>perador ou <M>ontador.:')

        @ 1,38 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,38 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,38 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'E,R'
//        @ 4,43 GET mreducao PICT '999.99'
//        @ 5,40 GET mcli_ven PICT '@!' VALID mcli_ven $ 'S,N'
//        @ 6,50 GET mt_comissao PICT '@!' VALID mt_comissao $ 'V,O,M'    // WHEN mtp_comi = 'V'
        READ
        IF LASTKEY() = 27
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RELEASE ALL
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma as Datas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Aguarde Coletando dados para este Relatorio !!!')
        cons_mov:={}
        cComm  := "SELECT pnum_ped,pdat_ped FROM sacped_s WHERE sr_deleted = ' ' AND pdat_ped  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        ccomm := ccomm + " AND pcod_vend = "+sr_cdbvalue(STRZERO(mcod_vend,3))+" AND (NOT ppag = 'C' OR ppag IS NULL)" 
        ccomm := ccomm + " GROUP BY pnum_ped,pnum_ped,pdat_ped,pdat_ped"
        ccomm := ccomm + " ORDER BY pnum_ped"
        sr_getconnection():exec(ccomm,,.t.,cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        mtot_comiss := mtot_geral := 0
        mdoc := cons_mov[1,1]
        mdata_dia := mdata := cons_mov[1,2]
        mensagem('Espere o Final da Impressao OK !!!')
        marq := 'COM_VEND.REL'
        IF ! imp_arq('COM_VEND.REL','R')
                LOOP
        ENDIF
        mpag := 1
        mtit := 'VENDEDOR: '+STRZERO(mcod_vend,3)       //+' - '+RTRIM(mnome_ven)
        mtipo := 'Comissao periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('   Data  Cliente                                        Doc.(PD)  Tot.Valor  Comi.(R$)   Comi.(%) Status Ope')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mdata_dia := cons_mov[1,2]
        i:=0
        FOR i = 1 TO LEN(cons_mov)
                prog_imp(i,DTOC(cons_mov[i,2]))
                aret:={}
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(cons_mov[i,1]),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) = 0
                        LOOP
                ENDIF
                x := mtot_ped := mcom_ped := 0
                FOR x = 1 TO LEN(aret)
                        mtot_ped := mtot_ped + (aret[x,14] * aret[x,18])
                        mcom_ped := mcom_ped + ((aret[x,14] * aret[x,18]) * (aret[x,53]/100))
                        mtot_comiss := mtot_comiss + ((aret[x,14] * aret[x,18]) * (aret[x,53]/100))
                        mtot_geral := mtot_geral + (aret[x,14] * aret[x,18])
                NEXT
                cons_cli:={}
                sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(aret[1,23]),,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                DEVPOS(PROW()+1,00);DEVOUT(DTOC(aret[1,4])+' '+aret[1,23]+' '+IF(LEN(cons_cli) = 0,'CLIENTE NAO ENCONTRADO'+SPACE(19),cons_cli[1,3])+' '+cons_mov[i,1]+' '+TRANSFORM(mtot_ped,'9,999,999.99')+' '+TRANSFORM(mcom_ped,'999,999.99')+' '+TRANSFORM((mcom_ped / mtot_ped)*100,'999.999999')+' '+IF(aret[1,49] = '*','P A G O','ABERTO '))
                IF mtipo_rel = 'E'
                        x := mtot_ped := mcom_ped := 0
                        FOR x = 1 TO LEN(aret)
                                DEVPOS(PROW()+1,00);DEVOUT(aret[x,6]+' '+aret[x,7]+' Qtd:'+TRANSFORM(aret[x,14],'99,999.99')+' Pr.Unit:'+TRANSFORM(aret[x,18],'999,999.99')+' Total:'+TRANSFORM(aret[x,14] * aret[x,18],'999,999.99')+' Comissao R$: '+TRANSFORM((aret[x,14]*aret[x,18])*(aret[x,53]/100),'999,999.99')+' (%):'+TRANSFORM(aret[x,53],'999.99'))
                                IF PROW() >= 59
                                        EJECT
                                        mpag ++
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('   Data  Cliente                                        Doc.(PD)  Tot.Valor  Comi.(R$)   Comi.(%) Status Ope')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                ENDIF
                IF PROW() >= 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('   Data  Cliente                                        Doc.(PD)  Tot.Valor  Comi.(R$)   Comi.(%) Status Ope')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        NEXT
        IF PROW() >= 59
                 EJECT
                 mpag ++
                 cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('************  Resumo Geral  *************')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Saidas R$.....:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_geral,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Comissao R$............:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mtot_comiss,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Comissao Media (%).....:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT((mtot_comiss / mtot_geral) * 100,'9,999.9999')
/*
        DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Avista R$.:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_av,'9,999,999.99')
        DEVPOS(PROW()+1,00);DEVOUT('Total Vendas Aprazo R$.:')
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mvlr_ap,'9,999,999.99')
*/
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL

********************** F I M ********************************
