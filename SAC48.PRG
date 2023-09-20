***********************************
* CONSULTA DO SALDO GERAL DE ICM'S
***********************************
MEMVAR nivel_acess

FUNCTION sac48
**************
LOCAL MPRG:='SAC48'
LOCAL lci,cci,lba,cba,mtotal_icm,tela

IF ! ver_nivel(mprg,'CONSULTA DO SALDO GERAL DE ICMS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := 17
cci := 20
lba := 20
cba := 56

tela := SAVESCREEN(01,00,24,79)
*-----------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacicm','icm');RETURN NIL;ENDIF
*SET INDEX TO sacicm
*----------------------------------------------

WHILE .T.
        mtotal_icm := 0
        ********************
        SELE('icm')
        GO TOP
        ********************
        botao(lci,cci,lba,cba,," Saldo de ICM'S ")
        DEVPOS(lci+1,cci+2);DEVOUT("Saldo de ICM'S R$:")
        DEVPOS(lci+2,cci+2);DEVOUT("Saldo de IPI   R$:")
        mensagem('Aguarde um momento... fazendo os calculos')
        setcor(3)
        DEVPOS(lci+1,cci+21);DEVOUTPICT(icm->deb_cred,'999,999,999.99')
        GO 2
        DEVPOS(lci+2,cci+21);DEVOUTPICT(icm->deb_cred,'999,999,999.99')
        setcor(1)
        mensagem('Pressione qualquer tecla p/Sair')
        INKEY(0)
        RESTSCREEN(01,00,24,79,tela)
        CLOSE ALL
        RETURN NIL
ENDDO
RETURN NIL
