*****************************
* ALTERACAO DE PEDIDO ENTRADA
* SAC232.PRG
*****************************
MEMVAR getlist,nivel_acess,mdata_sis,memp_resa,mend_firm,mcid_firm,mfone_firm,;
       minsc_firm,mcgc_firm
FUNCTION sac232
**************
LOCAL MPRG:='SAC232',i
PRIVATE tela,telaprin,lci,cci,lba,cba,mcod_forn,mfornece,mnum_ped,mdata_ped,;
        data_emb,micm,mfob,mcif,mdia1,mdia2,mdia3,mdia4,mdia5,mtransp,mcomprado,;
        mcod_merc,mquantd,mpr_fat,mdesc1,mdesc2,mdesc3,lin,opcao,mfrete,;
        mencargo,mdespesa,mipi,muf,mperc,mcod_op:='01',mavista,mpg_ant,;
        m_codigo:={},m_contem:={},mtp_desc,mtp_ipi,mtraco,mdata_emb,point,cons_pede:={},mdata_chega

IF ! ver_nivel(mprg,'ALTERACAO DE PEDIDO COMPRA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lci := cci := 0
lba := 22
cba := 80

tela := SAVESCREEN(01,00,24,79)
op_tela(01,10,22,90,' Solicitacao Pedido Interno de COMPRAS DE MERCADORIAS ')

SET KEY -9 TO imp_ped2()
IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('SACPED_E','PED_E');RETURN NIL;ENDIF
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
*------------------------------------------------------------------
set_key('forn','merc')

WHILE .T.
        exibi_prg(mprg)
        limpa(06,00,22,79)
        ASIZE(m_codigo,0)
        ASIZE(m_contem,0)
        lin := 10
        mfornece := space(30)
        mdata_ped := mdata_sis
        mdata_emb := mdata_chega := CTOD('  /  /  ')
        mfob := mcif := mavista := mpg_ant := SPACE(1)
        mdia1 := mdia2 := mdia3 := mdia4 := mdia5 := SPACE(3)
        mtransp := mcomprado := SPACE(15)
        mfrete := mencargo := mdespesa := mperc := micm := mnum_ped := mcod_forn := 0
        mtp_desc := mtp_ipi := SPACE(1)
        mcod_op := '01'
        mensagem('Digite o No.do Pedido a ser Alterado - <ESC> Retornar')

        setcor(3)
        @ lci+1,cci+1 TO lci+1,cba-1
        setcor(1)
        janela(lci+1,cba,' Dados do Fornecedor / Fabricante ','*')
        DEVPOS(lci+2,cci+1);DEVOUT('No.pedido interno:')
        DEVPOS(lci+2,cci+28);DEVOUT('Fornec.:')
        DEVPOS(lci+3,cci+1);DEVOUT('No.Pedido...:')
        DEVPOS(lci+3,cci+23);DEVOUT('Data:')
        setcor(3)
        @ lci+4,cci+1 TO lci+4,cba-1
        setcor(1)
        janela(lci+4,cba,' Dados do Pedido ','*')
        DEVPOS(lci+5,cci+1);DEVOUT('Frete FOB.:')
        DEVPOS(lci+5,cci+15);DEVOUT('CIF.:')
        DEVPOS(lci+6,cci+1);DEVOUT('Cond.Pag..: Avista [ ] Antecipado [ ]')
        DEVPOS(lci+7,cci+1);DEVOUT('Cond.Pag..:     dd     dd     dd     dd     dd')
        DEVPOS(lci+8,cci+1);DEVOUT('Transp....:')
        DEVPOS(lci+9,cci+1);DEVOUT('Comprador.:')
        DEVPOS(lci+10,cci+1);DEVOUT('Frete.....:')
        DEVPOS(lci+10,cci+25);DEVOUT('Encargo:')
        DEVPOS(lci+10,cci+46);DEVOUT('Desp.Asse.:')
        DEVPOS(lci+11,cci+1);DEVOUT('Data Chegada:')
        DEVPOS(lci+12,cci+1);DEVOUT('Tipo de DESCONTOS e IPI [P]ercentual [R] R$:')

        setcor(3)
        @ lci+13,cci+1 TO lci+13,cba-1
        setcor(1)
        janela(lci+13,cba,' Dados do Pedido ','*')
        DEVPOS(lci+14,cci+1);DEVOUT('Codigo........:')
        DEVPOS(lci+15,cci+1);DEVOUT('Quantidade....:')
        DEVPOS(lci+15,cci+40);DEVOUT('Ultima compra:')
        DEVPOS(lci+16,cci+1);DEVOUT('Preco Fatura..:')
        DEVPOS(lci+16,cci+40);DEVOUT('Saldo........:')
        DEVPOS(lci+17,cci+1);DEVOUT('Desconto......:')
        DEVPOS(lci+17,cci+40);DEVOUT('Vlr.Mercad...:')
        DEVPOS(lci+18,cci+1);DEVOUT('Desconto......:')
        DEVPOS(lci+18,cci+40);DEVOUT('Custo Real...:')
        DEVPOS(lci+19,cci+1);DEVOUT('Desconto......:')
        DEVPOS(lci+19,cci+40);DEVOUT('Custo Medio..:')
        DEVPOS(lci+20,cci+1);DEVOUT('IPI (%).......:')
        DEVPOS(lci+20,cci+40);DEVOUT('Preco Venda..:')

        @ lci+2,cci+20 GET mnum_ped PICT '999999' VALID IF(mnum_ped = 0,.F.,.T.)
        READ
        IF LASTKEY() = 27
                SET KEY -9 TO
                RELEASE tela,telaprin,lci,cci,lba,cba,mcod_forn,mfornece,mnum_ped,mdata_ped,;
                        data_emb,micm,mfob,mcif,mdia1,mdia2,mdia3,mdia4,mdia5,mtransp,mcomprado,;
                        mcod_merc,mquantd,mpr_fat,mdesc1,mdesc2,mdesc3,lin,opcao,mfrete,;
                        mencargo,mdespesa,mipi,muf,mperc,mcod_op:='01',mavista,mpg_ant,;
                        m_codigo:={},m_contem:={},mtp_desc,mtp_ipi
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_pede := {}
        sr_getconnection():exec("SELECT * FROM sacped_e WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_pede)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_pede) = 0
                atencao('No.do Pedido ainda nao foi Solicitado !!!')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+2,cci+20);DEVOUT(STRZERO(mnum_ped,6))
        DEVPOS(lci+2,cci+37);DEVOUT(cons_pede[1,15])
        DEVPOS(lci+3,cci+15);DEVOUT(cons_pede[1,2])
        DEVPOS(lci+3,cci+29);DEVOUT(cons_pede[1,4])
        setcor(1)
        point := RECNO()

        ent_forn(VAL(cons_pede[1,15]),lci+2,cci+42)
        //ver_uf(muf)

        mdata_ped := cons_pede[1,4]
        mfob := cons_pede[1,20]
        mcif := cons_pede[1,21]
        mdia1 := cons_pede[1,26]
        mdia2 := cons_pede[1,27]
        mdia3 := cons_pede[1,28]
        mdia4 := cons_pede[1,29]
        mdia5 := cons_pede[1,30]
        mtransp := cons_pede[1,32]
        mcomprado := cons_pede[1,19]
        mfrete := cons_pede[1,31]
        mencargo := cons_pede[1,33]
        mdespesa := cons_pede[1,34]
        mtp_desc := cons_pede[1,22]
        mdata_chega := cons_pede[1,41]
        @ lci+5,cci+13 GET mfob PICT '@!' VALID mfob $ 'X, '
        @ lci+5,cci+21 GET mcif PICT '@!' VALID mcif $ 'X, ' WHEN mfob = ' '
        @ lci+6,cci+21 GET mavista PICT '@!' VALID mavista $ 'X, '
        @ lci+6,cci+36 GET mpg_ant PICT '@!' VALID mpg_ant $ 'X, ' WHEN mavista = ' '
        @ lci+7,cci+13 GET mdia1 PICT '999' WHEN mavista = ' ' .AND. mpg_ant = ' '
        @ lci+7,cci+20 GET mdia2 PICT '999' WHEN mavista = ' ' .AND. mpg_ant = ' '
        @ lci+7,cci+27 GET mdia3 PICT '999' WHEN mavista = ' ' .AND. mpg_ant = ' '
        @ lci+7,cci+34 GET mdia4 PICT '999' WHEN mavista = ' ' .AND. mpg_ant = ' '
        @ lci+7,cci+41 GET mdia5 PICT '999' WHEN mavista = ' ' .AND. mpg_ant = ' '
        @ lci+8,cci+13 GET mtransp PICT '@!'
        @ lci+9,cci+13 GET mcomprado PICT '@!'
        @ lci+10,cci+13 GET mfrete PICT '999,999.99'
        @ lci+10,cci+34 GET mencargo PICT '999,999.99'
        @ lci+10,cci+58 GET mdespesa PICT '999,999.99'
        @ lci+11,cci+15 GET mdata_chega
        @ lci+12,cci+46 GET mtp_desc PICT '@!' VALID mtp_desc $ 'P,R'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        ASIZE(m_codigo,0)
        ASIZE(m_contem,0)
        ccomm := "UPDATE sacped_e SET "
        ccomm := ccomm + "fob       = " + sr_cdbvalue(mfob     )+;
                         ",cif       = " + sr_cdbvalue(mcif     )+;
                         ",dia2      = " + sr_cdbvalue(mdia2    )+;
                         ",dia3      = " + sr_cdbvalue(mdia3    )+;
                         ",dia4      = " + sr_cdbvalue(mdia4    )+;
                         ",dia5      = " + sr_cdbvalue(mdia5    )+;
                         ",transp    = " + sr_cdbvalue(mtransp  )+;
                         ",comprador = " + sr_cdbvalue(mcomprado)+;
                         ",frete     = " + sr_cdbvalue(mfrete   )+;
                         ",encargo_f = " + sr_cdbvalue(mencargo )+;
                         ",disp_asse = " + sr_cdbvalue(mdespesa )+;
                         ",tp_desc   = " + sr_cdbvalue(mtp_desc )+;
                         ",tp_ipi    = " + sr_cdbvalue(mtp_ipi  )+;
                         ",data_chega = " + IF(! EMPTY(mdata_chega),sr_cdbvalue(mdata_chega),'NULL') //7
                        IF ! EMPTY(mavista)
                                ccomm := ccomm + ",dia1       = 'AV'"
                        ELSE
                                ccomm := ccomm + ",dia1      = " + sr_cdbvalue(mdia1     )
                        ENDIF
        ccomm := ccomm + " WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        i:=0
        FOR i = 1 TO LEN(cons_pede)
                AADD(m_codigo,cons_pede[i,6])
*                                      1            2           3              4                   5             6                 7               8                9               10            11           12                13               14
                AADD(m_contem,{cons_pede[i,5],cons_pede[i,7],cons_pede[i,8],cons_pede[i,10],cons_pede[i,14],cons_pede[i,23],cons_pede[i,24],cons_pede[i,24],cons_pede[i,15],cons_pede[i,18],cons_pede[i,9],cons_pede[i,36],cons_pede[i,35],cons_pede[i,40]})
        NEXT
        i := 1
        WHILE .T.
                mensagem('<A>p/Alteracao <I>p/Incluir  <ENTER>p/Impressao (0)para EXCLUIR produto <ESC>Retorna')
                setcor(3)
                DEVPOS(lci+14,cci+17);DEVOUT(m_codigo[i])
                DEVPOS(lci+14,cci+24);DEVOUT(m_contem[i,2])
                DEVPOS(lci+15,cci+17);DEVOUTPICT(m_contem[i,4],'9999.99')
                DEVPOS(lci+16,cci+17);DEVOUTPICT(m_contem[i,5],'9,999,999.99')
                DEVPOS(lci+17,cci+17);DEVOUTPICT(m_contem[i,6],'999,999.99')
                DEVPOS(lci+18,cci+17);DEVOUTPICT(m_contem[i,7],'999,999.99')
                DEVPOS(lci+19,cci+17);DEVOUTPICT(m_contem[i,8],'999,999.99')
                DEVPOS(lci+20,cci+17);DEVOUTPICT(m_contem[i,12],'999,999.99')
                setcor(1)
                INKEY(0)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF LASTKEY() = 5
                        i--
                        IF i = 0
                                i = 1
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 24
                        i++
                        IF i > LEN(m_codigo)
                                i--
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 13
                        GO point
                        form_ped_ent(1,STRZERO(mnum_ped,6))
                        imp_ped2()
                        EXIT
                ENDIF
                IF LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        mensagem('Alterar os campos - <0>para EXCLUIR produto - <ESC>Retorna')
                        setcor(1)
                        mquantd := m_contem[i,4]
                        mpr_fat := m_contem[i,5]
                        mdesc1 := m_contem[i,6]
                        mdesc2 := m_contem[i,7]
                        mdesc3 := m_contem[i,8]
                        mipi := m_contem[i,12]

                        @ lci+15,cci+17 GET mquantd PICT '9999.99'
                        @ lci+16,cci+17 GET mpr_fat PICT '999,999,999.99' WHEN mquantd < 0
                        @ lci+17,cci+17 GET mdesc1 PICT '999,999.99' WHEN mquantd < 0
                        @ lci+18,cci+17 GET mdesc2 PICT '999,999.99' WHEN mquantd < 0
                        @ lci+19,cci+17 GET mdesc3 PICT '999,999.99' WHEN mquantd < 0
                        @ lci+20,cci+17 GET mipi PICT '999,999.99' WHEN mquantd < 0
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        m_contem[i,4] := mquantd
                        m_contem[i,5] := mpr_fat
                        m_contem[i,6] := mdesc1
                        m_contem[i,7] := mdesc2
                        m_contem[i,8] := mdesc3
                        m_contem[i,12] := mipi
                        IF mquantd > 0
                                opcao := op_simnao('S','Confirma os Dados:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                ccomm := "UPDATE sacped_e SET quantd  = " + sr_cdbvalue(m_contem[i,4])+;
                                         ",saldo   = " + sr_cdbvalue(m_contem[i,4])+;
                                         ",vlr_fat = " + sr_cdbvalue(m_contem[i,5])+;
                                         ",desc1   = " + sr_cdbvalue(m_contem[i,6])+;
                                         ",desc2   = " + sr_cdbvalue(m_contem[i,7])+;
                                         ",desc3   = " + sr_cdbvalue(m_contem[i,8])+;
                                         ",ipi     = " + sr_cdbvalue(m_contem[i,12])+;
                                         ",tp_desc = " + sr_cdbvalue( mtp_desc)+;
                                         ",tp_ipi  = " + sr_cdbvalue( mtp_ipi)+;
                                         " WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND cod_merc = "+sr_cdbvalue(m_codigo[i])
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ELSE
                                opcao := op_simnao('S','Confirma a EXCLUSAO do produto:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                sr_getconnection():exec("DELETE FROM sacped_e  WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND cod_merc = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                                EXIT
                        ENDIF

                        ***************
                        SELE('ped_e');ORDSETFOCUS(1)
                        GO TOP
                        ***************
                ENDIF
                IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        setcor(3)
                        DEVPOS(lci+14,cci+17);DEVOUT('     ')
                        DEVPOS(lci+14,cci+24);DEVOUT(SPACE(40))
                        DEVPOS(lci+15,cci+17);DEVOUTPICT(0,'9999.99')
                        DEVPOS(lci+16,cci+17);DEVOUTPICT(0,'9,999,999.99')
                        DEVPOS(lci+17,cci+17);DEVOUTPICT(0,'999,999.99')
                        DEVPOS(lci+18,cci+17);DEVOUTPICT(0,'999,999.99')
                        DEVPOS(lci+19,cci+17);DEVOUTPICT(0,'999,999.99')
                        DEVPOS(lci+20,cci+17);DEVOUTPICT(0,'999,999.99')
                        setcor(1)
                        mcod_merc := mquantd := mpr_fat := mdesc1 := mdesc2 :=;
                        mdesc3 := mipi := 0

                        @ lci+14,cci+17 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+14,cci+24,,1)
                        @ lci+15,cci+17 GET mquantd PICT '9999.99' VALID IF(mquantd <= 0,.F.,.T.)
                        @ lci+16,cci+17 GET mpr_fat PICT '999,999,999.99'
                        @ lci+17,cci+17 GET mdesc1 PICT '999,999.99'
                        @ lci+18,cci+17 GET mdesc2 PICT '999,999.99'
                        @ lci+19,cci+17 GET mdesc3 PICT '999,999.99'
                        @ lci+20,cci+17 GET mipi PICT '999,999.99'
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        opcao := op_simnao('S','Confirma os Dados:')
                        IF opcao = 'N'
                                LOOP
                        ENDIF
                        IF ADIREG()
                                ped_e-> num_ped :=  STRZERO(mnum_ped,6)
                                ped_e-> cod_forn :=  STRZERO(mcod_forn,4)
                                ped_e-> fornece :=  mfornece
*                               ped_e-> ped_forn :=  mnum_ped
                                ped_e-> dat_ped :=  mdata_ped
                                ped_e-> fob := mfob
                                ped_e-> cif := mcif
                                IF ! EMPTY(mavista)
                                        ped_e-> dia1 :=  'AV'
                                ELSE
                                        ped_e-> dia1 :=  mdia1
                                ENDIF
                                ped_e-> dia2 := mdia2
                                ped_e-> dia3 := mdia3
                                ped_e-> dia4 := mdia4
                                ped_e-> dia5 := mdia5
                                ped_e-> transp := mtransp
                                ped_e-> comprador := mcomprado
                                ped_e-> frete := mfrete
                                ped_e-> encargo_f := mencargo
                                ped_e-> disp_asse := mdespesa
                                ped_e-> tp_desc :=  mtp_desc
                                ped_e-> tp_ipi :=  mtp_ipi
                                ped_e-> num_ped :=  STRZERO(mnum_ped,6)
                                ped_e-> dat_ped :=  mdata_ped
                                ped_e-> peso :=  merc->peso
                                ped_e-> gru_sub :=  merc->gru_sub
                                ped_e-> cod_merc := mcod_merc
                                ped_e-> merc :=  merc->merc
                                ped_e-> unidade :=  merc->unidade
                                ped_e-> quantd := mquantd
                                ped_e-> saldo := mquantd
                                ped_e-> vlr_fat := mpr_fat
                                ped_e-> desc1 := mdesc1
                                ped_e-> desc2 := mdesc2
                                ped_e-> desc3 := mdesc3
                                ped_e-> ipi := mipi
                                ped_e-> isento :=  merc->isento
                                COMMIT
                                UNLOCK
                                AADD(m_codigo,mcod_merc)
*                                                1               2           3           4      5       6      7     8         9             10            11      12   13     14
                                AADD(m_contem,{merc->gru_sub,merc->merc,merc->unidade,mquantd,mpr_fat,mdesc1,mdesc2,mdesc3,merc->cod_fab,merc->fabrica,merc->peso,mipi,'R',merc->ref})
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
***************************
* IMPRIMI O PEDIDO AVULSO
***************************
FUNCTION imp_ped2(mn_p)
*********************
MEMVAR point,m_codigo,mnum_ped,mtraco,mfornece,mperc,mfob,mcif,m_contem,mcomprado,;
       mdia1,mdia2,mdia3,mdia4,mdia5,mtransp,mfrete,mdespesa,mencargo
LOCAL mopcao,mlinha,mtot_ped,mtot_des,mtot_vol,i,cons_forn:={}

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag

mtot_ped := mtot_des := mtot_vol := 0
IF LEN(m_codigo) = 0
        RETURN NIL
ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := m_indiv[1,18]
****************************************************
IF ! imp_arq('PED_COMP.REL','R')
        RETURN NIL
ENDIF
mpag := 1
imprt(mtipo_imp,'E')
DEVPOS(PROW(),00);DEVOUT(memp_resa)
DEVPOS(PROW(),PCOL()+5);DEVOUT('No.: '+STRZERO(mnum_ped,6))
imprt(mtipo_imp,'N')
DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
DEVPOS(PROW()+1,00);DEVOUT(mcid_firm+'Fone: '+mfone_firm)
DEVPOS(PROW()+1,00);DEVOUT(minsc_firm+'    '+mcgc_firm)
DEVPOS(PROW(),60);DEVOUT('Pagina: '+STRZERO(mpag,3))
DEVPOS(PROW()+1,00);DEVOUT(mtraco)
DEVPOS(PROW()+1,00);DEVOUT('Forn.:')
cons_forn := {}
cComm  := "SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(cons_pede[1,15])
sr_getconnection():exec(ccomm,,.t.,@cons_forn)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_forn) > 0
        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_pede[1,15])
        DEVPOS(PROW(),PCOL());DEVOUT('-')
        DEVPOS(PROW(),PCOL());DEVOUT(LEFT(cons_forn[1,2],37))
