* CONVERSAO DO BANCO DE DADOS KI-PRECO
************************************************
FUNCTION sacconverte
********************
LOCAL mprg:='KIPRECO',opcao,nulo := 'NULL',minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar

op_tela(10,10,16,80,'CONVERSAO DE TABELAS ')
exibi_prg(mprg)
mcli := mforn := mprod := mreceber := mapagar := 'X'
DEVPOS(00,01);DEVOUT('Deseja Exportar Clientes...:')
DEVPOS(01,01);DEVOUT('Deseja Exportar Fornecedor.:')
DEVPOS(02,01);DEVOUT('Deseja Exportar Produto....:')
DEVPOS(03,01);DEVOUT('Deseja Exportar Doc.Receber:')
DEVPOS(04,01);DEVOUT('Deseja Exportar Doc.Apagar.:')
@ 05,00 TO 05,100
@ 00,30 GET mcli PICT '@!'
@ 01,30 GET mforn PICT '@!'
@ 02,30 GET mprod PICT '@!'
@ 03,30 GET mreceber PICT '@!'
@ 04,30 GET mapagar PICT '@!'
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF

dbUseArea( .T., 'DBFCDX','msac_pag.dbf', "mpag" )
dbUseArea( .T., 'DBFCDX','msac_cli.dbf', "mcli" )
dbUseArea( .T., 'DBFCDX','msac_for.dbf', "mfor" )
dbUseArea( .T., 'DBFCDX','msac_mat.dbf', "mmat" )
dbUseArea( .T., 'DBFCDX','msac_rec.dbf', "mrec" )
dbUseArea( .T., 'DBFCDX','msac_sen.dbf', "msen" )
IF ! EMPTY(mcli)
        SELE('mcli');GO TOP
        DEVPOS(06,01);DEVOUT('CONVERTENDO ARQUIVO DE CLIENTES....'+TRANSFORM(LASTREC(),'999,999,999')+SPACE(30))
        WHILE ! EOF()
                prog_imp(RECNO(),STRZERO(VAL(mcli->codigo),5)+' - '+mcli->nome)
                minsc := STRTRAN(mcli->inscr_ci,'.','')
                minsc := STRTRAN(minsc,'-','')
                minsc := STRTRAN(minsc,'/','')
                minsc := STRTRAN(minsc,",","")
                IF VAL(minsc) = 0
                        minsc := ''
                ENDIF

                mcpf := STRTRAN(mcli->cgc_cpf,'.','')
                mcpf := STRTRAN(mcpf,'-','')
                mcpf := STRTRAN(mcpf,'/','')
                mcpf := STRTRAN(mcpf,",","")
                IF VAL(mcpf) = 0
                        mcpf := ''
                ENDIF
		mcpf := SUBSTR(mcpf,1,11)
                sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli   ,'+; //1
                'razao     ,'+; //2
                'nome      ,'+; //3
                'data_cad  ,'+; //4
                'data_atu  ,'+; //5
                'tipo      ,'+; //6
                'nascimento,'+; //7
                'endereco  ,'+; //8
                'bairro    ,'+; //9
                'cidade    ,'+; //10
                'uf        ,'+; //11
                'cep       ,'+; //12
                'tel1      ,'+; //15
                'fax       ,'+; //17
                'insc      ,'+; //19
                'cpf       ,'+; //20
                'contato   ,'+; //25
                'limite    ,'+; //27
                'atac_vare ,'+; //28
                'spc       ,'+; //30
                'obs       ,'+; //31
                'bloqueio  ,'+; //33
                'empre_c   ,'+; //53
                'cargo_c   ,'+; //54
                'fone_c1   ,'+; //61
                'loja1     ,'+; //63
                'tel_loja1 ,'+; //64
                'loja2     ,'+; //66
                'tel_loja2 ,'+; //67
                'banco1    ,'+; //73
                'ag1       ,'+; //74
                'conta1    ,'+; //75
                'banco2    ,'+; //76
                'ag2       ,'+; //77
                'conta2    ,'+; //78
                'pai       ,'+; //85
                'mae       ,'+; //86
                'end_cob   ,'+; //87
                'bairro_cob,'+; //88
                'cidade_cob,'+; //89
                'uf_cob    ,'+; //90
                'cep_cob   ,'+; //91
                'l_obs1    ,'+; //95
                'l_obs2    ,'+; //96
                'l_obs3    ,'+; //97
                'pocket    ,'+; //113
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(mcli->codigo),5)                )+','+; //1
                sr_cdbvalue(mcli->nome                                  )+','+; //2
                sr_cdbvalue(mcli->fantasia                              )+','+; //3
                IF(! EMPTY(mcli->cli_desde),sr_cdbvalue(mcli->cli_desde),nulo )+','+; //4
                IF(! EMPTY(mcli->cli_desde),sr_cdbvalue(mcli->cli_desde),nulo )+','+; //5
                sr_cdbvalue('C'                                         )+','+; //6
                IF(! EMPTY(mcli->dt_nasc),sr_cdbvalue(mcli->dt_nasc),nulo)+','+; //7
                sr_cdbvalue(LEFT(mcli->endereco,35)                          )+','+; //8
                sr_cdbvalue(mcli->bairro                                     )+','+; //9
                sr_cdbvalue(mcli->cidade                                     )+','+; //10
                sr_cdbvalue(mcli->estado                                     )+','+; //11
                sr_cdbvalue(mcli->cep                                        )+','+; //12
                sr_cdbvalue(LEFT(STRTRAN(mcli->fone_res,'-',''),14)                          )+','+; //15
                sr_cdbvalue(LEFT(STRTRAN(mcli->fax,'-',''),14)                               )+','+; //17
                sr_cdbvalue(ALLTRIM(minsc)                              )+','+; //19
                sr_cdbvalue(ALLTRIM(mcpf)                               )+','+; //20
                sr_cdbvalue(LEFT(mcli->contato,15)                               )+','+; //25
                sr_cdbvalue(iat(mcli->lim_credit,2)                   )+','+; //27
                sr_cdbvalue('N'                                         )+','+; //28
                sr_cdbvalue('S'                                         )+','+; //30
                sr_cdbvalue(mcli->obs1                                  )+','+; //31
                sr_cdbvalue('N'                                         )+','+; //33
                sr_cdbvalue(LEFT(mcli->loc_trab,20)                     )+','+; //53
                sr_cdbvalue(LEFT(mcli->profissao,15)                    )+','+; //54
                sr_cdbvalue(mcli->fone_trab                             )+','+; //61
                sr_cdbvalue(LEFT(mcli->ref_com1,25)                     )+','+; //63
                sr_cdbvalue(mcli->fone_com1                             )+','+; //64
                sr_cdbvalue(LEFT(mcli->ref_com2,25)                     )+','+; //66
                sr_cdbvalue(mcli->fone_com2                             )+','+; //67
                sr_cdbvalue(LEFT(mcli->ref_banco1,10)                   )+','+; //73
                sr_cdbvalue(mcli->agencia1                              )+','+; //74
                sr_cdbvalue(LEFT(mcli->con_corr1,10)                    )+','+; //75
                sr_cdbvalue(LEFT(mcli->ref_banco2,10)                   )+','+; //76
                sr_cdbvalue(mcli->agencia2                              )+','+; //77
                sr_cdbvalue(LEFT(mcli->con_corr2,10)                    )+','+; //78
                sr_cdbvalue(LEFT(mcli->pai,25)                          )+','+; //85
                sr_cdbvalue(LEFT(mcli->mae,25)                          )+','+; //86
                sr_cdbvalue(LEFT(mcli->endereco,35)                     )+','+; //87
                sr_cdbvalue(mcli->bairro                                )+','+; //88
                sr_cdbvalue(mcli->cidade                                )+','+; //89
                sr_cdbvalue(mcli->estado                                )+','+; //90
                sr_cdbvalue(mcli->cep                                   )+','+; //91
                sr_cdbvalue(mcli->obs2                                  )+','+; //95
                sr_cdbvalue(mcli->obs3                                  )+','+; //96
                sr_cdbvalue(mcli->obs4                                  )+','+; //97
                sr_cdbvalue('S'                                         )+','+; //113
                sr_cdbvalue(' ')+')',,.f.)
                SKIP
        ENDDO
