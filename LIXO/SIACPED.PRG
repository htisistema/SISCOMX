********************************
* SOLICITAR PEDIDO
*******************************
#include "SIXCDX.CH"

FUNCTION siacped()        // CODIGO DE BARRA
***************
LOCAL MPRG:='SIACPED'

LOCAL mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc,mtelaobs,;
      mdocum,mhoras,mchass:=SPACE(20),mdescri1:=SPACE(60),;
      mdescri2:=SPACE(60),mdescri3:=SPACE(60),mdescri4:=SPACE(60),mdescri5:=SPACE(60)


PUBLIC cor,mdata_sis,;
       mold:= '�Ŀ�����',;
       mol := '        ',;
       mversao,sistema,memp_resa:='TALAO DE PEDIDO',mcgc_firm,minsc_firm,;
       mend_firm,mcid_firm,mfone_firm,muf_firm,msit_tip:='SISCOM',mtcor:=NIL
       //,mdrive
//
PUBLIC mens,sis_cidade,cod_operado:='001'
//
PUBLIC tesc,mcaminho,mtip_term
PRIVATE m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},m_alt:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li,ci,lb,cb,mnome_ven,lci,cci,lba,cba,tela,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,mvarejo,tela_ant,f4,;
        mautoriz,mlibera,mprz,mnum_ped:=0,menvelope,mcod_cli,mnome_cli,mponto,mflag,ali,no,mcod_vend,;
        msubtotal,mtot_custo:=0,mcod_aux,mproducao,mcomissao:=0,mcust_real,mvendido:=0,;
        mtipo_fat:= ' ',mobs_prod:=SPACE(40),mlib_spc:=' ',mtipo_imp,;
        mporta_imp,mtipfrm,mqtd_prod:=0
******* T I P O   D E   S I S T E M A **************
mversao := 'v6.04.10'
sistema := '"SISCOM" Sistema Integrado Automacao Comercial'
****************************************************

tesc := CHR(27)
// para abrir seu banco ARQUIVOS .SDX
RDDSETDEFAULT("SIXCDX")

// MODULO PRA ACESSAR ARQUIVOS .CDX
// REQUEST DBFCDX
// RDDSETDEFAULT('DBFCDX')
//
mdata_sis := DATE()
SET DATE BRITI
SET MESSAGE TO 23 CENTER
SET CONS OFF
SET WRAP ON
SET SCOREBOARD OFF
SET DATE BRITI
SET DELE ON
SET INTEN ON
SET EPOCH TO 1911

lci = 00
cci = 00
lba = MAXROW()-2
*lba = 17
cba = 79

SET KEY -9 TO
SET KEY 286 TO
SET KEY 294 TO
SET KEY -4 TO

SET KEY -9 TO fecha_pd('1')             // neste mesmo PRG. <F10>Tecla
SET KEY 286 TO alt_prd()               // Alteracao de Produtos
SET KEY -4 TO f5_qtd()                  // Imforma a quantidade no AUTOCAIXA no PRG SACROT
*---------------------------------------------
CLOSE ALL
IF ! AbriArq('saccfg','cfg');RETURN NIL;ENDIF
IF ! AbriArq('sactped','tped');RETURN NIL;ENDIF
IF ! AbriArq('sacnotp','notp');RETURN NIL;ENDIF
mcaminho := ''
mtipo_imp := m_indiv[1,10]
mporta_imp := m_indiv[1,7]
*mquantd := cfg->qtdcopped
mquantd := 0
mtipfrm := m_indiv[1,9]
IF ! AbriArq('sacprod','prod','E');RETURN NIL;ENDIF
tela = SAVESCREEN(00,00,24,79)
CLEAR GETS
limpa(00,00,24,79)
setcor(6)
DEVPOS(24,00);DEVOUT(PADL('HTI Ltda. >>SISCOM '+mversao+'<< Fone:(81)'+mfone_HTI+' >>',80))
setcor(1)
botao(lci,cci,lba,cba)
// ABERTURA DA TELA DE PEDIDO
mproducao := ' '
@ lci+2,cci+1 TO lci+2,cba-1
DEVPOS(lci+1,cci+1);DEVOUT('Cod.')
DEVPOS(lci+1,cci+7);DEVOUT('Descricao')
DEVPOS(lci+1,cci+51);DEVOUT('Qtd.')
DEVPOS(lci+1,cci+58);DEVOUT('Vlr.Unit.')
DEVPOS(lci+1,cci+70);DEVOUT('Vlr.Total')
msubtotal := 0
mtot_ipi  := 0
setcor(3)
@ lba-4,cci+1 TO lba-4,cba-1
@ lba-2,cci+1 TO lba-2,cba-1
setcor(1)
DEVPOS(lba-4,cci+1);DEVOUT('Cod.')
DEVPOS(lba-4,cci+7);DEVOUT('Descricao')
DEVPOS(lba-4,cci+53);DEVOUT('Qtd.')
DEVPOS(lba-4,cci+58);DEVOUT('Vlr.Unit.')
DEVPOS(lba-4,cci+70);DEVOUT('Vlr.Total')
DEVPOS(lba-1,cci+1);DEVOUT('Item:')
DEVPOS(lba-1,cci+58);DEVOUT('Total:')