ENDIF
DEVPOS(PROW(),PCOL()+1);DEVOUT('Ped.No.:')
DEVPOS(PROW(),PCOL()+1);DEVOUT(STRZERO(mnum_ped,6))
DEVPOS(PROW(),PCOL()+1);DEVOUT('Data:')
DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_pede[1,4])
DEVPOS(PROW()+1,00);DEVOUT('Fone: '+cons_forn[1,13]+' - Fone: '+cons_forn[1,14]+' - Fax: '+cons_forn[1,15])
IF ! EMPTY(cons_forn[1,27])
        DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+cons_forn[1,27])
ENDIF
IF ! EMPTY(cons_forn[1,28])
        DEVPOS(PROW()+1,00);DEVOUT('      '+cons_forn[1,28])
ENDIF
IF ! EMPTY(cons_forn[1,29])
        DEVPOS(PROW()+1,00);DEVOUT('      '+cons_forn[1,29])
ENDIF
IF ! EMPTY(cons_forn[1,30])
        DEVPOS(PROW()+1,00);DEVOUT('      '+cons_forn[1,30])
ENDIF
IF ! EMPTY(cons_forn[1,31])
        DEVPOS(PROW()+1,00);DEVOUT('      '+cons_forn[1,32])
ENDIF
IF ! EMPTY(cons_forn[1,31])
        DEVPOS(PROW()+1,00);DEVOUT('      '+cons_forn[1,32])
