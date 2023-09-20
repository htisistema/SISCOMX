* FUNCAO P/CONSULTAR ALBUM DE CLIENTE
********************************************************
FUNCTION smedalbum(mletra,mcodfoto,mnomefoto,mcam,mcam1)
********************************************************
LOCAL alb_lba,alb_cba,alb_msele,alb_morde,alb_men,;
      ocprod,colprod[1],alb_i,alb_nkey,alb_opcao,mcodcli,mponto,stop:=' ' 

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
***** VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := m_indiv[1,18]
****************************************************
alb_lba := 22
alb_cba := 15

alb_msele := SELE()
alb_morde := INDEXORD()
USE 'menufoto' ALIAS 'smenu' EXCLUSIVE NEW VIA 'DBFCDX'
*************
SELE('smenu')
BLOQREG()
ZAP
DBUNLOCK()
*************
m_aux1 := DIRECTORY(ALLTRIM(mcam)+mletra+mcodfoto+'*.jpg','D')
m_aux2 := DIRECTORY(ALLTRIM(mcam)+mletra+mcodfoto+'*.bmp','D')
IF LEN(m_aux1)+LEN(m_aux2) = 0 
	m_aux1 := DIRECTORY(ALLTRIM(mcam1)+mletra+mcodfoto+'*.jpg','D')
	m_aux2 := DIRECTORY(ALLTRIM(mcam1)+mletra+mcodfoto+'*.bmp','D')
	i := 0
	FOR i = 1 TO LEN(m_aux1)
	        ADIREG()
	        smenu->smenu := mcam1+m_aux1[i,1]
	        smenu->snome := m_aux1[i,1]
	NEXT
	i := 0
	FOR i = 1 TO LEN(m_aux2)
	        ADIREG()
	        smenu->smenu := mcam1+m_aux1[i,2]
	        smenu->snome := m_aux1[i,2]
	NEXT
ELSE
	i := 0
	FOR i = 1 TO LEN(m_aux1)
	        ADIREG()
	        smenu->smenu := mcam+m_aux1[i,1]
	        smenu->snome := m_aux1[i,1]
	NEXT
	i := 0
	FOR i = 1 TO LEN(m_aux2)
	        ADIREG()
	        smenu->smenu := mcam+m_aux1[i,2]
	        smenu->snome := m_aux1[i,2]
	NEXT
ENDIF
//atencao(m_aux1)
DBCOMMIT()
DBUNLOCK()
********************
SELE('smenu');GO TOP
********************
IF LASTREC() = 0
        atencao('Nao foi encontrado nenhum arquivo de fotos neste Caminho: '+mcam+mletra+mcodfoto+'*.jpg')
ENDIF
WVW_SetMousePos(,01,01)
IF mletra = 'C'
        op_tela(0,0,50,120,'ALBUM DO CLIENTE: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,,'*')
ELSEIF mletra = 'P'
        op_tela(0,0,50,120,'ALBUM DO PRODUTOS: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,,'*')
ELSEIF mletra = 'R'
        op_tela(0,0,50,120,'ALBUM DA RACA: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,,'*')
ELSEIF mletra = 'A'
        op_tela(0,0,50,120,'ALBUM DOS ANIMAIS: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,,'*')
ELSE
        op_tela(0,0,50,120,'ALBUM: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,,'*')
ENDIF
botao(2,0,alb_lba,alb_cba)

DEVPOS(0,1);DEVOUT('ARQUIVOS')

ocprod := TBROWSEDB(3,0,alb_lba-1,alb_cba)
colprod[1] := TBCOLUMNNEW('',{||smenu->snome})
alb_i:=0
FOR alb_i=1 TO LEN(colprod)
        ocprod:ADDCOLUMN(colprod[alb_i])
NEXT
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
WHILE .T.
        exibi_prg('SMEDALBUM')
        mensagem('<ESC>Retornar')
        alb_nkey := 0
        WHILE alb_nkey == 0         //.AND. ! ocprod:STABLE
                ocprod:FORCESTABLE()
                botao(01,17,49,119)
                WVW_DrawImage( ,01,17,49,119,ALLTRIM(smenu->smenu)+ALLTRIM(smenu->snome),.T.,.F.)
                setcor(1)
                mensagem('Utilize as Setas para BAIXO-(proxima foto) ou p/CIMA-(retorna foto) - <ENTER> p/IMPRMIR - <ESC> Retornar')
                alb_nkey := INKEY(0)
        ENDDO
        IF alb_nkey == 27
                EXIT
        ELSEIF alb_nkey == 13
                MYRUN('MSPAINT '+ALLTRIM(smenu->smenu)+ALLTRIM(smenu->snome))
        ELSE
                IF genkey(ocprod,alb_nkey,'smenu')
                        ocprod := TBROWSEDB(3,0,alb_lba-1,alb_cba)
                        colprod[1] := TBCOLUMNNEW('Arquivo',{||smenu->snome})
                        alb_i:=0
                        FOR alb_i=1 TO LEN(ocolprod)
                                ocprod:ADDCOLUMN(colprod[alb_i])
                        NEXT
                        ocprod:FORCESTABLE()
                ENDIF
        ENDIF
END
smenu->(DBCLOSEAREA())
SELE(alb_msele);IF(alb_morde>0,ORDSETFOCUS(alb_morde),)
wvw_lclosewindow()
WVW_SetMouseMove(,.T.)
IF alb_nkey == 27
        RELEASE alb_lba,alb_cba,alb_msele,alb_morde,alb_men,ocprod,ocolprod[8],alb_i,alb_nkey,alb_opcao
        RETURN NIL
ELSE
        RELEASE alb_lba,alb_cba,alb_msele,alb_morde,alb_men,ocprod,ocolprod[8],alb_i,alb_nkey,alb_opcao
        CLEAR GETS
        RETURN NIL
ENDIF
RETURN NIL
******************************* f i m *********************************************