DEVPOS(04,02);DEVOUT(PADC('Terminal: '+m_indiv[1,1],77))

// FIM DA TELA DE PEDIDO
IF ! FILE('sacprod.cdx')
        prog(24,30,00,'COD_MERC')
        ORDCREATE('sacprod','codigo','prod->cod_merc')
        prog(24,30,10,'GRU_SUB+COD_MERC')
        ORDCREATE('sacprod','grupo','prod->gru_sub+prod->cod_merc')
        prog(24,30,20,'MERC')
        ORDCREATE('sacprod','desc','prod->merc')
        prog(24,30,50,'COD_FAB+MERC')
        ORDCREATE('sacprod','codfab','prod->cod_fab+prod->merc')
        prog(24,30,60,'GRU_SUB+MERC')
        ORDCREATE('sacprod','grumerc','prod->gru_sub+prod->merc')
        prog(24,30,70,'COD_BARR+MERC')
        ORDCREATE('sacprod','codbarr','prod->cod_barr+prod->merc')
        prog(24,30,80,'ESPECIE+MERC')
        ORDCREATE('sacprod','espemer','prod->especie+prod->merc')
        prog(24,30,90,'REF+MERC')
        ORDCREATE('sacprod','refmer','prod->ref+prod->merc')
ENDIF
*---------------------------------------------
mvar := SAVESCREEN(00,00,24,79)
botao(10,10,12,45,,' Quantidade de Copias ')
DEVPOS(11,11);DEVOUT('Quantidade de Copias p/Pedido:')
@ 11,COL()+1 GET mquantd PICT '9' VALID IF(EMPTY(mquantd),.F.,.T.)
READ
RESTSCREEN(00,00,24,79,mvar)
setcor(6)
DEVPOS(24,01);DEVOUT('Qtd.Copias: '+STRZERO(mquantd,1))
setcor(1)
tela_ant := SAVESCREEN(00,00,24,79)
IF mquantd = 0
        atencao('A Quantidade de Copias deve ser preenchida OK..')
        RESTSCREEN(00,00,24,79,tela)
        fecha_conexaoDB()
        QUIT
ENDIF

msubtotal := 0
mnome_ven := SPACE(30)

SET KEY 287 TO
mautoriz := SPACE(3)
ASIZE(m_merc,0)
ASIZE(m_matriz,0)
ASIZE(m_codigo,0)
ASIZE(m_Cbarra,0)
ASIZE(m_alt,0)

