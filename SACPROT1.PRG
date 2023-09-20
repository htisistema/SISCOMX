*****************************************
* FUNCAO INCLUSAO DA PROTOCOLO DE NOTAS
*****************************************
FUNCTION sacprot1
******************

LOCAL mprg:='SACPROT1',mtitulo:='INCLUSAO PROTOCOLO NOTA DE ENTRADA',;
      lci:=00,cci:=00,lba:=18,cba:=65,mdata,mdoc,mhora,mtransp,;
      memissao,msaida,mtran,mvolume,mvalor,mopcao:=' ',;
      mdupli1,mvenc1,mvlr_dup1,mdupli2,mvenc2,mvlr_dup2,mdupli3,mvenc3,mvlr_dup3,;
      mdupli4,mvenc4,mvlr_dup4,mdupli5,mvenc5,mvlr_dup5,mdupli6,mvenc6,mvlr_dup6

PRIVATE mcod_forn

IF ! ver_nivel(mprg,mtitulo,'1235',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*---------------------------------------------
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacproto','prot');RETURN NIL;ENDIF
*---------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        ****************************
        SELE('prot');ORDSETFOCUS(1)
        ****************************
        mdata    := mdata_sis
        mdoc     := SPACE(6)
        mhora    := TIME()
        memissao := msaida   := CTOD('  /  /  ')
        mtransp  := SPACE(20)
        mcod_forn := mtran := mvolume  := mvalor := ;
        mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := mvlr_dup4 := mvlr_dup5 :=;
        mvlr_dup6 := 0
        mdupli1 := mdupli2 := mdupli3 := mdupli4 := mdupli5 := mdupli6 := SPACE(6)
        mvenc1 := mvenc2 := mvenc3 := mvenc4 := mvenc5 := mvenc6 := CTOD('  /  /  ')
        mopcao := ' '
        exibi_prg(mprg)
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Fornecedor....: ')
        DEVPOS(lci+2,cci+1);DEVOUT('No.Documento..: ')
        DEVPOS(lci+3,cci+1);DEVOUT('Data Inclusao.: ')
        DEVPOS(lci+4,cci+1);DEVOUT('Hora Inclusao.: ')
        DEVPOS(lci+5,cci+1);DEVOUT('Transportadora: ')
        DEVPOS(lci+6,cci+1);DEVOUT('Data Emissao..: ')
        DEVPOS(lci+7,cci+1);DEVOUT('Data Saida....: ')
        DEVPOS(lci+8,cci+1);DEVOUT('Tran..........: ')
        DEVPOS(lci+9,cci+1);DEVOUT('Volume........: ')
        DEVPOS(lci+10,cci+1);DEVOUT('Valor.........: ')
        DEVPOS(lci+11,cci+1);DEVOUT('Duplicata [1].:         Vencimento:          Valor.:')
        DEVPOS(lci+12,cci+1);DEVOUT('Duplicata [2].:         Vencimento:          Valor.:')
        DEVPOS(lci+13,cci+1);DEVOUT('Duplicata [3].:         Vencimento:          Valor.:')
        DEVPOS(lci+14,cci+1);DEVOUT('Duplicata [4].:         Vencimento:          Valor.:')
        DEVPOS(lci+15,cci+1);DEVOUT('Duplicata [5].:         Vencimento:          Valor.:')
        DEVPOS(lci+16,cci+1);DEVOUT('Duplicata [6].:         Vencimento:          Valor.:')
        @ lci+1,cci+17 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,lci+1,cci+22))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        v_fornece(mcod_forn,lci+1,cci+22)
        @ lci+2,cci+17 GET mdoc VALID IF(EMPTY(mdoc),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        GO TOP
        IF prot->(DBSEEK(mdoc+STRZERO(mcod_forn,4)))
                atencao('Esta Nota ja foi Incluida no dia: '+DTOC(prot->data)+'         Pelo Operador: '+prot->cod_oper)
                LOOP
        ENDIF
        @ lci+3,cci+17 GET mdata
        @ lci+4,cci+17 GET mhora PICT '99:99'
        @ lci+5,cci+17 GET mtransp PICT '@!'
        @ lci+6,cci+17 GET memissao VALID IF(EMPTY(memissao),.F.,.T.)
        @ lci+7,cci+17 GET msaida
        @ lci+8,cci+17 GET mtran PICT '999999'
        @ lci+9,cci+17 GET mvolume PICT '999,999.999'
        @ lci+10,cci+17 GET mvalor PICT '999,999.999'
        @ lci+11,cci+17 GET mdupli1
        @ lci+11,cci+37 GET mvenc1 WHEN ! EMPTY(mdupli1)
        @ lci+11,cci+54 GET mvlr_dup1 PICT '99,999.99' WHEN ! EMPTY(mdupli1)
        @ lci+12,cci+17 GET mdupli2 WHEN ! EMPTY(mdupli1)
        @ lci+12,cci+37 GET mvenc2 WHEN ! EMPTY(mdupli2)
        @ lci+12,cci+54 GET mvlr_dup2 PICT '99,999.99' WHEN ! EMPTY(mdupli2)
        @ lci+13,cci+17 GET mdupli3 WHEN ! EMPTY(mdupli2)
        @ lci+13,cci+37 GET mvenc3 WHEN ! EMPTY(mdupli3)
        @ lci+13,cci+54 GET mvlr_dup3 PICT '99,999.99' WHEN ! EMPTY(mdupli3)
        @ lci+14,cci+17 GET mdupli4 WHEN ! EMPTY(mdupli3)
        @ lci+14,cci+37 GET mvenc4 WHEN ! EMPTY(mdupli4)
        @ lci+14,cci+54 GET mvlr_dup4 PICT '99,999.99' WHEN ! EMPTY(mdupli4)
        @ lci+15,cci+17 GET mdupli5 WHEN ! EMPTY(mdupli4)
        @ lci+15,cci+37 GET mvenc5 WHEN ! EMPTY(mdupli5)
        @ lci+15,cci+54 GET mvlr_dup5 PICT '99,999.99' WHEN ! EMPTY(mdupli5)
        @ lci+16,cci+17 GET mdupli6 WHEN ! EMPTY(mdupli5)
        @ lci+16,cci+37 GET mvenc6 WHEN ! EMPTY(mdupli6)
        @ lci+16,cci+54 GET mvlr_dup6 PICT '99,999.99' WHEN ! EMPTY(mdupli6)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mopcao := op_simnao('S','Confirma a INCLUSAO da Nota:')
        IF mopcao = 'N'
                LOOP
        ENDIF
        ADIREG()
        prot-> cod_oper:= cod_operado
        prot-> data    := mdata
        prot-> doc     := mdoc
        prot-> hora    := mhora
        prot-> dat_emi := memissao
        prot-> dat_sai := msaida
        prot-> transp  := mtransp
        prot-> fornece := STRZERO(mcod_forn,4)
        prot-> item    := mtran
        prot-> volume  := mvolume
        prot-> valor   := mvalor
        prot-> dupli1  := mdupli1
        prot-> venc1   := mvenc1
        prot-> vlr_dup1:= mvlr_dup1
        prot-> dupli2  := mdupli2
        prot-> venc2   := mvenc2
        prot-> vlr_dup2:= mvlr_dup2
        prot-> dupli3  := mdupli3
        prot-> venc3   := mvenc3
        prot-> vlr_dup3:= mvlr_dup3
        prot-> dupli4  := mdupli4
        prot-> venc4   := mvenc4
        prot-> vlr_dup4:= mvlr_dup4
        prot-> dupli5  := mdupli5
        prot-> venc5   := mvenc5
        prot-> vlr_dup5:= mvlr_dup5
        prot-> dupli6  := mdupli6
        prot-> venc6   := mvenc6
        prot-> vlr_dup6:= mvlr_dup6
        DBCOMMIT()
        DBUNLOCK()
ENDDO
wvw_lclosewindow()
RETURN NIL

