********************************
* OS's PEDENTES
********************************
FUNCTION sacos41
*****************
LOCAL mprg:='SACOS41',mtitulo:='CONSULTA O.S. PEDENTES (EM ABERTO)',;
      tela,tela1,lci,cci,lba,cba,opcao,m_codigo:={},;
      m_posicao:={},mposicao,mcodemp,point:=0

MEMVAR mnum_os

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 00
cci := 00
lba := 22
cba := 79

*---------------------------------------------------------------
IF ! AbriArq('sacoss','oss');RETURN NIL;ENDIF
IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
*---------------------------------------------------------------
CLEAR GETS
op_tela(lci,cci,lba+2,cba,mtitulo)
WHILE .T.
        mcodemp := '   '
        setcor(1)
        @ lci+2,cci TO lci+2,cba
        DEVPOS(lci+1,cci+1);DEVOUT(' No. OS ')
        DEVPOS(lci+1,cci+10);DEVOUT('Cd.Cli ')
        DEVPOS(lci+1,cci+17);DEVOUT('Oper.')
        DEVPOS(lci+1,cci+21);DEVOUT('   Data   ')
        DEVPOS(lci+1,cci+32);DEVOUT('Hr.O.S.   ')
        DEVPOS(lci+1,cci+46);DEVOUT('Placa/Serie    ')
        DEVPOS(lci+1,COL()+1);DEVOUT('Valor O.S.')
        IF mmult_emp = 'S'
                mcodemp := mcodempresa
                DEVPOS(lci,cci+2);DEVOUT('Empresa:')
                @ lci,cci+10 GET mcodemp PICT '999' VALID ver_emp(mcodemp,,,,'*')
                READ
        ENDIF
        *************
        SELE('oss');ORDSETFOCUS(4)
        GO TOP
        *************
        IF ! oss->(DBSEEK(' '))
                atencao('Nao existe nenhuma O.S. Pedente !!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento OK !!!')
        ASIZE(m_codigo,0)
        ASIZE(m_posicao,0)
        WHILE ! EOF() .AND. oss->pag = ' '
                IF ! EMPTY(mcodemp) .AND. mcodemp <> oss->empresa
                        SKIP
                        LOOP
                ENDIF
                AADD(m_codigo,' '+oss->num_os+'  '+oss->cod_cli+'  '+oss->operador+'  '+DTOC(oss->data_ent)+'  '+oss->hora_ent+'  '+oss->serie+'  '+TRANSFORM(tot_os(oss->num_os),'999,999.99'))
                AADD(m_posicao,RECNO())
                SKIP
        ENDDO

        IF LEN(m_codigo) = 0
                atencao('Nenhum Pedido Pedente !!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        WHILE .T.
                point := 0
                mensagem("<ESC> Retorna - <ENTER>p/Confirma - <ALT+2> 2a.Via")
                setcor(10);point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo);setcor(1)

                IF LASTKEY()=27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF LASTKEY() = 13
                        GO m_posicao[point]
                        mnum_os := VAL(oss->num_os)
                        wvw_lclosewindow()
                        RETURN mnum_os
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************
****************************************
* FUNCAO PARA O TOTAL DA O.S.
****************************************
FUNCTION tot_os(mnum)
**********************

LOCAL msele,morder,mtotal_os:=0

msele := SELE()
morde := INDEXORD()

IF ! AbriArq('sacospro','ospro');RETURN NIL;ENDIF
*************
SELE('ospro');ORDSETFOCUS(1)
GO TOP
*************
IF ! ospro->(DBSEEK(mnum))
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN 0
ENDIF
mtotal_os := 0
WHILE ! EOF() .AND. mnum = ospro->num_os
        mtotal_os := mtotal_os + (ospro->quantd*ospro->vlr_fat)
        SKIP
ENDDO
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN mtotal_os