mflag := 0
mcod_vend := SPACE(3)
mtot_custo := 0
mcont_item:=0
WHILE .T.
        mhoras := TIME()
        IF LEN(m_codigo) = 0
                mvarejo := 1
                mvar := SAVESCREEN(00,00,24,79)
                botao(15,24,17,56,,' Tipo de Venda ')
                @ 16,25 PROMPT ' Venda Normal ' MESSAGE "** Venda Normal - <ESC> p/Retornar **"
                @ 16,39 PROMPT ' Venda Especial ' MESSAGE "** Venda Especial - <ESC> p/Retornar **"
                SET INTEN ON
                MENU TO mvarejo
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,mvar)
                        SET KEY -9 TO
                        RETURN NIL
                ENDIF
                RESTSCREEN(00,00,24,79,mvar)
        ENDIF
        IF(EMPTY(mcod_bc) .AND. EMPTY(mmerc),.T.,limpa(lci+3,cci+1,lba-5,cba-1))
        mlibera := ' '
        mtot_ped := 0
        setcor(3)
        DEVPOS(lba-1,cci+07);DEVOUT(STRZERO(mcont_item,3))
        f = 0
        i = 1
        msubtotal := 0
        mtot_ipi  := 0
        mtot_custo := 0
        WHILE  i <= LEN(m_codigo)
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        EXIT
                ENDIF
                mlibera := ' '
                IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                        i++
                        LOOP
                ENDIF
                msubtotal := msubtotal + iat((m_matriz[i,1] * m_matriz[i,2]),2)
                mtot_custo:= mtot_custo + iat((m_matriz[i,1] * m_matriz[i,9]),2)
                @ lba-1,cci+65 SAY msubtotal PICT '999,999.999'
                IF f > 13
                        i++
                ELSE
                        i++
                        f++
                ENDIF
        ENDDO
        i = 1
        IF f > 13
                i := LEN(m_codigo) - 13
        ENDIF
        f = 0
        WHILE  i <= LEN(m_codigo)
                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                        EXIT
                ENDIF
                mlibera := ' '
                IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                        i++
                        LOOP
                ENDIF
                setcor(3)
                @ lci+3+f,cci+1 SAY m_codigo[i]
                IF m_matriz[i,6] = 'EV'
                        @ lci+3+f,COL()+1 SAY LEFT(m_matriz[i,5],28)
                        @ lci+3+f,COL()+1 SAY m_matriz[i,24]
                ELSE
                        IF ! EMPTY(m_matriz[i,28])
                                @ lci+3+f,COL()+1 SAY LEFT(m_matriz[i,5],18)
                                @ lci+3+f,COL()+1 SAY m_matriz[i,28]
                        ELSE
                                @ lci+3+f,COL()+1 SAY LEFT(m_matriz[i,5],39)
                        ENDIF
                ENDIF
                @ lci+3+f,COL()+1 SAY m_matriz[i,1] PICT '99999.99'
                @ lci+3+f,COL()+1 SAY m_matriz[i,2] PICT '999,999.999'
                @ lci+3+f,COL()+1 SAY m_matriz[i,2] * m_matriz[i,1] PICT '999,999.999'

                IF f > 13
                        i++
                ELSE
                        i++
                        f++
                ENDIF
        ENDDO
        mmerc := SPACE(40)
        mcod_bc := SPACE(16)
        mcod_merc = 0
        IF(mqtd_prod > 1,mqtd_prod,mqtd_prod=1)
        mdesconto = 0
        mvlr_fat = 0
        mpromocao = 0
        mobs1 := SPACE(77)
        mobs2 := SPACE(77)
        menvelope := SPACE(10)
        f4 := ' '
        limpa(lba-3,cci+1,lba-3,cba-1)

        // ATIVA O FECHAMENTO DO PEDIDO

        SET KEY -9 TO fecha_pd('1')       // neste mesmo PRG. <F10>Tecla

        mensagem('Digite o codigo ou nome da mercadoria - <F10>Fechamento - <ESC>Abandonar')
        @ lba-3,cci+1 GET mcod_bc PICT '@!'
        READ
        IF LASTKEY() = 27
                opcao := mensagem1('Deseja Abandonar o sistema:','N','S,N')
                IF opcao = 'S'
                        RESTSCREEN(00,00,24,79,tela)
                        SET KEY -9 TO
                        RETURN NIL
                ENDIF
        ENDIF
        IF EMPTY(mcod_bc)
                @ lba-3,cci+7 GET mmerc PICT '@!'       //VALID lim_get() WHEN men_get(lba-03,cci+50,'<Digite descricao mercadoria> <ENTER>retornar <F4>pesquisar <ALT+A>Alterar Produto')
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
        ENDIF
        IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                LOOP
        ENDIF
        IF ! EMPTY(mcod_bc)
                IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                        mponto := ASCAN(m_Cbarra,mcod_bc)
                        IF mponto > 0 .AND. RTRIM(prod->merc) <> 'DIVERSOS'
                                alt_prd()
                                LOOP
                        ENDIF
                        *************
                        SELE('prod');ORDSETFOCUS(6)
                        *************

                        IF ! prod->(DBSEEK(mcod_bc))
                                atencao('Codigo de BARRA nao cadastrado')
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        mponto := ASCAN(m_codigo,mcod_merc)
                        IF mponto > 0 .AND. RTRIM(prod->merc) <> 'DIVERSOS'
                                alt_prd()
                                LOOP
                        ENDIF
                        *************
                        SELE('prod');ORDSETFOCUS(1)
                        *************

                        IF ! prod->(DBSEEK(mcod_merc))
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                ENDIF
        ELSEIF ! EMPTY(mmerc)
                *************
                SELE('prod');ORDSETFOCUS(3)
                *************

                IF ! prod->(DBSEEK(RTRIM(mmerc)))
                        atencao('Esta mercadoria nao cadastrada')
                        LOOP
                ENDIF
                f4_prod()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        // DESATIVA O FECHAMENTO DO PEDIDO
        SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
        //
        mcod_merc := VAL(prod->cod_merc)
        setcor(3)
        @ lba-3,cci+01 SAY mcod_merc
