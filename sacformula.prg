*******************************************************
* FUNCAO P/DEVOLUCAO DE MERCADORIAS
*******************************************************
FUNCTION sacformula(mno)
******************
LOCAL mprg:='SACFORMULA',;
      lci,cci,lba,cba,tela_sai,tela_ent,mquantd,mvlr_merc,mtotal,;
      lci_ent,cci_ent,lba_ent,cba_ent,;
      I,opcao,mmerc,li,ci,lb,cb,i_ent:=0,mtitulo:='FORMULA DE PRODUTO',c_merc:={},c_formula:={}

PRIVATE cons_prod:={},cons_merc:={},mcod_merc,mcod_barra,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := 00
cci := 15
lba := 02
cba := 60

lci_ent := 04
cci_ent := 00
lba_ent := 28
cba_ent := 79

op_tela(00,05,30,85,mtitulo)
WHILE .T.
        limpa(00,00,30,100)
        //botao(lci,cci,lba,cba)
        botao(lci_ent,cci_ent,lba_ent,cba_ent)
        DEVPOS(lci_ent+1,cci_ent+1);DEVOUT(' Cod.    Descricao                               Quantd')
        @ lci_ent+2,cci_ent TO lci_ent+2,cba_ent
        setcor(1)
        exibi_prg(mprg)
        i := 0
        mcod_barra := SPACE(14)
        mcod_merc := mquantd := 0
        mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')
        DEVPOS(01,01);DEVOUT('Codigo:')
        @ 01,09 GET mcod_merc PICT '99999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cons_merc :={}
        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
        sr_getconnection():exec(ccomm,,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao foi possivel encontrar este produto...')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(01,15);DEVOUT(cons_merc[1,9])
        setcor(1)
        cons_formula :={}
        cComm  := "SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
        sr_getconnection():exec(ccomm,,.t.,@cons_formula)
        sr_getconnection():exec('COMMIT',,.f.)
        i_ent:=2
        IF LEN(cons_formula) > 0
                i:=0
                FOR i = 1 TO LEN(cons_formula)
                        c_merc :={}
                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_formula[i,2])
                        sr_getconnection():exec(ccomm,,.t.,@c_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(c_merc) = 0
                                atencao('Nao foi possivel encontrar este produto...')
                                LOOP
                        ENDIF
                        IF i_ent = 20
                                  SCROLL(lci_ent+i_ent,cci_ent+1,lba_ent-2,cba_ent-1,1)
                        ELSE
                                i_ent ++
                        ENDIF
                        setcor(3)
                        DEVPOS(lci_ent+i_ent,cci_ent+01);DEVOUT(cons_formula[i,2]+' '+c_merc[1,9]+' '+TRANSFORM(cons_formula[i,3],ALLTRIM(m_set[1,99])))
                        setcor(1)
                NEXT
        ENDIF
        WHILE .T.
                setcor(3)
                botao(29,00,30,79)
                setcor(1)
                DEVPOS(29,01);DEVOUT('Cod.   Descricao')
                DEVPOS(29,52);DEVOUT('Qtd.')
                mcod_barra := SPACE(14)
                mcod_merc := mquantd := mvlr_merc := ;
                mtotal := 0
                mensagem('Digite o Codigo da Mercadoria - <ESC>Sair')

                @ 30,01 GET mcod_barra PICT '@!'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF

                IF ! EMPTY(mcod_barra)
                        cons_prod :={}
                        IF LEN(ALLTRIM(mcod_barra)) > 5
                                cComm  := "SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_barr)
                                sr_getconnection():exec(ccomm,,.t.,@cons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_prod) = 0
                                        atencao('Nao foi encontrado nenhum produto com este Codigo de Barra')
                                        LOOP
                                ENDIF
                        ELSE
                                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_barra),5))
                                sr_getconnection():exec(ccomm,,.t.,@cons_prod)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(cons_prod) = 0
                                        atencao('Nao foi encontrado nenhum produto com este Codigo')
                                        LOOP
                                ENDIF
                        ENDIF
                        mcod_merc := cons_prod[1,8]
                ELSE
                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
                        sr_getconnection():exec(ccomm,,.t.,@cons_prod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_prod) = 0
                                atencao('Nao foi encontrado nenhum produto com este Codigo')
                                LOOP
                        ENDIF
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                setcor(3)
                DEVPOS(30,01);DEVOUT('             ')
                DEVPOS(30,01);DEVOUT(cons_prod[1,8])
                DEVPOS(30,07);DEVOUT(cons_prod[1,9])
                setcor(1)
                c_formula :={}
                cComm  := "SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(cons_merc[1,8])+" AND cod_merc1 = "+sr_cdbvalue(cons_prod[1,8])
                sr_getconnection():exec(ccomm,,.t.,@c_formula)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(c_formula) > 0
                        mquantd := c_formula[1,3]
                        @ 30,48 GET mquantd PICT ALLTRIM(m_set[1,99])   //VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF
                        IF mquantd = 0
                                opcao := op_simnao('N','Confirma EXCLUSAO da Produto [s/N]:')
                                IF opcao = 'N';LOOP;ENDIF
                                sr_getconnection():exec('DELETE FROM formula  WHERE cod_merc = '+sr_cdbvalue(cons_merc[1,8])+' AND cod_merc1 = '+sr_cdbvalue(cons_prod[1,8]),,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ELSE
                                opcao := op_simnao('S','Confirma Alteracao da Produto [S/n]:')
                                IF opcao = 'N';LOOP;ENDIF
                                sr_getconnection():exec('UPDATE formula SET quantidade = '+sr_cdbvalue(mquantd)+' WHERE cod_merc = '+sr_cdbvalue(cons_merc[1,8])+' AND cod_merc1 = '+sr_cdbvalue(cons_prod[1,8]),,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                        limpa(lci_ent+3,cci_ent+1,lba_ent-1,cba_ent-1)
                        cons_formula :={}
                        cComm  := "SELECT * FROM formula WHERE cod_merc = "+sr_cdbvalue(cons_merc[1,8])
                        sr_getconnection():exec(ccomm,,.t.,@cons_formula)
                        sr_getconnection():exec('COMMIT',,.f.)
                        i_ent:=2
                        IF LEN(cons_formula) > 0
                                i:=0
                                FOR i = 1 TO LEN(cons_formula)
                                        c_merc :={}
                                        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(cons_formula[i,2])
                                        sr_getconnection():exec(ccomm,,.t.,@c_merc)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(c_merc) = 0
                                                atencao('Nao foi possivel encontrar este produto...')
                                                LOOP
                                        ENDIF
                                        IF i_ent = 20
                                                  SCROLL(lci_ent+i_ent,cci_ent+1,lba_ent-2,cba_ent-1,1)
                                        ELSE
                                                i_ent ++
                                        ENDIF
                                        setcor(3)
                                        DEVPOS(lci_ent+i_ent,cci_ent+01);DEVOUT(cons_formula[i,2]+' '+c_merc[1,9]+' '+TRANSFORM(cons_formula[i,3],ALLTRIM(m_set[1,99])))
                                        setcor(1)
                                NEXT
                        ENDIF
                        LOOP
                ENDIF
                mcod_merc := cons_prod[1,8]
                mmerc := cons_prod[1,9]
                @ 30,48 GET mquantd PICT ALLTRIM(m_set[1,99]) VALID IF(EMPTY(mquantd),.F.,.T.)
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                opcao := op_simnao('S','Confirma Inclusao da Mercadoria [S/n]:')
                IF opcao = 'N';LOOP;ENDIF
                sr_getconnection():exec('INSERT INTO formula (cod_merc,cod_merc1,quantidade,SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(cons_merc[1,8])+','+; //1
                        sr_cdbvalue(mcod_merc)+','+; //2
                        sr_cdbvalue(mquantd)+','+; //3
                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                IF i_ent = 20
                        SCROLL(lci_ent+i_ent,cci_ent+1,lba_ent-2,cba_ent-1,1)
                ELSE
                        i_ent++
                ENDIF
                setcor(3)
                DEVPOS(lci_ent+i_ent,cci_ent+01);DEVOUT(cons_prod[1,8]+' '+cons_prod[1,9]+' '+TRANSFORM(mquantd,ALLTRIM(m_set[1,99])))
                setcor(1)
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ******************************************
