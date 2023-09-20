************************************
* ATUALIZAR TODOS OS PRODUTOS
************************************
FUNCTION sacbal2

LOCAL mprg:='SACBAL2',;
      lci:=10,cci:=10,lba:=17,cba:=70,mopcao:='S',mtela,;
      mgrupo,msubgrupo,mcod_forn,mcod_espe

mtela := SAVESCREEN(00,00,24,79)

IF ! AbriArq('sacbalan','balan');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF

WHILE .T.
        mgrupo    := SPACE(5)
        msubgrupo := SPACE(2)
        mcod_forn := 0
        mcod_espe := 0
        botao(lci,cci,lba,cba,,' ATUALIZANDO ARQUIVO DE BALANCO ')
        @ lci+5,cci+1 TO lci+5,cba-1
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo Grupo..:')
        DEVPOS(lci+2,cci+1);DEVOUT('Cod.Sub-Grupo.:')
        DEVPOS(lci+3,cci+1);DEVOUT('Cod.Fabricante:')
        DEVPOS(lci+4,cci+1);DEVOUT('Codigo Especie:')
        @ lci+1,cci+17 GET mgrupo PICT '999' VALID v_gru_cod(mgrupo,2,lci+2,cci+21)
        @ lci+2,cci+17 GET msubgrupo PICT '99' WHEN ! EMPTY(mgrupo) VALID ver_sgru(VAL(mgrupo),VAL(msubgrupo),lci+3,cci+21)
        @ lci+3,cci+17 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,lci+3,cci+22)
        @ lci+4,cci+17 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,lci+4,cci+22,,0)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,mtela)
                RETURN NIL
        ENDIF
        mopcao := 'N'
        mopcao := op_simnao('N','Confirma a Operacao:')
        IF LASTKEY() = 27 .AND. mopcao = 'N'
                LOOP
        ENDIF
        *********************************
        SELE('merc');ORDSETFOCUS(1)
        GO TOP
        *********************************
        WHILE ! EOF()
                setcor(3)
                DEVPOS(lci+6,cci+1);DEVOUT('Produtos Processados: '+merc->cod_merc)
                setcor(1)
                IF (! EMPTY(mgrupo) .AND. ALLTRIM(mgrupo) <> SUBSTR(merc->gru_sub,1,3));
                   .OR. (! EMPTY(msubgrupo) .AND. ALLTRIM(mgrupo)+msubgrupo <> merc->gru_sub);
                   .OR. (! EMPTY(mcod_espe) .AND. STRZERO(mcod_espe,4) <> merc->especie);
                   .OR. (! EMPTY(mcod_forn) .AND. merc->cod_fab <> STRZERO(mcod_forn,4))
                        SKIP
                        LOOP
                ENDIF
                ****************************
                SELE('balan');ORDSETFOCUS(1)
                GO TOP
                ****************************
                IF balan->(DBSEEK(merc->cod_merc))
                        BLOQREG()
                        balan->data     := mdata_sis
                        balan->doc      := 'BL'+merc->cod_merc
                        balan->saldo    := merc->saldo_mer
                        balan->operador := cod_operado
                ELSE
                        ADIREG()
                        balan->data      := mdata_sis
                        balan->doc       := 'BL'+merc->cod_merc
                        balan->cod_merc  := merc->cod_merc
                        balan->descricao := merc->merc
                        balan->saldo     := merc->saldo_mer
                        balan->operador  := cod_operado
                ENDIF
                *********************************
                SELE('merc');ORDSETFOCUS(1)
                *********************************
                SKIP
        ENDDO
        DBCOMMITALL()
        DBUNLOCKALL()
ENDDO
RETURN NIL