ENDIF

DEVPOS(PROW()+2,00);DEVOUT('Embarque:')
DEVPOS(PROW(),PCOL()+1);DEVOUT('../../..')
DEVPOS(PROW(),PCOL()+1);DEVOUT('ICM:')
DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mperc,'99.99')
DEVPOS(PROW(),PCOL()+1);DEVOUT('FOB:')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mfob)
DEVPOS(PROW(),PCOL()+1);DEVOUT('CIF:')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mcif)
DEVPOS(PROW(),PCOL()+1);DEVOUT('Cond.:')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mdia1+'dd')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mdia2+'dd')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mdia3+'dd')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mdia4+'dd')
DEVPOS(PROW(),PCOL()+1);DEVOUT(mdia5+'dd')

DEVPOS(PROW()+2,00);DEVOUT('Transp.:')
IF mtransp = SPACE(15)
        DEVPOS(PROW(),09);DEVOUT('...............')
ELSE
        DEVPOS(PROW(),09);DEVOUT(mtransp)
ENDIF
DEVPOS(PROW(),PCOL()+2);DEVOUT('Documento:.........')
DEVPOS(PROW(),PCOL()+2);DEVOUT('Volume Total NF.:.............')

DEVPOS(PROW()+2,00);DEVOUT('Vlr.Nota:..............')
DEVPOS(PROW(),25);DEVOUT('Comprador:')
IF mcomprado <> SPACE(15)
        DEVPOS(PROW(),36);DEVOUT(mcomprado)