ENDIF
IF ! EMPTY(mforn)
SELE('mfor');GO TOP
DEVPOS(06,01);DEVOUT('CONVERTENDO ARQUIVO DE FORNECEDOR....'+TRANSFORM(LASTREC(),'999,999,999')+SPACE(30))
WHILE ! EOF()
        prog_imp(RECNO(),STRZERO(VAL(mfor->codigo),4)+' - '+mfor->nome)
        minsc := STRTRAN(mfor->inscr,'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')

        mcgc := STRTRAN(mfor->cgc,'.','')
        mcgc := STRTRAN(mcgc,'-','')
        mcgc := STRTRAN(mcgc,'/','')
        sr_getconnection():exec('INSERT INTO sacforn ('+;
        'cod_forn   ,'+; //1
        'razao     ,'+; //2
        'fantasia  ,'+; //3
        'tipo      ,'+; //4
        'ult_comp  ,'+; //6
        'endereco  ,'+; //7
        'bairro    ,'+; //8
        'cidade    ,'+; //9
        'uf        ,'+; //10
        'cep       ,'+; //11
        'tel1      ,'+; //14
        'fax       ,'+; //16
        'cgc       ,'+; //17
        'insc      ,'+; //18
        'ct_gerente,'+; //23
        'pocket    ,'+; //35
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(STRZERO(VAL(mfor->codigo),4)                )+','+; //1
        sr_cdbvalue(mfor->nome                                  )+','+; //2
        sr_cdbvalue(mfor->nome                                  )+','+; //3
        sr_cdbvalue('1.01'                                      )+','+; //4
        IF(! EMPTY(mfor->ult_compra),sr_cdbvalue(mfor->ult_compra),nulo)+','+; //6
        sr_cdbvalue(LEFT(mfor->endereco,35)                              )+','+; //7
        sr_cdbvalue(LEFT(mfor->bairro,20)                                )+','+; //8
        sr_cdbvalue(LEFT(mfor->cidade,20)                                )+','+; //9
        sr_cdbvalue(mfor->estado                                )+','+; //10
        sr_cdbvalue(mfor->cep                                   )+','+; //11
        sr_cdbvalue(STRTRAN(mfor->fone,'-','')                                  )+','+; //14
        sr_cdbvalue(STRTRAN(mfor->fax,'-','')                                   )+','+; //16
        sr_cdbvalue(LEFT(mcgc,14)                                        )+','+; //17
        sr_cdbvalue(LEFT(minsc,14)                                       )+','+; //18
        sr_cdbvalue(LEFT(mfor->contato,15)                               )+','+; //23
        sr_cdbvalue('S'                                         )+','+; //35
        sr_cdbvalue(' ')+')',,.f.)
        SKIP
