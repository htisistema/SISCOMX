**********************************************
* DATA: 21.10.2002
* FUNCAO PARA EMAIL INTERNO ENVIAR
*********************************************
/*
MEMVAR getlist,mdata_sis,cod_operado

FUNCTION sacemail()
*******************
LOCAL mprg:='SACEMAIL',opcao
op_tela(10,30,18,64,'MENU DE MENSAGENS','8')
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        botao1(01,01,03,32)
        botao1(05,01,07,32)
        @ 02,02 PROMPT ' 0 - Ler Mensagens ou Excluir '
        @ 06,02 PROMPT ' 1 - Enviar Mensagens         '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
        *               LER MENSAGENS
                        sacemail2()
                 CASE opcao = 2
        *               ENVIAR MENSAGENS
                        sacemail1()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*/
********************** F I M ****************************************
FUNCTION sacemail1()
********************
LOCAL mprg:= 'SACEMAIL1',;
      mtela1,lba:=23,cba:=77,opcao,m_operado:={},m_apre:={},mpoint:=0,;
      massunto:=SPACE(40),li:=10,ci:=05,la:=20,ca:=75,i:=0,mdata_men,;
      mlin1 := SPACE(70),mlin2 := SPACE(70),mlin3 := SPACE(70),mlin4 := SPACE(70),;
      mlin5 := SPACE(70),mlin6 := SPACE(70),mlin7 := SPACE(70),mlin8 := SPACE(70),;
      mlin9 := SPACE(70),mlin10 := SPACE(70),mlin11 := SPACE(70),mlin12 := SPACE(70),;
      mlin13 := SPACE(70),mlin14 := SPACE(70),mlin15 := SPACE(70),mlin16 := SPACE(70),;
      mlin17 := SPACE(70),mlin18 := SPACE(70),mlin19 := SPACE(70),mlin20 := SPACE(70),;
      mtipo_mens:=' ',marq,slinhas

