*******************************
* INCLUSAO DE FUNDO DE CAIXA
*******************************
MEMVAR getlist,mdata_sis,nivel_acess,cod_operado
FUNCTION sac36
***************
LOCAL MPRG:='SAC36'
LOCAL opcao,tela,lci,cci,lba,cba,i,mdata,mvalor,mtraco,mcom_sem:=SPACE(1)

IF ! ver_nivel(mprg,'INCLUSAO FUNDO DE CAIXA','13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

CLEAR GETS

lci := cci := 0
lba = 03
cba = 51
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*--------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Fundo de Caixa ')
WHILE .T.
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdata := mdata_sis
        mvalor := 0
        opcao = 'S'
        DEVPOS(lci+1,cci+1);DEVOUT('Data.......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Valor R$...:')

        @ lci+1,cci+15 GET mdata
        @ lci+2,cci+15 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        IF m_set[1,155] = 'S'
                mcom_sem := mensagem1('Tipo de Recebimento Diversos:',' ','X, ')
        ENDIF
        opcao := op_simnao('S','Confirma o Valor Fundo de Caixa [S/n]:')
        IF opcao = 'N' 
                LOOP
        ENDIF

        ********************
        SELE('caix');ORDSETFOCUS(1)
        ********************

        IF ADIREG()
                caix-> empresa := mcodempresa
                caix-> tipo := 'FD'
                caix-> nota := '  F.CAIX'
                caix-> data := mdata
                caix-> venci := mdata
                caix-> documento := '9999999999'
                caix-> valor := mvalor
                caix-> descri1 := 'Fundo de Caixa: '+DTOC(mdata)+' - Hrs:'+TIME()
                caix-> cod_opera := cod_operado
                caix-> hora      := TIME()
                caix-> c_s   := mcom_sem
                DBCOMMIT()
                DBUNLOCK()
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

