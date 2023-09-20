************************************
* BAIXA DE PRODUTO NO ESTOQUE A.V.
************************************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac2av2
***************
LOCAL MPRG:='SAC2AV2'
LOCAL opcao,tela,lci,cci,lba,cba,mnumero,mproduto:={},i

PRIVATE mcliente,mcpf,mcgc

IF ! ver_nivel(mprg,'BAIXA DE ESTOQUE HAVER','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacav','av');RETURN NIL;ENDIF

lci = 00
cci = 01
lba = 03
cba = 56
op_tela(14,22,17,78,'BAIXA DE ESTOQUE HAVER')
WHILE .T.
        exibi_prg(mprg)
        SET INTEN ON
        ASIZE(mproduto,0)
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mcliente := SPACE(40)
        mcpf := SPACE(11)
        mcgc := SPACE(14)
        mnumero := 0
        opcao = 'S'
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        janela(lci,cba,' Baixa do Estoque Haver ')
        DEVPOS(lci+1,cci+2);DEVOUT('No.do Haver:')
        DEVPOS(lci+1,cci+23);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.Cliente:')
        @ lci+1,cci+15 GET mnumero PICT '999999'
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RELEASE mcliente,mcpf,mcgc
                RETURN NIL
        ENDIF
        IF EMPTY(mnumero)
                LOOP
        ENDIF
        ***************
        SELE('av');ORDSETFOCUS(1)
        GO TOP
        ***************

        IF ! av->(DBSEEK(STRZERO(mnumero,6)))
                atencao('Documento nao existe em nossos arquivos')
                LOOP
        ENDIF
        IF av->baixa = '*'
                atencao('Este documento ja foi BAIXADO')
                LOOP
        ENDIF
        IF av->baixa = 'E'
                atencao('Este documento foi ESTORNADO')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+1,cci+29);DEVOUT(av->data)
        DEVPOS(lci+2,cci+15);DEVOUT(av->cod_cli)
        ver_cli(VAL(av->cod_cli),lci+2,cci+21)
        setcor(1)
        opcao := op_simnao('S','Confirma a Baixa do Documento:')
        IF opcao = 'S'
                WHILE av->numero = STRZERO(mnumero,6) .AND. ! EOF()
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                        av->data_bai := mdata_sis
                        av->baixa := '*'
                        AADD(mproduto,{av->cod_merc,av->quantd})
                        DBUNLOCK()
                        SKIP
                ENDDO
                DBCOMMITALL()
                ***************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                ***************
                i := 0
                FOR i = 1 TO LEN(mproduto)
                        IF ! merc->(DBSEEK(mproduto[i,1]))
                                LOOP
                        ENDIF
                        IF ! BLOQREG()
                                atencao('Nao foi possivel bloquear o Registro !!!')
                                LOOP
                        ENDIF
                        merc->saldo_av := merc->saldo_av - mproduto[i,2]
                        DBUNLOCK()
                NEXT
                DBCOMMITALL()
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************

