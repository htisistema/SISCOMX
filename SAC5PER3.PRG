*************************
* LISTAGEM DE COMISSAO DE OPERADOR
*************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION sac5per3
***************
LOCAL MPRG:='SAC5PER3',;
      opcao,lci,cci,lba,cba,;
      i:=0,m_dados:={}

PRIVATE mdoc,mtraco,mcod_vend,mdata1,mnome_ven
        
IF ! ver_nivel(mprg,'ESTORNO DE COMISSAO PAGAS (CLIENTE EM DIA)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci:=cci:=0
lba:=03
cba:=72

mtraco := REPLI('=',132)
*-----------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Comissao por Vendedor/Operador ')

WHILE .T.
        exibi_prg(mprg)
        mdata1 = mdata_sis
        mcod_vend = 0
        opcao = SPACE(1)
        ASIZE(m_dados,0)
        mensagem('Digite o Codigo do Operador a ser Estornado  - <ESC> p/Sair')
        ***********
        SELE('sen');ORDSETFOCUS(2)
        ***********
        GO TOP

        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Oper./Vendedor........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Pagamento da Comissao:')
        @ lci+1,cci+30 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,lci+1,cci+34))
        @ lci+2,cci+30 GET mdata1 PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                EXIT
        ENDIF
        ****************
        SELE('dupr');ORDSETFOCUS(15)
        GO TOP
        ***************
        IF ! dupr->(DBSEEK(DTOS(mdata1)+STRZERO(mcod_vend,3)))
                atencao('Nao existe Comissao Baixada neste DATA')
                LOOP
        ENDIF
        opcao := op_simnao('N','Confirma o Estorno:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        mensagem('Coletando dados Aguarde....')
        WHILE dupr->pg_comi = mdata1 .AND. STRZERO(mcod_vend,3) = dupr->vendedor .AND. ! EOF()
                prog_imp(RECNO(),DTOC(dupr->pg_comi))
                AADD(m_dados,RECNO())
                SKIP
        ENDDO
        mensagem('Estornando as Comissoes, Aguarde ....')
        i := 0
        FOR i = 1 TO LEN(m_dados)
                GO m_dados[i]
                BLOQREG()
                dupr->pg_comi := CTOD('  /  /  ')
                dupr->ope_pgcom := SPACE(3)
                DBUNLOCK()
        NEXT
        DBCOMMITALL()
        atencao('Estorno foi realizado com sucesso')
ENDDO
wvw_lclosewindow()
RETURN NIL
**********************************  F I M **********************************