*       @ lba-1,cci+20 SAY prod->saldo_mer PICT '99,999,999.99'
        setcor(1)
        @ lba-1,cci+13 SAY 'Saldo:'
        IF prod->promocao > 0
                setcor(3)
                @ lba-3,cci+07 SAY LEFT(prod->merc,35)
                mvlr_fat = iat(prod->pr_venda,2) - iat((prod->pr_venda * (prod->promocao / 100)),2)
                mp_venda = mvlr_fat
                SETCOLOR([6])
                @ lba-3,COL()+1 SAY '(P)'
        ELSE
                setcor(3)
                @ lba-3,cci+07 SAY prod->merc
                IF mvarejo = 2
                        IF ! EMPTY(prod->pr_venda1)
                                mvlr_fat = prod->pr_venda1
                                mp_venda = prod->pr_venda1
                        ELSE
                                mvlr_fat = iat(pr_venda*((prod->varejo/100)+1),2)
                                mp_venda = iat(pr_venda*((prod->varejo/100)+1),2)
                        ENDIF
                ELSE
                        mvlr_fat = iat(prod->pr_venda,2)
                        mp_venda = iat(prod->pr_venda,2)
                ENDIF
        ENDIF
        IF prod->disp = 'N'
                atencao('MERCADORIA NAO DISPONIVEL PARA VENDA',3)
                LOOP
        ENDIF
        IF ! EMPTY(mmerc) .AND. RTRIM(prod->merc) <> 'DIVERSOS'       //.AND. prod->livre_desc <> 'S'
                mponto := ASCAN(m_codigo,cod_merc)
                IF mponto > 0 .AND. RTRIM(prod->merc) <> 'DIVERSOS'
                        alt_prd()
                        LOOP
                ENDIF
        ENDIF
        mmerc := prod->merc
        IF prod->livre_desc = 'S'
                @ lba-3,cci+7 GET mmerc PICT '@!'               //VALID lim_get() WHEN men_get(lba-09,cci+28,'<Digite descricao mercadoria>  <ENTER>p/retornar  <F4>p/pesquisar')
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        IF EMPTY(mcod_merc)
                LOOP
        ENDIF
        mcust_real := prod->cust_real
        setcor(3)
        DEVPOS(lba-3,cci+57);DEVOUTPICT(mvlr_fat,'999,999.999')
        setcor(1)
        mensagem('<F8> para consultar aplicacao do produto')
        mqtd_prod:=1
        @ lba-3,cci+46 GET mqtd_prod PICT '999999.999' VALID IF(EMPTY(mqtd_prod),.F.,.T.)
        READ
        IF LASTKEY() = 27       // .OR. EMPTY(mqtd_prod)
                LOOP
        ENDIF
        mensagem('Digite o valor do produto - <ESC>Abandonar')
        @ lba-3,cci+57 GET mvlr_fat PICT '999,999.999'
        READ
        IF LASTKEY() = 27
                mqtd_prod := 1
                LOOP
        ENDIF
        mcomissao := prod->comissao
        mtot_ped = 0
        mtot_ped = mvlr_fat * mqtd_prod
        setcor(3)
        @ lba-3,cci+68 SAY mtot_ped PICT '999,999.999'
        setcor(1)
        mensagem('Confirma Inclusao da Mercadoria [S/n]:')
        opcao := 'S'
        @ MAXROW()-1,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N' WHEN m_indiv[1,26] <> 'T'
        READ
        IF LASTKEY() = 27
                mqtd_prod := 1
                LOOP
        ENDIF
        IF opcao = 'S'
                *************
                SELE('prod');ORDSETFOCUS(1)
                GO TOP
                *************
                prod->(DBSEEK(mcod_merc))
                AADD(m_merc,merc)
                AADD(m_codigo,mcod_merc)
                AADD(m_Cbarra,cod_barr)
                IF mvlr_fat = 0
                *                         1       2          3       4      5     6      7      8         9        10     11       12      13      14        15     16      17       18       19   20    21       22         23           24      25        26             27           28      29      30       31       32       33         34            35           36
                        AADD(m_matriz,{mqtd_prod,mvlr_fat,        0,gru_sub,mmerc,unidade,peso,       0,        0,cod_fab,fabrica,alimento,isento,promocao,mcomissao,bebida,peso_liq,cust_merc,mobs1,mobs2,local,prod->ipi,prod->especie,menvelope,mhoras,prod->ind_icms,prod->sit_trib,mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,prod->prazo,prod->gramatura,mobs_prod})
                ELSE
                        AADD(m_matriz,{mqtd_prod,mvlr_fat,mdesconto,gru_sub,mmerc,unidade,peso,mp_venda,mcust_real,cod_fab,fabrica,alimento,isento,promocao,mcomissao,bebida,peso_liq,cust_merc,mobs1,mobs2,local,prod->ipi,prod->especie,menvelope,mhoras,prod->ind_icms,prod->sit_trib,mchass,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,prod->prazo,prod->gramatura,mobs_prod})
                ENDIF
                AADD(m_alt,STRZERO(mcod_merc,5)+' '+LEFT(mmerc,38)+' '+TRANSFORM(mqtd_prod,'99999.99')+' '+TRANSFORM(mvlr_fat,'999,999.99')+' '+TRANSFORM(mvlr_fat * mqtd_prod,'999,999.999'))
                mcont_item ++
                mqtd_prod := 1
                **********
                SELE('prod');ORDSETFOCUS(1)
                **********
        ELSE
                DBUNLOCKALL()
                mqtd_prod := 1
        ENDIF
ENDDO
RETURN NIL
***************************  F I M  **********************************
***************************
* ALTERACAO DE MERCADORIA
***************************

FUNCTION alt_prd
*****************

LOCAL li:=03,ci:=00,lb:=18,cb:=79,mtela_alt,mp_venda:=0

mtela_alt := SAVESCREEN(00,00,24,79)

botao(li,ci,lb,cb,,' ALTERACAO DE PRODUTOS ','E')
mensagem('Escolha com as Setas e Tecle <ENTER>p/Alterar ou <ESC>p/Abandonar')
setcor(10);mponto := ACHOICE(li+1,ci+1,lb-3,cb-1,m_alt,,,mponto);setcor(1)

RESTSCREEN(00,00,24,79,mtela_alt)
IF mponto = 0
        RETURN .T.
