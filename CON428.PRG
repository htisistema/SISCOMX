MEMVAR getlist,mdata_sis,nivel_acess,mcgc_firm,memp_resa,mend_firm,mcid_firm,;
       mfone_firm,minsc_firm
*** CON428.PRG: Emissao de Duplicatas (Receber)
************************************************
FUNCTION con428(mcli,mdoc,mvlr,mped,md_p,mvcn,m_tipo)
****************
LOCAL MPRG:='CON428',;
      mtipo,mduplicata,mcod_ven,mtraco,opcao,mnum_ped,tela,mtela,i:=0,mvalor:=0,;
      mextenso,mlin,mlinha,lin,mno_fat:=SPACE(10),mvlr_fat:=0,mtipo_dup:=' '

PRIVATE mcod_cli,mvenc,memissao,mnome_vend,mcom_ven,mnome_cli,mend,mbairro,mcidade,;
        muf,mcgc,mcpf,minsc,mbanco,lba,cba,mtipo_imp,mimp_tipo:=0,mqtd_cop:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),cons_dupr:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (IMPRESSAO DE DUPLICATAS)','12345',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 14
cba := 79
mtraco := REPLI('-',80)
IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
IF mdoc = NIL
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        *------------------------------------------------------------------------------------
        CLOSE ALL
        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
        *------------------------------------------------------------------------------------
        mduplicata := SPACE(12)
        mcod_cli := mvalor := mnum_ped := 0
	mtipo := SPACE(2)
ELSE
	IF m_tipo <> NIL
		mtipo := m_tipo
	ENDIF
        mduplicata=mdoc
        mcod_cli=mcli
        mvalor = mvlr
        mnum_ped := mped
ENDIF
mno_fat := SPACE(10)
mvlr_fat:=0
set_key('cliente')
IF md_p = NIL
        op_tela(0,0,lba,cba," Emissao de DUPLICATAS ")
ELSE
        op_tela(0,0,lba,cba," Emissao de PROMISSORIA ")
ENDIF

