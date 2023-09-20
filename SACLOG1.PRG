********************
* MENU DE RELATORIOS
********************
FUNCTION saclog1
***************
LOCAL MPRG:='SACLOG1',opcao

opcao = 0
op_tela(09,05,13,40,' Menu do Arquivo de LOG ')
WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ 1,0 PROMPT '  0 -> Consulta Arquivo LOG         '
        @ 2,0 PROMPT '  1 -> Relatorio Arquivo LOG        '
        @ 3,0 PROMPT '  2 -> Consulta de LOG do PRODUTO   '
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                *          CONSULTA DE LOG'S
                        cons_log()
                CASE opcao = 2
                *        RELATORIO DO ARQUIVO DE LOG'S
                        saclog2()
                CASE opcao = 3
                *       CONSULTA DE LOG DO PRODUTO
                        sacbal4()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************  F I M ***********************************
* FUNCAO P/CONSULTAR ARQUIVO DE LOG
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION cons_log(mop)
**********************
LOCAL mprg := 'CONS_LOG*',;
      lba,cba,oconsprod,ocolprod[20],i,nkey,opcao,mgeral,mdata_os,mdata,mcod_oper,mcod_aut,mdocumento,;
      mdescricao,mcod_prod,mmodulo

MEMVAR mdata_sis

