********************
* MENU DE RELATORIOS
********************

FUNCTION sac621
***************
LOCAL MPRG:='SAC621'

LOCAL mopcao,opcao,mopcao1,lci,cci,lba,cba,tela,tela1

lci = 08
cci = 05
lba = 12
cba = 35
tela = SAVESCREEN(01,00,24,79)
opcao = 0
mtraco := REPLI('=',80)
WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        botao(lci,cci,lba,cba,,' Menu do Controle Visita ')
        setcor(10)
        @ lci+1,cci+1 PROMPT ' 0 -> Movimentacao           ' MESSAGE '** Inclusao, Alteracao de Visitas  - <ESC> Retornar **'
        @ lci+2,cci+1 PROMPT ' 1 -> Relatorios de Visitas  ' MESSAGE '** Relatorios de Visitas - <ESC> Retornar **'
        @ lci+3,cci+1 PROMPT ' 2 -> Consulta de Visitas    ' MESSAGE '** Consulta de Visitas - <ESC> Retornar **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          MOVIMENTACAO DE VISITAS
                        sac6211()
                CASE opcao = 2
                *          RELATORIOS DE VISITAS
                        sac6212()
                CASE opcao = 3
                *          CONSULTA DE VISITAS
                        cons_visi()
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************
*********************** F I M ************************************************
********************************
* FUNCAO P/CONSULTAR VISITAS
********************************

FUNCTION cons_visi()
*****************

LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men

LOCAL oconsprod,ocolprod[12],i,nkey,opcao
MEMVAR mcodconta
lci := 02
cci := 01
lba := 25-3
cba := 78

tela := SAVESCREEN(01,00,24,79)

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacctvis','ctvis');RETURN NIL;ENDIF
*************
SELE('ctvis');ORDSETFOCUS(1)
*************
men := SAVESCREEN(24,00,24,79)

botao(lci-1,cci-1,lba,cba+1,,' Consulta de Visitas ')
setcor(10);oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Data',{||ctvis->data_visi})
ocolprod[2] := TBCOLUMNNEW('Tecnico',{||ctvis->cod_tec})
ocolprod[3] := TBCOLUMNNEW('Cliente',{||ctvis->cod_cli+'-'+ctvis->cliente})
ocolprod[4] := TBCOLUMNNEW('Hora Inicial',{||ctvis->hora_ini})
ocolprod[5] := TBCOLUMNNEW('Hora Final',{||ctvis->hora_fim})
ocolprod[6] := TBCOLUMNNEW('Operador',{||ctvis->cod_oper})
ocolprod[7] := TBCOLUMNNEW('OBS.:',{||ctvis->obs1})
ocolprod[8] := TBCOLUMNNEW('OBS.:',{||ctvis->obs2})
ocolprod[9] := TBCOLUMNNEW('OBS.:',{||ctvis->obs3})
ocolprod[10] := TBCOLUMNNEW('OBS.:',{||ctvis->obs4})
ocolprod[11] := TBCOLUMNNEW('OBS.:',{||ctvis->obs5})
ocolprod[12] := TBCOLUMNNEW('Inclusao:',{||ctvis->data_proc})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<> <D>ata Visita <C>od.Operador <ENTER> Conf. <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == 27
                EXIT
        ELSEIF nkey == 13
                EXIT
        ELSEIF nkey = 68 .OR. nkey = 100
                ORDSETFOCUS(1)
                GO TOP
                setcor(10);oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                ocolprod[1] := TBCOLUMNNEW('Data',{||ctvis->data_visi})
                ocolprod[2] := TBCOLUMNNEW('Tecnico',{||ctvis->cod_tec})
                ocolprod[3] := TBCOLUMNNEW('Cliente',{||ctvis->cod_cli+'-'+ctvis->cliente})
                ocolprod[4] := TBCOLUMNNEW('Hora Inicial',{||ctvis->hora_ini})
                ocolprod[5] := TBCOLUMNNEW('Hora Final',{||ctvis->hora_fim})
                ocolprod[6] := TBCOLUMNNEW('Operador',{||ctvis->cod_oper})
                ocolprod[7] := TBCOLUMNNEW('OBS.:',{||ctvis->obs1})
                ocolprod[8] := TBCOLUMNNEW('OBS.:',{||ctvis->obs2})
                ocolprod[9] := TBCOLUMNNEW('OBS.:',{||ctvis->obs3})
                ocolprod[10] := TBCOLUMNNEW('OBS.:',{||ctvis->obs4})
                ocolprod[11] := TBCOLUMNNEW('OBS.:',{||ctvis->obs5})
                ocolprod[12] := TBCOLUMNNEW('Inclusao:',{||ctvis->data_proc})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSEIF nkey = 67 .OR. nkey = 99
                ORDSETFOCUS(2)
                GO TOP
                setcor(10);oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                ocolprod[1] := TBCOLUMNNEW('Data',{||ctvis->data_visi})
                ocolprod[2] := TBCOLUMNNEW('Tecnico',{||ctvis->cod_tec})
                ocolprod[3] := TBCOLUMNNEW('Cliente',{||ctvis->cod_cli+'-'+ctvis->cliente})
                ocolprod[4] := TBCOLUMNNEW('Hora Inicial',{||ctvis->hora_ini})
                ocolprod[5] := TBCOLUMNNEW('Hora Final',{||ctvis->hora_fim})
                ocolprod[6] := TBCOLUMNNEW('Operador',{||ctvis->cod_oper})
                ocolprod[7] := TBCOLUMNNEW('OBS.:',{||ctvis->obs1})
                ocolprod[8] := TBCOLUMNNEW('OBS.:',{||ctvis->obs2})
                ocolprod[9] := TBCOLUMNNEW('OBS.:',{||ctvis->obs3})
                ocolprod[10] := TBCOLUMNNEW('OBS.:',{||ctvis->obs4})
                ocolprod[11] := TBCOLUMNNEW('OBS.:',{||ctvis->obs5})
                ocolprod[12] := TBCOLUMNNEW('Inclusao:',{||ctvis->data_proc})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,nkey,'ctvis')
                        setcor(10);oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Data',{||ctvis->data_visi})
                        ocolprod[2] := TBCOLUMNNEW('Tecnico',{||ctvis->cod_tec})
                        ocolprod[3] := TBCOLUMNNEW('Cliente',{||ctvis->cod_cli+'-'+ctvis->cliente})
                        ocolprod[4] := TBCOLUMNNEW('Hora Inicial',{||ctvis->hora_ini})
                        ocolprod[5] := TBCOLUMNNEW('Hora Final',{||ctvis->hora_fim})
                        ocolprod[6] := TBCOLUMNNEW('Operador',{||ctvis->cod_oper})
                        ocolprod[7] := TBCOLUMNNEW('OBS.:',{||ctvis->obs1})
                        ocolprod[8] := TBCOLUMNNEW('OBS.:',{||ctvis->obs2})
                        ocolprod[9] := TBCOLUMNNEW('OBS.:',{||ctvis->obs3})
                        ocolprod[10] := TBCOLUMNNEW('OBS.:',{||ctvis->obs4})
                        ocolprod[11] := TBCOLUMNNEW('OBS.:',{||ctvis->obs5})
                        ocolprod[12] := TBCOLUMNNEW('Inclusao:',{||ctvis->data_proc})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RESTSCREEN(24,00,24,79,men)
RESTSCREEN(01,00,24,79,tela)
IF nkey == 27
        CLEAR GETS
        RETURN NIL
ELSE
        CLEAR GETS
        RETURN NIL
ENDIF
RETURN NIL
******************************* f i m *********************************************
