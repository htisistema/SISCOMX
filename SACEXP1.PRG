MEMVAR getlist,mdata_sis,cod_operado,nivel_acess,memp_resa,mend_firm,mcid_firm,mfone_firm
***************************************************
*** EXPEDICAO DE PEDIDOS
************************
FUNCTION sacexp1()
***************
LOCAL MPRG:='SACEXP1',opcao,mpoint,;
      lci,cci,lba,cba,li,ci,la,ca,i:=0,mat_dup:={},traco,lin1,lin2,mtipo_rec:='E',mquantd:=1,x:=0,mop_imp:=' '

PRIVATE m_pedido:={},m_pos:={},m_pag:={},m_cax:={},mcod_cli,cons_dupr:={},mnum_ped:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'EXPEDICAO DE PEDIDOS','123456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

op_tela(00,01,33,100,' EXPEDICAO DE PEDIDO ')

lci := cci := 00
lba := 08
cba := 100

li := 05
ci := 01
la := 32
ca := 98
lin1 := '          Recebi(emos) da(e) '
lin2 := ' a(s) Mercadoria(s) ABAIXO Relacionadas: '
traco := REPLI('-',80)

WHILE .T.
        mtipo_imp := m_indiv[1,18]
        mobs1:= SPACE(60)
        mnum_ped := 0
        limpa(00,00,33,100)
        Mensagem('Digite o Numero do Pedido para Expedir. [ESC] Abandona.')
        DEVPOS(lci+1,cci+1);DEVOUT('Digite o No.Pedido...:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do Cliente....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do Vendedor...:')
        @ lci+4,cci TO lci+4,cba
        botao(li,ci,la,ca)
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('Cod.')
        DEVPOS(li+1,ci+06);DEVOUT('Produto')
        DEVPOS(li+1,ci+51);DEVOUT('Quantidade')
        DEVPOS(li+1,COL()+1);DEVOUT('  Vlr.Unit')
        DEVPOS(li+1,COL()+1);DEVOUT('     Total')
        DEVPOS(li+1,COL()+1);DEVOUT('Dat.Expe')
        DEVPOS(li+1,COL()+1);DEVOUT('Ope')
        @ li+2,ci TO li+2,ca
        @ la-2,ci TO la-2,ca
        setcor(1)
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Item:                                   Total R$:')
        @ lci+1,cci+24 GET mnum_ped PICT '999999' VALID IF(EMPTY(mnum_ped),.F.,.T.)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        ccomm := ccomm + " ORDER BY pnum_ped,pcod_merc"
        cons_ped:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_ped) = 0
                atencao('Nao existe este pedido em nossos arquivos')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+2,cci+24);DEVOUT(cons_ped[1,23])
        cComm  := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_ped[1,23])
        cons_:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_) > 0
                DEVPOS(lci+2,COL()+1);DEVOUT('- '+cons_[1,3])
        ELSE
                DEVPOS(lci+2,COL()+1);DEVOUT('- Cliente nao Encontrado')
        ENDIF
        DEVPOS(lci+3,cci+24);DEVOUT(cons_ped[1,32]+' - '+cons_ped[1,33])
        setcor(1)

        ASIZE(m_pedido,0)
        ASIZE(m_pos,0)
        mtot_quantd := mtotal := i := 0
        FOR i = 1 TO LEN(cons_ped)
                AADD(m_pedido,cons_ped[i,6]+' '+cons_ped[i,7]+' '+cons_ped[i,8]+' '+TRANSFORM(cons_ped[i,14],'999,999.99')+' '+TRANSFORM(cons_ped[i,18],'999,999.99')+' '+TRANSFORM(cons_ped[i,14] * cons_ped[i,18],'999,999.99')+' '+DTOC(cons_ped[i,69])+' '+cons_ped[i,68]+'                                 ')
                AADD(m_pos,{cons_ped[i,111],' ',cons_ped[i,14],cons_ped[i,18],cons_ped[i,69]})
       NEXT
        IF LEN(m_pedido) = 0
                atencao('Nao existe documento neste periodo')
                LOOP
        ENDIF
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        //opcao := op_simnao('N','Deseja marcar todas os Documentos: ')
        //IF opcao = 'S'
                i := 0
                FOR i = 1 TO LEN(m_pedido)
                        m_pedido[i] := SUBSTR(m_pedido[i],1,96)+' X'
                        m_pos[i,2] := 'X'
                        mtot_quantd := mtot_quantd + cons_ped[i,14]
                        mtotal := mtotal + (cons_ped[i,14]*cons_ped[i,18])
                NEXT
        //ENDIF
        mpoint := 0
        WHILE .T.
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mtot_quantd,'99999'))
                DEVPOS(la-1,ci+58);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                setcor(1)
                //setcor(10);mpoint := ACHOICE(li+3,ci+1,la-3,ca-1,m_pedido,,,mponto+1);setcor(1)
                setcor(10);mpoint := ACHOICE(li+3,ci,la-3,ca,m_pedido,,,mponto+1);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF ! EMPTY(m_pos[mpoint,5])
                                        LOOP
                                ELSEIF m_pos[mpoint,2] = 'X'
                                        m_pedido[mpoint] := SUBSTR(m_pedido[mpoint],1,96)+'  '
                                        m_pos[mpoint,2] := ' '
                                        mtot_quantd --
                                        mtotal := mtotal - m_pos[mpoint,3]
                                ELSE
                                        m_pedido[mpoint] := SUBSTR(m_pedido[mpoint],1,96)+' X'
                                        m_pos[mpoint,2] := 'X'
                                        mtot_quantd ++
                                        mtotal := mtotal + m_pos[mpoint,3]
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        i := 0
        FOR i = 1 TO LEN(m_pedido)
                IF m_pos[i,2] = 'X'
                        EXIT
                ENDIF
        NEXT
        IF i > LEN(m_pedido) .OR. m_pos[i,2] <> 'X'
                atencao('Nao tem nenhum Documento marcado')
                LOOP
        ENDIF

        opcao := op_simnao('N','Confirma os DADOS ? [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mtot_quantd:= mtotal := 0
        mensagem('Aguarde o final do processo...')
        i := 0
        FOR i = 1 TO LEN(m_pedido)
                prog_imp(i)
                IF m_pos[i,2] <> 'X' .OR. ! EMPTY(cons_ped[i,69])
                        LOOP
                ENDIF
                sr_getconnection():exec("UPDATE sacped_s SET pexp_dat = " + sr_cdbvalue(mdata_sis)  +;
                        ",pentreg = '*'"+;
                        ",pexp_por = " + sr_cdbvalue(cod_operado)+;
                        ",pexpedi  = '*'"+;
                        " WHERE sr_recno = " + sr_cdbvalue(m_pos[i,1]),,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pexp_dat IS NOT NULL"
        ccomm := ccomm + " ORDER BY pnum_ped,pcod_merc"
        cons_ped:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        mop_imp := 'S'
        IF LEN(cons_ped) > 0
                mop_imp := op_simnao('N','Deseja Imprimir os produtos que ja foram entregue:')
        ENDIF
        cComm  := "SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))
        ccomm := ccomm + " ORDER BY pnum_ped,pcod_merc"
        cons_ped:={}
        sr_getconnection():exec(ccomm,,.t.,@cons_ped)
        sr_getconnection():exec('COMMIT',,.f.)
        rrecibo := lin1+RTRIM(RTRIM(m_set[1,129]))+lin2
        mquantd := 1
        op_tela(10,10,13,80,' OPCAO DE IMPRESSAO ')
        DEVPOS(00,01);DEVOUT('Tipo [E]ntrega Deposito [P]ronta entrega:')
        DEVPOS(01,01);DEVOUT('Quantidade de Copias....................:')
        @ 00,43 GET mtipo_rec PICT '@!' VALID mtipo_rec $ 'E,P'
        @ 01,43 GET mquantd PICT '99'
        READ
        wvw_lclosewindow()
        IF LASTKEY() = 27
                LOOP
        ENDIF
        i:=0
        IF ! imp_arq('ENTREGA.REL','R')
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,129]))
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT('End.: '+RTRIM(m_set[1,132])+' - '+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+m_set[1,136])
                DEVPOS(PROW()+1,00);DEVOUT('Inscr.: '+m_set[1,128]+' / C.G.C.: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(SUBSTR(m_set[1,123],1,14),'@@R 99.999.999/9999-99')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(223),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('PEDIDO No.: '+STRZERO(mnum_ped,6),80))
                DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+STR(cons_ped[1,23],5))
                IF LEN(cons_) > 0
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- '+cons_[1,3])
                        DEVPOS(PROW()+1,0);DEVOUT('Endereco: '+ALLTRIM(cons_[1,21])+', '+ALLTRIM(cons_[1,136])+' '+cons_[1,136])
                        DEVPOS(PROW()+1,0);DEVOUT('Bairro..: '+ALLTRIM(cons_[1,22])+' - Cidade: '+ALLTRIM(cons_[1,24])+' - UF: '+cons_[1,25])
                        DEVPOS(PROW()+1,0);DEVOUT('CEP: '+cons_[1,26]+' - Telefone: '+ALLTRIM(cons_[1,29])+' - '+ALLTRIM(cons_[1,30])+' - '+ALLTRIM(cons_[1,31]))
                        DEVPOS(PROW()+1,0);DEVOUT('Rota: '+cons_[1,28])
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))

                ELSE
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('- Cliente nao Encontrado')
                ENDIF

                DEVPOS(PROW()+1,00);DEVOUT('Emissao: '+DTOC(mdata_sis))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Vendedor: '+cons_ped[1,32]+' - '+cons_ped[1,33])
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Operador: '+cons_ped[1,34])
                DEVPOS(PROW()+1,00);DEVOUT(REPLI(CHR(223),80))
                DEVPOS(PROW()+1,00);DEVOUT('')
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),10);DEVOUT('RECIBO DE ENTREGA')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,01);DEVOUT(' ')

                linhas := MLCOUNT(rrecibo,70)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,70,linha,,10)
                        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
                NEXT
                DEVPOS(PROW()+1,00);DEVOUT(traco)
                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                DEVPOS(PROW(),06);DEVOUT('Produto')
                DEVPOS(PROW(),51);DEVOUT('Quantidade')
                DEVPOS(PROW(),PCOL()+3);DEVOUT('Dat.Exp.')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Ope.')
                DEVPOS(PROW()+1,00);DEVOUT(traco)
                //DEVPOS(li+1,COL()+1);DEVOUT('Ope')
                x := 0
                FOR x = 1 TO LEN(m_pedido)
                        IF m_pos[x,2] <> 'X' .OR. IF(mop_imp = 'N' .AND. cons_ped[x,69] <> mdata_sis,.T.,.F.)
                                LOOP
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(cons_ped[x,6]+' '+cons_ped[x,7]+' '+cons_ped[x,8]+' '+TRANSFORM(cons_ped[x,14],'999,999.99')+'   '+DTOC(cons_ped[x,69])+'  '+cons_ped[x,68])
                NEXT
                IF ! EMPTY(cons_ped[1,86])
                        DEVPOS(PROW()+2,00);DEVOUT('OBS.: '+cons_ped[1,86])
                        IF ! EMPTY(cons_ped[1,87])
                                DEVPOS(PROW()+1,00);DEVOUT('      '+cons_ped[1,87])
                        ENDIF
                        IF ! EMPTY(cons_ped[1,88])
                                DEVPOS(PROW()+1,00);DEVOUT('      '+cons_ped[1,88])
                        ENDIF
                        IF ! EMPTY(cons_ped[1,89])
                                DEVPOS(PROW()+1,00);DEVOUT('      '+cons_ped[1,89])
                        ENDIF
                ENDIF
                DEVPOS(PROW()+3,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(cons_[1,3]))+2),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_[1,3]),80))
                DEVPOS(PROW()+2,00);DEVOUT(traco)
                DEVPOS(PROW()+1,00);DEVOUT('')
                IF mtipo_rec = 'E'
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),01);DEVOUT('CONTROLE DE QUALIDADE ENTREGA DEPOSITO')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,00);DEVOUT('* AO RECEBER A MERCADORIA CONFIRA A MESMA E SO DEPOIS ASSINE A NOTA;')
                        DEVPOS(PROW()+2,00);DEVOUT('* HAVENDO ALGUMA AVARIA NO TRANSPORTE, INFORMAR IMEDIATAMENTE AO ENTREGADOR PARA')
                        DEVPOS(PROW()+1,00);DEVOUT('  PROVIDENCIAS;')
                        DEVPOS(PROW()+2,00);DEVOUT('* NAO TROCAMOS, E NAO ACEITAMOS DEVOLUCOES POR DANOS DE TRANSPORTE E OUTROS, APOS')
                        DEVPOS(PROW()+2,00);DEVOUT('* ASSIST�NCIA DE SEGUNDA A SEXTA DAS 8 AS 17H  EM NOSSO DEP�SITO COM PRAZO MAXIMO')
                        DEVPOS(PROW()+1,00);DEVOUT('  PARA TROCA 24 HORAS COM CUSTO DE COLETA E FRETE.')
                        DEVPOS(PROW()+1,00);DEVOUT('  ASSINAR A NOTA.')
                ELSEIF mtipo_rec = 'P'
                        imprt(mtipo_imp,'E')
                        DEVPOS(PROW(),01);DEVOUT('CONTROLE DE QUALIDADE PRONTA ENTREGA')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,00);DEVOUT('* AO RECEBER A MERCADORIA SEMPRE CONFIRA ANTES DE LEVAR;')
                        DEVPOS(PROW()+2,00);DEVOUT('* HAVENDO ALGUMA AVARIA NO TRANSPORTE, NAO NOS RESPONSABILIZAREMOS;')
                        DEVPOS(PROW()+2,00);DEVOUT('* NAO TROCAMOS, E NAO ACEITAMOS DEVOLUCOES POR DANOS DE TRANSPORTE.')
                        DEVPOS(PROW()+2,00);DEVOUT('* ASSIST�NCIA DE SEGUNDA A SEXTA DAS 8 AS 17H  EM NOSSO DEP�SITO COM PRAZO MAXIMO')
                        DEVPOS(PROW()+1,00);DEVOUT('  PARA TROCA 24 HORAS COM CUSTO DE COLETA E FRETE')
                ENDIF
                DEVPOS(PROW()+3,00);DEVOUT(PADC('Data do Recebimento: ...../...../.....',80))
                DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN(RTRIM(cons_[1,3]))+2),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(cons_[1,3]),80))
                DEVPOS(PROW()+3,00);DEVOUT(PADL(REPLI('-',30),80))
                DEVPOS(PROW()+1,00);DEVOUT(PADL('      Visto de Liberacao      ',80))
                EJECT
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ENTREGA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL

********************************* F I M ********************************
