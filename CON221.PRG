MEMVAR getlist,mdata_sis,cod_operado,nivel_acess,memp_resa,mend_firm,mcid_firm,mfone_firm
***************************************************
*** CON221.PRG: Baixa GERAL de Duplicatas (APAGAR)
***             AGRUPAMENTO DE DOCUMENTO
***             EMISSAO DE DOCUMENTO
***             EXCLUSAO DE DOCUMENTO
***************************************************
FUNCTION con221(cx,mtp)
***************
LOCAL MPRG:='CON221',;
      tela,lin,mvlpago,mdata1,mdata2,mdatapg,msele,morde,opcao,mbaixa,;
      mdias_atras:=0,mquantd_doc:=0,mtot_multa:=0,mtotal:=0,mpoint,mvlr_pg:=0,mresta:=0,;
      lba,cba,li,ci,la,ca,i:=0,mjuros:=0,mmulta:=0,;
      mtipo,mnumero,mduplicata,mvalor_dup,mcliente,mtip_for,mcod_c,;
      memissao,mcod_vend,mnum_ped,mbanco,mcomissao,mobs,mvenc,mcodven:=0,m_parcela:={},;
      mqtd_parc:=0,m_dias:={},mtela_dup,mno_dup,mdata_ini,;
      mobs_dup,mobs_dup1,mobs_dup2,mobs_dup3,;
      mpos_ini:=0,mtot_valor:=0,mTnum_banco:=0,mTagencia:=SPACE(8),;
      mTc_c:=SPACE(13),mTduplicata:=SPACE(12),mTemissao,mTvenc:=CTOD("  /  /  "),;
      mTvalor:=0,mTbanco:='C',mTcorrente:=SPACE(35),mTobs,mdesc_cart:=0,;
      mprazo_cart:=0,mcartao:=SPACE(20),mat_dup:={},mcod_cartao,mvalor,mmenu:='',;
      mobs_b

PRIVATE m_dupp:={},m_pos:={},m_pag:={},m_cax:={},mcod_forn,mordem:=0,mcodigo_ban:=0,mtipo_doc:='  '