WHILE .T.
        limpa(0,0,lba,cba)
        mtipo_imp := m_indiv[1,21]
        mqtd_cop  := m_indiv[1,22]
        DEVPOS(1,2);DEVOUT('Tipo de Documento..............:')
        DEVPOS(2,2);DEVOUT('Numero Duplicata...............:')
        DEVPOS(3,2);DEVOUT('Codigo do Cliente..............:')
        DEVPOS(4,2);DEVOUT('Data de Emissao................:')
        DEVPOS(5,2);DEVOUT('Data de Vencimento.............:')
        DEVPOS(6,2);DEVOUT('Valor Duplicata R$.............:')
        DEVPOS(7,2);DEVOUT('Pagamento em [C]arteria [B]anco:')
        DEVPOS(8,2);DEVOUT('Codigo do Vendedor.............:')
        DEVPOS(9,2);DEVOUT('Numero do Pedido...............:')
        DEVPOS(10,2);DEVOUT('Numero da Fatura...............:             Valor R$:')
        DEVPOS(11,2);DEVOUT('Quantidade de Copias...........:')
        DEVPOS(12,2);DEVOUT('Tipo Dup.[S]istema [P]re Impressa.:')
        *****************
        SELE('dupr');ORDSETFOCUS(1)
        *****************
        mnome_cli := SPACE(40)
        mend := SPACE(35)
        mbairro := mcidade := SPACE(20)
        muf := SPACE(2)
        mcgc := minsc := SPACE(14)
        mcpf := SPACE(11)
        mcod_ven := mcom_ven := 0
        mnome_vend := SPACE(30)
        memissao=mdata_sis
        IF mvcn <> NIL
                mvenc=mvcn
        ELSE
                mvenc=CTOD("  /  /  ")
        ENDIF
        mbanco := SPACE(1)
        Mensagem('Digite o Numero da Duplicata. [ESC] Abandona.')
        @ 1,35 GET mtipo PICT '@!' VALID ver_tipdc(mtipo,'*')
        @ 2,35 GET mduplicata PICT '@!'
        READ
        IF LASTKEY()=27 .OR. mduplicata = SPACE(12)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        Mensagem('Complete os Dados. [ESC] Abandona.')
        @ 3,35 GET mcod_cli PICT "99999" VALID mcli(mcod_cli,3,35) .AND. lim_get() WHEN men_get(4,31,'Informe o Cod. do Cliente ou <F7>p/pesquisas de clientes')
        READ
        //cComm  :=
        cons_doc:={}
        sr_getconnection():exec("SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(mcod_cli)+" AND tipo = "+sr_cdbvalue(mtipo)+" AND duplicata = "+sr_cdbvalue(mduplicata),,.t.,@cons_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_doc) > 0
                memissao := cons_doc[1,10]
                mvenc    := cons_doc[1,11]
                mvalor   := cons_doc[1,19]
                mbanco   := cons_doc[1,16]
                mcod_ven := cons_doc[1,30]
                mnum_ped := cons_doc[1,31]
        ENDIF

        mtipo_dup = 'S'
        IF ! EMPTY(mcod_cli);mcli(mcod_cli,3,35);ENDIF
        @ 4,35 GET memissao
        @ 5,35 GET mvenc VALID vencim(mvenc)
        @ 6,35 GET mvalor PICTure "99,999,999,999.99" VALID mvalor>0
        @ 7,35 GET mbanco PICT "@!" VALID mbanco $ 'C,B, ' WHEN md_p = NIL
        @ 8,35 GET mcod_ven PICT "999" VALID ven(mcod_ven,8,39)
        @ 9,35 GET mnum_ped PICT "999999"
        @ 10,35 GET mno_fat PICT "@!" WHEN md_p = NIL
        @ 10,57 GET mvlr_fat PICT "9,999,999.99" WHEN md_p = NIL
        @ 11,35 GET mqtd_cop PICT "99"
        @ 12,38 GET mtipo_dup PICT "@!" VALID mtipo_dup $ 'S,P' WHEN md_p = NIL
        READ
        IF LASTKEY()=27
                LOOP
        ENDIF
        IF ! imp_arq('DUPLICATA.REL','D');LOOP;ENDIF
        IF mtipo_dup = 'P'
                        imprt(mtipo_imp,'C')
                        @ PROW()+10,21 SAY mduplicata
                        DEVPOS(PROW(),40);DEVOUT(TRANSFORM(iat(mvalor,2),'99,999,999.99'))
                        @ PROW(),60 SAY mduplicata
                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(iat(mvalor,2),'99,999,999.99'))
                        @ PROW(),99 SAY mvenc
                        @ PROW()+3,65 SAY STRZERO(mvenc-mdata_sis,3)+' dias'
                        @ PROW()+3,60 SAY mcod_cli
                        @ PROW(),PCOL()+1 SAY mnome_cli
                        @ PROW()+1,60 SAY mend
                        @ PROW()+1,60 SAY RTRIM(mbairro)+'-Cidade: '+RTRIM(mcidade)
                        @ PROW(),110 SAY muf
                        @ PROW()+1,60 SAY 'Cobranca Bancaria'
                        IF mcgc <> SPACE(14)
                                DEVPOS(PROW()+1,60);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
                                DEVPOS(PROW(),100);DEVOUT(minsc)
                        ELSEIF mcpf <> SPACE(11)
                                DEVPOS(PROW()+1,60);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        mextenso:= '('+RTRIM(extenso(iat(mvalor,2),.T.,'real','reais'))+')'
                        mlinha := MLCOUNT(mextenso,50)
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        FOR lin = 1 TO mlinha
                                mlin := MEMOLINE(mextenso,50,lin,,10)
                                DEVPOS(PROW()+1,60);DEVOUT(PADR(RTRIM(mlin),50))
                        NEXT
                        imprt(mtipo_imp,'N')
        ELSE
                FOR i = 1 TO mqtd_cop
                        dup_sis(STR(mcod_cli,5),mnome_cli,mend,mbairro,mcidade,muf,cli->cep,cli->tel1,;
                                mcgc,minsc,mcpf,cli->end_cob,cli->bairro_cob,cli->cidade_cob,cli->uf_cob,cli->cep_cob,cli->fone_cob,;
                                mtipo,mduplicata,memissao,mvenc,mcod_ven,mvalor,cli->nome,mno_fat,mvlr_fat,md_p)
                NEXT
        ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DUPLICATA.REL')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m *************************************
