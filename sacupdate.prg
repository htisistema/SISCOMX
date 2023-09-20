#include "sqlrdd.ch"
//#include "pgs.ch"          // Needed if you plan to use native connection to Postgres
//#include "mysql.ch"        // Needed if you plan to use native connection to MySQL
//#include "oracle.ch"       // Needed if you plan to use native connection to Oracle
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"

MEMVAR getlist
************************************************
* CONVERSAO DO BANCO DE DADOS PANDORA
************************************************
FUNCTION sacpandora
********************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
nCnn1 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD=localhost:c:\helio\siachb\PALACIO\DADOS.gdb;uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
If nCnn1 < 0
        atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
        Quit
EndIf
SR_SetActiveConnection(nCnn1)
cons_cli:={}
sr_getconnection():exec("SELECT * FROM clientes",,.t.,@cons_cli)

mcons_est :={}
sr_getconnection():exec("SELECT * FROM estoque",,.t.,@mcons_est)

mcons_for :={}
sr_getconnection():exec("SELECT * FROM fornec",,.t.,@mcons_for)

mcons_pag :={}
sr_getconnection():exec("SELECT * FROM pagar",,.t.,@mcons_pag)

mcons_rec :={}
sr_getconnection():exec("SELECT * FROM receber",,.t.,@mcons_rec)

SR_SetActiveConnection(nCnn)

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA PANDORA')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro ESTOQUE......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

DEVPOS(10,00);DEVOUT('Registro PAGAR........: ')
DEVPOS(11,00);DEVOUT('Restantes.............: ')

DEVPOS(13,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(14,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(cons_cli)
        mcep := STRTRAN(cons_cli[i,3],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(cons_cli[i,23],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(cons_cli[i,24],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(cons_cli[i,13],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(cons_cli[i,14],'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        mfax := STRTRAN(cons_cli[i,15],'.','')
        mfax := STRTRAN(mfax,'-','')
        mfax := STRTRAN(mfax,'/','')
        mfax := STRTRAN(mfax,",","")


        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cgc           ,'+; //16
                'insc          ,'+; //17
                'contato       ,'+; //18
                'bloqueio      ,'+; //19
                'spc           ,'+; //19
                'limite        ,'+; //19
                'pocket        ,'+; //19
                'numero        ,'+; //19
                'complemento   ,'+; //19
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(cons_cli[i,1],5))    +','+; //1
                sr_cdbvalue(SUBSTR(cons_cli[i,8],1,40))  +','+; //2
                sr_cdbvalue(SUBSTR(cons_cli[i,33],1,40)) +','+; //3
                sr_cdbvalue(cons_cli[i,20])              +','+; //4sr_cdbvalue(cons_cli[i,7])               +','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(SUBSTR(cons_cli[i,6],1,35))  +','+; //7
                sr_cdbvalue(cons_cli[i,2])               +','+; //8
                sr_cdbvalue(SUBSTR(cons_cli[i,4],1,25))  +','+; //9
                sr_cdbvalue(cons_cli[i,18])              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue(cons_cli[i,30])              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //14
                sr_cdbvalue(SUBSTR(mfax,1,14))            +','+; //15
                sr_cdbvalue(SUBSTR(mcnpj,1,14))           +','+; //16
                sr_cdbvalue(SUBSTR(minsc,1,19))           +','+; //17
                sr_cdbvalue(SUBSTR(cons_cli[i,29],1,15)) +','+; //18
                sr_cdbvalue('N')                          +','+; //19
                sr_cdbvalue('N')                          +','+; //20
                sr_cdbvalue(cons_cli[i,31])              +','+; //21
                sr_cdbvalue('S')                          +','+; //22
                sr_cdbvalue(SUBSTR(cons_cli[i,40],1,6))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,37],1,10)) +','+; //24
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LEN(cons_cli)-i,'999,999'))
NEXT

i:=0
FOR i = 1 TO LEN(mcons_est)
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_venda      ,'+; //16
                'saldo_fis     ,'+; //17
                'saldo_mer     ,'+; //18
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(mcons_est[i,36])               +','+; //1
                sr_cdbvalue(SUBSTR(mcons_est[i,61],1,13))  +','+; //2
                sr_cdbvalue(STRZERO(mcons_est[i,3],3)+'01')+','+; //3
                sr_cdbvalue(STRZERO(mcons_est[i,1],5))     +','+; //4
                sr_cdbvalue(SUBSTR(mcons_est[i,2],1,40))   +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())              +','+; //8
                sr_cdbvalue(SUBSTR(mcons_est[i,12],1,3))  +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue(STRZERO(mcons_est[i,5],4))    +','+; //13
                sr_cdbvalue(mcons_est[i,6])               +','+; //14
                sr_cdbvalue(mcons_est[i,6])               +','+; //15
                sr_cdbvalue(mcons_est[i,8])               +','+; //16
                sr_cdbvalue(mcons_est[i,10])              +','+; //17
                sr_cdbvalue(mcons_est[i,10])              +','+; //18
                sr_cdbvalue("S")                          +','+; //19
                sr_cdbvalue('040')                        +','+; //20
                sr_cdbvalue(SUBSTR(mcons_est[i,117],1,8)) +','+; //21
                sr_cdbvalue("T")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(04,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LEN(mcons_est)-i,'999,999'))
