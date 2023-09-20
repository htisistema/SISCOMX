* TABELA DE CLIENTE
*******************
FUNCTION sac572
***************
LOCAL mprg:='SAC572',;
      opcao,i,mtraco,mtit,mtipo,m_arq:={},lba,cba,mop,tela,mtot_fab,mlin,;
      li,ci,lb,cb,mordem,mcodvend,tela1,tela2,muf,mcidade,marea,mdados,mdia_ini,;
      mdia_fim,mtipo_cli,mdata_ini,mdata_fim,mcli_bloq:=SPACE(1),mpag,mcodoper,;
      mdia_mes:='N',memail:=' ',mbairro:=SPACE(20),mboleto:='N',mboleto_aux:=''

PRIVATE mnome_vend,mcom_ven,mnome_ven,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcompras:=0,mcod_profi:=0,ver_contrato:={}

IF ! ver_nivel(mprg,'RELATORIO DE CONSULTA DE CLIENTES/OUTROS','156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',80)
*---------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*---------------------------------------------------------------------
*** VARIAVEIS IMPRESSAO ***
mtipo_imp := m_indiv[1,18]
***************************
lba := 03
cba := 39

li := ci := 00
lb := 06
cb := 19
op_tela(10,20,14,59,'RELATORIO DE CONSULTA DE CLIENTES/OUTROS')
WHILE .T.
        exibi_prg(mprg)
        mtipo_cli := SPACE(1)
        mtipo_imp := m_indiv[1,18]
        mnome_vend := mnome_ven := SPACE(30)
        mcodvend := mcodoper := mcod_profi := mnum_pag := 0
        muf := SPACE(2)
        mcidade := mbairro := SPACE(20)
        marea := SPACE(15)
        mdia_ini := mdia_fim := SPACE(5)
        mdata_ini := mdata_fim := CTOD('  /  /  ')
        mcli_bloq := 'S'
        mdia_mes  := 'N'
	memail := 'G'
	mboleto:='N'
	setcor(10)
        @ 0,0 PROMPT ' Listagem de Clientes (GERAL)           '
        @ 1,0 PROMPT ' Listagem de Clientes (RESUMO)          '
        @ 2,0 PROMPT ' Emissao do Cadastro GERAL do CLIENTE   '
        @ 3,0 PROMPT ' Listagem de Cliente COM ou SEM  Email  '
        @ 4,0 PROMPT ' Codigo - Nome - Fone - Fax - Cidade    '
        MENU TO mop
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mop = 3
                sac5cad1()
                LOOP
        ENDIF
        op_tela(05,00,18,79)
        DEVPOS(00,00);DEVOUT('Codigo vendedor:')
        DEVPOS(01,00);DEVOUT('Codigo Operador:')
        DEVPOS(02,00);DEVOUT('Estado.........:')
        DEVPOS(02,20);DEVOUT('Cidade:')
        DEVPOS(02,49);DEVOUT('Bairro:')
        DEVPOS(03,00);DEVOUT('Area...........:')
        DEVPOS(04,00);DEVOUT('Dia/Mes Inicial:')
        DEVPOS(04,23);DEVOUT('Dia/Mes Final:')
        DEVPOS(04,44);DEVOUT('** Aniversario **')
        DEVPOS(05,00);DEVOUT('Data Inicial:')
        DEVPOS(05,23);DEVOUT('Data Final:')
        DEVPOS(05,44);DEVOUT('** Cadastro ** Dia e Mes [S/N]:')
        DEVPOS(06,00);DEVOUT('Tipo de Cliente.:')
        DEVPOS(07,00);DEVOUT('Cliente Bloqueado [S/N/O]..:')
        DEVPOS(08,00);DEVOUT('Emial: [C]om [S]em [G]eral.:')
        DEVPOS(09,00);DEVOUT('Codigo da Profissao........:')
        DEVPOS(10,00);DEVOUT('Imprimir apartir da pagina.:')
        DEVPOS(11,00);DEVOUT('So cliente ENVIO DE BOLETO.:')
        @ 00,17 GET mcodvend PICT '999' VALID ven(mcodvend,00,20) WHEN mop <> 3
        @ 01,17 GET mcodoper PICT '999' VALID ven(mcodoper,01,20) WHEN mop <> 3
        @ 02,17 GET muf PICT '@!' VALID v_uf(muf) WHEN mop <> 3
        @ 02,28 GET mcidade PICT '@!' WHEN mop <> 3
        @ 02,56 GET mbairro PICT '@!' WHEN mop <> 3
        @ 03,17 GET marea PICT '@!' WHEN mop <> 3
        @ 04,17 GET mdia_ini PICT '99/99'       //VALID DDMM(mdia_ini)
        @ 04,38 GET mdia_fim PICT '99/99' VALID IF(VAL(SUBSTR(mdia_ini,4,2))>VAL(SUBSTR(mdia_fim,4,2)),.F.,.T.) WHEN ! EMPTY(mdia_ini)
        @ 05,14 GET mdata_ini PICT '99/99/99'
        @ 05,35 GET mdata_fim PICT '99/99/99' VALID IF(mdata_fim<mdata_ini,.F.,.T.) WHEN ! EMPTY(mdata_ini)
        @ 05,75 GET mdia_mes PICT '@!' VALID mdia_mes $ 'S,N' WHEN ! EMPTY(mdata_ini)
        @ 06,17 GET mtipo_cli PICT '@!' WHEN men_get(07,17,'[F]isica [J]uridica [R]evenda [P]otencial [C]liente [E]xcluido F[U]cionario [O]utros [A]ssociado ou em BRANCO p/todos - <ESC>p/Sair') VALID lim_get() .AND. mtipo_cli $ ' ,F,J,R,P,C,E,U,O,A'
        @ 07,29 GET mcli_bloq PICT '@!' VALID mcli_bloq $ 'S,N,O' .AND. lim_get() WHEN men_get(07,17,'[S]im [N]ao ou [O] So os clientes BLOQUEADOS')
        @ 08,29 GET memail PICT '@!' VALID memail $ 'C,S,G' WHEN mop < 4
        @ 09,29 GET mcod_profi PICT '99999' VALID ver_profi(mcod_profi,09,35)
        @ 10,29 GET mnum_pag PICT '99,999'
        @ 11,29 GET mboleto PICT '@!' VALID mboleto $ 'S,N'
        READ
        wvw_lclosewindow()
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mop < 4 .OR. mop = 5
                op_tela(10,10,16,29,' Tipo Ordem ')
                setcor(10)
                @ 0,0 PROMPT ' Razao Social '
                @ 1,0 PROMPT ' Nome Fantas. '
                @ 2,0 PROMPT '    Codigo    '
                @ 3,0 PROMPT '    Cidade    '
                @ 4,0 PROMPT ' Data Nascim. '
                @ 5,0 PROMPT ' Data Cadastro'
                @ 6,0 PROMPT '   Vendedor   '
                MENU TO mordem
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        ***************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ***************
        IF mop = 1
                SELE('cli')
                IF mordem  = 1
                        ***************
                        ORDSETFOCUS(2)
                        ***************
                        mtipo := 'p/ordem ALFABETICA (Razao Social)'
                ELSEIF mordem = 2
                        ***************
                        ORDSETFOCUS(8)
                        ***************
                        mtipo := 'p/ordem de ALFABETIDA (Nome Fantasia)'
                ELSEIF mordem = 3
                        ***************
                        ORDSETFOCUS(1)
                        ***************
                        mtipo := 'p/ordem de CODIGO'
                ELSEIF mordem = 4
                        ***************
                        ORDSETFOCUS(5)
                        ***************
                        mtipo := 'p/ordem de ESTADO/CIDADE/BAIRRO'
                ELSEIF mordem = 6
                        IF mdia_mes = 'S'
                                ***************
                                ORDSETFOCUS(13)
                                ***************
                        ELSE
                                ***************
                                ORDSETFOCUS(12)
                                ***************
                        ENDIF
                        mtipo := 'p/ordem de DATA DE CADASTRO'
                ELSEIF mordem = 7
                        ***************
                        ORDSETFOCUS(6)
                        ***************
                        mtipo := 'p/ordem de VENDEDOR'
                ENDIF
                GO TOP
                mtot_fab := 0
                ASIZE(m_arq,0)
                i = 0
                mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                IF ! imp_arq('CON_CLI.REL','R')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                WHILE ! EOF()
                        //prog_imp(RECNO(),cli->cod_cli)
                        mboleto_aux := IF(AT('S',cli->prazo_pag) > 0,'S','N')
                        IF  ! EMPTY(mtipo_cli)
                                IF mtipo_cli = 'J' .OR. mtipo_cli = 'F'
                                        IF mtipo_cli = 'J' .AND. EMPTY(cli->cgc)
                                                SKIP;LOOP
                                        ELSEIF mtipo_cli = 'F' .AND. EMPTY(cli->cpf)
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        IF cli->tipo <> mtipo_cli
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        IF (EMPTY(mtipo_cli) .AND. cli->tipo = 'E');
                           .OR. (mcli_bloq = 'N' .AND. cli->bloqueio = 'S');
                           .OR. (mcli_bloq = 'O' .AND. cli->bloqueio = 'N');
                           .OR. (! EMPTY(mcodvend) .AND. STRZERO(mcodvend,3) <> cli->codvend);
                           .OR. (! EMPTY(mcodoper) .AND. STRZERO(mcodoper,3) <> cli->codoper);
                           .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                           .OR. (! EMPTY(mcidade) .AND. mcidade <> cli->cidade);
                           .OR. (! EMPTY(mbairro) .AND. mbairro <> cli->bairro);
                           .OR. (! EMPTY(marea) .AND. marea <> cli->area);
                           .OR. (! EMPTY(mcod_profi) .AND. STRZERO(mcod_profi,5) <> cli->cod_profi);
                           .OR. (mboleto = 'S' .AND. mboleto_aux='N');
                           .OR. (memail = 'C' .AND. EMPTY(cli->email));
                           .OR. (memail = 'S' .AND. ! EMPTY(cli->email))
