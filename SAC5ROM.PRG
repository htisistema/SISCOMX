***********************************
* MENU DE ROMANEIOS DE CARGAS
***********************************

FUNCTION sac5rom(mtip)
****************
LOCAL MPRG:='SAC5ROM'

LOCAL opcao,lci,cci,lba,cba,tela,mnum,mali

lci := 00
cci := 00
lba := 05
cba := 27
IF mtip = NIL
        mnum := 'norom'
        mali := 'roma'
ELSE
        mnum := 'nopro'
        mali := 'produ'
ENDIF
op_tela(lci,cci,lba,cba,' ROMANEIOS '+IF(mnum = 'norom','DE CARGAS ','DE PRODUCAO '))

WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT   ' 0-> Emissao de Romaneios '
        @ lci+1,cci PROMPT ' 1-> 2a. Via de Romaneios '
        @ lci+2,cci PROMPT ' 2-> Alteracao Romaneios  '
        @ lci+3,cci PROMPT ' 3-> Cancelar Romaneio    '
        @ lci+4,cci PROMPT ' 4-> Agrupamento Romaneio '
        @ lci+5,cci PROMPT ' 5-> Relatorio Romaneio   '
        @ lci+6,cci PROMPT ' 5-> Romaneio/PROMOTOR    '
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        sac5ped4(mali,mnum)      // EMISSAO DE ROMANEIOS
                CASE opcao = 2
                        sac5rom2(mali,mnum)      // 2a. VIA DO ROMANEIO
                CASE opcao = 3
                        sac5rom1(mali,mnum)      // ALTERACAO DE PEDIDO NO ROMANEIO
                CASE opcao = 4
                        sac5rom3(mali,mnum)      // CANCELAMENTO DE ROMANEIO
                CASE opcao = 5
                        sac5rom4(mali,mnum)      // AGRUPAMENTO DE ROMANEIO
                CASE opcao = 6
                        sac5rom5(mali,mnum)      // AGRUPAMENTO DE ROMANEIO
                CASE opcao = 7
                        sac5rom6()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************