ELSE
        DEVPOS(PROW(),36);DEVOUT('...............')
ENDIF

DEVPOS(PROW(),PCOL()+2);DEVOUT('Recebedor:................')

DEVPOS(PROW()+2,00);DEVOUT('Emissao:.../../..   Saida: ../../..   Chegada:.../../..   Frete:..............')
DEVPOS(PROW()+2,00);DEVOUT('Enc.Financ.:..........   Disp.Acess.:..........  Data Pedido:')
DEVPOS(PROW(),71);DEVOUT(cons_pede[1,4])
IF ! EMPTY(cons_pede[1,41])
        DEVPOS(PROW()+1,00);DEVOUT('Previsao de Chegada:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_pede[1,41])
ENDIF
DEVPOS(PROW()+1,00);DEVOUT('OBS.: '+cons_pede[1,39])

DEVPOS(PROW()+1,00);DEVOUT(mtraco)
imprt(mtipo_imp,'C',1)
DEVPOS(PROW()+1,00);DEVOUT('Cod.  Descricao                             Un.    Quantd.    Preco Unit.     IPI   Observacao          ')
imprt(mtipo_imp,'N',1)
DEVPOS(PROW(),00);DEVOUT(mtraco)
imprt(mtipo_imp,'C')
i := 0
FOR i = 1 TO LEN(m_codigo)
        DEVPOS(PROW()+1,00);DEVOUT(m_codigo[i])
        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(m_contem[i,2],37))            // Produto
        DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(m_contem[i,3],1,2))                     // Unidade
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_contem[i,4],'99,999.999')                     // Quantidade
        DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(m_contem[i,13]='R','R$: ',' $: ')+TRANSFORM(m_contem[i,5],'999,999.9999'))
        DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(m_contem[i,12],'99.99')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('......................')
        IF ver_serie() = '141473'
                DEVPOS(PROW()+1,00);DEVOUT('Ref.Fab.: '+m_contem[i,14])
        ENDIF
        IF ped_e->tp_desc = 'R'
                mtot_des := m_contem[i,5] - m_contem[i,6]
                mtot_des := mtot_des - m_contem[i,7]
                mtot_des := mtot_des - m_contem[i,8]
                mtot_ped := mtot_ped + ((mtot_des + m_contem[i,12]) * m_contem[i,4])
        ELSE
                mtot_des := m_contem[i,5] - (m_contem[i,5] * (m_contem[i,6]/100))
                mtot_des := mtot_des - (mtot_des * (m_contem[i,7]/100))
                mtot_des := mtot_des - (mtot_des * (m_contem[i,8]/100))
                mtot_ped := mtot_ped + (iat((mtot_des * ((m_contem[i,12]/100)+1)),2) * m_contem[i,4])
        ENDIF
        mtot_vol := mtot_vol + m_contem[i,4]
        mtot_des := 0
       IF PROW() = 59
                EJECT
                mpag ++
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                DEVPOS(PROW(),PCOL()+5);DEVOUT('No.: '+STRZERO(mnum_ped,6))
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm+'Fone: '+mfone_firm)
                DEVPOS(PROW()+1,00);DEVOUT(minsc_firm+'    '+mcgc_firm)
                DEVPOS(PROW(),60);DEVOUT('Pagina: '+STRZERO(mpag,3))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
        ENDIF
NEXT
IF PROW() >=60
        EJECT
        imprt(mtipo_imp,'N',3)
        DEVPOS(PROW(),00);DEVOUT('Volume Total Pedido:')
        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_vol,'99999.99')
        DEVPOS(PROW()+2,00);DEVOUT('Total do Pedido R$_:')
        DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_ped + mfrete + mencargo + mdespesa,'99,999,999.99')
ENDIF
imprt(mtipo_imp,'N',3)
DEVPOS(PROW(),00);DEVOUT('Volume Total Pedido:')
DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_vol,'99999.99')
DEVPOS(PROW()+2,00);DEVOUT('Total do Pedido R$:')
DEVPOS(PROW(),PCOL());DEVOUTPICT(mtot_ped + mfrete + mencargo + mdespesa,'99,999,999.99')
DEVPOS(PROW()+1,00);DEVOUT(mtraco)
imprt(mtipo_imp,'N')
DEVPOS(PROW()+2,00);DEVOUT(PADC(' ---------------------------             -------------------------------',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('           Comprador                                  Vendedor          ',80))
DEVPOS(PROW()+1,00);DEVOUT(TIME())
EJECT
SETPRC(00,00)
SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('PED_COMP.REL')
RETURN NIL