NEXT
*/
i:=0
FOR i = 1 TO LEN(mcons_for)
        mcep := STRTRAN(mcons_for[i,8],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(mcons_for[i,11],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(mcons_for[i,13],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(mcons_for[i,9],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(mcons_for[i,10],'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn      ,'+; //1
                'razao         ,'+; //2
                'fantasia      ,'+; //3
                'data_cad      ,'+; //4
                'endereco      ,'+; //5
                'bairro        ,'+; //6
                'cidade        ,'+; //7
                'uf            ,'+; //8
                'cep           ,'+; //9
                'email         ,'+; //10
                'tel1          ,'+; //11
                'tel2          ,'+; //12
                'cgc           ,'+; //13
                'insc          ,'+; //14
                'ct_gerente    ,'+; //15
                'pocket        ,'+; //16
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(mcons_for[i,1],4))   +','+; //1
                sr_cdbvalue(SUBSTR(mcons_for[i,2],1,40)) +','+; //2
                sr_cdbvalue(SUBSTR(mcons_for[i,17],1,40))+','+; //3
                sr_cdbvalue(mcons_for[i,12])             +','+; //4
                sr_cdbvalue(SUBSTR(mcons_for[i,4],1,35)) +','+; //5
                sr_cdbvalue(SUBSTR(mcons_for[i,6],1,20)) +','+; //6
                sr_cdbvalue(SUBSTR(mcons_for[i,5],1,25)) +','+; //7
                sr_cdbvalue(mcons_for[i,7])              +','+; //8
                sr_cdbvalue(SUBSTR(mcep,1,9))            +','+; //9
                sr_cdbvalue(SUBSTR(mcons_for[i,14],1,40))+','+; //10
                sr_cdbvalue(SUBSTR(mtel1,1,13))          +','+; //11
                sr_cdbvalue(SUBSTR(mtel2,1,13))          +','+; //12
                sr_cdbvalue(SUBSTR(mcnpj,1,14))          +','+; //13
                sr_cdbvalue(SUBSTR(minsc,1,14))          +','+; //14
                sr_cdbvalue(SUBSTR(mcons_for[i,3],1,15)) +','+; //15
                sr_cdbvalue("S")                         +','+; //16
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(07,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(08,24);DEVOUT(TRANSFORM(LEN(mcons_for)-i,'999,999'))
NEXT
i:=0
FOR i = 1 TO LEN(mcons_rec)

        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue("DU")                                                +','+; //1
                sr_cdbvalue(SUBSTR(STRZERO(mcons_rec[i,2],7)+'-'+mcons_rec[i,11],1,12))+','+; //2
                sr_cdbvalue(mcons_rec[i,6])                                      +','+; //3
                sr_cdbvalue(STRZERO(mcons_rec[i,15],5))                          +','+; //4
                sr_cdbvalue(SUBSTR(mcons_rec[i,3],1,40))                         +','+; //5
                sr_cdbvalue(mcons_rec[i,12])                                     +','+; //6
                sr_cdbvalue(mcons_rec[i,7])                                      +','+; //7
                sr_cdbvalue(IF(mcons_rec[i,13] > 0,mcons_rec[i,13],mcons_rec[i,6]))+','+; //9
                sr_cdbvalue(IF(mcons_rec[i,9] = 'QUITADO' .OR. mcons_rec[i,13] < 0,mcons_rec[i,6],0))       +','+; //10
                sr_cdbvalue(IF(mcons_rec[i,9] = 'QUITADO' .OR. mcons_rec[i,13] < 0,'B',''))                 +','+; //11
                sr_cdbvalue(IF(mcons_rec[i,13] > 0,'*',''))+','+; //12
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(13,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(14,24);DEVOUT(TRANSFORM(LEN(mcons_rec)-i,'999,999'))
NEXT
sr_getconnection():exec("update sacdupr set datpag = venc, pago = 'B' where not conta = '*'",,.F.)
sr_getconnection():exec("update saccli set spc = 'S'",,.F.)
sr_getconnection():exec("update sacmerc set cod_clf = '01'",,.F.)
sr_getconnection():exec("COMMIT",,.F.)

atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
************************************ F I M ***************************************************
FUNCTION sacup_forn
********************
LOCAL opcao

IF cod_operado <> '999'
        RETURN NIL
ENDIF

op_tela(10,10,13,80,'UPDATE DAS TABELAS SACCADDES')
DEVPOS(01,00);DEVOUT('Registro Verificados..: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')
opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
aret:={}
cComm  := "SELECT * FROM sacdesp"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
        i:=0
        FOR i = 1 TO LEN(aret)
                sr_getconnection():exec("UPDATE sacdesp SET codigo = "+sr_cdbvalue(STRTRAN(aret[i,1],'.',''))+" WHERE codigo = "+sr_cdbvalue(aret[i,1]),,.F.)
        	DEVPOS(01,00);DEVOUT('Conta Despesas........: '+TRANSFORM(i,'999,999'))
	       DEVPOS(02,00);DEVOUT('Restantes.............: '+TRANSFORM(LEN(aret)-i,'999,999'))
        
        NEXT
ENDIF
aret:={}
cComm  := "SELECT * FROM sacforn"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
        i:=0
        FOR i = 1 TO LEN(aret)
                sr_getconnection():exec("UPDATE sacforn SET tipo = "+sr_cdbvalue(STRTRAN(aret[i,3],'.',''))+" WHERE cod_forn = "+sr_cdbvalue(aret[i,1]),,.F.)
                sr_getconnection():exec("UPDATE sacdupp SET tip_for = "+sr_cdbvalue(STRTRAN(aret[i,3],'.',''))+" WHERE fornec = "+sr_cdbvalue(aret[i,1]),,.F.)
        	DEVPOS(01,00);DEVOUT('Fornecedor............: '+TRANSFORM(i,'999,999'))
                DEVPOS(02,00);DEVOUT('Restantes.............: '+TRANSFORM(LEN(aret)-i,'999,999'))
        NEXT
ENDIF
sr_getconnection():exec("COMMIT",,.F.)
wvw_lclosewindow()
RETURN NIL

**************************** F I M ********************************
* CONVERSAO DO BANCO DE DADOS INFOTECH
************************************************
FUNCTION sacINFOTECH
********************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
IF ! AbriArq('auga003','i_cli',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga004','i_prod',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga005','i_forn',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga006','i_cid',,1);RETURN NIL;ENDIF
INDEX ON i_cid->codcid TAG cod TO ('auga006')
IF ! AbriArq('auga008','i_tab',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga009','i_gru',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga014','i_dupp',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga018','i_cheq',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga019','i_dupr',,1);RETURN NIL;ENDIF
IF ! AbriArq('auga033','i_cfop',,1);RETURN NIL;ENDIF

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA INFOTECH')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro PRODUTO......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

DEVPOS(10,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(11,00);DEVOUT('Restantes.............: ')

DEVPOS(13,00);DEVOUT('Registro PAGAR........: ')
DEVPOS(14,00);DEVOUT('Restantes.............: ')

//DEVPOS(16,00);DEVOUT('Registro CHEQUES......: ')
//DEVPOS(17,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
*************
SELE('i_cli')
GO TOP
*************
WHILE ! EOF()
        *************
        SELE('i_cid');ORDSETFOCUS(1)
        GO TOP
        *************
        IF i_cid->(DBSEEK(i_cli->codcli))
                mcidade := i_cid->cidade
        ELSE
                mcidade := ''
        ENDIF
        *************
        SELE('i_cli')
        *************

        mcep := STRTRAN(i_cli->cepcli,'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")
        mcnpj := SPACE(14)
        mcpf  := SPACE(11)
        IF i_cli->tipcli = 'J'
                mcnpj := STRTRAN(i_cli->cpfcgc,'.','')
                mcnpj := STRTRAN(mcnpj,'-','')
                mcnpj := STRTRAN(mcnpj,'/','')
                mcnpj := STRTRAN(mcnpj,",","")
        ELSE
                mcpf := STRTRAN(i_cli->cpfcgc,'.','')
                mcpf := STRTRAN(mcpf,'-','')
                mcpf := STRTRAN(mcpf,'/','')
                mcpf := STRTRAN(mcpf,",","")
        ENDIF

        minsc := STRTRAN(i_cli->insest,'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(i_cli->foncli,'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(i_cli->celcli,'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cgc           ,'+; //16
                'cpf           ,'+; //17
                'insc          ,'+; //18
                'contato       ,'+; //19
                'bloqueio      ,'+; //20
                'spc           ,'+; //21
                'limite        ,'+; //22
                'pocket        ,'+; //23
                'numero        ,'+; //24
                'complemento   ,'+; //25
                'empre_c       ,'+; //26
                'cargo_c       ,'+; //26
                'salario_c     ,'+; //26
                'pai           ,'+; //26
                'mae           ,'+; //26
                'codvend       ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(i_cli->codcli)    +','+; //1
                sr_cdbvalue(i_cli->nomcli)  +','+; //2
                sr_cdbvalue(SUBSTR(i_cli->fancli,1,40)) +','+; //3
                IF(! EMPTY(i_cli->datcad),sr_cdbvalue(i_cli->datcad),nulo)              +','+; //4
                IF(! EMPTY(i_cli->datnas),sr_cdbvalue(i_cli->datnas),nulo)               +','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(SUBSTR(i_cli->endere,1,35))  +','+; //7
                sr_cdbvalue(i_cli->bairro)               +','+; //8
                sr_cdbvalue(SUBSTR(mcidade,1,25)      )  +','+; //9
                sr_cdbvalue(i_cli->estado)              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue('')              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //14
                sr_cdbvalue('')            +','+; //15
                sr_cdbvalue(SUBSTR(mcnpj,1,14))           +','+; //16
                sr_cdbvalue(SUBSTR(mcpf,1,11))           +','+; //17
                sr_cdbvalue(SUBSTR(minsc,1,19))           +','+; //18
                sr_cdbvalue(''                          ) +','+; //19
                sr_cdbvalue('N')                          +','+; //20
                sr_cdbvalue('S')                          +','+; //21
                sr_cdbvalue(i_cli->limite)              +','+; //22
                sr_cdbvalue('S')                          +','+; //23
                sr_cdbvalue(''                          )  +','+; //24
                sr_cdbvalue(''                          ) +','+; //25
                sr_cdbvalue(SUBSTR(i_cli->trabal,1,20)  ) +','+; //25
                sr_cdbvalue(SUBSTR(i_cli->profis,1,15)  ) +','+; //25
                sr_cdbvalue(i_cli->rencli               ) +','+; //25
                sr_cdbvalue(i_cli->nompai               ) +','+; //25
                sr_cdbvalue(i_cli->nommae               ) +','+; //25
                sr_cdbvalue(i_cli->codven               ) +','+; //25
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO

*************
SELE('i_prod')
GO TOP
*************
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_medio      ,'+; //15
                'pr_venda      ,'+; //16
                'saldo_fis     ,'+; //17
                'saldo_mer     ,'+; //18
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'peso          ,'+; //27
                'peso_liq      ,'+; //27
                'est_min       ,'+; //27
                'p_lucro       ,'+; //27
                'cod_clf       ,'+; //27
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('')               +','+; //1
                sr_cdbvalue('')  +','+; //2
                sr_cdbvalue(i_prod->codsec+'01')+','+; //3
                sr_cdbvalue(i_prod->codpro               )  +','+; //4
                sr_cdbvalue(SUBSTR(i_prod->descri+i_prod->comple,1,40))   +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())              +','+; //8
                sr_cdbvalue(i_prod->unidad)  +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue('')    +','+; //13
                sr_cdbvalue(i_prod->precus)               +','+; //14
                sr_cdbvalue(i_prod->cusatu)               +','+; //15
                sr_cdbvalue(i_prod->cusmed)               +','+; //16
                sr_cdbvalue(i_prod->preven)              +','+; //17
                sr_cdbvalue(i_prod->estatu)              +','+; //18
                sr_cdbvalue(i_prod->estatu)              +','+; //18
                sr_cdbvalue(IF(i_prod->sittri = 'FF','F',IF(i_prod->sittri = 'II','S','N'))) +','+; //19
                sr_cdbvalue(IF(i_prod->sittri = 'FF','040',IF(i_prod->sittri = 'II','010','000')))+','+; //20
                sr_cdbvalue('') +','+; //21
                sr_cdbvalue("A")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue(i_prod->pesbru)              +','+; //18
                sr_cdbvalue(i_prod->pesliq)              +','+; //18
                sr_cdbvalue(i_prod->estmin)              +','+; //18
                sr_cdbvalue(i_prod->marluc)              +','+; //18
                sr_cdbvalue('01'          )              +','+; //18
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*************
SELE('i_forn')
GO TOP
*************
WHILE ! EOF()
        mcep := STRTRAN(i_forn->cepfor,'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(i_forn->cpfcgc,'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(i_forn->insest,'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(i_forn->fonfor,'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(i_forn->faxfor,'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn      ,'+; //1
                'razao         ,'+; //2
                'fantasia      ,'+; //3
                'data_cad      ,'+; //4
                'endereco      ,'+; //5
                'bairro        ,'+; //6
                'cidade        ,'+; //7
                'uf            ,'+; //8
                'cep           ,'+; //9
                'email         ,'+; //10
                'tel1          ,'+; //11
                'tel2          ,'+; //12
                'cgc           ,'+; //13
                'insc          ,'+; //14
                'ct_gerente    ,'+; //15
                'pocket        ,'+; //16
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(i_forn->codfor),4))   +','+; //1
                sr_cdbvalue(SUBSTR(i_forn->nomfor,1,40)) +','+; //2
                sr_cdbvalue(SUBSTR(i_forn->fantas,1,40))+','+; //3
                sr_cdbvalue(DATE())             +','+; //4
                sr_cdbvalue(SUBSTR(i_forn->endere,1,35)) +','+; //5
                sr_cdbvalue(SUBSTR(i_forn->bairro,1,20)) +','+; //6
                sr_cdbvalue(SUBSTR(i_forn->cidade,1,25)) +','+; //7
                sr_cdbvalue(i_forn->estado)              +','+; //8
                sr_cdbvalue(SUBSTR(mcep,1,9))            +','+; //9
                sr_cdbvalue(SUBSTR(i_forn->e_mail,1,40))+','+; //10
                sr_cdbvalue(SUBSTR(mtel1,1,13))          +','+; //11
                sr_cdbvalue(SUBSTR(mtel2,1,13))          +','+; //12
                sr_cdbvalue(SUBSTR(mcnpj,1,14))          +','+; //13
                sr_cdbvalue(SUBSTR(minsc,1,14))          +','+; //14
                sr_cdbvalue(SUBSTR(i_forn->contat,1,15)) +','+; //15
                sr_cdbvalue("S")                         +','+; //16
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(07,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(08,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*************
SELE('i_dupr')
GO TOP
*************
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'datpag        ,'+; //12
                'vendedor      ,'+; //12
                'obs           ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(IF(i_dupr->tipdoc = 'CR','DU','DN'))                +','+; //1
                sr_cdbvalue(STRZERO(i_dupr->numven,6)+'-'+STRZERO(i_dupr->parcel,2))+','+; //2
                sr_cdbvalue(i_dupr->valpar)                                      +','+; //3
                sr_cdbvalue(i_dupr->codcli)                          +','+; //4
                sr_cdbvalue('')                         +','+; //5
                IF(! EMPTY(i_dupr->datven),sr_cdbvalue(i_dupr->datven),nulo)                                     +','+; //6
                IF(! EMPTY(i_dupr->datvct),sr_cdbvalue(i_dupr->datvct),nulo)                                      +','+; //7
                sr_cdbvalue(i_dupr->valpar)+','+; //9
                sr_cdbvalue(i_dupr->valpag)       +','+; //10
                sr_cdbvalue(IF(i_dupr->valpag < 0,'B',''))                 +','+; //11
                sr_cdbvalue('')+','+; //12
                IF(! EMPTY(i_dupr->datpag),sr_cdbvalue(i_dupr->datpag),nulo)+','+; //12
                sr_cdbvalue(i_dupr->codven)+','+; //12
                sr_cdbvalue(i_dupr->observ)+','+; //12
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(10,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(11,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO

*************
SELE('i_dupp')
GO TOP
*************
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacdupp ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'datpag        ,'+; //12
                'obs           ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('DU')                +','+; //1
                sr_cdbvalue(STRZERO(i_dupp->numero,6)+'-'+STRZERO(i_dupp->parcel,2))+','+; //2
                sr_cdbvalue(i_dupp->valpar)                                      +','+; //3
                sr_cdbvalue(STRZERO(val(i_dupp->codfor)))                          +','+; //4
                sr_cdbvalue('')                         +','+; //5
                IF(! EMPTY(i_dupp->datent),sr_cdbvalue(i_dupp->datent),nulo)                                +','+; //6
                IF(! EMPTY(i_dupp->datvct),sr_cdbvalue(i_dupp->datvct),nulo)                                +','+; //7
                sr_cdbvalue(i_dupp->valpar)                                +','+; //9
                sr_cdbvalue(i_dupp->valpag)       +','+; //10
                sr_cdbvalue(IF(i_dupp->valpag < 0,'B',''))                 +','+; //11
                sr_cdbvalue('')+','+; //12
                IF(! EMPTY(i_dupp->datpgt),sr_cdbvalue(i_dupp->datpgt),nulo)+','+; //12
                sr_cdbvalue(i_dupp->observ)+','+; //12
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(10,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(11,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
************************************ F I M ***************************************************
* CONVERSAO DO BANCO DE DADOS CAIC
************************************************
FUNCTION saccaic
********************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL',mcli:='',mrg:=''

IF cod_operado <> '999'
        RETURN NIL
ENDIF
IF ! AbriArq('caiccli','i_cli',,1);RETURN NIL;ENDIF
IF ! AbriArq('caicart','i_prod',,1);RETURN NIL;ENDIF
IF ! AbriArq('caiccpr','i_dupr',,1);RETURN NIL;ENDIF

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA INFOTECH')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro PRODUTO......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
*************
SELE('i_cli')
GO TOP
*************
WHILE ! EOF()
        mcep := tira_pontos(i_cli->numcep)
        mcnpj := SPACE(14)
        mcpf  := SPACE(11)
        IF i_cli->fisjur = 'J'
                mcnpj := tira_pontos(i_cli->inscgc)
                minsc := tira_pontos(i_cli->insest)
        ELSE
                mcpf := SUBSTR(tira_pontos(i_cli->inscgc),1,11)
                mgr  := tira_pontos(i_cli->insest)
        ENDIF
        mtel1 := tira_pontos(i_cli->fone)
        mtel2 := tira_pontos(i_cli->celular)

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cgc           ,'+; //16
                'cpf           ,'+; //17
                'insc          ,'+; //18
                'rg            ,'+; //18
                'contato       ,'+; //19
                'bloqueio      ,'+; //20
                'spc           ,'+; //21
                'limite        ,'+; //22
                'pocket        ,'+; //23
                'numero        ,'+; //24
                'complemento   ,'+; //25
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(i_cli->codigo)    +','+; //1
                sr_cdbvalue(i_cli->nome)  +','+; //2
                sr_cdbvalue(SUBSTR(i_cli->nomfan,1,40)) +','+; //3
                IF(! EMPTY(i_cli->datcad),sr_cdbvalue(i_cli->datcad),nulo)              +','+; //4
                IF(! EMPTY(i_cli->nascim),sr_cdbvalue(i_cli->nascim),nulo)               +','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(SUBSTR(i_cli->endere,1,35))  +','+; //7
                sr_cdbvalue(i_cli->bairro)               +','+; //8
                sr_cdbvalue(SUBSTR(munici,1,25)      )  +','+; //9
                sr_cdbvalue(i_cli->estado)              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue('')              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //14
                sr_cdbvalue('')            +','+; //15
                sr_cdbvalue(SUBSTR(mcnpj,1,14))           +','+; //16
                sr_cdbvalue(SUBSTR(mcpf,1,11))           +','+; //17
                sr_cdbvalue(SUBSTR(minsc,1,19))           +','+; //18
                sr_cdbvalue(SUBSTR(mrg,1,14))           +','+; //18
                sr_cdbvalue(''                          ) +','+; //19
                sr_cdbvalue('N')                          +','+; //20
                sr_cdbvalue('S')                          +','+; //21
                sr_cdbvalue(i_cli->limite)              +','+; //22
                sr_cdbvalue('S')                          +','+; //23
                sr_cdbvalue(''                          )  +','+; //24
                sr_cdbvalue(''                          ) +','+; //25
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
                /*
                'empre_c       ,'+; //26
                'cargo_c       ,'+; //26
                'salario_c     ,'+; //26
                'pai           ,'+; //26
                'mae           ,'+; //26
                'codvend       ,'+; //26
                sr_cdbvalue(SUBSTR(i_cli->trabal,1,20)  ) +','+; //25
                sr_cdbvalue(SUBSTR(i_cli->profis,1,15)  ) +','+; //25
                sr_cdbvalue(i_cli->rencli               ) +','+; //25
                sr_cdbvalue(i_cli->nompai               ) +','+; //25
                sr_cdbvalue(i_cli->nommae               ) +','+; //25
                sr_cdbvalue(i_cli->codven               ) +','+; //25
                */
ENDDO
sr_getconnection():exec("COMMIT",,.F.)
/*
*************
SELE('i_prod')
GO TOP
*************
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_medio      ,'+; //15
                'pr_venda      ,'+; //16
                'saldo_fis     ,'+; //17
                'saldo_mer     ,'+; //18
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'peso          ,'+; //27
                'peso_liq      ,'+; //27
                'est_min       ,'+; //27
                'p_lucro       ,'+; //27
                'cod_clf       ,'+; //27
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('')               +','+; //1
                sr_cdbvalue('')  +','+; //2
                sr_cdbvalue(i_prod->codsec+'01')+','+; //3
                sr_cdbvalue(i_prod->codpro               )  +','+; //4
                sr_cdbvalue(SUBSTR(i_prod->descri+i_prod->comple,1,40))   +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())              +','+; //8
                sr_cdbvalue(i_prod->unidad)  +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue('')    +','+; //13
                sr_cdbvalue(i_prod->precus)               +','+; //14
                sr_cdbvalue(i_prod->cusatu)               +','+; //15
                sr_cdbvalue(i_prod->cusmed)               +','+; //16
                sr_cdbvalue(i_prod->preven)              +','+; //17
                sr_cdbvalue(i_prod->estatu)              +','+; //18
                sr_cdbvalue(i_prod->estatu)              +','+; //18
                sr_cdbvalue(IF(i_prod->sittri = 'FF','F',IF(i_prod->sittri = 'II','S','N'))) +','+; //19
                sr_cdbvalue(IF(i_prod->sittri = 'FF','040',IF(i_prod->sittri = 'II','010','000')))+','+; //20
                sr_cdbvalue('') +','+; //21
                sr_cdbvalue("A")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue(i_prod->pesbru)              +','+; //18
                sr_cdbvalue(i_prod->pesliq)              +','+; //18
                sr_cdbvalue(i_prod->estmin)              +','+; //18
                sr_cdbvalue(i_prod->marluc)              +','+; //18
                sr_cdbvalue('01'          )              +','+; //18
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*/
*************
SELE('i_dupr')
GO TOP
*************
WHILE ! EOF()
        mcli := ''
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(i_dupr->cpr_codigo),,.t.,@cons_cli)
        IF LEN(cons_cli) > 0
                mcli := cons_cli[1,3]
        ENDIF

        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'datpag        ,'+; //12
                'obs           ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(IF(i_dupr->cpr_tipdoc = 'CH','CH','DU'))                +','+; //1
                sr_cdbvalue(i_dupr->cpr_numdoc)+','+; //2
                sr_cdbvalue(i_dupr->cpr_valdoc)                                      +','+; //3
                sr_cdbvalue(i_dupr->cpr_codigo)                          +','+; //4
                sr_cdbvalue(mcli)                         +','+; //5
                IF(! EMPTY(i_dupr->cpr_datemi),sr_cdbvalue(i_dupr->cpr_datemi),nulo)                                     +','+; //6
                IF(! EMPTY(i_dupr->cpr_datven),sr_cdbvalue(i_dupr->cpr_datven),nulo)                                      +','+; //7
                sr_cdbvalue(i_dupr->cpr_valdoc)+','+; //9
                sr_cdbvalue(i_dupr->cpr_valpag)       +','+; //10
                sr_cdbvalue(IF(i_dupr->cpr_valpag < 0,'B',''))                 +','+; //11
                sr_cdbvalue('')+','+; //12
                IF(! EMPTY(i_dupr->cpr_datpag),sr_cdbvalue(i_dupr->cpr_datpag),nulo)+','+; //12
                sr_cdbvalue(i_dupr->cpr_histor)+','+; //12
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(7,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(8,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
************************************ F I M ***************************************************
************************************************
* CONVERSAO DO BANCO DE DADOS PLANETANET
************************************************
FUNCTION sacplaneta
********************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL',mcli:='',mrg:='',aret := {}

IF cod_operado <> '999'
        RETURN NIL
ENDIF
op_tela(10,10,25,80,'CONVERSAO DO SISTEMA PLANETANET')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
aret := {}
sr_getconnection():exec("SELECT * FROM sacdupr",,.t.,@aret)
IF LEN(aret) = 0
        atencao('Nao existe nenhum cliente...')
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(aret)
        sr_getconnection():exec("UPDATE sacdupr SET num_ped = " + sr_cdbvalue(SUBSTR(aret[i,4],1,6))+' WHERE duplicata = ' + sr_cdbvalue(aret[i,4]),,.f.)
        mensagem('Quantidade de Registro: '+TRANSFORM(LEN(aret),'999,999,999')+' - Falta Processar: '+TRANSFORM(LEN(aret) - i,'999,999,999'))
NEXT

/*
aret := {}
sr_getconnection():exec("SELECT * FROM contrato",,.t.,@aret)
IF LEN(aret) = 0
        atencao('Nao existe nenhum cliente...')
        wvw_lclosewindow()
        RETURN NIL
ENDIF

i:=0
FOR i = 1 TO LEN(aret)
        sr_getconnection():exec("UPDATE contrato SET codcont = " + sr_cdbvalue(STRZERO(VAL(aret[i,1]),6))+',codcli = ' + sr_cdbvalue(STRZERO(VAL(aret[i,3]),5))+',vlrmens = ' + sr_cdbvalue(iat(VAL(SUBSTR(aret[i,6],2)),2))+',vlrinst = ' + sr_cdbvalue(iat(VAL(SUBSTR(aret[i,14],2)),2))+' WHERE sr_recno = '+sr_cdbvalue(aret[i,19]),,.f.)
NEXT

aret := {}
sr_getconnection():exec("SELECT * FROM cliente",,.t.,@aret)


IF LEN(aret) = 0
        atencao('Nao existe nenhum cliente...')
        wvw_lclosewindow()
        RETURN NIL
ENDIF

i:=0
FOR i = 1 TO LEN(aret)
        mcep := tira_pontos(aret[i,11])
        mcnpj := SPACE(14)
        mcpf  := SPACE(11)
        IF aret[i,21] = 'J'
                mcnpj := tira_pontos(aret[i,4])
                minsc := tira_pontos(aret[i,5])
        ELSE
                mcpf := SUBSTR(tira_pontos(aret[i,4]),1,11)
                mgr  := tira_pontos(aret[i,22])
        ENDIF
        mtel1 := tira_pontos(aret[i,15])
        mtel2 := tira_pontos(aret[i,16])
        aret[i,1] := STRZERO(aret[i,1],5)
        aret[i,20] := tira_pt(aret[i,20])
        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cgc           ,'+; //16
                'cpf           ,'+; //17
                'insc          ,'+; //18
                'rg            ,'+; //18
                'contato       ,'+; //19
                'bloqueio      ,'+; //20
                'spc           ,'+; //21
                'limite        ,'+; //22
                'pocket        ,'+; //23
                'numero        ,'+; //24
                'complemento   ,'+; //25
                'obs   ,'+; //25
                'l_obs1   ,'+; //25
                'l_obs2   ,'+; //25
                'l_obs3   ,'+; //25
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(aret[i,1])    +','+; //1
                sr_cdbvalue(UPPER(tira_pt(aret[i,7])))  +','+; //2
                sr_cdbvalue(UPPER(tira_pt(aret[i,3]))) +','+; //3
                sr_cdbvalue(CTOD(SUBSTR(aret[i,2],9,2)+'/'+SUBSTR(aret[i,2],6,2)+'/'+SUBSTR(aret[i,2],1,4)))+','+; //4
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(UPPER(tira_pt(aret[i,8])))  +','+; //7
                sr_cdbvalue(UPPER(tira_pt(aret[i,12])))               +','+; //8
                sr_cdbvalue(UPPER(tira_pt(SUBSTR(aret[i,13],1,25)))      )  +','+; //9
                sr_cdbvalue(UPPER(tira_pt(aret[i,14])))              +','+; //10
                sr_cdbvalue(UPPER(tira_pt(mcep)))                         +','+; //11
                sr_cdbvalue('')              +','+; //12
                sr_cdbvalue(tira_pt(SUBSTR(mtel1,1,14)))           +','+; //13
                sr_cdbvalue(tira_pt(SUBSTR(mtel2,1,14)))           +','+; //14
                sr_cdbvalue('')            +','+; //15
                sr_cdbvalue(tira_pt(SUBSTR(mcnpj,1,14)) )          +','+; //16
                sr_cdbvalue(tira_pt(SUBSTR(mcpf,1,11)) )          +','+; //17
                sr_cdbvalue(tira_pt(SUBSTR(minsc,1,19)))           +','+; //18
                sr_cdbvalue(tira_pt(SUBSTR(mrg,1,14)))           +','+; //18
                sr_cdbvalue(''                          ) +','+; //19
                sr_cdbvalue('N')                          +','+; //20
                sr_cdbvalue('S')                          +','+; //21
                sr_cdbvalue(0)              +','+; //22
                sr_cdbvalue('S')                          +','+; //23
                sr_cdbvalue(tira_pt(aret[i,9])                          )  +','+; //24
                sr_cdbvalue(tira_pt(aret[i,10])                          ) +','+; //25
                sr_cdbvalue(SUBSTR(tira_pt(aret[i,20]),1,60)         ) +','+; //25
                sr_cdbvalue(SUBSTR(tira_pt(aret[i,20]),61,77)         ) +','+; //25
                sr_cdbvalue(SUBSTR(tira_pt(aret[i,20]),138,77)         ) +','+; //25
                sr_cdbvalue(SUBSTR(tira_pt(aret[i,20]),215,77)         ) +','+; //25
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(LEN(aret),'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LEN(aret) - (i),'999,999'))
NEXT
*/
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL

/*
LOCAL opcao,nulo := 'NULL',minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,cons_cli,i:=0

IF cod_operado <> '999'
        RETURN NIL
ENDIF

op_tela(10,10,13,80,'UPDATE DE TABELAS TIRAR "0" A ESQUEDA DA INSCRICAO DO FORNECEDOR')
DEVPOS(01,00);DEVOUT('Clientes Verificados..: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')
opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
aret:={}
cComm  := "SELECT * FROM sacmerc ORDER BY merc"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) = 0
        wvw_lclosewindow()
        RETURN NIL
ENDIF

i:=0
FOR i = 1 TO LEN(aret)
        prog_imp(i,aret[i,9])
        sr_getconnection():exec("UPDATE sacmerc SET cod_merc = "+sr_cdbvalue(STRZERO(i,5))+" WHERE sr_recno = "+sr_cdbvalue(aret[i,105]),,.F.)
	DEVPOS(01,00);DEVOUT('Clientes Verificados..: '+TRANSFORM(i,'999,999'))
	DEVPOS(02,00);DEVOUT('Restantes.............: '+TRANSFORM(LEN(aret)-i,'999,999'))

NEXT
sr_getconnection():exec("COMMIT",,.F.)
wvw_lclosewindow()
RETURN NIL
*/
/*
aret:={}
cComm  := "SELECT * FROM sacforn WHERE NOT insc = 'ISENTO' AND insc IS NOT NULL"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) = 0
        wvw_lclosewindow()
        RETURN NIL
ENDIF
DEVPOS(00,00);DEVOUT('Quantidade de Fornecedor: '+TRANSFORM(LEN(aret),'999,999'))

i:=0
FOR i = 1 TO LEN(aret)
        prog_imp(i,aret[i,1])
        minsc := STRTRAN(aret[i,17],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")
        minsc := SUBSTR(ALLTRIM(STR(VAL(minsc))),1,14)
	
	sr_getconnection():exec("UPDATE sacforn SET insc = "+sr_cdbvalue(minsc)+" WHERE cod_forn = "+sr_cdbvalue(aret[i,1])+" AND NOT insc = 'ISENTO'",,.F.)
        sr_getconnection():exec("UPDATE sactotnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(aret[i,1])+" AND emissao > "+sr_cdbvalue('2010/01/01')+" AND NOT insc_cli = 'ISENTO'",,.F.)
	DEVPOS(01,00);DEVOUT('Forncedor Verificados..: '+TRANSFORM(i,'999,999'))
	DEVPOS(02,00);DEVOUT('Restantes..............: '+TRANSFORM(LEN(aret)-i,'999,999'))

NEXT
sr_getconnection():exec('COMMIT',,.F.)
wvw_lclosewindow()
QUIT
/*
aret:={}
cComm  := "SELECT * FROM saccli WHERE NOT insc = 'ISENTO' AND insc IS NOT NULL"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) = 0
        wvw_lclosewindow()
        RETURN NIL
ENDIF
DEVPOS(00,00);DEVOUT('Quantidade de Clientes: '+TRANSFORM(LEN(aret),'999,999'))

i:=0
FOR i = 1 TO LEN(aret)
        prog_imp(i,aret[i,2])
        minsc := STRTRAN(aret[i,33],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")
        minsc := SUBSTR(ALLTRIM(STR(VAL(minsc))),1,14)
	
	sr_getconnection():exec("UPDATE saccli SET insc = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(aret[i,2])+" AND NOT insc = 'ISENTO'",,.F.)
        sr_getconnection():exec("UPDATE sacmovnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(aret[i,2])+" AND emissao > "+sr_cdbvalue('2010/01/01')+" AND NOT insc_cli = 'ISENTO'",,.F.)
        sr_getconnection():exec("UPDATE sactotnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(aret[i,2])+" AND emissao > "+sr_cdbvalue('2010/01/01')+" AND NOT insc_cli = 'ISENTO'",,.F.)
	DEVPOS(01,00);DEVOUT('Clientes Verificados..: '+TRANSFORM(i,'999,999'))
	DEVPOS(02,00);DEVOUT('Restantes.............: '+TRANSFORM(LEN(aret)-i,'999,999'))

NEXT
//sr_getconnection():exec("UPDATE sacmovnt SET sittrib = "+sr_cdbvalue('001')+" WHERE sittrib IS NULL AND emissao > "+sr_cdbvalue('2010/01/01'),,.F.)
sr_getconnection():exec("UPDATE sacmovnt SET sittrib = "+sr_cdbvalue('001')+" WHERE sittrib IS NULL",,.F.)
sr_getconnection():exec("UPDATE sacmov SET sittrib = "+sr_cdbvalue('001')+" WHERE sittrib IS NULL",,.F.)
sr_getconnection():exec('COMMIT',,.F.)
wvw_lclosewindow()
QUIT



/*
aret:={}
cComm  := "SELECT * FROM sacmerc"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) = 0
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(aret)
        prog_imp(i)
        cComm  := "UPDATE sacmerc SET cod_merc = "+sr_cdbvalue(STRZERO(VAL(aret[i,8]),5))+" WHERE sr_recno = "+sr_cdbvalue(aret[i,103])
        sr_getconnection():exec(ccomm,,.F.)
NEXT
sr_getconnection():exec('COMMIT',,.F.)
wvw_lclosewindow()






cComm  := "SELECT * FROM sactotnt WHERE cliente IS NULL OR cliente = ''"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) = 0
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(aret)
        prog_imp(i)
        IF aret[i,11] = 'E'
                m_cli:={}
                cComm  := "SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(VAL(aret[i,12]),4))
                sr_getconnection():exec(ccomm,,.t.,@m_cli)
                IF LEN(m_cli) = 0
                        LOOP
                ENDIF
                cComm  := "UPDATE sactotnt SET cliente = "+sr_cdbvalue(LEFT(m_cli[1,2],30))+" WHERE cod_cli = "+sr_cdbvalue(STRZERO(VAL(aret[i,12]),4))
                sr_getconnection():exec(ccomm,,.F.)
        ELSE
                m_cli:={}
                cComm  := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(STRZERO(VAL(aret[i,12]),5))
                sr_getconnection():exec(ccomm,,.t.,@m_cli)
                IF LEN(m_cli) = 0
                        LOOP
                ENDIF
                cComm  := "UPDATE sactotnt SET cliente = "+sr_cdbvalue(LEFT(m_cli[1,3],30))+" WHERE cod_cli = "+sr_cdbvalue(STRZERO(VAL(aret[i,12]),5))
                sr_getconnection():exec(ccomm,,.F.)
        ENDIF
NEXT
sr_getconnection():exec('COMMIT',,.F.)
wvw_lclosewindow()
RETURN NIL
*/



/*
USE 'prod' ALIAS 'prd' NEW VIA 'DBFCDX'
SELE('prd');GO TOP
WHILE ! EOF()
        mensagem('Codigo Poduto:'+STRZERO(VAL(prd->codigo),5))
        aret:={}
        cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(prd->codigo),5))
        sr_getconnection():exec(ccomm,,.t.,@aret)
        IF LEN(aret) = 0
                SKIP
                LOOP
        ENDIF
        IF EMPTY(aret[1,45])
                ccomm :="UPDATE sacmerc SET cust_real = "+sr_cdbvalue(prd->ultcusto)+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(prd->codigo),5))
                sr_getconnection():exec(ccomm,,.f.)
        ENDIF
        SKIP
ENDDO
sr_getconnection():exec('COMMIT',,.f.)
wvw_lclosewindow()
*/
RETURN NIL


/*
cons_cli := {}
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00101' WHERE cod_barr1 = 'AC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00102' WHERE cod_barr1 = 'A1'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00103' WHERE cod_barr1 = 'AF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00104' WHERE cod_barr1 = 'AR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00105' WHERE cod_barr1 = 'AS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00106' WHERE cod_barr1 = 'AT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00107' WHERE cod_barr1 = 'AV'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00111' WHERE cod_barr1 = 'B1'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00112' WHERE cod_barr1 = 'B8'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00113' WHERE cod_barr1 = 'BC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00114' WHERE cod_barr1 = 'BG'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00115' WHERE cod_barr1 = 'BR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00116' WHERE cod_barr1 = 'CC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00117' WHERE cod_barr1 = 'CP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00118' WHERE cod_barr1 = 'LT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00119' WHERE cod_barr1 = 'PD'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00120' WHERE cod_barr1 = 'PM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00121' WHERE cod_barr1 = 'PS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00122' WHERE cod_barr1 = 'PR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00123' WHERE cod_barr1 = 'GV'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00124' WHERE cod_barr1 = 'N'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00125' WHERE cod_barr1 = 'TB'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00201' WHERE cod_barr1 = 'AJ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00202' WHERE cod_barr1 = 'PO'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00203' WHERE cod_barr1 = 'TV'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00204' WHERE cod_barr1 = 'SP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00205' WHERE cod_barr1 = 'ST'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00206' WHERE cod_barr1 = 'ES'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00207' WHERE cod_barr1 = 'FA'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00208' WHERE cod_barr1 = 'FP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00209' WHERE cod_barr1 = 'FQ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00210' WHERE cod_barr1 = 'FT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00211' WHERE cod_barr1 = 'JO'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00212' WHERE cod_barr1 = 'JP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00213' WHERE cod_barr1 = 'JR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00214' WHERE cod_barr1 = 'M'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00215' WHERE cod_barr1 = 'O'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00216' WHERE cod_barr1 = 'OP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00217' WHERE cod_barr1 = 'GF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00218' WHERE cod_barr1 = 'PP'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00301' WHERE cod_barr1 = 'A'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00302' WHERE cod_barr1 = 'AN'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00303' WHERE cod_barr1 = 'BO'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00304' WHERE cod_barr1 = 'PN'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00305' WHERE cod_barr1 = 'ED'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00306' WHERE cod_barr1 = 'MQ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00307' WHERE cod_barr1 = 'TE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00308' WHERE cod_barr1 = 'TP'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00401' WHERE cod_barr1 = 'CA'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00402' WHERE cod_barr1 = 'CU'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00403' WHERE cod_barr1 = 'JA'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00404' WHERE cod_barr1 = 'PU'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00405' WHERE cod_barr1 = 'SF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00406' WHERE cod_barr1 = 'PL'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00407' WHERE cod_barr1 = 'BA'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00501' WHERE cod_barr1 = 'BT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00502' WHERE cod_barr1 = 'CB'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00503' WHERE cod_barr1 = 'CD'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00504' WHERE cod_barr1 = 'CE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00505' WHERE cod_barr1 = 'CK'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00506' WHERE cod_barr1 = 'CL'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00507' WHERE cod_barr1 = 'CR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00508' WHERE cod_barr1 = 'CS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00509' WHERE cod_barr1 = 'PC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00510' WHERE cod_barr1 = 'PT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00511' WHERE cod_barr1 = 'P'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00512' WHERE cod_barr1 = 'MC'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00601' WHERE cod_barr1 = 'BX'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00602' WHERE cod_barr1 = 'CZ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00603' WHERE cod_barr1 = 'XB'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00604' WHERE cod_barr1 = 'LM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00605' WHERE cod_barr1 = 'HC'",,.f.)
//sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00606' WHERE cod_barr1 = 'CK'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00701' WHERE cod_barr1 = 'D'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00702' WHERE cod_barr1 = 'DP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00703' WHERE cod_barr1 = 'FG'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00704' WHERE cod_barr1 = 'SE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00705' WHERE cod_barr1 = 'TQ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00706' WHERE cod_barr1 = 'VT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00707' WHERE cod_barr1 = 'RF'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00801' WHERE cod_barr1 = 'US'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00901' WHERE cod_barr1 = 'PE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00902' WHERE cod_barr1 = 'TF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00903' WHERE cod_barr1 = 'TR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00904' WHERE cod_barr1 = 'EE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00905' WHERE cod_barr1 = 'LU'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00906' WHERE cod_barr1 = 'AB'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '00907' WHERE cod_barr1 = 'AP'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01001' WHERE cod_barr1 = 'CF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01002' WHERE cod_barr1 = 'E'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01003' WHERE cod_barr1 = 'SC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01004' WHERE cod_barr1 = 'T'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01005' WHERE cod_barr1 = 'TM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01006' WHERE cod_barr1 = 'VC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01007' WHERE cod_barr1 = 'TI'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01008' WHERE cod_barr1 = 'FC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01009' WHERE cod_barr1 = 'FR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01010' WHERE cod_barr1 = 'JB'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01011' WHERE cod_barr1 = 'KT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01012' WHERE cod_barr1 = 'L'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01013' WHERE cod_barr1 = 'JL'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01014' WHERE cod_barr1 = 'TL'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01101' WHERE cod_barr1 = 'P1'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01102' WHERE cod_barr1 = 'PA'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01103' WHERE cod_barr1 = 'BQ'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01201' WHERE cod_barr1 = 'MU'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01202' WHERE cod_barr1 = 'DR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01203' WHERE cod_barr1 = 'QI'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01204' WHERE cod_barr1 = 'QJ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01205' WHERE cod_barr1 = 'RC'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01206' WHERE cod_barr1 = 'RJ'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01207' WHERE cod_barr1 = 'RS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01208' WHERE cod_barr1 = 'BM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01209' WHERE cod_barr1 = 'CI'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01301' WHERE cod_barr1 = 'RM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01302' WHERE cod_barr1 = 'RE'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01303' WHERE cod_barr1 = 'RP'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01304' WHERE cod_barr1 = 'RT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01305' WHERE cod_barr1 = 'ET'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01306' WHERE cod_barr1 = 'EM'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01401' WHERE cod_barr1 = 'JS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01402' WHERE cod_barr1 = 'KR'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01403' WHERE cod_barr1 = 'MA'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01404' WHERE cod_barr1 = 'MD'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01405' WHERE cod_barr1 = 'MM'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01406' WHERE cod_barr1 = 'MS'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01407' WHERE cod_barr1 = 'MT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01408' WHERE cod_barr1 = 'BF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01409' WHERE cod_barr1 = 'CO'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01501' WHERE cod_barr1 = 'B'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01502' WHERE cod_barr1 = 'CT'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01503' WHERE cod_barr1 = 'QB'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01504' WHERE cod_barr1 = 'MF'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01505' WHERE cod_barr1 = 'ML'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01506' WHERE cod_barr1 = 'C'",,.f.)

sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01601' WHERE cod_barr1 = 'Z1'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01602' WHERE cod_barr1 = 'BI'",,.f.)
sr_getconnection():exec("UPDATE sacmerc SET gru_sub = '01603' WHERE cod_barr1 = 'BB'",,.f.)

sr_getconnection():exec("COMMIT",,.f.)
wvw_lclosewindow()
RETURN NIL
*/
****************************************** F I M *************************************************
* CONVERSAO DO BANCO DE DADOS GDOC
************************************************
FUNCTION sacgdoc
****************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
IF FILE('DATAGES.GDB')
        mensagem('Conectando ao BANCO DE DADOS...')
        nCnn1 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD=localhost:C:\siac\DATAGES.GDB;uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        If nCnn1 < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
        SR_SetActiveConnection(nCnn1)
ELSE
        atencao("Nao foi encontra o BANCO DE DADOS caminho: C:\siac\DATAGES.GDB, Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
        RETURN NIL
ENDIF
cons_cli:={}
sr_getconnection():exec("SELECT * FROM cliente",,.t.,@cons_cli)

mcons_est :={}
sr_getconnection():exec("SELECT * FROM estoque",,.t.,@mcons_est)

mcons_for :={}
sr_getconnection():exec("SELECT * FROM fornecedor",,.t.,@mcons_for)

mcons_rec :={}
sr_getconnection():exec("SELECT * FROM receber",,.t.,@mcons_rec)

SR_SetActiveConnection(nCnn)

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA PANDORA')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro ESTOQUE......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

//DEVPOS(10,00);DEVOUT('Registro PAGAR........: ')
//DEVPOS(11,00);DEVOUT('Restantes.............: ')

DEVPOS(13,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(14,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(cons_cli)
        mcep := STRTRAN(cons_cli[i,14],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(cons_cli[i,5],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(cons_cli[i,6],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(cons_cli[i,22],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(cons_cli[i,23],'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        mfax := STRTRAN(cons_cli[i,24],'.','')
        mfax := STRTRAN(mfax,'-','')
        mfax := STRTRAN(mfax,'/','')
        mfax := STRTRAN(mfax,",","")


        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cpf           ,'+; //16
                'rg            ,'+; //17
                'contato       ,'+; //18
                'bloqueio      ,'+; //19
                'spc           ,'+; //20
                'limite        ,'+; //21
                'pocket        ,'+; //22
                'numero        ,'+; //23
                'complemento   ,'+; //24
                'obs           ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(cons_cli[i,1]),5))    +','+; //1
                sr_cdbvalue(SUBSTR(cons_cli[i,2],1,40))  +','+; //2
                sr_cdbvalue(SUBSTR(cons_cli[i,3],1,40))  +','+; //3
                IF( ! EMPTY(cons_cli[i,31]),sr_cdbvalue(cons_cli[i,31]),'NULL')+','+; //4
                IF( ! EMPTY(cons_cli[i,37]),sr_cdbvalue(cons_cli[i,37]),'NULL')+','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(SUBSTR(cons_cli[i,8],1,35))  +','+; //7
                sr_cdbvalue(SUBSTR(cons_cli[i,11],1,20)) +','+; //8
                sr_cdbvalue(SUBSTR(cons_cli[i,12],1,25))  +','+; //9
                sr_cdbvalue(cons_cli[i,13])              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue(cons_cli[i,25])              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //14
                sr_cdbvalue(SUBSTR(mfax,1,14))            +','+; //15
                sr_cdbvalue(SUBSTR(mcnpj,1,14))           +','+; //16
                sr_cdbvalue(SUBSTR(minsc,1,19))           +','+; //17
                sr_cdbvalue(SUBSTR(cons_cli[i,4],1,15)) +','+; //18
                sr_cdbvalue(IF(alltrim(cons_cli[i,45]) = 'Ativo','N','S'))+','+; //19
                sr_cdbvalue('S')                          +','+; //20
                sr_cdbvalue(cons_cli[i,27])              +','+; //21
                sr_cdbvalue('S')                          +','+; //22
                sr_cdbvalue(SUBSTR(cons_cli[i,9],1,6))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,10],1,10)) +','+; //24
                sr_cdbvalue(SUBSTR(cons_cli[i,34],1,60)) +','+; //26
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LEN(cons_cli)-i,'999,999'))
NEXT

i:=0
FOR i = 1 TO LEN(mcons_est)
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_venda      ,'+; //16
                'saldo_fis     ,'+; //17
                'saldo_mer     ,'+; //18
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'cod_clf       ,'+; //28
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(SUBSTR(mcons_est[i,2],1,14))  +','+; //1
                sr_cdbvalue('')                           +','+; //2
                sr_cdbvalue('00101')                      +','+; //3
                sr_cdbvalue(STRZERO(VAL(mcons_est[i,1]),5))    +','+; //4
                sr_cdbvalue(SUBSTR(mcons_est[i,3],1,40))  +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())                       +','+; //8
                sr_cdbvalue(SUBSTR(mcons_est[i,4],1,3))   +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue('')                           +','+; //13
                sr_cdbvalue(mcons_est[i,28])              +','+; //14
                sr_cdbvalue(mcons_est[i,28])              +','+; //15
                sr_cdbvalue(mcons_est[i,30])              +','+; //16
                sr_cdbvalue(mcons_est[i,14])              +','+; //17
                sr_cdbvalue(mcons_est[i,14])              +','+; //18
                sr_cdbvalue("S")                          +','+; //19
                sr_cdbvalue(mcons_est[i,35])              +','+; //20
                sr_cdbvalue(SUBSTR(mcons_est[i,55],1,8))  +','+; //21
                sr_cdbvalue("T")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue("01")                         +','+; //27
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(04,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LEN(mcons_est)-i,'999,999'))
NEXT
*/
i:=0
FOR i = 1 TO LEN(mcons_for)
        mcep := STRTRAN(mcons_for[i,14],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(mcons_for[i,5],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(mcons_for[i,6],'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(mcons_for[i,15],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(mcons_for[i,16],'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn      ,'+; //1
                'razao         ,'+; //2
                'fantasia      ,'+; //3
                'data_cad      ,'+; //4
                'endereco      ,'+; //5
                'bairro        ,'+; //6
                'cidade        ,'+; //7
                'uf            ,'+; //8
                'cep           ,'+; //9
                'email         ,'+; //10
                'tel1          ,'+; //11
                'tel2          ,'+; //12
                'cgc           ,'+; //13
                'insc          ,'+; //14
                'ct_gerente    ,'+; //15
                'pocket        ,'+; //16
                'obs           ,'+; //17
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(mcons_for[i,1]),4))   +','+; //1
                sr_cdbvalue(SUBSTR(mcons_for[i,2],1,40)) +','+; //2
                sr_cdbvalue(SUBSTR(mcons_for[i,3],1,40)) +','+; //3
                sr_cdbvalue(date())                      +','+; //4
                sr_cdbvalue(SUBSTR(mcons_for[i,8],1,35)) +','+; //5
                sr_cdbvalue(SUBSTR(mcons_for[i,11],1,20))+','+; //6
                sr_cdbvalue(SUBSTR(mcons_for[i,12],1,25))+','+; //7
                sr_cdbvalue(mcons_for[i,13])             +','+; //8
                sr_cdbvalue(SUBSTR(mcep,1,9))            +','+; //9
                sr_cdbvalue(SUBSTR(mcons_for[i,26],1,40))+','+; //10
                sr_cdbvalue(SUBSTR(mtel1,1,13))          +','+; //11
                sr_cdbvalue(SUBSTR(mtel2,1,13))          +','+; //12
                sr_cdbvalue(SUBSTR(mcnpj,1,14))          +','+; //13
                sr_cdbvalue(SUBSTR(minsc,1,14))          +','+; //14
                sr_cdbvalue(SUBSTR(mcons_for[i,4],1,15)) +','+; //15
                sr_cdbvalue("S")                         +','+; //16
                sr_cdbvalue(SUBSTR(mcons_for[i,27],1,60))+','+; //17
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(07,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(08,24);DEVOUT(TRANSFORM(LEN(mcons_for)-i,'999,999'))
NEXT
i:=0
FOR i = 1 TO LEN(mcons_rec)

        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'datpag        ,'+; //11
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue("DU")                                               +','+; //1
                sr_cdbvalue(SUBSTR(mcons_rec[i,1],1,12))                        +','+; //2
                sr_cdbvalue(mcons_rec[i,7])                                     +','+; //3
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,3]),5))                          +','+; //4
                sr_cdbvalue(SUBSTR(mcons_rec[i,4],1,40))                        +','+; //5
                sr_cdbvalue(mcons_rec[i,5])                                     +','+; //6
                sr_cdbvalue(mcons_rec[i,6])                                     +','+; //7
                sr_cdbvalue(mcons_rec[i,7])                                     +','+; //9
                sr_cdbvalue(mcons_rec[i,9])                                     +','+; //10
                sr_cdbvalue(IF(! EMPTY(mcons_rec[i,9]),'B',''))                 +','+; //11
                IF( ! EMPTY(mcons_rec[i,8]),sr_cdbvalue(mcons_rec[i,8]),'NULL')+','+; //4
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(13,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(14,24);DEVOUT(TRANSFORM(LEN(mcons_rec)-i,'999,999'))
NEXT
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
**************************** F I M ********************************
* CONVERSAO DO BANCO DE DADOS MATRIX
************************************************
FUNCTION sacmatrix
******************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
//IF ! AbriArq('CLIENTE','i_cli',,1);RETURN NIL;ENDIF
IF ! AbriArq('CAD_PROD','i_prod',,1);RETURN NIL;ENDIF
//USE 'compras' ALIAS 'comp' EXCLUSIVE NEW VIA 'DBFCDX'
INDEX ON i_prod->codigo TAG c_cod TO ('CAD_PROD')
ORDSETFOCUS(1)
//IF ! AbriArq('CAD_FORN','i_forn',,1);RETURN NIL;ENDIF
//IF ! AbriArq('CAD_SUBT','i_gru',,1);RETURN NIL;ENDIF
//IF ! AbriArq('CAD_CPAG','i_dupp',,1);RETURN NIL;ENDIF
//IF ! AbriArq('CAD_CHEQ','i_cheq',,1);RETURN NIL;ENDIF
//IF ! AbriArq('CAD_CREC','i_dupr',,1);RETURN NIL;ENDIF

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA MATRIX')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro PRODUTO......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

DEVPOS(10,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(11,00);DEVOUT('Restantes.............: ')

DEVPOS(13,00);DEVOUT('Registro PAGAR........: ')
DEVPOS(14,00);DEVOUT('Restantes.............: ')

//DEVPOS(16,00);DEVOUT('Registro CHEQUES......: ')
//DEVPOS(17,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
/*
*************
SELE('i_cli')
GO TOP
*************
i:=0
WHILE ! EOF()
        *************
        SELE('i_cli')
        *************
        mcep := STRTRAN(i_cli->cep,'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")
        mcnpj := SPACE(14)
        mcpf  := SPACE(11)
        mcnpj := STRTRAN(i_cli->cnpj,'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")
        mcpf := STRTRAN(i_cli->cpf,'.','')
        mcpf := STRTRAN(mcpf,'-','')
        mcpf := STRTRAN(mcpf,'/','')
        mcpf := STRTRAN(mcpf,",","")

        minsc := STRTRAN(i_cli->inscri,'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(i_cli->fone,'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(i_cli->celular,'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //14
                'fax           ,'+; //15
                'cgc           ,'+; //16
                'cpf           ,'+; //17
                'insc          ,'+; //18
                'rg            ,'+; //18
                'contato       ,'+; //19
                'bloqueio      ,'+; //20
                'spc           ,'+; //21
                'limite        ,'+; //22
                'pocket        ,'+; //23
                'numero        ,'+; //24
                'complemento   ,'+; //25
                'empre_c       ,'+; //26
                'salario_c     ,'+; //26
                'pai           ,'+; //26
                'mae           ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(i_cli->cod,5))    +','+; //1
                sr_cdbvalue(SUBSTR(i_cli->nome,1,40))  +','+; //2
                sr_cdbvalue('') +','+; //3
                IF(! EMPTY(i_cli->dtacad),sr_cdbvalue(i_cli->dtacad),nulo)              +','+; //4
                IF(! EMPTY(i_cli->dtanasc),sr_cdbvalue(i_cli->dtanasc),nulo)               +','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(SUBSTR(i_cli->endereco,1,35))  +','+; //7
                sr_cdbvalue(SUBSTR(i_cli->bairro,1,20))               +','+; //8
                sr_cdbvalue(SUBSTR(cidade,1,25)      )  +','+; //9
                sr_cdbvalue(i_cli->uf)              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue('')              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //14
                sr_cdbvalue('')            +','+; //15
                sr_cdbvalue(SUBSTR(mcnpj,1,14))           +','+; //16
                sr_cdbvalue(SUBSTR(mcpf,1,11))           +','+; //17
                sr_cdbvalue(SUBSTR(minsc,1,19))           +','+; //18
                sr_cdbvalue(SUBSTR(i_cli->rg,1,14))           +','+; //18
                sr_cdbvalue(''                          ) +','+; //19
                sr_cdbvalue('N')                          +','+; //20
                sr_cdbvalue('S')                          +','+; //21
                sr_cdbvalue(0)              +','+; //22
                sr_cdbvalue('S')                          +','+; //23
                sr_cdbvalue(''                          )  +','+; //24
                sr_cdbvalue(''                          ) +','+; //25
                sr_cdbvalue(SUBSTR(i_cli->empresa,1,20)  ) +','+; //25
                sr_cdbvalue(i_cli->salario               ) +','+; //25
                sr_cdbvalue(i_cli->pai               ) +','+; //25
                sr_cdbvalue(i_cli->mae               ) +','+; //25
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*/
*************
SELE('i_prod')
GO TOP
*************
/*
bloqarq()
WHILE ! EOF()
        mensagem(i_prod->cod)
        i_prod->CODIGO := SUBSTR(i_prod->cod,5)
        SKIP
ENDDO
DBCOMMITALL()
GO TOP
*/
i:=1
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cust_merc     ,'+; //13
                'pr_venda      ,'+; //14
                'saldo_fis     ,'+; //15
                'saldo_mer     ,'+; //16
                'isento        ,'+; //17
                'sittrib       ,'+; //18
                'nbm           ,'+; //19
                'iat           ,'+; //20
                'ippt          ,'+; //21
                'pocket        ,'+; //22
                'sld_neg       ,'+; //23
                'descont       ,'+; //24
                'dolar         ,'+; //25
                'est_min       ,'+; //26
                'p_lucro       ,'+; //27
                'cod_clf       ,'+; //28
                'aplic0        ,'+; //29
                'cod_fab       ,'+; //30
                'fabrica       ,'+; //31
                'aplic1        ,'+; //32
                'local         ,'+; //33
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('')               +','+; //1
                sr_cdbvalue(SUBSTR(i_prod->codfabri,1,13))  +','+; //2
                sr_cdbvalue(STRZERO(i_prod->subtipo,3)+'01')+','+; //3
                sr_cdbvalue(STRZERO(VAL(i_prod->codigo),5))              +','+; //34 sr_cdbvalue(STRZERO(i,5))  +','+; //4
                sr_cdbvalue(SUBSTR(i_prod->descrica,1,40))   +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())              +','+; //8
                sr_cdbvalue(i_prod->unidade)  +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue(i_prod->valocompr)               +','+; //13
                sr_cdbvalue(i_prod->valor)              +','+; //14
                sr_cdbvalue(i_prod->estoque)              +','+; //15
                sr_cdbvalue(i_prod->estoque)              +','+; //16
                sr_cdbvalue('F') +','+; //17
                sr_cdbvalue('060')+','+; //18
                sr_cdbvalue('') +','+; //19
                sr_cdbvalue("A")                          +','+; //20
                sr_cdbvalue("T")                          +','+; //21
                sr_cdbvalue("S")                          +','+; //22
                sr_cdbvalue("N")                          +','+; //23
                sr_cdbvalue("N")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue(0)              +','+; //26
                sr_cdbvalue(i_prod->marlucro)              +','+; //29
                sr_cdbvalue('01'          )              +','+; //30
                sr_cdbvalue(i_prod->cod)              +','+; //31
                sr_cdbvalue(STRZERO(i_prod->codforne,4))              +','+; //32
                sr_cdbvalue(SUBSTR(i_prod->forneced,1,40))              +','+; //33
                sr_cdbvalue(i_prod->aplicacao)              +','+; //34
                sr_cdbvalue(SUBSTR(i_prod->cod,1,3))              +','+; //34
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
/*
*************
SELE('i_forn')
GO TOP
*************
i:=0
WHILE ! EOF()
        mcep := STRTRAN(i_forn->cep,'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(i_forn->cnpj,'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")

        minsc := STRTRAN(i_forn->insc,'.','')
        minsc := STRTRAN(minsc,'-','')
        minsc := STRTRAN(minsc,'/','')
        minsc := STRTRAN(minsc,",","")

        mtel1 := STRTRAN(i_forn->fone,'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")
        mtel1 := STRTRAN(mtel1,"(","")
        mtel1 := STRTRAN(mtel1,")","")

        mtel2 := STRTRAN(i_forn->fax,'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")
        mtel2 := STRTRAN(mtel2,"(","")
        mtel2 := STRTRAN(mtel2,")","")

        mtel3 := STRTRAN(i_forn->celular,'.','')
        mtel3 := STRTRAN(mtel3,'-','')
        mtel3 := STRTRAN(mtel3,'/','')
        mtel3 := STRTRAN(mtel3,",","")
        mtel3 := STRTRAN(mtel3,"(","")
        mtel3 := STRTRAN(mtel3,")","")

        sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn      ,'+; //1
                'razao         ,'+; //2
                'fantasia      ,'+; //3
                'data_cad      ,'+; //4
                'endereco      ,'+; //5
                'bairro        ,'+; //6
                'cidade        ,'+; //7
                'uf            ,'+; //8
                'cep           ,'+; //9
                'email         ,'+; //10
                'tel1          ,'+; //11
                'tel2          ,'+; //12
                'fax           ,'+; //12
                'cgc           ,'+; //13
                'insc          ,'+; //14
                'ct_gerente    ,'+; //15
                'pocket        ,'+; //16
                'PRAZO_PAG     ,'+; //16
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(i_forn->cod,4))   +','+; //1
                sr_cdbvalue(SUBSTR(i_forn->forneced,1,40)) +','+; //2
                sr_cdbvalue('')+','+; //3
                sr_cdbvalue(DATE())             +','+; //4
                sr_cdbvalue(SUBSTR(i_forn->endereco,1,35)) +','+; //5
                sr_cdbvalue(SUBSTR(i_forn->bairro,1,20)) +','+; //6
                sr_cdbvalue(SUBSTR(i_forn->cidade,1,25)) +','+; //7
                sr_cdbvalue(i_forn->uf)              +','+; //8
                sr_cdbvalue(SUBSTR(mcep,1,9))            +','+; //9
                sr_cdbvalue(SUBSTR(i_forn->email,1,40))+','+; //10
                sr_cdbvalue(SUBSTR(mtel1,1,13))          +','+; //11
                sr_cdbvalue(SUBSTR(mtel2,1,13))          +','+; //12
                sr_cdbvalue(SUBSTR(mtel3,1,13))          +','+; //12
                sr_cdbvalue(SUBSTR(mcnpj,1,14))          +','+; //13
                sr_cdbvalue(SUBSTR(minsc,1,14))          +','+; //14
                sr_cdbvalue(SUBSTR(i_forn->contato,1,15)) +','+; //15
                sr_cdbvalue("S")                         +','+; //16
                sr_cdbvalue(STRZERO(i_forn->prazo,2)) +','+; //15
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(07,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(08,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*************
SELE('i_dupr')
GO TOP
*************
i:=0
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'datpag        ,'+; //12
                'vendedor      ,'+; //12
                'obs           ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('DU')                +','+; //1
                sr_cdbvalue(SUBSTR(IF(EMPTY(i_dupr->titulo),STRZERO(i_dupr->cod,6),i_dupr->titulo),1,10))+','+; //2
                sr_cdbvalue(iat(i_dupr->valor,3))                                      +','+; //3
                sr_cdbvalue(STRZERO(i_dupr->codcli,5))                          +','+; //4
                sr_cdbvalue('')                         +','+; //5
                sr_cdbvalue(IF(! EMPTY(i_dupr->dta),i_dupr->dta,nulo))                                     +','+; //6
                IF(! EMPTY(i_dupr->vencim),sr_cdbvalue(i_dupr->vencim),nulo)                                      +','+; //7
                sr_cdbvalue(iat(i_dupr->valor,3))+','+; //9
                sr_cdbvalue(IF(! EMPTY(i_dupr->dtapag),iat(i_dupr->valor,3),0))+','+; //12
                sr_cdbvalue(IF(! EMPTY(i_dupr->dtapag),'B',''))+','+; //12
                sr_cdbvalue('')+','+; //12
                IF(! EMPTY(i_dupr->dtapag),sr_cdbvalue(i_dupr->dtapag),nulo)+','+; //12
                sr_cdbvalue(STRZERO(i_dupr->codusu,3))+','+; //12
                sr_cdbvalue(SUBSTR(i_dupr->descri,1,60))+','+; //12
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(10,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(11,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
*************
SELE('i_dupp')
GO TOP
*************
i:=0
WHILE ! EOF()
        sr_getconnection():exec('INSERT INTO sacdupp ('+;
                'tipo          ,'+; //1
                'duplicata     ,'+; //2
                'valor_dup     ,'+; //3
                'fornec        ,'+; //4
                'cliente       ,'+; //5
                'emissao       ,'+; //6
                'venc          ,'+; //7
                'valor         ,'+; //9
                'vlpago        ,'+; //10
                'pago          ,'+; //11
                'conta         ,'+; //12
                'datpag        ,'+; //12
                'obs           ,'+; //12
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('DU')                +','+; //1
                sr_cdbvalue(SUBSTR(IF(! EMPTY(i_dupp->titulo),i_dupp->titulo,STRZERO(i_dupp->cod,6)),1,10))+','+; //2
                sr_cdbvalue(iat(i_dupp->valordacon,3))                                      +','+; //3
                sr_cdbvalue(STRZERO(i_dupp->codfornece,4))                          +','+; //4
                sr_cdbvalue('')                         +','+; //5
                IF(! EMPTY(i_dupp->dta),sr_cdbvalue(i_dupp->dta),nulo)                                +','+; //6
                IF(! EMPTY(i_dupp->dtavencime),sr_cdbvalue(i_dupp->dtavencime),nulo)  +','+; //7
                sr_cdbvalue(iat(i_dupp->valor,3))                                +','+; //9
                sr_cdbvalue(iat(i_dupp->valorpago,3))       +','+; //10
                sr_cdbvalue(IF(! EMPTY(i_dupp->dtapagamen),'B',''))                 +','+; //11
                sr_cdbvalue('')+','+; //12
                IF(! EMPTY(i_dupp->dtapagamen),sr_cdbvalue(i_dupp->dtapagamen),nulo)+','+; //12
                sr_cdbvalue(SUBSTR(i_dupp->descricao,1,60))+','+; //12
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(13,24);DEVOUT(TRANSFORM(LASTREC(),'999,999'))
	DEVPOS(14,24);DEVOUT(TRANSFORM(LASTREC() - (i++),'999,999'))
        SKIP
ENDDO
sr_getconnection():exec("COMMIT",,.F.)

*/
/*
i:=0
m_dup:={}
sr_getconnection():exec("SELECT * FROM saccli",,.t.,@m_dup)
IF LEN(m_dup) > 0
        FOR i = 1 TO LEN(m_dup)
                mensagem('Atualizando CONTAS A RECEBER..Registro:'+STRZERO(i,5))
                sr_getconnection():exec("UPDATE sacdupr SET cliente = "+sr_cdbvalue(m_dup[i,3])+" WHERE fornec = "+sr_cdbvalue(m_dup[i,2]) ,,.f.)
        NEXT
ENDIF
i:=0
m_dup:={}
sr_getconnection():exec("SELECT * FROM sacforn",,.t.,@m_dup)
IF LEN(m_dup) > 0
        FOR i = 1 TO LEN(m_dup)
                mensagem('Atualizando CONTAS A PAGAR..Registro:'+STRZERO(i,5))
                sr_getconnection():exec("UPDATE sacdupp SET cliente = "+sr_cdbvalue(m_dup[i,2])+" WHERE fornec = "+sr_cdbvalue(m_dup[i,1]),,.f.)
        NEXT
ENDIF
sr_getconnection():exec("COMMIT",,.F.)
*/
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
************************************ F I M ***************************************************
* CONVERSAO DO BANCO DE DADOS GDOC
************************************************
FUNCTION sacsyspdv
******************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
IF FILE('SYSPDV_SRV.GDB')
        mensagem('Conectando ao BANCO DE DADOS...')
        nCnn1 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD=localhost:C:\siac\SYSPDV_SRV.GDB;uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        If nCnn1 < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
        SR_SetActiveConnection(nCnn1)
ELSE
        atencao("Nao foi encontra o BANCO DE DADOS caminho: C:\siac\DATAGES.GDB, Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
        RETURN NIL
ENDIF
cons_cli:={}
sr_getconnection():exec("SELECT * FROM cliente",,.t.,@cons_cli)

mcons_est :={}
sr_getconnection():exec("SELECT * FROM produto",,.t.,@mcons_est)

//mcons_for :={}
//sr_getconnection():exec("SELECT * FROM fornecedor",,.t.,@mcons_for)

//mcons_rec :={}
//sr_getconnection():exec("SELECT * FROM receber",,.t.,@mcons_rec)

SR_SetActiveConnection(nCnn)

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA PANDORA')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro ESTOQUE......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

//DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
//DEVPOS(08,00);DEVOUT('Restantes.............: ')

//DEVPOS(10,00);DEVOUT('Registro PAGAR........: ')
//DEVPOS(11,00);DEVOUT('Restantes.............: ')

//DEVPOS(13,00);DEVOUT('Registro RECEBER......: ')
//DEVPOS(14,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
i:=0
FOR i = 1 TO LEN(cons_cli)
        mcep := STRTRAN(cons_cli[i,7],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(cons_cli[i,4],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")
        mcnpj := ALLTRIM(mcnpj)

        mtel1 := STRTRAN(cons_cli[i,6],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'cgc           ,'+; //14
                'insc          ,'+; //15
                'cpf           ,'+; //16
                'rg            ,'+; //17
                'bloqueio      ,'+; //19
                'spc           ,'+; //20
                'limite        ,'+; //21
                'pocket        ,'+; //22
                'numero        ,'+; //23
                'complemento   ,'+; //24
                'obs           ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(cons_cli[i,1]),5))    +','+; //1
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,2],1,40)))  +','+; //2
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,19],1,40)))  +','+; //3
                IF( ! EMPTY(cons_cli[i,21]),sr_cdbvalue(SUBSTR(cons_cli[i,21],1,10)),'NULL')+','+; //4
                IF( ! EMPTY(cons_cli[i,22]),sr_cdbvalue(SUBSTR(cons_cli[i,22],1,10)),'NULL')+','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,3],1,35)))  +','+; //7
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,5],1,20))) +','+; //8
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,8],1,25)))  +','+; //9
                sr_cdbvalue(cons_cli[i,11])              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue(cons_cli[i,44])              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(IF(LEN(mcnpj)>11,SUBSTR(mcnpj,1,14),''))           +','+; //14
                sr_cdbvalue(IF(LEN(mcnpj)>11,SUBSTR(cons_cli[i,20],1,14),'')) +','+; //15
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(mcnpj,1,14),''))           +','+; //16
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(cons_cli[i,20],1,14),'')) +','+; //17
                sr_cdbvalue('N')                          +','+; //19
                sr_cdbvalue('S')                          +','+; //20
                sr_cdbvalue(cons_cli[i,12])              +','+; //21
                sr_cdbvalue('S')                          +','+; //22
                sr_cdbvalue(SUBSTR(cons_cli[i,9],1,6))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,10],1,10)) +','+; //24
                sr_cdbvalue(SUBSTR(cons_cli[i,38],1,60)) +','+; //26
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LEN(cons_cli)-i,'999,999'))
NEXT