*                          .OR. (! EMPTY(mdata_ini) .AND. (cli->data_cad < mdata_ini .OR. cli->data_cad > mdata_fim))
*                          .OR. (! EMPTY(mdia_ini) .AND. EMPTY(cli->nascimento));
                                SKIP;LOOP
                        ENDIF
                        IF ! EMPTY(mdata_ini)
                                IF mdia_mes = 'S'
                                        IF CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') >= CTOD(SUBSTR(DTOC(mdata_ini),1,5)+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') <= CTOD(SUBSTR(DTOC(mdata_fim),1,5)+'/00') .AND. ! EMPTY(cli->data_cad)
                                                           //   1             2             3               4               5
                                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                            cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                            cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                                SKIP;LOOP
                                        ELSE
                                                SKIP;LOOP
                                        ENDIF

                                ELSEIF (! EMPTY(mdata_ini) .AND. (cli->data_cad >= mdata_ini .AND. cli->data_cad <= mdata_fim))
                                                    //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ELSE
                                        SKIP;LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mdia_ini)
                                IF CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->nascimento)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas1)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome1   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas1),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas2)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome2   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas2),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas3)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome3   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas3),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas4)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome4   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas4),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas5)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome5   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas5),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                                    cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                                        SKIP;LOOP
                                ENDIF
                        ELSE
                                           //   1             2             3               4               5
                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                            cli->dat_emi ,cli->ultcomp_m,cli->numped_m ,cli->vlrcomp_m ,cli->num_ped  ,;
                                            cli->dia_atras/cli->qtd_doc ,cli->cod_profi})
                        ENDIF
                        SKIP
                ENDDO
                IF mordem = 5
                        mtipo := 'p/ordem de DATA NASCIMENTO'
                        ASORT(m_arq,,,{|x,y| x[14] < y[14]})
                ENDIF
                mtipo := mtipo + ' (GERAL)'
                mlin := 0
                mpag := 1
                mtit := 'Relatorio Cadastro Clientes'
                cabecalho(mpag,mtit,mtipo)
                IF ! EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. ! EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade+'  Area: '+marea)
                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade+'  Area: '+marea)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF ! EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade)
                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF ! EMPTY(muf) .AND. EMPTY(mcidade) .AND. EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf)
                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF EMPTY(muf) .AND. EMPTY(mcidade) .AND. ! EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Area: '+marea)
                        DEVPOS(PROW(),00);DEVOUT('Area: '+marea)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+mcidade)
                        DEVPOS(PROW(),00);DEVOUT('Cidade: '+mcidade)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. ! EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+mcidade+'  Area: '+marea)
                        DEVPOS(PROW(),00);DEVOUT('Cidade: '+mcidade+'  Area: '+marea)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ELSEIF ! EMPTY(muf) .AND. EMPTY(mcidade) .AND. ! EMPTY(marea)
                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Area: '+marea)
                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Area: '+marea)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF ! EMPTY(mcodvend)
                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF ! EMPTY(mcodoper)
                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                        DEVPOS(PROW(),00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                i:=0
                FOR i = 1 TO LEN(m_arq)
                        //prog_imp(i,m_arq[i,1])
                        IF mlin = 5
                                EJECT
                                mlin := 0
                                mpag ++
                                cabecalho(mpag,mtit,mtipo)
                                IF ! EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. ! EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade+'  Area: '+marea)
                                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade+'  Area: '+marea)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF ! EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade)
                                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Cidade: '+mcidade)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF ! EMPTY(muf) .AND. EMPTY(mcidade) .AND. EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf)
                                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF EMPTY(muf) .AND. EMPTY(mcidade) .AND. ! EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Area: '+marea)
                                        DEVPOS(PROW(),00);DEVOUT('Area: '+marea)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+mcidade)
                                        DEVPOS(PROW(),00);DEVOUT('Cidade: '+mcidade)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF EMPTY(muf) .AND. ! EMPTY(mcidade) .AND. ! EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Cidade: '+mcidade+'  Area: '+marea)
                                        DEVPOS(PROW(),00);DEVOUT('Cidade: '+mcidade+'  Area: '+marea)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ELSEIF ! EMPTY(muf) .AND. EMPTY(mcidade) .AND. ! EMPTY(marea)
                                        DEVPOS(PROW()+1,00);DEVOUT('Estado: '+muf+'  Area: '+marea)
                                        DEVPOS(PROW(),00);DEVOUT('Estado: '+muf+'  Area: '+marea)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                IF ! EMPTY(mcodvend)
                                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                IF ! EMPTY(mcodoper)
                                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('Codigo.......: '+m_arq[i,1])
                        DEVPOS(PROW(),30);DEVOUT('Data Cadastro: '+DTOC(m_arq[i,15]))
                        IF ! EMPTY(m_arq[i,5])
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('CNPJ:'+TRANSFORM(m_arq[i,5],'@@R 99.999.999/9999-99')+' -  Insc.: '+m_arq[i,28])
                        ELSE
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('CPF: '+TRANSFORM(m_arq[i,4],'@@R 999.999.999-99')+' -  R.G.: '+RTRIM(m_arq[i,29])+' Orgao: '+RTRIM(m_arq[i,30])+' Emissao: '+DTOC(m_arq[i,31]))
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT('Razao Social.: '+m_arq[i,2])
                        //DEVPOS(PROW(),PCOL()+2);DEVOUT('Nascimento: '+SUBSTR(DTOC(m_arq[i,14]),1,5))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Nascimento: '+m_arq[i,14])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Telefone.: '+m_arq[i,11]+' / '+m_arq[i,12])
                        DEVPOS(PROW()+1,00);DEVOUT('Nome Fantasia: '+m_arq[i,3])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Fax......: '+m_arq[i,13])
                        DEVPOS(PROW()+1,00);DEVOUT('Endereco.....: '+m_arq[i,6])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Prazo Pg.: '+m_arq[i,25])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('e-mail: '+m_arq[i,20])
                        DEVPOS(PROW()+1,00);DEVOUT('Bairro.......: '+m_arq[i,7])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Comprador: '+m_arq[i,19])
                        DEVPOS(PROW()+1,00);DEVOUT('Cidade.......: '+m_arq[i,8])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Contato..: '+m_arq[i,18])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Profissao: '+m_arq[i,37])
                        ver_profi(VAL(m_arq[i,37]),PROW(),PCOL()+1,1)
                        DEVPOS(PROW()+1,00);DEVOUT('Estado.......: '+m_arq[i,9]+' -  CEP: '+m_arq[i,10])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Area: '+m_arq[i,26])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Limite...: '+TRANSFORM(m_arq[i,24],'99,999,999.99'))
                        mcompras:=0
                        mcompras := ver_compras(VAL(m_arq[i,1]))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Saldo: '+TRANSFORM(m_arq[i,24] - mcompras,'999,999.99'))
                        mnome_ven := SPACE(30)
                        ver_ven(m_arq[i,17],1)
                        mnome_ven := sen->snome
                        DEVPOS(PROW()+1,00);DEVOUT('Maior Compra.: '+DTOC(m_arq[i,32]))
                        DEVPOS(PROW(),PCOL()+3);DEVOUT('No.Pedido: '+m_arq[i,33])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT('Valor Pedido: '+TRANSFORM(m_arq[i,34],'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Ult.Compra...: '+DTOC(m_arq[i,21]))
                        DEVPOS(PROW(),PCOL()+3);DEVOUT('No.Pedido: '+m_arq[i,35])
                        DEVPOS(PROW(),PCOL()+3);DEVOUT('Valor Pedido: '+TRANSFORM(m_arq[i,22],'99,999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Med.Dias Atraso: '+TRANSFORM(m_arq[i,36],'999,999'))
                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor Responsavel: '+m_arq[i,17])
                        DEVPOS(PROW(),28);DEVOUT(mnome_ven)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Observacao: '+m_arq[i,27])
                        imprt(mtipo_imp,'N',1)
                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                        mlin ++
                        mtot_fab ++
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT('Total de Clientes: '+TRANSFORM(mtot_fab,'999,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('CON_CLI.REL')
                /*
                IF mimp_tipo = 2
                        lertexto('CON_CLI.REL')
                ELSEIF mtipo_imp = 'D'
                        
                ELSE
                        MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
                ENDIF
                */
        ELSEIF mop = 2
                SELE('cli')
                IF mordem  = 1
                        ***************
                        ORDSETFOCUS(2)
                        ***************
                        mtipo := 'p/ordem ALFABETICA (Razao Social)'
                ELSEIF mordem = 2
                        ***************
                        ORDSETFOCUS(8)
                        ***************
                        mtipo := 'p/ordem de ALFABETIDA (Nome Fantasia)'
                ELSEIF mordem = 3
                        ***************
                        ORDSETFOCUS(1)
                        ***************
                        mtipo := 'p/ordem de CODIGO'
                ELSEIF mordem = 4
                        ***************
                        ORDSETFOCUS(5)
                        ***************
                        mtipo := 'p/ordem de ESTADO/CIDADE/BAIRRO'
                ELSEIF mordem = 6
                        ***************
                        ORDSETFOCUS(12)
                        ***************
                        mtipo := 'p/ordem de DATA DE CADASTRO'
                ELSEIF mordem = 7
                        ***************
                        ORDSETFOCUS(6)
                        ***************
                        mtipo := 'p/ordem de VENDEDOR'
                ENDIF
                GO TOP
                ASIZE(m_arq,0)
                i = 0
                mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                IF ! imp_arq('CON_CLI.REL','R')
                        LOOP
                ENDIF
                WHILE ! EOF()
                        prog_imp(RECNO(),STR(cli->cod_cli,5))
                        IF  ! EMPTY(mtipo_cli)
                                IF mtipo_cli = 'J' .OR. mtipo_cli = 'F'
                                        IF mtipo_cli = 'J' .AND. EMPTY(cli->cgc)
                                                SKIP;LOOP
                                        ELSEIF mtipo_cli = 'F' .AND. EMPTY(cli->cpf)
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        IF cli->tipo <> mtipo_cli
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        mboleto_aux := IF(AT('S',cli->prazo_pag) > 0,'S','N')
                        IF (EMPTY(mtipo_cli) .AND. cli->tipo = 'E');
                           .OR. (mcli_bloq = 'N' .AND. cli->bloqueio = 'S');
                           .OR. (mcli_bloq = 'O' .AND. cli->bloqueio = 'N');
                           .OR. (! EMPTY(mcodvend) .AND. STRZERO(mcodvend,3) <> cli->codvend);
                           .OR. (! EMPTY(mcodoper) .AND. STRZERO(mcodoper,3) <> cli->codoper);
                           .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                           .OR. (! EMPTY(mcidade) .AND. mcidade <> cli->cidade);
                           .OR. (! EMPTY(mbairro) .AND. mbairro <> cli->bairro);
                           .OR. (! EMPTY(marea) .AND. marea <> cli->area);
                           .OR. (! EMPTY(mcod_profi) .AND. STRZERO(mcod_profi,5) <> cli->cod_profi);
                           .OR. (mboleto = 'S' .AND. mboleto_aux='N');
                           .OR. (memail = 'C' .AND. EMPTY(cli->email));
                           .OR. (memail = 'S' .AND. ! EMPTY(cli->email))
*                          .OR. (! EMPTY(mdia_ini) .AND. EMPTY(cli->nascimento));
                                SKIP;LOOP
                        ENDIF
                        IF ! EMPTY(mdata_ini)
                                IF mdia_mes = 'S'
                                        IF CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') >= CTOD(SUBSTR(DTOC(mdata_ini),1,5)+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') <= CTOD(SUBSTR(DTOC(mdata_fim),1,5)+'/00') .AND. ! EMPTY(cli->data_cad)
                                                           //   1             2             3               4               5
                                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                            cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                                SKIP;LOOP
                                        ELSE
                                                SKIP;LOOP
                                        ENDIF

                                ELSEIF (! EMPTY(mdata_ini) .AND. (cli->data_cad >= mdata_ini .AND. cli->data_cad <= mdata_fim))
                                                    //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ELSE
                                        SKIP;LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mdia_ini)
                                IF CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->nascimento)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas1)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome1   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas1),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas2)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome2   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas2),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas3)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome3   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas3),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas4)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome4   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas4),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas5)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome5   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas5),1,5) ,cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                        ELSE
                                           //   1             2             3               4               5
                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                            cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})

                        ENDIF
                        SKIP
                ENDDO
