*******************************************
* EMISSAO DE BOLETOS PAGAMENTOS DA HTI
*******************************************
FUNCTION hti_impbol()
*********************
LOCAL tela,opcao,mdocumento,mquantd,mvalor,i:=0,;
      mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mdata1,mdata2,mcons_dupr

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_vend:=0,mtip_term:='O',marq_html,;
        mnbanco,mconta_c,magencia,mtipo_cob,mcarteira,macess_escr,mprev:='S',cfilename,mdia_prot,especie:='DUPL',q_ban

opcao := ' '
************************************
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
************************************
mquantd := mvalor := 0
mmulta   :=m_set[1,50]
mjuros   :=m_set[1,51]
op_tela(05,05,17,70,' Emissao de Boleto Bancario da HTI Sistemas')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
	especie:='DUPL'
        mprev := 'S'
	marq_html:='HTIBOLETO                     '
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_vend := mcod_banco := mdia_prot := 0
        limpa(00,00,30,100)
        DEVPOS(1,1);DEVOUT('Data Inicial....:')
        DEVPOS(2,1);DEVOUT('Data Final......:')
        DEVPOS(3,1);DEVOUT('Codigo Operador.:')
        DEVPOS(4,1);DEVOUT('Codigo Banco....:')
        DEVPOS(5,1);DEVOUT('No.do Banco.....:')
        DEVPOS(6,1);DEVOUT('Num.Agencia.....:')
        DEVPOS(7,1);DEVOUT('Conta Corrente..:')
        DEVPOS(8,1);DEVOUT('Tipo Cobranca...:')
        DEVPOS(9,1);DEVOUT('Carteira........:')
        DEVPOS(10,1);DEVOUT('Instrucoes......:')
        DEVPOS(12,1);DEVOUT('Visualizar [S/N]:')

        @ 1,20 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,20 GET mdata2 VALID IF(mdata2<mdata1,.F.,.T.)
        @ 3,20 GET mcod_vend PICT '999' VALID ven(mcod_vend,3,25)
        @ 4,20 GET mcod_banco PICT "999"
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        q_ban := {}
        sr_getconnection():exec("SELECT * FROM sacbanco WHERE cod_banco = "+sr_cdbvalue(STRZERO(mcod_banco,3)),,.t.,@q_ban)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(q_ban) = 0
                atencao('Este Banco nao esta Cadastrado')
                LOOP
        ENDIF
        mnbanco := STRZERO(VAL(q_ban[1,3]),3)
        mconta_c := ALLTRIM(q_ban[1,11])+ALLTRIM(q_ban[1,5])+'-'+q_ban[1,9]
        magencia := ALLTRIM(q_ban[1,4])+'-'+q_ban[1,10]
        IF ! EMPTY(q_ban[1,7])
                mtipo_cob := mcarteira := ALLTRIM(q_ban[1,7])
        ELSE
                mtipo_cob := mcarteira := '  '
        ENDIF
        macess_escr := ALLTRIM(q_ban[1,8])
        setcor(3)
        DEVPOS(4,20);DEVOUT(q_ban[1,2])
        DEVPOS(5,20);DEVOUT(STRZERO(VAL(q_ban[1,3]),3))
        DEVPOS(6,20);DEVOUT(magencia)
        DEVPOS(7,20);DEVOUT(mconta_c)
        DEVPOS(8,20);DEVOUT(mtipo_cob)
        DEVPOS(9,20);DEVOUT(mcarteira)
        setcor(1)

	mprev := 'S'
        //@ 8,20 GET mtipo_cob PICT '99' VALID IF(EMPTY(mtipo_cob),.F.,.T.)
        //@ 9,20 GET mcarteira PICT '9' VALID IF(EMPTY(mcarteira),.F.,.T.)
        //@ 10,20 GET minstrucao
        //@ 11,20 GET minstrucao1
        @ 12,20 GET mprev PICT '@!' VALID mprev $ 'S,N'
        READ
        IF LASTKEY() = 27
                fecha_tela()
                RETURN NIL
        ENDIF

        opcao := op_simnao('S','Confirma o processamento [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mcons_dupr := {}
        cComm  := "SELECT * FROM sacdupr WHERE venc  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND datpag IS NULL"
        IF ! EMPTY(mcod_vend)
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        ccomm := ccomm + " ORDER BY fornec"
        sr_getconnection():exec(ccomm,,.t.,@mcons_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_dupr) = 0
                atencao('Nao existe documento neste periodo....')
                LOOP
        ENDIF
        fecha_tela()
        RETURN NIL
ENDDO
