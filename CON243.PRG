*** CON243.PRG: Exclusao de Duplicatas (Receber)
***
************************************************
MEMVAR getlist,nivel_acess,cod_operado,lci,cci,lba,cba

FUNCTION con243(mtp_)
****************
LOCAL MPRG:='CON243'
LOCAL tela,mduplicata,lcod,last,mtipo,mpoint,mnum_banco

PRIVATE mfornec,malias,;
        lci := 00,cci := 00,lba := 15,cba := 79

*------------------------------------------------------------------------------------
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccred','cred');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sactipdc','tipdc');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
IF mtp_ = NIL
        IF ! ver_nivel(mprg,'CONTA A RECEBER (EXCLUSAO DE DUPLICATAS)','1',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(00,00,24,79,' EXCLUSAO Documentos A RECEBER ','*')
        malias := 'dupr'
ELSE
        IF ! ver_nivel(mprg+mtp_,'CREDITO CLIENTE (EXCLUSAO DE DUPLICATAS)','1',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        malias := 'cred'
        op_tela(00,00,24,79,' EXCLUSAO CREDITO DE CLIENTES ','*')
ENDIF

****************
SELE(malias);ORDSETFOCUS(1)
****************
WHILE .T.
        exibi_prg(mprg)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Empresa............:')
        DEVPOS(lci+2,cci+2);DEVOUT('Tipo Documentos........:')
        DEVPOS(lci+3,cci+2);DEVOUT('No.Banco/Cod.Cartao....:')
        DEVPOS(lci+3,cci+32);DEVOUT('Agencia:')
        DEVPOS(lci+3,cci+51);DEVOUT('C/C:')
        DEVPOS(lci+4,cci+2);DEVOUT('Numero Documentos......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo do Cliente......:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data de Emissao........:')
        DEVPOS(lci+7,cci+2);DEVOUT('Data de Vencimento.....:')
        DEVPOS(lci+8,cci+2);DEVOUT('Valor Documento R$.....:')
        DEVPOS(lci+9,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
        DEVPOS(lci+10,cci+2);DEVOUT('Codigo do Vendedor.....:')
        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Pedido/NF....:')
        DEVPOS(lci+12,cci+2);DEVOUT('% de Comissao .........:')
        DEVPOS(lci+13,cci+2);DEVOUT('Nome do Correntista....:')
        DEVPOS(lci+14,cci+2);DEVOUT('OBS.:')

        mtipo := SPACE(2)
        mduplicata := SPACE(12)
        mfornec = SPACE(4)
        mnum_banco := 0
        mensagem('Digite o Numero do Documento. [ESC] Abandona.')
*       @ lci+2,cci+27 GET mtipo PICT '@!' VALID mtipo $ 'CH,DU,CT,FI,RE'
        @ lci+2,cci+27 GET mtipo PICT '@!' VALID ver_tipdc(mtipo,'*')
        @ lci+3,cci+27 GET mnum_banco PICT '999' VALID lim_get() WHEN mtipo <> 'DU' .AND. men_get(lci+4,cci+25,'Informe o No.do banco')
        @ lci+4,cci+27 GET mduplicata PICT '@!'
        READ
        IF LASTKEY()=27 .OR. mduplicata = SPACE(12) .OR. EMPTY(mtipo)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mnum_banco = 0
                SEEK mtipo+SPACE(3)+mduplicata
        ELSE
                SEEK mtipo+STRZERO(mnum_banco,3)+mduplicata
        ENDIF
        IF ! FOUND()
                atencao('Esta Documento nao existe!')
                LOOP
        ENDIF
        IF (malias)->pago="B"
                atencao('Esta Documento foi Liquidada!')
                LOOP
        ENDIF

        setcor(1)
        mfornec := (malias)->fornec
        @ lci+5,cci+27 GET mfornec PICT "99999" VALID mcli(mfornec,lci+5,cci+27) .AND. lim_get() WHEN men_get(lci+6,cci+31,'Informe o Cod. do Cliente ou <F7>p/pesquisas de clientes')
        READ
        IF mnum_banco = 0
                SEEK mtipo+SPACE(3)+mduplicata+' '+STRZERO(mfornec,5)
        ELSE
                SEEK mtipo+STRZERO(mnum_banco,3)+mduplicata+' '+STRZERO(mfornec,5)
        ENDIF
        IF ! FOUND()
                atencao('Este Documentos nao existe em nossos arquivos')
                LOOP
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
        mpoint := RECNO()
        @ lci+6,cci+27 SAY DTOC((malias)->emissao)
        @ lci+7,cci+27 SAY DTOC((malias)->venc)
        @ lci+8,cci+27 SAY TRANSFORM((malias)->valor,"@E 99,999,999,999.99")
        @ lci+9,cci+27 SAY SUBSTR((malias)->banco,1,1)
        @ lci+10,cci+27 SAY (malias)->vendedor
        ven(VAL((malias)->vendedor),lci+10,cci+31)
        @ lci+11,cci+27 SAY (malias)->num_ped
        ****************
        SELE(malias);ORDSETFOCUS(1)
        ****************
        GO mpoint
        lcod=(malias)->fornec
        last=(malias)->valor
        opcao := op_simnao('N','Confirma Exclusao ? [s/N]:')
        IF opcao = 'S'
                (malias)-> operador := cod_operado
                DELE
                COMMIT
                UNLOCK
                IF malias = 'dupr'
                        sr_getconnection():exec("DELETE FROM sacdupr WHERE SR_DELETED = 'T'",,.f.)
                ELSE
                        sr_getconnection():exec("DELETE FROM saccred WHERE SR_DELETED = 'T'",,.f.)
                ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                ******************
                SELE(malias);ORDSETFOCUS(1)
                ******************
                UNLOCK
        ELSE
                COMMIT
                UNLOCK
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

