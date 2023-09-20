* RETIRADA DE DESPESAS DIARIAS
*******************************
FUNCTION sac31_1
*****************
LOCAL mprg:='SAC31_1',;
      opcao,tela,i,mdata,mvalor,mtraco,mtp_desp,mcom_sem:=' '

PRIVATE mdescri1,mdescri2,mcoddesp,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RETIRADA DE DESPESAS','1356',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*--------------------------------------------------------------------------
op_tela(10,10,19,68,'RETIRADA DE DESPESAS')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdata := mdata_sis
        mvalor := mcoddesp := 0
        mdescri1 := mdescri2 := SPACE(40)
        mtp_desp := mcom_sem := SPACE(1)
        opcao = 'S'
        DEVPOS(1,2);DEVOUT('Data........:')
        DEVPOS(2,2);DEVOUT('Valor R$....:')
        DEVPOS(3,2);DEVOUT('Tipo Despesa:')
        DEVPOS(4,2);DEVOUT('Cod.Despesa.:')
        DEVPOS(5,2);DEVOUT('Descricao...:')

        @ 1,16 GET mdata
        @ 2,16 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
        @ 3,16 GET mtp_desp PICT '@!'
        @ 4,16 GET mcoddesp PICT '999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_desp(mcoddesp)
        @ 5,15 GET mdescri1 PICT '@!'
        @ 6,15 GET mdescri2 PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF m_set[1,155] = 'S'
                mcom_sem := mensagem1('Tipo de Recebimento:',' ','X, ')
        ENDIF
        opcao := op_simnao('S','Confirma a Despesas:')
        IF opcao = 'N'
                LOOP
        ENDIF

        ********************
        SELE('caix');ORDSETFOCUS(1)
        ********************

        IF ADIREG()
                caix-> empresa := mcodempresa
                caix-> tipo := 'DE'
                caix-> nota := ' DESPESA'
                caix-> data := mdata
                caix-> venci := mdata
                caix-> documento := '9999999999'
                caix-> valor := mvalor * -1
                caix-> coddesp := STRZERO(mcoddesp,3)
                caix-> descri1 := mdescri1
                caix-> descri2 := mdescri2
                caix-> cod_opera := cod_operado
                caix-> tp_desp := mtp_desp
                caix-> hora      := TIME()
                caix-> c_s   := mcom_sem
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
        IF mtp_desp = '*'
                sac2cc11(mvalor,mdescri1)
        ENDIF
        IF ! imp_arq('DESPESA.REL','R')
                LOOP
        ENDIF
        IF m_set[1,63] = 'F'
                i:=0
                FOR i = 1 TO m_set[1,64]
                        imprt(mtipo_imp,'E',2)
                        DEVPOS(PROW(),01);DEVOUT(memp_resa)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                        DEVPOS(PROW()+2,25);DEVOUT('D E S P E S A S')

                        DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata)

                        DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa..:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                        IF ! EMPTY(mcoddesp)
                                DEVPOS(PROW()+2,00);DEVOUT('Descricao'+' ('+STRZERO(mcoddesp,3)+'):')
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT('Descricao......:')
                        ENDIF
                        DEVPOS(PROW(),17);DEVOUT(mdescri1)
                        DEVPOS(PROW()+1,17);DEVOUT(mdescri2)

                        DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                        IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                        ENDIF
                NEXT
                EJECT
                SETPRC(00,00)
        ELSEIF m_set[1,63] = 'B'
                mtraco := REPLI('=',60)
                IF m_indiv[1,7] = '4200'
                        imprt('M','N+')
                ELSE
                        imprt(mtipo_imp,'C')
                ENDIF
                i:=0
                FOR i = 1 TO m_set[1,64]
                        //imprt(mtipo_imp,'N')
                        DEVPOS(PROW(),01);DEVOUT(memp_resa)
                        //imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        //imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,00);DEVOUT(PADC('D E S P E S A S',35))
                        //imprt(mtipo_imp,'C')

                        DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                        DEVPOS(PROW(),17);DEVOUT(mdata)

                        DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa..:')
                        DEVPOS(PROW(),17);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                        IF ! EMPTY(mcoddesp)
                                DEVPOS(PROW()+2,00);DEVOUT('Descricao'+' ('+STRZERO(mcoddesp,3)+'):')
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT('Descricao......:')
                        ENDIF
                        DEVPOS(PROW(),17);DEVOUT(mdescri1)
                        DEVPOS(PROW()+1,17);DEVOUT(mdescri2)

                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...........................',60))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A         ',60))
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...........................',60))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('         Solicitante       ',60))

                        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                        IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                        ENDIF
                NEXT
                DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                SETPRC(00,00)
        ENDIF
        imprt(mtipo_imp,'N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DESPESA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** f i m **********************************
* CANCELAR/ALTERAR DESPESAS
***************************
FUNCTION sac31_3
*****************
LOCAL mprg:='SAC31_3',;
      tela,lba,cba,li,ci,la,ca,point,opcao,m_codigo:={},m_posicao:={},mdata,;
      mvalor,mdescri1,mdescri2,mcoddesp,mtraco,i
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'CANCELAR OU ALTERAR DESPESAS','135',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 22
cba := 77

li = 15
ci = 21
la = 22
ca = 79
mdata := mdata_sis
*---------------------------------------------------------------
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*---------------------------------------------------------------
op_tela(00,00,24,79,' Cancelamento de Despesas ')
WHILE .T.
        DEVPOS(1,1);DEVOUT(' Data ')
        DEVPOS(1,13);DEVOUT('Tipo')
        DEVPOS(1,18);DEVOUT(' Descricao ')
        DEVPOS(1,61);DEVOUT('     Valor')
        DEVPOS(0,2);DEVOUT(' Digite a data da despesas:    ')
        @ 0,COL()+1 GET mdata
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mdata)
                LOOP
        ENDIF
        *************
        SELE('caix');ORDSETFOCUS(1)
        GO TOP
        *************
        SEEK DTOS(mdata)
        IF ! FOUND()
                atencao('Nao existe nenhuma despesa !!!')
                LOOP
        ENDIF
        mensagem('Aguarde um momento OK !!!')
        ASIZE(m_codigo,0)
        ASIZE(m_posicao,0)
        WHILE ! EOF() .AND. mdata = caix->data
                IF caix->tipo = 'DE' .OR. caix->tipo = 'DF'
                        AADD(m_codigo,' '+DTOC(caix->data)+'    '+caix->tipo+'   '+caix->descri1+'   '+TRANSFORM(caix->valor,'9,999,999.99'))
                        AADD(m_posicao,RECNO())
                        SKIP
                        LOOP
                ENDIF
                SKIP
        ENDDO
        IF LEN(m_codigo) = 0
                atencao('Nenhum despesa')
                LOOP
        ENDIF
        mensagem("<ESC> Retorna  -  <ENTER> p/Confirma o cancelamento" )
        setcor(10);point := ACHOICE(3,1,lba-1,cba-1,m_codigo);setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        GO m_posicao[point]
                        opcao := mensagem1('Deseja [A]lterar ou [C]ancelar a DESPESA:',' ','A,C')
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF opcao = 'C'
                                opcao := op_simnao('N','Confirma Cancelamento da despesa:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ELSE
                                        IF ! BLOQREG()
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                EXIT
                                        ENDIF
                                        DELE
                                        DBCOMMITALL()
                                        DBUNLOCKALL()
                                        sr_getconnection():exec("DELETE FROM saccaixa WHERE SR_DELETED = 'T'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                        ELSE
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        EXIT
                                ENDIF
                                mtraco := REPLI('=',80)
                                setcor(3)
                                botao(li,ci,la,ca)
                                @ li+1,ci+1 TO li+1,ca-1
                                setcor(1)
                                SET INTEN ON
                                mensagem('Preencha os Campos - <ESC> p/Retornar ')
                                mdata := caix->data
                                mvalor := caix->valor*-1
                                mcoddesp := VAL(caix->coddesp)
                                mdescri1 := caix->descri1
                                mdescri2 := caix->descri2
                                opcao = 'S'
                                janela(li,ca,' Alteracao de Despesas ')
                                DEVPOS(li+2,ci+2);DEVOUT('Data.......:')
                                DEVPOS(li+3,ci+2);DEVOUT('Valor R$...:')
                                DEVPOS(li+4,ci+2);DEVOUT('Cod.Despesa:')
                                DEVPOS(li+5,ci+2);DEVOUT('Descricao..:')

                                @ li+2,ci+15 GET mdata
                                @ li+3,ci+15 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                                @ li+4,ci+15 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp)
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                @ li+5,ci+15 GET mdescri1 PICT '@!'
                                @ li+6,ci+15 GET mdescri2 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Despesas:')
                                IF opcao = 'N'
                                        LOOP
                                ENDIF
                                caix-> data := mdata
                                caix-> venci := mdata
                                caix-> documento := '9999999999'
                                caix-> valor := mvalor * -1
                                caix-> coddesp := STRZERO(mcoddesp,3)
                                caix-> descri1 := mdescri1
                                caix-> descri2 := mdescri2
                                caix-> hora      := TIME()
                                COMMIT
                                UNLOCK
                                IF ! imp_arq('DESPESA.REL','R')
                                        LOOP
                                ENDIF
                                IF m_set[1,63] = 'F'
                                        i:=0
                                        FOR i = 1 TO m_set[1,64]
                                                imprt(mtipo_imp,'E',2)
                                                DEVPOS(PROW(),01);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                IF caix->tipo = 'DE'
                                                        DEVPOS(PROW()+2,25);DEVOUT('D E S P E S A S')
                                                ELSE
                                                        DEVPOS(PROW()+2,25);DEVOUT('D E S P E S A S   ADM')
                                                ENDIF
                                                DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                                                DEVPOS(PROW(),17);DEVOUT(mdata)

                                                DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa__:')
                                                DEVPOS(PROW(),17);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                                                IF ! EMPTY(mcoddesp)
                                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao'+' ('+STRZERO(mcoddesp,3)+'):')
                                                ELSE
                                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao______:')
                                                ENDIF
                                                DEVPOS(PROW(),17);DEVOUT(mdescri1)
                                                DEVPOS(PROW()+1,17);DEVOUT(mdescri2)

                                                DEVPOS(PROW()+4,00);DEVOUT(PADC('___________________________           ____________________________',80))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                        NEXT
                                        EJECT
                                        SETPRC(00,00)
                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                ELSEIF m_set[1,63] = 'B'
                                        mtraco := REPLI('=',60)
                                        IF m_indiv[1,7] = '4200'
                                                imprt('M','N+')
                                        ELSE
                                                imprt(mtipo_imp,'C')
                                        ENDIF
                                        i:=0
                                        FOR i = 1 TO m_set[1,64]
                                                DEVPOS(PROW(),01);DEVOUT(memp_resa)
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                                IF caix->tipo = 'DE'
                                                        DEVPOS(PROW()+2,00);DEVOUT('D E S P E S A S')
                                                ELSE
                                                        DEVPOS(PROW()+2,00);DEVOUT('D E S P E S A S   ADM')
                                                ENDIF

                                                DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                                                DEVPOS(PROW(),17);DEVOUT(mdata)

                                                DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa__:')
                                                DEVPOS(PROW(),17);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                                                IF ! EMPTY(mcoddesp)
                                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao'+' ('+STRZERO(mcoddesp,3)+'):')
                                                ELSE
                                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao______:')
                                                ENDIF
                                                DEVPOS(PROW(),17);DEVOUT(mdescri1)
                                                DEVPOS(PROW()+1,17);DEVOUT(mdescri2)

                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('___________________________',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A         ',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('___________________________',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         Solicitante       ',60))

                                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                                IF m_set[1,64] > 1 .AND. i < m_set[1,64]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                        NEXT
                                        DEVPOS(PROW()+m_indiv[1,16],00);DEVOUT(' ')
                                        imprt(mtipo_imp,'N')
                                        SETPRC(00,00)
                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                ENDIF
                                conf_impressao('DESPESA.REL')
                        ENDIF
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** f i m *************************************

