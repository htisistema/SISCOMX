MEMVAR getlist
*****************************************
* EMISSAO DE 2a.VIA DO RESTANTE ORCAMENTO
******************************************

FUNCTION sacreorc()
***************
LOCAL MPRG:='SACREORC'
LOCAL lci,cci,lba,cba,opcao
LOCAL tela,i,mquantd:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mnum_orc

lci := 13
cci := 06
lba := 16
cba := 42

tela := SAVESCREEN(01,00,24,79)
*---------------------------------------------------------------------------
GO BOTT
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------------------------------------
DO WHILE .T.
        mnum_orc := 0
        mtipo_imp := m_indiv[1,10]
        ****************
        SELE('orcam');ORDSETFOCUS(1)
        GO TOP
        ****************
        botao(lci,cci,lba,cba,,' 2a.Via Restante do Orcamento ')
        @ lci+1,cci+2 SAY 'No. Pedido........:'
        @ lci+2,cci+2 SAY 'Qtd.Copias........:'
        @ lci+1,cci+22 GET mnum_orc PICT '999999'
        @ lci+2,cci+22 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                RETURN NIL
        ENDIF
        ****************
        SELE('orcam');ORDSETFOCUS(6)
        GO TOP
        ****************
        IF ! orcam->(DBSEEK(STRZERO(mnum_orc,6)))
                atencao('Nao Existe este No.orcamento em nosso Arquivo !!!')
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                demo_orc()
        NEXT
ENDDO
RETURN NIL

