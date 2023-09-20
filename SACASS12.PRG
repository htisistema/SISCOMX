**********************
* ESTRONO DE ASSISTENCIAS
**********************
FUNCTION sacass12(mtp)
****************
LOCAL mprg:='SACASS12',mtitulo,;
      lci,cci,lba,cba,opcao,mdata

PRIVATE mcod_cli,mcod_merc,malias:='ass'

IF mtp = NIL
	mtitulo := 'ESTORNO DE ASSISTENCIA MERCADORIA'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSE
	mtitulo := 'ESTORNO DA SOLICITACAO DE PRODUTOS'
        IF ! ver_nivel(mprg+mtp,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        malias := 'solpr'
ENDIF
**********************************************
IF ! AbriArq('sacsolpr','solpr');RETURN NIL;ENDIF
IF ! AbriArq('sacass','ass');RETURN NIL;ENDIF
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
**********************************************
lci := 00
cci := 00
lba := 09
cba := 70
mcod_cli  := 0
op_tela(10,10,21,70,mtitulo)
WHILE .T.
        mcod_merc := 0
        mdata     := CTOD('  /  /  ')
        exibi_prg(mprg)
        DEVPOS(lci+1,cci+1);DEVOUT('Data.........:')
        DEVPOS(lci+2,cci+1);DEVOUT('Cod.Cliente..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Cod.Produto..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Quantidade...:')
        DEVPOS(lci+5,cci+1);DEVOUT('Cod.Vendedor.:')
        DEVPOS(lci+6,cci+1);DEVOUT('Motivo.......:')
        @ lci+1,cci+16 GET mdata
        @ lci+2,cci+16 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+2,cci+22)
        READ
        @ lci+3,cci+16 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+3,cci+22,.F.,0)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        **************************
        SELE(malias);ORDSETFOCUS(1)
        GO TOP
        **************************
        IF ! (malias)->(DBSEEK(DTOS(mdata)+STRZERO(mcod_cli,5)+STRZERO(mcod_merc,5)))
                atencao('Nao foi possivel encontra os Dados')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+4,cci+16);DEVOUTPICT((malias)->quantd,'999,999.999')
        DEVPOS(lci+5,cci+16);DEVOUT((malias)->vendedor)
        DEVPOS(lci+6,cci+16);DEVOUT((malias)->motivo)
        DEVPOS(lci+7,cci+16);DEVOUT((malias)->motivo1)
        DEVPOS(lci+8,cci+16);DEVOUT((malias)->motivo2)
        setcor(1)
        opcao := op_simnao('S','Confirma a Operacao:')
        IF opcao ='N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        BLOQREG()
        (malias)->oper_baix := SPACE(3)
        (malias)->data_baix := CTOD('  /  /  ')
        DBCOMMIT()
        DBUNLOCK()
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************