ENDIF
DO WHILE .T.
        CLEAR GETS
        ***************
        SELE('prod');ORDSETFOCUS(1)
        GO TOP
        ***************
        SEEK m_codigo[mponto]

        IF ! BLOQREG()
                LOOP
        ENDIF
        mcod_merc := VAL(cod_merc)
        IF EMPTY(mcod_merc)
                RETURN .T.
        ENDIF
        setcor(3)
        @ lba-3,cci+6 SAY '�'
        @ lba-3,cci+01 SAY mcod_merc
        @ lba-3,cci+07 SAY merc
        mvlr_fat = m_matriz[mponto,2]
        mp_venda = prod->pr_venda
        mqtd_prod = m_matriz[mponto,1]
        menvelope := m_matriz[mponto,24]
        @ lba-1,cci+23 SAY saldo_mer PICT '999999.999'
        setcor(1)
        @ lba-3,cci+46 GET mqtd_prod PICT '999999.99'
        READ
        IF LASTKEY() = 27
                DBUNLOCKALL()
                EXIT
        ENDIF
        IF mqtd_prod = 0
                opcao := op_simnao('S','Confirma Exclusao da Mercadoria [S/n]:')
                IF opcao = 'N'
                        DBUNLOCKALL()
                        EXIT
                ELSE
                        mqtd_prod = 0
                        **********
                        SELE('prod');ORDSETFOCUS(1)
                        **********
                        m_codigo[mponto] = '     '
                        m_merc[mponto] = SPACE(40)
                        m_matriz[mponto,1] = 0
                        m_matriz[mponto,2] = 0
                        m_matriz[mponto,3] = 0
                        m_alt[mponto] := SUBSTR(m_alt[mponto],1,45)+'***** Mercadoria Excluida *****'
                        mcont_item --
                        setcor(3)
                        DEVPOS(lba-1,cci+07);DEVOUT(STRZERO(mcont_item,3))
                        setcor(1)
                        DBUNLOCKALL()
                        DBCOMMITALL()
                ENDIF
                mqtd_prod := 1
                EXIT
        ENDIF
        @ lba-3,cci+57 GET mvlr_fat PICT '999,999.999'
        READ
        IF LASTKEY() = 27
                UNLOCK
                LOOP
        ENDIF
        mtot_ped = 0
        mtot_ped = mvlr_fat * mqtd_prod
        setcor(3)
        @ lba-3,cci+69 SAY mtot_ped PICT '9999999.99'
        setcor(1)
        opcao := op_simnao('S','Confirma Alteracao da Mercadoria [S/n]:')
        IF opcao = 'N'
                DBUNLOCKALL()
                EXIT
        ELSE
                mdesconto := 0
                IF mvlr_fat < iat(pr_venda,2)
                        mdesconto := ((iat(pr_venda,2)-mvlr_fat)/iat(pr_venda,2))*100
                ENDIF
                m_matriz[mponto,1] = mqtd_prod
                m_matriz[mponto,2] = mvlr_fat
                m_matriz[mponto,3] = mdesconto
                m_matriz[mponto,15] = mcomissao
                m_matriz[mponto,24] = menvelope
                m_alt[mponto] := m_codigo[mponto]+' '+m_matriz[mponto,5]+'  '+TRANSFORM(m_matriz[mponto,1],'99999.99')+' '+TRANSFORM(m_matriz[mponto,2],'999,999.99')+' '+TRANSFORM(m_matriz[mponto,2] * m_matriz[mponto,1],'999,999.999')
                DBUNLOCKALL()
                **********
                SELE('prod');ORDSETFOCUS(1)
                **********
                mqtd_prod := 1
                EXIT
        ENDIF
ENDDO
CLEAR GETS
RETURN .T.
********************************** F I M ***************************************
*****************************
* FECHAMENTO DO PEDIDO
*****************************

FUNCTION fecha_pd(mtip,magrupar)
*****************

LOCAL lcia,ccia,lbaa,cbaa,mopcao
MEMVAR m_matriz,m_codigo,m_num,mlci,m_dia,cod_operado,;
       m_alt,mcont_item,mtela,m_pedido,mtipo_fat,;
       m_cbarra,tela_ant,mflag,mtipo_imp,mporta_imp,mqtd_prod,mtipfrm