/*
                IF ! EMPTY(mnum_pag)
                        mpag := mnum_pag
                        mnum_pag := mnum_pag * 55
                        IF mnum_pag > LEN(m_arq)
                                atencao('Nao existe esta quantidade de paginas...')
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                LOOP
                        ENDIF
                ELSE
*/
                        mpag := mnum_pag := 1
//                ENDIF
                IF mordem = 5
                        mtipo := 'p/ordem de DATA NASCIMENTO'
                        ASORT(m_arq,,,{|x,y| x[14] < y[14]})
                ENDIF
                mtipo := mtipo + ' (RESUMO)'
                mtit := 'Tabela de Codigo dos Clientes'
                cabecalho(mpag,mtit,mtipo,mprg)
                IF ! EMPTY(mcodvend)
                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF ! EMPTY(mcodoper)
                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                DEVPOS(PROW(),06);DEVOUT('Nome do Cliente')
                DEVPOS(PROW(),48);DEVOUT('C.P.F./C.G.C.')
                DEVPOS(PROW(),69);DEVOUT('Fone')
                DEVPOS(PROW(),84);DEVOUT('Fax')
                DEVPOS(PROW(),100);DEVOUT('Nasc.')
                DEVPOS(PROW(),110);DEVOUT('Dta.Cad.')
                DEVPOS(PROW(),123);DEVOUT('Tipo')
                DEVPOS(PROW(),133);DEVOUT('Vend')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                i := 0
                FOR i = 1 TO LEN(m_arq)
                        //prog_imp(i,m_arq[i,1])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(m_arq[i,1])
                        DEVPOS(PROW(),06);DEVOUT(m_arq[i,2])
                        IF ! EMPTY(m_arq[i,4])
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_arq[i,4],'@R 999.999.999-99'+'    ')
                        ELSE
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(m_arq[i,5],'@R 99.999.999/9999-99')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,11])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,13])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,14])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,15])
                        IF m_arq[i,16] = 'R'
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Revenda ')
                        ELSEIF ! EMPTY(cli->cpf)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Fisica  ')
                        ELSE
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Juridica')
                        ENDIF
                        DEVPOS(PROW(),PCOL()+5);DEVOUT(m_arq[i,17])

                        DEVPOS(PROW()+1,00);DEVOUT('Fantasia: '+m_arq[i,3])
                        //DEVPOS(PROW(),PCOL()+1);DEVOUT('Nasc: '+SUBSTR(DTOC(m_arq[i,14]),1,5))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Nasc: '+m_arq[i,14])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Contato: '+m_arq[i,18])
                        DEVPOS(PROW(),PCOL()+1);DEVOUT('e-mail: '+m_arq[i,20])
                        DEVPOS(PROW()+1,00);DEVOUT('Ult.Compra: '+TRANSFORM(m_arq[i,21],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.:'+TRANSFORM(m_arq[i,22],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Acumulado:'+TRANSFORM(m_arq[i,23],'999,999.99'))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Limite...: '+TRANSFORM(m_arq[i,24],'99,999,999.99'))
                        mcompras:=0
                        mcompras := ver_compras(VAL(m_arq[i,1]))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Saldo: '+TRANSFORM(m_arq[i,24] - mcompras,'999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('Endereco: '+ALLTRIM(m_arq[i,6])+' - '+ALLTRIM(m_arq[i,7])+' - '+ALLTRIM(m_arq[i,8])+' - '+ALLTRIM(m_arq[i,9]))
                        DEVPOS(PROW()+1,00);DEVOUT('Bloqueio Credito: '+m_arq[i,35])
                        IF m_arq[i,35] = 'S'
                                DEVPOS(PROW(),PCOL());DEVOUT(' - Data:'+DTOC(m_arq[i,33])+' - Motivo:'+ALLTRIM(m_arq[i,34]))
                        ENDIF
                        ver_contrato(m_arq[i,1])
                        IF LEN(ver_contrato) > 0
                                DEVPOS(PROW(),PCOL());DEVOUT('       Contrato - Dia Venc.: '+ver_contrato[1,5]+' - Valor:'+ALLTRIM(TRANSFORM(ver_contrato[1,4],'999,999.99')))
                        ENDIF
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                        IF PROW() >= 55
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg)
                                IF ! EMPTY(mcodvend)
                                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                IF ! EMPTY(mcodoper)
                                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                imprt(mtipo_imp,'C',1)
                                DEVPOS(PROW(),00);DEVOUT('Cod.')
                                DEVPOS(PROW(),06);DEVOUT('Nome do Cliente')
                                DEVPOS(PROW(),48);DEVOUT('C.P.F./C.G.C.')
                                DEVPOS(PROW(),69);DEVOUT('Fone')
                                DEVPOS(PROW(),84);DEVOUT('Fax')
                                DEVPOS(PROW(),100);DEVOUT('Nasc.')
                                DEVPOS(PROW(),110);DEVOUT('Ult.Comp.')
                                DEVPOS(PROW(),123);DEVOUT('Vlr.Comp.')
                                DEVPOS(PROW(),133);DEVOUT('Vend')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                        ENDIF
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT('Total de Clientes: '+TRANSFORM(LEN(m_arq),'999,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('CON_CLI.REL')
        ELSEIF mop = 4
	        op_tela(10,10,11,65,'Opcao de Relatorio')
		DEVPOS(00,01);DEVOUT('Digite a Opcao que deseja [C]om Email [S]em Email:')
	        @ 00,52 GET memail PICT '@!' VALID memail $ 'C,S'
	        READ
	        wvw_lclosewindow()
        	IF LASTKEY() = 27
                	LOOP
	        ENDIF
                
		SELE('cli');ORDSETFOCUS(2)
                GO TOP
                mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                IF ! imp_arq('EMAIL.REL','R')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                WHILE ! EOF()
                        prog_imp(RECNO(),STR(cli->cod_cli,5))
                        IF  ! EMPTY(mtipo_cli)
                                IF mtipo_cli = 'J' .OR. mtipo_cli = 'F'
                                        IF mtipo_cli = 'J' .AND. EMPTY(cli->cgc)
                                                SKIP;LOOP
                                        ELSEIF mtipo_cli = 'F' .AND. EMPTY(cli->cpf)
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        IF cli->tipo <> mtipo_cli
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        mboleto_aux := IF(AT('S',cli->prazo_pag) > 0,'S','N')
                        IF (EMPTY(mtipo_cli) .AND. cli->tipo = 'E');
                           .OR. (mcli_bloq = 'N' .AND. cli->bloqueio = 'S');
                           .OR. (mcli_bloq = 'O' .AND. cli->bloqueio = 'N');
                           .OR. (! EMPTY(mcodvend) .AND. STRZERO(mcodvend,3) <> cli->codvend);
                           .OR. (! EMPTY(mcodoper) .AND. STRZERO(mcodoper,3) <> cli->codoper);
                           .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                           .OR. (! EMPTY(mcidade) .AND. mcidade <> cli->cidade);
                           .OR. (! EMPTY(mbairro) .AND. mbairro <> cli->bairro);
                           .OR. (! EMPTY(mcod_profi) .AND. STRZERO(mcod_profi,5) <> cli->cod_profi);
                           .OR. (! EMPTY(marea) .AND. marea <> cli->area);
                           .OR. (mboleto = 'S' .AND. mboleto_aux='N');
                           .OR. (memail = 'C' .AND. EMPTY(cli->email));
                           .OR. (memail = 'S' .AND. ! EMPTY(cli->email))
                                SKIP;LOOP
                        ENDIF
                        DEVPOS(PROW(),00);DEVOUT(cli->email)
                        SKIP
                        IF ! EOF()
                                DEVPOS(PROW()+1,00);DEVOUT('')
                        ENDIF
                        IF PROW() >= 57
                                EJECT
                        ENDIF
                ENDDO
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('EMAIL.REL')
        ELSEIF mop = 5
                SELE('cli')
                IF mordem  = 1
                        ***************
                        ORDSETFOCUS(2)
                        ***************
                        mtipo := 'p/ordem ALFABETICA (Razao Social)'
                ELSEIF mordem = 2
                        ***************
                        ORDSETFOCUS(8)
                        ***************
                        mtipo := 'p/ordem de ALFABETIDA (Nome Fantasia)'
                ELSEIF mordem = 3
                        ***************
                        ORDSETFOCUS(1)
                        ***************
                        mtipo := 'p/ordem de CODIGO'
                ELSEIF mordem = 4
                        ***************
                        ORDSETFOCUS(5)
                        ***************
                        mtipo := 'p/ordem de ESTADO/CIDADE/BAIRRO'
                ELSEIF mordem = 6
                        ***************
                        ORDSETFOCUS(12)
                        ***************
                        mtipo := 'p/ordem de DATA DE CADASTRO'
                ELSEIF mordem = 7
                        ***************
                        ORDSETFOCUS(6)
                        ***************
                        mtipo := 'p/ordem de VENDEDOR'
                ENDIF
                GO TOP
                ASIZE(m_arq,0)
                i = 0
                mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                IF ! imp_arq('CON_CLI.REL','R')
                        LOOP
                ENDIF
                WHILE ! EOF()
                        prog_imp(RECNO(),STR(cli->cod_cli,5))
                        IF  ! EMPTY(mtipo_cli)
                                IF mtipo_cli = 'J' .OR. mtipo_cli = 'F'
                                        IF mtipo_cli = 'J' .AND. EMPTY(cli->cgc)
                                                SKIP;LOOP
                                        ELSEIF mtipo_cli = 'F' .AND. EMPTY(cli->cpf)
                                                SKIP;LOOP
                                        ENDIF
                                ELSE
                                        IF cli->tipo <> mtipo_cli
                                                SKIP;LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                        mboleto_aux := IF(AT('S',cli->prazo_pag) > 0,'S','N')
                        IF (EMPTY(mtipo_cli) .AND. cli->tipo = 'E');
                           .OR. (mcli_bloq = 'N' .AND. cli->bloqueio = 'S');
                           .OR. (mcli_bloq = 'O' .AND. cli->bloqueio = 'N');
                           .OR. (! EMPTY(mcodvend) .AND. STRZERO(mcodvend,3) <> cli->codvend);
                           .OR. (! EMPTY(mcodoper) .AND. STRZERO(mcodoper,3) <> cli->codoper);
                           .OR. (! EMPTY(muf) .AND. muf <> cli->uf);
                           .OR. (! EMPTY(mcidade) .AND. mcidade <> cli->cidade);
                           .OR. (! EMPTY(mbairro) .AND. mbairro <> cli->bairro);
                           .OR. (! EMPTY(marea) .AND. marea <> cli->area);
                           .OR. (! EMPTY(mcod_profi) .AND. STRZERO(mcod_profi,5) <> cli->cod_profi);
                           .OR. (mboleto = 'S' .AND. mboleto_aux='N');
                           .OR. (memail = 'C' .AND. EMPTY(cli->email));
                           .OR. (memail = 'S' .AND. ! EMPTY(cli->email))
*                          .OR. (! EMPTY(mdia_ini) .AND. EMPTY(cli->nascimento));
                                SKIP;LOOP
                        ENDIF
                        IF ! EMPTY(mdata_ini)
                                IF mdia_mes = 'S'
                                        IF CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') >= CTOD(SUBSTR(DTOC(mdata_ini),1,5)+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_cad),1,5)+'/00') <= CTOD(SUBSTR(DTOC(mdata_fim),1,5)+'/00') .AND. ! EMPTY(cli->data_cad)
                                                           //   1             2             3               4               5
                                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                            cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                                SKIP;LOOP
                                        ELSE
                                                SKIP;LOOP
                                        ENDIF

                                ELSEIF (! EMPTY(mdata_ini) .AND. (cli->data_cad >= mdata_ini .AND. cli->data_cad <= mdata_fim))
                                                    //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ELSE
                                        SKIP;LOOP
                                ENDIF
                        ENDIF
                        IF ! EMPTY(mdia_ini)
                                IF CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->nascimento),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->nascimento)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas1),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas1)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome1   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas1 ),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas2),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas2)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome2   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas2 ),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas3),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas3)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome3   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas3 ),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas4),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas4)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome4   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas4 ),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                                IF CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') >= CTOD(mdia_ini+'/00') .AND. CTOD(SUBSTR(DTOC(cli->data_nas5),1,5)+'/00') <= CTOD(mdia_fim+'/00') .AND. ! EMPTY(cli->data_nas5)
                                                   //   1             2             3               4               5
                                        AADD(m_arq,{STR(cli->cod_cli,5) ,cli->nome5   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                                    cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                                    cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->data_nas5 ),1,5),cli->data_cad ,;
                                                    cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                                    cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                                    cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                                    cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})
                                        SKIP;LOOP
                                ENDIF
                        ELSE
                                           //   1             2             3               4               5
                                AADD(m_arq,{STR(cli->cod_cli,5) ,cli->razao   ,cli->nome      ,cli->cpf       ,cli->cgc      ,;
                                            cli->endereco,cli->bairro  ,cli->cidade    ,cli->uf        ,cli->cep      ,;
                                            cli->tel1    ,cli->tel2    ,cli->fax       ,SUBSTR(DTOC(cli->nascimento),1,5),cli->data_cad ,;
                                            cli->tipo    ,cli->codvend ,cli->contato   ,cli->comprado  ,cli->email    ,;
                                            cli->ult_comp,cli->vlr_comp,cli->tot_comp  ,cli->limite    ,cli->prazo_pag,;
                                            cli->area    ,cli->obs     ,cli->insc      ,cli->rg        ,cli->orgao    ,;
                                            cli->dat_emi ,cli->cod_profi,cli->data_bloq,cli->obs_bloq,cli->bloqueio})

                        ENDIF
                        SKIP
                ENDDO
                IF mordem = 5
                        mtipo := 'p/ordem de DATA NASCIMENTO'
                        ASORT(m_arq,,,{|x,y| x[14] < y[14]})
                ENDIF
                mpag := 1
                mtit := 'Tabela de Codigo dos Clientes'
                cabecalho(mpag,mtit,mtipo,mprg)
                IF ! EMPTY(mcodvend)
                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF ! EMPTY(mcodoper)
                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                DEVPOS(PROW(),06);DEVOUT('Nome do Cliente')
                DEVPOS(PROW(),48);DEVOUT('Fone')
                DEVPOS(PROW(),64);DEVOUT('Fone')
                DEVPOS(PROW(),80);DEVOUT('Cidade')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                IF ! EMPTY(mnum_pag)
                        i := mnum_pag * 55
                        mpag := mnum_pag
                        IF i < mnum_pag
                                atencao('Nao existe esta quantidade de paginas...')
                                LOOP
                        ENDIF
                ELSE
                        i := 0
                ENDIF

                FOR i = 1 TO LEN(m_arq)
                        //prog_imp(i,m_arq[i,1])
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(m_arq[i,1])
                        DEVPOS(PROW(),06);DEVOUT(m_arq[i,2])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,11])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,12])
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(m_arq[i,8])
                        IF PROW() >= 55
                                EJECT
                                mpag ++
                                cabecalho(mpag,mtit,mtipo,mprg)
                                IF ! EMPTY(mcodvend)
                                        DEVPOS(PROW()+1,00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW(),00);DEVOUT('Vendedor: '+STRZERO(mcodvend,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                IF ! EMPTY(mcodoper)
                                        DEVPOS(PROW()+1,00);DEVOUT('Operador: '+STRZERO(mcodoper,3)+' - '+mnome_vend)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Cod.')
                                DEVPOS(PROW(),06);DEVOUT('Nome do Cliente')
                                DEVPOS(PROW(),48);DEVOUT('Fone')
                                DEVPOS(PROW(),64);DEVOUT('Fone')
                                DEVPOS(PROW(),80);DEVOUT('Cidade')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT('Total de Clientes: '+TRANSFORM(LEN(m_arq),'999,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('CON_CLI.REL')
        ENDIF
        //wvw_lclosewindow()
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************* f i m ****************************************