IF mtp = NIL
        IF ! ver_nivel(mprg,'CONTA A PAGAR (AGRUPAMENTO DE DOCUMENTOS)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mmenu :=' Agrupamento de DOCUMENTO (C.Apagar)'
ELSEIF mtp = 'E'
        IF ! ver_nivel(mprg+'E','CONTA A PAGAR (EXCLUSAO GERAL DE DOCUMENTOS)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mmenu :=' EXCLUSAO GERAL DE DOCUMENTO (C.Apagar)'
ELSE
        IF ! ver_nivel(mprg+'B','CONTA A PAGAR (BAIXA GERAL DE DOCUMENTOS)','156',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mmenu :=' BAIXA GERAL DE DOCUMENTO (C.Apagar)'
ENDIF
*------------------------------------------------------------------------------------
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
lba := 33
cba := 82

li := 08
ci := 02
la := 32
ca := 78

lin=1
mduplicata := SPACE(12)
*****************
SELE('dupp');ORDSETFOCUS(4)
*****************
msele := SELE()
morde := INDEXORD()
op_tela(00,00,33,90,mmenu)
CLEAR GETS
WHILE .T.
        limpa(00,00,35,100)
        exibi_prg(mprg)
        ASIZE(m_parcela,0)
        ASIZE(m_dias,0)
        ASIZE(m_dupp,0)
        ASIZE(m_pos,0)
        ASIZE(m_pag,0)
        ASIZE(m_cax,0)
        mobs_b := SPACE(60)
        mtipo := 0
        mbaixa := 'N'
        mdata1 := mdata2 := CTOD('  /  /  ')
        mdatapg := mdata_sis
        mcod_forn := mvlr_pg := mresta := mqtd_parc := 0
        mcodigo_ban:= 0
        mtipo_doc:='  '
        Mensagem('Digite a data '+mmenu+'. [ESC] Abandona.')
        DEVPOS(2,1);DEVOUT(mmenu+':')
        @ 5,0 TO 5,cba
        DEVPOS(1,1);DEVOUT('Digite o Periodo........:          a')
        DEVPOS(3,1);DEVOUT('Digite o Cod.Fornecedor.:')
        @ 1,27 GET mdata1       //VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 1,COL()+3 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ 2,39 GET mdatapg VALID IF(mdatapg < mdata1,.F.,.T.)
        //@ 2,60 GET mvlr_pg PICT '9,999,999.99' WHEN mtp = NIL
        @ 3,27 GET mcod_forn pict "9999" VALID IF(EMPTY(mcod_forn) .AND. ! EMPTY(mvlr_pg),.F.,.T.) .AND. ver_fab(mcod_forn,3,33)
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_forn);ver_fab(mcod_forn,3,33);ENDIF
        IF EMPTY(mdata1)
                mdata1 := CTOD('01/01/90')
                mdata2 := mdata_sis+365
                @ 1,27 SAY mdata1
                @ 1,COL()+3 SAY mdata2
        ENDIF
        setcor(10)
        @ 6,12 PROMPT '   GERAL  '
        @ 6,COL()+2 PROMPT '  CHEQUES '
        @ 6,COL()+2 PROMPT '  DUPLICATA '
        SET INTEN ON
        MENU TO mtipo
        setcor(1)
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mjuros := mmulta := mquantd_doc := mtot_multa := mtotal := 0
        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************
        cComm  := "SELECT * FROM sacdupp WHERE venc  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+ " AND datpag IS NULL"
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF mtipo = 2
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('CH')
        ELSEIF mtipo = 3
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('DU')
                IF ! EMPTY(mcod_cartao)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(STRZERO(mcod_cartao,3))
                ENDIF
        ENDIF
        ccomm := ccomm + " ORDER BY venc,fornec,banco,duplicata"
        aret:={}
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                atencao('Nao existe nenhum Documento a ser baixado')
                LOOP
        ENDIF
        mcod_vend := aret[1,27]
        i:=0
        FOR i = 1 TO LEN(aret)
                mbaixa := 'S'
                mdias_atras := mdatapg-(aret[i,10]+m_set[1,106])
                mjuros := mmulta := 0
                mvlpago=aret[i,16]+mjuros+mmulta
                AADD(m_dupp,aret[i,7]+' '+aret[i,2]+' '+aret[i,4]+' '+DTOC(aret[i,10])+' '+TRANSFORM(aret[i,16],'999,999.99')+' '+TRANSFORM(mjuros+mmulta,'999,999.99')+' '+TRANSFORM(mvlpago,'999,999.99')+aret[i,21])
                AADD(m_pos,{aret[i,36],' ',aret[i,16],mjuros+mmulta,mvlpago,aret[i,28],aret[i,4],aret[i,10],aret[i,2]})
        NEXT
        IF LEN(m_dupp) = 0
                atencao('Nao existe documento neste periodo')
                LOOP
        ENDIF
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        botao(li,ci,la,ca)
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('Fornec')
        DEVPOS(li+1,ci+08);DEVOUT('Documento')
        DEVPOS(li+1,ci+21);DEVOUT('Vencimen')
        DEVPOS(li+1,ci+35);DEVOUT('Valor')
        DEVPOS(li+1,ci+41);DEVOUT('Juros+Mult')
        DEVPOS(li+1,ci+53);DEVOUT('Vlr.Total')
        @ li+2,ci+1 TO li+2,ca-1
        @ la-2,ci+1 TO la-2,ca-1
        setcor(1)
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Doc.:       Multa/Juros R$:             Total R$:')
        IF EMPTY(mvlr_pg)
                opcao := op_simnao('N','Deseja marcar todas os Documentos:')
        ENDIF
        IF opcao = 'S' .OR. ! EMPTY(mvlr_pg)
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        m_dupp[i] := SUBSTR(m_dupp[i],1,65)+' X'
                        m_pos[i,2] := 'X'
                        mquantd_doc ++
                        mtot_multa := mtot_multa + m_pos[i,4]
                        mtotal := mtotal + m_pos[i,5]
                NEXT
        ENDIF
        mpoint := 0
        WHILE .T.
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mquantd_doc,'99999'))
                DEVPOS(la-1,ci+33);DEVOUT(TRANSFORM(mtot_multa,'999,999.99'))
                DEVPOS(la-1,ci+58);DEVOUT(TRANSFORM(mtotal,'999,999.99'))
                setcor(1)
                setcor(10);mpoint := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupp,,,mpoint+1);setcor(1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF m_pos[mpoint,2] = 'X'
                                        m_dupp[mpoint] := SUBSTR(m_dupp[mpoint],1,65)+'  '
                                        m_pos[mpoint,2] := ' '
                                        mquantd_doc --
                                        mtot_multa := mtot_multa - m_pos[mpoint,4]
                                        mtotal := mtotal - m_pos[mpoint,5]
                                ELSE
                                        m_dupp[mpoint] := SUBSTR(m_dupp[mpoint],1,65)+' X'
                                        m_pos[mpoint,2] := 'X'
                                        mquantd_doc ++
                                        mtot_multa := mtot_multa + m_pos[mpoint,4]
                                        mtotal := mtotal + m_pos[mpoint,5]
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        i := 0
        FOR i = 1 TO LEN(m_dupp)
                IF m_pos[i,2] = 'X'
                        EXIT
                ENDIF
        NEXT
        IF i > LEN(m_dupp) .OR. m_pos[i,2] <> 'X'
                atencao('Nao tem nenhum Documento marcado')
                LOOP
        ENDIF
        IF mtp = 'E'
                opcao := op_simnao('N','Confirma a EXCLUSAO DOS DOCUMENTOS ? [s/N]:')
        ELSE
                op_tela(10,10,13,110,'OBSERVACAO DA BAIXA',,1)
                mcodigo_ban:= 0
                WHILE .T.
                        DEVPOS(01,0);DEVOUT('Codigo do Banco Pagador:')
                        DEVPOS(02,0);DEVOUT('Observacao.............:')
                        @ 1,25 GET mcodigo_ban PICT "999" VALID IF(EMPTY(mcodigo_ban),.T.,ver_banco(mcodigo_ban,,1,29))
                        READ
                        @ 2,25 GET mobs_b PICT '@!'
                        READ
                        opcao := op_simnao('S','Confirma a OBSERVACAO:')
                        IF opcao = 'S'
                                EXIT
                        ENDIF
                ENDDO
                wvw_lclosewindow()
                opcao := op_simnao('S','Confirma o PROCESSO ? [S/n]:')
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        IF mtp = NIL
                IF EMPTY(mvlr_pg)
                        mvlr_pg := mtotal
                ENDIF
                mtela_dup := SAVESCREEN(00,00,24,79)
                botao(li,ci,la,ca,,' Valor Total das DUPLICATAS: '+TRANSFORM(mtotal,'999,999.99')+' ')
                DEVPOS(li+1,ci+1);DEVOUT('Tipo Documentos........:')
                DEVPOS(li+2,ci+1);DEVOUT('No.Banco/Cod.Cartao....:')
                DEVPOS(li+2,ci+31);DEVOUT('Agencia:')
                DEVPOS(li+2,ci+50);DEVOUT('C/C:')
                DEVPOS(li+3,ci+1);DEVOUT('Numero Documentos......:')
                DEVPOS(li+4,ci+1);DEVOUT('Data de Emissao........:')
                DEVPOS(li+4,ci+39);DEVOUT('Vencimento:')
                DEVPOS(li+5,ci+1);DEVOUT('Valor Documento R$.....:')
                DEVPOS(li+5,ci+41);DEVOUT('Pag.[C]arteria [B]anco:')
                DEVPOS(li+6,ci+1);DEVOUT('Nome do Correntista....:')
                DEVPOS(li+7,ci+1);DEVOUT('OBS.:')
                @ li+8,ci+1 TO li+8,ca-1
                DEVPOS(li+9,ci+1);DEVOUT('Valor Processado:')
                mpos_ini := RECNO()
                mvalor := 0
                mTnum_banco := 0
                mTagencia := SPACE(8)
                mTc_c := SPACE(13)
                ASIZE(mat_dup,0)
                mTcorrente := SPACE(35)
                WHILE mtotal > mvalor
                        setcor(3)
                        DEVPOS(li+9,ci+19);DEVOUT(TRANSFORM(mvalor,'9,999,999.99'))
                        setcor(1)
                        IF mvalor > mtotal
                                atencao('Valor Digitado estar MAIOR que o valor da Duplicata Inicial - Digite tudo novamente')
                                mtotal := 0
                                ASIZE(mat_dup,0)
                        ENDIF
                        mTduplicata=SPACE(12)
                        mTemissao=mdata_sis
                        mTvenc=CTOD("  /  /  ")
                        mTvalor=0
                        mTbanco := 'C'
                        mdesc_cart := mprazo_cart:= 0
                        mcartao := SPACE(20)
                        Mensagem('Digite o Numero da Duplicata. [ESC] Abandona.')
                        @ li+1,ci+27 GET mtipo_doc PICT '@!' VALID IF(EMPTY(mtipo_doc),.F.,ver_tipdc(mtipo_doc,'*'))
                        @ li+2,ci+27 GET mTnum_banco PICT '999' VALID IF(mtipo_doc='CT',ver_cartao(mTnum_banco,li+3,ci+31),.T.) WHEN mtipo_doc <> 'DU'
                        @ li+2,ci+41 GET mTagencia PICT '@!' WHEN mtipo_doc = 'CH'
                        @ li+2,ci+56 GET mTc_c PICT '@!' WHEN mtipo_doc = 'CH'
                        @ li+3,ci+27 GET mTduplicata PICT '@!'
                        READ
                        IF LASTKEY()=27
                                RESTSCREEN(00,00,24,79,mtela_dup)
                                EXIT
                        ENDIF
                        Mensagem('Complete os Dados. [ESC] Abandona.')
                        *****************
                        SELE('dupp');ORDSETFOCUS(1)
                        GO TOP
                        *****************
                        mTvalor := mtotal - mvalor
                        mTbanco := SPACE(1)
                        @ li+4,ci+27 GET mTemissao
                        @ li+4,ci+52 GET mTvenc VALID vencim(mTvenc,,,mTemissao) .AND. IF(mtvenc < mdata_sis,.F.,.T.)
                        @ li+5,ci+27 GET mTvalor PICT "9,999,999.99" VALID mTvalor>0
                        @ li+5,ci+65 GET mTbanco PICT "@!" VALID mTbanco $ 'C,B' .AND. lim_get() WHEN men_get(li+6,ci+23,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO')
                        @ li+6,ci+27 GET mTcorrente PICT "@!"
                        @ li+7,ci+07 GET mTobs
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
                        IF LASTKEY() = 27 .OR. opcao = "N"
                                LOOP
                        ENDIF
                        AADD(mat_dup,{mtipo_doc,mTnum_banco,mTagencia,mTc_c,mTduplicata,;
                                      mTemissao,mTvenc,mTvalor,mTbanco,mTcorrente,;
                                      mTobs})
                        mvalor := mvalor + mTvalor
                ENDDO
                IF mtotal > mvalor
                        opcao := op_simnao('N','Valor Digitado menor que o Documento, Deseja dar baixa mesmo assim:')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mtela_dup)
                                LOOP
                        ENDIF
                ENDIF
                IF mvalor > mtotal
                        opcao := mensagem1('Os Documentos Incluidos estar MAIOR que o do DOCUMENTO PRINCIPAL, deseja Prossegir com o processo mesmo assim:','N','S,N')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mtela_dup)
                                LOOP
                        ENDIF
                ENDIF
                opcao := op_simnao('S','Confirma o processamento dos Dados ? [S/n]:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        RESTSCREEN(00,00,24,79,mtela_dup)
                        LOOP
                ENDIF
                mobs_dup := 'Ped.:'
                mobs_dup1:= ''
                mobs_dup2:= ''
                mobs_dup3:= ''
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        IF m_pos[i,2] <> 'X'
                                LOOP
                        ENDIF
                        IF i <= 8
                                mobs_dup := mobs_dup +IF(EMPTY(m_pos[i,7]),'',m_pos[i,9]+m_pos[i,7]+',')
                        ELSEIF i <= 16
                                mobs_dup1 := mobs_dup1 + IF(EMPTY(m_pos[i,7]),'',m_pos[i,9]+m_pos[i,7]+',')
                        ELSEIF i <= 24
                                mobs_dup2 := mobs_dup2 + IF(EMPTY(m_pos[i,7]),'',m_pos[i,9]+m_pos[i,7]+',')
                        ELSEIF i <= 32
                                mobs_dup3 := mobs_dup3 + IF(EMPTY(m_pos[i,7]),'',m_pos[i,9]+m_pos[i,7]+',')
                        ENDIF
                NEXT
                IF ! BLOQREG()
                        atencao('Nao estar sendo possivel bloquear o registro')
                        RESTSCREEN(00,00,24,79,mtela_dup)
                        LOOP
                ENDIF
                i := 0
                FOR i = 1 TO LEN(mat_dup)
                        IF ! ADIREG()
                                atencao('Nao foi possivel adicionar o registro')
                                RESTSCREEN(00,00,24,79,mtela_dup)
                                LOOP
                        ENDIF
                        dupp-> empresa := mcodempresa
                        dupp-> tipo := mat_dup[i,1]
                        IF EMPTY(mat_dup[i,2])
                                dupp-> numero := SPACE(3)
                        ELSE
                                dupp-> numero := STRZERO(mat_dup[i,2],3)
                        ENDIF
                        dupp-> duplicata := mat_dup[i,5]
                        dupp-> emissao := mat_dup[i,6]
                        dupp-> venc := mat_dup[i,7]
                        dupp-> tip_for := forn->tipo
                        dupp-> fornec := STRZERO(mcod_forn,4)
                        dupp-> cliente := forn->razao
                        IF mat_dup[i,1] = 'CT'
                                dupp-> valor := mat_dup[i,8] - (mat_dup[i,8] * (mdesc_cart/100))
                        ELSE
                                dupp-> valor := mat_dup[i,8]
                        ENDIF
                        dupp-> agencia := mat_dup[i,3]
                        dupp-> c_c := mat_dup[i,4]
                        dupp-> pago := " "
                        dupp-> banco := mat_dup[i,9]
                        dupp-> operador := cod_operado
                        dupp-> obs  := mobs_dup
                        IF mat_dup[i,6] = mat_dup[i,7]
                                opcao := op_simnao('S','Deseja fazer a BAIXA deste documento agora [S/n]:')
                                IF opcao = 'S'
                                        dupp->datpag := mat_dup[i,7]
                                        dupp->vlpago := mat_dup[i,8]
                                        dupp->pago := "B"
                                        dupp->banco := 'C'
                                ELSE
                                        LOOP
                                ENDIF
                        ENDIF
                        dupp-> operador := cod_operado
                        AADD(m_cax,{aret[i,7],aret[i,2],aret[i,4],aret[i,10],aret[i,16],mat_dup[i,8],0,cod_operado})
                        DBCOMMIT()
                        DBUNLOCK()
                NEXT
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        IF m_pos[i,2] <> 'X'
                                LOOP
                        ENDIF
                        GO m_pos[i,1]
                        IF BLOQREG()
                                dupp-> datpag := mdata_sis
                                dupp-> vlpago := dupp->valor
                                dupp-> pago := "T"
                                dupp-> operador := cod_operado
                        ENDIF
                NEXT
        ELSEIF mtp = 'E'
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        prog_imp(i,m_pos[i,7])
                        IF m_pos[i,2] <> 'X'
                                LOOP
                        ENDIF
                        cons_dupr := {}
                        sr_getconnection():exec("DELETE FROM sacdupp  WHERE sr_recno = " + sr_cdbvalue(m_pos[i,1]),,.f.)
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('Esta operacao foi realizada com SUCESSO.')
        ELSE
                i := 0
                FOR i = 1 TO LEN(m_dupp)
                        prog_imp(i,m_pos[i,7])
                        IF m_pos[i,2] <> 'X'
                                LOOP
                        ENDIF
                        cons_dupr := {}
                        sr_getconnection():exec("SELECT valor FROM sacdupp WHERE sr_recno  = "+sr_cdbvalue(m_pos[i,1]),,.t.,@cons_dupr)
                        sr_getconnection():exec('COMMIT',,.f.)
                        sr_getconnection():exec("UPDATE sacdupp SET datpag = " + sr_cdbvalue(mdatapg)  +;
                                        ",vlpago     = " + sr_cdbvalue(cons_dupr[1,1])+;
                                        ",pago       = " + sr_cdbvalue('B')  +;
                                        ",operador   = " + sr_cdbvalue(cod_operado)+;
                                        ",obs_b      = " + sr_cdbvalue(mobs_b)+;
                                        ",data_so    = " + sr_cdbvalue(mdata_sis)+;
                			",banco_bx   = "+sr_cdbvalue(STRZERO(mcodigo_ban,3))+;
                			",hora_bx    = "+sr_cdbvalue(TIME())+;
                                        " WHERE sr_recno = " + sr_cdbvalue(m_pos[i,1]),,.f.)
                        AADD(m_cax,{aret[i,7],aret[i,2],aret[i,4],aret[i,10],aret[i,16],cons_dupr[1,1],0,cod_operado})
                NEXT
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('Esta operacao foi realizada com SUCESSO.')
        ENDIF
/*
                IF cx <> NIL
                        i := 0
                        FOR i = 1 TO LEN(m_cax)
                                ******************
                                SELE('caix');ORDSETFOCUS(3)
                                GO TOP
                                *****************
                                IF m_cax[i,2] = 'DU'
                                        IF caix->(DBSEEK(m_cax[i,2] + m_cax[i,3] + m_cax[i,1]))
                                                mcod_vend := caix->cod_vend
                                                IF BLOQREG()
                                                        caix->op_pg := 'P'
                                                        DBCOMMIT()
                                                        DBUNLOCK()
                                                ELSE
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ENDIF
*                                                1            2           3               4          5        6          7             8           9
*                               AADD(m_cax,{dupr->fornec,dupr->tipo,dupr->duplicata,dupr->venc,dupr->valor,mvlr_pg,dupr->comissao,dupr->nota,dupr->vendedor})
                                sr_getconnection():exec('INSERT INTO saccaixa ('+;
					'empresa,'+;
					'tipo,'+;
					'num_dup,'+;
                                        'documento,'+;
                                        'data,'+;
                                        'venci,'+;
                                        'valor,'+;
                                        'cod_cli,'+;
					'cod_vend,'+;
					'cod_opera,'+;
					'pg,'+;
					'op_pg,'+;
					'valor_com,'+;
					'comissao,'+;
					'tp_mov,'+;
					'hora,'+;
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcodempresa)+','+; //1
                                        sr_cdbvalue(m_cax[i,2])+','+; //2
                                        sr_cdbvalue(m_cax[i,3])+','+; //3
                                        sr_cdbvalue(m_cax[i,3])+','+; //4
                                        sr_cdbvalue(mdatapg)+','+; //5
                                        sr_cdbvalue(mdatapg)+','+; //6
                                        sr_cdbvalue(m_cax[i,6])+','+; //7
                                        sr_cdbvalue(m_cax[i,1])+','+; //8
                                        sr_cdbvalue(m_cax[i,8])+','+;//9
                                        sr_cdbvalue(cod_operado)+','+;//10
                                        sr_cdbvalue('*')+','+; //11
                                        sr_cdbvalue('P')+','+;//12
                                        sr_cdbvalue(m_cax[i,6])+','+;//13
                                        sr_cdbvalue(m_cax[i,7])+','+;//14
                                        sr_cdbvalue('B')+','+;//15
                                        sr_cdbvalue(TIME())+','+;//15
                                        sr_cdbvalue(' ')+')',,.f.)
                        NEXT
                ENDIF
*/
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('Esta operacao foi realizada com SUCESSO.')
        DBUNLOCKALL()
        DBCOMMITALL()
        RESTSCREEN(00,00,24,79,mtela_dup)
ENDDO
RETURN NIL
********************************* F I M ***********************
