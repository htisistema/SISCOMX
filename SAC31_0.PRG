*******************************
* PAGAMENTO DE VALES
*******************************
MEMVAR getlist,nivel_acess,cod_operado,mdata_sis

FUNCTION sac31_0
***************
LOCAL MPRG:='SAC31_0'
LOCAL opcao,tela,lci,cci,lba,cba,mdescri1,mdata,mtraco,mvalor

IF ! ver_nivel(mprg,'PAGAMENTO DE VALES','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

CLEAR GETS

lci = 0
cci = 0
lba = 5
cba = 58
mtraco := REPLI('=',80)
*------------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Pagamento de Vales ')
WHILE .T.
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdescri1 := SPACE(40)
        opcao = 'S'
        DEVPOS(lci+1,cci+2);DEVOUT('Nome.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor R$...:')

        @ lci+1,cci+15 GET mdescri1 PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        *******************
        SELE('caix');ORDSETFOCUS(4)
        GO TOP
        *******************

        IF ! caix->(DBSEEK(RTRIM('Vale: '+mdescri1)))
*        IF ! FOUND()
                atencao('Nao existe nenhum Vale com estas caracteristicas !!!')
                LOOP
        ENDIF
        mensagem('Consultar <> Reg.Ant. <> Prox.Reg. <ENTER> Confirma  <ESC> Retorna')
        WHILE ! EOF()
                DEVPOS(lci+1,cci+15);DEVOUT(SUBSTR(caix->descri1,07))
                DEVPOS(lci+2,cci+15);DEVOUT(caix->data)
                DEVPOS(lci+3,cci+15);DEVOUTPICT(caix->valor,'99,999,999.99')
                INKEY(0)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF LASTKEY() = 5
                        SKIP
                        WHILE caix->pg = '*' .AND. ! EOF()
                                SKIP
                        ENDDO
                        IF EOF()
                                atencao('Fim de Arquivo !!!')
                                SKIP -1
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 24
                        SKIP -1
                        WHILE caix->pg = '*' .AND. ! BOF()
                                SKIP
                        ENDDO
                        IF BOF()
                                atencao('Inicio de Arquivo !!!')
                                SKIP
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 13
                        EXIT
                ENDIF
        ENDDO
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mdata := caix->data
        mdescri1 := caix->descri1
        mvalor := caix->valor
        IF ! BLOQREG()
                atencao('Nao foi possivel bloquear o registro !!!')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma o Pagamento do Vale [S/n]:')
        IF opcao = 'N'
                UNLOCK
                LOOP
        ELSE
                IF ! ADIREG()
                        LOOP
                ENDIF
                caix-> empresa := mcodempresa
                caix-> tipo := 'VL'
                caix-> data := mdata_sis
                caix-> documento := '9999999999'
                caix-> venci := mdata_sis
                caix-> descri1 := mdescri1
                caix-> descri2 := '** PG **'
                caix-> valor := mvalor
                caix-> cod_opera := cod_operado
                caix-> pg := '*'
                caix-> hora := TIME()
                COMMIT
                UNLOCK
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ************************