PRIVATE mnum_ped:=0,mcod_vend:=0,mcliente:=SPACE(30)
lcia := 10
ccia := 05
lbaa := 15
cbaa := 75
tela2 = SAVESCREEN(01,00,MAXROW(),79)
telaven = SAVESCREEN(01,00,MAXROW(),79)
mtraco := REPLI('=',80)
mlinha := 0
lin := 0
mlin := 0
i = 1
CLEAR GETS
mvlr_ent := 0
mp := ' '
i:=0
mt_pedido := 0
mobs1 := SPACE(39)
mobs2 := SPACE(39)
mobs3 := SPACE(39)
mobs4 := SPACE(39)
mcod_vend := 0
mcliente  := SPACE(30)
WHILE .T.
        mensagem('Preencha os campos de acordo com o HELP - <ESC> p/retornar')
        botao(lcia-2,ccia,lbaa,cbaa,,' FECHAMENTO DO PEDIDO ','*')
        setcor(1)
        DEVPOS(lcia-1,ccia+1);DEVOUT('Cliente.....:')
        DEVPOS(lcia,ccia+1);DEVOUT('Cod.Vendedor:')
        DEVPOS(lcia+01,ccia+1);DEVOUT('Observacoes:')
        @ lcia-1,ccia+14 GET mcliente PICT '@!' VALID IF(EMPTY(mcliente),.F.,.t.)
        @ lcia,ccia+14 GET mcod_vend PICT '999'
        @ lcia+01,ccia+14 GET mobs1
        @ lcia+02,ccia+14 GET mobs2 WHEN ! EMPTY(mobs1)
        @ lcia+03,ccia+14 GET mobs3 WHEN ! EMPTY(mobs2)
        @ lcia+04,ccia+14 GET mobs4 WHEN ! EMPTY(mobs3)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,MAXROW(),79,tela2)
                CLEAR GETS
                SET KEY -8 TO
                RETURN NIL
        ENDIF
        mopcao := mensagem1('Confirma o fechamento o Orcamento:','S','S,N')
        IF mopcao = 'N' .OR. LASTKEY() = 27
                RESTSCREEN(01,00,MAXROW(),79,tela2)
                CLEAR GETS
                SET KEY -8 TO
                RETURN NIL
        ENDIF
        ************
        SELE('notp')
        ************
        IF ! BLOQARQ()
                LOOP
        ENDIF
        GO TOP
        IF LASTREC() = 0
                IF ! ADIREG()
                        atencao('Nao foi possivel gerar o numero do PEDIDO')
                        RESTSCREEN(01,00,23,79,mtela)
                        LOOP
                ENDIF
        ELSE
                IF ! BLOQARQ()
                        atencao('Nao foi possivel gerar o numero da O.S.')
                        RESTSCREEN(01,00,23,79,mtela)
                        LOOP
                ENDIF
        ENDIF
        mnum_ped = VAL(notp->numero)+1
        notp->data_ped := DATE()
        notp->numero := STRZERO(mnum_ped,6)
        DBCOMMIT()
        DBUNLOCK()
        *********
        SELE('tped');ORDSETFOCUS(1)
        *********
        i = 0
        FOR i = 1 TO LEN(m_codigo)
                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL
                        LOOP
                ENDIF
                IF ! ADIREG()
                        LOOP
                ENDIF
                mhora = TIME()
                tped-> pnum_ped := STRZERO(mnum_ped,6)
                tped-> ptermina := m_indiv[1,1]
                tped-> pdat_ped := DATE()
                tped-> pgru_sub := m_matriz[i,4]
                tped-> pcod_merc := m_codigo[i]
                tped-> pmerc := m_matriz[i,5]
                tped-> punidade := m_matriz[i,6]
                tped-> pespecie := m_matriz[i,23]
                tped-> ppeso := m_matriz[i,7]
                tped-> ppeso_liq := m_matriz[i,17]
                tped-> pgramatura := m_matriz[i,35]
                tped-> pquantd := m_matriz[i,1]
                tped-> ppre_dig := m_matriz[i,2]
                IF m_matriz[i,2] < m_matriz[i,8]
                        m_matriz[i,2] := m_matriz[i,8] - (m_matriz[i,8] * ((m_matriz[i,3]/100)))
*                       tped-> pdesc := m_matriz[i,3] + (mdesc * 100)
                ENDIF
                tped-> ppre_venda := m_matriz[i,8]
                tped-> pvlr_fat := m_matriz[i,2]
                tped-> pcust_real := m_matriz[i,9]
                tped-> pcust_merc := m_matriz[i,18]
                tped-> pcod_fab := m_matriz[i,10]
                tped-> pfabrica := m_matriz[i,11]
*               tped-> pcod_vend := mcod_vend
                tped-> palimento := m_matriz[i,12]
                tped-> phora := m_matriz[i,25]
                tped-> ppromocao := m_matriz[i,14]
                tped-> pcomissao := m_matriz[i,15]
                tped-> pprazo:= m_matriz[i,34]
                tped-> pbebida := m_matriz[i,16]
                tped-> pipi    := m_matriz[i,22]
                tped-> pobs_prod := m_matriz[i,36]
                tped-> pind_icms := m_matriz[i,26]
                tped-> psit_trib := m_matriz[i,27]
                tped-> pobs1 := mobs1
                tped-> pobs2 := mobs2
                tped-> pobs3 := mobs3
                tped-> pobs4 := mobs4
                tped-> plocal := m_matriz[i,21]
                tped-> chassis := m_matriz[i,28]
                tped-> descri1 := m_matriz[i,29]
                tped-> descri2 := m_matriz[i,30]
                tped-> descri3 := m_matriz[i,31]
                tped-> descri4 := m_matriz[i,32]
                tped-> descri5 := m_matriz[i,33]
        NEXT
        DBCOMMITALL()
        DBUNLOCKALL()
        mensagem('Aguarde um momento imprimido pedido')
        mporta_imp := m_indiv[1,7]
        SET DEVICE TO PRINT
        SET PRINT TO (mporta_imp)
*       SET PRINT TO 'TP.REL'
*       IF mtipfrm = 'G'
*               ped_jw()
*               mflag := 0
*       ELSEIF mtipfrm = 'B'
                boleto1()
                mflag := 0
/*
        ELSEIF mtipfrm = 'F'
                formula()
        ELSEIF mtipfrm = 'P'
                procomp()
        ENDIF
*/
        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
        DBUNLOCKALL()
        mcont_item:=0
        ASIZE(m_matriz,0)
        ASIZE(m_codigo,0)
        ASIZE(m_alt,0)
        RESTSCREEN(01,00,MAXROW(),79,tela2)
        RESTSCREEN(00,00,24,79,tela_ant)
        mt_pedido := 0
        CLEAR GETS
        **********
        SELE('prod');ORDSETFOCUS(1)
        **********
        CLEAR GETS
        SET KEY -8 TO
        EXIT
