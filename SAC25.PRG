******************************************
* COLOCAR E RETIRAR MERCADORIA EM PROMOCAO
******************************************
MEMVAR getlist,nivel_acess
FUNCTION sac25
**************
LOCAL MPRG:='SAC25'
LOCAL tela,lci,cci,lba,cba,opcao,mperc,mccomm := ' '

PRIVATE mcod_forn:=0,mcod_merc:=0,msub1,mgrupo1

IF ! ver_nivel(mprg,'COLOCAR E RETIRAR MERCADORIA EM PROMOCAO','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 16
cba := 75
*----------------------------------------------
CLOSE ALL
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*------------------------------------------------------------------
op_tela(10,10,16,70,' Promocao ')
WHILE .T.
        limpa(0,0,30,100)
        msub1 = SPACE(2)
        mgrupo1 = SPACE(3)
        mcod_merc := mperc := mcod_forn := 0
        mccomm := ' '
        mensagem('Preencha os Campos ou em Brnaco p/Imprimir todos - <ESC>p/Sair')
        setcor(3)
        @ lci+4,cci+1 TO lci+4,cba-1
        setcor(1)
        DEVPOS(lci  ,cci+2);DEVOUT('Cod.Produto....:')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Grupo......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.Sub-Grupo..:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod.Fornecedor.:')
        DEVPOS(lci+5,cci+2);DEVOUT('Percentual (%).:')
        @ lci  ,cci+19 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci,cci+25,.F.,0)
        @ lci+1,cci+19 GET mgrupo1 PICT '999' VALID IF(EMPTY(mgrupo1),.T.,v_gru_cod(mgrupo1,2)) WHEN EMPTY(mcod_merc)
        @ lci+2,cci+19 GET msub1 PICT '99' WHEN ! EMPTY(mgrupo1) VALID IF(EMPTY(msub1),.T.,v_gru_cod(mgrupo1 + msub1,2)) 
        @ lci+3,cci+19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.T.,v_fornece(mcod_forn,lci+3,cci+24)) WHEN EMPTY(mcod_merc)
        @ lci+5,cci+19 GET mperc PICT '999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Promocao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        IF ! EMPTY(mcod_merc)
                mccomm := mccomm + 'cod_merc = '+sr_cdbvalue(mcod_merc)
        ELSEIF (! EMPTY(mgrupo1) .AND. EMPTY(msub1))
                mccomm := mccomm + 'gru_sub LIKE '+sr_cdbvalue(STRZERO(VAL(mgrupo1),3)+'%')
        ELSEIF ! EMPTY(msub1)
                mccomm := mccomm + "gru_sub LIKE "+sr_cdbvalue(ALLTRIM(mgrupo1)+ALLTRIM(msub1))
        ELSEIF ! EMPTY(mcod_forn)
                mccomm := mccomm + 'cod_fab = '+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        sr_getconnection():exec("UPDATE sacmerc SET promocao = "+sr_cdbvalue(mperc)+",ul_alt_pr= "+sr_cdbvalue(mdata_sis)+",opera_pr= "+sr_cdbvalue(cod_operado)+" WHERE "+mccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)

/*
        setcor(3)
        WHILE ! EOF()
                DEVPOS(lci+7,cci+19);DEVOUT(merc->cod_merc)
                IF (! EMPTY(mgrupo1) .AND. EMPTY(msub1) .AND. mgrupo1 <> SUBSTR(merc->gru_sub,1,3));
                   .OR. (! EMPTY(msub1) .AND. mgrupo1+msub1 <> merc->gru_sub);
                   .OR. (! EMPTY(mcod_forn) .AND. STRZERO(mcod_forn,4) <> merc->cod_fab)
                        SKIP;LOOP
                ENDIF
                BLOQREG()
                merc->promocao := mperc
                DBUNLOCK()
                SKIP
        ENDDO
        DBCOMMITALL()
        setcor(1)
*/
ENDDO
fecha_tela()
RETURN NIL
***************************** F I M **************************************
