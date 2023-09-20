********************
* RELATORIO PROTOCOLO NOTAS ENTRADA
********************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sacprot3
**************
LOCAL MPRG:='SACPROT3',mtitulo:='RELATORIO DE PROTOCOLO NOTAS DE ENTRADA',;
      lci,cci,lba,cba,mdata1,mdata2,mtot_vlr,mtot_vol,mger_vlr,mger_vol,mdia,mtot_item,mger_item,i:=0

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,mcod_forn:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('-',132)

lci := cci := 00
lba := 03
cba := 40
op_tela(10,10,15,50,mtitulo)
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcod_forn := 0
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod.Fornecedor.:')
        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+3,cci+19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+3,cci+24))
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_prot := {}
        cComm  := "SELECT * FROM sacproto WHERE data  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)
        IF ! EMPTY(mcod_forn)
                cComm  := ccomm + " AND fornece = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        ccomm := ccomm + " ORDER BY data"
        sr_getconnection():exec(ccomm,,.t.,@cons_prot)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_prot) = 0
                atencao('Nao existe movimento neste Periodo')
        ENDIF
        marq := 'PROTOCOLO.REL'
        IF ! imp_arq('PROTOCOLO.REL','R')
                LOOP
        ENDIF
        mtot_vlr := mtot_vol := mger_vlr := mger_vol := mtot_item := mger_item := 0
        mpag = 1
        mtit = 'Relatorio Protocolo Notas de Entrada'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('Doc.NF')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Hora')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('Transportadora      ')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor'+SPACE(35))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Saida')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('Tra')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Volumes')
        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        mdia := cons_prot[1,2]
        i:=0
        FOR i = 1 TO LEN(cons_prot)
                IF mdia <> cons_prot[i,2]
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,64);DEVOUT('Total da(s) '+TRANSFORM(mtot_item,'99999')+' Entrega(s) do dia: '+DTOC(mdia)+':')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vol,'99,999.999'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr,'999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
                        mdia := cons_prot[i,2]
                        mtot_vlr := mtot_vol := mtot_item := 0
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(DTOC(cons_prot[i,2])+' '+cons_prot[i,4]+' '+SUBSTR(cons_prot[i,3],1,5)+' '+cons_prot[i,5])
                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_prot[i,6]+'-')
                v_fornece(VAL(cons_prot[i,6]),PROW(),PCOL())
                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(cons_prot[i,9])+' '+DTOC(cons_prot[i,10])+' '+TRANSFORM(cons_prot[i,11],'999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_prot[i,12],'99,999.999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_prot[i,13],'999,999.99'))
                IF ! EMPTY(cons_prot[i,14])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [1]: '+cons_prot[i,14]+' Vencimento: '+DTOC(cons_prot[i,15])+' Valor: '+TRANSFORM(cons_prot[i,17],'99,999.99'))
                ENDIF
                IF ! EMPTY(cons_prot[i,18])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [2]: '+cons_prot[i,18]+' Vencimento: '+DTOC(cons_prot[i,19])+' Valor: '+TRANSFORM(cons_prot[i,21],'99,999.99'))
                ENDIF
                IF ! EMPTY(cons_prot[i,22])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [3]: '+cons_prot[i,22]+' Vencimento: '+DTOC(cons_prot[i,23])+' Valor: '+TRANSFORM(cons_prot[i,25],'99,999.99'))
                ENDIF
                IF ! EMPTY(cons_prot[i,26])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [4]: '+cons_prot[i,26]+' Vencimento: '+DTOC(cons_prot[i,27])+' Valor: '+TRANSFORM(cons_prot[i,29],'99,999.99'))
                ENDIF
                IF ! EMPTY(cons_prot[i,30])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [5]: '+cons_prot[i,30]+' Vencimento: '+DTOC(cons_prot[i,31])+' Valor: '+TRANSFORM(cons_prot[i,33],'99,999.99'))
                ENDIF
                IF ! EMPTY(cons_prot[i,34])
                        DEVPOS(PROW()+1,00);DEVOUT('Duplicata [6]: '+cons_prot[i,34]+' Vencimento: '+DTOC(cons_prot[i,35])+' Valor: '+TRANSFORM(cons_prot[i,37],'99,999.99'))
                ENDIF
                mtot_item ++
                mger_item ++
                mtot_vol := mtot_vol + cons_prot[i,12]
                mger_vol := mger_vol + cons_prot[i,12]
                mtot_vlr := mtot_vlr + cons_prot[i,13]
                mger_vlr := mger_vlr + cons_prot[i,13]
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Doc.NF')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Hora')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Transportadora      ')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor'+SPACE(35))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Saida')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Tra')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Volumes')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        LOOP
                ENDIF
        NEXT
        IF mdia <> cons_prot[LEN(cons_prot),2]
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,64);DEVOUT('Total da(s) '+TRANSFORM(mtot_item,'99999')+' Entrega(s) do dia: '+DTOC(mdia)+':')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vol,'99,999.999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_vlr,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
        ENDIF
        IF PROW() >= 59
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Doc.NF.')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Hora')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Transportadora      ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Fornecedor'+SPACE(36))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Emissao')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('   Saida')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Tran.')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('   Volumes')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                LOOP
        ENDIF
        DEVPOS(PROW()+1,75);DEVOUT('T O T A L   G E R A L  da(s) '+TRANSFORM(mger_item,'99999')+':')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_vol,'99,999.999'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_vlr,'999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',132))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL

