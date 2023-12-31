*******************************
* MERCADORIAS EM FALTA
*******************************

FUNCTION sacpdflt
**************

LOCAL mprg:='SACPDFLT',;
      lci,cci,lba,cba,li,ci,lb,cb,opcao,marq,i,mtecla,m_posicao:={},;
      m_movimento:={},point,mqtd_falta:=0,mqtd_prod:=0,m_produto:={},nulo:='NULL'

PRIVATE mcod_merc,mcod_bc,mmerc

li := ci := 00
lb := 25
cb := 80

lci := cci := 00
lba := 04
cba := 79

IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
op_tela(03,05,28,85,'MERCADORIA EM FALTA','*')
WHILE .T.
        exibi_prg(mprg)
        ASIZE(m_movimento,0)
        mensagem('Aguarde um Momento OK !!!')
        mqtd_prod := 0
        AADD(m_movimento,'INCLUSAO DE PRODUTO NA LISTA DE FALTA')
        m_produto:={}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE data_falta IS NOT NULL OR data_falta = '  /  /  ' ORDER BY merc",,.t.,@m_produto)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_produto) > 0
                FOR i = 1 TO LEN(m_produto)
                        AADD(m_movimento,m_produto[i,8]+' '+m_produto[i,9]+' '+TRANSFORM(m_produto[i,56],'9,999.99')+' '+TRANSFORM(m_produto[i,97],'9,999.99')+' '+DTOC(m_produto[i,95])+' '+m_produto[i,96])
                        mqtd_prod ++
                NEXT
        ENDIF
        IF LEN(m_movimento) = 0
                atencao('Nao existe nenhum PRODUTO na Lista de Falta !!!')
                AADD(m_movimento,SPACE(60))
                AADD(m_posicao,0)
                mqtd_prod := 0
        ENDIF
        @ li+1,ci TO li+1,cb
        setcor(3)
        DEVPOS(li,ci+1);DEVOUT(' Cod.')
        DEVPOS(li,ci+8);DEVOUT('Descricao')
        DEVPOS(li,ci+48);DEVOUT('   Saldo')
        DEVPOS(li,ci+57);DEVOUT(' Quantd.')
        DEVPOS(li,ci+66);DEVOUT('Dt.Falta')
        DEVPOS(li,ci+75);DEVOUT('Cod.')
        @ lb-1,0 TO lb-1,100
        DEVPOS(lb,ci+1);DEVOUT('Quantidade de Produtos: '+TRANSFORM(mqtd_prod,'999,999')+' ')
        setcor(1)
        WHILE .T.
                setcor(3)
                @ lb-1,0 TO lb-1,100
                DEVPOS(lb,ci+1);DEVOUT('Quantidade de Produtos: '+TRANSFORM(mqtd_prod,'999,999')+' ')
                setcor(1)
                limpa(li+2,ci+1,lb-2,cb-1)
                CLEAR TYPEAHEAD
                mensagem("<ESC> Retorna  -  <ENTER> p/Resumo" )
                setcor(10);point := ACHOICE(li+2,ci+1,lb-2,cb-2,m_movimento);setcor(1)

                DO CASE
                        CASE LASTKEY()=27
                                wvw_lclosewindow()
                                RETURN NIL
                        CASE LASTKEY() = 13
                                IF m_movimento[point] = 'INCLUSAO DE PRODUTO NA LISTA DE FALTA'
                                        mmerc := SPACE(40)
                                        mcod_bc := SPACE(29)
                                        mcod_merc = 0
                                        op_tela(10,05,14,85,' Inclusao de Produto na Lista de Faltas ','*')
                                        DEVPOS(lci+1,cci+1);DEVOUT(' Cod.')
                                        DEVPOS(lci+1,cci+8);DEVOUT('Descricao')
                                        DEVPOS(lci+1,cci+48);DEVOUT('   Saldo')
                                        DEVPOS(lci+1,cci+57);DEVOUT(' Quantd.')
                                        DEVPOS(lci+1,cci+66);DEVOUT('Dt.Falta')
                                        DEVPOS(lci+1,cci+75);DEVOUT('Cod.')
                                        @ lci+2,cci+1 TO lci+2,cba-1
                                        setcor(1)
                                        @ lci+3,cci+1 GET mcod_bc PICT '@!'     //VALID lim_get() WHEN men_get(lba-03,cci+17,'Informe o Cod.do produto <ENTER>descricao <F4>pesquisar <ALT+A>Alterar Produto')
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF ! EMPTY(mcod_bc)
                                                IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                                        *************
                                                        SELE('merc');ORDSETFOCUS(6)
                                                        *************
                                                        IF ! merc->(DBSEEK(mcod_bc))
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(8)
                                                                GO TOP
                                                                *************
                                                                IF ! merc->(DBSEEK(SUBSTR(mcod_bc,1,10)))
                                                                        atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                                        wvw_lclosewindow()
                                                                        LOOP
                                                                ENDIF
                                                        ENDIF
                                                        mcod_merc := VAL(mcod_bc)
                                                ELSE
                                                        mcod_merc := VAL(mcod_bc)
                                                        *************
                                                        SELE('merc');ORDSETFOCUS(1)
                                                        *************
                                                        IF ! merc->(DBSEEK(mcod_merc))
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(1)
                                                                *************
                                                                atencao('Codigo da mercadoria nao cadastrado')
                                                                wvw_lclosewindow()
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ELSE
                                                IF(m_set[1,93] <> 'A',f4_merc(,,'1',0),f4_merc1(,,'1',0))
                                                //f4_merc(,,'1',0)
                                                IF LASTKEY() = 27
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF ! EMPTY(merc->data_falta)
                                                atencao('Este Produto ja estar na lista de Faltas deste de '+DTOC(merc->data_falta)+' por '+merc->cod_falta)
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci+3,cci+1);DEVOUT(merc->cod_merc)
                                        DEVPOS(lci+3,cci+8);DEVOUT(merc->merc)
                                        DEVPOS(lci+3,cci+48);DEVOUT(TRANSFORM(merc->saldo_mer,'9,999.99'))
                                        DEVPOS(lci+3,cci+66);DEVOUT(mdata_sis)
                                        DEVPOS(lci+3,cci+75);DEVOUT(cod_operado)
                                        setcor(1)
                                        mqtd_falta := 0
                                        @ lci+3,cci+57 GET mqtd_falta PICT '9,999.99'
                                        READ
                                        opcao := op_simnao('S','Confirma a Inclusao deste PRODUTO da Lista:')
                                        IF opcao = 'N'
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        BLOQREG()
                                        merc->data_falta := mdata_sis
                                        merc->cod_falta  := cod_operado
                                        merc->qtd_falta  := mqtd_falta
                                        DBCOMMIT()
                                        DBUNLOCK()
                                        ASIZE(m_movimento,0)
                                        ASIZE(m_posicao,0)
                                        mensagem('Aguarde um Momento OK !!!')

                                        mqtd_prod := 0
                                        AADD(m_movimento,'INCLUSAO DE PRODUTO NA LISTA DE FALTA')
                                        m_produto:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE data_falta IS NOT NULL OR data_falta = '  /  /  ' ORDER BY merc",,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_produto) > 0
                                                FOR i = 1 TO LEN(m_produto)
                                                        AADD(m_movimento,m_produto[i,8]+' '+m_produto[i,9]+' '+TRANSFORM(m_produto[i,56],'9,999.99')+' '+TRANSFORM(m_produto[i,97],'9,999.99')+' '+DTOC(m_produto[i,95])+' '+m_produto[i,96])
                                                        mqtd_prod ++
                                                NEXT
                                        ENDIF
/*
                                        WHILE ! EOF()
                                                IF EMPTY(merc->data_falta)
                                                        SKIP
                                                        LOOP
                                                ENDIF
                                                AADD(m_movimento,merc->cod_merc+' '+merc->merc+' '+TRANSFORM(merc->saldo_mer,'9,999.99')+' '+TRANSFORM(merc->qtd_falta,'9,999.99')+' '+DTOC(merc->data_falta)+' '+merc->cod_falta)
                                                AADD(m_posicao,RECNO())
                                                mqtd_prod ++
                                                SKIP
                                        ENDDO
*/
                                        wvw_lclosewindow()
                                        LOOP

                                ELSE
                                        m_produto:={}
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(SUBSTR(m_movimento[point],1,5)),,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_produto) = 0
                                                atencao('Nao foi possivel encontrar este PRODUTO, informar ao Gerente...')
                                                LOOP
                                        ENDIF
                                        //GO m_posicao[point]
                                        opcao := mensagem1('Deseja [A]lterar ou [R]etirar','A','A,R')
                                        IF opcao = 'R'
                                                op_tela(10,05,14,85,' Retirar Produto da Lista de Faltas ','*')
                                        ELSE
                                                op_tela(10,05,14,85,' Alterar Produto da Lista de Faltas ','*')
                                        ENDIF
                                        DEVPOS(lci+1,cci+1);DEVOUT(' Cod.')
                                        DEVPOS(lci+1,cci+8);DEVOUT('Descricao')
                                        DEVPOS(lci+1,cci+48);DEVOUT('   Saldo')
                                        DEVPOS(lci+1,cci+57);DEVOUT(' Quantd.')
                                        DEVPOS(lci+1,cci+66);DEVOUT('Dt.Falta')
                                        DEVPOS(lci+1,cci+75);DEVOUT('Cod.')
                                        @ lci+2,cci+1 TO lci+2,cba-1
                                        setcor(3)
                                        DEVPOS(lci+3,cci+1);DEVOUT(m_movimento[point])
                                        setcor(1)
                                        IF opcao = 'A'
                                                mqtd_falta := m_produto[1,97]
                                                @ lci+3,cci+57 GET mqtd_falta PICT '9,999.99'
                                                READ
                                                opcao := op_simnao('S','Confirma a Alteracao deste PRODUTO da Lista:')
                                                IF opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF

                                                sr_getconnection():exec("UPDATE sacmerc SET cod_falta  = "+sr_cdbvalue(cod_operado)+",qtd_falta = "+sr_cdbvalue(mqtd_falta)+" WHERE cod_merc = "+sr_cdbvalue(m_produto[1,8]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ELSE
                                                opcao := op_simnao('N','Confirma a Retirada deste PRODUTO da Lista:')
                                                IF opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                sr_getconnection():exec("UPDATE sacmerc SET cod_falta  = "+sr_cdbvalue(cod_operado)+",qtd_falta = "+sr_cdbvalue(0)+",data_falta = "+nulo+" WHERE cod_merc = "+sr_cdbvalue(m_produto[1,8]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        wvw_lclosewindow()
                                        ASIZE(m_movimento,0)
                                        ASIZE(m_posicao,0)
                                        mensagem('Aguarde um Momento OK !!!')
                                        AADD(m_movimento,'INCLUSAO DE PRODUTO NA LISTA DE FALTA')
                                        m_produto:={}
                                        mqtd_prod := 0
                                        sr_getconnection():exec("SELECT * FROM sacmerc WHERE data_falta IS NOT NULL OR data_falta = '  /  /  ' ORDER BY merc",,.t.,@m_produto)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(m_produto) > 0
                                                FOR i = 1 TO LEN(m_produto)
                                                        AADD(m_movimento,m_produto[i,8]+' '+m_produto[i,9]+' '+TRANSFORM(m_produto[i,56],'9,999.99')+' '+TRANSFORM(m_produto[i,97],'9,999.99')+' '+DTOC(m_produto[i,95])+' '+m_produto[i,96])
                                                        mqtd_prod ++
                                                NEXT
                                        ENDIF
                                        IF LEN(m_movimento) = 0
                                                AADD(m_movimento,SPACE(60))
                                                AADD(m_posicao,0)
                                                mqtd_prod := 0
                                                EXIT
                                        ENDIF
                                        LOOP
                                ENDIF
                ENDCASE
        ENDDO
ENDDO
RETURN NIL