* IMPRESSAO DA DUPLICATA DO SISTEMA
*************************************
FUNCTION promi_avul()
*********************
LOCAL mprg:='CON428',;
      mextenso:='',mlinha,mlin,lin,mtraco:=REPLI('-',80),;
      mnome_cred   := SPACE(40),;
      mcpf_cred    := SPACE(11),;
      mcgc_cred    := SPACE(14),;
      minsc_cred   := SPACE(11),;
      mend_cred    := SPACE(40),;
      mbairro_cred := SPACE(25),;
      mcidade_cred := SPACE(25),;
      muf_cred     := SPACE(2),;
      mcep_cred    := SPACE(9),;
      mnome_emi    := SPACE(40),;
      mcpf_emi     := SPACE(11),;
      mcgc_emi     := SPACE(14),;
      minsc_emi    := SPACE(11),;
      mend_emi     := SPACE(40),;
      mbairro_emi  := SPACE(25),;
      mcidade_emi  := SPACE(25),;
      muf_emi      := SPACE(2),;
      mcep_emi     := SPACE(9),;
      mnnum_doc    := SPACE(10),;
      memissao     := DATE(),;
      mvenci       := CTOD('  /  /  '),;
      mvalor       := 0,;
      mobs         := SPACE(40),;
      mobs1        := SPACE(40)

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

op_tela(00,00,27,90,'Emissao Promissoria Avulsa',,1)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        setcor(1)
        DEVPOS(0,0);DEVOUT('Credor.....:')
        DEVPOS(1,0);DEVOUT('CPF........:')
        DEVPOS(2,0);DEVOUT('CNPJ.......:')
        DEVPOS(3,0);DEVOUT('Inscricao..:')
        DEVPOS(4,0);DEVOUT('Endereco...:')
        DEVPOS(5,0);DEVOUT('Bairro.....:')
        DEVPOS(6,0);DEVOUT('Cidade.....:')
        DEVPOS(7,0);DEVOUT('UF.........:')
        DEVPOS(8,0);DEVOUT('CEP........:')
        @ 9,0 TO 9,120
        DEVPOS(10,0);DEVOUT('Emitente...:')
        DEVPOS(11,0);DEVOUT('CPF........:')
        DEVPOS(12,0);DEVOUT('CNPJ.......:')
        DEVPOS(13,0);DEVOUT('Inscricao..:')
        DEVPOS(14,0);DEVOUT('Endereco...:')
        DEVPOS(15,0);DEVOUT('Bairro.....:')
        DEVPOS(16,0);DEVOUT('Cidade.....:')
        DEVPOS(17,0);DEVOUT('UF.........:')
        DEVPOS(18,0);DEVOUT('CEP........:')
        @ 19,0 TO 19,120
        DEVPOS(20,0);DEVOUT('No.Doumento:')
        DEVPOS(21,0);DEVOUT('Emissao....:')
        DEVPOS(22,0);DEVOUT('Vencimento.:')
        DEVPOS(23,0);DEVOUT('Valor R$...:')
        @ 24,0 TO 24,120
        DEVPOS(25,0);DEVOUT('Observacao.:')
        @ 0,13 GET mnome_cred
        @ 1,13 GET mcpf_cred PICT '99999999999'
        @ 2,13 GET mcgc_cred PICT '99999999999999' WHEN EMPTY(mcpf_cred)
        @ 3,13 GET minsc_cred WHEN EMPTY(mcpf_cred)
        @ 4,13 GET mend_cred
        @ 5,13 GET mbairro_cred
        @ 6,13 GET mcidade_cred
        @ 7,13 GET muf_cred
        @ 8,13 GET mcep_cred

        @ 10,13 GET mnome_emi
        @ 11,13 GET mcpf_emi PICT '99999999999'
        @ 12,13 GET mcgc_emi PICT '99999999999999' WHEN EMPTY(mcpf_emi)
        @ 13,13 GET minsc_emi WHEN EMPTY(mcpf_emi)
        @ 14,13 GET mend_emi
        @ 15,13 GET mbairro_emi
        @ 16,13 GET mcidade_emi
        @ 17,13 GET muf_emi
        @ 18,13 GET mcep_emi

        @ 20,13 GET mnnum_doc
        @ 21,13 GET memissao
        @ 22,13 GET mvenci
        @ 23,13 GET mvalor PICT '999,999,999.99'
        @ 25,13 GET mobs
        @ 26,13 GET mobs1
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao da PROMISSORIA:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                EXIT
        ENDIF
        IF ! imp_arq('HTI.REL','R')
                LOOP
        ENDIF

        mensagem('Aguarde a impressao da(s) Duplicata(s)....')

        imprt(mtipo_imp,'N')
        @ PROW(),00 SAY 'CREDOR:'
        @ PROW(),PCOL()+1 SAY mnome_cred
        imprt(mtipo_imp,'C')
        @ PROW()+1,00 SAY 'End.: '+mend_cred
        @ PROW()+1,00 SAY 'Bairro: '+RTRIM(mbairro_cred)+'-Cidade: '+RTRIM(mcidade_cred)+'-'+muf_cred+'- CEP:'+mcep_cred
        IF mcgc_cred <> SPACE(14)
                @ PROW(),PCOL()+3 SAY 'CNPJ:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcgc_cred,'@@R 99.999.999/9999-99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+minsc_cred)
        ELSEIF mcpf_cred <> SPACE(11)
                @ PROW(),PCOL()+3 SAY 'CPF:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcpf_cred,'@@R 999.999.999-99')
        ENDIF
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'EMITENTE:'
        @ PROW(),PCOL()+1 SAY mnome_emi
        imprt(mtipo_imp,'C')
        @ PROW()+1,00 SAY 'End.: '+mend_emi
        @ PROW()+1,00 SAY 'Bairro: '+RTRIM(mbairro_emi)+'-Cidade: '+RTRIM(mcidade_emi)+'-'+muf_emi+'- CEP:'+mcep_emi
        IF mcgc_emi <> SPACE(14)
                @ PROW(),PCOL()+3 SAY 'CNPJ:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcgc_emi,'@@R 99.999.999/9999-99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+minsc_emi)
        ELSEIF mcpf_emi <> SPACE(11)
                @ PROW(),PCOL()+3 SAY 'CPF:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(mcpf_emi,'@@R 999.999.999-99')
        ENDIF
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY mtraco
        imprt(mtipo_imp,'E',1)
        @ PROW(),00 SAY 'NOTA PROMISSORIA No.: '+mnnum_doc
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY 'Emissao:'+DTOC(memissao)
        @ PROW(),PCOL()+1 SAY 'Vencimento:'+DTOC(mvenci)
        IF mvalor <> NIL .AND. ! EMPTY(mvalor)
                @ PROW(),PCOL()+1 SAY 'Fatura:'+mnnum_doc+' Valor:'+TRANSFORM(mvalor,'999,999.99')
        ELSE
                @ PROW(),PCOL()+1 SAY 'Fatura No.:........ Valor:........'
        ENDIF
