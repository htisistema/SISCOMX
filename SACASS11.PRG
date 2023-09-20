**********************
* ALTERACAO DE ASSISTENCIAS
**********************
FUNCTION sacass11(mtipo,mtp)
****************
LOCAL mprg:='SACASS11',mtitulo,;
      lci,cci,lba,cba,opcao,mquantd,mmotivo,mdata,m_ass:={},m_pos:={},;
      li:=00,ci:=00,la:=15,ca:=70,point:=0,mcont_doc:=0,mcont_pro:=0,;
      mcopia:=' ',mmotivo1,mmotivo2

PRIVATE mcod_cli,mcod_merc,mcod_ven,mmerc,malias
malias := 'ass'
IF mtipo = 'A'
        IF mtp = NIL
                mtitulo := ' ALTERACAO DE ASSISTENCIA MERCADORIA '
                IF ! ver_nivel(mprg+mtipo,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSE
                mtitulo := ' ALTERACAO DA SOLICITACAO DE PRODUTOS '
                IF ! ver_nivel(mprg+mtipo+mtp,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                malias := 'solpr'
        ENDIF
ELSEIF mtipo = 'E'
        IF mtp = NIL
                mtitulo := ' EXCLUSAO DE ASSISTENCIA MERCADORIA '
                IF ! ver_nivel(mprg+mtipo,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSE
                mtitulo := ' EXCLUSAO DA SOLICITACAO DE PRODUTOS '
                IF ! ver_nivel(mprg+mtipo+mtp,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                malias := 'solpr'
        ENDIF
ELSEIF mtipo = 'B'
        IF mtp = NIL
                mtitulo := ' BAIXA DE ASSISTENCIA MERCADORIA '
                IF ! ver_nivel(mprg+mtipo,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSE
                mtitulo := ' BAIXA DA SOLICITACAO DE PRODUTOS '
                IF ! ver_nivel(mprg+mtipo+mtp,mtitulo,'15',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
                malias := 'solpr'
        ENDIF
ENDIF
**********************************************
IF ! AbriArq('sacsolpr','solpr');RETURN NIL;ENDIF
IF ! AbriArq('sacass','ass');RETURN NIL;ENDIF
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
**********************************************
lci := 00
cci := 00
lba := 09
cba := 70
mcod_cli  := 0
op_tela(10,10,21,70,mtitulo)

WHILE .T.
        mcod_merc := mquantd   := 0
        mmotivo := mmotivo1 := mmotivo2 := SPACE(50)
        mdata     := CTOD('  /  /  ')
        exibi_prg(mprg)
        limpa(00,00,30,100)
        DEVPOS(lci+1,cci+1);DEVOUT('Cod.Cliente..:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data.........:')
        DEVPOS(lci+3,cci+1);DEVOUT('Cod.Produto..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Quantidade...:')
        DEVPOS(lci+5,cci+1);DEVOUT('Cod.Vendedor.:')
        DEVPOS(lci+6,cci+1);DEVOUT('Motivo.......:')
        @ lci+1,cci+16 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+1,cci+22)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        **************************
        SELE(malias);ORDSETFOCUS(4)
        GO TOP
        **************************
        IF ! (malias)->(DBSEEK(STRZERO(mcod_cli,5)))
                atencao('Nao existe '+IF(mtp=NIL,'ASSISTENCIA','SOLICITACAO')+' deste CLIENTE')
                LOOP
        ENDIF
        mcont_doc := mcont_pro := 0
        ASIZE(m_ass,0)
        ASIZE(m_pos,0)
        WHILE STRZERO(mcod_cli,5) = (malias)->cod_cli .AND. EMPTY((malias)->data_baix) .AND. ! EOF()
                AADD(m_ass,' '+DTOC((malias)->data)+' '+(malias)->cod_pro+'-'+(malias)->produto+' '+TRANSFORM((malias)->quantd,'999,999.99'))
                AADD(m_pos,RECNO())
                mcont_pro := mcont_pro + (malias)->quantd
                mcont_doc ++
                SKIP
        ENDDO
        IF LEN(m_ass) = 0
                atencao('Nao tem nenhuma '+IF(mtp=NIL,'ASSISTENCIA','SOLICITACAO')+' deste Cliente')
                LOOP
        ENDIF
        op_tela(li,ci,la+2,ca)
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('  Data  ')
        DEVPOS(li+1,ci+11);DEVOUT('Produto')
        DEVPOS(li+1,ci+58);DEVOUT('Quantidade')
        @ li+2,ci+1 TO li+2,ca-1
        @ la-2,ci+1 TO la-2,ca-1
        DEVPOS(la-1,ci+1);DEVOUT('Itens.....:')
        DEVPOS(la-1,ci+24);DEVOUT('Total:')
        setcor(1)
        DEVPOS(la-1,ci+13);DEVOUT(STRZERO(mcont_doc,4))
        DEVPOS(la-1,ci+31);DEVOUT(TRANSFORM(mcont_pro,'999,999.99'))
        setcor(10);point := ACHOICE(li+3,ci+1,la-3,ca-1,m_ass,,,point);setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        wvw_lclosewindow()
                        LOOP
                CASE LASTKEY() = 13
                        wvw_lclosewindow()
                        GO m_pos[point]
        ENDCASE

        setcor(3)
        DEVPOS(lci+2,cci+16);DEVOUT((malias)->data)
        DEVPOS(lci+3,cci+16);DEVOUT((malias)->cod_pro);ver_cod(VAL((malias)->cod_pro),lci+3,cci+22,.F.,0)
        mquantd := (malias)->quantd
        mmotivo := (malias)->motivo
        mmotivo1 := (malias)->motivo1
        mmotivo2 := (malias)->motivo2
        mcod_ven:= VAL((malias)->vendedor)
        mmerc   := (malias)->produto
        @ lci+3,cci+22 GET mmerc PICT '@!' WHEN mtipo = 'A' .AND. merc->livre_desc = 'S'
        @ lci+4,cci+16 GET mquantd PICT '999,999.999' VALID IF(EMPTY(mquantd),.F.,.T.) WHEN mtipo = 'A'
        @ lci+5,cci+16 GET mcod_ven VALID ven(mcod_ven,lci+5,cci+20) WHEN mtipo = 'A'
        @ lci+6,cci+16 GET mmotivo VALID IF(EMPTY(mmotivo),.F.,.T.) WHEN mtipo = 'A'
        @ lci+7,cci+16 GET mmotivo1 WHEN mtipo = 'A'
        @ lci+8,cci+16 GET mmotivo2 WHEN mtipo = 'A'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Operacao:')
        IF opcao ='N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        BLOQREG()
        IF mtipo = 'A'
                (malias)->produto  := mmerc
                (malias)->motivo   := mmotivo
                (malias)->motivo1  := mmotivo1
                (malias)->motivo2  := mmotivo2
                (malias)->quantd   := mquantd
                (malias)->vendedor := STRZERO(mcod_ven,3)
                (malias)->oper_incl:= cod_operado
                DBCOMMIT()
                DBUNLOCK()
                opcao := op_simnao('S','Deseja Imprimir a ASSISTENCIA:')
                IF opcao ='N' .OR. LASTKEY() = 27
                        LOOP
                ENDIF
                mcopia:= mensagem1('Quantidade de COPIAS [1,2,3]:','1','1,2,3')
                imp_ass((malias)->cod_pro,mmerc,mmotivo,mquantd,STRZERO(mcod_ven,3),VAL(mcopia),(malias)->data,TIME(),mmotivo1,mmotivo2)
                LOOP
        ELSEIF mtipo = 'E'
                DELE
        ELSEIF mtipo = 'B'
                sr_getconnection():exec('UPDATE '+IF(malias = 'ass','sacass','sacsolpr')+' SET oper_baix = ' + sr_cdbvalue(cod_operado)+',data_baix = '+ sr_cdbvalue(mdata_sis)+' WHERE data_baix IS NULL AND cod_cli = '+ sr_cdbvalue(STRZERO(mcod_cli,5))+' AND cod_pro = '+sr_cdbvalue((malias)->cod_pro)+' AND data = '+sr_cdbvalue((malias)->data)+' AND motivo = '+sr_cdbvalue((malias)->motivo),,.f.)
                IF (malias)->tipo_ass = 'E'
                        mquantd := (malias)->quantd
                        aret:={}
                        sr_getconnection():exec("SELECT saldo_mer FROM sacmerc WHERE cod_merc = "+sr_cdbvalue((malias)->cod_pro),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mlinha := aret[1,2]+aret[1,8]+aret[1,9]+aret[1,14]+STRZERO((aret[1,56] + mquantd)*1000,13)+STRZERO(iat(aret[1,46])*100,14)+aret[1,68]
                        sr_getconnection():exec("UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(aret[1,56] + mquantd )+",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1))+" WHERE cod_merc = "+sr_cdbvalue((malias)->cod_pro),,.f.)
                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                'processo,ent_sai,SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(DATE())+','+; //1
                                sr_cdbvalue(mdata_sis)+','+; //2
                                sr_cdbvalue(TIME())+','+; //3
                                sr_cdbvalue((malias)->cod_pro)+','+; //4
                                sr_cdbvalue(mquantd)+','+; //5
                                sr_cdbvalue(aret[1,56])+','+; //6
                                sr_cdbvalue(aret[1,56] + mquantd)+','+; //7
                                sr_cdbvalue(cod_operado)+','+; //8
                                sr_cdbvalue('SACASS11')+','+; //9
                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                sr_cdbvalue('ENTRADA PRODUTO P/ASSISTENCIA')+','+; //11
                                sr_cdbvalue('E')+','+; //11
                                sr_cdbvalue(' ')+')',,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                //(malias)->oper_baix:= cod_operado
                //(malias)->data_baix:= mdata_sis
        ENDIF
        DBCOMMIT()
        DBUNLOCK()
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************








