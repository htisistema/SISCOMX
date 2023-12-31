***
*** CON251.PRG: Baixa PARCIAL INDIVIDUAL de Duplicatas (Receber)
***             ALTERACAO, ESTORNO
*********************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado
FUNCTION con2511()
***************
LOCAL MPRG:='CON2511',;
      tela,lin,mcheque,mnota,mtipo_comp,;
      mcod_vend,mforn_aux,opcao,mbanco,lc,cc,lb,cb,;
      pconta,mtip_cli,mcliente,m_dupr:={},m_pos:={},m_dup:={},m_po:={},;
      li,ci,la,ca,tela1,point,mtraco:=REPLI('=',80),mdata_baix,mforn_desp:=SPACE(40),;
      mobs:=SPACE(40),mbaix_parc,mtotal_doc := 0,mcont_doc := 0,;
      lci,cci,lba,cba,mtel,mnome_cli := SPACE(40),mtip_pg:='  ',mtela_aut,mtipo_aut,;
      nulo:='NULL',morde:='1'

PRIVATE mcod_cli,mtipo,mduplicata,mnumero,mcod_forn:=0,mtele:=' ',aret:={},cons_cli:={}

IF ! ver_nivel(mprg+'MV','CONTA A RECEBER (BAIXA PARCIAL INDIVIDUAL DOCUMENTOS MOVIMENTO)','135',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lc := cc := 0
lb := 11
cb := 79

li := ci := 0
la := 24
ca := 79

lin=1
mcod_cli := mforn_aux := 0
mduplicata := SPACE(12)
*------------------------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
SET KEY 275 TO cons_doc()
mcod_forn:=0
op_tela(10,10,24,92,"CONTA A RECEBER (BAIXA PARCIAL INDIVIDUAL DOCUMENTOS MOVIMENTO)")

WHILE .T.
        limpa(00,00,30,90)
        IF ver_serie() = '141278' .OR. ver_serie() = '141277'
                mcod_cli := 0
        ENDIF
        *****************
        SELE('dupr');ORDSETFOCUS(1)
        *****************
        DEVPOS(lc+1,cc+1);DEVOUT('Codigo Cliente...........:')
        DEVPOS(lc+2,cc+1);DEVOUT('Tipo do Documento........:')
        DEVPOS(lc+3,cc+1);DEVOUT('Numero...................:')
        DEVPOS(lc+4,cc+1);DEVOUT('Numero Documento.........:')
        DEVPOS(lc+5,cc+1);DEVOUT('Data Emissao.............:')
        DEVPOS(lc+6,cc+1);DEVOUT('Data Vencimento..........:')
        DEVPOS(lc+7,cc+1);DEVOUT('Valor Documento..........:')
        DEVPOS(lc+8,cc+1);DEVOUT('Cod.Fornecedor/Despesa...:')
        DEVPOS(lc+9,cc+1);DEVOUT('Data da Baixa Parcial....:')
        DEVPOS(lc+10,cc+1);DEVOUT('OBS.:......:')
        Mensagem('Digite Cod.do Cliente ou tipo e No.Documento - [ESC] Abandona.')
        mcliente := SPACE(40)
        mtipo := SPACE(2)
        mduplicata := SPACE(12)
        mnumero := SPACE(3)
*       mcod_forn := 0
        mbaix_parc := CTOD('  /  /  ')
        @ lc+1,cc+28 GET mcod_cli PICT '99999' WHEN men_get(lc+2,cc+28,'Informe o Cod.do CLIENTE - [F7]p/Consultar Cliente - [ALT+R]Consulta de Documentos - [ENTER]p/informa o tipo de DOCUMENTO - <ESC>p/Sair') VALID lim_get() .AND. ver_cli(mcod_cli,lc+1,cc+35)
        @ lc+2,cc+28 GET mtipo PICT '@!' VALID mtipo $ 'DU,CH,CT,FI,RE,  ' WHEN EMPTY(mcod_cli)
        @ lc+3,cc+28 GET mnumero PICT '@!' WHEN mtipo <> 'DU' .AND. ! EMPTY(mtipo) .AND.  EMPTY(mcod_cli)
        @ lc+4,cc+28 GET mduplicata PICT '@!' WHEN ! EMPTY(mtipo) .AND.  EMPTY(mcod_cli)
        READ
        IF LASTKEY()=27         // .OR. mduplicata := SPACE(12)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_cli) .AND. EMPTY(mtipo) .AND. EMPTY(mnumero)
                ver_cli(mcod_cli,lc+1,cc+35)
                mtotal_doc := mcont_doc := 0
                m_dupr:={}
                m_pos :={}
                morde := mensagem1('Deseja [1]Vencimento [2]Documento [3]Valor:','1','1,2,3')

                cComm  := "SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(mcod_cli)
                ccomm := ccomm + " AND datpag IS NULL"
                IF morde = '1'
                        ccomm := ccomm + " ORDER BY venc,banco,duplicata"
                ELSEIF morde = '2'
                        ccomm := ccomm + " ORDER BY tipo,duplicata,venc"
                ELSE
                        ccomm := ccomm + " ORDER BY valor,duplicata"
                ENDIF
                aret:={}
                sr_getconnection():exec(ccomm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) > 0
                        setcor(3)
                        DEVPOS(lc+1,cc+28);DEVOUT(aret[1,7])
                        DEVPOS(lc+1,cc+35);DEVOUT(aret[1,8])
                        setcor(1)
                        i:=0
                        FOR i = 1 TO LEN(aret)
                                AADD(m_dupr,' '+aret[i,2]+' '+aret[i,4]+' '+aret[i,26]+'  '+aret[i,3]+'   '+DTOC(aret[i,11])+'   '+TRANSFORM(aret[i,19],'999,999.99')+' '+aret[i,28]+'  '+aret[i,39]+' '+DTOC(aret[i,41]))
                                mcont_doc ++
                                mtotal_doc := mtotal_doc + aret[i,19]
                        NEXT
                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        op_tela(10,15,24,90,'Relacao de Documentos')
                        setcor(3)
                        DEVPOS(li+1,ci+01);DEVOUT('Documento')
                        DEVPOS(li+1,ci+18);DEVOUT('Op')
                        DEVPOS(li+1,ci+21);DEVOUT(' No.')
                        DEVPOS(li+1,ci+28);DEVOUT('Vencim.')
                        DEVPOS(li+1,ci+39);DEVOUT('     Valor')
                        DEVPOS(li+1,COL()+3);DEVOUT('Forn.')
                        DEVPOS(li+1,COL()+1);DEVOUT('Baix.Parcial')
                        @ li+2,ci+1 TO li+2,ca-1
                        @ la-2,ci+1 TO la-2,ca-1
                        DEVPOS(la-1,ci+1);DEVOUT('Quantidade:')
                        DEVPOS(la-1,ci+24);DEVOUT('Total:')
                        setcor(1)
                        DEVPOS(la-1,ci+13);DEVOUT(STRZERO(mcont_doc,4))
                        DEVPOS(la-1,ci+31);DEVOUT(TRANSFORM(mtotal_doc,'9,999,999.99'))
                        setcor(10);point := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupr,,,point);setcor(1)
                        wvw_lclosewindow()
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        //GO m_pos[point]
                                        mduplicata := aret[point,4]
                                        mtipo := aret[point,2]
                                        setcor(3)
                                        @ lc+1,cc+35 SAY aret[point,8]
                                        @ lc+2,cc+28 SAY aret[point,2]
                                        @ lc+3,cc+28 SAY aret[point,3]
                                        @ lc+4,cc+28 SAY aret[point,4]+aret[point,28]
                                        @ lc+5,cc+28 SAY aret[point,10]
                                        @ lc+6,cc+28 SAY aret[point,11]
                                        @ lc+7,cc+28 SAY aret[point,19] PICT "99,999,999.99"
                                        setcor(1)
                                        mobs := aret[point,46]
                                        mcod_forn := IF(EMPTY(aret[point,39]),mcod_forn,VAL(aret[point,39]))
                                        IF EMPTY(aret[point,41])
                                                mbaix_parc := mdata_sis
                                        ELSE
                                                mbaix_parc := aret[point,41]
                                        ENDIF
                                        mforn_desp := aret[point,40]

                                        @ lc+8,cc+28 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn) .AND. aret[point,26] <> 'BP',.F.,v_fornece(mcod_forn,lc+8,cc+34))
                                        READ
                                        IF LASTKEY()=27
                                                LOOP
                                        ENDIF
                                        v_fornece(mcod_forn,lc+8,cc+34)
                                        IF EMPTY(mforn_desp) .AND. aret[point,26] <> 'BP'
                                                mforn_desp := forn->razao
                                        ENDIF
                                        @ lc+8,cc+34 GET mforn_desp PICT '@!' WHEN ! EMPTY(mcod_forn) VALID IF(EMPTY(mforn_desp) .AND. aret[point,26] <> 'BP',.F.,.T.)
                                        @ lc+9,cc+28 GET mbaix_parc WHEN ! EMPTY(mcod_forn)  VALID IF(EMPTY(mbaix_parc) .AND. aret[point,26] <> 'BP',.F.,.T.)
                                        @ lc+10,cc+15 GET mobs WHEN ! EMPTY(mcod_forn)
                                        READ
                                        IF LASTKEY()=27
                                                LOOP
                                        ENDIF
                        ENDCASE
                ELSE
                        atencao('Nao existe nenhum Documento a ser baixado')
                        LOOP
                ENDIF
        ELSE
                IF EMPTY(mcod_cli)
                        cComm  := "SELECT * FROM sacdupr WHERE tipo = "+sr_cdbvalue(mtipo)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mnumero)
                        ccomm := ccomm + " AND duplicata = "+sr_cdbvalue(mduplicata)
                        ccomm := ccomm + " AND pago IS NULL"
                        ccomm := ccomm + " ORDER BY venc,banco,duplicata"
                        aret:={}
                        sr_getconnection():exec(ccomm,,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(aret) = 0
                                //IF ! dupr->(DBSEEK(mtipo+mnumero+mduplicata+' '))
                                atencao('Documento nao Cadastrado ou PAGO !!!')
                                LOOP
                        ENDIF
                        mcod_cli := aret[1,7]
                        mforn_aux := aret[1,7]
                        Mensagem('Digite o Codigo do cliente ou [F7]p/consultar. [ESC] Abandona.')
                        @ lc+1,cc+28 GET mcod_cli PICT '99999'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSE
                        mforn_aux := 0
                ENDIF
                IF mcod_cli <> mforn_aux
                        cComm  := "SELECT * FROM sacdupr WHERE tipo = "+sr_cdbvalue(mtipo)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mnumero)
                        ccomm := ccomm + " AND duplicata = "+sr_cdbvalue(mduplicata)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(mcod_cli)
                        ccomm := ccomm + " AND pago IS NULL"
                        ccomm := ccomm + " ORDER BY venc,banco,duplicata"
                        aret:={}
                        sr_getconnection():exec(ccomm,,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(aret) = 0
                                atencao('Nao existe esta duplicata ou ja foi PAGA !!!')
                                LOOP
                        ENDIF
                ENDIF
                mcod_forn := IF(EMPTY(aret[1,39]),mcod_forn,VAL(aret[1,39]))
                IF EMPTY(aret[1,41])
                        mbaix_parc := mdata_sis
                ELSE
                        mbaix_parc := aret[1,41]
                ENDIF
                setcor(3)
                @ lc+1,cc+35 SAY aret[1,8]
                @ lc+2,cc+28 SAY aret[1,2]
                @ lc+3,cc+28 SAY aret[1,3]
                @ lc+4,cc+28 SAY aret[1,4]+aret[1,28]
                @ lc+5,cc+28 SAY aret[1,10]
                @ lc+6,cc+28 SAY aret[1,11]
                @ lc+7,cc+28 SAY aret[1,19] PICT "99,999,999.99"
                setcor(1)
                mforn_desp := aret[1,40]
                mobs := aret[1,46]
                @ lc+8,cc+28 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn) .AND. aret[1,26] <> 'BP',.F.,v_fornece(mcod_forn,lc+8,cc+34))
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
                v_fornece(mcod_forn,lc+8,cc+34)
                IF EMPTY(mforn_desp) .AND. aret[1,26] <> 'BP'
                        mforn_desp := forn->razao
                ENDIF
                @ lc+8,cc+34 GET mforn_desp PICT '@!' WHEN ! EMPTY(mcod_forn) VALID IF(EMPTY(mforn_desp) .AND. aret[1,26] <> 'BP',.F.,.T.)
                @ lc+9,cc+28 GET mbaix_parc WHEN ! EMPTY(mcod_forn)  VALID IF(EMPTY(mbaix_parc) .AND. aret[1,26] <> 'BP',.F.,.T.)
                @ lc+10,cc+15 GET mobs WHEN ! EMPTY(mcod_forn)
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
        ENDIF
        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF ! EMPTY(mcod_forn)
                *********** ATUALIZANDO SACDUPR ***********************
                ccomm := "UPDATE sacdupr SET tip_pg = 'BP'"
                ccomm := ccomm + ",cod_forn = " + sr_cdbvalue(STRZERO(mcod_forn,4))  +;
                                ",forn_desp = " + sr_cdbvalue(mforn_desp)  +;
                                ",baix_parc = " + sr_cdbvalue(mbaix_parc)  +;
                                ",oper_parc = " + sr_cdbvalue(cod_operado)  +;
                                ",obs    = " + sr_cdbvalue(mobs)+;
                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65])
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                nulo := 'NULL'
                *********** ATUALIZANDO SACDUPR ***********************
                ccomm := "UPDATE sacdupr SET tip_pg = " + nulo
                ccomm := ccomm + ",cod_forn = " + nulo  +;
                                ",forn_desp = " + nulo  +;
                                ",baix_parc = " + nulo  +;
                                ",oper_parc = " + sr_cdbvalue(cod_operado)  +;
                                ",obs    = " + nulo+;
                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65])
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