*       @ PROW()+1,00 SAY mtraco
        DEVPOS(PROW()+1,00);DEVOUT('Valor R$: ('+LTRIM(TRANSFORM(mvalor,'99,999,999.99'))+')')
        mextenso:= '('+RTRIM(EXT(iat(mvalor,2),10))+')'
        mlinha := MLCOUNT(mextenso,80)
        FOR lin = 1 TO mlinha
                mlin := MEMOLINE(mextenso,80,lin,,10)
                DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),80))
        NEXT
        @ PROW()+1,00 SAY mtraco
        mextenso:= 'Reconheco(cemos) a exatidao desta NOTA PROMISSORIA em unica via, na importancia acima que pagarei(emos) a '+mnome_cred+', ou a sua ordem na praca e vencimento indicados.'
        mlinha := 0
        mlinha := MLCOUNT(mextenso,80)
        lin := 0
        FOR lin = 1 TO mlinha
                mlin := MEMOLINE(mextenso,80,lin,,10)
                IF mlin # ' '
                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                ENDIF
        NEXT
*       @ PROW()+1,00 SAY mtraco
        DEVPOS(PROW()+2,00);DEVOUT(PADC('Data do Aceite em ...../...../.....',80))
        DEVPOS(PROW()+2,00);DEVOUT(PADC('...................       .....................      ...................',80))
        DEVPOS(PROW()+1,00);DEVOUT(PADC('   Ass. Emitente               Ass. Sacado              Ass. Avalista   ',80))
        @ PROW()+1,00 SAY mtraco
        IF ! EMPTY(mobs)
                @ PROW()+1,00 SAY mobs
                @ PROW()+1,00 SAY mobs1
                @ PROW()+1,00 SAY mtraco
        ENDIF
        SETPRC(00,00)
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** F I M ************************************