ENDDO
ENDIF
IF ! EMPTY(mprod)
SELE('mmat');GO TOP
DEVPOS(06,01);DEVOUT('CONVERTENDO ARQUIVO DE PRODUTOS....'+TRANSFORM(LASTREC(),'999,999,999')+SPACE(30))
WHILE ! EOF()
        prog_imp(RECNO(),STRZERO(VAL(mmat->codigo),5)+' - '+mmat->descri)
        cons_forn:={}
        ccomm := "UPDATE sacmerc SET saldo_mer = "+sr_cdbvalue(mmat->estatual)+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mmat->codigo),5))
        sr_getconnection():exec(ccomm,,.f.)

/*
        cons_forn:={}
        ccomm := "SELECT razao FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(VAL(mmat->fornec),4))
        sr_getconnection():exec(ccomm,,.t.,@cons_forn)
        IF LEN(cons_forn) > 0
                mfabrica := cons_forn[1,1]
        ELSE
                mfabrica := ' '
        ENDIF
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
        'empresa   ,'+; //1
        'gru_sub   ,'+; //4
        'cod_barr1 ,'+; //5
        'cod_merc  ,'+; //5
        'merc      ,'+; //6
        'descri    ,'+; //7
        'tipo_merc ,'+; //8
        'balanca   ,'+; //9
        'data_cad  ,'+; //10
        'data_atu  ,'+; //11
        'unidade   ,'+; //12
        'especie   ,'+; //13
        'disp      ,'+; //14
        'livre_desc,'+; //15
        'peso_liq  ,'+; //16
        'peso      ,'+; //17
        'p_lucro   ,'+; //18
        'est_min   ,'+; //19
        'est_max   ,'+; //20
        'cod_fab   ,'+; //21
        'fabrica   ,'+; //22
        'isento    ,'+; //23
        'comissao  ,'+; //24
        'com_mont  ,'+; //25
        'promocao  ,'+; //26
        'cust_real ,'+; //27
        'pr_unit   ,'+; //28
        'saldo_fis ,'+; //29
        'saldo_mer ,'+; //30
        'saldo_av  ,'+; //31
        'varejo    ,'+; //32
        'bebida    ,'+; //33
        'icm_sub   ,'+; //34
        'icm_sub2  ,'+; //35
        'ipi       ,'+; //36
        'prodepe   ,'+; //41
        'gramatura ,'+; //43
        'prazo     ,'+; //44
        'FatConv   ,'+; //45
        'pr_venda  ,'+; //50
        'saldo_mer ,'+; //51
        'pr_medio  ,'+; //52
        'pocket    ,'+; //57
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue('001'                                )+','+; //1
        sr_cdbvalue('00101'                              )+','+; //4
        sr_cdbvalue(mmat->tipo                           )+','+; //5
        sr_cdbvalue(STRZERO(VAL(mmat->codigo),5)         )+','+; //5
        sr_cdbvalue(LEFT(mmat->descri,40)                         )+','+; //6
        sr_cdbvalue(LEFT(mmat->descri,40)                         )+','+; //7
        sr_cdbvalue('1'                                  )+','+; //8
        sr_cdbvalue('N'                                  )+','+; //9
        IF(! EMPTY(mmat->datacad),sr_cdbvalue(mmat->datacad),nulo)+','+; //10
        IF(! EMPTY(mmat->datacad),sr_cdbvalue(mmat->datacad),nulo)+','+; //11
        sr_cdbvalue(mmat->unid                           )+','+; //12
        sr_cdbvalue(nulo                                 )+','+; //13
        sr_cdbvalue('S'                                  )+','+; //14
        sr_cdbvalue('N'                                  )+','+; //15
        sr_cdbvalue(mmat->pesol                          )+','+; //16
        sr_cdbvalue(mmat->pesob                          )+','+; //17
        sr_cdbvalue(0                                    )+','+; //18
        sr_cdbvalue(mmat->estmin                         )+','+; //19
        sr_cdbvalue(mmat->estmax                         )+','+; //20
        sr_cdbvalue(STRZERO(VAL(mmat->fornec),4)         )+','+; //21
        sr_cdbvalue(mfabrica                             )+','+; //22
        sr_cdbvalue('N'                                  )+','+; //23
        sr_cdbvalue(0                                    )+','+; //24
        sr_cdbvalue(0                                    )+','+; //25
        sr_cdbvalue(0                                    )+','+; //26
        sr_cdbvalue(0                                    )+','+; //27
        sr_cdbvalue(0                                    )+','+; //28
        sr_cdbvalue(0                                    )+','+; //29
        sr_cdbvalue(0                                    )+','+; //30
        sr_cdbvalue(0                                    )+','+; //31
        sr_cdbvalue(0                                  )+','+; //32
        sr_cdbvalue(0                                    )+','+; //33
        sr_cdbvalue(0                             )+','+; //34
        sr_cdbvalue(0                            )+','+; //35
        sr_cdbvalue(0                                 )+','+; //36
        sr_cdbvalue('N'                               )+','+; //41
        sr_cdbvalue(0                           )+','+; //43
        sr_cdbvalue(0                               )+','+; //44
        sr_cdbvalue(0                             )+','+; //45
        sr_cdbvalue(mmat->preven                               )+','+; //50
        sr_cdbvalue(mmat->estatual                   )+','+; //51
        sr_cdbvalue(mmat->cmedio                      )+','+; //52
        sr_cdbvalue('S'                              )+','+; //57
        sr_cdbvalue(' ')+')',,.f.)
*/
        SELE('mmat')
        SKIP