ENDDO
SET KEY -8 TO
*mflag := 0
RELEASE ALL
RETURN NIL
*************************** f i m *******************************************
********************************
* FUNCAO P/CONSULTAR MERCADORIAS
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION f4_prod(cons,mfab)
*****************

LOCAL f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4msele,f4morde,f4men,PULA,y,mcod

LOCAL oconsprod,ocolprod[8],i,nkey,mteste,f4,lin_br
MEMVAR mdata_sis,nivel_acess,mcod_merc,mcod_bc
f4 := '*'
f4lci := 02
f4cci := 00
*f4lba := 21
*f4lba := MAXROW()-2
*f4lba := 17
f4cba := 79
f4tela := SAVESCREEN(01,00,MAXROW(),79)
f4msele := SELE()
f4morde := INDEXORD()
pula := '*'
IF ! AbriArq('sacprod','prod');RETURN NIL;ENDIF
*************
SELE('prod');ORDSETFOCUS(3)
*************
IF mfab <> NIL
        *************
        ORDSETFOCUS(4)
        *************
ENDIF
f4men := SAVESCREEN(MAXROW(),00,MAXROW(),79)
mensagem('<> <P>esq.Descricao <Alt+P>p/Codigo <ALT+E>Pesq.especie <ENTER>Confirma')
botao(f4lci-1,f4cci-1,f4lba,f4cba+1,,' PRODUTOS ','*')
oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba)
ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(prod->cod_merc) .OR. prod->disp = 'N',LEFT(prod->merc,20)+'** NAO DISPONIVEL **',prod->merc)})
ocolprod[2] := TBCOLUMNNEW('Codigo',{||prod->cod_merc})
ocolprod[3] := TBCOLUMNNEW('UN',{||prod->unidade})
ocolprod[4] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(prod->saldo_mer,'999999.999')})
ocolprod[5] := TBCOLUMNNEW(' Preco R$',{||TRANSFORM(prod->pr_venda,'999,999.99')})
ocolprod[6] := TBCOLUMNNEW('Estoque',{||TRANSFORM(prod->saldo_est,'999999.999')})
ocolprod[7] := TBCOLUMNNEW('Estoque1',{||TRANSFORM(prod->saldo_fis,'999999.999')})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
oconsprod:CARGO := '*****'
WHILE .T.
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                botao(f4lba,f4cci,f4lba+8,f4cba,,' Detalhe do Produto ')
                setcor(3)
                DEVPOS(f4lba+1,f4cci+1);DEVOUT('Cod.Barra/Ref.:')
                DEVPOS(f4lba+1,f4cci+34);DEVOUT('Cod.Fab.:')
                DEVPOS(f4lba+2,f4cci+1);DEVOUT('Prc1: ')
                DEVPOS(f4lba+2,f4cci+20);DEVOUT('Prc2: ')
                DEVPOS(f4lba+2,f4cci+39);DEVOUT('Prc3: ')
                DEVPOS(f4lba+2,f4cci+58);DEVOUT('Prc4: ')
                DEVPOS(f4lba+4,f4cci+1);DEVOUT('Aplicacao:')
                setcor(1)
                DEVPOS(f4lba+1,f4cci+16);DEVOUT(prod->cod_barr)
                DEVPOS(f4lba+1,f4cci+43);DEVOUT(prod->cod_fab+'-'+LEFT(prod->fabrica,25))
                DEVPOS(f4lba+4,f4cci+11);DEVOUT(prod->aplic0)
                DEVPOS(f4lba+5,f4cci+11);DEVOUT(prod->aplic1)
                DEVPOS(f4lba+6,f4cci+11);DEVOUT(prod->aplic2)
                DEVPOS(f4lba+7,f4cci+11);DEVOUT(prod->aplic3)
                IF ! EMPTY(prod->ref)
                        limpa(f4lba+8,f4cci+1,f4lba+8,f4cba-1)
                        setcor(3)
                        DEVPOS(f4lba+8,f4cci+1);DEVOUT('Referencia Auxiliar:')
                        setcor(1)
                        DEVPOS(f4lba+8,COL()+1);DEVOUT(prod->ref)
                ENDIF
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                mcod_merc := VAL(prod->cod_merc)
                mcod_bc := prod->cod_merc
                IF EMPTY(mcod_merc)
                        LOOP
                ENDIF
                EXIT
        ELSEIF nkey == -41
                calcu()
        ELSEIF nkey == 275
                mcod := cons_ref(prod->ref)
                IF ! EMPTY(mcod)
                        GO mcod
                        mcod_merc := VAL(prod->cod_merc)
                        mcod_bc := prod->cod_merc
                        IF EMPTY(prod->cod_merc)
                                LOOP
                        ENDIF
                        EXIT
                ENDIF
        ELSEIF nkey == 67 .OR. nkey == 99
                IF oconsprod:freeze=0
                        oconsprod:freeze := oconsprod:colpos -1
                        lin_br=21
                ELSE
                        oconsprod:freeze = 0
                        lin_br= 30
                        oconsprod:panhome()
                        oconsprod:refreshall()
                ENDIF
                oconsprod:colorRect({1,1,lin_br,oconsprod:freeze},{2,5})
        ELSE
                IF genkey(oconsprod,nkey,'prod')
                        oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba)
                        ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(prod->cod_merc) .OR. prod->disp = 'N',LEFT(prod->merc,20)+'** NAO DISPONIVEL **',prod->merc)})
                        ocolprod[2] := TBCOLUMNNEW('Codigo',{||prod->cod_merc})
                        ocolprod[3] := TBCOLUMNNEW('UN',{||prod->unidade})
                        ocolprod[4] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(prod->saldo_mer,'999999.999')})
                        ocolprod[5] := TBCOLUMNNEW(' Preco R$',{||TRANSFORM(prod->pr_venda,'999,999.99')})
                        ocolprod[6] := TBCOLUMNNEW('Estoque',{||TRANSFORM(prod->saldo_est,'999999.999')})
                        ocolprod[7] := TBCOLUMNNEW('Estoque1',{||TRANSFORM(prod->saldo_fis,'999999.999')})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f4msele);IF(f4morde>0,ORDSETFOCUS(f4morde),)
