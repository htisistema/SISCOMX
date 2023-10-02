*** SAC5PED11.PRG: IMPRESSAO DE VARIOS PEDIDOS/ORCAMENTO
********************************************************
FUNCTION sac5ped11()
********************
LOCAL MPRG:='SAC5PED11',;
      mpoint := 0,mdata1 := CTOD('  /  /  '),mdata2 := CTOD('  /  /  '),mquantd_doc:=0,;
      mped_orc:='P',mpocket:='N'

PRIVATE m_ped:={},m_pos:={},mnum_ped:=0,ali:='',mquantd:=1,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo_pg,mvia := '2a.via',m_dia:={}

IF ! ver_nivel(mprg,'IMPRESSAO DE VARIOS PEDIDOS/ORCAMENTOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
li := 08
ci := 02
la := 49
ca := 78
op_tela(00,00,50,90,'Impressao de varios Pedidos',,1)
WHILE .T.
        mtipo_imp := m_indiv[1,10]
        limpa(00,00,35,100)
        exibi_prg(mprg)
        mdata1 := mdata2 := CTOD('  /  /  ')
        Mensagem('Digite a data  [ESC] Abandona.')
        DEVPOS(1,1);DEVOUT('Data Inicial.............:')
        DEVPOS(2,1);DEVOUT('Data Final...............:')
        DEVPOS(3,1);DEVOUT('[P]edido ou [O]rcamento..:')
        DEVPOS(4,1);DEVOUT('Enviado pelo APP... [S/N]:')
        botao(li,ci,la,ca)
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('No.Pedido')
        DEVPOS(li+1,ci+12);DEVOUT('Cliente')
        DEVPOS(li+1,ci+21);DEVOUT('Data')
        DEVPOS(li+1,ci+35);DEVOUT('Valor')
        DEVPOS(li+1,ci+41);DEVOUT('N.APP...')
        DEVPOS(li+1,COL()+1);DEVOUT('Sel.')
        @ li+2,ci TO li+2,ca
        setcor(1)
        @ la-2,ci TO la-2,ca
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Doc.:       ')

        @ 1,28 GET mdata1       //VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,28 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ 3,28 GET mped_orc PICT '@!' VALID mped_orc $ 'P,O'
        @ 4,28 GET mpocket PICT '@!' VALID mpocket $ 'S,N'
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mdata1)
                mdata1 := CTOD('01/01/90')
                mdata2 := mdata_sis+365
                @ 1,28 SAY mdata1
                @ 2,28 SAY mdata2
        ENDIF
        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************
        cComm  := "SELECT pnum_ped,pcod_cli,pdat_ped,sum(pquantd*pvlr_fat),pos FROM "+IF(mped_orc = 'P','sacped_s','sacorcam')+" WHERE sr_deleted = ' ' AND pdat_ped  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND (ppag = ' ' OR ppag IS NULL)"
        IF mpocket = 'S'
                cComm  := cComm + " AND pos IS NOT NULL AND NOT pos = '    ' AND NOT pos = '000000'"
        ENDIF
        cComm  := cComm + "GROUP BY pnum_ped,pnum_ped,pcod_cli,pcod_cli,pdat_ped,pdat_ped,pos,pos"
        aret:={}
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                atencao('Nao existe nenhum Documento a ser baixado')
                LOOP
        ENDIF
        i:=0
        m_ped:={}
        FOR i = 1 TO LEN(aret)
                AADD(m_ped,aret[i,1]+' '+aret[i,2]+' '+DTOC(aret[i,3])+' '+TRANSFORM(aret[i,4],'999,999,999.99')+' '+aret[i,5])
                AADD(m_pos,{' ',aret[i,1]})
        NEXT
        IF LEN(m_ped) = 0
                atencao('Nao existe movimento neste periodo')
                LOOP
        ENDIF
        IF ! EMPTY(m_ped)
                opcao := op_simnao('N','Deseja marcar todas os Documentos:')
        ENDIF
        mquantd_doc := 0
        IF opcao = 'S'
                i := 0
                FOR i = 1 TO LEN(m_ped)
                        m_ped[i] := SUBSTR(m_ped[i],1,47)+' X'
                        m_pos[i,1] := 'X'
                        mquantd_doc ++
                NEXT
        ENDIF
        mpoint := 0

        WHILE .T.
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mquantd_doc,'99999'))
                setcor(1)
                setcor(10);mpoint := ACHOICE(li+3,ci+1,la-3,ca-1,m_ped,,,mponto+1);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF m_pos[mpoint,1] = 'X'
                                        m_ped[mpoint] := SUBSTR(m_ped[mpoint],1,47)+'  '
                                        m_pos[mpoint,1] := ' '
                                        mquantd_doc --
                                ELSE
                                        m_ped[mpoint] := SUBSTR(m_ped[mpoint],1,47)+' X'
                                        m_pos[mpoint,1] := 'X'
                                        mquantd_doc ++
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        i := 0
        FOR i = 1 TO LEN(m_ped)
                IF m_pos[i,1] = 'X'
                        EXIT
                ENDIF
        NEXT
        IF i > LEN(m_ped) .OR. m_pos[i,1] <> 'X'
                atencao('Nao tem nenhum Documento marcado')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a IMPRESSAO DOS PEDIDOS/ORCAMENTOS ? [S/n]:')
        IF opcao = 'S'
                IF mped_orc = 'P'
                        ali := 'ped_s'
                ELSE
                        ali := 'orcam'
                ENDIF
                i := 0
                FOR i = 1 TO LEN(m_ped)
                        IF m_pos[i,1] = ' '
                                LOOP
                        ENDIF
                        mnum_ped := VAL(m_pos[i,2])
                        IF m_indiv[1,9] = 'B2'
                                boleto2()
                                mflag := 0
                        ELSEIF m_indiv[1,9] = 'B'
                                boleto()
                                mflag := 0
                        ELSEIF m_indiv[1,9] = 'L'
                                boleto('*')
                                mflag := 0
                        ELSEIF m_indiv[1,9] = 'T'
                                bole_term()
                                mflag := 0
                        ELSEIF m_indiv[1,9] = 'F'
                                formula()
                        ELSEIF m_indiv[1,9] = 'F1'
                                formula()
                        ELSEIF m_indiv[1,9] = 'M'
                                formula_1()
                        //ELSEIF m_indiv[1,9] = 'P'
                                //procomp()
                        ENDIF
                        
                NEXT

        ENDIF
ENDDO
RETURN NIL
********************************* F I M ***********************