ENDDO
ENDIF
IF ! EMPTY(mreceber)
SELE('mrec');GO TOP
DEVPOS(06,01);DEVOUT('CONVERTENDO ARQUIVO DE DOCUMENTO A RECEBER ....'+TRANSFORM(LASTREC(),'999,999,999')+SPACE(30))
WHILE ! EOF()
        prog_imp(RECNO(),STRZERO(VAL(mrec->codigo),5))
        cons_forn:={}
        ccomm := "SELECT razao,cpf FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(VAL(mrec->codigo),5))
        sr_getconnection():exec(ccomm,,.t.,@cons_forn)
        IF LEN(cons_forn) > 0
                mcliente := cons_forn[1,1]
                mcpf     := cons_forn[1,2]
        ELSE
                mcliente := ' '
                mcpf     := ' '
        ENDIF
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
        'empresa         ,'+;//1
        'emissao         ,'+;//2
        'tipo            ,'+;//3
        'tip_cli         ,'+;//4
        'fornec          ,'+;//5
        'cliente         ,'+;//6
        'venc            ,'+;//7
        'venc1           ,'+;//8
        'operador        ,'+;//12
        'vendedor        ,'+;//13
        'c_cpfcnpj       ,'+;//19
        'duplicata       ,'+;//21
        'valor_dup       ,'+;//22
        'valor           ,'+;//23
        'datpag          ,'+;//26
        'vlpago          ,'+;//27
        'pago            ,'+;//28
        'obs             ,'+;//33
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue('001'                                )+','+; //1
        IF(! EMPTY(mrec->emissao),sr_cdbvalue(mrec->emissao),nulo)+','+; //2
        sr_cdbvalue('DU'                                 )+','+; //3
        sr_cdbvalue('C'                                  )+','+; //4
        sr_cdbvalue(STRZERO(VAL(mrec->codigo),5)         )+','+; //5
        sr_cdbvalue(mcliente                             )+','+; //6
        IF(! EMPTY(mrec->vencto),sr_cdbvalue(mrec->vencto),nulo)+','+; //7
        IF(! EMPTY(mrec->vencto),sr_cdbvalue(mrec->vencto),nulo)+','+; //8
        sr_cdbvalue(STRZERO(VAL(mrec->vendedor),3)       )+','+; //12
        sr_cdbvalue(STRZERO(VAL(mrec->vendedor),3)       )+','+; //13
        sr_cdbvalue(mcpf                                    )+','+; //19
        sr_cdbvalue(mrec->titulo                            )+','+; //21
        sr_cdbvalue(mrec->liquido                           )+','+; //22
        sr_cdbvalue(mrec->liquido                           )+','+; //23
        IF(! EMPTY(mrec->dt_rec),sr_cdbvalue(mrec->dt_rec),nulo)+','+; //26
        sr_cdbvalue(mrec->val_rec                           )+','+; //27
        IF(! EMPTY(mrec->dt_rec),sr_cdbvalue('B'),nulo      )+','+; //28
        sr_cdbvalue(mrec->observacao                        )+','+; //33
        sr_cdbvalue(' ')+')',,.f.)
        SELE('mrec')
        SKIP
