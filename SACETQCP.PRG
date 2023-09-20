**************************************
* EMISSAO DE ETIQUETAS - CLIENTES-PEDIDO
**************************************
MEMVAR getlist

FUNCTION sacetqcp()
*****************
LOCAL mprg:='SACETQCP',;
      tela,opcao,lc,cc,lb,cb,mcontador,mqtd_etq,i,;
      mespaco,mlinhas,mfila,mquantd:=1

PRIVATE mcliente,mcgc,mcpf,mcod_cli,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        mnum_ped:=0,mtransp,mvolume:=0,ali:='ped_s',mcod:=' ',cons_cli := {}

lc := 03
cc := 04
lb := 21
cb := 76
*************
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('SACCEP','CEP');RETURN NIL;ENDIF
//
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
set_key('cliente')
SELE('cli');ORDSETFOCUS(2)
GO TOP
*************

tela := SAVESCREEN(01,00,24,79)
WHILE .T.
        exibi_prg(mprg)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := cfg->imp_rel
****************************************************
        mtransp := SPACE(35)
        mnum_ped:=mvolume:=mcod_cli := 0
        mlinhas  := 2
        mcontador := 0
        mqtd_etq := 20
        mquantd  := 1
        mcod     := 'S'
        botao(lc,cc,lb,cb,," Opcoes para ETIQUETAS DE CLIENTES ")
        setcor(1)
        DEVPOS(lc+1,cc+1);DEVOUT('Numero Pedido.:')
        DEVPOS(lc+2,cc+1);DEVOUT('Codigo Cliente:')
        DEVPOS(lc+3,cc+1);DEVOUT('Cidade e UF...:')
        DEVPOS(lc+4,cc+1);DEVOUT('Transportadora:')
        DEVPOS(lc+5,cc+1);DEVOUT('Volumes.......:')
        @ lc+6,cc+1 TO lc+6,cb-1
        DEVPOS(lc+7,cc+1);DEVOUT('Quantidade Linhas entre ETIQUETAS..:')
        DEVPOS(lc+8,cc+1);DEVOUT('Quantidade de Etiquetas p/paginas..:')
        DEVPOS(lc+9,cc+1);DEVOUT('Deseja Imprimir o Codigo [S/n].....:')
        DEVPOS(lc+10,cc+1);DEVOUT('Quantidade de Etiquetas............:')
        Mensagem('Digite a Codigo do Cliente - [ESC] p/ Sair')
        @ lc+1,cc+17  GET mnum_ped PICT '999999'
        READ
        IF LASTKEY()=27
               RESTSCREEN(01,00,24,79,tela)
               CLOSE ALL
               RETURN NIL
        ENDIF
        ******************
        SELE('ped_s');ORDSETFOCUS(1)
        GO TOP
        ******************
        IF ! (ali)->(DBSEEK(STRZERO(mnum_ped,6)))
                atencao('Nao foi possivel encontrar o Pedido')
        ELSE
                mcod_cli := VAL((ali)->pcod_cli)
                WHILE ! EOF() .AND. STRZERO(mnum_ped,6) = (ali)->pnum_ped
                        IF (! EMPTY((ali)->ppacote) .OR. ! EMPTY((ali)->ppecas))
                                mvolume := mvolume + (ali)->ppacote
                                IF ! EMPTY((ali)->ppecas)
                                        mvolume := mvolume + 1
                                ENDIF
                        ELSE
                                mvolume := mvolume + (ali)->pquantd
                        ENDIF
                        SKIP
                ENDDO
        ENDIF
        @ lc+2,cc+17 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lc+2,cc+24)
        READ
        IF LASTKEY()=27
                LOOP
        ENDIF
        SETCOR(3)
        mfila := 1
        DEVPOS(lc+2,cc+17);DEVOUT(cli->nome)
        DEVPOS(lc+3,cc+17);DEVOUT(cli->cidade+' - '+cli->uf)
        SETCOR(1)
        @ lc+4,cc+17 GET mtransp
        @ lc+5,cc+17 GET mvolume PICT '999,999.999'
        @ lc+7,cc+39 GET mlinhas  PICT '9'
        @ lc+8,cc+39 GET mqtd_etq PICT '99'
        @ lc+9,cc+39 GET mcod    PICT '@!'  VALID mcod $ 'S,N'
        @ lc+10,cc+39 GET mquantd PICT '99'
        READ
        IF LASTKEY()=27
                RESTSCREEN(01,00,24,79,tela)
                EXIT
        ENDIF
        IF ! imp_arq('ETQ_CLI.REL','R')
                LOOP
        ENDIF
        mcontador := i := 0
        FOR i = 1 TO mquantd
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(cli->razao)
                IF mcod = 'S'
                        DEVPOS(PROW(),PCOL());DEVOUT(' ('+STR(cli->cod_cli,5)+')')
                ELSE
                        DEVPOS(PROW(),PCOL());DEVOUT('        ')
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(RTRIM(cli->cidade)+' - '+cli->uf)
                DEVPOS(PROW()+1,00);DEVOUT('No. Pedido:'+STRZERO(mnum_ped,6))
                DEVPOS(PROW()+1,00);DEVOUT('Transport.:'+mtransp)
                DEVPOS(PROW()+1,00);DEVOUT('Volumes...:'+TRANSFORM(mvolume,'999,999.999'))
                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETQ_CLI.REL')
ENDDO
RETURN NIL
***************************** F I M *******************************************