i:=0
FOR i = 1 TO LEN(mcons_est)
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_venda      ,'+; //16
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'cod_clf       ,'+; //28
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('' )  +','+; //1
                sr_cdbvalue('')                           +','+; //2
                sr_cdbvalue('00101')                      +','+; //3
                sr_cdbvalue(STRZERO(VAL(mcons_est[i,1]),5))    +','+; //4
                sr_cdbvalue(tira_acento(SUBSTR(mcons_est[i,3],1,40)))  +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())                       +','+; //8
                sr_cdbvalue(SUBSTR(mcons_est[i,7],1,3))   +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue('')                           +','+; //13
                sr_cdbvalue(mcons_est[i,25])              +','+; //14
                sr_cdbvalue(mcons_est[i,25])              +','+; //15
                sr_cdbvalue(mcons_est[i,33])  +','+; //16
                sr_cdbvalue(SUBSTR(mcons_est[i,6],1,1))  +','+; //19
                sr_cdbvalue(IF(SUBSTR(mcons_est[i,6],1,1) = 'I','040',IF(SUBSTR(mcons_est[i,6],1,1) = 'F','060','000')))+','+; //20
                sr_cdbvalue('')                           +','+; //21
                sr_cdbvalue("T")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue("01")                         +','+; //27
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LEN(mcons_est)-i,'999,999'))
NEXT
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
**************************** F I M ********************************
* CONVERSAO DO BANCO DE DADOS GDOC
************************************************
FUNCTION sacmasterwin
*********************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL'

