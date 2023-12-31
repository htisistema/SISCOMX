* RELATORIO DE INVENTARIO
*************************
FUNCTION sacinve
****************
LOCAL mtitulo:='RELATORIO DE INVENTARIO',;
      lba,cba,mgrupo1,mgrupo2,mcod_merc1,mcod_mer2,opcao,;
      i,mtecla,mtot_cust,mtot_ven,mtot_merc,mtipo_tb:=' ',msaldo:=0,m_ano,;
      mcust_merc:=0,msaldo_fis:=0,mpc_saldo:=0,mpc_vlr:=0,maltere:=' ',mtipo_saldo:=' '

PRIVATE mtraco,mtot_item,mtit,mtipo,mpag,mquantd,;
        marq_prin,mimp_rel,mporta_imp,mtipo_tab,mtot_vol,mfornece,muf,;
        mcod_forn,mcod_espe,mcod_merc:=0,mmerc,mcod_bc,;
        MPRG:='SACINVE'

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',130)
lba := 18
cba := 85
opcao := 'S'
op_tela(10,10,28,95,mtitulo)
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mquantd = 1
        mgrupo1 = SPACE(5)
        mtot_item := mtot_cust := mtot_merc := mtot_ven := mtot_vol := ;
        mcod_forn := 0
        mfornece := SPACE(40)
        muf := SPACE(2)
        mcod_espe := 0
        mtipo_tp := ' '
        m_ano := SPACE(4)
        mtipo_merc := SPACE(5)
        mlayout := ' '
        mtipo_saldo := '2'
        mdata_inve := CTOD('  /  /  ')
        mensagem('Preencha os Campos ou em Brnaco p/Imprimir todos - <ESC>p/Sair')
        DEVPOS(1,2); DEVOUT('Ano inventario................:')
        DEVPOS(1,50);DEVOUT('Data Inventario:')
        DEVPOS(2,2); DEVOUT('Codigo Grupo .................:')
        DEVPOS(3,2); DEVOUT('Codigo Fornecedor.............:')
        DEVPOS(4,2); DEVOUT('Codigo Especie................:')
        DEVPOS(5,2); DEVOUT('Tipo de Saldo.................:')
        DEVPOS(6,2); DEVOUT('Total Saldo...................:')
        DEVPOS(6,50);DEVOUT('Valor R$:')
        @ 7,0 TO 7,cba
        DEVPOS(8,2); DEVOUT('Codigo Mercadoria.............:')
        DEVPOS(9,2); DEVOUT('Saldo.........................:')
        DEVPOS(10,2);DEVOUT('Valor Mercadoria (Cust.Merc.).:')
        DEVPOS(11,2);DEVOUT('(%) p/Saldo...................:')
        DEVPOS(12,2);DEVOUT('(%) p/Valor...................:')
        DEVPOS(13,2);DEVOUT('Tipo de Mercadoria[1,2,3,4,5].:')
        DEVPOS(14,2);DEVOUT('Tipo Layout [S]ef [R]elatorio.:')
        DEVPOS(15,2);DEVOUT('Quantidade Copias.............:')

        @ 1,34 GET m_ano PICT '9999' VALID IF(EMPTY(m_ano),.F.,.T.)
        @ 1,67 GET mdata_inve VALID IF(EMPTY(mdata_inve),.F.,.T.)
        @ 2,34 GET mgrupo1 PICT '999' VALID v_gru_cod(mgrupo1,2)
        @ 3,34 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,3,39)
        @ 4,34 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,4,39,,0)
        @ 5,34 GET mtipo_saldo PICT '9' VALID mtipo_saldo $ '1,2'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RELEASE mtraco,mtot_item,telaprint,mtit,mtipo,mpag,mquantd,mprg:='SIAC511',;
                        mimp_tipo,marq_prin,mimp_rel,mporta_imp,mtot_vol
                RETURN NIL
        ENDIF
        aret:={}
        sr_getconnection():exec("SELECT cod_barr3 FROM sacinve WHERE cod_barr3 = "+sr_cdbvalue(m_ano),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0
                IF 'S' = op_simnao('N','Ja existe registro neste ANO, Deseja apagar os dados:')
                        sr_getconnection():exec("DELETE FROM sacinve WHERE cod_barr3 = "+sr_cdbvalue(m_ano),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        //LOOP
                ENDIF
        ENDIF
        mensagem('Copiando a Tabela de Preco...')
        aret:={}
        sr_getconnection():exec("SELECT * FROM sacmerc",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        //atencao( sr_ShowVector( aret ))
        i:=0
        FOR i = 1 TO LEN(aret)
                sr_getconnection():exec('INSERT INTO sacinve ('+;
                                        'cod_merc,'+; //2
                                        'merc,'+;     //3
                                        'especie,'+;  //4
                                        'cod_fab,'+;  //5
                                        'gru_sub,'+;  //6
                                        'saldo_mer,'+;//7
                                        'cust_merc,'+;//8
                                        'cod_barr3,'+;//9
                                        'tipo_merc,'+;//10
                                        'unidade,'+;//10
                                        'SR_DELETED) VALUES ('+;
                                        sr_cdbvalue(aret[i,8])+','+; //2
                                        sr_cdbvalue(aret[i,9])+','+; //3
                                        sr_cdbvalue(aret[i,15])+','+; //4
                                        sr_cdbvalue(aret[i,30])+','+; //5
                                        sr_cdbvalue(aret[i,7])+','+; //6
                                        sr_cdbvalue(IF(mtipo_saldo = '2',ROUND(aret[i,56],2),ROUND(aret[i,55],2)))+','+; //7
                                        sr_cdbvalue(ROUND(aret[i,44],2))+','+; //8
                                        sr_cdbvalue(m_ano)+','+; //9
                                        sr_cdbvalue(aret[i,10])+','+; //9
                                        sr_cdbvalue(aret[i,14])+','+; //9
                                        sr_cdbvalue(' ')+')',,.f.)
        NEXT
        sr_getconnection():exec('COMMIT',,.f.)
        WHILE .T.
                IF ! EMPTY(mpc_saldo) .OR.  ! EMPTY(mpc_vlr)
                        aret:={}
                        ccomm :="UPDATE sacinve SET "
                        IF ! EMPTY(mpc_saldo)
                                ccomm := ccomm + "saldo_mer = saldo_mer * "+sr_cdbvalue((mpc_saldo/100)+1)
                        ENDIF
                        IF ! EMPTY(mpc_vlr)
                                ccomm := ccomm + "cust_merc = cust_merc * "+sr_cdbvalue((mpc_vlr/100)+1)
                        ENDIF
                        cComm  := ccomm + " WHERE cod_merc IS NOT NULL AND NOT merc = 'IMPOSTO' AND saldo_mer > "+sr_cdbvalue(0)+" AND cod_barr3 = "+sr_cdbvalue(m_ano)
                        IF ! EMPTY(mcod_espe)
                                ccomm := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                        ENDIF
                        IF ! EMPTY(mcod_forn)
                                   ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                        ENDIF
                        IF ! EMPTY(mgrupo1)
                                   ccomm := ccomm + " AND gru_sub = LIKE "+sr_cdbvalue(STRZERO(VAL(mgrupo1),3)+'%')
                        ENDIF
                        sr_getconnection():exec(ccomm,,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)


                        sr_getconnection():exec("SELECT cod_merc,saldo_mer,merc FROM sacinve WHERE cod_merc IS NOT NULL AND NOT merc = 'IMPOSTO' AND saldo_mer > "+sr_cdbvalue(0)+" AND cod_barr3 = "+sr_cdbvalue(m_ano)+" AND unidade = 'UN' ORDER BY merc",,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        i:=0
                        FOR i = 1 TO LEN(aret)
                                prog_imp(i,aret[i,1]+'-'+aret[i,3])
                                sr_getconnection():exec("UPDATE sacinve SET saldo_mer = "+sr_cdbvalue(ROUND(aret[i,2],0))+" WHERE cod_merc = "+sr_cdbvalue(aret[i,1]),,.f.)
                        NEXT
                        sr_getconnection():exec('COMMIT',,.f.)
                        */
                ENDIF
                aret:={}
                cComm  := "SELECT * FROM sacinve WHERE cod_merc IS NOT NULL AND NOT merc = 'IMPOSTO' AND saldo_mer > "+sr_cdbvalue(0)+" AND cod_barr3 = "+sr_cdbvalue(m_ano)
                //cComm  := "SELECT * FROM sacinve WHERE cod_barr3 = "+sr_cdbvalue(m_ano)
                IF ! EMPTY(mcod_espe)
                           ccomm := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                IF ! EMPTY(mcod_forn)
                           ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mgrupo1)
                           ccomm := ccomm + " AND gru_sub = LIKE "+sr_cdbvalue(STRZERO(VAL(mgrupo1),3)+'%')
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                mtot_merc := mtot_item := mtot_vol := i := 0
                FOR i = 1 TO LEN(aret)
                        mtot_merc := mtot_merc + (aret[i,44] * aret[i,56])
                        mtot_vol := mtot_vol + aret[i,56]
                        mtot_item ++
                        setcor(3)
                        DEVPOS(6,34);DEVOUTPICT(mtot_vol,'9,999,999.99')
                        DEVPOS(6,60);DEVOUTPICT(mtot_merc,'99,999,999.99')
                        setcor(1)
                NEXT
                maltere := '*'
                mcod_bc := SPACE(16)
                mcod_merc := 0
                mmerc := SPACE(40)
                mpc_saldo := mpc_vlr   := mcust_merc := msaldo_fis := 0
                @ 11,34 GET mpc_saldo PICT '999.99' WHEN EMPTY(mcod_merc)
                @ 12,34 GET mpc_vlr PICT '999.99' WHEN EMPTY(mcod_merc)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF ! EMPTY(mpc_saldo) .OR. ! EMPTY(mpc_vlr)
                        maltere := ' '
                ENDIF
        ENDDO
        @ 13,34 GET mtipo_merc PICT '@!' VALID IF(ALLTRIM(mtipo_merc) $ '1,2,3,4,5, ',.T.,.F.) WHEN men_get(0,0,'Digite [1] Produto - [2] Materia Prima - [3] Isumos - [4] Consumo - [5] Outros')
        @ 14,34 GET mlayout PICT '@!' VALID mlayout $ 'S,R'
        @ 15,34 GET mquantd PICT '99999'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mlayout = 'R'
                mtecla := mensagem1('Tipo de Ordem do Relatorio [1] Alfabetica  -  [2] Codigo:','1','1,2',17)
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        mpag = 0
        mensagem('Aguarde o final da Impressao - [ESC]Sair')
        IF ! imp_arq('REL_INVE.REL','R')
                LOOP
        ENDIF
        IF mlayout = 'S'
                aret := {}
                cComm  := "SELECT * FROM sacinve WHERE saldo_mer > 0 AND cod_merc IS NOT NULL"
                IF ! EMPTY(mtipo_merc)
                        ccomm := ccomm + " AND (tipo_merc = "+sr_cdbvalue(SUBSTR(mtipo_merc,1,1))
                        IF ! EMPTY(SUBSTR(mtipo_merc,2,1))
                                ccomm := ccomm + " OR "
                                ccomm := ccomm + " tipo_merc = "+sr_cdbvalue(SUBSTR(mtipo_merc,3,1))
                        ENDIF
                        IF ! EMPTY(SUBSTR(mtipo_merc,3,1))
                                ccomm := ccomm + " OR "
                                ccomm := ccomm + " tipo_merc = "+sr_cdbvalue(SUBSTR(mtipo_merc,3,1))
                        ENDIF
                        IF ! EMPTY(SUBSTR(mtipo_merc,4,1))
                                ccomm := ccomm + " OR "
                                ccomm := ccomm + " tipo_merc = "+sr_cdbvalue(SUBSTR(mtipo_merc,4,1))
                        ENDIF
                        IF ! EMPTY(SUBSTR(mtipo_merc,5,1))
                                ccomm := ccomm + " OR "
                                ccomm := ccomm + " tipo_merc = "+sr_cdbvalue(SUBSTR(mtipo_merc,5,1))
                        ENDIF
                        ccomm := ccomm + ")"
                ENDIF
                ccomm := ccomm + " ORDER BY tipo_merc"
                sr_getconnection():exec(ccomm,,.t.,aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) = 0
                        atencao('Nao existe PRODUTO com saldo neste Periodo...')
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        LOOP
                ENDIF
                i := 0
                FOR i = 1 TO LEN(aret)
                        DEVPOS(PROW()+1,00);DEVOUT('74')
                        DEVPOS(PROW(),02);DEVOUT(SUBSTR(DTOC(mdata_inve),7)+SUBSTR(DTOC(mdata_inve),4,2)+SUBSTR(DTOC(mdata_inve),1,2))
                        DEVPOS(PROW(),10);DEVOUT(STRZERO(VAL(aret[i,8]),14))
                        DEVPOS(PROW(),24);DEVOUT(SUBSTR(STRZERO(aret[i,56],14,3),1,10)+SUBSTR(STRZERO(aret[i,56],14,3),12))
                        DEVPOS(PROW(),37);DEVOUT(SUBSTR(STRZERO(aret[i,44]*aret[i,56],14,2),1,11)+SUBSTR(STRZERO(aret[i,44]*aret[i,56],14,2),13))
                        DEVPOS(PROW(),50);DEVOUT('1')
                        DEVPOS(PROW(),51);DEVOUT(SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2))
                        DEVPOS(PROW(),65);DEVOUT(LEFT(minsc_firm,14))
                        DEVPOS(PROW(),79);DEVOUT(m_set[1,19])
                        DEVPOS(PROW(),81);DEVOUT(SPACE(45))
                        DEVPOS(PROW(),126);DEVOUT(aret[i,10])
                        DEVPOS(PROW(),127);DEVOUT(SUBSTR(STRZERO(aret[i,44],15,2),1,12)+SUBSTR(STRZERO(aret[i,44],15,2),14))
                        DEVPOS(PROW(),141);DEVOUT(STRZERO(0,5))
                NEXT
        ELSE
                aret:={}
                cComm  := "SELECT * FROM sacinve WHERE cod_merc IS NOT NULL AND NOT merc = 'IMPOSTO' AND saldo_mer > "+sr_cdbvalue(0)+" AND cod_barr3 = "+sr_cdbvalue(m_ano)
                IF ! EMPTY(mcod_espe)
                           ccomm := ccomm + " AND especie = "+sr_cdbvalue(STRZERO(mcod_espe,4))
                ENDIF
                IF ! EMPTY(mcod_forn)
                           ccomm := ccomm + " AND cod_fab = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF ! EMPTY(mgrupo1)
                           ccomm := ccomm + " AND gru_sub = LIKE "+sr_cdbvalue(STRZERO(VAL(mgrupo1),3)+'%')
                ENDIF
                IF mtecla = '1'
                        ccomm := ccomm + " ORDER BY merc"
                ELSE
                        ccomm := ccomm + " ORDER BY cod_merc"
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                msaldo := mtot_merc := mtot_item := mtot_vol := i := 0
                mpag := 1
                FOR i = 1 TO LEN(aret)
                        IF mpag == 1 .OR. PROW() >= 57
                                mpag = mpag +1
                                IF mpag > 2
                                        EJECT
                                ENDIF
                                imprt(mtipo_imp,'E')
                                DEVPOS(PROW(),01);DEVOUT('INVENTARIO DO ANO: '+m_ano)
                                imprt(mtipo_imp,'N')
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,100);DEVOUT('Pag.: '+STRZERO(mpag,3))
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                                DEVPOS(PROW(),06);DEVOUT('Descricao')
                                DEVPOS(PROW(),46);DEVOUT(' UN')
                                DEVPOS(PROW(),52);DEVOUT('  Saldo')
                                DEVPOS(PROW(),62);DEVOUT('     Valor')
                                DEVPOS(PROW(),76);DEVOUT('    Total')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        SETPOS(16,26);DISPOUT(aret[i,8]+'-'+aret[i,9])
                        DEVPOS(PROW()+1,00);DEVOUT(aret[i,8])
                        //DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(aret[i,9],39))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(aret[i,9])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(aret[i,14])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(aret[i,56],'99999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(aret[i,44],ALLTRIM(m_set[1,97]))
                        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(aret[i,44]*aret[i,56],ALLTRIM(m_set[1,97]))
                        mtot_merc := mtot_merc + (aret[i,56] * aret[i,44])
                        mtot_item ++
                        mtot_vol := mtot_vol + aret[i,56]
                NEXT
                IF PROW() >= 58
                        EJECT
                        mpag ++
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),01);DEVOUT('INVENTARIO DO ANO: '+m_ano)
                        imprt(mtipo_imp,'N')
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                        DEVPOS(PROW(),06);DEVOUT('Descricao')
                        DEVPOS(PROW(),46);DEVOUT(' UN')
                        DEVPOS(PROW(),52);DEVOUT('  Saldo')
                        DEVPOS(PROW(),62);DEVOUT('     Valor')
                        DEVPOS(PROW(),76);DEVOUT('    Total')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+3,00);DEVOUT('Total de Item:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_item,'999,999'))
                DEVPOS(PROW()+1,00);DEVOUT('Total Geral..: Quantidade:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vol,'999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Valor:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_merc,'99,999,999.99'))
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ENDIF
        conf_impressao('REL_INVE.REL')
ENDDO
RETURN NIL
***************************** F I M **************************************