***************************************************
IF ! AbriArq('sacmensa','mensa');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
***************************************************
op_tela(00,02,23,79,'Enviar Email Interno ou APP...')
WHILE .T.
        massunto:=SPACE(40)
        mlin1 := mlin2 := mlin3 := mlin4 := mlin5 := mlin6 := mlin7 := mlin8 :=;
        mlin9 := mlin10 := mlin11 := mlin12 := mlin13 := mlin14 := mlin15 := ;
        mlin16 := mlin17 := mlin18 := mlin19 := mlin20 := SPACE(70)
        ASIZE(m_operado,0)
        ASIZE(m_apre,0)
        mpoint := 0
        mdata_men := mdata_sis
        ver_ven(cod_operado,'*')
        DEVPOS(1,1);DEVOUT('Operador: '+cod_operado+' - '+sen->snome)
        DEVPOS(1,49);DEVOUT('Data: ')
        DEVPOS(2,1);DEVOUT('Assunto: ')
        DEVPOS(2,52);DEVOUT('Tipo Mensagem: ')
        @ 1,55 GET mdata_men VALID IF(EMPTY(mdata_men),.F.,.T.)
        @ 2,10 GET massunto PICT '@!' VALID IF(EMPTY(massunto),.F.,.T.)
        @ 2,67 GET mtipo_mens PICT '@!' VALID mtipo_mens $ 'R,P, ' WHEN men_get(1,1,'Digite <R>Mensagem Instantanea - <P>ocket ou em Branco Mensagem Normal')
        @ 3,2 GET mlin1
        @ 4,2 GET mlin2
        @ 5,2 GET mlin3 VALID IF(mtipo_mens = 'P' .AND. LEN(ALLTRIM(mlin3)) > 60,.F.,.T.)
        @ 6,2 GET mlin4 WHEN mtipo_mens # 'P'
        @ 7,2 GET mlin5 WHEN mtipo_mens # 'P'
        @ 8,2 GET mlin6 WHEN mtipo_mens # 'P'
        @ 9,2 GET mlin7 WHEN mtipo_mens # 'P'
        @ 10,2 GET mlin8 WHEN mtipo_mens # 'P'
        @ 11,2 GET mlin9 WHEN mtipo_mens # 'P'
        @ 12,2 GET mlin10 WHEN mtipo_mens # 'P'
        @ 13,2 GET mlin11 WHEN mtipo_mens # 'P'
        @ 14,2 GET mlin12 WHEN mtipo_mens # 'P'
        @ 15,2 GET mlin13 WHEN mtipo_mens # 'P'
        @ 16,2 GET mlin14 WHEN mtipo_mens # 'P'
        @ 17,2 GET mlin15 WHEN mtipo_mens # 'P'
        @ 18,2 GET mlin16 WHEN mtipo_mens # 'P'
        @ 19,2 GET mlin17 WHEN mtipo_mens # 'P'
        @ 20,2 GET mlin18 WHEN mtipo_mens # 'P'
        @ 21,2 GET mlin19 WHEN mtipo_mens # 'P'
        @ 22,2 GET mlin20 WHEN mtipo_mens # 'P'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        **************************
        SELE('sen');ORDSETFOCUS(1)
        GO TOP
        **************************
        WHILE ! EOF()
                AADD(m_apre,'Operador: '+sen->scod_op+' - '+sen->snome+' - Nivel: '+sen->snivel+'  ')
                AADD(m_operado,{sen->scod_op,' '})
                SKIP
        ENDDO
        mtela1 := SAVESCREEN(00,00,24,79)
        WHILE .T.
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                botao(li,ci,la,ca,,' Operadores Cadastrados ')
                setcor(10);mpoint := ACHOICE(li+1,ci+1,la-1,ca-1,m_apre,,,mpoint+1);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF m_operado[mpoint,2] = 'X'
                                        m_apre[mpoint] := SUBSTR(m_apre[mpoint],1,57)+'  '
                                        m_operado[mpoint,2] := ' '
                                ELSE
                                        m_apre[mpoint] := SUBSTR(m_apre[mpoint],1,57)+' X'
                                        m_operado[mpoint,2] := 'X'
                                ENDIF
                        CASE LASTKEY() = 27
                                opcao := ' '
                                opcao := op_simnao('S','Confirma os dados para o envio da mensagem: ')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                EXIT
                ENDCASE
        ENDDO
        mhora := TIME()
        i := 0
        FOR i = 1 TO LEN(m_operado)
                IF m_operado[i,2] = ' '
                        LOOP
                ENDIF
                sr_getconnection():exec('INSERT INTO sacmensa ('+;
                'data_men ,'+;
                'hora_men ,'+;
                'cod_emi  ,'+;
                'cod_rec  ,'+;
                'assunto  ,'+;
                'lin1     ,'+;
                'lin2     ,'+;
                'lin3     ,'+;
                'lin4     ,'+;
                'lin5     ,'+;
                'lin6     ,'+;
                'lin7     ,'+;
                'lin8     ,'+;
                'lin9     ,'+;
                'lin10    ,'+;
                'lin11    ,'+;
                'lin12    ,'+;
                'lin13    ,'+;
                'lin14    ,'+;
                'lin15    ,'+;
                'lin16    ,'+;
                'lin17    ,'+;
                'lin18    ,'+;
                'lin19    ,'+;
                'lin20    ,'+;
                'ler      ,'+;
                'SR_DELETED)'+;
                ' VALUES ('+;
                sr_cdbvalue(mdata_men     )+','+; //1
                sr_cdbvalue(mhora         )+','+; //4
                sr_cdbvalue(cod_operado   )+','+; //5
                sr_cdbvalue(m_operado[i,1])+','+; //6
                sr_cdbvalue(massunto      )+','+; //7
                sr_cdbvalue(mlin1         )+','+; //8
                sr_cdbvalue(mlin2         )+','+;//9
                sr_cdbvalue(mlin3         )+','+;//10
                sr_cdbvalue(mlin4         )+','+;//9
                sr_cdbvalue(mlin5         )+','+;//9
                sr_cdbvalue(mlin6         )+','+;//9
                sr_cdbvalue(mlin7         )+','+;//9
                sr_cdbvalue(mlin8         )+','+;//9
                sr_cdbvalue(mlin9         )+','+;//9
                sr_cdbvalue(mlin10        )+','+;//9
                sr_cdbvalue(mlin11        )+','+;//9
                sr_cdbvalue(mlin12        )+','+;//9
                sr_cdbvalue(mlin13        )+','+;//9
                sr_cdbvalue(mlin14        )+','+;//9
                sr_cdbvalue(mlin15        )+','+;//9
                sr_cdbvalue(mlin16        )+','+;//9
                sr_cdbvalue(mlin17        )+','+;//9
                sr_cdbvalue(mlin18        )+','+;//9
                sr_cdbvalue(mlin19        )+','+;//9
                sr_cdbvalue(mlin20        )+','+;//9
                sr_cdbvalue(IF(mtipo_mens = 'R','R',''))+','+;//9
                sr_cdbvalue(' ')+')',,.f.)
        NEXT
        sr_getconnection():exec('COMMIT',,.f.)
        IF mtipo_mens = 'P'
                m_operado := {}
                sr_getconnection():exec("SELECT * FROM sacmensa WHERE data_men = "+sr_cdbvalue(mdata_men)+" AND hora_men = "+sr_cdbvalue(mhora)+" ORDER BY cod_rec",,.t.,@m_operado)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(m_operado) = 0
                        atencao('Nao foi encontrado nenhuma Mensagem para ser enviada...')
                        LOOP
                ENDIF
                FCLOSE(ALLTRIM(m_indiv[1,3])+'exportar\mensagem.tot')
                mArq        := fcreate(ALLTRIM(m_indiv[1,3])+'exportar\mensagem.tot')
                i := 0
                FOR i = 1 TO LEN(m_operado)
                        sLinhas := 'MSG|I|'+ALLTRIM(STR(m_operado[i,28]))+m_operado[i,4]+'|'+ALLTRIM(STR(VAL(cod_operado)))+'|'+ALLTRIM(STR(VAL(m_operado[i,4])))+'|'+DTOC(m_operado[i,1])+'|'+ALLTRIM(m_operado[i,5])+'|'+m_operado[i,6]+m_operado[i,7]+ALLTRIM(m_operado[i,8])+'|A'+ CHR( 13 ) + CHR( 10 )
                        FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
                NEXT
                FCLOSE(ALLTRIM(m_indiv[1,3])+'exportar\mensagem.tot')
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***********************************
* DATA: 21.10.2002
* FUNCAO PARA EMAIL INTERNO LER ou EXCLUIR
*********************************************
FUNCTION sacemail2()
********************
LOCAL mprg:= 'SACEMAIL2',;
      la:=15,ca:=79,opcao:= ' ',m_operado:={},m_apre:={},mpoint:=0,;
      mtela1,mcodopera:=SPACE(3)
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
***************************************************
IF ! AbriArq('sacmensa','mensa');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
***************************************************
WHILE .T.
        mcodopera := cod_operado
        ASIZE(m_operado,0)
        ASIZE(m_apre,0)
        mpoint := 0
        **********************
        SELE('mensa');ORDSETFOCUS(1)
        GO TOP
        **********************
        IF ! mensa->(DBSEEK(mcodopera))
                atencao('Nao foi encontrado nenhuma mensagem para esse Operador em nosso ARQUIVO ...')
                RETURN NIL
        ENDIF
        WHILE mensa->cod_rec = mcodopera .AND. mensa->data_men <= mdata_sis .AND. ! EOF()
                AADD(m_apre,'   '+mensa->cod_rec+'    '+mensa->assunto+'   '+DTOC(mensa->data_men)+'   '+mensa->ler)
                AADD(m_operado,RECNO())
                SKIP
        ENDDO
        IF LEN(m_apre) = 0 .OR. LEN(m_operado) = 0
                atencao('Nao existe nenhuma mensagem para esse Operador ate esta DATA ...')
                RETURN NIL
        ENDIF
        op_tela(05,00,20,79,' Relacao de Mensagem do Operador: '+mcodopera+'-'+sen->snome)
        WHILE .T.
                mensagem('<ENTER> p/Confirmar - <ESC> Retorna')
                ver_ven(mcodopera,'*')
                //botao(0,0,la,ca,,' Relacao de Mensagem do Operador: '+mcodopera+'-'+sen->snome)
                DEVPOS(1,1);DEVOUT('Operador     Assunto                                   Data    Ler')
                @ 2,1 TO 2,ca-1
                setcor(10);mpoint := ACHOICE(3,1,la-1,ca-1,m_apre,,,mpoint);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                opcao := ' '
                                opcao := mensagem1('Deseja [L]-> ler ou [E]-> Excluir: ','L','L,E')
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF opcao = 'E'
                                        opcao := ' '
                                        opcao := mensagem1('Confirma a Exclusao desta Mensagem: ','N','N,S')
                                        IF opcao = 'S'
                                                GO m_operado[mpoint]
                                                BLOQREG()
                                                DELE
                                                DBCOMMIT()
                                                DBUNLOCK()
                                                sr_getconnection():exec("DELETE FROM sacmensa WHERE SR_DELETED = 'T'",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                mpoint := 0
                                                ASIZE(m_operado,0)
                                                ASIZE(m_apre,0)
                                                **********************
                                                SELE('mensa');ORDSETFOCUS(1)
                                                GO TOP
                                                **********************
                                                IF ! mensa->(DBSEEK(mcodopera))
                                                        atencao('Nao existe nenhuma mensagem para esse Operador...')
                                                        EXIT
                                                ENDIF
                                                WHILE mensa->cod_rec = mcodopera .AND. mensa->data_men <= mdata_sis .AND. ! EOF()
*                                               WHILE mensa->cod_rec = mcodopera .AND. ! EOF()
                                                        AADD(m_apre,'   '+mensa->cod_rec+'    '+mensa->assunto+'   '+DTOC(mensa->data_men)+'   '+mensa->ler)
                                                        AADD(m_operado,RECNO())
                                                        SKIP
                                                ENDDO
                                        ENDIF
                                ELSE
                                        GO m_operado[mpoint]
                                        BLOQREG()
                                        mensa->ler := '*'
                                        mensa->data_ler := mdata_sis
                                        DBCOMMIT()
                                        DBUNLOCK()
                                        mtipo_imp := m_indiv[1,18]
                                        mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                                        IF ! imp_arq('EMAIL.REL','R')
                                                EXIT
                                        ENDIF
                                        ver_ven(mensa->cod_emi,'*')
                                        DEVPOS(PROW(),00);DEVOUT('Remetente...: '+mensa->cod_emi+' - '+sen->snome)
                                        DEVPOS(PROW()+1,00);DEVOUT('Data........: '+DTOC(mensa->data_men)+' - Hora: '+mensa->hora_men)
                                        ver_ven(mensa->cod_rec,'*')
                                        DEVPOS(PROW()+1,00);DEVOUT('Destinatario: '+mensa->cod_rec+' - '+sen->snome)
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                        DEVPOS(PROW()+1,00);DEVOUT('Assunto: '+mensa->assunto)
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin1)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin2)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin3)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin4)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin5)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin6)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin7)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin8)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin9)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin10)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin11)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin12)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin13)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin14)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin15)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin16)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin17)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin18)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin19)
                                        DEVPOS(PROW()+1,00);DEVOUT(mensa->lin20)
                                        SETPRC(00,00)
                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                        conf_impressao('EMAIL.REL')
                                        ASIZE(m_operado,0)
                                        ASIZE(m_apre,0)
                                        **********************
                                        SELE('mensa');ORDSETFOCUS(1)
                                        GO TOP
                                        **********************
                                        IF ! mensa->(DBSEEK(mcodopera))
                                                atencao('Nao existe nenhuma mensagem para esse Operador...')
                                                EXIT
                                        ENDIF
                                        WHILE mensa->cod_rec = mcodopera .AND. mensa->data_men <= mdata_sis .AND. ! EOF()
*                                       WHILE mensa->cod_rec = cod_operado .AND. ! EOF()
                                                AADD(m_apre,'   '+mensa->cod_rec+'    '+mensa->assunto+'   '+DTOC(mensa->data_men)+'   '+mensa->ler)
                                                AADD(m_operado,RECNO())
                                                SKIP
                                        ENDDO
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