IF cod_operado <> '999'
        RETURN NIL
ENDIF
AbriArq('catitem','item',,1)
AbriArq('catficha','fich',,1)

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA PANDORA')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro ESTOQUE......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

//DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
//DEVPOS(08,00);DEVOUT('Restantes.............: ')

//DEVPOS(10,00);DEVOUT('Registro PAGAR........: ')
//DEVPOS(11,00);DEVOUT('Restantes.............: ')

//DEVPOS(13,00);DEVOUT('Registro RECEBER......: ')
//DEVPOS(14,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
*************
SELE('fich')
*************
i:=451
y:=0
WHILE ! EOF()
        i++
        y++
        mcep := STRTRAN(fich->cep,'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(fich->cpf_cgc,'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")
        mcnpj := ALLTRIM(mcnpj)

        mtel1 := STRTRAN(fich->tel1,'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")
        mtel1 := STRTRAN(mtel1,'(','')
        mtel1 := STRTRAN(mtel1,')','')
        mtel1 := STRTRAN(mtel1,'_','')

        mtel2 := STRTRAN(fich->tel2,'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")
        mtel2 := STRTRAN(mtel2,'(','')
        mtel2 := STRTRAN(mtel2,')','')
        mtel2 := STRTRAN(mtel2,'_','')

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'data_cad      ,'+; //4
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'email         ,'+; //12
                'tel1          ,'+; //13
                'tel2          ,'+; //13
                'cgc           ,'+; //14
                'insc          ,'+; //15
                'cpf           ,'+; //16
                'rg            ,'+; //17
                'bloqueio      ,'+; //19
                'spc           ,'+; //20
                'pocket        ,'+; //22
                'obs           ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(i,5))    +','+; //1
                sr_cdbvalue(tira_acento(UPPER(SUBSTR(fich->nome,1,40))))  +','+; //2
                sr_cdbvalue(DATE())+','+; //4
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(tira_acento(SUBSTR(fich->endereco,1,35)))  +','+; //7
                sr_cdbvalue(tira_acento(SUBSTR(fich->bairro,1,20))) +','+; //8
                sr_cdbvalue(tira_acento(SUBSTR(fich->cidade,1,25)))  +','+; //9
                sr_cdbvalue(fich->estado)              +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue(fich->email)              +','+; //12
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(SUBSTR(mtel2,1,14))           +','+; //13
                sr_cdbvalue(IF(LEN(mcnpj)>11,SUBSTR(mcnpj,1,14),''))           +','+; //14
                sr_cdbvalue(IF(LEN(mcnpj)>11,SUBSTR(fich->insc_rg,1,14),'')) +','+; //15
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(mcnpj,1,14),''))           +','+; //16
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(fich->insc_rg,1,14),'')) +','+; //17
                sr_cdbvalue('N')                          +','+; //19
                sr_cdbvalue('S')                          +','+; //20
                sr_cdbvalue('S')                          +','+; //22
                sr_cdbvalue(SUBSTR(fich->obs1+fich->obs2,1,60)) +','+; //26
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(y,'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LASTREC()-y,'999,999'))
        SKIP
ENDDO
*************
SELE('item')
*************
i:=1796
y:=0
WHILE ! EOF()
        i++
        y++
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'pr_venda      ,'+; //16
                'isento        ,'+; //19
                'sittrib       ,'+; //20
                'nbm           ,'+; //21
                'iat           ,'+; //22
                'ippt          ,'+; //23
                'pocket        ,'+; //24
                'sld_neg       ,'+; //25
                'descont       ,'+; //26
                'dolar         ,'+; //27
                'cod_clf       ,'+; //28
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(item->codbarra)  +','+; //1
                sr_cdbvalue('')                           +','+; //2
                sr_cdbvalue('00101')                      +','+; //3
                sr_cdbvalue(STRZERO(i,5))    +','+; //4
                sr_cdbvalue(tira_acento(UPPER(SUBSTR(item->descri,1,40))))  +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())                       +','+; //8
                sr_cdbvalue('UN')   +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue(item->preco1)  +','+; //16
                sr_cdbvalue(IF(item->icms ,'T','I'))  +','+; //19
                sr_cdbvalue(IF(item->icms,'000','040'))+','+; //20
                sr_cdbvalue('')                           +','+; //21
                sr_cdbvalue("T")                          +','+; //22
                sr_cdbvalue("T")                          +','+; //23
                sr_cdbvalue("S")                          +','+; //24
                sr_cdbvalue("N")                          +','+; //25
                sr_cdbvalue("N")                          +','+; //26
                sr_cdbvalue("N")                          +','+; //27
                sr_cdbvalue("01")                         +','+; //28
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(y,'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LASTREC()-y,'999,999'))
        SKIP
ENDDO
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
**************************** F I M ********************************
* CONVERSAO DO BANCO DE DADOS MOVEIS BELO JARDIM
************************************************
FUNCTION sacmovbelo
*******************
LOCAL opcao,minsc:='',mcpf:='',mcgc:='',mcli,mforn,mprod,mreceber,mapagar,i:=0,;
       cons_cli,mcons_est,mcons_for,mcons_pag,mcons_rec,nulo:='NULL',mcons_cat:={}

IF cod_operado <> '999'
        RETURN NIL
ENDIF
//IF FILE('MOVEBELO.GDB')
        mensagem('Conectando ao BANCO DE DADOS...')
        nCnn1 := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD=localhost:C:\SISCOM\MOVEBELO.GDB;uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        If nCnn1 < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
        SR_SetActiveConnection(nCnn1)
//ENDIF
mcons_cat:={}
sr_getconnection():exec("SELECT * FROM categoria",,.t.,@mcons_cat)

cons_cli:={}
sr_getconnection():exec("SELECT * FROM ficha",,.t.,@cons_cli)

mcons_est :={}
sr_getconnection():exec("SELECT * FROM produto",,.t.,@mcons_est)

sr_getconnection():exec("DELETE FROM fornece WHERE (codigo = '' OR codigo IS NULL)",,.f.)
mcons_for :={}
sr_getconnection():exec("SELECT * FROM fornece",,.t.,@mcons_for)


sr_getconnection():exec("DELETE FROM parcelas WHERE (total = 0 OR total IS NULL OR cliente = '' OR cliente IS NULL OR vencimento IS NULL)",,.f.)
mcons_rec :={}
sr_getconnection():exec("SELECT * FROM parcelas",,.t.,@mcons_rec)

SR_SetActiveConnection(nCnn)

op_tela(10,10,25,80,'CONVERSAO DO SISTEMA MOVEIS BELO JARDIM')

DEVPOS(01,00);DEVOUT('Registro CLIENTES.....: ')
DEVPOS(02,00);DEVOUT('Restantes.............: ')

DEVPOS(04,00);DEVOUT('Registro ESTOQUE......: ')
DEVPOS(05,00);DEVOUT('Restantes.............: ')

DEVPOS(07,00);DEVOUT('Registro FORNECEDOR...: ')
DEVPOS(08,00);DEVOUT('Restantes.............: ')

//DEVPOS(10,00);DEVOUT('Registro PAGAR........: ')
//DEVPOS(11,00);DEVOUT('Restantes.............: ')

DEVPOS(13,00);DEVOUT('Registro RECEBER......: ')
DEVPOS(14,00);DEVOUT('Restantes.............: ')

opcao := op_simnao('N','Confirma a Operacao:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
atencao('Verificar as tebelas PARCELAS e FICHA do sistema do cliente os campos de DATA...')
limpeza_db()
i:=0
FOR i = 1 TO LEN(mcons_cat)
        sr_getconnection():exec('INSERT INTO sacgrupo ('+;
                'gru_sub       ,'+; //1
                'merc          ,'+; //2
                'data_cad      ,'+; //3
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('001'+mcons_cat[i,2])         +','+; //1
                sr_cdbvalue(SUBSTR(mcons_cat[i,1],1,40))  +','+; //2
                sr_cdbvalue(DATE())                       +','+; //3
                sr_cdbvalue(' ')+')',,.f.)
NEXT

i:=0
FOR i = 1 TO LEN(cons_cli)
        mcep := STRTRAN(cons_cli[i,9],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(cons_cli[i,10],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")
        mcnpj := ALLTRIM(mcnpj)

        mtel1 := STRTRAN(cons_cli[i,12],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        sr_getconnection():exec('INSERT INTO saccli ('+;
                'cod_cli       ,'+; //1
                'razao         ,'+; //2
                'nome          ,'+; //3
                'data_cad      ,'+; //4
                'nascimento    ,'+; //5
                'tipo          ,'+; //6
                'endereco      ,'+; //7
                'bairro        ,'+; //8
                'cidade        ,'+; //9
                'uf            ,'+; //10
                'cep           ,'+; //11
                'tel1          ,'+; //13
                'cpf           ,'+; //16
                'rg            ,'+; //17
                'bloqueio      ,'+; //19
                'spc           ,'+; //20
                'limite        ,'+; //21
                'pocket        ,'+; //22
                'numero        ,'+; //23
                'pai           ,'+; //23
                'mae           ,'+; //23
                'obs           ,'+; //26
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(cons_cli[i,2],5))    +','+; //1
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,3],1,40)))  +','+; //2
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,4],1,40)))  +','+; //3
                'NULL'+','+; //4
                IF( ! EMPTY(cons_cli[i,14]),sr_cdbvalue(cons_cli[i,14]),'NULL')+','+; //5
                sr_cdbvalue('C')                          +','+; //6
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,5],1,5)))  +','+; //7
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,5],1,7))) +','+; //8
                sr_cdbvalue(tira_acento(SUBSTR(cons_cli[i,8],1,8)))  +','+; //9
                sr_cdbvalue('PE')                                     +','+; //10
                sr_cdbvalue(mcep)                         +','+; //11
                sr_cdbvalue(SUBSTR(mtel1,1,14))           +','+; //13
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(mcnpj,1,14),''))           +','+; //16
                sr_cdbvalue(IF(LEN(mcnpj)<=11,SUBSTR(cons_cli[i,20],1,14),'')) +','+; //17
                sr_cdbvalue('N')                          +','+; //19
                sr_cdbvalue('S')                          +','+; //20
                sr_cdbvalue(cons_cli[i,17])              +','+; //21
                sr_cdbvalue('S')                          +','+; //22
                sr_cdbvalue(SUBSTR(cons_cli[i,6],1,6))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,19],1,40))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,20],1,40))  +','+; //23
                sr_cdbvalue(SUBSTR(cons_cli[i,21],1,60)) +','+; //26
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(01,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(02,24);DEVOUT(TRANSFORM(LEN(cons_cli)-i,'999,999'))
NEXT

i:=0
FOR i = 1 TO LEN(mcons_est)
        sr_getconnection():exec('INSERT INTO sacmerc ('+;
                'cod_barr      ,'+; //1
                'ref           ,'+; //2
                'gru_sub       ,'+; //3
                'cod_merc      ,'+; //4
                'merc          ,'+; //5
                'tipo_merc     ,'+; //6
                'balanca       ,'+; //7
                'data_cad      ,'+; //8
                'unidade       ,'+; //9
                'disp          ,'+; //10
                'livre_desc    ,'+; //11
                'cod_fab       ,'+; //13
                'cust_merc     ,'+; //14
                'cust_real     ,'+; //15
                'pr_venda      ,'+; //16
                'sittrib       ,'+; //17
                'nbm           ,'+; //18
                'iat           ,'+; //19
                'ippt          ,'+; //20
                'pocket        ,'+; //21
                'sld_neg       ,'+; //22
                'descont       ,'+; //23
                'dolar         ,'+; //24
                'cod_clf       ,'+; //25
                'saldo_mer     ,'+; //25
                'saldo_fis     ,'+; //25
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(mcons_est[i,9] )                          +','+; //1
                sr_cdbvalue('')                           +','+; //2
                sr_cdbvalue('001'+mcons_est[i,12])        +','+; //3
                sr_cdbvalue(STRZERO(mcons_est[i,1],5))+','+; //4
                sr_cdbvalue(tira_acento(SUBSTR(mcons_est[i,3],1,40)))  +','+; //5
                sr_cdbvalue("1")                          +','+; //6
                sr_cdbvalue("N")                          +','+; //7
                sr_cdbvalue(date())                       +','+; //8
                sr_cdbvalue('UN')                         +','+; //9
                sr_cdbvalue("S")                          +','+; //10
                sr_cdbvalue("N")                          +','+; //11
                sr_cdbvalue('')                           +','+; //13
                sr_cdbvalue(ROUND(mcons_est[i,4],2))               +','+; //14
                sr_cdbvalue(ROUND(mcons_est[i,4],2))               +','+; //15
                sr_cdbvalue(ROUND(mcons_est[i,5],2))               +','+; //16
                sr_cdbvalue('000')                        +','+; //17
                sr_cdbvalue('')                           +','+; //18
                sr_cdbvalue("T")                          +','+; //19
                sr_cdbvalue("T")                          +','+; //20
                sr_cdbvalue("S")                          +','+; //21
                sr_cdbvalue("N")                          +','+; //22
                sr_cdbvalue("N")                          +','+; //23
                sr_cdbvalue("N")                          +','+; //24
                sr_cdbvalue("01")                         +','+; //25
                sr_cdbvalue(mcons_est[i,6])                         +','+; //25
                sr_cdbvalue(mcons_est[i,6])                         +','+; //25
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(04,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(05,24);DEVOUT(TRANSFORM(LEN(mcons_est)-i,'999,999'))
NEXT

/*
i:=0
FOR i = 1 TO LEN(mcons_for)

        mcep := STRTRAN(mcons_for[i,8],'.','')
        mcep := STRTRAN(mcep,'-','')
        mcep := STRTRAN(mcep,'/','')
        mcep := STRTRAN(mcep,",","")

        mcnpj := STRTRAN(mcons_for[i,16],'.','')
        mcnpj := STRTRAN(mcnpj,'-','')
        mcnpj := STRTRAN(mcnpj,'/','')
        mcnpj := STRTRAN(mcnpj,",","")
        mcnpj := ALLTRIM(mcnpj)

        mtel1 := STRTRAN(mcons_for[i,9],'.','')
        mtel1 := STRTRAN(mtel1,'-','')
        mtel1 := STRTRAN(mtel1,'/','')
        mtel1 := STRTRAN(mtel1,",","")

        mtel2 := STRTRAN(mcons_for[i,10],'.','')
        mtel2 := STRTRAN(mtel2,'-','')
        mtel2 := STRTRAN(mtel2,'/','')
        mtel2 := STRTRAN(mtel2,",","")

        sr_getconnection():exec('INSERT INTO sacforn ('+;
                'cod_forn,'+; //1
                'razao  ,'+; //2
                'data_cad,'+; //3
                'endereco,'+; //4
                'bairro,'+; //5
                'cidade,'+; //6
                'uf,'+; //7
                'cep,'+; //8
                'email,'+; //9
                'tel1,'+; //10
                'tel2,'+; //11
                'cgc,'+; //13
                'insc,'+; //14
                'ct_vendedo,'+; //15
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(STRZERO(VAL(mcons_for[i,2]),4))+','+; //1
                sr_cdbvalue(SUBSTR(mcons_for[i,3],1,40))   +','+; //2
                sr_cdbvalue(DATE())                        +','+; //3
                sr_cdbvalue(SUBSTR(mcons_for[i,4],1,35))  +','+; //4
                sr_cdbvalue(SUBSTR(mcons_for[i,5],1,20))                          +','+; //5
                sr_cdbvalue(SUBSTR(mcons_for[i,6],1,25))                          +','+; //6
                sr_cdbvalue(SUBSTR(mcons_for[i,7],1,2))                       +','+; //7
                sr_cdbvalue(SUBSTR(mcep,1,9))                         +','+; //8
                sr_cdbvalue(mcons_for[i,14])                                    +','+; //8
                sr_cdbvalue(mtel1)                                    +','+; //8
                sr_cdbvalue(mtel2)                                    +','+; //8
                sr_cdbvalue(mcnpj)                                    +','+; //8
                sr_cdbvalue(SUBSTR(mcons_for[i,17],1,14))                                    +','+; //8
                sr_cdbvalue(SUBSTR(mcons_for[i,11],1,15))                                    +','+; //8
                sr_cdbvalue(' ')+')',,.f.)
	DEVPOS(07,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(08,24);DEVOUT(TRANSFORM(LEN(mcons_for)-i,'999,999'))
NEXT


i:=0
FOR i = 1 TO LEN(mcons_rec)
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo,' +; //1
                'duplicata,'+; //2
                'valor_dup,' +; //3
                'fornec,' +; //4
                'cliente,' +; //5
                'emissao,' +; //6
                'venc,' +; //7
                'valor,' +; //8
                'num_ped,' +; //9
                'conta,' +; //10
                'obs,' +; //11
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('DU')                               +','+; //1
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,1]),6)+'-'+SUBSTR(mcons_rec[i,7],1,2))     +','+; //2
                sr_cdbvalue(mcons_rec[i,9])                     +','+; //3
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,2]),5))     +','+; //4
                sr_cdbvalue(SUBSTR(mcons_rec[i,3],1,40))        +','+; //5
                sr_cdbvalue(mcons_rec[i,4])                     +','+; //6
                sr_cdbvalue(mcons_rec[i,5])                     +','+; //7
                sr_cdbvalue(mcons_rec[i,11])                    +','+; //8
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,1]),6))     +','+; //9
                IF(mcons_rec[i,10] > 0,sr_cdbvalue('*'),sr_cdbvalue(''))+','+; //10
                sr_cdbvalue('MIGRACAO DO SISTEMA ANTERIOR')     +','+; //11
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(13,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(14,24);DEVOUT(TRANSFORM(LEN(mcons_rec)-i,'999,999'))
NEXT
*/
i:=0
FOR i = 1 TO LEN(mcons_rec)
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'tipo,' +; //1
                'duplicata,'+; //2
                'valor_dup,' +; //3
                'fornec,' +; //4
                'cliente,' +; //5
                'emissao,' +; //6
                'venc,' +; //7
                'valor,' +; //8
                'num_ped,' +; //9
                'conta,' +; //10
                'obs,' +; //11
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue('DU')                               +','+; //1
                sr_cdbvalue(STRZERO(mcons_rec[i,1],6)+'-'+SUBSTR(mcons_rec[i,11],1,2))     +','+; //2
                sr_cdbvalue(mcons_rec[i,9])                     +','+; //3
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,3]),5))     +','+; //4
                sr_cdbvalue(SUBSTR(mcons_rec[i,4],1,40))        +','+; //5
                sr_cdbvalue(mcons_rec[i,5])                     +','+; //6
                sr_cdbvalue(mcons_rec[i,6])                     +','+; //7
                sr_cdbvalue(ROUND(mcons_rec[i,9],2))                    +','+; //8
                sr_cdbvalue(STRZERO(VAL(mcons_rec[i,2]),6))     +','+; //9
                IF(mcons_rec[i,7] > 0,sr_cdbvalue('*'),sr_cdbvalue(''))+','+; //10
                sr_cdbvalue('MIGRACAO DO SISTEMA ANTERIOR')     +','+; //11
                sr_cdbvalue(' ')+')',,.f.)

	DEVPOS(13,24);DEVOUT(TRANSFORM(i,'999,999'))
	DEVPOS(14,24);DEVOUT(TRANSFORM(LEN(mcons_rec)-i,'999,999'))
