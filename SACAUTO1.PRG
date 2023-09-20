*****************************
* GERAR CODIGO DE AUTORIZACAO
*****************************
FUNCTION autorizar(maut_cli,maut_prod,maut_amb)
**************************************
LOCAL mprg:='AUTORIZAR',mtitulo:='GERAR CODIGO DE AUTORIZACAO',;
      mcodig_c,mcodig_p,opcao:=' ',;
      mnum_gerar,mcodig_o,mtela_aut,mcod_autor,m_auto:={},m_posicao:={},m_ponto:=0,;
      mlci_aut:=0,mcci_aut:=00,mlba_aut:=20,mcba_aut:=75,;
      linhas,mpos := 50,i:=0,msenha_aut:=''

PRIVATE mcliente,mcpf,mcgc,mali_ped:='ped_s',cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*----------------------------------------------
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*--------------------------------------------------
CLEAR GETS
op_tela(08,10,10,80,mtitulo)
WHILE .T.
        WHILE LASTKEY() <> 27
                **************************
                SELE('sen');ORDSETFOCUS(2)
                GO TOP
                **************************
                ASIZE(m_auto,0)
                ASIZE(m_posicao,0)
                i := 0
                WHILE ! EOF()
                        setcor(3)
                        DEVPOS(01,01);DEVOUT('Oper: '+sen->scod_op+' Cliente: '+sen->scliente+' Prod.: '+sen->sproduto+' Ambiente: '+sen->sambiente)
                        IF sen->sstatus = 'S'
                                setcor(3,'*')
                                DEVPOS(01,01);DEVOUT('Oper: '+sen->scod_op+' Cliente: '+sen->scliente+' Prod.: '+sen->sproduto+' Ambiente: '+sen->sambiente)
                                setcor(1)
                                AADD(m_auto,'Oper: '+sen->sope+' Cliente: '+sen->scliente+' Prod.: '+sen->sproduto)
                                AADD(m_posicao,{RECNO(),sen->sope,sen->scliente,sen->sproduto,sen->smensagem,sen->sambiente})

                                cComm  := "UPDATE insopera SET sstatus = 'A' WHERE sope = "+sr_cdbvalue(sen->sope)
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF ! EMPTY(sen->scliente)
                                        sac350_1(VAL(sen->scliente),,0)
                                ENDIF
                                EXIT
                        ENDIF
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        SKIP
                ENDDO
                IF LEN(m_auto) > 0
                        EXIT
                ELSE

                        INKEY(.1)
               ENDIF
        ENDDO
        **************************
        SELE('sen');ORDSETFOCUS(2)
        **************************
        IF LASTKEY() = 27 .OR. LEN(m_auto) = 0
                IF LEN(m_auto) > 0 .AND. ! EMPTY(m_ponto)
                        cComm  := "UPDATE insopera SET sstatus = 'N' WHERE sope = "+sr_cdbvalue(m_posicao[m_ponto,2])
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
                EXIT
        ENDIF
        mcodig_c := IF(m_posicao[1,3]=NIL,0,VAL(m_posicao[1,3]))
        mcodig_p := IF(m_posicao[1,4]=NIL,0,VAL(m_posicao[1,4]))
        mcodig_a := IF(m_posicao[1,6]=NIL,'',m_posicao[1,6])
        mcodig_o := VAL(m_posicao[1,2])
        mcod_autor := 0
        opcao := 'S'
        op_tela(14,10,26,85,'Solicitacao Codigo de Liberacao')
        DEVPOS(1,1);DEVOUT('Codigo do Cliente...:')
        DEVPOS(2,1);DEVOUT('Codigo do Produto...:')
        DEVPOS(3,1);DEVOUT('Operador Solicitante:')
        DEVPOS(4,1);DEVOUT('Operador Autorizador:')
        DEVPOS(5,1);DEVOUT('Senha do Autorizador:')
        DEVPOS(6,1);DEVOUT('Autorizacao.........:')
        DEVPOS(7,1);DEVOUT('M E N S A G E M ....:')
        setcor(3)
        mpos := 50
        linhas := MLCOUNT(m_posicao[1,5],mpos)
        i:=0
        FOR i = 1 TO  linhas
                LIN := MEMOLINE(m_posicao[1,5],mpos,i,,)
                DEVPOS(6+i,23);DEVOUT(PADC(RTRIM(LIN),mpos))
        NEXT
        DEVPOS(1,23);DEVOUT(STRZERO(mcodig_c,5))
        DEVPOS(2,23);DEVOUT(STRZERO(mcodig_p,5))
        DEVPOS(3,23);DEVOUT(STRZERO(mcodig_o,3))
        setcor(1)
        IF(! EMPTY(mcodig_c),ver_cli(mcodig_c,1,29),'')
        IF(! EMPTY(mcodig_p),ver_cod(mcodig_p,2,29),'')
        IF(! EMPTY(mcodig_o),ven(mcodig_o,3,29),'')
        @ 4,23 GET mcod_autor PICT '999' VALID IF(EMPTY(mcod_autor),.F.,ven(mcod_autor,4,29))
        READ
        IF LASTKEY() = 27
                cComm  := "UPDATE insopera SET sstatus = 'N' WHERE sope = "+sr_cdbvalue(m_posicao[1,2])
                sr_getconnection():exec(ccomm,,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
                wvw_lclosewindow()
                EXIT
        ENDIF
        msenha_aut = ''
        pegasenha(@msenha_aut,5,23,setcor(2))
        setcor(1)
        IF EMPTY(msenha_aut);LOOP;ENDIF
        IF ALLTRIM(msenha_aut) <> ALLTRIM(DCRIPTO(sen->ssenha)) .OR. msenha_aut = 'NAO'
                atencao('Senha nao Autorizada !!!')
                wvw_lclosewindow()
                LOOP
        ENDIF
        setcor(3,'*')
        mnum_gerar := gera_num()
        DEVPOS(6,23);DEVOUT(mnum_gerar)
        opcao := op_simnao('S','Confirma a Operacao:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                wvw_lclosewindow()
                LOOP
        ENDIF
        cComm  := "UPDATE insopera SET sstatus = 'L' "
        IF ! EMPTY(mcodig_c)
                ccomm  := cComm  + ",scod_aut = "+sr_cdbvalue(mnum_gerar+STRZERO(mcodig_c,5)+STRZERO(mcodig_o,3)+STRZERO(mcod_autor,3))
        ELSEIF ! EMPTY(mcodig_p)
                cComm  := ccomm  + ",scod_aut = "+sr_cdbvalue(mnum_gerar+STRZERO(mcodig_p,5)+STRZERO(mcodig_o,3)+STRZERO(mcod_autor,3))
        ELSEIF ! EMPTY(mcodig_a)
                cComm  := ccomm + ",scod_aut = "+sr_cdbvalue(mnum_gerar+mcodig_a+STRZERO(mcodig_o,3)+STRZERO(mcod_autor,3))
        ENDIF
        cComm  := ccomm + " WHERE sope = "+sr_cdbvalue(m_posicao[1,2])
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        mensagem('Pressione Qualquer <ALT>+<U> p/continuar')
        WHILE .T.
                INKEY(0)
                IF LASTKEY() = 278
                        wvw_lclosewindow()
                        EXIT
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ***********************************