IF ! ver_nivel(mprg,'CONSULTA DE ARQUIVO DE LOG','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 50
cba := 120
msele := SELE()
morde := INDEXORD()
*************
USE 'saclog' ALIAS 'log' EXCLUSIVE NEW VIA 'DBFCDX'
SELE('log')
BLOQREG()
ZAP
DBUNLOCK()
*************
op_tela(00,00,50,120," Consulta de ARQUIVO DE LOG'S ",,'*')
WHILE .T.
        limpa(0,0,50,120)
        mgeral := SPACE(30)
        mdata_os := mdata := CTOD('  /  /  ')
        mcod_oper:= mcod_aut := 0
        mdocumento := SPACE(12)
        mdescricao :=  SPACE(60)
        mcod_prod := SPACE(5)
        mmodulo := SPACE(20)
        DEVPOS(0,0);DEVOUT('Geral..........:')
        DEVPOS(1,0);DEVOUT('Data S.O.......:')
        DEVPOS(2,0);DEVOUT('Data...........:')
        DEVPOS(3,0);DEVOUT('Cod.Operador...:')
        DEVPOS(4,0);DEVOUT('Cod.Autorizador:')
        DEVPOS(5,0);DEVOUT('Cod.Produto....:')
        DEVPOS(6,0);DEVOUT('Documento......:')
        DEVPOS(7,0);DEVOUT('Descricao......:')
        DEVPOS(8,0);DEVOUT('Modulo.........:')
        @ 9,0 TO 9,120
        @ 0,17 GET mgeral PICT '@!'
        @ 1,17 GET mdata_os WHEN EMPTY(mgeral)
        @ 2,17 GET mdata WHEN EMPTY(mgeral)
        @ 3,17 GET mcod_oper PICT '999' WHEN EMPTY(mgeral)
        @ 4,17 GET mcod_aut PICT '999' WHEN EMPTY(mgeral)
        @ 5,17 GET mcod_prod PICT '99999' WHEN EMPTY(mgeral)
        @ 6,17 GET mdocumento PICT '@!' WHEN EMPTY(mgeral)
        @ 7,17 GET mdescricao PICT '@!' WHEN EMPTY(mgeral)
        @ 8,17 GET mmodulo PICT '@!' WHEN EMPTY(mgeral)
        READ
        IF LASTKEY() = 27
                fecha_tela()
                RETURN NIL
        ENDIF
        m_log:={}
        cComm  := "SELECT * FROM saclog WHERE data IS NOT NULL"
        IF ! EMPTY(mgeral)
                ccomm := ccomm + " AND (aut_oper LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR cod_oper LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR cod_vend LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR cod_aut LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR cod_forn LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR cod_prod LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR documento LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR modulo LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%');
                               + " OR descri LIKE "+sr_cdbvalue('%'+ALLTRIM(mgeral)+'%')+')'
        ELSEIF ! EMPTY(mdata_os)
                ccomm := ccomm + " AND data_sis = "+sr_cdbvalue(mdata_os)
        ELSEIF ! EMPTY(mdata)
                ccomm := ccomm + " AND data = "+sr_cdbvalue(mdata)
        ELSEIF ! EMPTY(mcod_oper)
                ccomm := ccomm + " AND cod_oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))
        ELSEIF ! EMPTY(mcod_aut)
                ccomm := ccomm + " AND cod_aut = "+sr_cdbvalue(STRZERO(mcod_aut,3))
        ELSEIF ! EMPTY(mcod_prod)
                ccomm := ccomm + " AND cod_prod = "+sr_cdbvalue(STRZERO(mcod_prod,5))
        ELSEIF ! EMPTY(mdocumento)
                ccomm := ccomm + " AND cod_oper = "+sr_cdbvalue(mdocumento)
        ELSEIF ! EMPTY(mdescricao)
                ccomm := ccomm + " AND descri = "+sr_cdbvalue(mdescricao)
        ENDIF
        ccomm := ccomm + " ORDER BY data,sr_recno"
        sr_getconnection():exec(ccomm,,.t.,@m_log)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_log) = 0
                atencao('Nao Foi encontrado nenhum resultado....')
                LOOP
        ENDIF
        **********
        SELE('log')
        BLOQREG()
        ZAP
        DBCOMMITALL()
        **********
        FOR i = 1 TO LEN(m_log)
                ADIREG()
                log->data_sis := m_log[i,1]
                log->data     := m_log[i,2]
                log->hora     := m_log[i,3]
                log->tipo     := m_log[i,4]
                log->aut_oper := m_log[i,5]
                log->cod_oper := m_log[i,6]
                log->cod_vend := m_log[i,7]
                log->cod_cli  := VAL(m_log[i,8])
                log->cod_forn := m_log[i,9]
                log->cod_prod := m_log[i,10]
                log->documento:= m_log[i,11]
                log->quantd1  := m_log[i,12]
                log->quantd2  := m_log[i,13]
                log->valor1   := m_log[i,14]
                log->valor2   := m_log[i,15]
                log->venc1    := m_log[i,16]
                log->venc2    := m_log[i,17]
                log->modulo   := m_log[i,18]
                log->descri   := m_log[i,19]
                log->cod_aut  := m_log[i,20]
                log->terminal := m_log[i,21]
        NEXT
        DBCOMMITALL()
        GO TOP
        setcor(10);oconsprod := TBROWSEDB(10,0,lba-1,cba)
        ocolprod[1] := TBCOLUMNNEW('Data',{||log->data})
        ocolprod[2] := TBCOLUMNNEW('Hora',{||log->hora})
        ocolprod[3] := TBCOLUMNNEW('Data S.O.',{||log->data_sis})
        ocolprod[4] := TBCOLUMNNEW('Oper.',{||log->cod_oper})
        ocolprod[5] := TBCOLUMNNEW('Aut.',{||log->aut_oper})
        ocolprod[6] := TBCOLUMNNEW('Tipo Oper.',{||log->tipo})
        ocolprod[7] := TBCOLUMNNEW('Documento',{||log->documento})
        ocolprod[8] := TBCOLUMNNEW('Descricao',{||log->descri})
        ocolprod[9] := TBCOLUMNNEW('Cod.Prod.',{||log->cod_prod})
        ocolprod[10] := TBCOLUMNNEW('Cli. ',{||log->cod_cli})
        ocolprod[11] := TBCOLUMNNEW('Forn.',{||log->cod_forn})
        ocolprod[12] := TBCOLUMNNEW('Vlr.Anterior',{||TRANSFORM(log->valor1,'999,999.99')})
        ocolprod[13] := TBCOLUMNNEW('Vlr.Posterior',{||TRANSFORM(log->valor2,'999,999.99')})
        ocolprod[14] := TBCOLUMNNEW('Qtd.Anterior',{||TRANSFORM(log->quantd1,'99,999.99')})
        ocolprod[15] := TBCOLUMNNEW('Qtd.Posterior',{||TRANSFORM(log->quantd2,'99,999.99')})
        ocolprod[16] := TBCOLUMNNEW('Venc.Ant.',{||DTOC(log->venc1)})
        ocolprod[17] := TBCOLUMNNEW('Venc.Post.',{||DTOC(log->venc2)})
        ocolprod[18] := TBCOLUMNNEW('Modulo',{||log->modulo})
        ocolprod[19] := TBCOLUMNNEW('Autorizacao',{||log->cod_aut})
        ocolprod[20] := TBCOLUMNNEW('Terminal',{||log->terminal})
        i:=0
        FOR i=1 TO LEN(ocolprod)
                oconsprod:ADDCOLUMN(ocolprod[i])
        NEXT
        oconsprod:HEADSEP := CHR(196)
        oconsprod:COLSEP := CHR(179)
        WHILE .T.
                /*
                IF mop = '*'
                        mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
                ELSE
                        mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
                ENDIF
                */
                nkey := 0
                WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                        oconsprod:FORCESTABLE()
                        nkey := INKEY(0)
                END
                IF nkey == K_ESC
                        CLEAR GETS
                        EXIT
                ELSEIF nkey == K_ENTER
                        CLEAR GETS
                        EXIT
                ELSE
                        IF genkey(oconsprod,nkey,)
                                setcor(10);oconsprod := TBROWSEDB(10,0,lba-1,cba)
                                ocolprod[1] := TBCOLUMNNEW('Data',{||log->data})
                                ocolprod[2] := TBCOLUMNNEW('Hora',{||log->hora})
                                ocolprod[3] := TBCOLUMNNEW('Data S.O.',{||log->data_sis})
                                ocolprod[4] := TBCOLUMNNEW('Oper.',{||log->cod_oper})
                                ocolprod[5] := TBCOLUMNNEW('Aut.',{||log->aut_oper})
                                ocolprod[6] := TBCOLUMNNEW('Tipo Oper.',{||log->tipo})
                                ocolprod[7] := TBCOLUMNNEW('Documento',{||log->documento})
                                ocolprod[8] := TBCOLUMNNEW('Descricao',{||log->descri})
                                ocolprod[9] := TBCOLUMNNEW('Cod.Prod.',{||log->cod_prod})
                                ocolprod[10] := TBCOLUMNNEW('Cli. ',{||log->cod_cli})
                                ocolprod[11] := TBCOLUMNNEW('Forn.',{||log->cod_forn})
                                ocolprod[12] := TBCOLUMNNEW('Vlr.Anterior',{||TRANSFORM(log->valor1,'999,999.99')})
                                ocolprod[13] := TBCOLUMNNEW('Vlr.Posterior',{||TRANSFORM(log->valor2,'999,999.99')})
                                ocolprod[14] := TBCOLUMNNEW('Qtd.Anterior',{||TRANSFORM(log->quantd1,'99,999.99')})
                                ocolprod[15] := TBCOLUMNNEW('Qtd.Posterior',{||TRANSFORM(log->quantd2,'99,999.99')})
                                ocolprod[16] := TBCOLUMNNEW('Venc.Ant.',{||DTOC(log->venc1)})
                                ocolprod[17] := TBCOLUMNNEW('Venc.Post.',{||DTOC(log->venc2)})
                                ocolprod[18] := TBCOLUMNNEW('Modulo',{||log->modulo})
                                ocolprod[19] := TBCOLUMNNEW('Autorizacao',{||log->cod_aut})
                                ocolprod[20] := TBCOLUMNNEW('Terminal',{||log->terminal})
                                i:=0
                                FOR i=1 TO LEN(ocolprod)
                                        oconsprod:ADDCOLUMN(ocolprod[i])
                                NEXT
                                oconsprod:HEADSEP := CHR(196)
                                oconsprod:COLSEP := CHR(179)
                                oconsprod:FORCESTABLE()
                        ENDIF
                ENDIF
        ENDDO
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
CLEAR GETS
RETURN NIL

