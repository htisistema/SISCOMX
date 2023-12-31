*** CON2411.PRG: Inclusao de VARIAS Duplicatas (Receber)
***
************************************************
FUNCTION con2411
****************
LOCAL MPRG:='CON2411',;
      mduplicata,mcod_ven,mtraco,opcao,mnum_ped,tela,mcomissao,mvalor,;
      magencia,mc_c,mcorrente,mobs,mqtd_parc:=0,mintervalo:=0,mdoc,i,tela1,mvlrParc,;
      lci,cci,lba,cba,li,ci,lb,cb,mparcela,mcodemp

PRIVATE mcod_cli,mvenc,memissao,mnome_vend,mcom_ven,mnome_cli,mend,mbairro,mcidade,;
        muf,mcgc,mcpf,minsc,mbanco,mcod_cart,mtipo_imp,mdesc_cart,mprazo_cart,;
        mcartao,m_dup:={},mtipo_doc

IF ! ver_nivel(mprg,'CONTA A RECEBER (INCLUSAO DE VARIOS DOCUMENTO)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF

lci := 00
cci := 00
lba := 15
cba := 79

li := 00
ci := 00
lb := 17
cb := 79

mtraco := REPLI('-',80)
op_tela(00,00,24,79,' INCLUSAO VARIOS Documentos A RECEBER ','*')
WHILE .T.
        limpa(00,00,33,100)
        ASIZE(m_dup,0)
        exibi_prg(mprg)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa............:')
        DEVPOS(lci+2,cci+2);DEVOUT('Codigo do Cliente......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Tipo Documentos........:     <F1> p/Listar os Tipos de Documentos')
        DEVPOS(lci+4,cci+2);DEVOUT('No.Banco/Cod.Cartao....:')
        DEVPOS(lci+4,cci+32);DEVOUT('Agencia:')
        DEVPOS(lci+4,cci+51);DEVOUT('C/C:')
        DEVPOS(lci+5,cci+2);DEVOUT('Numero Documentos......:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data de Emissao........:')
        DEVPOS(lci+7,cci+2);DEVOUT('Valor Total R$.........:')
        DEVPOS(lci+7,cci+41);DEVOUT('Vlr Parcela R$:')
        DEVPOS(lci+8,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
        DEVPOS(lci+9,cci+2);DEVOUT('Codigo do Vendedor.....:')
        DEVPOS(lci+10,cci+2);DEVOUT('Numero do Pedido/NF....:')
        DEVPOS(lci+11,cci+2);DEVOUT('% de Comissao .........:')
        DEVPOS(lci+12,cci+2);DEVOUT('Nome do Correntista....:')
        DEVPOS(lci+13,cci+2);DEVOUT('OBS.:')
        DEVPOS(lci+14,cci+2);DEVOUT('Qtd. de Parcelas:')
        DEVPOS(lci+14,cci+25);DEVOUT('Intervalos:')
        mtipo_imp := m_indiv[1,18]
        mcodemp := mcodempresa
        mnome_cli := SPACE(40)
        mend := SPACE(35)
        mbairro := SPACE(20)
        mcidade := SPACE(20)
        muf := SPACE(2)
        mcgc := SPACE(14)
        mcpf := SPACE(11)
        minsc := SPACE(14)
        mcod_ven := 0
        mnome_vend := SPACE(30)
        mcom_ven := 0
        mduplicata := SPACE(12)
        mcod_cli=0
        memissao=mdata_sis
        mvenc=CTOD("  /  /  ")
        mvalor=0
        mvlrParc=0
        mtipo_doc=SPACE(2)
        mnum_ped := 0
        mcod_cart := 0
        mbanco := 'C'
        mcomissao := 0
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mcorrente := SPACE(35)
        mobs := SPACE(60)
        mdesc_cart := 0
        mprazo_cart:= 0
        mcartao := SPACE(20)
        Mensagem('Complete os Dados.  - <F1> Ajuda do Campo - [ESC] Abandona.')
        @ lci+1,cci+27 GET mcodemp PICT '999' VALID ver_emp(mcodemp,lci+1,cci+31) WHEN mmult_emp = 'S'
        @ lci+2,cci+27 GET mcod_cli PICT "99999"        // VALID lim_get() WHEN men_get(lci+3,cci+27,'Informe o Cod. do Cliente ou <ENTER>p/pesquisar p/NOME - <F1>Ajuda')
        @ lci+2,cci+33 GET mnome_cli PICT "@!" WHEN EMPTY(mcod_cli)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_cli)
                *****************
                SELE('cli');ORDSETFOCUS(1)
                *****************
                IF ! cli->(DBSEEK(mcod_cli))
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ENDIF
        ELSEIF ! EMPTY(mnome_cli)
                *****************
                SELE('cli');ORDSETFOCUS(2)
                *****************
                IF ! cli->(DBSEEK(RTRIM(mnome_cli)))
                        atencao('Cliente nao cadastrado !!!')
                        LOOP
                ELSE
                        mcod_cli:=f7_cli()
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                mcod_cli := cli->cod_cli
        ENDIF
        IF EMPTY(mcod_cli)
                LOOP
        ENDIF
        mnome_cli := cli->razao
        IF RTRIM(mnome_cli) = 'DIVERSOS'
                @ lci+2,cci+32 GET mnome_cli PICT '@!' VALID lim_get() WHEN men_get(lci+3,cci+32,'Neste campo voce pode descrever o que deseja')
        ENDIF
        setcor(3)
        DEVPOS(lci+2,cci+33);DEVOUT(mnome_cli)
        setcor(1)
        mduplicata := STR(mcod_cli,5)+SPACE(2)
        @ lci+3,cci+27 GET mtipo_doc PICT '@!' VALID IF(EMPTY(mtipo_doc),.F.,ver_tipdc(mtipo_doc,'*') .AND. lim_get()) WHEN men_get(lci+4,cci+25,mmens)
        @ lci+4,cci+27 GET mcod_cart PICT '999' VALID IF(mtipo_doc='CT',ver_cartao(mcod_cart,lci+4,cci+31,'*'),.T.) .AND. lim_get() WHEN mtipo_doc <> 'DU' .AND. men_get(lci+5,cci+25,'Informe o No.do banco ou se tipo de documento for [CT] informe o codigo do cartao')
        @ lci+4,cci+41 GET magencia PICT '@!' VALID lim_get() WHEN mtipo_doc = 'CH' .AND. men_get(lci+5,cci+41,'Informe a AGENCIA BANCARIA')
        @ lci+4,cci+56 GET mc_c PICT '@!' VALID lim_get()  WHEN mtipo_doc = 'CH' .AND. men_get(lci+5,cci+56,'Informe a C/C BANCARIA')
        @ lci+5,cci+27 GET mduplicata PICT '@!' VALID lim_get() WHEN men_get(lci+6,cci+25,'Informe o No.do documento')
        @ lci+6,cci+27 GET memissao
        @ lci+7,cci+27 GET mvalor PICT "9,999,999.99"           //VALID mvalor>0
        @ lci+7,cci+57 GET mvlrParc PICT "9,999,999.99" WHEN mvalor = 0 VALID mvlrParc>0
        @ lci+8,cci+27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN men_get(lci+10,cci+23,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
        @ lci+9,cci+27 GET mcod_ven PICT "999" VALID ven(mcod_ven,lci+9,cci+31) .AND. lim_get() WHEN men_get(lci+10,cci+27,'Informe o Cod. do vendedor [CAMPO NAO OBRIGATORIO]')
        @ lci+10,cci+27 GET mnum_ped PICT "999999" VALID lim_get() WHEN men_get(lci+11,cci+27,'Informe o No.do pedido que corresponde a este documento [CAMPO NAO OBRIGATORIO]')
        @ lci+11,cci+27 GET mcomissao PICT "999.9999" VALID lim_get() WHEN men_get(lci+12,cci+27,'Informe a comissao do vendedor em relacao a este documento')
        @ lci+12,cci+27 GET mcorrente PICT "@!" VALID lim_get() WHEN men_get(lci+13,cci+27,'Informe o nome do correntista')
        @ lci+13,cci+07 GET mobs
        @ lci+14,cci+20 GET mqtd_parc PICT '99'
        @ lci+14,cci+37 GET mintervalo PICT '99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
        IF opcao = "N"
                LOOP
        ENDIF
        IF ! EMPTY(mvalor)
                mparcela := mvalor / mqtd_parc
        ELSE
                mparcela := mvlrParc
        ENDIF
        i := 0
        mvenc := memissao
        FOR i = 1 TO 30
                IF i <= mqtd_parc
                        mdoc := ALLTRIM(mduplicata) +'/'+STRZERO(I,2)+SPACE(10-LEN(ALLTRIM(mduplicata)+'/'+STRZERO(i,2)))
                        mvenc := mvenc + mintervalo
                        IF DOW(mvenc) = 1
                                mvenc := mvenc + 1
                        ENDIF
                        AADD(m_dup,{mparcela,mvenc,mdoc})
                ELSE
                        AADD(m_dup,{0,CTOD('  /  /  '),SPACE(8)})
                ENDIF
        NEXT

        tela1 := SAVESCREEN(01,00,24,79)
        botao(li,ci,lb,cb,,' INCLUSAO DE VARIOS DOCUMENTO ')
        @ li+2,ci+1 GET m_dup[1,3] PICT '@!'
        @ li+2,ci+11 GET m_dup[1,2]
        @ li+2,ci+21 GET m_dup[1,1] PICT '999,999.99'

        @ li+3,ci+1 GET m_dup[2,3] PICT '@!'
        @ li+3,ci+11 GET m_dup[2,2]
        @ li+3,ci+21 GET m_dup[2,1] PICT '999,999.99'

        @ li+4,ci+1 GET m_dup[3,3] PICT '@!'
        @ li+4,ci+11 GET m_dup[3,2]
        @ li+4,ci+21 GET m_dup[3,1] PICT '999,999.99'

        @ li+5,ci+1 GET m_dup[4,3] PICT '@!'
        @ li+5,ci+11 GET m_dup[4,2]
        @ li+5,ci+21 GET m_dup[4,1] PICT '999,999.99'

        @ li+6,ci+1 GET m_dup[5,3] PICT '@!'
        @ li+6,ci+11 GET m_dup[5,2]
        @ li+6,ci+21 GET m_dup[5,1] PICT '999,999.99'

        @ li+7,ci+1 GET m_dup[6,3] PICT '@!'
        @ li+7,ci+11 GET m_dup[6,2]
        @ li+7,ci+21 GET m_dup[6,1] PICT '999,999.99'

        @ li+8,ci+1 GET m_dup[7,3] PICT '@!'
        @ li+8,ci+11 GET m_dup[7,2]
        @ li+8,ci+21 GET m_dup[7,1] PICT '999,999.99'

        @ li+9,ci+1 GET m_dup[8,3] PICT '@!'
        @ li+9,ci+11 GET m_dup[8,2]
        @ li+9,ci+21 GET m_dup[8,1] PICT '999,999.99'

        @ li+10,ci+1 GET m_dup[9,3] PICT '@!'
        @ li+10,ci+11 GET m_dup[9,2]
        @ li+10,ci+21 GET m_dup[9,1] PICT '999,999.99'

        @ li+11,ci+1 GET m_dup[10,3] PICT '@!'
        @ li+11,ci+11 GET m_dup[10,2]
        @ li+11,ci+21 GET m_dup[10,1] PICT '999,999.99'

        @ li+12,ci+1 GET m_dup[11,3] PICT '@!'
        @ li+12,ci+11 GET m_dup[11,2]
        @ li+12,ci+21 GET m_dup[11,1] PICT '999,999.99'

        @ li+13,ci+1 GET m_dup[12,3] PICT '@!'
        @ li+13,ci+11 GET m_dup[12,2]
        @ li+13,ci+21 GET m_dup[12,1] PICT '999,999.99'

        @ li+14,ci+1 GET m_dup[13,3] PICT '@!'
        @ li+14,ci+11 GET m_dup[13,2]
        @ li+14,ci+21 GET m_dup[13,1] PICT '999,999.99'

        @ li+15,ci+1 GET m_dup[14,3] PICT '@!'
        @ li+15,ci+11 GET m_dup[14,2]
        @ li+15,ci+21 GET m_dup[14,1] PICT '999,999.99'

        @ li+16,ci+1 GET m_dup[15,3] PICT '@!'
        @ li+16,ci+11 GET m_dup[15,2]
        @ li+16,ci+21 GET m_dup[15,1] PICT '999,999.99'

        @ li+2,ci+45 GET m_dup[16,3] PICT '@!'
        @ li+2,ci+55 GET m_dup[16,2]
        @ li+2,ci+65 GET m_dup[16,1] PICT '999,999.99'

        @ li+3,ci+45 GET m_dup[17,3] PICT '@!'
        @ li+3,ci+55 GET m_dup[17,2]
        @ li+3,ci+65 GET m_dup[17,1] PICT '999,999.99'

        @ li+4,ci+45 GET m_dup[18,3] PICT '@!'
        @ li+4,ci+55 GET m_dup[18,2]
        @ li+4,ci+65 GET m_dup[18,1] PICT '999,999.99'

        @ li+5,ci+45 GET m_dup[19,3] PICT '@!'
        @ li+5,ci+55 GET m_dup[19,2]
        @ li+5,ci+65 GET m_dup[19,1] PICT '999,999.99'

        @ li+6,ci+45 GET m_dup[20,3] PICT '@!'
        @ li+6,ci+55 GET m_dup[20,2]
        @ li+6,ci+65 GET m_dup[20,1] PICT '999,999.99'

        @ li+7,ci+45 GET m_dup[21,3] PICT '@!'
        @ li+7,ci+55 GET m_dup[21,2]
        @ li+7,ci+65 GET m_dup[21,1] PICT '999,999.99'

        @ li+8,ci+45 GET m_dup[22,3] PICT '@!'
        @ li+8,ci+55 GET m_dup[22,2]
        @ li+8,ci+65 GET m_dup[22,1] PICT '999,999.99'

        @ li+9,ci+45 GET m_dup[23,3] PICT '@!'
        @ li+9,ci+55 GET m_dup[23,2]
        @ li+9,ci+65 GET m_dup[23,1] PICT '999,999.99'

        @ li+10,ci+45 GET m_dup[24,3] PICT '@!'
        @ li+10,ci+55 GET m_dup[24,2]
        @ li+10,ci+65 GET m_dup[24,1] PICT '999,999.99'

        @ li+11,ci+45 GET m_dup[25,3] PICT '@!'
        @ li+11,ci+55 GET m_dup[25,2]
        @ li+11,ci+65 GET m_dup[25,1] PICT '999,999.99'

        @ li+12,ci+45 GET m_dup[26,3] PICT '@!'
        @ li+12,ci+55 GET m_dup[26,2]
        @ li+12,ci+65 GET m_dup[26,1] PICT '999,999.99'

        @ li+13,ci+45 GET m_dup[27,3] PICT '@!'
        @ li+13,ci+55 GET m_dup[27,2]
        @ li+13,ci+65 GET m_dup[27,1] PICT '999,999.99'

        @ li+14,ci+45 GET m_dup[28,3] PICT '@!'
        @ li+14,ci+55 GET m_dup[28,2]
        @ li+14,ci+65 GET m_dup[28,1] PICT '999,999.99'

        @ li+15,ci+45 GET m_dup[29,3] PICT '@!'
        @ li+15,ci+55 GET m_dup[29,2]
        @ li+15,ci+65 GET m_dup[29,1] PICT '999,999.99'

        @ li+16,ci+45 GET m_dup[30,3] PICT '@!'
        @ li+16,ci+55 GET m_dup[30,2]
        @ li+16,ci+65 GET m_dup[30,1] PICT '999,999.99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
        IF opcao = "N"
                LOOP
        ENDIF
        *****************
        SELE('dupr');ORDSETFOCUS(1)
        //GO TOP
        *****************
        i := 0
        FOR i = 1 TO mqtd_parc
                IF ADIREG()
                        dupr-> empresa := mcodemp
                        dupr-> tipo := mtipo_doc
                        IF EMPTY(mcod_cart)
                                dupr-> numero := SPACE(3)
                        ELSE
                                dupr-> numero := STRZERO(mcod_cart,3)
                        ENDIF
                        dupr-> agencia := magencia
                        dupr-> c_c := mc_c
                        dupr-> duplicata := m_dup[i,3]
                        dupr-> valor_dup := m_dup[i,1]
                        dupr-> tip_cli := cli->tipo
                        dupr-> fornec := mcod_cli
                        dupr-> cliente := mnome_cli
                        dupr-> emissao := memissao
                        dupr-> venc := m_dup[i,2]
                        dupr-> valor := m_dup[i,1]
                        dupr-> pago := " "
                        dupr-> vendedor := STRZERO(mcod_ven,3)
                        dupr-> num_ped := STRZERO(mnum_ped,6)
                        dupr-> banco := mbanco
                        dupr-> comissao := mcomissao
                        dupr-> corrente := mcorrente
                        dupr-> obs      := mobs
                        dupr-> operador := cod_operado
                ELSE
                        atencao('Nao foi possivel Acessar o Arquivo !!!')
                        LOOP
                ENDIF
        NEXT
        DBUNLOCKALL()
        DBCOMMITALL()
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m *************************************




