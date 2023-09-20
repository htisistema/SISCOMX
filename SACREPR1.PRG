***************************************
* INCLUSAO DE PRODUTO REAJUSTE PARACIAL
***************************************
*****************
FUNCTION sacrepr1
*****************
LOCAL mprg:='SACREPR1',mtitulo:='INCLUSAO DE PRODUTO PARA REAJUSTE PARCIAL',;
      lci:=00,cci:=00,lba:=05,cba:=60,opcao:=SPACE(1),mvalor:=0,mqtd:=0

PRIVATE mcod_merc:=0

IF ! ver_nivel(mprg,mtitulo,'1235',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*----------------------------------------------------------------------------
//
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacrepro','repro');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(10,10,17,70,mtitulo,'*')

WHILE .T.
        *****************************
        SELE('repro');ORDSETFOCUS(1)
        *****************************
        exibi_prg(mprg)
        mcod_merc := mvalor := mqtd := 0
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo Produto:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Preco Venda...:')
        DEVPOS(lci+4,cci+1);DEVOUT('Saldo Fisico..:')
        @ lci+1,cci+17 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+2,cci+17,.F.,1)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        *****************************
        SELE('repro');ORDSETFOCUS(1)
        GO TOP
        *****************************
        IF repro->(DBSEEK(STRZERO(mcod_merc,5)+'   '))
                atencao('Este produto ja se encontra para ser Reajustado')
                LOOP
        ENDIF
        mvalor := merc->pr_venda
        mqtd   := merc->saldo_mer
        @ lci+3,cci+17 GET mvalor PICT '99,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
        @ lci+4,cci+17 GET mqtd PICT '99,999.999'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        ADIREG()
        repro->data    := DATE()
        repro->ope     := cod_operado
        repro->cod_pro := mcod_merc
        repro->produto := merc->merc
        repro->valor   := mvalor
        repro->qtd     := mqtd
        DBUNLOCK()
        DBCOMMIT()
ENDDO
wvw_lclosewindow()
RETURN NIL