NEXT
sr_getconnection():exec("COMMIT",,.F.)
atencao('Conversao do banco de dados realizada com sucesso....')
wvw_lclosewindow()
RETURN NIL
**************************** F I M ********************************
* LIMPEZA DO BANCO DE DADOS
***************************
FUNCTION limpeza_db
*******************
mensagem('Apagando a Tabela CAM_DBA...')
SR_DropTable('cam_dba')
mensagem('Apagando a Tabela COTRATO...')
SR_DropTable('contrato')
mensagem('Apagando a Tabela D1...')
SR_DropTable('d1')
mensagem('Apagando a Tabela FORMULA...')
SR_DropTable('formula')
mensagem('Apagando a Tabela ESTOQUE...')
SR_DropTable('estoque')
mensagem('Apagando a Tabela INSOPERA...')
SR_DropTable('insopera')
mensagem('Apagando a Tabela INVENTARIO...')
SR_DropTable('inventario')
mensagem('Apagando a Tabela LOGPRODUTO...')
SR_DropTable('logproduto')
mensagem('Apagando a Tabela MERC_DET...')
SR_DropTable('merc_det')
mensagem('Apagando a Tabela R1...')
SR_DropTable('r1')
mensagem('Apagando a Tabela R2...')
SR_DropTable('r2')
mensagem('Apagando a Tabela R3...')
SR_DropTable('r3')
mensagem('Apagando a Tabela R4...')
SR_DropTable('r4')
mensagem('Apagando a Tabela R5...')
SR_DropTable('r5')
mensagem('Apagando a Tabela R6...')
SR_DropTable('r6')
mensagem('Apagando a Tabela R7...')
SR_DropTable('r7')
mensagem('Apagando a Tabela SACASS...')
SR_DropTable('sacass')
mensagem('Apagando a Tabela SACBAL...')
SR_DropTable('sacbal')
mensagem('Apagando a Tabela SACBAN1...')
SR_DropTable('sacban1')
mensagem('Apagando a Tabela SACBAN2...')
SR_DropTable('sacban2')
mensagem('Apagando a Tabela SACBAN3...')
SR_DropTable('sacban3')
mensagem('Apagando a Tabela SACBAN4...')
SR_DropTable('sacban4')
mensagem('Apagando a Tabela SACBAN5...')
SR_DropTable('sacban5')
mensagem('Apagando a Tabela SACBAN6...')
SR_DropTable('sacban6')
mensagem('Apagando a Tabela SACBAN7...')
SR_DropTable('sacban7')
mensagem('Apagando a Tabela SACBAN8...')
SR_DropTable('sacban8')
mensagem('Apagando a Tabela SACBAN9...')
SR_DropTable('sacban9')
mensagem('Apagando a Tabela SACBAN10...')
SR_DropTable('sacban10')
mensagem('Apagando a Tabela SACBAN11...')
SR_DropTable('sacban11')
mensagem('Apagando a Tabela SACBAN12...')
SR_DropTable('sacban12')
mensagem('Apagando a Tabela SACBAN13...')
SR_DropTable('sacban13')
mensagem('Apagando a Tabela SACBAN14...')
SR_DropTable('sacban14')
mensagem('Apagando a Tabela SACBAN15...')
SR_DropTable('sacban15')
mensagem('Apagando a Tabela SACBANCO...')
SR_DropTable('sacbanco')
mensagem('Apagando a Tabela SACCAIXA...')
SR_DropTable('saccaixa')
mensagem('Apagando a Tabela SACCARTA...')
SR_DropTable('saccarta')
mensagem('Apagando a Tabela SACCHEQ...')
SR_DropTable('saccheq')
mensagem('Apagando a Tabela SACCLF...')
SR_DropTable('sacclf')
mensagem('Apagando a Tabela SACCLI...')
SR_DropTable('saccli')
mensagem('Apagando a Tabela SACCLIAUX...')
SR_DropTable('saccliaux')
mensagem('Apagando a Tabela SACCLIDEPE...')
SR_DropTable('sacclidepe')
//mensagem('Apagando a Tabela SACCLIMV...')
//SR_DropTable('sacclimv')
mensagem('Apagando a Tabela SACCLIPROCE...')
SR_DropTable('saccliproce')
mensagem('Apagando a Tabela SACCOMI...')
SR_DropTable('saccomi')
mensagem('Apagando a Tabela SACCRED...')
SR_DropTable('saccred')
mensagem('Apagando a Tabela SACCTVIS...')
SR_DropTable('sacctvis')
mensagem('Apagando a Tabela SACDESP...')
SR_DropTable('sacdesp')
mensagem('Apagando a Tabela SACDOLAR...')
SR_DropTable('sacdolar')
mensagem('Apagando a Tabela SACDUPP...')
SR_DropTable('sacdupp')
mensagem('Apagando a Tabela SACDUPR...')
SR_DropTable('sacdupr')
mensagem('Apagando a Tabela SACEMP...')
SR_DropTable('sacemp')
mensagem('Apagando a Tabela SACENTPROD...')
SR_DropTable('sacentprod')
mensagem('Apagando a Tabela SACESPE...')
SR_DropTable('sacespe')
mensagem('Apagando a Tabela SACFIN...')
SR_DropTable('sacfin')
mensagem('Apagando a Tabela SACFORN...')
SR_DropTable('sacforn')
mensagem('Apagando a Tabela SACGRUPO...')
SR_DropTable('sacgrupo')
mensagem('Apagando a Tabela SACHIST...')
SR_DropTable('sachist')
mensagem('Apagando a Tabela SACINVE...')
SR_DropTable('sacinve')
mensagem('Apagando a Tabela SACLOG...')
SR_DropTable('saclog')
mensagem('Apagando a Tabela SACMENSA...')
SR_DropTable('sacmensa')
mensagem('Apagando a Tabela SACMERC...')
SR_DropTable('sacmerc')
mensagem('Apagando a Tabela SACMOV...')
SR_DropTable('sacmov')
mensagem('Apagando a Tabela SACMOVB...')
SR_DropTable('sacmovb')
mensagem('Apagando a Tabela SACMOVCN...')
SR_DropTable('sacmovcn')
mensagem('Apagando a Tabela SACMOVNT...')
SR_DropTable('sacmovnt')
mensagem('Apagando a Tabela SACMOVSC...')
SR_DropTable('sacmovsc')
mensagem('Apagando a Tabela SACMOVTRA...')
SR_DropTable('sacmovtra')
mensagem('Apagando a Tabela SACNODEV...')
SR_DropTable('sacnodev')
mensagem('Apagando a Tabela SACNOORC...')
SR_DropTable('sacnoorc')
mensagem('Apagando a Tabela SACNOPED...')
SR_DropTable('sacnoped')
//mensagem('Apagando a Tabela SACNOPRO...')
//SR_DropTable('sacnopro')
mensagem('Apagando a Tabela SACNOPV...')
SR_DropTable('sacnopv')
mensagem('Apagando a Tabela SACNOROM...')
SR_DropTable('sacnorom')
mensagem('Apagando a Tabela SACNOTA...')
SR_DropTable('sacnota')
//mensagem('Apagando a Tabela SACNOTAB...')
//SR_DropTable('sacnotab')
mensagem('Apagando a Tabela SACNOTAE...')
SR_DropTable('sacnotae')
mensagem('Apagando a Tabela SACNOTP...')
SR_DropTable('sacnotp')
mensagem('Apagando a Tabela SACNO_BOLCX...')
SR_DropTable('sacno_bolcx')
mensagem('Apagando a Tabela SACNO_DUPR...')
SR_DropTable('sacno_dupr')
mensagem('Apagando a Tabela SACOBS...')
SR_DropTable('sacobs')
mensagem('Apagando a Tabela SACOCORR...')
SR_DropTable('sacocorr')
mensagem('Apagando a Tabela SACOP...')
SR_DropTable('sacop')
mensagem('Apagando a Tabela SACORCAM...')
SR_DropTable('sacorcam')
mensagem('Apagando a Tabela SACOSNO...')
SR_DropTable('sacosno')
mensagem('Apagando a Tabela SACOSPRO...')
SR_DropTable('sacospro')
mensagem('Apagando a Tabela SACOSS...')
SR_DropTable('sacoss')
mensagem('Apagando a Tabela SACPALM...')
SR_DropTable('sacpalm')
mensagem('Apagando a Tabela SACPALM1...')
SR_DropTable('sacpalm1')
mensagem('Apagando a Tabela SACPED_C...')
SR_DropTable('sacped_c')
mensagem('Apagando a Tabela SACPED_E...')
SR_DropTable('sacped_e')
mensagem('Apagando a Tabela SACPED_S...')
SR_DropTable('sacped_s')
mensagem('Apagando a Tabela SACPITE...')
SR_DropTable('sacpite')
mensagem('Apagando a Tabela SACPPED...')
SR_DropTable('sacpped')
mensagem('Apagando a Tabela SACPRESEN...')
SR_DropTable('sacpresen')
mensagem('Apagando a Tabela SACPRODU...')
SR_DropTable('sacprodu')
mensagem('Apagando a Tabela SACPROFI...')
SR_DropTable('sacprofi')
//mensagem('Apagando a Tabela SACPV...')
//SR_DropTable('sacpv')
mensagem('Apagando a Tabela SACREME...')
SR_DropTable('sacreme')
mensagem('Apagando a Tabela SACREPRO...')
SR_DropTable('sacrepro')
mensagem('Apagando a Tabela SACRL...')
SR_DropTable('sacrl')
mensagem('Apagando a Tabela SACROMA...')
SR_DropTable('sacroma')
mensagem('Apagando a Tabela SACSEF...')
SR_DropTable('sacsef')
mensagem('Apagando a Tabela SACSERIAL...')
SR_DropTable('sacserial')
mensagem('Apagando a Tabela SACSERIE...')
SR_DropTable('sacserie')
mensagem('Apagando a Tabela SACSINCL...')
SR_DropTable('sacsincl')
mensagem('Apagando a Tabela SACSOLPR...')
SR_DropTable('sacsolpr')
mensagem('Apagando a Tabela SACTABME...')
SR_DropTable('sactabme')
mensagem('Apagando a Tabela SACTABPG...')
SR_DropTable('sactabpg')
mensagem('Apagando a Tabela SACTBMER...')
SR_DropTable('sactbmer')
mensagem('Apagando a Tabela SACTOTNT...')
SR_DropTable('sactotnt')
mensagem('Apagando a Tabela SACTPED...')
SR_DropTable('sactped')
mensagem('Apagando a Tabela SACTRAN...')
SR_DropTable('sactran')
mensagem('Apagando a Tabela SACTRM...')
SR_DropTable('sactrm')
mensagem('Apagando a Tabela SACVISI...')
SR_DropTable('sacvisi')
mensagem('Apagando a Tabela TABLOIDE...')
SR_DropTable('tabloide')
mensagem('Apagando a Tabela TEXTO...')
SR_DropTable('texto')
sr_getconnection():exec("COMMIT",,.F.)
sacsql()
saccdx()
RETURN NIL