ENDDO
ENDIF
IF ! EMPTY(mapagar)
SELE('mpag');GO TOP
DEVPOS(06,01);DEVOUT('CONVERTENDO ARQUIVO DE DOCUMENTO A PAGAR ....'+TRANSFORM(LASTREC(),'999,999,999')+SPACE(30))
WHILE ! EOF()
        prog_imp(RECNO(),STRZERO(VAL(mpag->codigo),4))
        cons_forn:={}
        ccomm := "SELECT razao FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(VAL(mpag->codigo),4))
        sr_getconnection():exec(ccomm,,.t.,@cons_forn)
        IF LEN(cons_forn) > 0
                mfabrica := cons_forn[1,1]
        ELSE
                mfabrica := ' '
        ENDIF
        sr_getconnection():exec('INSERT INTO sacdupp ('+;
        'empresa         ,'+;//1
        'emissao         ,'+;//2
        'tipo            ,'+;//3
        'tip_for         ,'+;//4
        'fornec          ,'+;//5
        'cliente         ,'+;//6
        'venc            ,'+;//7
        'operador        ,'+;//12
        'vendedor        ,'+;//13
        'duplicata       ,'+;//21
        'valor           ,'+;//23
        'datpag          ,'+;//26
        'vlpago          ,'+;//27
        'pago            ,'+;//28
        'obs             ,'+;//33
        'juros           ,'+;//34
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue('001'                                )+','+; //1
        IF(! EMPTY(mpag->emissao),sr_cdbvalue(mpag->emissao),nulo)+','+; //2
        sr_cdbvalue('DU'                                 )+','+; //3
        sr_cdbvalue(' '                                  )+','+; //4
        sr_cdbvalue(STRZERO(VAL(mpag->codigo),4)         )+','+; //5
        sr_cdbvalue(mfabrica                             )+','+; //6
        IF(! EMPTY(mpag->vencto),sr_cdbvalue(mpag->vencto),nulo)+','+; //7
        sr_cdbvalue(STRZERO(VAL(mpag->vendedor),3)       )+','+; //12
        sr_cdbvalue(STRZERO(VAL(mpag->vendedor),3)       )+','+; //13
        sr_cdbvalue(LEFT(mpag->titulo,10)                    )+','+; //21
        sr_cdbvalue(mpag->liquido                           )+','+; //22
        IF(! EMPTY(mpag->dt_pag),sr_cdbvalue(mpag->dt_pag),nulo)+','+; //26
        sr_cdbvalue(mpag->val_pag                           )+','+; //27
        IF(! EMPTY(mpag->dt_pag),sr_cdbvalue('B'),nulo      )+','+; //28
        sr_cdbvalue(mpag->observacao                        )+','+; //33
        sr_cdbvalue(mpag->juros                             )+','+; //34
        sr_cdbvalue(' ')+')',,.f.)
        SELE('mpag')
        SKIP
ENDDO
ENDIF
sr_getconnection():exec("COMMIT",,.f.)
wvw_lclosewindow()
RETURN NIL