RESTSCREEN(MAXROW(),00,MAXROW(),79,f4men)
RESTSCREEN(01,00,MAXROW(),79,f4tela)
RELEASE f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4msele,f4morde,f4men,PULA,y,mcod,;
        oconsprod,ocolprod[8],i,nkey,mteste
RETURN .F.
*************************** f i m *******************************************
***************************************************
* PROGRAMA DE FUNCOES IMPRESSAO DE TIPOS DE PEDIDOS
***************************************************
*******************************
* IMPRESSAO EM BOLETO
*****************************

FUNCTION boleto1()
*****************
LOCAL mobs_caixa,opcao,mop,mtot_volume:=0,mtot_itens:=0,mcust_real:=0,f:=0
mtraco := REPLI('=',54)
IF ! EMPTY(m_indiv[1,7]2)
        mquantd ++
ENDIF
f := 0
FOR f = 1 TO mquantd
        mtot_itens := 0
        mt_pedido = 0
        mtot_desc = 0
        mtot_quant = 0
        mdesconto := 0
        DEVPOS(PROW(),00);DEVOUT(CHR(15))
        @ PROW()+1,00 SAY PADC('*** TALAO  DE  PEDIDO: '+STRZERO(mnum_ped,5)+' ***',54)
        @ PROW()+1,00 SAY PADC('*** SEM VALOR FISCAL ***',54)
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'Emissao:'
        @ PROW(),PCOL() SAY DATE()
        @ PROW(),PCOL()+1 SAY TIME()
        @ PROW(),PCOL()+1 SAY 'Terminal:'+ALLTRIM(NETNAME())
        @ PROW(),PCOL()+1 SAY 'Vend.:'+STRZERO(mcod_vend,3)
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'Cliente: '+mcliente
        @ PROW()+1,00 SAY mtraco

        @ PROW()+1,00 SAY 'Cod.'
        @ PROW(),15 SAY 'Descricao'
        @ PROW(),52 SAY 'UN'
        @ PROW()+1,00 SAY ' Quantd.'
        @ PROW(),PCOL()+2 SAY 'Vlr. Venda'
        @ PROW(),PCOL()+2 SAY 'Vlr. Total'
        @ PROW()+1,00 SAY mtraco
        mdesconto := 0
        i := 0
        FOR i = 1 TO LEN(m_codigo)
                IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                        LOOP
                ENDIF
                @ PROW()+1,00 SAY m_codigo[i]
                @ PROW(),06 SAY m_matriz[i,5]
                @ PROW(),52 SAY m_matriz[i,6]
                @ PROW()+1,00 SAY m_matriz[i,1] PICT '99999.99'
                @ PROW(),PCOL()+2 SAY m_matriz[i,2]  PICT '999,999.99'
                mcust_real = m_matriz[i,1] * m_matriz[i,2]
                @ PROW(),PCOL()+2 SAY iat(mcust_real,2) PICT '999,999.99'
                mtot_desc := mtot_desc + mdesconto
                mt_pedido := mt_pedido + (m_matriz[i,1]*m_matriz[i,2] - mdesconto)
                mtot_itens ++
        NEXT
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'Total de Itens:'
        @ PROW(),16 SAY TRANSFORM(mtot_itens,'999999')
        @ PROW()+1,00 SAY 'TOTAL DA NOTA:'
        mcust_real = mt_pedido
        @ PROW(),15 SAY iat(mcust_real,2) PICT '99,999,999.99'
        IF ! EMPTY(mobs1)
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'OBS.: '+mobs1
                @ PROW()+1,00 SAY '      '+mobs2
                @ PROW()+1,00 SAY '      '+mobs3
                @ PROW()+1,00 SAY '      '+mobs4
        ENDIF
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY PADL('www.htisistemas.com - (81)'+mfone_HTI,54)
        IF mquantd > 1
                DEVPOS(PROW()+3,00);DEVOUT(CHR(18))
        ENDIF
        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(CHR(18))
        SETPRC(00,00)
NEXT
SETPRC(00,00)
SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
RETURN NIL
***************************** F I M ***********************************

