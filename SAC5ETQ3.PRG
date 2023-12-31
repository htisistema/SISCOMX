**************************************
* EMISSAO DE ETIQUETAS - FORNECEDOR
**************************************
MEMVAR getlist

FUNCTION sac5etq3()
*****************
LOCAL mprg:='SACETQ_C',;
      tela,opcao,lc,cc,lb,cb,;
      msocio,mclassif,mcod,mcontador,mqtd_etq,i,mcodconta,;
      mespaco,mlinhas,mfila,mcodigo,mdata_ini,mdata_fim,;
      m_etq:={},mquantd:=1
PRIVATE mcod_forn,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_cli:={}

lc := cc := 0
lb := 20
cb := 76
*************
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('SACCEP','CEP');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
set_key('cliente')
SELE('forn');ORDSETFOCUS(2)
GO TOP
*************
op_tela(lc,cc,lb+2,cb," Opcoes para ETIQUETAS DE FORNECEDOR ")

WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mcod := 'S'
        mcod_forn := 0
        mcodigo  := 0
        mclassif := '2'
        mdata_ini := CTOD('  /  /  ')
        mdata_fim := CTOD('  /  /  ')
        mcodconta := '    '
        mespaco  := 11
        mlinhas  := 2
        mfila    := 2
        mcontador := 0
        mqtd_etq := 20
        mquantd  := 1
        ASIZE(m_etq,0)

        setcor(3)
        DEVPOS(lc+1,cc+1);DEVOUT('Etiqueta INDIVIDUAL:')
        DEVPOS(lc+3,cc+1);DEVOUT('OPCOES:')
        DEVPOS(lc+6,cc+1);DEVOUT('CLASSIFICACAO: [ ]')
        DEVPOS(lc+11,cc+47);DEVOUT('** Data Cadastro **')
        setcor(1)
        DEVPOS(lc+2,cc+10);DEVOUT('Fornecedor.:')
        DEVPOS(lc+4,cc+9);DEVOUT('[    ] Conta Despesa')
        DEVPOS(lc+5,cc+9);DEVOUT('Cod.Ult.Codigo Impresso:')
        DEVPOS(lc+7,cc+09);DEVOUT('[1] Matricula')
        DEVPOS(lc+8,cc+09);DEVOUT('[2] Alfabetica')
        DEVPOS(lc+11,cc+03);DEVOUT('Data Inicial:')
        DEVPOS(lc+11,cc+26);DEVOUT('Data Final:')
        DEVPOS(lc+12,cc+1);DEVOUT('Espaco entre ETIQUETAS.............:')
        DEVPOS(lc+13,cc+1);DEVOUT('Quantidade Linhas entre ETIQUETAS..:')
        DEVPOS(lc+14,cc+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,2].:')
        DEVPOS(lc+15,cc+1);DEVOUT('Quantidade de Etiquetas p/paginas..:')
        DEVPOS(lc+16,cc+1);DEVOUT('Deseja Imprimir o Codigo [S/n].....:')
        DEVPOS(lc+17,cc+1);DEVOUT('Quantidade de Etiquetas............:')
        Mensagem('Digite a matricula ou escolha as opcoes - [ESC] p/ Sair')

        @ lc+2,cc+22 GET mcod_forn PICT '9999' VALID ver_fab(mcod_forn,lc+2,cc+29)
        READ
        IF LASTKEY()=27
                CLOSE ALL
                EXIT
        ENDIF
        SETCOR(3)
        IF ! EMPTY(mcod_forn)
                mfila := 1
                DEVPOS(lc+2,cc+29);DEVOUT(forn->razao)
        ENDIF
        SETCOR(1)
        @ lc+4,cc+10 GET mcodconta PICT '@! 9.99' VALID verdesp(mcodconta,lc+5,cc+10) .AND. lim_get() WHEN mcod_forn = 0 .AND. men_get(lc+5,cc+10,'Informe a Conta Despesa ou <F1>Ajuda')
        @ lc+5,cc+33  GET mcodigo  PICT '99999' VALID ver_cli(mcodigo,lc+5,cc+39) .AND. lim_get() WHEN mcod_forn = 0 .AND. men_get(lc+6,cc+10,'Digite o ultimo codigo do fornecedor impresso ou nao preencha p/TODOS')
        @ lc+6,cc+17  GET mclassif PICT '9' VALID mclassif $ '1,2' WHEN mcod_forn = 0
        @ lc+11,cc+17 GET mdata_ini PICT '99/99/99' WHEN mcod_forn = 0
        @ lc+11,cc+38 GET mdata_fim PICT '99/99/99' VALID IF(mdata_fim<mdata_ini,.F.,.T.) WHEN ! EMPTY(mdata_ini)
        @ lc+12,cc+38 GET mespaco  PICT '99' VALID IF(mespaco<1,.F.,.T.) WHEN mcod_forn = 0
        @ lc+13,cc+39 GET mlinhas  PICT '9'     // WHEN mcod_forn = 0
        @ lc+14,cc+39 GET mfila    PICT '9'  RANGE 1,2 WHEN mcod_forn = 0
        @ lc+15,cc+39 GET mqtd_etq PICT '99'
        @ lc+16,cc+39 GET mcod    PICT '@!'  VALID mcod $ 'S,N'
        @ lc+17,cc+39 GET mquantd PICT '99' WHEN ! EMPTY(mcod_forn)
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF

        IF ! imp_arq('ETQ_FORN.REL','R')
                LOOP
        ENDIF
        mcontador := 0
        IF EMPTY(mcod_forn)
                ****************
                SELE('forn');ORDSETFOCUS(VAL(mclassif))
                ****************
                GO TOP
                IF ! EMPTY(mcodigo)
                        WHILE STRZERO(mcodigo,5) <> forn->cod_forn
                                SKIP
                        ENDDO
                        SKIP
                ENDIF
                WHILE ! EOF()
                        IF ! EMPTY(mdata_ini)
                                IF forn->data_cad < mdata_ini .OR. forn->data_cad > mdata_fim
                                        SKIP
                                        LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mcodconta) .AND. mcodconta <> forn->tipo
                                SKIP
                                LOOP
                        ENDIF
                        AADD(m_etq,{forn->razao,forn->endereco,forn->bairro,forn->cidade,forn->uf,forn->cep,forn->cod_forn})
                        IF mfila > 1
                                IF LEN(m_etq) >= 2
                                        i := 0
                                        FOR i = 1 TO LEN(m_etq)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(m_etq[i,1])
                                                IF mcod = 'S'
                                                        DEVPOS(PROW(),PCOL());DEVOUT(' ('+m_etq[i,7]+')')
                                                ELSE
                                                        DEVPOS(PROW(),PCOL());DEVOUT('        ')
                                                ENDIF
                                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',m_etq[i+1,1]+' ('+m_etq[i+1,7]+')'))
                                                DEVPOS(PROW()+1,00);DEVOUT(m_etq[i,2])
                                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',m_etq[i+1,2]))
                                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_etq[i,3])+' - '+RTRIM(m_etq[i,4])+' - '+RTRIM(m_etq[i,5]))
                                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',RTRIM(m_etq[i+1,3])+' - '+RTRIM(m_etq[i+1,4])+' - '+RTRIM(m_etq[i+1,5])))
                                                DEVPOS(PROW()+1,00);DEVOUT('CEP: '+m_etq[i,6])
                                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ','CEP: '+m_etq[i+1,6]))
                                                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                                                i := i + 1
                                                IF mtipo_imp = 'J'
                                                        mcontador ++
                                                        mcontador ++
                                                        IF mcontador = mqtd_etq
                                                                mcontador := 0
                                                                EJECT
                                                        ENDIF
                                                ENDIF
                                        NEXT
                                        ASIZE(m_etq,0)
                                ENDIF
                                SKIP
                        ELSE
                                i := 0
                                FOR i = 1 TO LEN(m_etq)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(m_etq[i,1])
                                        IF mcod = 'S'
                                                DEVPOS(PROW(),PCOL());DEVOUT(' ('+m_etq[i,7]+')')
                                        ELSE
                                                DEVPOS(PROW(),PCOL());DEVOUT('        ')
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(m_etq[i,2])
                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_etq[i,3])+' - '+RTRIM(m_etq[i,4])+' - '+RTRIM(m_etq[i,5]))
                                        DEVPOS(PROW()+1,00);DEVOUT('CEP: '+m_etq[i,6])
                                        DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                                        IF mtipo_imp = 'J'
                                                mcontador ++
                                                mcontador ++
                                                IF mcontador = mqtd_etq
                                                        mcontador := 0
                                                        EJECT
                                                ENDIF
                                        ENDIF
                                NEXT
                                ASIZE(m_etq,0)
                                SKIP
                        ENDIF
                ENDDO
        ELSE
                IF mfila > 1
                        i := 0
                        FOR i = 1 TO mquantd
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(forn->razao)
                                IF mcod = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(' ('+forn->cod_forn+')')
                                ELSE
                                        DEVPOS(PROW(),PCOL());DEVOUT('        ')
                                ENDIF
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',m_etq[i+1,1]+' ('+forn->cod_forn+')'))
                                DEVPOS(PROW()+1,00);DEVOUT(forn->endereco)
                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',forn->endereco))
                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(forn->bairro)+' - '+RTRIM(forn->cidade)+' - '+RTRIM(forn->uf))
                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ',RTRIM(forn->bairro)+' - '+RTRIM(forn->cidade)+' - '+RTRIM(forn->uf)))
                                DEVPOS(PROW()+1,00);DEVOUT('CEP: '+forn->cep)
                                DEVPOS(PROW(),48+mespaco);DEVOUT(IF(i+1 > LEN(m_etq),' ','CEP: '+forn->cep))
                                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                                i := i + 1
                                IF mtipo_imp = 'J'
                                        mcontador ++
                                        mcontador ++
                                        IF mcontador = mqtd_etq
                                                mcontador := 0
                                                EJECT
                                        ENDIF
                                ENDIF
                        NEXT
                ELSE
                        i := 0
                        FOR i = 1 TO mquantd
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(forn->razao)
                                IF mcod = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(' ('+forn->cod_forn+')')
                                ELSE
                                        DEVPOS(PROW(),PCOL());DEVOUT('        ')
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(forn->endereco)
                                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(forn->bairro)+' - '+RTRIM(forn->cidade)+' - '+RTRIM(forn->uf))
                                DEVPOS(PROW()+1,00);DEVOUT('CEP: '+forn->cep)
                                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                        NEXT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        LOOP
                ENDIF
        ENDIF

        IF LEN(m_etq) > 0
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(m_etq[1,1])
                IF mcod = 'S'
                        DEVPOS(PROW(),PCOL());DEVOUT(' ('+m_etq[1,7]+')')
                ELSE
                        DEVPOS(PROW(),PCOL());DEVOUT('        ')
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_etq[1,2])
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_etq[1,3])+' - '+RTRIM(m_etq[1,4])+' - '+RTRIM(m_etq[1,5]))
                DEVPOS(PROW()+1,00);DEVOUT('CEP: '+m_etq[1,6])
                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                ASIZE(m_etq,0)
        ENDIF
        imprt(mtipo_imp,'N')
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETQ_FORN.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
***************************** F I M *******************************************
